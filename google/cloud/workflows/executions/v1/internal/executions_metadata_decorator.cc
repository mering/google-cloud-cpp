// Copyright 2022 Google LLC
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
// source: google/cloud/workflows/executions/v1/executions.proto

#include "google/cloud/workflows/executions/v1/internal/executions_metadata_decorator.h"
#include "google/cloud/grpc_options.h"
#include "google/cloud/internal/absl_str_cat_quiet.h"
#include "google/cloud/internal/api_client_header.h"
#include "google/cloud/internal/url_encode.h"
#include "google/cloud/status_or.h"
#include "google/cloud/workflows/executions/v1/executions.grpc.pb.h"
#include <memory>
#include <string>
#include <utility>
#include <vector>

namespace google {
namespace cloud {
namespace workflows_executions_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

ExecutionsMetadata::ExecutionsMetadata(
    std::shared_ptr<ExecutionsStub> child,
    std::multimap<std::string, std::string> fixed_metadata,
    std::string api_client_header)
    : child_(std::move(child)),
      fixed_metadata_(std::move(fixed_metadata)),
      api_client_header_(
          api_client_header.empty()
              ? google::cloud::internal::GeneratedLibClientHeader()
              : std::move(api_client_header)) {}

StatusOr<google::cloud::workflows::executions::v1::ListExecutionsResponse>
ExecutionsMetadata::ListExecutions(
    grpc::ClientContext& context, Options const& options,
    google::cloud::workflows::executions::v1::ListExecutionsRequest const&
        request) {
  SetMetadata(context, options,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->ListExecutions(context, options, request);
}

StatusOr<google::cloud::workflows::executions::v1::Execution>
ExecutionsMetadata::CreateExecution(
    grpc::ClientContext& context, Options const& options,
    google::cloud::workflows::executions::v1::CreateExecutionRequest const&
        request) {
  SetMetadata(context, options,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->CreateExecution(context, options, request);
}

StatusOr<google::cloud::workflows::executions::v1::Execution>
ExecutionsMetadata::GetExecution(
    grpc::ClientContext& context, Options const& options,
    google::cloud::workflows::executions::v1::GetExecutionRequest const&
        request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->GetExecution(context, options, request);
}

StatusOr<google::cloud::workflows::executions::v1::Execution>
ExecutionsMetadata::CancelExecution(
    grpc::ClientContext& context, Options const& options,
    google::cloud::workflows::executions::v1::CancelExecutionRequest const&
        request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->CancelExecution(context, options, request);
}

void ExecutionsMetadata::SetMetadata(grpc::ClientContext& context,
                                     Options const& options,
                                     std::string const& request_params) {
  context.AddMetadata("x-goog-request-params", request_params);
  SetMetadata(context, options);
}

void ExecutionsMetadata::SetMetadata(grpc::ClientContext& context,
                                     Options const& options) {
  google::cloud::internal::SetMetadata(context, options, fixed_metadata_,
                                       api_client_header_);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace workflows_executions_v1_internal
}  // namespace cloud
}  // namespace google
