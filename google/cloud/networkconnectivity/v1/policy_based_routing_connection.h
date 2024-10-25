// Copyright 2024 Google LLC
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
// source: google/cloud/networkconnectivity/v1/policy_based_routing.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_NETWORKCONNECTIVITY_V1_POLICY_BASED_ROUTING_CONNECTION_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_NETWORKCONNECTIVITY_V1_POLICY_BASED_ROUTING_CONNECTION_H

#include "google/cloud/networkconnectivity/v1/internal/policy_based_routing_retry_traits.h"
#include "google/cloud/networkconnectivity/v1/policy_based_routing.pb.h"
#include "google/cloud/networkconnectivity/v1/policy_based_routing_connection_idempotency_policy.h"
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
namespace networkconnectivity_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

/// The retry policy for `PolicyBasedRoutingServiceConnection`.
class PolicyBasedRoutingServiceRetryPolicy
    : public ::google::cloud::RetryPolicy {
 public:
  /// Creates a new instance of the policy, reset to the initial state.
  virtual std::unique_ptr<PolicyBasedRoutingServiceRetryPolicy> clone()
      const = 0;
};

/**
 * A retry policy for `PolicyBasedRoutingServiceConnection` based on counting
 * errors.
 *
 * This policy stops retrying if:
 * - An RPC returns a non-transient error.
 * - More than a prescribed number of transient failures is detected.
 *
 * In this class the following status codes are treated as transient errors:
 * - [`kUnavailable`](@ref google::cloud::StatusCode)
 */
class PolicyBasedRoutingServiceLimitedErrorCountRetryPolicy
    : public PolicyBasedRoutingServiceRetryPolicy {
 public:
  /**
   * Create an instance that tolerates up to @p maximum_failures transient
   * errors.
   *
   * @note Disable the retry loop by providing an instance of this policy with
   *     @p maximum_failures == 0.
   */
  explicit PolicyBasedRoutingServiceLimitedErrorCountRetryPolicy(
      int maximum_failures)
      : impl_(maximum_failures) {}

  PolicyBasedRoutingServiceLimitedErrorCountRetryPolicy(
      PolicyBasedRoutingServiceLimitedErrorCountRetryPolicy&& rhs) noexcept
      : PolicyBasedRoutingServiceLimitedErrorCountRetryPolicy(
            rhs.maximum_failures()) {}
  PolicyBasedRoutingServiceLimitedErrorCountRetryPolicy(
      PolicyBasedRoutingServiceLimitedErrorCountRetryPolicy const& rhs) noexcept
      : PolicyBasedRoutingServiceLimitedErrorCountRetryPolicy(
            rhs.maximum_failures()) {}

  int maximum_failures() const { return impl_.maximum_failures(); }

  bool OnFailure(Status const& status) override {
    return impl_.OnFailure(status);
  }
  bool IsExhausted() const override { return impl_.IsExhausted(); }
  bool IsPermanentFailure(Status const& status) const override {
    return impl_.IsPermanentFailure(status);
  }
  std::unique_ptr<PolicyBasedRoutingServiceRetryPolicy> clone() const override {
    return std::make_unique<
        PolicyBasedRoutingServiceLimitedErrorCountRetryPolicy>(
        maximum_failures());
  }

  // This is provided only for backwards compatibility.
  using BaseType = PolicyBasedRoutingServiceRetryPolicy;

 private:
  google::cloud::internal::LimitedErrorCountRetryPolicy<
      networkconnectivity_v1_internal::PolicyBasedRoutingServiceRetryTraits>
      impl_;
};

/**
 * A retry policy for `PolicyBasedRoutingServiceConnection` based on elapsed
 * time.
 *
 * This policy stops retrying if:
 * - An RPC returns a non-transient error.
 * - The elapsed time in the retry loop exceeds a prescribed duration.
 *
 * In this class the following status codes are treated as transient errors:
 * - [`kUnavailable`](@ref google::cloud::StatusCode)
 */
class PolicyBasedRoutingServiceLimitedTimeRetryPolicy
    : public PolicyBasedRoutingServiceRetryPolicy {
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
  explicit PolicyBasedRoutingServiceLimitedTimeRetryPolicy(
      std::chrono::duration<DurationRep, DurationPeriod> maximum_duration)
      : impl_(maximum_duration) {}

  PolicyBasedRoutingServiceLimitedTimeRetryPolicy(
      PolicyBasedRoutingServiceLimitedTimeRetryPolicy&& rhs) noexcept
      : PolicyBasedRoutingServiceLimitedTimeRetryPolicy(
            rhs.maximum_duration()) {}
  PolicyBasedRoutingServiceLimitedTimeRetryPolicy(
      PolicyBasedRoutingServiceLimitedTimeRetryPolicy const& rhs) noexcept
      : PolicyBasedRoutingServiceLimitedTimeRetryPolicy(
            rhs.maximum_duration()) {}

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
  std::unique_ptr<PolicyBasedRoutingServiceRetryPolicy> clone() const override {
    return std::make_unique<PolicyBasedRoutingServiceLimitedTimeRetryPolicy>(
        maximum_duration());
  }

  // This is provided only for backwards compatibility.
  using BaseType = PolicyBasedRoutingServiceRetryPolicy;

 private:
  google::cloud::internal::LimitedTimeRetryPolicy<
      networkconnectivity_v1_internal::PolicyBasedRoutingServiceRetryTraits>
      impl_;
};

/**
 * The `PolicyBasedRoutingServiceConnection` object for
 * `PolicyBasedRoutingServiceClient`.
 *
 * This interface defines virtual methods for each of the user-facing overload
 * sets in `PolicyBasedRoutingServiceClient`. This allows users to inject custom
 * behavior (e.g., with a Google Mock object) when writing tests that use
 * objects of type `PolicyBasedRoutingServiceClient`.
 *
 * To create a concrete instance, see
 * `MakePolicyBasedRoutingServiceConnection()`.
 *
 * For mocking, see
 * `networkconnectivity_v1_mocks::MockPolicyBasedRoutingServiceConnection`.
 */
class PolicyBasedRoutingServiceConnection {
 public:
  virtual ~PolicyBasedRoutingServiceConnection() = 0;

  virtual Options options() { return Options{}; }

  virtual StreamRange<google::cloud::networkconnectivity::v1::PolicyBasedRoute>
  ListPolicyBasedRoutes(
      google::cloud::networkconnectivity::v1::ListPolicyBasedRoutesRequest
          request);

  virtual StatusOr<google::cloud::networkconnectivity::v1::PolicyBasedRoute>
  GetPolicyBasedRoute(
      google::cloud::networkconnectivity::v1::GetPolicyBasedRouteRequest const&
          request);

  virtual future<
      StatusOr<google::cloud::networkconnectivity::v1::PolicyBasedRoute>>
  CreatePolicyBasedRoute(google::cloud::networkconnectivity::v1::
                             CreatePolicyBasedRouteRequest const& request);

  virtual StatusOr<google::longrunning::Operation> CreatePolicyBasedRoute(
      NoAwaitTag, google::cloud::networkconnectivity::v1::
                      CreatePolicyBasedRouteRequest const& request);

  virtual future<
      StatusOr<google::cloud::networkconnectivity::v1::PolicyBasedRoute>>
  CreatePolicyBasedRoute(google::longrunning::Operation const& operation);

  virtual future<
      StatusOr<google::cloud::networkconnectivity::v1::OperationMetadata>>
  DeletePolicyBasedRoute(google::cloud::networkconnectivity::v1::
                             DeletePolicyBasedRouteRequest const& request);

  virtual StatusOr<google::longrunning::Operation> DeletePolicyBasedRoute(
      NoAwaitTag, google::cloud::networkconnectivity::v1::
                      DeletePolicyBasedRouteRequest const& request);

  virtual future<
      StatusOr<google::cloud::networkconnectivity::v1::OperationMetadata>>
  DeletePolicyBasedRoute(google::longrunning::Operation const& operation);

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
 * A factory function to construct an object of type
 * `PolicyBasedRoutingServiceConnection`.
 *
 * The returned connection object should not be used directly; instead it
 * should be passed as an argument to the constructor of
 * PolicyBasedRoutingServiceClient.
 *
 * The optional @p options argument may be used to configure aspects of the
 * returned `PolicyBasedRoutingServiceConnection`. Expected options are any of
 * the types in the following option lists:
 *
 * - `google::cloud::CommonOptionList`
 * - `google::cloud::GrpcOptionList`
 * - `google::cloud::UnifiedCredentialsOptionList`
 * -
 * `google::cloud::networkconnectivity_v1::PolicyBasedRoutingServicePolicyOptionList`
 *
 * @note Unexpected options will be ignored. To log unexpected options instead,
 *     set `GOOGLE_CLOUD_CPP_ENABLE_CLOG=yes` in the environment.
 *
 * @param options (optional) Configure the `PolicyBasedRoutingServiceConnection`
 * created by this function.
 */
std::shared_ptr<PolicyBasedRoutingServiceConnection>
MakePolicyBasedRoutingServiceConnection(Options options = {});

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace networkconnectivity_v1
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_NETWORKCONNECTIVITY_V1_POLICY_BASED_ROUTING_CONNECTION_H
