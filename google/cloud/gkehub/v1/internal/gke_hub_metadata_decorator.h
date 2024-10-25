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
// source: google/cloud/gkehub/v1/service.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_GKEHUB_V1_INTERNAL_GKE_HUB_METADATA_DECORATOR_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_GKEHUB_V1_INTERNAL_GKE_HUB_METADATA_DECORATOR_H

#include "google/cloud/gkehub/v1/internal/gke_hub_stub.h"
#include "google/cloud/options.h"
#include "google/cloud/version.h"
#include "google/longrunning/operations.grpc.pb.h"
#include <map>
#include <memory>
#include <string>

namespace google {
namespace cloud {
namespace gkehub_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class GkeHubMetadata : public GkeHubStub {
 public:
  ~GkeHubMetadata() override = default;
  GkeHubMetadata(std::shared_ptr<GkeHubStub> child,
                 std::multimap<std::string, std::string> fixed_metadata,
                 std::string api_client_header = "");

  StatusOr<google::cloud::gkehub::v1::ListMembershipsResponse> ListMemberships(
      grpc::ClientContext& context, Options const& options,
      google::cloud::gkehub::v1::ListMembershipsRequest const& request)
      override;

  StatusOr<google::cloud::gkehub::v1::ListFeaturesResponse> ListFeatures(
      grpc::ClientContext& context, Options const& options,
      google::cloud::gkehub::v1::ListFeaturesRequest const& request) override;

  StatusOr<google::cloud::gkehub::v1::Membership> GetMembership(
      grpc::ClientContext& context, Options const& options,
      google::cloud::gkehub::v1::GetMembershipRequest const& request) override;

  StatusOr<google::cloud::gkehub::v1::Feature> GetFeature(
      grpc::ClientContext& context, Options const& options,
      google::cloud::gkehub::v1::GetFeatureRequest const& request) override;

  future<StatusOr<google::longrunning::Operation>> AsyncCreateMembership(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::gkehub::v1::CreateMembershipRequest const& request)
      override;

  StatusOr<google::longrunning::Operation> CreateMembership(
      grpc::ClientContext& context, Options options,
      google::cloud::gkehub::v1::CreateMembershipRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncCreateFeature(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::gkehub::v1::CreateFeatureRequest const& request) override;

  StatusOr<google::longrunning::Operation> CreateFeature(
      grpc::ClientContext& context, Options options,
      google::cloud::gkehub::v1::CreateFeatureRequest const& request) override;

  future<StatusOr<google::longrunning::Operation>> AsyncDeleteMembership(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::gkehub::v1::DeleteMembershipRequest const& request)
      override;

  StatusOr<google::longrunning::Operation> DeleteMembership(
      grpc::ClientContext& context, Options options,
      google::cloud::gkehub::v1::DeleteMembershipRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncDeleteFeature(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::gkehub::v1::DeleteFeatureRequest const& request) override;

  StatusOr<google::longrunning::Operation> DeleteFeature(
      grpc::ClientContext& context, Options options,
      google::cloud::gkehub::v1::DeleteFeatureRequest const& request) override;

  future<StatusOr<google::longrunning::Operation>> AsyncUpdateMembership(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::gkehub::v1::UpdateMembershipRequest const& request)
      override;

  StatusOr<google::longrunning::Operation> UpdateMembership(
      grpc::ClientContext& context, Options options,
      google::cloud::gkehub::v1::UpdateMembershipRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncUpdateFeature(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::gkehub::v1::UpdateFeatureRequest const& request) override;

  StatusOr<google::longrunning::Operation> UpdateFeature(
      grpc::ClientContext& context, Options options,
      google::cloud::gkehub::v1::UpdateFeatureRequest const& request) override;

  StatusOr<google::cloud::gkehub::v1::GenerateConnectManifestResponse>
  GenerateConnectManifest(
      grpc::ClientContext& context, Options const& options,
      google::cloud::gkehub::v1::GenerateConnectManifestRequest const& request)
      override;

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

  std::shared_ptr<GkeHubStub> child_;
  std::multimap<std::string, std::string> fixed_metadata_;
  std::string api_client_header_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace gkehub_v1_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_GKEHUB_V1_INTERNAL_GKE_HUB_METADATA_DECORATOR_H
