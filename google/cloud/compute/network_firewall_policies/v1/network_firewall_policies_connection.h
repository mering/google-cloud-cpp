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
// google/cloud/compute/network_firewall_policies/v1/network_firewall_policies.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_NETWORK_FIREWALL_POLICIES_V1_NETWORK_FIREWALL_POLICIES_CONNECTION_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_NETWORK_FIREWALL_POLICIES_V1_NETWORK_FIREWALL_POLICIES_CONNECTION_H

#include "google/cloud/compute/network_firewall_policies/v1/internal/network_firewall_policies_retry_traits.h"
#include "google/cloud/compute/network_firewall_policies/v1/network_firewall_policies_connection_idempotency_policy.h"
#include "google/cloud/backoff_policy.h"
#include "google/cloud/future.h"
#include "google/cloud/internal/retry_policy_impl.h"
#include "google/cloud/no_await_tag.h"
#include "google/cloud/options.h"
#include "google/cloud/polling_policy.h"
#include "google/cloud/status_or.h"
#include "google/cloud/stream_range.h"
#include "google/cloud/version.h"
#include "google/cloud/compute/network_firewall_policies/v1/network_firewall_policies.pb.h"
#include <memory>

namespace google {
namespace cloud {
namespace compute_network_firewall_policies_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

/// The retry policy for `NetworkFirewallPoliciesConnection`.
class NetworkFirewallPoliciesRetryPolicy : public ::google::cloud::RetryPolicy {
 public:
  /// Creates a new instance of the policy, reset to the initial state.
  virtual std::unique_ptr<NetworkFirewallPoliciesRetryPolicy> clone() const = 0;
};

/**
 * A retry policy for `NetworkFirewallPoliciesConnection` based on counting
 * errors.
 *
 * This policy stops retrying if:
 * - An RPC returns a non-transient error.
 * - More than a prescribed number of transient failures is detected.
 *
 * In this class the following status codes are treated as transient errors:
 * - [`kUnavailable`](@ref google::cloud::StatusCode)
 */
class NetworkFirewallPoliciesLimitedErrorCountRetryPolicy
    : public NetworkFirewallPoliciesRetryPolicy {
 public:
  /**
   * Create an instance that tolerates up to @p maximum_failures transient
   * errors.
   *
   * @note Disable the retry loop by providing an instance of this policy with
   *     @p maximum_failures == 0.
   */
  explicit NetworkFirewallPoliciesLimitedErrorCountRetryPolicy(
      int maximum_failures)
      : impl_(maximum_failures) {}

  NetworkFirewallPoliciesLimitedErrorCountRetryPolicy(
      NetworkFirewallPoliciesLimitedErrorCountRetryPolicy&& rhs) noexcept
      : NetworkFirewallPoliciesLimitedErrorCountRetryPolicy(
            rhs.maximum_failures()) {}
  NetworkFirewallPoliciesLimitedErrorCountRetryPolicy(
      NetworkFirewallPoliciesLimitedErrorCountRetryPolicy const& rhs) noexcept
      : NetworkFirewallPoliciesLimitedErrorCountRetryPolicy(
            rhs.maximum_failures()) {}

  int maximum_failures() const { return impl_.maximum_failures(); }

  bool OnFailure(Status const& status) override {
    return impl_.OnFailure(status);
  }
  bool IsExhausted() const override { return impl_.IsExhausted(); }
  bool IsPermanentFailure(Status const& status) const override {
    return impl_.IsPermanentFailure(status);
  }
  std::unique_ptr<NetworkFirewallPoliciesRetryPolicy> clone() const override {
    return std::make_unique<
        NetworkFirewallPoliciesLimitedErrorCountRetryPolicy>(
        maximum_failures());
  }

  // This is provided only for backwards compatibility.
  using BaseType = NetworkFirewallPoliciesRetryPolicy;

 private:
  google::cloud::internal::LimitedErrorCountRetryPolicy<
      compute_network_firewall_policies_v1_internal::
          NetworkFirewallPoliciesRetryTraits>
      impl_;
};

/**
 * A retry policy for `NetworkFirewallPoliciesConnection` based on elapsed time.
 *
 * This policy stops retrying if:
 * - An RPC returns a non-transient error.
 * - The elapsed time in the retry loop exceeds a prescribed duration.
 *
 * In this class the following status codes are treated as transient errors:
 * - [`kUnavailable`](@ref google::cloud::StatusCode)
 */
class NetworkFirewallPoliciesLimitedTimeRetryPolicy
    : public NetworkFirewallPoliciesRetryPolicy {
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
  explicit NetworkFirewallPoliciesLimitedTimeRetryPolicy(
      std::chrono::duration<DurationRep, DurationPeriod> maximum_duration)
      : impl_(maximum_duration) {}

  NetworkFirewallPoliciesLimitedTimeRetryPolicy(
      NetworkFirewallPoliciesLimitedTimeRetryPolicy&& rhs) noexcept
      : NetworkFirewallPoliciesLimitedTimeRetryPolicy(rhs.maximum_duration()) {}
  NetworkFirewallPoliciesLimitedTimeRetryPolicy(
      NetworkFirewallPoliciesLimitedTimeRetryPolicy const& rhs) noexcept
      : NetworkFirewallPoliciesLimitedTimeRetryPolicy(rhs.maximum_duration()) {}

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
  std::unique_ptr<NetworkFirewallPoliciesRetryPolicy> clone() const override {
    return std::make_unique<NetworkFirewallPoliciesLimitedTimeRetryPolicy>(
        maximum_duration());
  }

  // This is provided only for backwards compatibility.
  using BaseType = NetworkFirewallPoliciesRetryPolicy;

 private:
  google::cloud::internal::LimitedTimeRetryPolicy<
      compute_network_firewall_policies_v1_internal::
          NetworkFirewallPoliciesRetryTraits>
      impl_;
};

/**
 * The `NetworkFirewallPoliciesConnection` object for
 * `NetworkFirewallPoliciesClient`.
 *
 * This interface defines virtual methods for each of the user-facing overload
 * sets in `NetworkFirewallPoliciesClient`. This allows users to inject custom
 * behavior (e.g., with a Google Mock object) when writing tests that use
 * objects of type `NetworkFirewallPoliciesClient`.
 *
 * To create a concrete instance, see `MakeNetworkFirewallPoliciesConnection()`.
 *
 * For mocking, see
 * `compute_network_firewall_policies_v1_mocks::MockNetworkFirewallPoliciesConnection`.
 */
class NetworkFirewallPoliciesConnection {
 public:
  virtual ~NetworkFirewallPoliciesConnection() = 0;

  virtual Options options() { return Options{}; }

  virtual future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  AddAssociation(google::cloud::cpp::compute::network_firewall_policies::v1::
                     AddAssociationRequest const& request);

  virtual StatusOr<google::cloud::cpp::compute::v1::Operation> AddAssociation(
      NoAwaitTag, google::cloud::cpp::compute::network_firewall_policies::v1::
                      AddAssociationRequest const& request);

  virtual future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  AddAssociation(google::cloud::cpp::compute::v1::Operation const& operation);

  virtual future<StatusOr<google::cloud::cpp::compute::v1::Operation>> AddRule(
      google::cloud::cpp::compute::network_firewall_policies::v1::
          AddRuleRequest const& request);

  virtual StatusOr<google::cloud::cpp::compute::v1::Operation> AddRule(
      NoAwaitTag, google::cloud::cpp::compute::network_firewall_policies::v1::
                      AddRuleRequest const& request);

  virtual future<StatusOr<google::cloud::cpp::compute::v1::Operation>> AddRule(
      google::cloud::cpp::compute::v1::Operation const& operation);

  virtual future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  CloneRules(google::cloud::cpp::compute::network_firewall_policies::v1::
                 CloneRulesRequest const& request);

  virtual StatusOr<google::cloud::cpp::compute::v1::Operation> CloneRules(
      NoAwaitTag, google::cloud::cpp::compute::network_firewall_policies::v1::
                      CloneRulesRequest const& request);

  virtual future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  CloneRules(google::cloud::cpp::compute::v1::Operation const& operation);

  virtual future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  DeleteFirewallPolicy(google::cloud::cpp::compute::network_firewall_policies::
                           v1::DeleteFirewallPolicyRequest const& request);

  virtual StatusOr<google::cloud::cpp::compute::v1::Operation>
  DeleteFirewallPolicy(NoAwaitTag,
                       google::cloud::cpp::compute::network_firewall_policies::
                           v1::DeleteFirewallPolicyRequest const& request);

  virtual future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  DeleteFirewallPolicy(
      google::cloud::cpp::compute::v1::Operation const& operation);

  virtual StatusOr<google::cloud::cpp::compute::v1::FirewallPolicy>
  GetFirewallPolicy(google::cloud::cpp::compute::network_firewall_policies::v1::
                        GetFirewallPolicyRequest const& request);

  virtual StatusOr<google::cloud::cpp::compute::v1::FirewallPolicyAssociation>
  GetAssociation(google::cloud::cpp::compute::network_firewall_policies::v1::
                     GetAssociationRequest const& request);

  virtual StatusOr<google::cloud::cpp::compute::v1::Policy> GetIamPolicy(
      google::cloud::cpp::compute::network_firewall_policies::v1::
          GetIamPolicyRequest const& request);

  virtual StatusOr<google::cloud::cpp::compute::v1::FirewallPolicyRule> GetRule(
      google::cloud::cpp::compute::network_firewall_policies::v1::
          GetRuleRequest const& request);

  virtual future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  InsertFirewallPolicy(google::cloud::cpp::compute::network_firewall_policies::
                           v1::InsertFirewallPolicyRequest const& request);

  virtual StatusOr<google::cloud::cpp::compute::v1::Operation>
  InsertFirewallPolicy(NoAwaitTag,
                       google::cloud::cpp::compute::network_firewall_policies::
                           v1::InsertFirewallPolicyRequest const& request);

  virtual future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  InsertFirewallPolicy(
      google::cloud::cpp::compute::v1::Operation const& operation);

  virtual StreamRange<google::cloud::cpp::compute::v1::FirewallPolicy>
  ListNetworkFirewallPolicies(
      google::cloud::cpp::compute::network_firewall_policies::v1::
          ListNetworkFirewallPoliciesRequest request);

  virtual future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  PatchFirewallPolicy(google::cloud::cpp::compute::network_firewall_policies::
                          v1::PatchFirewallPolicyRequest const& request);

  virtual StatusOr<google::cloud::cpp::compute::v1::Operation>
  PatchFirewallPolicy(NoAwaitTag,
                      google::cloud::cpp::compute::network_firewall_policies::
                          v1::PatchFirewallPolicyRequest const& request);

  virtual future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  PatchFirewallPolicy(
      google::cloud::cpp::compute::v1::Operation const& operation);

  virtual future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  PatchRule(google::cloud::cpp::compute::network_firewall_policies::v1::
                PatchRuleRequest const& request);

  virtual StatusOr<google::cloud::cpp::compute::v1::Operation> PatchRule(
      NoAwaitTag, google::cloud::cpp::compute::network_firewall_policies::v1::
                      PatchRuleRequest const& request);

  virtual future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  PatchRule(google::cloud::cpp::compute::v1::Operation const& operation);

  virtual future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  RemoveAssociation(google::cloud::cpp::compute::network_firewall_policies::v1::
                        RemoveAssociationRequest const& request);

  virtual StatusOr<google::cloud::cpp::compute::v1::Operation>
  RemoveAssociation(NoAwaitTag,
                    google::cloud::cpp::compute::network_firewall_policies::v1::
                        RemoveAssociationRequest const& request);

  virtual future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  RemoveAssociation(
      google::cloud::cpp::compute::v1::Operation const& operation);

  virtual future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  RemoveRule(google::cloud::cpp::compute::network_firewall_policies::v1::
                 RemoveRuleRequest const& request);

  virtual StatusOr<google::cloud::cpp::compute::v1::Operation> RemoveRule(
      NoAwaitTag, google::cloud::cpp::compute::network_firewall_policies::v1::
                      RemoveRuleRequest const& request);

  virtual future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  RemoveRule(google::cloud::cpp::compute::v1::Operation const& operation);

  virtual StatusOr<google::cloud::cpp::compute::v1::Policy> SetIamPolicy(
      google::cloud::cpp::compute::network_firewall_policies::v1::
          SetIamPolicyRequest const& request);

  virtual StatusOr<google::cloud::cpp::compute::v1::TestPermissionsResponse>
  TestIamPermissions(google::cloud::cpp::compute::network_firewall_policies::
                         v1::TestIamPermissionsRequest const& request);
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_network_firewall_policies_v1
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_NETWORK_FIREWALL_POLICIES_V1_NETWORK_FIREWALL_POLICIES_CONNECTION_H
