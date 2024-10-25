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

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_REGION_INSTANCE_GROUP_MANAGERS_V1_INTERNAL_REGION_INSTANCE_GROUP_MANAGERS_REST_CONNECTION_IMPL_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_REGION_INSTANCE_GROUP_MANAGERS_V1_INTERNAL_REGION_INSTANCE_GROUP_MANAGERS_REST_CONNECTION_IMPL_H

#include "google/cloud/compute/region_instance_group_managers/v1/internal/region_instance_group_managers_rest_stub.h"
#include "google/cloud/compute/region_instance_group_managers/v1/internal/region_instance_group_managers_retry_traits.h"
#include "google/cloud/compute/region_instance_group_managers/v1/region_instance_group_managers_connection.h"
#include "google/cloud/compute/region_instance_group_managers/v1/region_instance_group_managers_connection_idempotency_policy.h"
#include "google/cloud/compute/region_instance_group_managers/v1/region_instance_group_managers_options.h"
#include "google/cloud/compute/region_operations/v1/region_operations.pb.h"
#include "google/cloud/background_threads.h"
#include "google/cloud/backoff_policy.h"
#include "google/cloud/options.h"
#include "google/cloud/status_or.h"
#include "google/cloud/stream_range.h"
#include "google/cloud/version.h"
#include <memory>

namespace google {
namespace cloud {
namespace compute_region_instance_group_managers_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class RegionInstanceGroupManagersRestConnectionImpl
    : public compute_region_instance_group_managers_v1::
          RegionInstanceGroupManagersConnection {
 public:
  ~RegionInstanceGroupManagersRestConnectionImpl() override = default;

  RegionInstanceGroupManagersRestConnectionImpl(
      std::unique_ptr<google::cloud::BackgroundThreads> background,
      std::shared_ptr<compute_region_instance_group_managers_v1_internal::
                          RegionInstanceGroupManagersRestStub>
          stub,
      Options options);

  Options options() override { return options_; }

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>> AbandonInstances(
      google::cloud::cpp::compute::region_instance_group_managers::v1::
          AbandonInstancesRequest const& request) override;

  StatusOr<google::cloud::cpp::compute::v1::Operation> AbandonInstances(
      NoAwaitTag, google::cloud::cpp::compute::region_instance_group_managers::
                      v1::AbandonInstancesRequest const& request) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>> AbandonInstances(
      google::cloud::cpp::compute::v1::Operation const& operation) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  ApplyUpdatesToInstances(
      google::cloud::cpp::compute::region_instance_group_managers::v1::
          ApplyUpdatesToInstancesRequest const& request) override;

  StatusOr<google::cloud::cpp::compute::v1::Operation> ApplyUpdatesToInstances(
      NoAwaitTag,
      google::cloud::cpp::compute::region_instance_group_managers::v1::
          ApplyUpdatesToInstancesRequest const& request) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  ApplyUpdatesToInstances(
      google::cloud::cpp::compute::v1::Operation const& operation) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>> CreateInstances(
      google::cloud::cpp::compute::region_instance_group_managers::v1::
          CreateInstancesRequest const& request) override;

  StatusOr<google::cloud::cpp::compute::v1::Operation> CreateInstances(
      NoAwaitTag, google::cloud::cpp::compute::region_instance_group_managers::
                      v1::CreateInstancesRequest const& request) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>> CreateInstances(
      google::cloud::cpp::compute::v1::Operation const& operation) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  DeleteInstanceGroupManager(
      google::cloud::cpp::compute::region_instance_group_managers::v1::
          DeleteInstanceGroupManagerRequest const& request) override;

  StatusOr<google::cloud::cpp::compute::v1::Operation>
  DeleteInstanceGroupManager(
      NoAwaitTag,
      google::cloud::cpp::compute::region_instance_group_managers::v1::
          DeleteInstanceGroupManagerRequest const& request) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  DeleteInstanceGroupManager(
      google::cloud::cpp::compute::v1::Operation const& operation) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>> DeleteInstances(
      google::cloud::cpp::compute::region_instance_group_managers::v1::
          DeleteInstancesRequest const& request) override;

  StatusOr<google::cloud::cpp::compute::v1::Operation> DeleteInstances(
      NoAwaitTag, google::cloud::cpp::compute::region_instance_group_managers::
                      v1::DeleteInstancesRequest const& request) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>> DeleteInstances(
      google::cloud::cpp::compute::v1::Operation const& operation) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  DeletePerInstanceConfigs(
      google::cloud::cpp::compute::region_instance_group_managers::v1::
          DeletePerInstanceConfigsRequest const& request) override;

  StatusOr<google::cloud::cpp::compute::v1::Operation> DeletePerInstanceConfigs(
      NoAwaitTag,
      google::cloud::cpp::compute::region_instance_group_managers::v1::
          DeletePerInstanceConfigsRequest const& request) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  DeletePerInstanceConfigs(
      google::cloud::cpp::compute::v1::Operation const& operation) override;

  StatusOr<google::cloud::cpp::compute::v1::InstanceGroupManager>
  GetInstanceGroupManager(
      google::cloud::cpp::compute::region_instance_group_managers::v1::
          GetInstanceGroupManagerRequest const& request) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  InsertInstanceGroupManager(
      google::cloud::cpp::compute::region_instance_group_managers::v1::
          InsertInstanceGroupManagerRequest const& request) override;

  StatusOr<google::cloud::cpp::compute::v1::Operation>
  InsertInstanceGroupManager(
      NoAwaitTag,
      google::cloud::cpp::compute::region_instance_group_managers::v1::
          InsertInstanceGroupManagerRequest const& request) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  InsertInstanceGroupManager(
      google::cloud::cpp::compute::v1::Operation const& operation) override;

  StreamRange<google::cloud::cpp::compute::v1::InstanceGroupManager>
  ListRegionInstanceGroupManagers(
      google::cloud::cpp::compute::region_instance_group_managers::v1::
          ListRegionInstanceGroupManagersRequest request) override;

  StreamRange<google::cloud::cpp::compute::v1::InstanceManagedByIgmError>
  ListErrors(google::cloud::cpp::compute::region_instance_group_managers::v1::
                 ListErrorsRequest request) override;

  StatusOr<google::cloud::cpp::compute::v1::
               RegionInstanceGroupManagersListInstancesResponse>
  ListManagedInstances(
      google::cloud::cpp::compute::region_instance_group_managers::v1::
          ListManagedInstancesRequest const& request) override;

  StreamRange<google::cloud::cpp::compute::v1::PerInstanceConfig>
  ListPerInstanceConfigs(
      google::cloud::cpp::compute::region_instance_group_managers::v1::
          ListPerInstanceConfigsRequest request) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  PatchInstanceGroupManager(
      google::cloud::cpp::compute::region_instance_group_managers::v1::
          PatchInstanceGroupManagerRequest const& request) override;

  StatusOr<google::cloud::cpp::compute::v1::Operation>
  PatchInstanceGroupManager(
      NoAwaitTag,
      google::cloud::cpp::compute::region_instance_group_managers::v1::
          PatchInstanceGroupManagerRequest const& request) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  PatchInstanceGroupManager(
      google::cloud::cpp::compute::v1::Operation const& operation) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  PatchPerInstanceConfigs(
      google::cloud::cpp::compute::region_instance_group_managers::v1::
          PatchPerInstanceConfigsRequest const& request) override;

  StatusOr<google::cloud::cpp::compute::v1::Operation> PatchPerInstanceConfigs(
      NoAwaitTag,
      google::cloud::cpp::compute::region_instance_group_managers::v1::
          PatchPerInstanceConfigsRequest const& request) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  PatchPerInstanceConfigs(
      google::cloud::cpp::compute::v1::Operation const& operation) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  RecreateInstances(
      google::cloud::cpp::compute::region_instance_group_managers::v1::
          RecreateInstancesRequest const& request) override;

  StatusOr<google::cloud::cpp::compute::v1::Operation> RecreateInstances(
      NoAwaitTag, google::cloud::cpp::compute::region_instance_group_managers::
                      v1::RecreateInstancesRequest const& request) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  RecreateInstances(
      google::cloud::cpp::compute::v1::Operation const& operation) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>> Resize(
      google::cloud::cpp::compute::region_instance_group_managers::v1::
          ResizeRequest const& request) override;

  StatusOr<google::cloud::cpp::compute::v1::Operation> Resize(
      NoAwaitTag, google::cloud::cpp::compute::region_instance_group_managers::
                      v1::ResizeRequest const& request) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>> Resize(
      google::cloud::cpp::compute::v1::Operation const& operation) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  SetInstanceTemplate(
      google::cloud::cpp::compute::region_instance_group_managers::v1::
          SetInstanceTemplateRequest const& request) override;

  StatusOr<google::cloud::cpp::compute::v1::Operation> SetInstanceTemplate(
      NoAwaitTag, google::cloud::cpp::compute::region_instance_group_managers::
                      v1::SetInstanceTemplateRequest const& request) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  SetInstanceTemplate(
      google::cloud::cpp::compute::v1::Operation const& operation) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>> SetTargetPools(
      google::cloud::cpp::compute::region_instance_group_managers::v1::
          SetTargetPoolsRequest const& request) override;

  StatusOr<google::cloud::cpp::compute::v1::Operation> SetTargetPools(
      NoAwaitTag, google::cloud::cpp::compute::region_instance_group_managers::
                      v1::SetTargetPoolsRequest const& request) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>> SetTargetPools(
      google::cloud::cpp::compute::v1::Operation const& operation) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  UpdatePerInstanceConfigs(
      google::cloud::cpp::compute::region_instance_group_managers::v1::
          UpdatePerInstanceConfigsRequest const& request) override;

  StatusOr<google::cloud::cpp::compute::v1::Operation> UpdatePerInstanceConfigs(
      NoAwaitTag,
      google::cloud::cpp::compute::region_instance_group_managers::v1::
          UpdatePerInstanceConfigsRequest const& request) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  UpdatePerInstanceConfigs(
      google::cloud::cpp::compute::v1::Operation const& operation) override;

 private:
  static std::unique_ptr<compute_region_instance_group_managers_v1::
                             RegionInstanceGroupManagersRetryPolicy>
  retry_policy(Options const& options) {
    return options
        .get<compute_region_instance_group_managers_v1::
                 RegionInstanceGroupManagersRetryPolicyOption>()
        ->clone();
  }

  static std::unique_ptr<BackoffPolicy> backoff_policy(Options const& options) {
    return options
        .get<compute_region_instance_group_managers_v1::
                 RegionInstanceGroupManagersBackoffPolicyOption>()
        ->clone();
  }

  static std::unique_ptr<
      compute_region_instance_group_managers_v1::
          RegionInstanceGroupManagersConnectionIdempotencyPolicy>
  idempotency_policy(Options const& options) {
    return options
        .get<compute_region_instance_group_managers_v1::
                 RegionInstanceGroupManagersConnectionIdempotencyPolicyOption>()
        ->clone();
  }

  static std::unique_ptr<PollingPolicy> polling_policy(Options const& options) {
    return options
        .get<compute_region_instance_group_managers_v1::
                 RegionInstanceGroupManagersPollingPolicyOption>()
        ->clone();
  }

  std::unique_ptr<google::cloud::BackgroundThreads> background_;
  std::shared_ptr<compute_region_instance_group_managers_v1_internal::
                      RegionInstanceGroupManagersRestStub>
      stub_;
  Options options_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_region_instance_group_managers_v1_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_REGION_INSTANCE_GROUP_MANAGERS_V1_INTERNAL_REGION_INSTANCE_GROUP_MANAGERS_REST_CONNECTION_IMPL_H
