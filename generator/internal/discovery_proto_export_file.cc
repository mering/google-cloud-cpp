// Copyright 2023 Google LLC
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//      https://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#include "generator/internal/discovery_proto_export_file.h"
#include "generator/internal/codegen_utils.h"
#include "google/cloud/internal/absl_str_cat_quiet.h"
#include "google/cloud/internal/absl_str_replace_quiet.h"
#include "google/protobuf/io/printer.h"
#include "google/protobuf/io/zero_copy_stream_impl.h"
#include <fstream>

namespace google {
namespace cloud {
namespace generator_internal {

DiscoveryProtoExportFile::DiscoveryProtoExportFile(
    std::string output_file_path, std::string relative_file_path,
    std::set<std::string> proto_includes)
    : output_file_path_(std::move(output_file_path)),
      relative_file_path_(std::move(relative_file_path)),
      proto_includes_(std::move(proto_includes)) {}

Status DiscoveryProtoExportFile::FormatFile(std::ostream& output_stream) const {
  std::map<std::string, std::string> const vars = {
      {"copyright_year", CurrentCopyrightYear()},
      {"header_include_guard", FormatHeaderIncludeGuard(relative_file_path_)}};
  google::protobuf::io::OstreamOutputStream output(&output_stream);
  google::protobuf::io::Printer printer(&output, '$');
  printer.Print(vars, CopyrightLicenseFileHeader());
  printer.Print(vars, R"""(
// Generated by the Codegen C++ plugin.
// If you make any local changes, they will be lost.

// The contents of internal/common_xxx.proto files are subject to change, and it
// is not recommended to include their respective headers directly. Including
// the <service>.pb.h file transitively provides all the necessary proto
// definitions. However, it is not IWYU friendly. Including this header file
// uses IWYU pragmas to export the internal/common_xxx.pb.h files as an
// IWYU-friendly alternative.

#ifndef $header_include_guard$
#define $header_include_guard$

)""");
  printer.Print("// IWYU pragma: begin_exports\n");
  for (auto const& p : proto_includes_) {
    printer.Print("#include <");
    printer.Print(absl::StrReplaceAll(p, {{".proto", ".pb.h"}}));
    printer.Print(">\n");
  }
  printer.Print("// IWYU pragma: end_exports\n");
  printer.Print(vars, R"""(
#endif  // $header_include_guard$
)""");
  return {};
}

Status DiscoveryProtoExportFile::WriteFile() const {
  std::string version_dir_path =
      output_file_path_.substr(0, output_file_path_.rfind('/'));
  std::string service_dir_path =
      version_dir_path.substr(0, version_dir_path.rfind('/'));
  MakeDirectory(service_dir_path);
  MakeDirectory(version_dir_path);
  std::ofstream os(output_file_path_);
  return FormatFile(os);
}

}  // namespace generator_internal
}  // namespace cloud
}  // namespace google
