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
// source: google/pubsub/v1/pubsub.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_PUBSUB_ADMIN_TOPIC_ADMIN_CONNECTION_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_PUBSUB_ADMIN_TOPIC_ADMIN_CONNECTION_H

#include "google/cloud/pubsub/admin/internal/topic_admin_retry_traits.h"
#include "google/cloud/pubsub/admin/topic_admin_connection_idempotency_policy.h"
#include "google/cloud/backoff_policy.h"
#include "google/cloud/internal/retry_policy_impl.h"
#include "google/cloud/options.h"
#include "google/cloud/status_or.h"
#include "google/cloud/stream_range.h"
#include "google/cloud/version.h"
#include "google/pubsub/v1/pubsub.pb.h"
#include <memory>

namespace google {
namespace cloud {
namespace pubsub_admin {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

/// The retry policy for `TopicAdminConnection`.
class TopicAdminRetryPolicy : public ::google::cloud::RetryPolicy {
 public:
  /// Creates a new instance of the policy, reset to the initial state.
  virtual std::unique_ptr<TopicAdminRetryPolicy> clone() const = 0;
};

/**
 * A retry policy for `TopicAdminConnection` based on counting errors.
 *
 * This policy stops retrying if:
 * - An RPC returns a non-transient error.
 * - More than a prescribed number of transient failures is detected.
 *
 * In this class the following status codes are treated as transient errors:
 * - [`kUnavailable`](@ref google::cloud::StatusCode)
 */
class TopicAdminLimitedErrorCountRetryPolicy : public TopicAdminRetryPolicy {
 public:
  /**
   * Create an instance that tolerates up to @p maximum_failures transient
   * errors.
   *
   * @note Disable the retry loop by providing an instance of this policy with
   *     @p maximum_failures == 0.
   */
  explicit TopicAdminLimitedErrorCountRetryPolicy(int maximum_failures)
      : impl_(maximum_failures) {}

  TopicAdminLimitedErrorCountRetryPolicy(
      TopicAdminLimitedErrorCountRetryPolicy&& rhs) noexcept
      : TopicAdminLimitedErrorCountRetryPolicy(rhs.maximum_failures()) {}
  TopicAdminLimitedErrorCountRetryPolicy(
      TopicAdminLimitedErrorCountRetryPolicy const& rhs) noexcept
      : TopicAdminLimitedErrorCountRetryPolicy(rhs.maximum_failures()) {}

  int maximum_failures() const { return impl_.maximum_failures(); }

  bool OnFailure(Status const& status) override {
    return impl_.OnFailure(status);
  }
  bool IsExhausted() const override { return impl_.IsExhausted(); }
  bool IsPermanentFailure(Status const& status) const override {
    return impl_.IsPermanentFailure(status);
  }
  std::unique_ptr<TopicAdminRetryPolicy> clone() const override {
    return std::make_unique<TopicAdminLimitedErrorCountRetryPolicy>(
        maximum_failures());
  }

  // This is provided only for backwards compatibility.
  using BaseType = TopicAdminRetryPolicy;

 private:
  google::cloud::internal::LimitedErrorCountRetryPolicy<
      pubsub_admin_internal::TopicAdminRetryTraits>
      impl_;
};

/**
 * A retry policy for `TopicAdminConnection` based on elapsed time.
 *
 * This policy stops retrying if:
 * - An RPC returns a non-transient error.
 * - The elapsed time in the retry loop exceeds a prescribed duration.
 *
 * In this class the following status codes are treated as transient errors:
 * - [`kUnavailable`](@ref google::cloud::StatusCode)
 */
class TopicAdminLimitedTimeRetryPolicy : public TopicAdminRetryPolicy {
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
  explicit TopicAdminLimitedTimeRetryPolicy(
      std::chrono::duration<DurationRep, DurationPeriod> maximum_duration)
      : impl_(maximum_duration) {}

  TopicAdminLimitedTimeRetryPolicy(
      TopicAdminLimitedTimeRetryPolicy&& rhs) noexcept
      : TopicAdminLimitedTimeRetryPolicy(rhs.maximum_duration()) {}
  TopicAdminLimitedTimeRetryPolicy(
      TopicAdminLimitedTimeRetryPolicy const& rhs) noexcept
      : TopicAdminLimitedTimeRetryPolicy(rhs.maximum_duration()) {}

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
  std::unique_ptr<TopicAdminRetryPolicy> clone() const override {
    return std::make_unique<TopicAdminLimitedTimeRetryPolicy>(
        maximum_duration());
  }

  // This is provided only for backwards compatibility.
  using BaseType = TopicAdminRetryPolicy;

 private:
  google::cloud::internal::LimitedTimeRetryPolicy<
      pubsub_admin_internal::TopicAdminRetryTraits>
      impl_;
};

/**
 * The `TopicAdminConnection` object for `TopicAdminClient`.
 *
 * This interface defines virtual methods for each of the user-facing overload
 * sets in `TopicAdminClient`. This allows users to inject custom behavior
 * (e.g., with a Google Mock object) when writing tests that use objects of type
 * `TopicAdminClient`.
 *
 * To create a concrete instance, see `MakeTopicAdminConnection()`.
 *
 * For mocking, see `pubsub_admin_mocks::MockTopicAdminConnection`.
 */
class TopicAdminConnection {
 public:
  virtual ~TopicAdminConnection() = 0;

  virtual Options options() { return Options{}; }

  virtual StatusOr<google::pubsub::v1::Topic> CreateTopic(
      google::pubsub::v1::Topic const& request);

  virtual StatusOr<google::pubsub::v1::Topic> UpdateTopic(
      google::pubsub::v1::UpdateTopicRequest const& request);

  virtual StatusOr<google::pubsub::v1::Topic> GetTopic(
      google::pubsub::v1::GetTopicRequest const& request);

  virtual StreamRange<google::pubsub::v1::Topic> ListTopics(
      google::pubsub::v1::ListTopicsRequest request);

  virtual StreamRange<std::string> ListTopicSubscriptions(
      google::pubsub::v1::ListTopicSubscriptionsRequest request);

  virtual StreamRange<std::string> ListTopicSnapshots(
      google::pubsub::v1::ListTopicSnapshotsRequest request);

  virtual Status DeleteTopic(
      google::pubsub::v1::DeleteTopicRequest const& request);

  virtual StatusOr<google::pubsub::v1::DetachSubscriptionResponse>
  DetachSubscription(
      google::pubsub::v1::DetachSubscriptionRequest const& request);

  virtual StatusOr<google::iam::v1::Policy> SetIamPolicy(
      google::iam::v1::SetIamPolicyRequest const& request);

  virtual StatusOr<google::iam::v1::Policy> GetIamPolicy(
      google::iam::v1::GetIamPolicyRequest const& request);

  virtual StatusOr<google::iam::v1::TestIamPermissionsResponse>
  TestIamPermissions(google::iam::v1::TestIamPermissionsRequest const& request);
};

/**
 * A factory function to construct an object of type `TopicAdminConnection`.
 *
 * The returned connection object should not be used directly; instead it
 * should be passed as an argument to the constructor of TopicAdminClient.
 *
 * The optional @p options argument may be used to configure aspects of the
 * returned `TopicAdminConnection`. Expected options are any of the types in
 * the following option lists:
 *
 * - `google::cloud::CommonOptionList`
 * - `google::cloud::GrpcOptionList`
 * - `google::cloud::UnifiedCredentialsOptionList`
 * - `google::cloud::pubsub_admin::TopicAdminPolicyOptionList`
 *
 * @note Unexpected options will be ignored. To log unexpected options instead,
 *     set `GOOGLE_CLOUD_CPP_ENABLE_CLOG=yes` in the environment.
 *
 * @param options (optional) Configure the `TopicAdminConnection` created by
 * this function.
 */
std::shared_ptr<TopicAdminConnection> MakeTopicAdminConnection(
    Options options = {});

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace pubsub_admin
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_PUBSUB_ADMIN_TOPIC_ADMIN_CONNECTION_H
