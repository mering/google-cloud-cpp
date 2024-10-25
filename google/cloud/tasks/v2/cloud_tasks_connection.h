// Copyright 2021 Google LLC
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
// source: google/cloud/tasks/v2/cloudtasks.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_TASKS_V2_CLOUD_TASKS_CONNECTION_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_TASKS_V2_CLOUD_TASKS_CONNECTION_H

#include "google/cloud/tasks/v2/cloud_tasks_connection_idempotency_policy.h"
#include "google/cloud/tasks/v2/internal/cloud_tasks_retry_traits.h"
#include "google/cloud/backoff_policy.h"
#include "google/cloud/internal/retry_policy_impl.h"
#include "google/cloud/options.h"
#include "google/cloud/status_or.h"
#include "google/cloud/stream_range.h"
#include "google/cloud/version.h"
#include "google/cloud/tasks/v2/cloudtasks.pb.h"
#include <memory>

namespace google {
namespace cloud {
namespace tasks_v2 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

/// The retry policy for `CloudTasksConnection`.
class CloudTasksRetryPolicy : public ::google::cloud::RetryPolicy {
 public:
  /// Creates a new instance of the policy, reset to the initial state.
  virtual std::unique_ptr<CloudTasksRetryPolicy> clone() const = 0;
};

/**
 * A retry policy for `CloudTasksConnection` based on counting errors.
 *
 * This policy stops retrying if:
 * - An RPC returns a non-transient error.
 * - More than a prescribed number of transient failures is detected.
 *
 * In this class the following status codes are treated as transient errors:
 * - [`kInternal`](@ref google::cloud::StatusCode)
 * - [`kUnavailable`](@ref google::cloud::StatusCode)
 */
class CloudTasksLimitedErrorCountRetryPolicy : public CloudTasksRetryPolicy {
 public:
  /**
   * Create an instance that tolerates up to @p maximum_failures transient
   * errors.
   *
   * @note Disable the retry loop by providing an instance of this policy with
   *     @p maximum_failures == 0.
   */
  explicit CloudTasksLimitedErrorCountRetryPolicy(int maximum_failures)
      : impl_(maximum_failures) {}

  CloudTasksLimitedErrorCountRetryPolicy(
      CloudTasksLimitedErrorCountRetryPolicy&& rhs) noexcept
      : CloudTasksLimitedErrorCountRetryPolicy(rhs.maximum_failures()) {}
  CloudTasksLimitedErrorCountRetryPolicy(
      CloudTasksLimitedErrorCountRetryPolicy const& rhs) noexcept
      : CloudTasksLimitedErrorCountRetryPolicy(rhs.maximum_failures()) {}

  int maximum_failures() const { return impl_.maximum_failures(); }

  bool OnFailure(Status const& status) override {
    return impl_.OnFailure(status);
  }
  bool IsExhausted() const override { return impl_.IsExhausted(); }
  bool IsPermanentFailure(Status const& status) const override {
    return impl_.IsPermanentFailure(status);
  }
  std::unique_ptr<CloudTasksRetryPolicy> clone() const override {
    return std::make_unique<CloudTasksLimitedErrorCountRetryPolicy>(
        maximum_failures());
  }

  // This is provided only for backwards compatibility.
  using BaseType = CloudTasksRetryPolicy;

 private:
  google::cloud::internal::LimitedErrorCountRetryPolicy<
      tasks_v2_internal::CloudTasksRetryTraits>
      impl_;
};

/**
 * A retry policy for `CloudTasksConnection` based on elapsed time.
 *
 * This policy stops retrying if:
 * - An RPC returns a non-transient error.
 * - The elapsed time in the retry loop exceeds a prescribed duration.
 *
 * In this class the following status codes are treated as transient errors:
 * - [`kInternal`](@ref google::cloud::StatusCode)
 * - [`kUnavailable`](@ref google::cloud::StatusCode)
 */
class CloudTasksLimitedTimeRetryPolicy : public CloudTasksRetryPolicy {
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
  explicit CloudTasksLimitedTimeRetryPolicy(
      std::chrono::duration<DurationRep, DurationPeriod> maximum_duration)
      : impl_(maximum_duration) {}

  CloudTasksLimitedTimeRetryPolicy(
      CloudTasksLimitedTimeRetryPolicy&& rhs) noexcept
      : CloudTasksLimitedTimeRetryPolicy(rhs.maximum_duration()) {}
  CloudTasksLimitedTimeRetryPolicy(
      CloudTasksLimitedTimeRetryPolicy const& rhs) noexcept
      : CloudTasksLimitedTimeRetryPolicy(rhs.maximum_duration()) {}

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
  std::unique_ptr<CloudTasksRetryPolicy> clone() const override {
    return std::make_unique<CloudTasksLimitedTimeRetryPolicy>(
        maximum_duration());
  }

  // This is provided only for backwards compatibility.
  using BaseType = CloudTasksRetryPolicy;

 private:
  google::cloud::internal::LimitedTimeRetryPolicy<
      tasks_v2_internal::CloudTasksRetryTraits>
      impl_;
};

/**
 * The `CloudTasksConnection` object for `CloudTasksClient`.
 *
 * This interface defines virtual methods for each of the user-facing overload
 * sets in `CloudTasksClient`. This allows users to inject custom behavior
 * (e.g., with a Google Mock object) when writing tests that use objects of type
 * `CloudTasksClient`.
 *
 * To create a concrete instance, see `MakeCloudTasksConnection()`.
 *
 * For mocking, see `tasks_v2_mocks::MockCloudTasksConnection`.
 */
class CloudTasksConnection {
 public:
  virtual ~CloudTasksConnection() = 0;

  virtual Options options() { return Options{}; }

  virtual StreamRange<google::cloud::tasks::v2::Queue> ListQueues(
      google::cloud::tasks::v2::ListQueuesRequest request);

  virtual StatusOr<google::cloud::tasks::v2::Queue> GetQueue(
      google::cloud::tasks::v2::GetQueueRequest const& request);

  virtual StatusOr<google::cloud::tasks::v2::Queue> CreateQueue(
      google::cloud::tasks::v2::CreateQueueRequest const& request);

  virtual StatusOr<google::cloud::tasks::v2::Queue> UpdateQueue(
      google::cloud::tasks::v2::UpdateQueueRequest const& request);

  virtual Status DeleteQueue(
      google::cloud::tasks::v2::DeleteQueueRequest const& request);

  virtual StatusOr<google::cloud::tasks::v2::Queue> PurgeQueue(
      google::cloud::tasks::v2::PurgeQueueRequest const& request);

  virtual StatusOr<google::cloud::tasks::v2::Queue> PauseQueue(
      google::cloud::tasks::v2::PauseQueueRequest const& request);

  virtual StatusOr<google::cloud::tasks::v2::Queue> ResumeQueue(
      google::cloud::tasks::v2::ResumeQueueRequest const& request);

  virtual StatusOr<google::iam::v1::Policy> GetIamPolicy(
      google::iam::v1::GetIamPolicyRequest const& request);

  virtual StatusOr<google::iam::v1::Policy> SetIamPolicy(
      google::iam::v1::SetIamPolicyRequest const& request);

  virtual StatusOr<google::iam::v1::TestIamPermissionsResponse>
  TestIamPermissions(google::iam::v1::TestIamPermissionsRequest const& request);

  virtual StreamRange<google::cloud::tasks::v2::Task> ListTasks(
      google::cloud::tasks::v2::ListTasksRequest request);

  virtual StatusOr<google::cloud::tasks::v2::Task> GetTask(
      google::cloud::tasks::v2::GetTaskRequest const& request);

  virtual StatusOr<google::cloud::tasks::v2::Task> CreateTask(
      google::cloud::tasks::v2::CreateTaskRequest const& request);

  virtual Status DeleteTask(
      google::cloud::tasks::v2::DeleteTaskRequest const& request);

  virtual StatusOr<google::cloud::tasks::v2::Task> RunTask(
      google::cloud::tasks::v2::RunTaskRequest const& request);

  virtual StreamRange<google::cloud::location::Location> ListLocations(
      google::cloud::location::ListLocationsRequest request);

  virtual StatusOr<google::cloud::location::Location> GetLocation(
      google::cloud::location::GetLocationRequest const& request);
};

/**
 * A factory function to construct an object of type `CloudTasksConnection`.
 *
 * The returned connection object should not be used directly; instead it
 * should be passed as an argument to the constructor of CloudTasksClient.
 *
 * The optional @p options argument may be used to configure aspects of the
 * returned `CloudTasksConnection`. Expected options are any of the types in
 * the following option lists:
 *
 * - `google::cloud::CommonOptionList`
 * - `google::cloud::GrpcOptionList`
 * - `google::cloud::UnifiedCredentialsOptionList`
 * - `google::cloud::tasks_v2::CloudTasksPolicyOptionList`
 *
 * @note Unexpected options will be ignored. To log unexpected options instead,
 *     set `GOOGLE_CLOUD_CPP_ENABLE_CLOG=yes` in the environment.
 *
 * @param options (optional) Configure the `CloudTasksConnection` created by
 * this function.
 */
std::shared_ptr<CloudTasksConnection> MakeCloudTasksConnection(
    Options options = {});

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace tasks_v2
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_TASKS_V2_CLOUD_TASKS_CONNECTION_H
