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
// source: google/cloud/deploy/v1/cloud_deploy.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DEPLOY_V1_CLOUD_DEPLOY_CONNECTION_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DEPLOY_V1_CLOUD_DEPLOY_CONNECTION_H

#include "google/cloud/deploy/v1/cloud_deploy_connection_idempotency_policy.h"
#include "google/cloud/deploy/v1/internal/cloud_deploy_retry_traits.h"
#include "google/cloud/backoff_policy.h"
#include "google/cloud/future.h"
#include "google/cloud/internal/retry_policy_impl.h"
#include "google/cloud/no_await_tag.h"
#include "google/cloud/options.h"
#include "google/cloud/polling_policy.h"
#include "google/cloud/status_or.h"
#include "google/cloud/stream_range.h"
#include "google/cloud/version.h"
#include "google/cloud/deploy/v1/cloud_deploy.pb.h"
#include "google/longrunning/operations.grpc.pb.h"
#include <memory>

namespace google {
namespace cloud {
namespace deploy_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

/// The retry policy for `CloudDeployConnection`.
class CloudDeployRetryPolicy : public ::google::cloud::RetryPolicy {
 public:
  /// Creates a new instance of the policy, reset to the initial state.
  virtual std::unique_ptr<CloudDeployRetryPolicy> clone() const = 0;
};

/**
 * A retry policy for `CloudDeployConnection` based on counting errors.
 *
 * This policy stops retrying if:
 * - An RPC returns a non-transient error.
 * - More than a prescribed number of transient failures is detected.
 *
 * In this class the following status codes are treated as transient errors:
 * - [`kUnavailable`](@ref google::cloud::StatusCode)
 */
class CloudDeployLimitedErrorCountRetryPolicy : public CloudDeployRetryPolicy {
 public:
  /**
   * Create an instance that tolerates up to @p maximum_failures transient
   * errors.
   *
   * @note Disable the retry loop by providing an instance of this policy with
   *     @p maximum_failures == 0.
   */
  explicit CloudDeployLimitedErrorCountRetryPolicy(int maximum_failures)
      : impl_(maximum_failures) {}

  CloudDeployLimitedErrorCountRetryPolicy(
      CloudDeployLimitedErrorCountRetryPolicy&& rhs) noexcept
      : CloudDeployLimitedErrorCountRetryPolicy(rhs.maximum_failures()) {}
  CloudDeployLimitedErrorCountRetryPolicy(
      CloudDeployLimitedErrorCountRetryPolicy const& rhs) noexcept
      : CloudDeployLimitedErrorCountRetryPolicy(rhs.maximum_failures()) {}

  int maximum_failures() const { return impl_.maximum_failures(); }

  bool OnFailure(Status const& status) override {
    return impl_.OnFailure(status);
  }
  bool IsExhausted() const override { return impl_.IsExhausted(); }
  bool IsPermanentFailure(Status const& status) const override {
    return impl_.IsPermanentFailure(status);
  }
  std::unique_ptr<CloudDeployRetryPolicy> clone() const override {
    return std::make_unique<CloudDeployLimitedErrorCountRetryPolicy>(
        maximum_failures());
  }

  // This is provided only for backwards compatibility.
  using BaseType = CloudDeployRetryPolicy;

 private:
  google::cloud::internal::LimitedErrorCountRetryPolicy<
      deploy_v1_internal::CloudDeployRetryTraits>
      impl_;
};

/**
 * A retry policy for `CloudDeployConnection` based on elapsed time.
 *
 * This policy stops retrying if:
 * - An RPC returns a non-transient error.
 * - The elapsed time in the retry loop exceeds a prescribed duration.
 *
 * In this class the following status codes are treated as transient errors:
 * - [`kUnavailable`](@ref google::cloud::StatusCode)
 */
class CloudDeployLimitedTimeRetryPolicy : public CloudDeployRetryPolicy {
 public:
  /**
   * Constructor given a `std::chrono::duration<>` object.
   *
   * @tparam DurationRep a placeholder to match the `Rep` tparam for @p
   *     duration's type. The semantics of this template parameter are
   *     documented in `std::chrono::duration<>`. In brief, the underlying
   *     arithmetic type used to store the number of ticks. For our purposes it
   *     is simply a formal parameter.
   * @tparam DurationPeriod a placeholder to match the `Period` tparam for @p
   *     duration's type. The semantics of this template parameter are
   *     documented in `std::chrono::duration<>`. In brief, the length of the
   *     tick in seconds, expressed as a `std::ratio<>`. For our purposes it is
   *     simply a formal parameter.
   * @param maximum_duration the maximum time allowed before the policy expires.
   *     While the application can express this time in any units they desire,
   *     the class truncates to milliseconds.
   *
   * @see https://en.cppreference.com/w/cpp/chrono/duration for more information
   *     about `std::chrono::duration`.
   */
  template <typename DurationRep, typename DurationPeriod>
  explicit CloudDeployLimitedTimeRetryPolicy(
      std::chrono::duration<DurationRep, DurationPeriod> maximum_duration)
      : impl_(maximum_duration) {}

  CloudDeployLimitedTimeRetryPolicy(
      CloudDeployLimitedTimeRetryPolicy&& rhs) noexcept
      : CloudDeployLimitedTimeRetryPolicy(rhs.maximum_duration()) {}
  CloudDeployLimitedTimeRetryPolicy(
      CloudDeployLimitedTimeRetryPolicy const& rhs) noexcept
      : CloudDeployLimitedTimeRetryPolicy(rhs.maximum_duration()) {}

  std::chrono::milliseconds maximum_duration() const {
    return impl_.maximum_duration();
  }

  bool OnFailure(Status const& status) override {
    return impl_.OnFailure(status);
  }
  bool IsExhausted() const override { return impl_.IsExhausted(); }
  bool IsPermanentFailure(Status const& status) const override {
    return impl_.IsPermanentFailure(status);
  }
  std::unique_ptr<CloudDeployRetryPolicy> clone() const override {
    return std::make_unique<CloudDeployLimitedTimeRetryPolicy>(
        maximum_duration());
  }

  // This is provided only for backwards compatibility.
  using BaseType = CloudDeployRetryPolicy;

 private:
  google::cloud::internal::LimitedTimeRetryPolicy<
      deploy_v1_internal::CloudDeployRetryTraits>
      impl_;
};

/**
 * The `CloudDeployConnection` object for `CloudDeployClient`.
 *
 * This interface defines virtual methods for each of the user-facing overload
 * sets in `CloudDeployClient`. This allows users to inject custom behavior
 * (e.g., with a Google Mock object) when writing tests that use objects of type
 * `CloudDeployClient`.
 *
 * To create a concrete instance, see `MakeCloudDeployConnection()`.
 *
 * For mocking, see `deploy_v1_mocks::MockCloudDeployConnection`.
 */
class CloudDeployConnection {
 public:
  virtual ~CloudDeployConnection() = 0;

  virtual Options options() { return Options{}; }

  virtual StreamRange<google::cloud::deploy::v1::DeliveryPipeline>
  ListDeliveryPipelines(
      google::cloud::deploy::v1::ListDeliveryPipelinesRequest request);

  virtual StatusOr<google::cloud::deploy::v1::DeliveryPipeline>
  GetDeliveryPipeline(
      google::cloud::deploy::v1::GetDeliveryPipelineRequest const& request);

  virtual future<StatusOr<google::cloud::deploy::v1::DeliveryPipeline>>
  CreateDeliveryPipeline(
      google::cloud::deploy::v1::CreateDeliveryPipelineRequest const& request);

  virtual StatusOr<google::longrunning::Operation> CreateDeliveryPipeline(
      NoAwaitTag,
      google::cloud::deploy::v1::CreateDeliveryPipelineRequest const& request);

  virtual future<StatusOr<google::cloud::deploy::v1::DeliveryPipeline>>
  CreateDeliveryPipeline(google::longrunning::Operation const& operation);

  virtual future<StatusOr<google::cloud::deploy::v1::DeliveryPipeline>>
  UpdateDeliveryPipeline(
      google::cloud::deploy::v1::UpdateDeliveryPipelineRequest const& request);

  virtual StatusOr<google::longrunning::Operation> UpdateDeliveryPipeline(
      NoAwaitTag,
      google::cloud::deploy::v1::UpdateDeliveryPipelineRequest const& request);

  virtual future<StatusOr<google::cloud::deploy::v1::DeliveryPipeline>>
  UpdateDeliveryPipeline(google::longrunning::Operation const& operation);

  virtual future<StatusOr<google::cloud::deploy::v1::OperationMetadata>>
  DeleteDeliveryPipeline(
      google::cloud::deploy::v1::DeleteDeliveryPipelineRequest const& request);

  virtual StatusOr<google::longrunning::Operation> DeleteDeliveryPipeline(
      NoAwaitTag,
      google::cloud::deploy::v1::DeleteDeliveryPipelineRequest const& request);

  virtual future<StatusOr<google::cloud::deploy::v1::OperationMetadata>>
  DeleteDeliveryPipeline(google::longrunning::Operation const& operation);

  virtual StreamRange<google::cloud::deploy::v1::Target> ListTargets(
      google::cloud::deploy::v1::ListTargetsRequest request);

  virtual StatusOr<google::cloud::deploy::v1::RollbackTargetResponse>
  RollbackTarget(
      google::cloud::deploy::v1::RollbackTargetRequest const& request);

  virtual StatusOr<google::cloud::deploy::v1::Target> GetTarget(
      google::cloud::deploy::v1::GetTargetRequest const& request);

  virtual future<StatusOr<google::cloud::deploy::v1::Target>> CreateTarget(
      google::cloud::deploy::v1::CreateTargetRequest const& request);

  virtual StatusOr<google::longrunning::Operation> CreateTarget(
      NoAwaitTag,
      google::cloud::deploy::v1::CreateTargetRequest const& request);

  virtual future<StatusOr<google::cloud::deploy::v1::Target>> CreateTarget(
      google::longrunning::Operation const& operation);

  virtual future<StatusOr<google::cloud::deploy::v1::Target>> UpdateTarget(
      google::cloud::deploy::v1::UpdateTargetRequest const& request);

  virtual StatusOr<google::longrunning::Operation> UpdateTarget(
      NoAwaitTag,
      google::cloud::deploy::v1::UpdateTargetRequest const& request);

  virtual future<StatusOr<google::cloud::deploy::v1::Target>> UpdateTarget(
      google::longrunning::Operation const& operation);

  virtual future<StatusOr<google::cloud::deploy::v1::OperationMetadata>>
  DeleteTarget(google::cloud::deploy::v1::DeleteTargetRequest const& request);

  virtual StatusOr<google::longrunning::Operation> DeleteTarget(
      NoAwaitTag,
      google::cloud::deploy::v1::DeleteTargetRequest const& request);

  virtual future<StatusOr<google::cloud::deploy::v1::OperationMetadata>>
  DeleteTarget(google::longrunning::Operation const& operation);

  virtual StreamRange<google::cloud::deploy::v1::CustomTargetType>
  ListCustomTargetTypes(
      google::cloud::deploy::v1::ListCustomTargetTypesRequest request);

  virtual StatusOr<google::cloud::deploy::v1::CustomTargetType>
  GetCustomTargetType(
      google::cloud::deploy::v1::GetCustomTargetTypeRequest const& request);

  virtual future<StatusOr<google::cloud::deploy::v1::CustomTargetType>>
  CreateCustomTargetType(
      google::cloud::deploy::v1::CreateCustomTargetTypeRequest const& request);

  virtual StatusOr<google::longrunning::Operation> CreateCustomTargetType(
      NoAwaitTag,
      google::cloud::deploy::v1::CreateCustomTargetTypeRequest const& request);

  virtual future<StatusOr<google::cloud::deploy::v1::CustomTargetType>>
  CreateCustomTargetType(google::longrunning::Operation const& operation);

  virtual future<StatusOr<google::cloud::deploy::v1::CustomTargetType>>
  UpdateCustomTargetType(
      google::cloud::deploy::v1::UpdateCustomTargetTypeRequest const& request);

  virtual StatusOr<google::longrunning::Operation> UpdateCustomTargetType(
      NoAwaitTag,
      google::cloud::deploy::v1::UpdateCustomTargetTypeRequest const& request);

  virtual future<StatusOr<google::cloud::deploy::v1::CustomTargetType>>
  UpdateCustomTargetType(google::longrunning::Operation const& operation);

  virtual future<StatusOr<google::cloud::deploy::v1::OperationMetadata>>
  DeleteCustomTargetType(
      google::cloud::deploy::v1::DeleteCustomTargetTypeRequest const& request);

  virtual StatusOr<google::longrunning::Operation> DeleteCustomTargetType(
      NoAwaitTag,
      google::cloud::deploy::v1::DeleteCustomTargetTypeRequest const& request);

  virtual future<StatusOr<google::cloud::deploy::v1::OperationMetadata>>
  DeleteCustomTargetType(google::longrunning::Operation const& operation);

  virtual StreamRange<google::cloud::deploy::v1::Release> ListReleases(
      google::cloud::deploy::v1::ListReleasesRequest request);

  virtual StatusOr<google::cloud::deploy::v1::Release> GetRelease(
      google::cloud::deploy::v1::GetReleaseRequest const& request);

  virtual future<StatusOr<google::cloud::deploy::v1::Release>> CreateRelease(
      google::cloud::deploy::v1::CreateReleaseRequest const& request);

  virtual StatusOr<google::longrunning::Operation> CreateRelease(
      NoAwaitTag,
      google::cloud::deploy::v1::CreateReleaseRequest const& request);

  virtual future<StatusOr<google::cloud::deploy::v1::Release>> CreateRelease(
      google::longrunning::Operation const& operation);

  virtual StatusOr<google::cloud::deploy::v1::AbandonReleaseResponse>
  AbandonRelease(
      google::cloud::deploy::v1::AbandonReleaseRequest const& request);

  virtual future<StatusOr<google::cloud::deploy::v1::DeployPolicy>>
  CreateDeployPolicy(
      google::cloud::deploy::v1::CreateDeployPolicyRequest const& request);

  virtual StatusOr<google::longrunning::Operation> CreateDeployPolicy(
      NoAwaitTag,
      google::cloud::deploy::v1::CreateDeployPolicyRequest const& request);

  virtual future<StatusOr<google::cloud::deploy::v1::DeployPolicy>>
  CreateDeployPolicy(google::longrunning::Operation const& operation);

  virtual future<StatusOr<google::cloud::deploy::v1::DeployPolicy>>
  UpdateDeployPolicy(
      google::cloud::deploy::v1::UpdateDeployPolicyRequest const& request);

  virtual StatusOr<google::longrunning::Operation> UpdateDeployPolicy(
      NoAwaitTag,
      google::cloud::deploy::v1::UpdateDeployPolicyRequest const& request);

  virtual future<StatusOr<google::cloud::deploy::v1::DeployPolicy>>
  UpdateDeployPolicy(google::longrunning::Operation const& operation);

  virtual future<StatusOr<google::cloud::deploy::v1::OperationMetadata>>
  DeleteDeployPolicy(
      google::cloud::deploy::v1::DeleteDeployPolicyRequest const& request);

  virtual StatusOr<google::longrunning::Operation> DeleteDeployPolicy(
      NoAwaitTag,
      google::cloud::deploy::v1::DeleteDeployPolicyRequest const& request);

  virtual future<StatusOr<google::cloud::deploy::v1::OperationMetadata>>
  DeleteDeployPolicy(google::longrunning::Operation const& operation);

  virtual StreamRange<google::cloud::deploy::v1::DeployPolicy>
  ListDeployPolicies(
      google::cloud::deploy::v1::ListDeployPoliciesRequest request);

  virtual StatusOr<google::cloud::deploy::v1::DeployPolicy> GetDeployPolicy(
      google::cloud::deploy::v1::GetDeployPolicyRequest const& request);

  virtual StatusOr<google::cloud::deploy::v1::ApproveRolloutResponse>
  ApproveRollout(
      google::cloud::deploy::v1::ApproveRolloutRequest const& request);

  virtual StatusOr<google::cloud::deploy::v1::AdvanceRolloutResponse>
  AdvanceRollout(
      google::cloud::deploy::v1::AdvanceRolloutRequest const& request);

  virtual StatusOr<google::cloud::deploy::v1::CancelRolloutResponse>
  CancelRollout(google::cloud::deploy::v1::CancelRolloutRequest const& request);

  virtual StreamRange<google::cloud::deploy::v1::Rollout> ListRollouts(
      google::cloud::deploy::v1::ListRolloutsRequest request);

  virtual StatusOr<google::cloud::deploy::v1::Rollout> GetRollout(
      google::cloud::deploy::v1::GetRolloutRequest const& request);

  virtual future<StatusOr<google::cloud::deploy::v1::Rollout>> CreateRollout(
      google::cloud::deploy::v1::CreateRolloutRequest const& request);

  virtual StatusOr<google::longrunning::Operation> CreateRollout(
      NoAwaitTag,
      google::cloud::deploy::v1::CreateRolloutRequest const& request);

  virtual future<StatusOr<google::cloud::deploy::v1::Rollout>> CreateRollout(
      google::longrunning::Operation const& operation);

  virtual StatusOr<google::cloud::deploy::v1::IgnoreJobResponse> IgnoreJob(
      google::cloud::deploy::v1::IgnoreJobRequest const& request);

  virtual StatusOr<google::cloud::deploy::v1::RetryJobResponse> RetryJob(
      google::cloud::deploy::v1::RetryJobRequest const& request);

  virtual StreamRange<google::cloud::deploy::v1::JobRun> ListJobRuns(
      google::cloud::deploy::v1::ListJobRunsRequest request);

  virtual StatusOr<google::cloud::deploy::v1::JobRun> GetJobRun(
      google::cloud::deploy::v1::GetJobRunRequest const& request);

  virtual StatusOr<google::cloud::deploy::v1::TerminateJobRunResponse>
  TerminateJobRun(
      google::cloud::deploy::v1::TerminateJobRunRequest const& request);

  virtual StatusOr<google::cloud::deploy::v1::Config> GetConfig(
      google::cloud::deploy::v1::GetConfigRequest const& request);

  virtual future<StatusOr<google::cloud::deploy::v1::Automation>>
  CreateAutomation(
      google::cloud::deploy::v1::CreateAutomationRequest const& request);

  virtual StatusOr<google::longrunning::Operation> CreateAutomation(
      NoAwaitTag,
      google::cloud::deploy::v1::CreateAutomationRequest const& request);

  virtual future<StatusOr<google::cloud::deploy::v1::Automation>>
  CreateAutomation(google::longrunning::Operation const& operation);

  virtual future<StatusOr<google::cloud::deploy::v1::Automation>>
  UpdateAutomation(
      google::cloud::deploy::v1::UpdateAutomationRequest const& request);

  virtual StatusOr<google::longrunning::Operation> UpdateAutomation(
      NoAwaitTag,
      google::cloud::deploy::v1::UpdateAutomationRequest const& request);

  virtual future<StatusOr<google::cloud::deploy::v1::Automation>>
  UpdateAutomation(google::longrunning::Operation const& operation);

  virtual future<StatusOr<google::cloud::deploy::v1::OperationMetadata>>
  DeleteAutomation(
      google::cloud::deploy::v1::DeleteAutomationRequest const& request);

  virtual StatusOr<google::longrunning::Operation> DeleteAutomation(
      NoAwaitTag,
      google::cloud::deploy::v1::DeleteAutomationRequest const& request);

  virtual future<StatusOr<google::cloud::deploy::v1::OperationMetadata>>
  DeleteAutomation(google::longrunning::Operation const& operation);

  virtual StatusOr<google::cloud::deploy::v1::Automation> GetAutomation(
      google::cloud::deploy::v1::GetAutomationRequest const& request);

  virtual StreamRange<google::cloud::deploy::v1::Automation> ListAutomations(
      google::cloud::deploy::v1::ListAutomationsRequest request);

  virtual StatusOr<google::cloud::deploy::v1::AutomationRun> GetAutomationRun(
      google::cloud::deploy::v1::GetAutomationRunRequest const& request);

  virtual StreamRange<google::cloud::deploy::v1::AutomationRun>
  ListAutomationRuns(
      google::cloud::deploy::v1::ListAutomationRunsRequest request);

  virtual StatusOr<google::cloud::deploy::v1::CancelAutomationRunResponse>
  CancelAutomationRun(
      google::cloud::deploy::v1::CancelAutomationRunRequest const& request);

  virtual StreamRange<google::cloud::location::Location> ListLocations(
      google::cloud::location::ListLocationsRequest request);

  virtual StatusOr<google::cloud::location::Location> GetLocation(
      google::cloud::location::GetLocationRequest const& request);

  virtual StatusOr<google::iam::v1::Policy> SetIamPolicy(
      google::iam::v1::SetIamPolicyRequest const& request);

  virtual StatusOr<google::iam::v1::Policy> GetIamPolicy(
      google::iam::v1::GetIamPolicyRequest const& request);

  virtual StatusOr<google::iam::v1::TestIamPermissionsResponse>
  TestIamPermissions(google::iam::v1::TestIamPermissionsRequest const& request);

  virtual StreamRange<google::longrunning::Operation> ListOperations(
      google::longrunning::ListOperationsRequest request);

  virtual StatusOr<google::longrunning::Operation> GetOperation(
      google::longrunning::GetOperationRequest const& request);

  virtual Status DeleteOperation(
      google::longrunning::DeleteOperationRequest const& request);

  virtual Status CancelOperation(
      google::longrunning::CancelOperationRequest const& request);
};

/**
 * A factory function to construct an object of type `CloudDeployConnection`.
 *
 * The returned connection object should not be used directly; instead it
 * should be passed as an argument to the constructor of CloudDeployClient.
 *
 * The optional @p options argument may be used to configure aspects of the
 * returned `CloudDeployConnection`. Expected options are any of the types in
 * the following option lists:
 *
 * - `google::cloud::CommonOptionList`
 * - `google::cloud::GrpcOptionList`
 * - `google::cloud::UnifiedCredentialsOptionList`
 * - `google::cloud::deploy_v1::CloudDeployPolicyOptionList`
 *
 * @note Unexpected options will be ignored. To log unexpected options instead,
 *     set `GOOGLE_CLOUD_CPP_ENABLE_CLOG=yes` in the environment.
 *
 * @param options (optional) Configure the `CloudDeployConnection` created by
 * this function.
 */
std::shared_ptr<CloudDeployConnection> MakeCloudDeployConnection(
    Options options = {});

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace deploy_v1
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DEPLOY_V1_CLOUD_DEPLOY_CONNECTION_H
