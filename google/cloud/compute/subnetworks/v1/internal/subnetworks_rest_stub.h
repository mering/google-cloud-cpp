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
// source: google/cloud/compute/subnetworks/v1/subnetworks.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_SUBNETWORKS_V1_INTERNAL_SUBNETWORKS_REST_STUB_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_SUBNETWORKS_V1_INTERNAL_SUBNETWORKS_REST_STUB_H

#include "google/cloud/compute/region_operations/v1/region_operations.pb.h"
#include "google/cloud/compute/subnetworks/v1/subnetworks.pb.h"
#include "google/cloud/completion_queue.h"
#include "google/cloud/internal/rest_client.h"
#include "google/cloud/internal/rest_context.h"
#include "google/cloud/status_or.h"
#include "google/cloud/version.h"
#include <memory>

namespace google {
namespace cloud {
namespace compute_subnetworks_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class SubnetworksRestStub {
 public:
  virtual ~SubnetworksRestStub() = default;

  virtual StatusOr<google::cloud::cpp::compute::v1::SubnetworkAggregatedList>
  AggregatedListSubnetworks(
      google::cloud::rest_internal::RestContext& rest_context,
      Options const& options,
      google::cloud::cpp::compute::subnetworks::v1::
          AggregatedListSubnetworksRequest const& request) = 0;

  virtual future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  AsyncDeleteSubnetwork(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<google::cloud::rest_internal::RestContext> rest_context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::cpp::compute::subnetworks::v1::
          DeleteSubnetworkRequest const& request) = 0;

  virtual StatusOr<google::cloud::cpp::compute::v1::Operation> DeleteSubnetwork(
      google::cloud::rest_internal::RestContext& rest_context,
      Options const& options,
      google::cloud::cpp::compute::subnetworks::v1::
          DeleteSubnetworkRequest const& request) = 0;

  virtual future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  AsyncExpandIpCidrRange(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<google::cloud::rest_internal::RestContext> rest_context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::cpp::compute::subnetworks::v1::
          ExpandIpCidrRangeRequest const& request) = 0;

  virtual StatusOr<google::cloud::cpp::compute::v1::Operation>
  ExpandIpCidrRange(google::cloud::rest_internal::RestContext& rest_context,
                    Options const& options,
                    google::cloud::cpp::compute::subnetworks::v1::
                        ExpandIpCidrRangeRequest const& request) = 0;

  virtual StatusOr<google::cloud::cpp::compute::v1::Subnetwork> GetSubnetwork(
      google::cloud::rest_internal::RestContext& rest_context,
      Options const& options,
      google::cloud::cpp::compute::subnetworks::v1::GetSubnetworkRequest const&
          request) = 0;

  virtual StatusOr<google::cloud::cpp::compute::v1::Policy> GetIamPolicy(
      google::cloud::rest_internal::RestContext& rest_context,
      Options const& options,
      google::cloud::cpp::compute::subnetworks::v1::GetIamPolicyRequest const&
          request) = 0;

  virtual future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  AsyncInsertSubnetwork(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<google::cloud::rest_internal::RestContext> rest_context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::cpp::compute::subnetworks::v1::
          InsertSubnetworkRequest const& request) = 0;

  virtual StatusOr<google::cloud::cpp::compute::v1::Operation> InsertSubnetwork(
      google::cloud::rest_internal::RestContext& rest_context,
      Options const& options,
      google::cloud::cpp::compute::subnetworks::v1::
          InsertSubnetworkRequest const& request) = 0;

  virtual StatusOr<google::cloud::cpp::compute::v1::SubnetworkList>
  ListSubnetworks(google::cloud::rest_internal::RestContext& rest_context,
                  Options const& options,
                  google::cloud::cpp::compute::subnetworks::v1::
                      ListSubnetworksRequest const& request) = 0;

  virtual StatusOr<
      google::cloud::cpp::compute::v1::UsableSubnetworksAggregatedList>
  ListUsable(
      google::cloud::rest_internal::RestContext& rest_context,
      Options const& options,
      google::cloud::cpp::compute::subnetworks::v1::ListUsableRequest const&
          request) = 0;

  virtual future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  AsyncPatchSubnetwork(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<google::cloud::rest_internal::RestContext> rest_context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::cpp::compute::subnetworks::v1::
          PatchSubnetworkRequest const& request) = 0;

  virtual StatusOr<google::cloud::cpp::compute::v1::Operation> PatchSubnetwork(
      google::cloud::rest_internal::RestContext& rest_context,
      Options const& options,
      google::cloud::cpp::compute::subnetworks::v1::
          PatchSubnetworkRequest const& request) = 0;

  virtual StatusOr<google::cloud::cpp::compute::v1::Policy> SetIamPolicy(
      google::cloud::rest_internal::RestContext& rest_context,
      Options const& options,
      google::cloud::cpp::compute::subnetworks::v1::SetIamPolicyRequest const&
          request) = 0;

  virtual future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  AsyncSetPrivateIpGoogleAccess(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<google::cloud::rest_internal::RestContext> rest_context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::cpp::compute::subnetworks::v1::
          SetPrivateIpGoogleAccessRequest const& request) = 0;

  virtual StatusOr<google::cloud::cpp::compute::v1::Operation>
  SetPrivateIpGoogleAccess(
      google::cloud::rest_internal::RestContext& rest_context,
      Options const& options,
      google::cloud::cpp::compute::subnetworks::v1::
          SetPrivateIpGoogleAccessRequest const& request) = 0;

  virtual StatusOr<google::cloud::cpp::compute::v1::TestPermissionsResponse>
  TestIamPermissions(google::cloud::rest_internal::RestContext& rest_context,
                     Options const& options,
                     google::cloud::cpp::compute::subnetworks::v1::
                         TestIamPermissionsRequest const& request) = 0;

  virtual future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  AsyncGetOperation(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<google::cloud::rest_internal::RestContext> rest_context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::cpp::compute::region_operations::v1::
          GetOperationRequest const& request) = 0;

  virtual future<Status> AsyncCancelOperation(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<google::cloud::rest_internal::RestContext> rest_context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::cpp::compute::region_operations::v1::
          DeleteOperationRequest const& request) = 0;
};

class DefaultSubnetworksRestStub : public SubnetworksRestStub {
 public:
  ~DefaultSubnetworksRestStub() override = default;

  explicit DefaultSubnetworksRestStub(Options options);
  DefaultSubnetworksRestStub(
      std::shared_ptr<rest_internal::RestClient> service,
      std::shared_ptr<rest_internal::RestClient> operations, Options options);

  StatusOr<google::cloud::cpp::compute::v1::SubnetworkAggregatedList>
  AggregatedListSubnetworks(
      google::cloud::rest_internal::RestContext& rest_context,
      Options const& options,
      google::cloud::cpp::compute::subnetworks::v1::
          AggregatedListSubnetworksRequest const& request) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  AsyncDeleteSubnetwork(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<google::cloud::rest_internal::RestContext> rest_context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::cpp::compute::subnetworks::v1::
          DeleteSubnetworkRequest const& request) override;

  StatusOr<google::cloud::cpp::compute::v1::Operation> DeleteSubnetwork(
      google::cloud::rest_internal::RestContext& rest_context,
      Options const& options,
      google::cloud::cpp::compute::subnetworks::v1::
          DeleteSubnetworkRequest const& request) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  AsyncExpandIpCidrRange(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<google::cloud::rest_internal::RestContext> rest_context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::cpp::compute::subnetworks::v1::
          ExpandIpCidrRangeRequest const& request) override;

  StatusOr<google::cloud::cpp::compute::v1::Operation> ExpandIpCidrRange(
      google::cloud::rest_internal::RestContext& rest_context,
      Options const& options,
      google::cloud::cpp::compute::subnetworks::v1::
          ExpandIpCidrRangeRequest const& request) override;

  StatusOr<google::cloud::cpp::compute::v1::Subnetwork> GetSubnetwork(
      google::cloud::rest_internal::RestContext& rest_context,
      Options const& options,
      google::cloud::cpp::compute::subnetworks::v1::GetSubnetworkRequest const&
          request) override;

  StatusOr<google::cloud::cpp::compute::v1::Policy> GetIamPolicy(
      google::cloud::rest_internal::RestContext& rest_context,
      Options const& options,
      google::cloud::cpp::compute::subnetworks::v1::GetIamPolicyRequest const&
          request) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  AsyncInsertSubnetwork(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<google::cloud::rest_internal::RestContext> rest_context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::cpp::compute::subnetworks::v1::
          InsertSubnetworkRequest const& request) override;

  StatusOr<google::cloud::cpp::compute::v1::Operation> InsertSubnetwork(
      google::cloud::rest_internal::RestContext& rest_context,
      Options const& options,
      google::cloud::cpp::compute::subnetworks::v1::
          InsertSubnetworkRequest const& request) override;

  StatusOr<google::cloud::cpp::compute::v1::SubnetworkList> ListSubnetworks(
      google::cloud::rest_internal::RestContext& rest_context,
      Options const& options,
      google::cloud::cpp::compute::subnetworks::v1::
          ListSubnetworksRequest const& request) override;

  StatusOr<google::cloud::cpp::compute::v1::UsableSubnetworksAggregatedList>
  ListUsable(
      google::cloud::rest_internal::RestContext& rest_context,
      Options const& options,
      google::cloud::cpp::compute::subnetworks::v1::ListUsableRequest const&
          request) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  AsyncPatchSubnetwork(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<google::cloud::rest_internal::RestContext> rest_context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::cpp::compute::subnetworks::v1::
          PatchSubnetworkRequest const& request) override;

  StatusOr<google::cloud::cpp::compute::v1::Operation> PatchSubnetwork(
      google::cloud::rest_internal::RestContext& rest_context,
      Options const& options,
      google::cloud::cpp::compute::subnetworks::v1::
          PatchSubnetworkRequest const& request) override;

  StatusOr<google::cloud::cpp::compute::v1::Policy> SetIamPolicy(
      google::cloud::rest_internal::RestContext& rest_context,
      Options const& options,
      google::cloud::cpp::compute::subnetworks::v1::SetIamPolicyRequest const&
          request) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  AsyncSetPrivateIpGoogleAccess(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<google::cloud::rest_internal::RestContext> rest_context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::cpp::compute::subnetworks::v1::
          SetPrivateIpGoogleAccessRequest const& request) override;

  StatusOr<google::cloud::cpp::compute::v1::Operation> SetPrivateIpGoogleAccess(
      google::cloud::rest_internal::RestContext& rest_context,
      Options const& options,
      google::cloud::cpp::compute::subnetworks::v1::
          SetPrivateIpGoogleAccessRequest const& request) override;

  StatusOr<google::cloud::cpp::compute::v1::TestPermissionsResponse>
  TestIamPermissions(google::cloud::rest_internal::RestContext& rest_context,
                     Options const& options,
                     google::cloud::cpp::compute::subnetworks::v1::
                         TestIamPermissionsRequest const& request) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  AsyncGetOperation(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<google::cloud::rest_internal::RestContext> rest_context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::cpp::compute::region_operations::v1::
          GetOperationRequest const& request) override;

  future<Status> AsyncCancelOperation(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<google::cloud::rest_internal::RestContext> rest_context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::cpp::compute::region_operations::v1::
          DeleteOperationRequest const& request) override;

 private:
  std::shared_ptr<rest_internal::RestClient> service_;
  std::shared_ptr<rest_internal::RestClient> operations_;
  Options options_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_subnetworks_v1_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_SUBNETWORKS_V1_INTERNAL_SUBNETWORKS_REST_STUB_H
