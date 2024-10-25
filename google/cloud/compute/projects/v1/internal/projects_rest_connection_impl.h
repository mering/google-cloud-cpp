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
// source: google/cloud/compute/projects/v1/projects.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_PROJECTS_V1_INTERNAL_PROJECTS_REST_CONNECTION_IMPL_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_PROJECTS_V1_INTERNAL_PROJECTS_REST_CONNECTION_IMPL_H

#include "google/cloud/compute/projects/v1/internal/projects_rest_stub.h"
#include "google/cloud/compute/projects/v1/internal/projects_retry_traits.h"
#include "google/cloud/compute/projects/v1/projects_connection.h"
#include "google/cloud/compute/projects/v1/projects_connection_idempotency_policy.h"
#include "google/cloud/compute/projects/v1/projects_options.h"
#include "google/cloud/background_threads.h"
#include "google/cloud/backoff_policy.h"
#include "google/cloud/options.h"
#include "google/cloud/status_or.h"
#include "google/cloud/stream_range.h"
#include "google/cloud/version.h"
#include "google/cloud/compute/global_operations/v1/global_operations.pb.h"
#include <memory>

namespace google {
namespace cloud {
namespace compute_projects_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class ProjectsRestConnectionImpl
    : public compute_projects_v1::ProjectsConnection {
 public:
  ~ProjectsRestConnectionImpl() override = default;

  ProjectsRestConnectionImpl(
      std::unique_ptr<google::cloud::BackgroundThreads> background,
      std::shared_ptr<compute_projects_v1_internal::ProjectsRestStub> stub,
      Options options);

  Options options() override { return options_; }

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>> DisableXpnHost(
      google::cloud::cpp::compute::projects::v1::DisableXpnHostRequest const&
          request) override;

  StatusOr<google::cloud::cpp::compute::v1::Operation> DisableXpnHost(
      NoAwaitTag,
      google::cloud::cpp::compute::projects::v1::DisableXpnHostRequest const&
          request) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>> DisableXpnHost(
      google::cloud::cpp::compute::v1::Operation const& operation) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  DisableXpnResource(google::cloud::cpp::compute::projects::v1::
                         DisableXpnResourceRequest const& request) override;

  StatusOr<google::cloud::cpp::compute::v1::Operation> DisableXpnResource(
      NoAwaitTag, google::cloud::cpp::compute::projects::v1::
                      DisableXpnResourceRequest const& request) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  DisableXpnResource(
      google::cloud::cpp::compute::v1::Operation const& operation) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>> EnableXpnHost(
      google::cloud::cpp::compute::projects::v1::EnableXpnHostRequest const&
          request) override;

  StatusOr<google::cloud::cpp::compute::v1::Operation> EnableXpnHost(
      NoAwaitTag,
      google::cloud::cpp::compute::projects::v1::EnableXpnHostRequest const&
          request) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>> EnableXpnHost(
      google::cloud::cpp::compute::v1::Operation const& operation) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  EnableXpnResource(
      google::cloud::cpp::compute::projects::v1::EnableXpnResourceRequest const&
          request) override;

  StatusOr<google::cloud::cpp::compute::v1::Operation> EnableXpnResource(
      NoAwaitTag,
      google::cloud::cpp::compute::projects::v1::EnableXpnResourceRequest const&
          request) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  EnableXpnResource(
      google::cloud::cpp::compute::v1::Operation const& operation) override;

  StatusOr<google::cloud::cpp::compute::v1::Project> GetProject(
      google::cloud::cpp::compute::projects::v1::GetProjectRequest const&
          request) override;

  StatusOr<google::cloud::cpp::compute::v1::Project> GetXpnHost(
      google::cloud::cpp::compute::projects::v1::GetXpnHostRequest const&
          request) override;

  StatusOr<google::cloud::cpp::compute::v1::ProjectsGetXpnResources>
  GetXpnResources(
      google::cloud::cpp::compute::projects::v1::GetXpnResourcesRequest const&
          request) override;

  StreamRange<google::cloud::cpp::compute::v1::Project> ListXpnHosts(
      google::cloud::cpp::compute::projects::v1::ListXpnHostsRequest request)
      override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>> MoveDisk(
      google::cloud::cpp::compute::projects::v1::MoveDiskRequest const& request)
      override;

  StatusOr<google::cloud::cpp::compute::v1::Operation> MoveDisk(
      NoAwaitTag,
      google::cloud::cpp::compute::projects::v1::MoveDiskRequest const& request)
      override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>> MoveDisk(
      google::cloud::cpp::compute::v1::Operation const& operation) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>> MoveInstance(
      google::cloud::cpp::compute::projects::v1::MoveInstanceRequest const&
          request) override;

  StatusOr<google::cloud::cpp::compute::v1::Operation> MoveInstance(
      NoAwaitTag,
      google::cloud::cpp::compute::projects::v1::MoveInstanceRequest const&
          request) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>> MoveInstance(
      google::cloud::cpp::compute::v1::Operation const& operation) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  SetCloudArmorTier(
      google::cloud::cpp::compute::projects::v1::SetCloudArmorTierRequest const&
          request) override;

  StatusOr<google::cloud::cpp::compute::v1::Operation> SetCloudArmorTier(
      NoAwaitTag,
      google::cloud::cpp::compute::projects::v1::SetCloudArmorTierRequest const&
          request) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  SetCloudArmorTier(
      google::cloud::cpp::compute::v1::Operation const& operation) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  SetCommonInstanceMetadata(
      google::cloud::cpp::compute::projects::v1::
          SetCommonInstanceMetadataRequest const& request) override;

  StatusOr<google::cloud::cpp::compute::v1::Operation>
  SetCommonInstanceMetadata(
      NoAwaitTag, google::cloud::cpp::compute::projects::v1::
                      SetCommonInstanceMetadataRequest const& request) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  SetCommonInstanceMetadata(
      google::cloud::cpp::compute::v1::Operation const& operation) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  SetDefaultNetworkTier(
      google::cloud::cpp::compute::projects::v1::
          SetDefaultNetworkTierRequest const& request) override;

  StatusOr<google::cloud::cpp::compute::v1::Operation> SetDefaultNetworkTier(
      NoAwaitTag, google::cloud::cpp::compute::projects::v1::
                      SetDefaultNetworkTierRequest const& request) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  SetDefaultNetworkTier(
      google::cloud::cpp::compute::v1::Operation const& operation) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  SetUsageExportBucket(google::cloud::cpp::compute::projects::v1::
                           SetUsageExportBucketRequest const& request) override;

  StatusOr<google::cloud::cpp::compute::v1::Operation> SetUsageExportBucket(
      NoAwaitTag, google::cloud::cpp::compute::projects::v1::
                      SetUsageExportBucketRequest const& request) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  SetUsageExportBucket(
      google::cloud::cpp::compute::v1::Operation const& operation) override;

 private:
  static std::unique_ptr<compute_projects_v1::ProjectsRetryPolicy> retry_policy(
      Options const& options) {
    return options.get<compute_projects_v1::ProjectsRetryPolicyOption>()
        ->clone();
  }

  static std::unique_ptr<BackoffPolicy> backoff_policy(Options const& options) {
    return options.get<compute_projects_v1::ProjectsBackoffPolicyOption>()
        ->clone();
  }

  static std::unique_ptr<
      compute_projects_v1::ProjectsConnectionIdempotencyPolicy>
  idempotency_policy(Options const& options) {
    return options
        .get<compute_projects_v1::ProjectsConnectionIdempotencyPolicyOption>()
        ->clone();
  }

  static std::unique_ptr<PollingPolicy> polling_policy(Options const& options) {
    return options.get<compute_projects_v1::ProjectsPollingPolicyOption>()
        ->clone();
  }

  std::unique_ptr<google::cloud::BackgroundThreads> background_;
  std::shared_ptr<compute_projects_v1_internal::ProjectsRestStub> stub_;
  Options options_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_projects_v1_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_PROJECTS_V1_INTERNAL_PROJECTS_REST_CONNECTION_IMPL_H
