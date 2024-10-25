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

#include "google/cloud/workflows/executions/v1/internal/executions_auth_decorator.h"
#include "google/cloud/workflows/executions/v1/executions.grpc.pb.h"
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace workflows_executions_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

ExecutionsAuth::ExecutionsAuth(
    std::shared_ptr<google::cloud::internal::GrpcAuthenticationStrategy> auth,
    std::shared_ptr<ExecutionsStub> child)
    : auth_(std::move(auth)), child_(std::move(child)) {}

StatusOr<google::cloud::workflows::executions::v1::ListExecutionsResponse>
ExecutionsAuth::ListExecutions(
    grpc::ClientContext& context, Options const& options,
    google::cloud::workflows::executions::v1::ListExecutionsRequest const&
        request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->ListExecutions(context, options, request);
}

StatusOr<google::cloud::workflows::executions::v1::Execution>
ExecutionsAuth::CreateExecution(
    grpc::ClientContext& context, Options const& options,
    google::cloud::workflows::executions::v1::CreateExecutionRequest const&
        request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->CreateExecution(context, options, request);
}

StatusOr<google::cloud::workflows::executions::v1::Execution>
ExecutionsAuth::GetExecution(
    grpc::ClientContext& context, Options const& options,
    google::cloud::workflows::executions::v1::GetExecutionRequest const&
        request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->GetExecution(context, options, request);
}

StatusOr<google::cloud::workflows::executions::v1::Execution>
ExecutionsAuth::CancelExecution(
    grpc::ClientContext& context, Options const& options,
    google::cloud::workflows::executions::v1::CancelExecutionRequest const&
        request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->CancelExecution(context, options, request);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace workflows_executions_v1_internal
}  // namespace cloud
}  // namespace google
