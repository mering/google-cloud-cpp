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

#include "google/cloud/edgenetwork/v1/edge_network_client.h"
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace edgenetwork_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

EdgeNetworkClient::EdgeNetworkClient(
    std::shared_ptr<EdgeNetworkConnection> connection, Options opts)
    : connection_(std::move(connection)),
      options_(
          internal::MergeOptions(std::move(opts), connection_->options())) {}
EdgeNetworkClient::~EdgeNetworkClient() = default;

StatusOr<google::cloud::edgenetwork::v1::InitializeZoneResponse>
EdgeNetworkClient::InitializeZone(std::string const& name, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::edgenetwork::v1::InitializeZoneRequest request;
  request.set_name(name);
  return connection_->InitializeZone(request);
}

StatusOr<google::cloud::edgenetwork::v1::InitializeZoneResponse>
EdgeNetworkClient::InitializeZone(
    google::cloud::edgenetwork::v1::InitializeZoneRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->InitializeZone(request);
}

StreamRange<google::cloud::edgenetwork::v1::Zone> EdgeNetworkClient::ListZones(
    std::string const& parent, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::edgenetwork::v1::ListZonesRequest request;
  request.set_parent(parent);
  return connection_->ListZones(request);
}

StreamRange<google::cloud::edgenetwork::v1::Zone> EdgeNetworkClient::ListZones(
    google::cloud::edgenetwork::v1::ListZonesRequest request, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->ListZones(std::move(request));
}

StatusOr<google::cloud::edgenetwork::v1::Zone> EdgeNetworkClient::GetZone(
    std::string const& name, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::edgenetwork::v1::GetZoneRequest request;
  request.set_name(name);
  return connection_->GetZone(request);
}

StatusOr<google::cloud::edgenetwork::v1::Zone> EdgeNetworkClient::GetZone(
    google::cloud::edgenetwork::v1::GetZoneRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->GetZone(request);
}

StreamRange<google::cloud::edgenetwork::v1::Network>
EdgeNetworkClient::ListNetworks(std::string const& parent, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::edgenetwork::v1::ListNetworksRequest request;
  request.set_parent(parent);
  return connection_->ListNetworks(request);
}

StreamRange<google::cloud::edgenetwork::v1::Network>
EdgeNetworkClient::ListNetworks(
    google::cloud::edgenetwork::v1::ListNetworksRequest request, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->ListNetworks(std::move(request));
}

StatusOr<google::cloud::edgenetwork::v1::Network> EdgeNetworkClient::GetNetwork(
    std::string const& name, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::edgenetwork::v1::GetNetworkRequest request;
  request.set_name(name);
  return connection_->GetNetwork(request);
}

StatusOr<google::cloud::edgenetwork::v1::Network> EdgeNetworkClient::GetNetwork(
    google::cloud::edgenetwork::v1::GetNetworkRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->GetNetwork(request);
}

StatusOr<google::cloud::edgenetwork::v1::DiagnoseNetworkResponse>
EdgeNetworkClient::DiagnoseNetwork(std::string const& name, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::edgenetwork::v1::DiagnoseNetworkRequest request;
  request.set_name(name);
  return connection_->DiagnoseNetwork(request);
}

StatusOr<google::cloud::edgenetwork::v1::DiagnoseNetworkResponse>
EdgeNetworkClient::DiagnoseNetwork(
    google::cloud::edgenetwork::v1::DiagnoseNetworkRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->DiagnoseNetwork(request);
}

future<StatusOr<google::cloud::edgenetwork::v1::Network>>
EdgeNetworkClient::CreateNetwork(
    std::string const& parent,
    google::cloud::edgenetwork::v1::Network const& network,
    std::string const& network_id, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::edgenetwork::v1::CreateNetworkRequest request;
  request.set_parent(parent);
  *request.mutable_network() = network;
  request.set_network_id(network_id);
  return connection_->CreateNetwork(request);
}

StatusOr<google::longrunning::Operation> EdgeNetworkClient::CreateNetwork(
    ExperimentalTag, NoAwaitTag, std::string const& parent,
    google::cloud::edgenetwork::v1::Network const& network,
    std::string const& network_id, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::edgenetwork::v1::CreateNetworkRequest request;
  request.set_parent(parent);
  *request.mutable_network() = network;
  request.set_network_id(network_id);
  return connection_->CreateNetwork(ExperimentalTag{}, NoAwaitTag{}, request);
}

future<StatusOr<google::cloud::edgenetwork::v1::Network>>
EdgeNetworkClient::CreateNetwork(
    google::cloud::edgenetwork::v1::CreateNetworkRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->CreateNetwork(request);
}

StatusOr<google::longrunning::Operation> EdgeNetworkClient::CreateNetwork(
    ExperimentalTag, NoAwaitTag,
    google::cloud::edgenetwork::v1::CreateNetworkRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->CreateNetwork(ExperimentalTag{}, NoAwaitTag{}, request);
}

future<StatusOr<google::cloud::edgenetwork::v1::Network>>
EdgeNetworkClient::CreateNetwork(
    ExperimentalTag, google::longrunning::Operation const& operation,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->CreateNetwork(ExperimentalTag{}, operation);
}

future<StatusOr<google::cloud::edgenetwork::v1::OperationMetadata>>
EdgeNetworkClient::DeleteNetwork(std::string const& name, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::edgenetwork::v1::DeleteNetworkRequest request;
  request.set_name(name);
  return connection_->DeleteNetwork(request);
}

StatusOr<google::longrunning::Operation> EdgeNetworkClient::DeleteNetwork(
    ExperimentalTag, NoAwaitTag, std::string const& name, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::edgenetwork::v1::DeleteNetworkRequest request;
  request.set_name(name);
  return connection_->DeleteNetwork(ExperimentalTag{}, NoAwaitTag{}, request);
}

future<StatusOr<google::cloud::edgenetwork::v1::OperationMetadata>>
EdgeNetworkClient::DeleteNetwork(
    google::cloud::edgenetwork::v1::DeleteNetworkRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->DeleteNetwork(request);
}

StatusOr<google::longrunning::Operation> EdgeNetworkClient::DeleteNetwork(
    ExperimentalTag, NoAwaitTag,
    google::cloud::edgenetwork::v1::DeleteNetworkRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->DeleteNetwork(ExperimentalTag{}, NoAwaitTag{}, request);
}

future<StatusOr<google::cloud::edgenetwork::v1::OperationMetadata>>
EdgeNetworkClient::DeleteNetwork(
    ExperimentalTag, google::longrunning::Operation const& operation,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->DeleteNetwork(ExperimentalTag{}, operation);
}

StreamRange<google::cloud::edgenetwork::v1::Subnet>
EdgeNetworkClient::ListSubnets(std::string const& parent, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::edgenetwork::v1::ListSubnetsRequest request;
  request.set_parent(parent);
  return connection_->ListSubnets(request);
}

StreamRange<google::cloud::edgenetwork::v1::Subnet>
EdgeNetworkClient::ListSubnets(
    google::cloud::edgenetwork::v1::ListSubnetsRequest request, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->ListSubnets(std::move(request));
}

StatusOr<google::cloud::edgenetwork::v1::Subnet> EdgeNetworkClient::GetSubnet(
    std::string const& name, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::edgenetwork::v1::GetSubnetRequest request;
  request.set_name(name);
  return connection_->GetSubnet(request);
}

StatusOr<google::cloud::edgenetwork::v1::Subnet> EdgeNetworkClient::GetSubnet(
    google::cloud::edgenetwork::v1::GetSubnetRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->GetSubnet(request);
}

future<StatusOr<google::cloud::edgenetwork::v1::Subnet>>
EdgeNetworkClient::CreateSubnet(
    std::string const& parent,
    google::cloud::edgenetwork::v1::Subnet const& subnet,
    std::string const& subnet_id, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::edgenetwork::v1::CreateSubnetRequest request;
  request.set_parent(parent);
  *request.mutable_subnet() = subnet;
  request.set_subnet_id(subnet_id);
  return connection_->CreateSubnet(request);
}

StatusOr<google::longrunning::Operation> EdgeNetworkClient::CreateSubnet(
    ExperimentalTag, NoAwaitTag, std::string const& parent,
    google::cloud::edgenetwork::v1::Subnet const& subnet,
    std::string const& subnet_id, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::edgenetwork::v1::CreateSubnetRequest request;
  request.set_parent(parent);
  *request.mutable_subnet() = subnet;
  request.set_subnet_id(subnet_id);
  return connection_->CreateSubnet(ExperimentalTag{}, NoAwaitTag{}, request);
}

future<StatusOr<google::cloud::edgenetwork::v1::Subnet>>
EdgeNetworkClient::CreateSubnet(
    google::cloud::edgenetwork::v1::CreateSubnetRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->CreateSubnet(request);
}

StatusOr<google::longrunning::Operation> EdgeNetworkClient::CreateSubnet(
    ExperimentalTag, NoAwaitTag,
    google::cloud::edgenetwork::v1::CreateSubnetRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->CreateSubnet(ExperimentalTag{}, NoAwaitTag{}, request);
}

future<StatusOr<google::cloud::edgenetwork::v1::Subnet>>
EdgeNetworkClient::CreateSubnet(ExperimentalTag,
                                google::longrunning::Operation const& operation,
                                Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->CreateSubnet(ExperimentalTag{}, operation);
}

future<StatusOr<google::cloud::edgenetwork::v1::Subnet>>
EdgeNetworkClient::UpdateSubnet(
    google::cloud::edgenetwork::v1::Subnet const& subnet,
    google::protobuf::FieldMask const& update_mask, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::edgenetwork::v1::UpdateSubnetRequest request;
  *request.mutable_subnet() = subnet;
  *request.mutable_update_mask() = update_mask;
  return connection_->UpdateSubnet(request);
}

StatusOr<google::longrunning::Operation> EdgeNetworkClient::UpdateSubnet(
    ExperimentalTag, NoAwaitTag,
    google::cloud::edgenetwork::v1::Subnet const& subnet,
    google::protobuf::FieldMask const& update_mask, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::edgenetwork::v1::UpdateSubnetRequest request;
  *request.mutable_subnet() = subnet;
  *request.mutable_update_mask() = update_mask;
  return connection_->UpdateSubnet(ExperimentalTag{}, NoAwaitTag{}, request);
}

future<StatusOr<google::cloud::edgenetwork::v1::Subnet>>
EdgeNetworkClient::UpdateSubnet(
    google::cloud::edgenetwork::v1::UpdateSubnetRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->UpdateSubnet(request);
}

StatusOr<google::longrunning::Operation> EdgeNetworkClient::UpdateSubnet(
    ExperimentalTag, NoAwaitTag,
    google::cloud::edgenetwork::v1::UpdateSubnetRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->UpdateSubnet(ExperimentalTag{}, NoAwaitTag{}, request);
}

future<StatusOr<google::cloud::edgenetwork::v1::Subnet>>
EdgeNetworkClient::UpdateSubnet(ExperimentalTag,
                                google::longrunning::Operation const& operation,
                                Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->UpdateSubnet(ExperimentalTag{}, operation);
}

future<StatusOr<google::cloud::edgenetwork::v1::OperationMetadata>>
EdgeNetworkClient::DeleteSubnet(std::string const& name, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::edgenetwork::v1::DeleteSubnetRequest request;
  request.set_name(name);
  return connection_->DeleteSubnet(request);
}

StatusOr<google::longrunning::Operation> EdgeNetworkClient::DeleteSubnet(
    ExperimentalTag, NoAwaitTag, std::string const& name, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::edgenetwork::v1::DeleteSubnetRequest request;
  request.set_name(name);
  return connection_->DeleteSubnet(ExperimentalTag{}, NoAwaitTag{}, request);
}

future<StatusOr<google::cloud::edgenetwork::v1::OperationMetadata>>
EdgeNetworkClient::DeleteSubnet(
    google::cloud::edgenetwork::v1::DeleteSubnetRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->DeleteSubnet(request);
}

StatusOr<google::longrunning::Operation> EdgeNetworkClient::DeleteSubnet(
    ExperimentalTag, NoAwaitTag,
    google::cloud::edgenetwork::v1::DeleteSubnetRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->DeleteSubnet(ExperimentalTag{}, NoAwaitTag{}, request);
}

future<StatusOr<google::cloud::edgenetwork::v1::OperationMetadata>>
EdgeNetworkClient::DeleteSubnet(ExperimentalTag,
                                google::longrunning::Operation const& operation,
                                Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->DeleteSubnet(ExperimentalTag{}, operation);
}

StreamRange<google::cloud::edgenetwork::v1::Interconnect>
EdgeNetworkClient::ListInterconnects(std::string const& parent, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::edgenetwork::v1::ListInterconnectsRequest request;
  request.set_parent(parent);
  return connection_->ListInterconnects(request);
}

StreamRange<google::cloud::edgenetwork::v1::Interconnect>
EdgeNetworkClient::ListInterconnects(
    google::cloud::edgenetwork::v1::ListInterconnectsRequest request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->ListInterconnects(std::move(request));
}

StatusOr<google::cloud::edgenetwork::v1::Interconnect>
EdgeNetworkClient::GetInterconnect(std::string const& name, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::edgenetwork::v1::GetInterconnectRequest request;
  request.set_name(name);
  return connection_->GetInterconnect(request);
}

StatusOr<google::cloud::edgenetwork::v1::Interconnect>
EdgeNetworkClient::GetInterconnect(
    google::cloud::edgenetwork::v1::GetInterconnectRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->GetInterconnect(request);
}

StatusOr<google::cloud::edgenetwork::v1::DiagnoseInterconnectResponse>
EdgeNetworkClient::DiagnoseInterconnect(std::string const& name, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::edgenetwork::v1::DiagnoseInterconnectRequest request;
  request.set_name(name);
  return connection_->DiagnoseInterconnect(request);
}

StatusOr<google::cloud::edgenetwork::v1::DiagnoseInterconnectResponse>
EdgeNetworkClient::DiagnoseInterconnect(
    google::cloud::edgenetwork::v1::DiagnoseInterconnectRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->DiagnoseInterconnect(request);
}

StreamRange<google::cloud::edgenetwork::v1::InterconnectAttachment>
EdgeNetworkClient::ListInterconnectAttachments(std::string const& parent,
                                               Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::edgenetwork::v1::ListInterconnectAttachmentsRequest request;
  request.set_parent(parent);
  return connection_->ListInterconnectAttachments(request);
}

StreamRange<google::cloud::edgenetwork::v1::InterconnectAttachment>
EdgeNetworkClient::ListInterconnectAttachments(
    google::cloud::edgenetwork::v1::ListInterconnectAttachmentsRequest request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->ListInterconnectAttachments(std::move(request));
}

StatusOr<google::cloud::edgenetwork::v1::InterconnectAttachment>
EdgeNetworkClient::GetInterconnectAttachment(std::string const& name,
                                             Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::edgenetwork::v1::GetInterconnectAttachmentRequest request;
  request.set_name(name);
  return connection_->GetInterconnectAttachment(request);
}

StatusOr<google::cloud::edgenetwork::v1::InterconnectAttachment>
EdgeNetworkClient::GetInterconnectAttachment(
    google::cloud::edgenetwork::v1::GetInterconnectAttachmentRequest const&
        request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->GetInterconnectAttachment(request);
}

future<StatusOr<google::cloud::edgenetwork::v1::InterconnectAttachment>>
EdgeNetworkClient::CreateInterconnectAttachment(
    std::string const& parent,
    google::cloud::edgenetwork::v1::InterconnectAttachment const&
        interconnect_attachment,
    std::string const& interconnect_attachment_id, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::edgenetwork::v1::CreateInterconnectAttachmentRequest request;
  request.set_parent(parent);
  *request.mutable_interconnect_attachment() = interconnect_attachment;
  request.set_interconnect_attachment_id(interconnect_attachment_id);
  return connection_->CreateInterconnectAttachment(request);
}

StatusOr<google::longrunning::Operation>
EdgeNetworkClient::CreateInterconnectAttachment(
    ExperimentalTag, NoAwaitTag, std::string const& parent,
    google::cloud::edgenetwork::v1::InterconnectAttachment const&
        interconnect_attachment,
    std::string const& interconnect_attachment_id, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::edgenetwork::v1::CreateInterconnectAttachmentRequest request;
  request.set_parent(parent);
  *request.mutable_interconnect_attachment() = interconnect_attachment;
  request.set_interconnect_attachment_id(interconnect_attachment_id);
  return connection_->CreateInterconnectAttachment(ExperimentalTag{},
                                                   NoAwaitTag{}, request);
}

future<StatusOr<google::cloud::edgenetwork::v1::InterconnectAttachment>>
EdgeNetworkClient::CreateInterconnectAttachment(
    google::cloud::edgenetwork::v1::CreateInterconnectAttachmentRequest const&
        request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->CreateInterconnectAttachment(request);
}

StatusOr<google::longrunning::Operation>
EdgeNetworkClient::CreateInterconnectAttachment(
    ExperimentalTag, NoAwaitTag,
    google::cloud::edgenetwork::v1::CreateInterconnectAttachmentRequest const&
        request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->CreateInterconnectAttachment(ExperimentalTag{},
                                                   NoAwaitTag{}, request);
}

future<StatusOr<google::cloud::edgenetwork::v1::InterconnectAttachment>>
EdgeNetworkClient::CreateInterconnectAttachment(
    ExperimentalTag, google::longrunning::Operation const& operation,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->CreateInterconnectAttachment(ExperimentalTag{},
                                                   operation);
}

future<StatusOr<google::cloud::edgenetwork::v1::OperationMetadata>>
EdgeNetworkClient::DeleteInterconnectAttachment(std::string const& name,
                                                Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::edgenetwork::v1::DeleteInterconnectAttachmentRequest request;
  request.set_name(name);
  return connection_->DeleteInterconnectAttachment(request);
}

StatusOr<google::longrunning::Operation>
EdgeNetworkClient::DeleteInterconnectAttachment(ExperimentalTag, NoAwaitTag,
                                                std::string const& name,
                                                Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::edgenetwork::v1::DeleteInterconnectAttachmentRequest request;
  request.set_name(name);
  return connection_->DeleteInterconnectAttachment(ExperimentalTag{},
                                                   NoAwaitTag{}, request);
}

future<StatusOr<google::cloud::edgenetwork::v1::OperationMetadata>>
EdgeNetworkClient::DeleteInterconnectAttachment(
    google::cloud::edgenetwork::v1::DeleteInterconnectAttachmentRequest const&
        request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->DeleteInterconnectAttachment(request);
}

StatusOr<google::longrunning::Operation>
EdgeNetworkClient::DeleteInterconnectAttachment(
    ExperimentalTag, NoAwaitTag,
    google::cloud::edgenetwork::v1::DeleteInterconnectAttachmentRequest const&
        request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->DeleteInterconnectAttachment(ExperimentalTag{},
                                                   NoAwaitTag{}, request);
}

future<StatusOr<google::cloud::edgenetwork::v1::OperationMetadata>>
EdgeNetworkClient::DeleteInterconnectAttachment(
    ExperimentalTag, google::longrunning::Operation const& operation,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->DeleteInterconnectAttachment(ExperimentalTag{},
                                                   operation);
}

StreamRange<google::cloud::edgenetwork::v1::Router>
EdgeNetworkClient::ListRouters(std::string const& parent, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::edgenetwork::v1::ListRoutersRequest request;
  request.set_parent(parent);
  return connection_->ListRouters(request);
}

StreamRange<google::cloud::edgenetwork::v1::Router>
EdgeNetworkClient::ListRouters(
    google::cloud::edgenetwork::v1::ListRoutersRequest request, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->ListRouters(std::move(request));
}

StatusOr<google::cloud::edgenetwork::v1::Router> EdgeNetworkClient::GetRouter(
    std::string const& name, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::edgenetwork::v1::GetRouterRequest request;
  request.set_name(name);
  return connection_->GetRouter(request);
}

StatusOr<google::cloud::edgenetwork::v1::Router> EdgeNetworkClient::GetRouter(
    google::cloud::edgenetwork::v1::GetRouterRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->GetRouter(request);
}

StatusOr<google::cloud::edgenetwork::v1::DiagnoseRouterResponse>
EdgeNetworkClient::DiagnoseRouter(std::string const& name, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::edgenetwork::v1::DiagnoseRouterRequest request;
  request.set_name(name);
  return connection_->DiagnoseRouter(request);
}

StatusOr<google::cloud::edgenetwork::v1::DiagnoseRouterResponse>
EdgeNetworkClient::DiagnoseRouter(
    google::cloud::edgenetwork::v1::DiagnoseRouterRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->DiagnoseRouter(request);
}

future<StatusOr<google::cloud::edgenetwork::v1::Router>>
EdgeNetworkClient::CreateRouter(
    std::string const& parent,
    google::cloud::edgenetwork::v1::Router const& router,
    std::string const& router_id, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::edgenetwork::v1::CreateRouterRequest request;
  request.set_parent(parent);
  *request.mutable_router() = router;
  request.set_router_id(router_id);
  return connection_->CreateRouter(request);
}

StatusOr<google::longrunning::Operation> EdgeNetworkClient::CreateRouter(
    ExperimentalTag, NoAwaitTag, std::string const& parent,
    google::cloud::edgenetwork::v1::Router const& router,
    std::string const& router_id, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::edgenetwork::v1::CreateRouterRequest request;
  request.set_parent(parent);
  *request.mutable_router() = router;
  request.set_router_id(router_id);
  return connection_->CreateRouter(ExperimentalTag{}, NoAwaitTag{}, request);
}

future<StatusOr<google::cloud::edgenetwork::v1::Router>>
EdgeNetworkClient::CreateRouter(
    google::cloud::edgenetwork::v1::CreateRouterRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->CreateRouter(request);
}

StatusOr<google::longrunning::Operation> EdgeNetworkClient::CreateRouter(
    ExperimentalTag, NoAwaitTag,
    google::cloud::edgenetwork::v1::CreateRouterRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->CreateRouter(ExperimentalTag{}, NoAwaitTag{}, request);
}

future<StatusOr<google::cloud::edgenetwork::v1::Router>>
EdgeNetworkClient::CreateRouter(ExperimentalTag,
                                google::longrunning::Operation const& operation,
                                Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->CreateRouter(ExperimentalTag{}, operation);
}

future<StatusOr<google::cloud::edgenetwork::v1::Router>>
EdgeNetworkClient::UpdateRouter(
    google::cloud::edgenetwork::v1::Router const& router,
    google::protobuf::FieldMask const& update_mask, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::edgenetwork::v1::UpdateRouterRequest request;
  *request.mutable_router() = router;
  *request.mutable_update_mask() = update_mask;
  return connection_->UpdateRouter(request);
}

StatusOr<google::longrunning::Operation> EdgeNetworkClient::UpdateRouter(
    ExperimentalTag, NoAwaitTag,
    google::cloud::edgenetwork::v1::Router const& router,
    google::protobuf::FieldMask const& update_mask, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::edgenetwork::v1::UpdateRouterRequest request;
  *request.mutable_router() = router;
  *request.mutable_update_mask() = update_mask;
  return connection_->UpdateRouter(ExperimentalTag{}, NoAwaitTag{}, request);
}

future<StatusOr<google::cloud::edgenetwork::v1::Router>>
EdgeNetworkClient::UpdateRouter(
    google::cloud::edgenetwork::v1::UpdateRouterRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->UpdateRouter(request);
}

StatusOr<google::longrunning::Operation> EdgeNetworkClient::UpdateRouter(
    ExperimentalTag, NoAwaitTag,
    google::cloud::edgenetwork::v1::UpdateRouterRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->UpdateRouter(ExperimentalTag{}, NoAwaitTag{}, request);
}

future<StatusOr<google::cloud::edgenetwork::v1::Router>>
EdgeNetworkClient::UpdateRouter(ExperimentalTag,
                                google::longrunning::Operation const& operation,
                                Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->UpdateRouter(ExperimentalTag{}, operation);
}

future<StatusOr<google::cloud::edgenetwork::v1::OperationMetadata>>
EdgeNetworkClient::DeleteRouter(std::string const& name, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::edgenetwork::v1::DeleteRouterRequest request;
  request.set_name(name);
  return connection_->DeleteRouter(request);
}

StatusOr<google::longrunning::Operation> EdgeNetworkClient::DeleteRouter(
    ExperimentalTag, NoAwaitTag, std::string const& name, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::edgenetwork::v1::DeleteRouterRequest request;
  request.set_name(name);
  return connection_->DeleteRouter(ExperimentalTag{}, NoAwaitTag{}, request);
}

future<StatusOr<google::cloud::edgenetwork::v1::OperationMetadata>>
EdgeNetworkClient::DeleteRouter(
    google::cloud::edgenetwork::v1::DeleteRouterRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->DeleteRouter(request);
}

StatusOr<google::longrunning::Operation> EdgeNetworkClient::DeleteRouter(
    ExperimentalTag, NoAwaitTag,
    google::cloud::edgenetwork::v1::DeleteRouterRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->DeleteRouter(ExperimentalTag{}, NoAwaitTag{}, request);
}

future<StatusOr<google::cloud::edgenetwork::v1::OperationMetadata>>
EdgeNetworkClient::DeleteRouter(ExperimentalTag,
                                google::longrunning::Operation const& operation,
                                Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->DeleteRouter(ExperimentalTag{}, operation);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace edgenetwork_v1
}  // namespace cloud
}  // namespace google
