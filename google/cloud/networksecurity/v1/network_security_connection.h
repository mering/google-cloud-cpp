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
// source: google/cloud/networksecurity/v1/network_security.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_NETWORKSECURITY_V1_NETWORK_SECURITY_CONNECTION_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_NETWORKSECURITY_V1_NETWORK_SECURITY_CONNECTION_H

#include "google/cloud/networksecurity/v1/internal/network_security_retry_traits.h"
#include "google/cloud/networksecurity/v1/network_security_connection_idempotency_policy.h"
#include "google/cloud/backoff_policy.h"
#include "google/cloud/future.h"
#include "google/cloud/internal/retry_policy_impl.h"
#include "google/cloud/no_await_tag.h"
#include "google/cloud/options.h"
#include "google/cloud/polling_policy.h"
#include "google/cloud/status_or.h"
#include "google/cloud/stream_range.h"
#include "google/cloud/version.h"
#include "google/cloud/networksecurity/v1/common.pb.h"
#include "google/cloud/networksecurity/v1/network_security.pb.h"
#include "google/longrunning/operations.grpc.pb.h"
#include <memory>

namespace google {
namespace cloud {
namespace networksecurity_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

/// The retry policy for `NetworkSecurityConnection`.
class NetworkSecurityRetryPolicy : public ::google::cloud::RetryPolicy {
 public:
  /// Creates a new instance of the policy, reset to the initial state.
  virtual std::unique_ptr<NetworkSecurityRetryPolicy> clone() const = 0;
};

/**
 * A retry policy for `NetworkSecurityConnection` based on counting errors.
 *
 * This policy stops retrying if:
 * - An RPC returns a non-transient error.
 * - More than a prescribed number of transient failures is detected.
 *
 * In this class the following status codes are treated as transient errors:
 * - [`kUnavailable`](@ref google::cloud::StatusCode)
 */
class NetworkSecurityLimitedErrorCountRetryPolicy
    : public NetworkSecurityRetryPolicy {
 public:
  /**
   * Create an instance that tolerates up to @p maximum_failures transient
   * errors.
   *
   * @note Disable the retry loop by providing an instance of this policy with
   *     @p maximum_failures == 0.
   */
  explicit NetworkSecurityLimitedErrorCountRetryPolicy(int maximum_failures)
      : impl_(maximum_failures) {}

  NetworkSecurityLimitedErrorCountRetryPolicy(
      NetworkSecurityLimitedErrorCountRetryPolicy&& rhs) noexcept
      : NetworkSecurityLimitedErrorCountRetryPolicy(rhs.maximum_failures()) {}
  NetworkSecurityLimitedErrorCountRetryPolicy(
      NetworkSecurityLimitedErrorCountRetryPolicy const& rhs) noexcept
      : NetworkSecurityLimitedErrorCountRetryPolicy(rhs.maximum_failures()) {}

  int maximum_failures() const { return impl_.maximum_failures(); }

  bool OnFailure(Status const& status) override {
    return impl_.OnFailure(status);
  }
  bool IsExhausted() const override { return impl_.IsExhausted(); }
  bool IsPermanentFailure(Status const& status) const override {
    return impl_.IsPermanentFailure(status);
  }
  std::unique_ptr<NetworkSecurityRetryPolicy> clone() const override {
    return std::make_unique<NetworkSecurityLimitedErrorCountRetryPolicy>(
        maximum_failures());
  }

  // This is provided only for backwards compatibility.
  using BaseType = NetworkSecurityRetryPolicy;

 private:
  google::cloud::internal::LimitedErrorCountRetryPolicy<
      networksecurity_v1_internal::NetworkSecurityRetryTraits>
      impl_;
};

/**
 * A retry policy for `NetworkSecurityConnection` based on elapsed time.
 *
 * This policy stops retrying if:
 * - An RPC returns a non-transient error.
 * - The elapsed time in the retry loop exceeds a prescribed duration.
 *
 * In this class the following status codes are treated as transient errors:
 * - [`kUnavailable`](@ref google::cloud::StatusCode)
 */
class NetworkSecurityLimitedTimeRetryPolicy
    : public NetworkSecurityRetryPolicy {
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
  explicit NetworkSecurityLimitedTimeRetryPolicy(
      std::chrono::duration<DurationRep, DurationPeriod> maximum_duration)
      : impl_(maximum_duration) {}

  NetworkSecurityLimitedTimeRetryPolicy(
      NetworkSecurityLimitedTimeRetryPolicy&& rhs) noexcept
      : NetworkSecurityLimitedTimeRetryPolicy(rhs.maximum_duration()) {}
  NetworkSecurityLimitedTimeRetryPolicy(
      NetworkSecurityLimitedTimeRetryPolicy const& rhs) noexcept
      : NetworkSecurityLimitedTimeRetryPolicy(rhs.maximum_duration()) {}

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
  std::unique_ptr<NetworkSecurityRetryPolicy> clone() const override {
    return std::make_unique<NetworkSecurityLimitedTimeRetryPolicy>(
        maximum_duration());
  }

  // This is provided only for backwards compatibility.
  using BaseType = NetworkSecurityRetryPolicy;

 private:
  google::cloud::internal::LimitedTimeRetryPolicy<
      networksecurity_v1_internal::NetworkSecurityRetryTraits>
      impl_;
};

/**
 * The `NetworkSecurityConnection` object for `NetworkSecurityClient`.
 *
 * This interface defines virtual methods for each of the user-facing overload
 * sets in `NetworkSecurityClient`. This allows users to inject custom behavior
 * (e.g., with a Google Mock object) when writing tests that use objects of type
 * `NetworkSecurityClient`.
 *
 * To create a concrete instance, see `MakeNetworkSecurityConnection()`.
 *
 * For mocking, see `networksecurity_v1_mocks::MockNetworkSecurityConnection`.
 */
class NetworkSecurityConnection {
 public:
  virtual ~NetworkSecurityConnection() = 0;

  virtual Options options() { return Options{}; }

  virtual StreamRange<google::cloud::networksecurity::v1::AuthorizationPolicy>
  ListAuthorizationPolicies(
      google::cloud::networksecurity::v1::ListAuthorizationPoliciesRequest
          request);

  virtual StatusOr<google::cloud::networksecurity::v1::AuthorizationPolicy>
  GetAuthorizationPolicy(
      google::cloud::networksecurity::v1::GetAuthorizationPolicyRequest const&
          request);

  virtual future<
      StatusOr<google::cloud::networksecurity::v1::AuthorizationPolicy>>
  CreateAuthorizationPolicy(
      google::cloud::networksecurity::v1::
          CreateAuthorizationPolicyRequest const& request);

  virtual StatusOr<google::longrunning::Operation> CreateAuthorizationPolicy(
      NoAwaitTag, google::cloud::networksecurity::v1::
                      CreateAuthorizationPolicyRequest const& request);

  virtual future<
      StatusOr<google::cloud::networksecurity::v1::AuthorizationPolicy>>
  CreateAuthorizationPolicy(google::longrunning::Operation const& operation);

  virtual future<
      StatusOr<google::cloud::networksecurity::v1::AuthorizationPolicy>>
  UpdateAuthorizationPolicy(
      google::cloud::networksecurity::v1::
          UpdateAuthorizationPolicyRequest const& request);

  virtual StatusOr<google::longrunning::Operation> UpdateAuthorizationPolicy(
      NoAwaitTag, google::cloud::networksecurity::v1::
                      UpdateAuthorizationPolicyRequest const& request);

  virtual future<
      StatusOr<google::cloud::networksecurity::v1::AuthorizationPolicy>>
  UpdateAuthorizationPolicy(google::longrunning::Operation const& operation);

  virtual future<
      StatusOr<google::cloud::networksecurity::v1::OperationMetadata>>
  DeleteAuthorizationPolicy(
      google::cloud::networksecurity::v1::
          DeleteAuthorizationPolicyRequest const& request);

  virtual StatusOr<google::longrunning::Operation> DeleteAuthorizationPolicy(
      NoAwaitTag, google::cloud::networksecurity::v1::
                      DeleteAuthorizationPolicyRequest const& request);

  virtual future<
      StatusOr<google::cloud::networksecurity::v1::OperationMetadata>>
  DeleteAuthorizationPolicy(google::longrunning::Operation const& operation);

  virtual StreamRange<google::cloud::networksecurity::v1::ServerTlsPolicy>
  ListServerTlsPolicies(
      google::cloud::networksecurity::v1::ListServerTlsPoliciesRequest request);

  virtual StatusOr<google::cloud::networksecurity::v1::ServerTlsPolicy>
  GetServerTlsPolicy(
      google::cloud::networksecurity::v1::GetServerTlsPolicyRequest const&
          request);

  virtual future<StatusOr<google::cloud::networksecurity::v1::ServerTlsPolicy>>
  CreateServerTlsPolicy(
      google::cloud::networksecurity::v1::CreateServerTlsPolicyRequest const&
          request);

  virtual StatusOr<google::longrunning::Operation> CreateServerTlsPolicy(
      NoAwaitTag,
      google::cloud::networksecurity::v1::CreateServerTlsPolicyRequest const&
          request);

  virtual future<StatusOr<google::cloud::networksecurity::v1::ServerTlsPolicy>>
  CreateServerTlsPolicy(google::longrunning::Operation const& operation);

  virtual future<StatusOr<google::cloud::networksecurity::v1::ServerTlsPolicy>>
  UpdateServerTlsPolicy(
      google::cloud::networksecurity::v1::UpdateServerTlsPolicyRequest const&
          request);

  virtual StatusOr<google::longrunning::Operation> UpdateServerTlsPolicy(
      NoAwaitTag,
      google::cloud::networksecurity::v1::UpdateServerTlsPolicyRequest const&
          request);

  virtual future<StatusOr<google::cloud::networksecurity::v1::ServerTlsPolicy>>
  UpdateServerTlsPolicy(google::longrunning::Operation const& operation);

  virtual future<
      StatusOr<google::cloud::networksecurity::v1::OperationMetadata>>
  DeleteServerTlsPolicy(
      google::cloud::networksecurity::v1::DeleteServerTlsPolicyRequest const&
          request);

  virtual StatusOr<google::longrunning::Operation> DeleteServerTlsPolicy(
      NoAwaitTag,
      google::cloud::networksecurity::v1::DeleteServerTlsPolicyRequest const&
          request);

  virtual future<
      StatusOr<google::cloud::networksecurity::v1::OperationMetadata>>
  DeleteServerTlsPolicy(google::longrunning::Operation const& operation);

  virtual StreamRange<google::cloud::networksecurity::v1::ClientTlsPolicy>
  ListClientTlsPolicies(
      google::cloud::networksecurity::v1::ListClientTlsPoliciesRequest request);

  virtual StatusOr<google::cloud::networksecurity::v1::ClientTlsPolicy>
  GetClientTlsPolicy(
      google::cloud::networksecurity::v1::GetClientTlsPolicyRequest const&
          request);

  virtual future<StatusOr<google::cloud::networksecurity::v1::ClientTlsPolicy>>
  CreateClientTlsPolicy(
      google::cloud::networksecurity::v1::CreateClientTlsPolicyRequest const&
          request);

  virtual StatusOr<google::longrunning::Operation> CreateClientTlsPolicy(
      NoAwaitTag,
      google::cloud::networksecurity::v1::CreateClientTlsPolicyRequest const&
          request);

  virtual future<StatusOr<google::cloud::networksecurity::v1::ClientTlsPolicy>>
  CreateClientTlsPolicy(google::longrunning::Operation const& operation);

  virtual future<StatusOr<google::cloud::networksecurity::v1::ClientTlsPolicy>>
  UpdateClientTlsPolicy(
      google::cloud::networksecurity::v1::UpdateClientTlsPolicyRequest const&
          request);

  virtual StatusOr<google::longrunning::Operation> UpdateClientTlsPolicy(
      NoAwaitTag,
      google::cloud::networksecurity::v1::UpdateClientTlsPolicyRequest const&
          request);

  virtual future<StatusOr<google::cloud::networksecurity::v1::ClientTlsPolicy>>
  UpdateClientTlsPolicy(google::longrunning::Operation const& operation);

  virtual future<
      StatusOr<google::cloud::networksecurity::v1::OperationMetadata>>
  DeleteClientTlsPolicy(
      google::cloud::networksecurity::v1::DeleteClientTlsPolicyRequest const&
          request);

  virtual StatusOr<google::longrunning::Operation> DeleteClientTlsPolicy(
      NoAwaitTag,
      google::cloud::networksecurity::v1::DeleteClientTlsPolicyRequest const&
          request);

  virtual future<
      StatusOr<google::cloud::networksecurity::v1::OperationMetadata>>
  DeleteClientTlsPolicy(google::longrunning::Operation const& operation);

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
 * `NetworkSecurityConnection`.
 *
 * The returned connection object should not be used directly; instead it
 * should be passed as an argument to the constructor of NetworkSecurityClient.
 *
 * The optional @p options argument may be used to configure aspects of the
 * returned `NetworkSecurityConnection`. Expected options are any of the types
 * in the following option lists:
 *
 * - `google::cloud::CommonOptionList`
 * - `google::cloud::GrpcOptionList`
 * - `google::cloud::UnifiedCredentialsOptionList`
 * - `google::cloud::networksecurity_v1::NetworkSecurityPolicyOptionList`
 *
 * @note Unexpected options will be ignored. To log unexpected options instead,
 *     set `GOOGLE_CLOUD_CPP_ENABLE_CLOG=yes` in the environment.
 *
 * @param options (optional) Configure the `NetworkSecurityConnection` created
 * by this function.
 */
std::shared_ptr<NetworkSecurityConnection> MakeNetworkSecurityConnection(
    Options options = {});

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace networksecurity_v1
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_NETWORKSECURITY_V1_NETWORK_SECURITY_CONNECTION_H
