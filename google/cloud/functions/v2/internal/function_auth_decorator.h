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

// Generated by the Codegen C++ plugin.
// If you make any local changes, they will be lost.
// source: google/cloud/functions/v2/functions.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_FUNCTIONS_V2_INTERNAL_FUNCTION_AUTH_DECORATOR_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_FUNCTIONS_V2_INTERNAL_FUNCTION_AUTH_DECORATOR_H

#include "google/cloud/functions/v2/internal/function_stub.h"
#include "google/cloud/internal/unified_grpc_credentials.h"
#include "google/cloud/version.h"
#include "google/longrunning/operations.grpc.pb.h"
#include <memory>
#include <set>
#include <string>

namespace google {
namespace cloud {
namespace functions_v2_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class FunctionServiceAuth : public FunctionServiceStub {
 public:
  ~FunctionServiceAuth() override = default;
  FunctionServiceAuth(
      std::shared_ptr<google::cloud::internal::GrpcAuthenticationStrategy> auth,
      std::shared_ptr<FunctionServiceStub> child);

  StatusOr<google::cloud::functions::v2::Function> GetFunction(
      grpc::ClientContext& context, Options const& options,
      google::cloud::functions::v2::GetFunctionRequest const& request) override;

  StatusOr<google::cloud::functions::v2::ListFunctionsResponse> ListFunctions(
      grpc::ClientContext& context, Options const& options,
      google::cloud::functions::v2::ListFunctionsRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncCreateFunction(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::functions::v2::CreateFunctionRequest const& request)
      override;

  StatusOr<google::longrunning::Operation> CreateFunction(
      grpc::ClientContext& context, Options options,
      google::cloud::functions::v2::CreateFunctionRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncUpdateFunction(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::functions::v2::UpdateFunctionRequest const& request)
      override;

  StatusOr<google::longrunning::Operation> UpdateFunction(
      grpc::ClientContext& context, Options options,
      google::cloud::functions::v2::UpdateFunctionRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncDeleteFunction(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::functions::v2::DeleteFunctionRequest const& request)
      override;

  StatusOr<google::longrunning::Operation> DeleteFunction(
      grpc::ClientContext& context, Options options,
      google::cloud::functions::v2::DeleteFunctionRequest const& request)
      override;

  StatusOr<google::cloud::functions::v2::GenerateUploadUrlResponse>
  GenerateUploadUrl(
      grpc::ClientContext& context, Options const& options,
      google::cloud::functions::v2::GenerateUploadUrlRequest const& request)
      override;

  StatusOr<google::cloud::functions::v2::GenerateDownloadUrlResponse>
  GenerateDownloadUrl(
      grpc::ClientContext& context, Options const& options,
      google::cloud::functions::v2::GenerateDownloadUrlRequest const& request)
      override;

  StatusOr<google::cloud::functions::v2::ListRuntimesResponse> ListRuntimes(
      grpc::ClientContext& context, Options const& options,
      google::cloud::functions::v2::ListRuntimesRequest const& request)
      override;

  StatusOr<google::cloud::location::ListLocationsResponse> ListLocations(
      grpc::ClientContext& context, Options const& options,
      google::cloud::location::ListLocationsRequest const& request) override;

  StatusOr<google::iam::v1::Policy> SetIamPolicy(
      grpc::ClientContext& context, Options const& options,
      google::iam::v1::SetIamPolicyRequest const& request) override;

  StatusOr<google::iam::v1::Policy> GetIamPolicy(
      grpc::ClientContext& context, Options const& options,
      google::iam::v1::GetIamPolicyRequest const& request) override;

  StatusOr<google::iam::v1::TestIamPermissionsResponse> TestIamPermissions(
      grpc::ClientContext& context, Options const& options,
      google::iam::v1::TestIamPermissionsRequest const& request) override;

  StatusOr<google::longrunning::ListOperationsResponse> ListOperations(
      grpc::ClientContext& context, Options const& options,
      google::longrunning::ListOperationsRequest const& request) override;

  StatusOr<google::longrunning::Operation> GetOperation(
      grpc::ClientContext& context, Options const& options,
      google::longrunning::GetOperationRequest const& request) override;

  future<StatusOr<google::longrunning::Operation>> AsyncGetOperation(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::longrunning::GetOperationRequest const& request) override;

  future<Status> AsyncCancelOperation(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::longrunning::CancelOperationRequest const& request) override;

 private:
  std::shared_ptr<google::cloud::internal::GrpcAuthenticationStrategy> auth_;
  std::shared_ptr<FunctionServiceStub> child_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace functions_v2_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_FUNCTIONS_V2_INTERNAL_FUNCTION_AUTH_DECORATOR_H
