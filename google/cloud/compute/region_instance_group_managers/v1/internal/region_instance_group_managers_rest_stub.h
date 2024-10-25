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
// google/cloud/compute/region_instance_group_managers/v1/region_instance_group_managers.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_REGION_INSTANCE_GROUP_MANAGERS_V1_INTERNAL_REGION_INSTANCE_GROUP_MANAGERS_REST_STUB_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_REGION_INSTANCE_GROUP_MANAGERS_V1_INTERNAL_REGION_INSTANCE_GROUP_MANAGERS_REST_STUB_H

#include "google/cloud/compute/region_instance_group_managers/v1/region_instance_group_managers.pb.h"
#include "google/cloud/compute/region_operations/v1/region_operations.pb.h"
#include "google/cloud/completion_queue.h"
#include "google/cloud/internal/rest_client.h"
#include "google/cloud/internal/rest_context.h"
#include "google/cloud/status_or.h"
#include "google/cloud/version.h"
#include <memory>

namespace google {
namespace cloud {
namespace compute_region_instance_group_managers_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class RegionInstanceGroupManagersRestStub {
 public:
  virtual ~RegionInstanceGroupManagersRestStub() = default;

  virtual future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  AsyncAbandonInstances(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<google::cloud::rest_internal::RestContext> rest_context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::cpp::compute::region_instance_group_managers::v1::
          AbandonInstancesRequest const& request) = 0;

  virtual StatusOr<google::cloud::cpp::compute::v1::Operation> AbandonInstances(
      google::cloud::rest_internal::RestContext& rest_context,
      Options const& options,
      google::cloud::cpp::compute::region_instance_group_managers::v1::
          AbandonInstancesRequest const& request) = 0;

  virtual future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  AsyncApplyUpdatesToInstances(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<google::cloud::rest_internal::RestContext> rest_context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::cpp::compute::region_instance_group_managers::v1::
          ApplyUpdatesToInstancesRequest const& request) = 0;

  virtual StatusOr<google::cloud::cpp::compute::v1::Operation>
  ApplyUpdatesToInstances(
      google::cloud::rest_internal::RestContext& rest_context,
      Options const& options,
      google::cloud::cpp::compute::region_instance_group_managers::v1::
          ApplyUpdatesToInstancesRequest const& request) = 0;

  virtual future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  AsyncCreateInstances(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<google::cloud::rest_internal::RestContext> rest_context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::cpp::compute::region_instance_group_managers::v1::
          CreateInstancesRequest const& request) = 0;

  virtual StatusOr<google::cloud::cpp::compute::v1::Operation> CreateInstances(
      google::cloud::rest_internal::RestContext& rest_context,
      Options const& options,
      google::cloud::cpp::compute::region_instance_group_managers::v1::
          CreateInstancesRequest const& request) = 0;

  virtual future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  AsyncDeleteInstanceGroupManager(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<google::cloud::rest_internal::RestContext> rest_context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::cpp::compute::region_instance_group_managers::v1::
          DeleteInstanceGroupManagerRequest const& request) = 0;

  virtual StatusOr<google::cloud::cpp::compute::v1::Operation>
  DeleteInstanceGroupManager(
      google::cloud::rest_internal::RestContext& rest_context,
      Options const& options,
      google::cloud::cpp::compute::region_instance_group_managers::v1::
          DeleteInstanceGroupManagerRequest const& request) = 0;

  virtual future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  AsyncDeleteInstances(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<google::cloud::rest_internal::RestContext> rest_context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::cpp::compute::region_instance_group_managers::v1::
          DeleteInstancesRequest const& request) = 0;

  virtual StatusOr<google::cloud::cpp::compute::v1::Operation> DeleteInstances(
      google::cloud::rest_internal::RestContext& rest_context,
      Options const& options,
      google::cloud::cpp::compute::region_instance_group_managers::v1::
          DeleteInstancesRequest const& request) = 0;

  virtual future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  AsyncDeletePerInstanceConfigs(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<google::cloud::rest_internal::RestContext> rest_context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::cpp::compute::region_instance_group_managers::v1::
          DeletePerInstanceConfigsRequest const& request) = 0;

  virtual StatusOr<google::cloud::cpp::compute::v1::Operation>
  DeletePerInstanceConfigs(
      google::cloud::rest_internal::RestContext& rest_context,
      Options const& options,
      google::cloud::cpp::compute::region_instance_group_managers::v1::
          DeletePerInstanceConfigsRequest const& request) = 0;

  virtual StatusOr<google::cloud::cpp::compute::v1::InstanceGroupManager>
  GetInstanceGroupManager(
      google::cloud::rest_internal::RestContext& rest_context,
      Options const& options,
      google::cloud::cpp::compute::region_instance_group_managers::v1::
          GetInstanceGroupManagerRequest const& request) = 0;

  virtual future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  AsyncInsertInstanceGroupManager(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<google::cloud::rest_internal::RestContext> rest_context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::cpp::compute::region_instance_group_managers::v1::
          InsertInstanceGroupManagerRequest const& request) = 0;

  virtual StatusOr<google::cloud::cpp::compute::v1::Operation>
  InsertInstanceGroupManager(
      google::cloud::rest_internal::RestContext& rest_context,
      Options const& options,
      google::cloud::cpp::compute::region_instance_group_managers::v1::
          InsertInstanceGroupManagerRequest const& request) = 0;

  virtual StatusOr<
      google::cloud::cpp::compute::v1::RegionInstanceGroupManagerList>
  ListRegionInstanceGroupManagers(
      google::cloud::rest_internal::RestContext& rest_context,
      Options const& options,
      google::cloud::cpp::compute::region_instance_group_managers::v1::
          ListRegionInstanceGroupManagersRequest const& request) = 0;

  virtual StatusOr<google::cloud::cpp::compute::v1::
                       RegionInstanceGroupManagersListErrorsResponse>
  ListErrors(google::cloud::rest_internal::RestContext& rest_context,
             Options const& options,
             google::cloud::cpp::compute::region_instance_group_managers::v1::
                 ListErrorsRequest const& request) = 0;

  virtual StatusOr<google::cloud::cpp::compute::v1::
                       RegionInstanceGroupManagersListInstancesResponse>
  ListManagedInstances(
      google::cloud::rest_internal::RestContext& rest_context,
      Options const& options,
      google::cloud::cpp::compute::region_instance_group_managers::v1::
          ListManagedInstancesRequest const& request) = 0;

  virtual StatusOr<google::cloud::cpp::compute::v1::
                       RegionInstanceGroupManagersListInstanceConfigsResp>
  ListPerInstanceConfigs(
      google::cloud::rest_internal::RestContext& rest_context,
      Options const& options,
      google::cloud::cpp::compute::region_instance_group_managers::v1::
          ListPerInstanceConfigsRequest const& request) = 0;

  virtual future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  AsyncPatchInstanceGroupManager(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<google::cloud::rest_internal::RestContext> rest_context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::cpp::compute::region_instance_group_managers::v1::
          PatchInstanceGroupManagerRequest const& request) = 0;

  virtual StatusOr<google::cloud::cpp::compute::v1::Operation>
  PatchInstanceGroupManager(
      google::cloud::rest_internal::RestContext& rest_context,
      Options const& options,
      google::cloud::cpp::compute::region_instance_group_managers::v1::
          PatchInstanceGroupManagerRequest const& request) = 0;

  virtual future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  AsyncPatchPerInstanceConfigs(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<google::cloud::rest_internal::RestContext> rest_context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::cpp::compute::region_instance_group_managers::v1::
          PatchPerInstanceConfigsRequest const& request) = 0;

  virtual StatusOr<google::cloud::cpp::compute::v1::Operation>
  PatchPerInstanceConfigs(
      google::cloud::rest_internal::RestContext& rest_context,
      Options const& options,
      google::cloud::cpp::compute::region_instance_group_managers::v1::
          PatchPerInstanceConfigsRequest const& request) = 0;

  virtual future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  AsyncRecreateInstances(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<google::cloud::rest_internal::RestContext> rest_context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::cpp::compute::region_instance_group_managers::v1::
          RecreateInstancesRequest const& request) = 0;

  virtual StatusOr<google::cloud::cpp::compute::v1::Operation>
  RecreateInstances(
      google::cloud::rest_internal::RestContext& rest_context,
      Options const& options,
      google::cloud::cpp::compute::region_instance_group_managers::v1::
          RecreateInstancesRequest const& request) = 0;

  virtual future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  AsyncResize(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<google::cloud::rest_internal::RestContext> rest_context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::cpp::compute::region_instance_group_managers::v1::
          ResizeRequest const& request) = 0;

  virtual StatusOr<google::cloud::cpp::compute::v1::Operation> Resize(
      google::cloud::rest_internal::RestContext& rest_context,
      Options const& options,
      google::cloud::cpp::compute::region_instance_group_managers::v1::
          ResizeRequest const& request) = 0;

  virtual future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  AsyncSetInstanceTemplate(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<google::cloud::rest_internal::RestContext> rest_context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::cpp::compute::region_instance_group_managers::v1::
          SetInstanceTemplateRequest const& request) = 0;

  virtual StatusOr<google::cloud::cpp::compute::v1::Operation>
  SetInstanceTemplate(
      google::cloud::rest_internal::RestContext& rest_context,
      Options const& options,
      google::cloud::cpp::compute::region_instance_group_managers::v1::
          SetInstanceTemplateRequest const& request) = 0;

  virtual future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  AsyncSetTargetPools(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<google::cloud::rest_internal::RestContext> rest_context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::cpp::compute::region_instance_group_managers::v1::
          SetTargetPoolsRequest const& request) = 0;

  virtual StatusOr<google::cloud::cpp::compute::v1::Operation> SetTargetPools(
      google::cloud::rest_internal::RestContext& rest_context,
      Options const& options,
      google::cloud::cpp::compute::region_instance_group_managers::v1::
          SetTargetPoolsRequest const& request) = 0;

  virtual future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  AsyncUpdatePerInstanceConfigs(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<google::cloud::rest_internal::RestContext> rest_context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::cpp::compute::region_instance_group_managers::v1::
          UpdatePerInstanceConfigsRequest const& request) = 0;

  virtual StatusOr<google::cloud::cpp::compute::v1::Operation>
  UpdatePerInstanceConfigs(
      google::cloud::rest_internal::RestContext& rest_context,
      Options const& options,
      google::cloud::cpp::compute::region_instance_group_managers::v1::
          UpdatePerInstanceConfigsRequest const& request) = 0;

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

class DefaultRegionInstanceGroupManagersRestStub
    : public RegionInstanceGroupManagersRestStub {
 public:
  ~DefaultRegionInstanceGroupManagersRestStub() override = default;

  explicit DefaultRegionInstanceGroupManagersRestStub(Options options);
  DefaultRegionInstanceGroupManagersRestStub(
      std::shared_ptr<rest_internal::RestClient> service,
      std::shared_ptr<rest_internal::RestClient> operations, Options options);

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  AsyncAbandonInstances(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<google::cloud::rest_internal::RestContext> rest_context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::cpp::compute::region_instance_group_managers::v1::
          AbandonInstancesRequest const& request) override;

  StatusOr<google::cloud::cpp::compute::v1::Operation> AbandonInstances(
      google::cloud::rest_internal::RestContext& rest_context,
      Options const& options,
      google::cloud::cpp::compute::region_instance_group_managers::v1::
          AbandonInstancesRequest const& request) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  AsyncApplyUpdatesToInstances(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<google::cloud::rest_internal::RestContext> rest_context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::cpp::compute::region_instance_group_managers::v1::
          ApplyUpdatesToInstancesRequest const& request) override;

  StatusOr<google::cloud::cpp::compute::v1::Operation> ApplyUpdatesToInstances(
      google::cloud::rest_internal::RestContext& rest_context,
      Options const& options,
      google::cloud::cpp::compute::region_instance_group_managers::v1::
          ApplyUpdatesToInstancesRequest const& request) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  AsyncCreateInstances(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<google::cloud::rest_internal::RestContext> rest_context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::cpp::compute::region_instance_group_managers::v1::
          CreateInstancesRequest const& request) override;

  StatusOr<google::cloud::cpp::compute::v1::Operation> CreateInstances(
      google::cloud::rest_internal::RestContext& rest_context,
      Options const& options,
      google::cloud::cpp::compute::region_instance_group_managers::v1::
          CreateInstancesRequest const& request) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  AsyncDeleteInstanceGroupManager(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<google::cloud::rest_internal::RestContext> rest_context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::cpp::compute::region_instance_group_managers::v1::
          DeleteInstanceGroupManagerRequest const& request) override;

  StatusOr<google::cloud::cpp::compute::v1::Operation>
  DeleteInstanceGroupManager(
      google::cloud::rest_internal::RestContext& rest_context,
      Options const& options,
      google::cloud::cpp::compute::region_instance_group_managers::v1::
          DeleteInstanceGroupManagerRequest const& request) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  AsyncDeleteInstances(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<google::cloud::rest_internal::RestContext> rest_context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::cpp::compute::region_instance_group_managers::v1::
          DeleteInstancesRequest const& request) override;

  StatusOr<google::cloud::cpp::compute::v1::Operation> DeleteInstances(
      google::cloud::rest_internal::RestContext& rest_context,
      Options const& options,
      google::cloud::cpp::compute::region_instance_group_managers::v1::
          DeleteInstancesRequest const& request) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  AsyncDeletePerInstanceConfigs(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<google::cloud::rest_internal::RestContext> rest_context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::cpp::compute::region_instance_group_managers::v1::
          DeletePerInstanceConfigsRequest const& request) override;

  StatusOr<google::cloud::cpp::compute::v1::Operation> DeletePerInstanceConfigs(
      google::cloud::rest_internal::RestContext& rest_context,
      Options const& options,
      google::cloud::cpp::compute::region_instance_group_managers::v1::
          DeletePerInstanceConfigsRequest const& request) override;

  StatusOr<google::cloud::cpp::compute::v1::InstanceGroupManager>
  GetInstanceGroupManager(
      google::cloud::rest_internal::RestContext& rest_context,
      Options const& options,
      google::cloud::cpp::compute::region_instance_group_managers::v1::
          GetInstanceGroupManagerRequest const& request) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  AsyncInsertInstanceGroupManager(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<google::cloud::rest_internal::RestContext> rest_context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::cpp::compute::region_instance_group_managers::v1::
          InsertInstanceGroupManagerRequest const& request) override;

  StatusOr<google::cloud::cpp::compute::v1::Operation>
  InsertInstanceGroupManager(
      google::cloud::rest_internal::RestContext& rest_context,
      Options const& options,
      google::cloud::cpp::compute::region_instance_group_managers::v1::
          InsertInstanceGroupManagerRequest const& request) override;

  StatusOr<google::cloud::cpp::compute::v1::RegionInstanceGroupManagerList>
  ListRegionInstanceGroupManagers(
      google::cloud::rest_internal::RestContext& rest_context,
      Options const& options,
      google::cloud::cpp::compute::region_instance_group_managers::v1::
          ListRegionInstanceGroupManagersRequest const& request) override;

  StatusOr<google::cloud::cpp::compute::v1::
               RegionInstanceGroupManagersListErrorsResponse>
  ListErrors(google::cloud::rest_internal::RestContext& rest_context,
             Options const& options,
             google::cloud::cpp::compute::region_instance_group_managers::v1::
                 ListErrorsRequest const& request) override;

  StatusOr<google::cloud::cpp::compute::v1::
               RegionInstanceGroupManagersListInstancesResponse>
  ListManagedInstances(
      google::cloud::rest_internal::RestContext& rest_context,
      Options const& options,
      google::cloud::cpp::compute::region_instance_group_managers::v1::
          ListManagedInstancesRequest const& request) override;

  StatusOr<google::cloud::cpp::compute::v1::
               RegionInstanceGroupManagersListInstanceConfigsResp>
  ListPerInstanceConfigs(
      google::cloud::rest_internal::RestContext& rest_context,
      Options const& options,
      google::cloud::cpp::compute::region_instance_group_managers::v1::
          ListPerInstanceConfigsRequest const& request) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  AsyncPatchInstanceGroupManager(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<google::cloud::rest_internal::RestContext> rest_context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::cpp::compute::region_instance_group_managers::v1::
          PatchInstanceGroupManagerRequest const& request) override;

  StatusOr<google::cloud::cpp::compute::v1::Operation>
  PatchInstanceGroupManager(
      google::cloud::rest_internal::RestContext& rest_context,
      Options const& options,
      google::cloud::cpp::compute::region_instance_group_managers::v1::
          PatchInstanceGroupManagerRequest const& request) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  AsyncPatchPerInstanceConfigs(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<google::cloud::rest_internal::RestContext> rest_context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::cpp::compute::region_instance_group_managers::v1::
          PatchPerInstanceConfigsRequest const& request) override;

  StatusOr<google::cloud::cpp::compute::v1::Operation> PatchPerInstanceConfigs(
      google::cloud::rest_internal::RestContext& rest_context,
      Options const& options,
      google::cloud::cpp::compute::region_instance_group_managers::v1::
          PatchPerInstanceConfigsRequest const& request) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  AsyncRecreateInstances(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<google::cloud::rest_internal::RestContext> rest_context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::cpp::compute::region_instance_group_managers::v1::
          RecreateInstancesRequest const& request) override;

  StatusOr<google::cloud::cpp::compute::v1::Operation> RecreateInstances(
      google::cloud::rest_internal::RestContext& rest_context,
      Options const& options,
      google::cloud::cpp::compute::region_instance_group_managers::v1::
          RecreateInstancesRequest const& request) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>> AsyncResize(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<google::cloud::rest_internal::RestContext> rest_context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::cpp::compute::region_instance_group_managers::v1::
          ResizeRequest const& request) override;

  StatusOr<google::cloud::cpp::compute::v1::Operation> Resize(
      google::cloud::rest_internal::RestContext& rest_context,
      Options const& options,
      google::cloud::cpp::compute::region_instance_group_managers::v1::
          ResizeRequest const& request) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  AsyncSetInstanceTemplate(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<google::cloud::rest_internal::RestContext> rest_context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::cpp::compute::region_instance_group_managers::v1::
          SetInstanceTemplateRequest const& request) override;

  StatusOr<google::cloud::cpp::compute::v1::Operation> SetInstanceTemplate(
      google::cloud::rest_internal::RestContext& rest_context,
      Options const& options,
      google::cloud::cpp::compute::region_instance_group_managers::v1::
          SetInstanceTemplateRequest const& request) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  AsyncSetTargetPools(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<google::cloud::rest_internal::RestContext> rest_context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::cpp::compute::region_instance_group_managers::v1::
          SetTargetPoolsRequest const& request) override;

  StatusOr<google::cloud::cpp::compute::v1::Operation> SetTargetPools(
      google::cloud::rest_internal::RestContext& rest_context,
      Options const& options,
      google::cloud::cpp::compute::region_instance_group_managers::v1::
          SetTargetPoolsRequest const& request) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  AsyncUpdatePerInstanceConfigs(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<google::cloud::rest_internal::RestContext> rest_context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::cpp::compute::region_instance_group_managers::v1::
          UpdatePerInstanceConfigsRequest const& request) override;

  StatusOr<google::cloud::cpp::compute::v1::Operation> UpdatePerInstanceConfigs(
      google::cloud::rest_internal::RestContext& rest_context,
      Options const& options,
      google::cloud::cpp::compute::region_instance_group_managers::v1::
          UpdatePerInstanceConfigsRequest const& request) override;

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
}  // namespace compute_region_instance_group_managers_v1_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_REGION_INSTANCE_GROUP_MANAGERS_V1_INTERNAL_REGION_INSTANCE_GROUP_MANAGERS_REST_STUB_H
