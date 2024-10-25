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
// source:
// google/cloud/compute/global_network_endpoint_groups/v1/global_network_endpoint_groups.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_GLOBAL_NETWORK_ENDPOINT_GROUPS_V1_INTERNAL_GLOBAL_NETWORK_ENDPOINT_GROUPS_REST_METADATA_DECORATOR_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_GLOBAL_NETWORK_ENDPOINT_GROUPS_V1_INTERNAL_GLOBAL_NETWORK_ENDPOINT_GROUPS_REST_METADATA_DECORATOR_H

#include "google/cloud/compute/global_network_endpoint_groups/v1/internal/global_network_endpoint_groups_rest_stub.h"
#include "google/cloud/future.h"
#include "google/cloud/rest_options.h"
#include "google/cloud/version.h"
#include "google/cloud/compute/global_network_endpoint_groups/v1/global_network_endpoint_groups.pb.h"
#include "google/cloud/compute/global_operations/v1/global_operations.pb.h"
#include <memory>
#include <string>

namespace google {
namespace cloud {
namespace compute_global_network_endpoint_groups_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class GlobalNetworkEndpointGroupsRestMetadata
    : public GlobalNetworkEndpointGroupsRestStub {
 public:
  ~GlobalNetworkEndpointGroupsRestMetadata() override = default;
  explicit GlobalNetworkEndpointGroupsRestMetadata(
      std::shared_ptr<GlobalNetworkEndpointGroupsRestStub> child,
      std::string api_client_header = "");

  google::cloud::future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  AsyncAttachNetworkEndpoints(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<google::cloud::rest_internal::RestContext> rest_context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::cpp::compute::global_network_endpoint_groups::v1::
          AttachNetworkEndpointsRequest const& request) override;

  StatusOr<google::cloud::cpp::compute::v1::Operation> AttachNetworkEndpoints(
      google::cloud::rest_internal::RestContext& rest_context,
      Options const& options,
      google::cloud::cpp::compute::global_network_endpoint_groups::v1::
          AttachNetworkEndpointsRequest const& request) override;

  google::cloud::future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  AsyncDeleteNetworkEndpointGroup(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<google::cloud::rest_internal::RestContext> rest_context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::cpp::compute::global_network_endpoint_groups::v1::
          DeleteNetworkEndpointGroupRequest const& request) override;

  StatusOr<google::cloud::cpp::compute::v1::Operation>
  DeleteNetworkEndpointGroup(
      google::cloud::rest_internal::RestContext& rest_context,
      Options const& options,
      google::cloud::cpp::compute::global_network_endpoint_groups::v1::
          DeleteNetworkEndpointGroupRequest const& request) override;

  google::cloud::future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  AsyncDetachNetworkEndpoints(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<google::cloud::rest_internal::RestContext> rest_context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::cpp::compute::global_network_endpoint_groups::v1::
          DetachNetworkEndpointsRequest const& request) override;

  StatusOr<google::cloud::cpp::compute::v1::Operation> DetachNetworkEndpoints(
      google::cloud::rest_internal::RestContext& rest_context,
      Options const& options,
      google::cloud::cpp::compute::global_network_endpoint_groups::v1::
          DetachNetworkEndpointsRequest const& request) override;

  StatusOr<google::cloud::cpp::compute::v1::NetworkEndpointGroup>
  GetNetworkEndpointGroup(
      google::cloud::rest_internal::RestContext& rest_context,
      Options const& options,
      google::cloud::cpp::compute::global_network_endpoint_groups::v1::
          GetNetworkEndpointGroupRequest const& request) override;

  google::cloud::future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  AsyncInsertNetworkEndpointGroup(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<google::cloud::rest_internal::RestContext> rest_context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::cpp::compute::global_network_endpoint_groups::v1::
          InsertNetworkEndpointGroupRequest const& request) override;

  StatusOr<google::cloud::cpp::compute::v1::Operation>
  InsertNetworkEndpointGroup(
      google::cloud::rest_internal::RestContext& rest_context,
      Options const& options,
      google::cloud::cpp::compute::global_network_endpoint_groups::v1::
          InsertNetworkEndpointGroupRequest const& request) override;

  StatusOr<google::cloud::cpp::compute::v1::NetworkEndpointGroupList>
  ListGlobalNetworkEndpointGroups(
      google::cloud::rest_internal::RestContext& rest_context,
      Options const& options,
      google::cloud::cpp::compute::global_network_endpoint_groups::v1::
          ListGlobalNetworkEndpointGroupsRequest const& request) override;

  StatusOr<google::cloud::cpp::compute::v1::
               NetworkEndpointGroupsListNetworkEndpoints>
  ListNetworkEndpoints(
      google::cloud::rest_internal::RestContext& rest_context,
      Options const& options,
      google::cloud::cpp::compute::global_network_endpoint_groups::v1::
          ListNetworkEndpointsRequest const& request) override;

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

  std::shared_ptr<GlobalNetworkEndpointGroupsRestStub> child_;
  std::string api_client_header_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_global_network_endpoint_groups_v1_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_GLOBAL_NETWORK_ENDPOINT_GROUPS_V1_INTERNAL_GLOBAL_NETWORK_ENDPOINT_GROUPS_REST_METADATA_DECORATOR_H
