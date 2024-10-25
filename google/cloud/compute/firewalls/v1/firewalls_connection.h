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
// source: google/cloud/compute/firewalls/v1/firewalls.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_FIREWALLS_V1_FIREWALLS_CONNECTION_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_FIREWALLS_V1_FIREWALLS_CONNECTION_H

#include "google/cloud/compute/firewalls/v1/firewalls_connection_idempotency_policy.h"
#include "google/cloud/compute/firewalls/v1/internal/firewalls_retry_traits.h"
#include "google/cloud/backoff_policy.h"
#include "google/cloud/future.h"
#include "google/cloud/internal/retry_policy_impl.h"
#include "google/cloud/no_await_tag.h"
#include "google/cloud/options.h"
#include "google/cloud/polling_policy.h"
#include "google/cloud/status_or.h"
#include "google/cloud/stream_range.h"
#include "google/cloud/version.h"
#include "google/cloud/compute/firewalls/v1/firewalls.pb.h"
#include <memory>

namespace google {
namespace cloud {
namespace compute_firewalls_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

/// The retry policy for `FirewallsConnection`.
class FirewallsRetryPolicy : public ::google::cloud::RetryPolicy {
 public:
  /// Creates a new instance of the policy, reset to the initial state.
  virtual std::unique_ptr<FirewallsRetryPolicy> clone() const = 0;
};

/**
 * A retry policy for `FirewallsConnection` based on counting errors.
 *
 * This policy stops retrying if:
 * - An RPC returns a non-transient error.
 * - More than a prescribed number of transient failures is detected.
 *
 * In this class the following status codes are treated as transient errors:
 * - [`kUnavailable`](@ref google::cloud::StatusCode)
 */
class FirewallsLimitedErrorCountRetryPolicy : public FirewallsRetryPolicy {
 public:
  /**
   * Create an instance that tolerates up to @p maximum_failures transient
   * errors.
   *
   * @note Disable the retry loop by providing an instance of this policy with
   *     @p maximum_failures == 0.
   */
  explicit FirewallsLimitedErrorCountRetryPolicy(int maximum_failures)
      : impl_(maximum_failures) {}

  FirewallsLimitedErrorCountRetryPolicy(
      FirewallsLimitedErrorCountRetryPolicy&& rhs) noexcept
      : FirewallsLimitedErrorCountRetryPolicy(rhs.maximum_failures()) {}
  FirewallsLimitedErrorCountRetryPolicy(
      FirewallsLimitedErrorCountRetryPolicy const& rhs) noexcept
      : FirewallsLimitedErrorCountRetryPolicy(rhs.maximum_failures()) {}

  int maximum_failures() const { return impl_.maximum_failures(); }

  bool OnFailure(Status const& status) override {
    return impl_.OnFailure(status);
  }
  bool IsExhausted() const override { return impl_.IsExhausted(); }
  bool IsPermanentFailure(Status const& status) const override {
    return impl_.IsPermanentFailure(status);
  }
  std::unique_ptr<FirewallsRetryPolicy> clone() const override {
    return std::make_unique<FirewallsLimitedErrorCountRetryPolicy>(
        maximum_failures());
  }

  // This is provided only for backwards compatibility.
  using BaseType = FirewallsRetryPolicy;

 private:
  google::cloud::internal::LimitedErrorCountRetryPolicy<
      compute_firewalls_v1_internal::FirewallsRetryTraits>
      impl_;
};

/**
 * A retry policy for `FirewallsConnection` based on elapsed time.
 *
 * This policy stops retrying if:
 * - An RPC returns a non-transient error.
 * - The elapsed time in the retry loop exceeds a prescribed duration.
 *
 * In this class the following status codes are treated as transient errors:
 * - [`kUnavailable`](@ref google::cloud::StatusCode)
 */
class FirewallsLimitedTimeRetryPolicy : public FirewallsRetryPolicy {
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
  explicit FirewallsLimitedTimeRetryPolicy(
      std::chrono::duration<DurationRep, DurationPeriod> maximum_duration)
      : impl_(maximum_duration) {}

  FirewallsLimitedTimeRetryPolicy(
      FirewallsLimitedTimeRetryPolicy&& rhs) noexcept
      : FirewallsLimitedTimeRetryPolicy(rhs.maximum_duration()) {}
  FirewallsLimitedTimeRetryPolicy(
      FirewallsLimitedTimeRetryPolicy const& rhs) noexcept
      : FirewallsLimitedTimeRetryPolicy(rhs.maximum_duration()) {}

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
  std::unique_ptr<FirewallsRetryPolicy> clone() const override {
    return std::make_unique<FirewallsLimitedTimeRetryPolicy>(
        maximum_duration());
  }

  // This is provided only for backwards compatibility.
  using BaseType = FirewallsRetryPolicy;

 private:
  google::cloud::internal::LimitedTimeRetryPolicy<
      compute_firewalls_v1_internal::FirewallsRetryTraits>
      impl_;
};

/**
 * The `FirewallsConnection` object for `FirewallsClient`.
 *
 * This interface defines virtual methods for each of the user-facing overload
 * sets in `FirewallsClient`. This allows users to inject custom behavior
 * (e.g., with a Google Mock object) when writing tests that use objects of type
 * `FirewallsClient`.
 *
 * To create a concrete instance, see `MakeFirewallsConnection()`.
 *
 * For mocking, see `compute_firewalls_v1_mocks::MockFirewallsConnection`.
 */
class FirewallsConnection {
 public:
  virtual ~FirewallsConnection() = 0;

  virtual Options options() { return Options{}; }

  virtual future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  DeleteFirewall(
      google::cloud::cpp::compute::firewalls::v1::DeleteFirewallRequest const&
          request);

  virtual StatusOr<google::cloud::cpp::compute::v1::Operation> DeleteFirewall(
      NoAwaitTag,
      google::cloud::cpp::compute::firewalls::v1::DeleteFirewallRequest const&
          request);

  virtual future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  DeleteFirewall(google::cloud::cpp::compute::v1::Operation const& operation);

  virtual StatusOr<google::cloud::cpp::compute::v1::Firewall> GetFirewall(
      google::cloud::cpp::compute::firewalls::v1::GetFirewallRequest const&
          request);

  virtual future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  InsertFirewall(
      google::cloud::cpp::compute::firewalls::v1::InsertFirewallRequest const&
          request);

  virtual StatusOr<google::cloud::cpp::compute::v1::Operation> InsertFirewall(
      NoAwaitTag,
      google::cloud::cpp::compute::firewalls::v1::InsertFirewallRequest const&
          request);

  virtual future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  InsertFirewall(google::cloud::cpp::compute::v1::Operation const& operation);

  virtual StreamRange<google::cloud::cpp::compute::v1::Firewall> ListFirewalls(
      google::cloud::cpp::compute::firewalls::v1::ListFirewallsRequest request);

  virtual future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  PatchFirewall(
      google::cloud::cpp::compute::firewalls::v1::PatchFirewallRequest const&
          request);

  virtual StatusOr<google::cloud::cpp::compute::v1::Operation> PatchFirewall(
      NoAwaitTag,
      google::cloud::cpp::compute::firewalls::v1::PatchFirewallRequest const&
          request);

  virtual future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  PatchFirewall(google::cloud::cpp::compute::v1::Operation const& operation);

  virtual future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  UpdateFirewall(
      google::cloud::cpp::compute::firewalls::v1::UpdateFirewallRequest const&
          request);

  virtual StatusOr<google::cloud::cpp::compute::v1::Operation> UpdateFirewall(
      NoAwaitTag,
      google::cloud::cpp::compute::firewalls::v1::UpdateFirewallRequest const&
          request);

  virtual future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  UpdateFirewall(google::cloud::cpp::compute::v1::Operation const& operation);
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_firewalls_v1
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_FIREWALLS_V1_FIREWALLS_CONNECTION_H
