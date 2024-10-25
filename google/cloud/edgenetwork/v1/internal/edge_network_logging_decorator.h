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
// source: google/cloud/edgenetwork/v1/service.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_EDGENETWORK_V1_INTERNAL_EDGE_NETWORK_LOGGING_DECORATOR_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_EDGENETWORK_V1_INTERNAL_EDGE_NETWORK_LOGGING_DECORATOR_H

#include "google/cloud/edgenetwork/v1/internal/edge_network_stub.h"
#include "google/cloud/tracing_options.h"
#include "google/cloud/version.h"
#include "google/longrunning/operations.grpc.pb.h"
#include <memory>
#include <set>
#include <string>

namespace google {
namespace cloud {
namespace edgenetwork_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class EdgeNetworkLogging : public EdgeNetworkStub {
 public:
  ~EdgeNetworkLogging() override = default;
  EdgeNetworkLogging(std::shared_ptr<EdgeNetworkStub> child,
                     TracingOptions tracing_options,
                     std::set<std::string> const& components);

  StatusOr<google::cloud::edgenetwork::v1::InitializeZoneResponse>
  InitializeZone(grpc::ClientContext& context, Options const& options,
                 google::cloud::edgenetwork::v1::InitializeZoneRequest const&
                     request) override;

  StatusOr<google::cloud::edgenetwork::v1::ListZonesResponse> ListZones(
      grpc::ClientContext& context, Options const& options,
      google::cloud::edgenetwork::v1::ListZonesRequest const& request) override;

  StatusOr<google::cloud::edgenetwork::v1::Zone> GetZone(
      grpc::ClientContext& context, Options const& options,
      google::cloud::edgenetwork::v1::GetZoneRequest const& request) override;

  StatusOr<google::cloud::edgenetwork::v1::ListNetworksResponse> ListNetworks(
      grpc::ClientContext& context, Options const& options,
      google::cloud::edgenetwork::v1::ListNetworksRequest const& request)
      override;

  StatusOr<google::cloud::edgenetwork::v1::Network> GetNetwork(
      grpc::ClientContext& context, Options const& options,
      google::cloud::edgenetwork::v1::GetNetworkRequest const& request)
      override;

  StatusOr<google::cloud::edgenetwork::v1::DiagnoseNetworkResponse>
  DiagnoseNetwork(grpc::ClientContext& context, Options const& options,
                  google::cloud::edgenetwork::v1::DiagnoseNetworkRequest const&
                      request) override;

  future<StatusOr<google::longrunning::Operation>> AsyncCreateNetwork(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::edgenetwork::v1::CreateNetworkRequest const& request)
      override;

  StatusOr<google::longrunning::Operation> CreateNetwork(
      grpc::ClientContext& context, Options options,
      google::cloud::edgenetwork::v1::CreateNetworkRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncDeleteNetwork(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::edgenetwork::v1::DeleteNetworkRequest const& request)
      override;

  StatusOr<google::longrunning::Operation> DeleteNetwork(
      grpc::ClientContext& context, Options options,
      google::cloud::edgenetwork::v1::DeleteNetworkRequest const& request)
      override;

  StatusOr<google::cloud::edgenetwork::v1::ListSubnetsResponse> ListSubnets(
      grpc::ClientContext& context, Options const& options,
      google::cloud::edgenetwork::v1::ListSubnetsRequest const& request)
      override;

  StatusOr<google::cloud::edgenetwork::v1::Subnet> GetSubnet(
      grpc::ClientContext& context, Options const& options,
      google::cloud::edgenetwork::v1::GetSubnetRequest const& request) override;

  future<StatusOr<google::longrunning::Operation>> AsyncCreateSubnet(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::edgenetwork::v1::CreateSubnetRequest const& request)
      override;

  StatusOr<google::longrunning::Operation> CreateSubnet(
      grpc::ClientContext& context, Options options,
      google::cloud::edgenetwork::v1::CreateSubnetRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncUpdateSubnet(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::edgenetwork::v1::UpdateSubnetRequest const& request)
      override;

  StatusOr<google::longrunning::Operation> UpdateSubnet(
      grpc::ClientContext& context, Options options,
      google::cloud::edgenetwork::v1::UpdateSubnetRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncDeleteSubnet(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::edgenetwork::v1::DeleteSubnetRequest const& request)
      override;

  StatusOr<google::longrunning::Operation> DeleteSubnet(
      grpc::ClientContext& context, Options options,
      google::cloud::edgenetwork::v1::DeleteSubnetRequest const& request)
      override;

  StatusOr<google::cloud::edgenetwork::v1::ListInterconnectsResponse>
  ListInterconnects(
      grpc::ClientContext& context, Options const& options,
      google::cloud::edgenetwork::v1::ListInterconnectsRequest const& request)
      override;

  StatusOr<google::cloud::edgenetwork::v1::Interconnect> GetInterconnect(
      grpc::ClientContext& context, Options const& options,
      google::cloud::edgenetwork::v1::GetInterconnectRequest const& request)
      override;

  StatusOr<google::cloud::edgenetwork::v1::DiagnoseInterconnectResponse>
  DiagnoseInterconnect(
      grpc::ClientContext& context, Options const& options,
      google::cloud::edgenetwork::v1::DiagnoseInterconnectRequest const&
          request) override;

  StatusOr<google::cloud::edgenetwork::v1::ListInterconnectAttachmentsResponse>
  ListInterconnectAttachments(
      grpc::ClientContext& context, Options const& options,
      google::cloud::edgenetwork::v1::ListInterconnectAttachmentsRequest const&
          request) override;

  StatusOr<google::cloud::edgenetwork::v1::InterconnectAttachment>
  GetInterconnectAttachment(
      grpc::ClientContext& context, Options const& options,
      google::cloud::edgenetwork::v1::GetInterconnectAttachmentRequest const&
          request) override;

  future<StatusOr<google::longrunning::Operation>>
  AsyncCreateInterconnectAttachment(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::edgenetwork::v1::CreateInterconnectAttachmentRequest const&
          request) override;

  StatusOr<google::longrunning::Operation> CreateInterconnectAttachment(
      grpc::ClientContext& context, Options options,
      google::cloud::edgenetwork::v1::CreateInterconnectAttachmentRequest const&
          request) override;

  future<StatusOr<google::longrunning::Operation>>
  AsyncDeleteInterconnectAttachment(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::edgenetwork::v1::DeleteInterconnectAttachmentRequest const&
          request) override;

  StatusOr<google::longrunning::Operation> DeleteInterconnectAttachment(
      grpc::ClientContext& context, Options options,
      google::cloud::edgenetwork::v1::DeleteInterconnectAttachmentRequest const&
          request) override;

  StatusOr<google::cloud::edgenetwork::v1::ListRoutersResponse> ListRouters(
      grpc::ClientContext& context, Options const& options,
      google::cloud::edgenetwork::v1::ListRoutersRequest const& request)
      override;

  StatusOr<google::cloud::edgenetwork::v1::Router> GetRouter(
      grpc::ClientContext& context, Options const& options,
      google::cloud::edgenetwork::v1::GetRouterRequest const& request) override;

  StatusOr<google::cloud::edgenetwork::v1::DiagnoseRouterResponse>
  DiagnoseRouter(grpc::ClientContext& context, Options const& options,
                 google::cloud::edgenetwork::v1::DiagnoseRouterRequest const&
                     request) override;

  future<StatusOr<google::longrunning::Operation>> AsyncCreateRouter(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::edgenetwork::v1::CreateRouterRequest const& request)
      override;

  StatusOr<google::longrunning::Operation> CreateRouter(
      grpc::ClientContext& context, Options options,
      google::cloud::edgenetwork::v1::CreateRouterRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncUpdateRouter(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::edgenetwork::v1::UpdateRouterRequest const& request)
      override;

  StatusOr<google::longrunning::Operation> UpdateRouter(
      grpc::ClientContext& context, Options options,
      google::cloud::edgenetwork::v1::UpdateRouterRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncDeleteRouter(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::edgenetwork::v1::DeleteRouterRequest const& request)
      override;

  StatusOr<google::longrunning::Operation> DeleteRouter(
      grpc::ClientContext& context, Options options,
      google::cloud::edgenetwork::v1::DeleteRouterRequest const& request)
      override;

  StatusOr<google::cloud::location::ListLocationsResponse> ListLocations(
      grpc::ClientContext& context, Options const& options,
      google::cloud::location::ListLocationsRequest const& request) override;

  StatusOr<google::cloud::location::Location> GetLocation(
      grpc::ClientContext& context, Options const& options,
      google::cloud::location::GetLocationRequest const& request) override;

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
  std::shared_ptr<EdgeNetworkStub> child_;
  TracingOptions tracing_options_;
};  // EdgeNetworkLogging

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace edgenetwork_v1_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_EDGENETWORK_V1_INTERNAL_EDGE_NETWORK_LOGGING_DECORATOR_H
