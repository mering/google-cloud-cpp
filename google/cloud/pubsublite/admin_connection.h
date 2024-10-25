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
// source: google/cloud/pubsublite/v1/admin.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_PUBSUBLITE_ADMIN_CONNECTION_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_PUBSUBLITE_ADMIN_CONNECTION_H

#include "google/cloud/pubsublite/admin_connection_idempotency_policy.h"
#include "google/cloud/pubsublite/internal/admin_retry_traits.h"
#include "google/cloud/pubsublite/v1/admin.pb.h"
#include "google/cloud/backoff_policy.h"
#include "google/cloud/future.h"
#include "google/cloud/internal/retry_policy_impl.h"
#include "google/cloud/no_await_tag.h"
#include "google/cloud/options.h"
#include "google/cloud/polling_policy.h"
#include "google/cloud/status_or.h"
#include "google/cloud/stream_range.h"
#include "google/cloud/version.h"
#include "google/longrunning/operations.grpc.pb.h"
#include <memory>

namespace google {
namespace cloud {
namespace pubsublite {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

/// The retry policy for `AdminServiceConnection`.
class AdminServiceRetryPolicy : public ::google::cloud::RetryPolicy {
 public:
  /// Creates a new instance of the policy, reset to the initial state.
  virtual std::unique_ptr<AdminServiceRetryPolicy> clone() const = 0;
};

/**
 * A retry policy for `AdminServiceConnection` based on counting errors.
 *
 * This policy stops retrying if:
 * - An RPC returns a non-transient error.
 * - More than a prescribed number of transient failures is detected.
 *
 * In this class the following status codes are treated as transient errors:
 * - [`kInternal`](@ref google::cloud::StatusCode)
 * - [`kUnavailable`](@ref google::cloud::StatusCode)
 */
class AdminServiceLimitedErrorCountRetryPolicy
    : public AdminServiceRetryPolicy {
 public:
  /**
   * Create an instance that tolerates up to @p maximum_failures transient
   * errors.
   *
   * @note Disable the retry loop by providing an instance of this policy with
   *     @p maximum_failures == 0.
   */
  explicit AdminServiceLimitedErrorCountRetryPolicy(int maximum_failures)
      : impl_(maximum_failures) {}

  AdminServiceLimitedErrorCountRetryPolicy(
      AdminServiceLimitedErrorCountRetryPolicy&& rhs) noexcept
      : AdminServiceLimitedErrorCountRetryPolicy(rhs.maximum_failures()) {}
  AdminServiceLimitedErrorCountRetryPolicy(
      AdminServiceLimitedErrorCountRetryPolicy const& rhs) noexcept
      : AdminServiceLimitedErrorCountRetryPolicy(rhs.maximum_failures()) {}

  int maximum_failures() const { return impl_.maximum_failures(); }

  bool OnFailure(Status const& status) override {
    return impl_.OnFailure(status);
  }
  bool IsExhausted() const override { return impl_.IsExhausted(); }
  bool IsPermanentFailure(Status const& status) const override {
    return impl_.IsPermanentFailure(status);
  }
  std::unique_ptr<AdminServiceRetryPolicy> clone() const override {
    return std::make_unique<AdminServiceLimitedErrorCountRetryPolicy>(
        maximum_failures());
  }

  // This is provided only for backwards compatibility.
  using BaseType = AdminServiceRetryPolicy;

 private:
  google::cloud::internal::LimitedErrorCountRetryPolicy<
      pubsublite_internal::AdminServiceRetryTraits>
      impl_;
};

/**
 * A retry policy for `AdminServiceConnection` based on elapsed time.
 *
 * This policy stops retrying if:
 * - An RPC returns a non-transient error.
 * - The elapsed time in the retry loop exceeds a prescribed duration.
 *
 * In this class the following status codes are treated as transient errors:
 * - [`kInternal`](@ref google::cloud::StatusCode)
 * - [`kUnavailable`](@ref google::cloud::StatusCode)
 */
class AdminServiceLimitedTimeRetryPolicy : public AdminServiceRetryPolicy {
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
  explicit AdminServiceLimitedTimeRetryPolicy(
      std::chrono::duration<DurationRep, DurationPeriod> maximum_duration)
      : impl_(maximum_duration) {}

  AdminServiceLimitedTimeRetryPolicy(
      AdminServiceLimitedTimeRetryPolicy&& rhs) noexcept
      : AdminServiceLimitedTimeRetryPolicy(rhs.maximum_duration()) {}
  AdminServiceLimitedTimeRetryPolicy(
      AdminServiceLimitedTimeRetryPolicy const& rhs) noexcept
      : AdminServiceLimitedTimeRetryPolicy(rhs.maximum_duration()) {}

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
  std::unique_ptr<AdminServiceRetryPolicy> clone() const override {
    return std::make_unique<AdminServiceLimitedTimeRetryPolicy>(
        maximum_duration());
  }

  // This is provided only for backwards compatibility.
  using BaseType = AdminServiceRetryPolicy;

 private:
  google::cloud::internal::LimitedTimeRetryPolicy<
      pubsublite_internal::AdminServiceRetryTraits>
      impl_;
};

/**
 * The `AdminServiceConnection` object for `AdminServiceClient`.
 *
 * This interface defines virtual methods for each of the user-facing overload
 * sets in `AdminServiceClient`. This allows users to inject custom behavior
 * (e.g., with a Google Mock object) when writing tests that use objects of type
 * `AdminServiceClient`.
 *
 * To create a concrete instance, see `MakeAdminServiceConnection()`.
 *
 * For mocking, see `pubsublite_mocks::MockAdminServiceConnection`.
 */
class AdminServiceConnection {
 public:
  virtual ~AdminServiceConnection() = 0;

  virtual Options options() { return Options{}; }

  virtual StatusOr<google::cloud::pubsublite::v1::Topic> CreateTopic(
      google::cloud::pubsublite::v1::CreateTopicRequest const& request);

  virtual StatusOr<google::cloud::pubsublite::v1::Topic> GetTopic(
      google::cloud::pubsublite::v1::GetTopicRequest const& request);

  virtual StatusOr<google::cloud::pubsublite::v1::TopicPartitions>
  GetTopicPartitions(
      google::cloud::pubsublite::v1::GetTopicPartitionsRequest const& request);

  virtual StreamRange<google::cloud::pubsublite::v1::Topic> ListTopics(
      google::cloud::pubsublite::v1::ListTopicsRequest request);

  virtual StatusOr<google::cloud::pubsublite::v1::Topic> UpdateTopic(
      google::cloud::pubsublite::v1::UpdateTopicRequest const& request);

  virtual Status DeleteTopic(
      google::cloud::pubsublite::v1::DeleteTopicRequest const& request);

  virtual StreamRange<std::string> ListTopicSubscriptions(
      google::cloud::pubsublite::v1::ListTopicSubscriptionsRequest request);

  virtual StatusOr<google::cloud::pubsublite::v1::Subscription>
  CreateSubscription(
      google::cloud::pubsublite::v1::CreateSubscriptionRequest const& request);

  virtual StatusOr<google::cloud::pubsublite::v1::Subscription> GetSubscription(
      google::cloud::pubsublite::v1::GetSubscriptionRequest const& request);

  virtual StreamRange<google::cloud::pubsublite::v1::Subscription>
  ListSubscriptions(
      google::cloud::pubsublite::v1::ListSubscriptionsRequest request);

  virtual StatusOr<google::cloud::pubsublite::v1::Subscription>
  UpdateSubscription(
      google::cloud::pubsublite::v1::UpdateSubscriptionRequest const& request);

  virtual Status DeleteSubscription(
      google::cloud::pubsublite::v1::DeleteSubscriptionRequest const& request);

  virtual future<
      StatusOr<google::cloud::pubsublite::v1::SeekSubscriptionResponse>>
  SeekSubscription(
      google::cloud::pubsublite::v1::SeekSubscriptionRequest const& request);

  virtual StatusOr<google::longrunning::Operation> SeekSubscription(
      NoAwaitTag,
      google::cloud::pubsublite::v1::SeekSubscriptionRequest const& request);

  virtual future<
      StatusOr<google::cloud::pubsublite::v1::SeekSubscriptionResponse>>
  SeekSubscription(google::longrunning::Operation const& operation);

  virtual StatusOr<google::cloud::pubsublite::v1::Reservation>
  CreateReservation(
      google::cloud::pubsublite::v1::CreateReservationRequest const& request);

  virtual StatusOr<google::cloud::pubsublite::v1::Reservation> GetReservation(
      google::cloud::pubsublite::v1::GetReservationRequest const& request);

  virtual StreamRange<google::cloud::pubsublite::v1::Reservation>
  ListReservations(
      google::cloud::pubsublite::v1::ListReservationsRequest request);

  virtual StatusOr<google::cloud::pubsublite::v1::Reservation>
  UpdateReservation(
      google::cloud::pubsublite::v1::UpdateReservationRequest const& request);

  virtual Status DeleteReservation(
      google::cloud::pubsublite::v1::DeleteReservationRequest const& request);

  virtual StreamRange<std::string> ListReservationTopics(
      google::cloud::pubsublite::v1::ListReservationTopicsRequest request);

  virtual StreamRange<google::longrunning::Operation> ListOperations(
      google::longrunning::ListOperationsRequest request);

  virtual StatusOr<google::longrunning::Operation> GetOperation(
      google::longrunning::GetOperationRequest const& request);

  virtual Status DeleteOperation(
      google::longrunning::DeleteOperationRequest const& request);

  virtual Status CancelOperation(
      google::longrunning::CancelOperationRequest const& request);

  virtual future<StatusOr<google::cloud::pubsublite::v1::TopicPartitions>>
  AsyncGetTopicPartitions(
      google::cloud::pubsublite::v1::GetTopicPartitionsRequest const& request);
};

/**
 * A factory function to construct an object of type `AdminServiceConnection`.
 *
 * The returned connection object should not be used directly; instead it
 * should be passed as an argument to the constructor of AdminServiceClient.
 *
 * The optional @p options argument may be used to configure aspects of the
 * returned `AdminServiceConnection`. Expected options are any of the types in
 * the following option lists:
 *
 * - `google::cloud::CommonOptionList`
 * - `google::cloud::GrpcOptionList`
 * - `google::cloud::UnifiedCredentialsOptionList`
 * - `google::cloud::pubsublite::AdminServicePolicyOptionList`
 *
 * @note Unexpected options will be ignored. To log unexpected options instead,
 *     set `GOOGLE_CLOUD_CPP_ENABLE_CLOG=yes` in the environment.
 *
 * @param options (optional) Configure the `AdminServiceConnection` created by
 * this function.
 */
std::shared_ptr<AdminServiceConnection> MakeAdminServiceConnection(
    Options options = {});

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace pubsublite
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_PUBSUBLITE_ADMIN_CONNECTION_H
