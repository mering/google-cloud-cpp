// Copyright 2024 Google LLC
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

// Generated by the Codegen C++ plugin.
// If you make any local changes, they will be lost.
// source: google/cloud/sql/v1/cloud_sql_available_database_versions.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_SQL_V1_INTERNAL_SQL_AVAILABLE_DATABASE_VERSIONS_REST_METADATA_DECORATOR_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_SQL_V1_INTERNAL_SQL_AVAILABLE_DATABASE_VERSIONS_REST_METADATA_DECORATOR_H

#include "google/cloud/sql/v1/cloud_sql_available_database_versions.pb.h"
#include "google/cloud/sql/v1/internal/sql_available_database_versions_rest_stub.h"
#include "google/cloud/future.h"
#include "google/cloud/rest_options.h"
#include "google/cloud/version.h"
#include <memory>
#include <string>

namespace google {
namespace cloud {
namespace sql_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class SqlAvailableDatabaseVersionsServiceRestMetadata
    : public SqlAvailableDatabaseVersionsServiceRestStub {
 public:
  ~SqlAvailableDatabaseVersionsServiceRestMetadata() override = default;
  explicit SqlAvailableDatabaseVersionsServiceRestMetadata(
      std::shared_ptr<SqlAvailableDatabaseVersionsServiceRestStub> child,
      std::string api_client_header = "");

 private:
  void SetMetadata(rest_internal::RestContext& rest_context,
                   Options const& options,
                   std::vector<std::string> const& params = {});

  std::shared_ptr<SqlAvailableDatabaseVersionsServiceRestStub> child_;
  std::string api_client_header_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace sql_v1_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_SQL_V1_INTERNAL_SQL_AVAILABLE_DATABASE_VERSIONS_REST_METADATA_DECORATOR_H
