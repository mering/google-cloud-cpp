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
// source: google/cloud/vmwareengine/v1/vmwareengine.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_VMWAREENGINE_V1_VMWARE_ENGINE_CONNECTION_IDEMPOTENCY_POLICY_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_VMWAREENGINE_V1_VMWARE_ENGINE_CONNECTION_IDEMPOTENCY_POLICY_H

#include "google/cloud/location/locations.grpc.pb.h"
#include "google/cloud/vmwareengine/v1/vmwareengine.grpc.pb.h"
#include "google/cloud/idempotency.h"
#include "google/cloud/version.h"
#include "google/iam/v1/iam_policy.grpc.pb.h"
#include "google/longrunning/operations.grpc.pb.h"
#include <memory>

namespace google {
namespace cloud {
namespace vmwareengine_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class VmwareEngineConnectionIdempotencyPolicy {
 public:
  virtual ~VmwareEngineConnectionIdempotencyPolicy();

  /// Create a new copy of this object.
  virtual std::unique_ptr<VmwareEngineConnectionIdempotencyPolicy> clone()
      const;

  virtual google::cloud::Idempotency ListPrivateClouds(
      google::cloud::vmwareengine::v1::ListPrivateCloudsRequest request);

  virtual google::cloud::Idempotency GetPrivateCloud(
      google::cloud::vmwareengine::v1::GetPrivateCloudRequest const& request);

  virtual google::cloud::Idempotency CreatePrivateCloud(
      google::cloud::vmwareengine::v1::CreatePrivateCloudRequest const&
          request);

  virtual google::cloud::Idempotency UpdatePrivateCloud(
      google::cloud::vmwareengine::v1::UpdatePrivateCloudRequest const&
          request);

  virtual google::cloud::Idempotency DeletePrivateCloud(
      google::cloud::vmwareengine::v1::DeletePrivateCloudRequest const&
          request);

  virtual google::cloud::Idempotency UndeletePrivateCloud(
      google::cloud::vmwareengine::v1::UndeletePrivateCloudRequest const&
          request);

  virtual google::cloud::Idempotency ListClusters(
      google::cloud::vmwareengine::v1::ListClustersRequest request);

  virtual google::cloud::Idempotency GetCluster(
      google::cloud::vmwareengine::v1::GetClusterRequest const& request);

  virtual google::cloud::Idempotency CreateCluster(
      google::cloud::vmwareengine::v1::CreateClusterRequest const& request);

  virtual google::cloud::Idempotency UpdateCluster(
      google::cloud::vmwareengine::v1::UpdateClusterRequest const& request);

  virtual google::cloud::Idempotency DeleteCluster(
      google::cloud::vmwareengine::v1::DeleteClusterRequest const& request);

  virtual google::cloud::Idempotency ListNodes(
      google::cloud::vmwareengine::v1::ListNodesRequest request);

  virtual google::cloud::Idempotency GetNode(
      google::cloud::vmwareengine::v1::GetNodeRequest const& request);

  virtual google::cloud::Idempotency ListExternalAddresses(
      google::cloud::vmwareengine::v1::ListExternalAddressesRequest request);

  virtual google::cloud::Idempotency FetchNetworkPolicyExternalAddresses(
      google::cloud::vmwareengine::v1::
          FetchNetworkPolicyExternalAddressesRequest request);

  virtual google::cloud::Idempotency GetExternalAddress(
      google::cloud::vmwareengine::v1::GetExternalAddressRequest const&
          request);

  virtual google::cloud::Idempotency CreateExternalAddress(
      google::cloud::vmwareengine::v1::CreateExternalAddressRequest const&
          request);

  virtual google::cloud::Idempotency UpdateExternalAddress(
      google::cloud::vmwareengine::v1::UpdateExternalAddressRequest const&
          request);

  virtual google::cloud::Idempotency DeleteExternalAddress(
      google::cloud::vmwareengine::v1::DeleteExternalAddressRequest const&
          request);

  virtual google::cloud::Idempotency ListSubnets(
      google::cloud::vmwareengine::v1::ListSubnetsRequest request);

  virtual google::cloud::Idempotency GetSubnet(
      google::cloud::vmwareengine::v1::GetSubnetRequest const& request);

  virtual google::cloud::Idempotency UpdateSubnet(
      google::cloud::vmwareengine::v1::UpdateSubnetRequest const& request);

  virtual google::cloud::Idempotency ListExternalAccessRules(
      google::cloud::vmwareengine::v1::ListExternalAccessRulesRequest request);

  virtual google::cloud::Idempotency GetExternalAccessRule(
      google::cloud::vmwareengine::v1::GetExternalAccessRuleRequest const&
          request);

  virtual google::cloud::Idempotency CreateExternalAccessRule(
      google::cloud::vmwareengine::v1::CreateExternalAccessRuleRequest const&
          request);

  virtual google::cloud::Idempotency UpdateExternalAccessRule(
      google::cloud::vmwareengine::v1::UpdateExternalAccessRuleRequest const&
          request);

  virtual google::cloud::Idempotency DeleteExternalAccessRule(
      google::cloud::vmwareengine::v1::DeleteExternalAccessRuleRequest const&
          request);

  virtual google::cloud::Idempotency ListLoggingServers(
      google::cloud::vmwareengine::v1::ListLoggingServersRequest request);

  virtual google::cloud::Idempotency GetLoggingServer(
      google::cloud::vmwareengine::v1::GetLoggingServerRequest const& request);

  virtual google::cloud::Idempotency CreateLoggingServer(
      google::cloud::vmwareengine::v1::CreateLoggingServerRequest const&
          request);

  virtual google::cloud::Idempotency UpdateLoggingServer(
      google::cloud::vmwareengine::v1::UpdateLoggingServerRequest const&
          request);

  virtual google::cloud::Idempotency DeleteLoggingServer(
      google::cloud::vmwareengine::v1::DeleteLoggingServerRequest const&
          request);

  virtual google::cloud::Idempotency ListNodeTypes(
      google::cloud::vmwareengine::v1::ListNodeTypesRequest request);

  virtual google::cloud::Idempotency GetNodeType(
      google::cloud::vmwareengine::v1::GetNodeTypeRequest const& request);

  virtual google::cloud::Idempotency ShowNsxCredentials(
      google::cloud::vmwareengine::v1::ShowNsxCredentialsRequest const&
          request);

  virtual google::cloud::Idempotency ShowVcenterCredentials(
      google::cloud::vmwareengine::v1::ShowVcenterCredentialsRequest const&
          request);

  virtual google::cloud::Idempotency ResetNsxCredentials(
      google::cloud::vmwareengine::v1::ResetNsxCredentialsRequest const&
          request);

  virtual google::cloud::Idempotency ResetVcenterCredentials(
      google::cloud::vmwareengine::v1::ResetVcenterCredentialsRequest const&
          request);

  virtual google::cloud::Idempotency GetDnsForwarding(
      google::cloud::vmwareengine::v1::GetDnsForwardingRequest const& request);

  virtual google::cloud::Idempotency UpdateDnsForwarding(
      google::cloud::vmwareengine::v1::UpdateDnsForwardingRequest const&
          request);

  virtual google::cloud::Idempotency GetNetworkPeering(
      google::cloud::vmwareengine::v1::GetNetworkPeeringRequest const& request);

  virtual google::cloud::Idempotency ListNetworkPeerings(
      google::cloud::vmwareengine::v1::ListNetworkPeeringsRequest request);

  virtual google::cloud::Idempotency CreateNetworkPeering(
      google::cloud::vmwareengine::v1::CreateNetworkPeeringRequest const&
          request);

  virtual google::cloud::Idempotency DeleteNetworkPeering(
      google::cloud::vmwareengine::v1::DeleteNetworkPeeringRequest const&
          request);

  virtual google::cloud::Idempotency UpdateNetworkPeering(
      google::cloud::vmwareengine::v1::UpdateNetworkPeeringRequest const&
          request);

  virtual google::cloud::Idempotency ListPeeringRoutes(
      google::cloud::vmwareengine::v1::ListPeeringRoutesRequest request);

  virtual google::cloud::Idempotency CreateHcxActivationKey(
      google::cloud::vmwareengine::v1::CreateHcxActivationKeyRequest const&
          request);

  virtual google::cloud::Idempotency ListHcxActivationKeys(
      google::cloud::vmwareengine::v1::ListHcxActivationKeysRequest request);

  virtual google::cloud::Idempotency GetHcxActivationKey(
      google::cloud::vmwareengine::v1::GetHcxActivationKeyRequest const&
          request);

  virtual google::cloud::Idempotency GetNetworkPolicy(
      google::cloud::vmwareengine::v1::GetNetworkPolicyRequest const& request);

  virtual google::cloud::Idempotency ListNetworkPolicies(
      google::cloud::vmwareengine::v1::ListNetworkPoliciesRequest request);

  virtual google::cloud::Idempotency CreateNetworkPolicy(
      google::cloud::vmwareengine::v1::CreateNetworkPolicyRequest const&
          request);

  virtual google::cloud::Idempotency UpdateNetworkPolicy(
      google::cloud::vmwareengine::v1::UpdateNetworkPolicyRequest const&
          request);

  virtual google::cloud::Idempotency DeleteNetworkPolicy(
      google::cloud::vmwareengine::v1::DeleteNetworkPolicyRequest const&
          request);

  virtual google::cloud::Idempotency ListManagementDnsZoneBindings(
      google::cloud::vmwareengine::v1::ListManagementDnsZoneBindingsRequest
          request);

  virtual google::cloud::Idempotency GetManagementDnsZoneBinding(
      google::cloud::vmwareengine::v1::GetManagementDnsZoneBindingRequest const&
          request);

  virtual google::cloud::Idempotency CreateManagementDnsZoneBinding(
      google::cloud::vmwareengine::v1::
          CreateManagementDnsZoneBindingRequest const& request);

  virtual google::cloud::Idempotency UpdateManagementDnsZoneBinding(
      google::cloud::vmwareengine::v1::
          UpdateManagementDnsZoneBindingRequest const& request);

  virtual google::cloud::Idempotency DeleteManagementDnsZoneBinding(
      google::cloud::vmwareengine::v1::
          DeleteManagementDnsZoneBindingRequest const& request);

  virtual google::cloud::Idempotency RepairManagementDnsZoneBinding(
      google::cloud::vmwareengine::v1::
          RepairManagementDnsZoneBindingRequest const& request);

  virtual google::cloud::Idempotency CreateVmwareEngineNetwork(
      google::cloud::vmwareengine::v1::CreateVmwareEngineNetworkRequest const&
          request);

  virtual google::cloud::Idempotency UpdateVmwareEngineNetwork(
      google::cloud::vmwareengine::v1::UpdateVmwareEngineNetworkRequest const&
          request);

  virtual google::cloud::Idempotency DeleteVmwareEngineNetwork(
      google::cloud::vmwareengine::v1::DeleteVmwareEngineNetworkRequest const&
          request);

  virtual google::cloud::Idempotency GetVmwareEngineNetwork(
      google::cloud::vmwareengine::v1::GetVmwareEngineNetworkRequest const&
          request);

  virtual google::cloud::Idempotency ListVmwareEngineNetworks(
      google::cloud::vmwareengine::v1::ListVmwareEngineNetworksRequest request);

  virtual google::cloud::Idempotency CreatePrivateConnection(
      google::cloud::vmwareengine::v1::CreatePrivateConnectionRequest const&
          request);

  virtual google::cloud::Idempotency GetPrivateConnection(
      google::cloud::vmwareengine::v1::GetPrivateConnectionRequest const&
          request);

  virtual google::cloud::Idempotency ListPrivateConnections(
      google::cloud::vmwareengine::v1::ListPrivateConnectionsRequest request);

  virtual google::cloud::Idempotency UpdatePrivateConnection(
      google::cloud::vmwareengine::v1::UpdatePrivateConnectionRequest const&
          request);

  virtual google::cloud::Idempotency DeletePrivateConnection(
      google::cloud::vmwareengine::v1::DeletePrivateConnectionRequest const&
          request);

  virtual google::cloud::Idempotency ListPrivateConnectionPeeringRoutes(
      google::cloud::vmwareengine::v1::ListPrivateConnectionPeeringRoutesRequest
          request);

  virtual google::cloud::Idempotency GrantDnsBindPermission(
      google::cloud::vmwareengine::v1::GrantDnsBindPermissionRequest const&
          request);

  virtual google::cloud::Idempotency GetDnsBindPermission(
      google::cloud::vmwareengine::v1::GetDnsBindPermissionRequest const&
          request);

  virtual google::cloud::Idempotency RevokeDnsBindPermission(
      google::cloud::vmwareengine::v1::RevokeDnsBindPermissionRequest const&
          request);

  virtual google::cloud::Idempotency ListLocations(
      google::cloud::location::ListLocationsRequest request);

  virtual google::cloud::Idempotency GetLocation(
      google::cloud::location::GetLocationRequest const& request);

  virtual google::cloud::Idempotency SetIamPolicy(
      google::iam::v1::SetIamPolicyRequest const& request);

  virtual google::cloud::Idempotency GetIamPolicy(
      google::iam::v1::GetIamPolicyRequest const& request);

  virtual google::cloud::Idempotency TestIamPermissions(
      google::iam::v1::TestIamPermissionsRequest const& request);

  virtual google::cloud::Idempotency ListOperations(
      google::longrunning::ListOperationsRequest request);

  virtual google::cloud::Idempotency GetOperation(
      google::longrunning::GetOperationRequest const& request);

  virtual google::cloud::Idempotency DeleteOperation(
      google::longrunning::DeleteOperationRequest const& request);
};

std::unique_ptr<VmwareEngineConnectionIdempotencyPolicy>
MakeDefaultVmwareEngineConnectionIdempotencyPolicy();

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace vmwareengine_v1
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_VMWAREENGINE_V1_VMWARE_ENGINE_CONNECTION_IDEMPOTENCY_POLICY_H
