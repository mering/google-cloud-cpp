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
// source: google/cloud/compute/networks/v1/networks.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_NETWORKS_V1_INTERNAL_NETWORKS_REST_METADATA_DECORATOR_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_NETWORKS_V1_INTERNAL_NETWORKS_REST_METADATA_DECORATOR_H

#include "google/cloud/compute/networks/v1/internal/networks_rest_stub.h"
#include "google/cloud/future.h"
#include "google/cloud/rest_options.h"
#include "google/cloud/version.h"
#include "google/cloud/compute/global_operations/v1/global_operations.pb.h"
#include "google/cloud/compute/networks/v1/networks.pb.h"
#include <memory>
#include <string>

namespace google {
namespace cloud {
namespace compute_networks_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class NetworksRestMetadata : public NetworksRestStub {
 public:
  ~NetworksRestMetadata() override = default;
  explicit NetworksRestMetadata(std::shared_ptr<NetworksRestStub> child,
                                std::string api_client_header = "");

  google::cloud::future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  AsyncAddPeering(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<google::cloud::rest_internal::RestContext> rest_context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::cpp::compute::networks::v1::AddPeeringRequest const&
          request) override;

  StatusOr<google::cloud::cpp::compute::v1::Operation> AddPeering(
      google::cloud::rest_internal::RestContext& rest_context,
      Options const& options,
      google::cloud::cpp::compute::networks::v1::AddPeeringRequest const&
          request) override;

  google::cloud::future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  AsyncDeleteNetwork(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<google::cloud::rest_internal::RestContext> rest_context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::cpp::compute::networks::v1::DeleteNetworkRequest const&
          request) override;

  StatusOr<google::cloud::cpp::compute::v1::Operation> DeleteNetwork(
      google::cloud::rest_internal::RestContext& rest_context,
      Options const& options,
      google::cloud::cpp::compute::networks::v1::DeleteNetworkRequest const&
          request) override;

  StatusOr<google::cloud::cpp::compute::v1::Network> GetNetwork(
      google::cloud::rest_internal::RestContext& rest_context,
      Options const& options,
      google::cloud::cpp::compute::networks::v1::GetNetworkRequest const&
          request) override;

  StatusOr<
      google::cloud::cpp::compute::v1::NetworksGetEffectiveFirewallsResponse>
  GetEffectiveFirewalls(
      google::cloud::rest_internal::RestContext& rest_context,
      Options const& options,
      google::cloud::cpp::compute::networks::v1::
          GetEffectiveFirewallsRequest const& request) override;

  google::cloud::future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  AsyncInsertNetwork(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<google::cloud::rest_internal::RestContext> rest_context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::cpp::compute::networks::v1::InsertNetworkRequest const&
          request) override;

  StatusOr<google::cloud::cpp::compute::v1::Operation> InsertNetwork(
      google::cloud::rest_internal::RestContext& rest_context,
      Options const& options,
      google::cloud::cpp::compute::networks::v1::InsertNetworkRequest const&
          request) override;

  StatusOr<google::cloud::cpp::compute::v1::NetworkList> ListNetworks(
      google::cloud::rest_internal::RestContext& rest_context,
      Options const& options,
      google::cloud::cpp::compute::networks::v1::ListNetworksRequest const&
          request) override;

  StatusOr<google::cloud::cpp::compute::v1::ExchangedPeeringRoutesList>
  ListPeeringRoutes(
      google::cloud::rest_internal::RestContext& rest_context,
      Options const& options,
      google::cloud::cpp::compute::networks::v1::ListPeeringRoutesRequest const&
          request) override;

  google::cloud::future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  AsyncPatchNetwork(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<google::cloud::rest_internal::RestContext> rest_context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::cpp::compute::networks::v1::PatchNetworkRequest const&
          request) override;

  StatusOr<google::cloud::cpp::compute::v1::Operation> PatchNetwork(
      google::cloud::rest_internal::RestContext& rest_context,
      Options const& options,
      google::cloud::cpp::compute::networks::v1::PatchNetworkRequest const&
          request) override;

  google::cloud::future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  AsyncRemovePeering(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<google::cloud::rest_internal::RestContext> rest_context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::cpp::compute::networks::v1::RemovePeeringRequest const&
          request) override;

  StatusOr<google::cloud::cpp::compute::v1::Operation> RemovePeering(
      google::cloud::rest_internal::RestContext& rest_context,
      Options const& options,
      google::cloud::cpp::compute::networks::v1::RemovePeeringRequest const&
          request) override;

  google::cloud::future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  AsyncSwitchToCustomMode(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<google::cloud::rest_internal::RestContext> rest_context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::cpp::compute::networks::v1::
          SwitchToCustomModeRequest const& request) override;

  StatusOr<google::cloud::cpp::compute::v1::Operation> SwitchToCustomMode(
      google::cloud::rest_internal::RestContext& rest_context,
      Options const& options,
      google::cloud::cpp::compute::networks::v1::
          SwitchToCustomModeRequest const& request) override;

  google::cloud::future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  AsyncUpdatePeering(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<google::cloud::rest_internal::RestContext> rest_context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::cpp::compute::networks::v1::UpdatePeeringRequest const&
          request) override;

  StatusOr<google::cloud::cpp::compute::v1::Operation> UpdatePeering(
      google::cloud::rest_internal::RestContext& rest_context,
      Options const& options,
      google::cloud::cpp::compute::networks::v1::UpdatePeeringRequest const&
          request) override;

  google::cloud::future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  AsyncGetOperation(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<google::cloud::rest_internal::RestContext> rest_context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::cpp::compute::global_operations::v1::
          GetOperationRequest const& request) override;

  google::cloud::future<Status> AsyncCancelOperation(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<google::cloud::rest_internal::RestContext> rest_context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::cpp::compute::global_operations::v1::
          DeleteOperationRequest const& request) override;

 private:
  void SetMetadata(rest_internal::RestContext& rest_context,
                   Options const& options,
                   std::vector<std::string> const& params = {});

  std::shared_ptr<NetworksRestStub> child_;
  std::string api_client_header_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_networks_v1_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_NETWORKS_V1_INTERNAL_NETWORKS_REST_METADATA_DECORATOR_H
