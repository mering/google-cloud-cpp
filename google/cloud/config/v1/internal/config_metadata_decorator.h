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
// source: google/cloud/config/v1/config.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_CONFIG_V1_INTERNAL_CONFIG_METADATA_DECORATOR_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_CONFIG_V1_INTERNAL_CONFIG_METADATA_DECORATOR_H

#include "google/cloud/config/v1/internal/config_stub.h"
#include "google/cloud/options.h"
#include "google/cloud/version.h"
#include "google/longrunning/operations.grpc.pb.h"
#include <map>
#include <memory>
#include <string>

namespace google {
namespace cloud {
namespace config_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class ConfigMetadata : public ConfigStub {
 public:
  ~ConfigMetadata() override = default;
  ConfigMetadata(std::shared_ptr<ConfigStub> child,
                 std::multimap<std::string, std::string> fixed_metadata,
                 std::string api_client_header = "");

  StatusOr<google::cloud::config::v1::ListDeploymentsResponse> ListDeployments(
      grpc::ClientContext& context, Options const& options,
      google::cloud::config::v1::ListDeploymentsRequest const& request)
      override;

  StatusOr<google::cloud::config::v1::Deployment> GetDeployment(
      grpc::ClientContext& context, Options const& options,
      google::cloud::config::v1::GetDeploymentRequest const& request) override;

  future<StatusOr<google::longrunning::Operation>> AsyncCreateDeployment(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::config::v1::CreateDeploymentRequest const& request)
      override;

  StatusOr<google::longrunning::Operation> CreateDeployment(
      grpc::ClientContext& context, Options options,
      google::cloud::config::v1::CreateDeploymentRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncUpdateDeployment(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::config::v1::UpdateDeploymentRequest const& request)
      override;

  StatusOr<google::longrunning::Operation> UpdateDeployment(
      grpc::ClientContext& context, Options options,
      google::cloud::config::v1::UpdateDeploymentRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncDeleteDeployment(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::config::v1::DeleteDeploymentRequest const& request)
      override;

  StatusOr<google::longrunning::Operation> DeleteDeployment(
      grpc::ClientContext& context, Options options,
      google::cloud::config::v1::DeleteDeploymentRequest const& request)
      override;

  StatusOr<google::cloud::config::v1::ListRevisionsResponse> ListRevisions(
      grpc::ClientContext& context, Options const& options,
      google::cloud::config::v1::ListRevisionsRequest const& request) override;

  StatusOr<google::cloud::config::v1::Revision> GetRevision(
      grpc::ClientContext& context, Options const& options,
      google::cloud::config::v1::GetRevisionRequest const& request) override;

  StatusOr<google::cloud::config::v1::Resource> GetResource(
      grpc::ClientContext& context, Options const& options,
      google::cloud::config::v1::GetResourceRequest const& request) override;

  StatusOr<google::cloud::config::v1::ListResourcesResponse> ListResources(
      grpc::ClientContext& context, Options const& options,
      google::cloud::config::v1::ListResourcesRequest const& request) override;

  StatusOr<google::cloud::config::v1::Statefile> ExportDeploymentStatefile(
      grpc::ClientContext& context, Options const& options,
      google::cloud::config::v1::ExportDeploymentStatefileRequest const&
          request) override;

  StatusOr<google::cloud::config::v1::Statefile> ExportRevisionStatefile(
      grpc::ClientContext& context, Options const& options,
      google::cloud::config::v1::ExportRevisionStatefileRequest const& request)
      override;

  StatusOr<google::cloud::config::v1::Statefile> ImportStatefile(
      grpc::ClientContext& context, Options const& options,
      google::cloud::config::v1::ImportStatefileRequest const& request)
      override;

  Status DeleteStatefile(
      grpc::ClientContext& context, Options const& options,
      google::cloud::config::v1::DeleteStatefileRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncLockDeployment(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::config::v1::LockDeploymentRequest const& request) override;

  StatusOr<google::longrunning::Operation> LockDeployment(
      grpc::ClientContext& context, Options options,
      google::cloud::config::v1::LockDeploymentRequest const& request) override;

  future<StatusOr<google::longrunning::Operation>> AsyncUnlockDeployment(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::config::v1::UnlockDeploymentRequest const& request)
      override;

  StatusOr<google::longrunning::Operation> UnlockDeployment(
      grpc::ClientContext& context, Options options,
      google::cloud::config::v1::UnlockDeploymentRequest const& request)
      override;

  StatusOr<google::cloud::config::v1::LockInfo> ExportLockInfo(
      grpc::ClientContext& context, Options const& options,
      google::cloud::config::v1::ExportLockInfoRequest const& request) override;

  future<StatusOr<google::longrunning::Operation>> AsyncCreatePreview(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::config::v1::CreatePreviewRequest const& request) override;

  StatusOr<google::longrunning::Operation> CreatePreview(
      grpc::ClientContext& context, Options options,
      google::cloud::config::v1::CreatePreviewRequest const& request) override;

  StatusOr<google::cloud::config::v1::Preview> GetPreview(
      grpc::ClientContext& context, Options const& options,
      google::cloud::config::v1::GetPreviewRequest const& request) override;

  StatusOr<google::cloud::config::v1::ListPreviewsResponse> ListPreviews(
      grpc::ClientContext& context, Options const& options,
      google::cloud::config::v1::ListPreviewsRequest const& request) override;

  future<StatusOr<google::longrunning::Operation>> AsyncDeletePreview(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::config::v1::DeletePreviewRequest const& request) override;

  StatusOr<google::longrunning::Operation> DeletePreview(
      grpc::ClientContext& context, Options options,
      google::cloud::config::v1::DeletePreviewRequest const& request) override;

  StatusOr<google::cloud::config::v1::ExportPreviewResultResponse>
  ExportPreviewResult(
      grpc::ClientContext& context, Options const& options,
      google::cloud::config::v1::ExportPreviewResultRequest const& request)
      override;

  StatusOr<google::cloud::config::v1::ListTerraformVersionsResponse>
  ListTerraformVersions(
      grpc::ClientContext& context, Options const& options,
      google::cloud::config::v1::ListTerraformVersionsRequest const& request)
      override;

  StatusOr<google::cloud::config::v1::TerraformVersion> GetTerraformVersion(
      grpc::ClientContext& context, Options const& options,
      google::cloud::config::v1::GetTerraformVersionRequest const& request)
      override;

  StatusOr<google::cloud::location::ListLocationsResponse> ListLocations(
      grpc::ClientContext& context, Options const& options,
      google::cloud::location::ListLocationsRequest const& request) override;

  StatusOr<google::cloud::location::Location> GetLocation(
      grpc::ClientContext& context, Options const& options,
      google::cloud::location::GetLocationRequest const& request) override;

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

  Status DeleteOperation(
      grpc::ClientContext& context, Options const& options,
      google::longrunning::DeleteOperationRequest const& request) override;

  Status CancelOperation(
      grpc::ClientContext& context, Options const& options,
      google::longrunning::CancelOperationRequest const& request) override;

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
  void SetMetadata(grpc::ClientContext& context, Options const& options,
                   std::string const& request_params);
  void SetMetadata(grpc::ClientContext& context, Options const& options);

  std::shared_ptr<ConfigStub> child_;
  std::multimap<std::string, std::string> fixed_metadata_;
  std::string api_client_header_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace config_v1_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_CONFIG_V1_INTERNAL_CONFIG_METADATA_DECORATOR_H
