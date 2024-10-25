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
// source: google/cloud/aiplatform/v1/feature_registry_service.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_AIPLATFORM_V1_INTERNAL_FEATURE_REGISTRY_METADATA_DECORATOR_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_AIPLATFORM_V1_INTERNAL_FEATURE_REGISTRY_METADATA_DECORATOR_H

#include "google/cloud/aiplatform/v1/internal/feature_registry_stub.h"
#include "google/cloud/options.h"
#include "google/cloud/version.h"
#include "google/longrunning/operations.grpc.pb.h"
#include <map>
#include <memory>
#include <string>

namespace google {
namespace cloud {
namespace aiplatform_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class FeatureRegistryServiceMetadata : public FeatureRegistryServiceStub {
 public:
  ~FeatureRegistryServiceMetadata() override = default;
  FeatureRegistryServiceMetadata(
      std::shared_ptr<FeatureRegistryServiceStub> child,
      std::multimap<std::string, std::string> fixed_metadata,
      std::string api_client_header = "");

  future<StatusOr<google::longrunning::Operation>> AsyncCreateFeatureGroup(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::aiplatform::v1::CreateFeatureGroupRequest const& request)
      override;

  StatusOr<google::longrunning::Operation> CreateFeatureGroup(
      grpc::ClientContext& context, Options options,
      google::cloud::aiplatform::v1::CreateFeatureGroupRequest const& request)
      override;

  StatusOr<google::cloud::aiplatform::v1::FeatureGroup> GetFeatureGroup(
      grpc::ClientContext& context, Options const& options,
      google::cloud::aiplatform::v1::GetFeatureGroupRequest const& request)
      override;

  StatusOr<google::cloud::aiplatform::v1::ListFeatureGroupsResponse>
  ListFeatureGroups(
      grpc::ClientContext& context, Options const& options,
      google::cloud::aiplatform::v1::ListFeatureGroupsRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncUpdateFeatureGroup(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::aiplatform::v1::UpdateFeatureGroupRequest const& request)
      override;

  StatusOr<google::longrunning::Operation> UpdateFeatureGroup(
      grpc::ClientContext& context, Options options,
      google::cloud::aiplatform::v1::UpdateFeatureGroupRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncDeleteFeatureGroup(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::aiplatform::v1::DeleteFeatureGroupRequest const& request)
      override;

  StatusOr<google::longrunning::Operation> DeleteFeatureGroup(
      grpc::ClientContext& context, Options options,
      google::cloud::aiplatform::v1::DeleteFeatureGroupRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncCreateFeature(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::aiplatform::v1::CreateFeatureRequest const& request)
      override;

  StatusOr<google::longrunning::Operation> CreateFeature(
      grpc::ClientContext& context, Options options,
      google::cloud::aiplatform::v1::CreateFeatureRequest const& request)
      override;

  StatusOr<google::cloud::aiplatform::v1::Feature> GetFeature(
      grpc::ClientContext& context, Options const& options,
      google::cloud::aiplatform::v1::GetFeatureRequest const& request) override;

  StatusOr<google::cloud::aiplatform::v1::ListFeaturesResponse> ListFeatures(
      grpc::ClientContext& context, Options const& options,
      google::cloud::aiplatform::v1::ListFeaturesRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncUpdateFeature(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::aiplatform::v1::UpdateFeatureRequest const& request)
      override;

  StatusOr<google::longrunning::Operation> UpdateFeature(
      grpc::ClientContext& context, Options options,
      google::cloud::aiplatform::v1::UpdateFeatureRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncDeleteFeature(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::aiplatform::v1::DeleteFeatureRequest const& request)
      override;

  StatusOr<google::longrunning::Operation> DeleteFeature(
      grpc::ClientContext& context, Options options,
      google::cloud::aiplatform::v1::DeleteFeatureRequest const& request)
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

  StatusOr<google::longrunning::Operation> WaitOperation(
      grpc::ClientContext& context, Options const& options,
      google::longrunning::WaitOperationRequest const& request) override;

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

  std::shared_ptr<FeatureRegistryServiceStub> child_;
  std::multimap<std::string, std::string> fixed_metadata_;
  std::string api_client_header_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace aiplatform_v1_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_AIPLATFORM_V1_INTERNAL_FEATURE_REGISTRY_METADATA_DECORATOR_H
