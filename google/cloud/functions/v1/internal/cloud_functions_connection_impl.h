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
// source: google/cloud/functions/v1/functions.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_FUNCTIONS_V1_INTERNAL_CLOUD_FUNCTIONS_CONNECTION_IMPL_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_FUNCTIONS_V1_INTERNAL_CLOUD_FUNCTIONS_CONNECTION_IMPL_H

#include "google/cloud/functions/v1/cloud_functions_connection.h"
#include "google/cloud/functions/v1/cloud_functions_connection_idempotency_policy.h"
#include "google/cloud/functions/v1/cloud_functions_options.h"
#include "google/cloud/functions/v1/internal/cloud_functions_retry_traits.h"
#include "google/cloud/functions/v1/internal/cloud_functions_stub.h"
#include "google/cloud/background_threads.h"
#include "google/cloud/backoff_policy.h"
#include "google/cloud/future.h"
#include "google/cloud/options.h"
#include "google/cloud/polling_policy.h"
#include "google/cloud/status_or.h"
#include "google/cloud/stream_range.h"
#include "google/cloud/version.h"
#include "google/longrunning/operations.grpc.pb.h"
#include <memory>

namespace google {
namespace cloud {
namespace functions_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class CloudFunctionsServiceConnectionImpl
    : public functions_v1::CloudFunctionsServiceConnection {
 public:
  ~CloudFunctionsServiceConnectionImpl() override = default;

  CloudFunctionsServiceConnectionImpl(
      std::unique_ptr<google::cloud::BackgroundThreads> background,
      std::shared_ptr<functions_v1_internal::CloudFunctionsServiceStub> stub,
      Options options);

  Options options() override { return options_; }

  StreamRange<google::cloud::functions::v1::CloudFunction> ListFunctions(
      google::cloud::functions::v1::ListFunctionsRequest request) override;

  StatusOr<google::cloud::functions::v1::CloudFunction> GetFunction(
      google::cloud::functions::v1::GetFunctionRequest const& request) override;

  future<StatusOr<google::cloud::functions::v1::CloudFunction>> CreateFunction(
      google::cloud::functions::v1::CreateFunctionRequest const& request)
      override;

  StatusOr<google::longrunning::Operation> CreateFunction(
      NoAwaitTag,
      google::cloud::functions::v1::CreateFunctionRequest const& request)
      override;

  future<StatusOr<google::cloud::functions::v1::CloudFunction>> CreateFunction(
      google::longrunning::Operation const& operation) override;

  future<StatusOr<google::cloud::functions::v1::CloudFunction>> UpdateFunction(
      google::cloud::functions::v1::UpdateFunctionRequest const& request)
      override;

  StatusOr<google::longrunning::Operation> UpdateFunction(
      NoAwaitTag,
      google::cloud::functions::v1::UpdateFunctionRequest const& request)
      override;

  future<StatusOr<google::cloud::functions::v1::CloudFunction>> UpdateFunction(
      google::longrunning::Operation const& operation) override;

  future<StatusOr<google::cloud::functions::v1::OperationMetadataV1>>
  DeleteFunction(google::cloud::functions::v1::DeleteFunctionRequest const&
                     request) override;

  StatusOr<google::longrunning::Operation> DeleteFunction(
      NoAwaitTag,
      google::cloud::functions::v1::DeleteFunctionRequest const& request)
      override;

  future<StatusOr<google::cloud::functions::v1::OperationMetadataV1>>
  DeleteFunction(google::longrunning::Operation const& operation) override;

  StatusOr<google::cloud::functions::v1::CallFunctionResponse> CallFunction(
      google::cloud::functions::v1::CallFunctionRequest const& request)
      override;

  StatusOr<google::cloud::functions::v1::GenerateUploadUrlResponse>
  GenerateUploadUrl(
      google::cloud::functions::v1::GenerateUploadUrlRequest const& request)
      override;

  StatusOr<google::cloud::functions::v1::GenerateDownloadUrlResponse>
  GenerateDownloadUrl(
      google::cloud::functions::v1::GenerateDownloadUrlRequest const& request)
      override;

  StatusOr<google::iam::v1::Policy> SetIamPolicy(
      google::iam::v1::SetIamPolicyRequest const& request) override;

  StatusOr<google::iam::v1::Policy> GetIamPolicy(
      google::iam::v1::GetIamPolicyRequest const& request) override;

  StatusOr<google::iam::v1::TestIamPermissionsResponse> TestIamPermissions(
      google::iam::v1::TestIamPermissionsRequest const& request) override;

  StreamRange<google::cloud::location::Location> ListLocations(
      google::cloud::location::ListLocationsRequest request) override;

  StreamRange<google::longrunning::Operation> ListOperations(
      google::longrunning::ListOperationsRequest request) override;

  StatusOr<google::longrunning::Operation> GetOperation(
      google::longrunning::GetOperationRequest const& request) override;

 private:
  std::unique_ptr<google::cloud::BackgroundThreads> background_;
  std::shared_ptr<functions_v1_internal::CloudFunctionsServiceStub> stub_;
  Options options_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace functions_v1_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_FUNCTIONS_V1_INTERNAL_CLOUD_FUNCTIONS_CONNECTION_IMPL_H
