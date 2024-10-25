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
// source: google/cloud/secretmanager/v1/service.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_SECRETMANAGER_V1_SECRET_MANAGER_CONNECTION_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_SECRETMANAGER_V1_SECRET_MANAGER_CONNECTION_H

#include "google/cloud/secretmanager/v1/internal/secret_manager_retry_traits.h"
#include "google/cloud/secretmanager/v1/secret_manager_connection_idempotency_policy.h"
#include "google/cloud/backoff_policy.h"
#include "google/cloud/internal/retry_policy_impl.h"
#include "google/cloud/options.h"
#include "google/cloud/status_or.h"
#include "google/cloud/stream_range.h"
#include "google/cloud/version.h"
#include "google/cloud/secretmanager/v1/service.pb.h"
#include <memory>

namespace google {
namespace cloud {
namespace secretmanager_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

/// The retry policy for `SecretManagerServiceConnection`.
class SecretManagerServiceRetryPolicy : public ::google::cloud::RetryPolicy {
 public:
  /// Creates a new instance of the policy, reset to the initial state.
  virtual std::unique_ptr<SecretManagerServiceRetryPolicy> clone() const = 0;
};

/**
 * A retry policy for `SecretManagerServiceConnection` based on counting errors.
 *
 * This policy stops retrying if:
 * - An RPC returns a non-transient error.
 * - More than a prescribed number of transient failures is detected.
 *
 * In this class the following status codes are treated as transient errors:
 * - [`kUnavailable`](@ref google::cloud::StatusCode)
 */
class SecretManagerServiceLimitedErrorCountRetryPolicy
    : public SecretManagerServiceRetryPolicy {
 public:
  /**
   * Create an instance that tolerates up to @p maximum_failures transient
   * errors.
   *
   * @note Disable the retry loop by providing an instance of this policy with
   *     @p maximum_failures == 0.
   */
  explicit SecretManagerServiceLimitedErrorCountRetryPolicy(
      int maximum_failures)
      : impl_(maximum_failures) {}

  SecretManagerServiceLimitedErrorCountRetryPolicy(
      SecretManagerServiceLimitedErrorCountRetryPolicy&& rhs) noexcept
      : SecretManagerServiceLimitedErrorCountRetryPolicy(
            rhs.maximum_failures()) {}
  SecretManagerServiceLimitedErrorCountRetryPolicy(
      SecretManagerServiceLimitedErrorCountRetryPolicy const& rhs) noexcept
      : SecretManagerServiceLimitedErrorCountRetryPolicy(
            rhs.maximum_failures()) {}

  int maximum_failures() const { return impl_.maximum_failures(); }

  bool OnFailure(Status const& status) override {
    return impl_.OnFailure(status);
  }
  bool IsExhausted() const override { return impl_.IsExhausted(); }
  bool IsPermanentFailure(Status const& status) const override {
    return impl_.IsPermanentFailure(status);
  }
  std::unique_ptr<SecretManagerServiceRetryPolicy> clone() const override {
    return std::make_unique<SecretManagerServiceLimitedErrorCountRetryPolicy>(
        maximum_failures());
  }

  // This is provided only for backwards compatibility.
  using BaseType = SecretManagerServiceRetryPolicy;

 private:
  google::cloud::internal::LimitedErrorCountRetryPolicy<
      secretmanager_v1_internal::SecretManagerServiceRetryTraits>
      impl_;
};

/**
 * A retry policy for `SecretManagerServiceConnection` based on elapsed time.
 *
 * This policy stops retrying if:
 * - An RPC returns a non-transient error.
 * - The elapsed time in the retry loop exceeds a prescribed duration.
 *
 * In this class the following status codes are treated as transient errors:
 * - [`kUnavailable`](@ref google::cloud::StatusCode)
 */
class SecretManagerServiceLimitedTimeRetryPolicy
    : public SecretManagerServiceRetryPolicy {
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
  explicit SecretManagerServiceLimitedTimeRetryPolicy(
      std::chrono::duration<DurationRep, DurationPeriod> maximum_duration)
      : impl_(maximum_duration) {}

  SecretManagerServiceLimitedTimeRetryPolicy(
      SecretManagerServiceLimitedTimeRetryPolicy&& rhs) noexcept
      : SecretManagerServiceLimitedTimeRetryPolicy(rhs.maximum_duration()) {}
  SecretManagerServiceLimitedTimeRetryPolicy(
      SecretManagerServiceLimitedTimeRetryPolicy const& rhs) noexcept
      : SecretManagerServiceLimitedTimeRetryPolicy(rhs.maximum_duration()) {}

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
  std::unique_ptr<SecretManagerServiceRetryPolicy> clone() const override {
    return std::make_unique<SecretManagerServiceLimitedTimeRetryPolicy>(
        maximum_duration());
  }

  // This is provided only for backwards compatibility.
  using BaseType = SecretManagerServiceRetryPolicy;

 private:
  google::cloud::internal::LimitedTimeRetryPolicy<
      secretmanager_v1_internal::SecretManagerServiceRetryTraits>
      impl_;
};

/**
 * The `SecretManagerServiceConnection` object for `SecretManagerServiceClient`.
 *
 * This interface defines virtual methods for each of the user-facing overload
 * sets in `SecretManagerServiceClient`. This allows users to inject custom
 * behavior (e.g., with a Google Mock object) when writing tests that use
 * objects of type `SecretManagerServiceClient`.
 *
 * To create a concrete instance, see `MakeSecretManagerServiceConnection()`.
 *
 * For mocking, see
 * `secretmanager_v1_mocks::MockSecretManagerServiceConnection`.
 */
class SecretManagerServiceConnection {
 public:
  virtual ~SecretManagerServiceConnection() = 0;

  virtual Options options() { return Options{}; }

  virtual StreamRange<google::cloud::secretmanager::v1::Secret> ListSecrets(
      google::cloud::secretmanager::v1::ListSecretsRequest request);

  virtual StatusOr<google::cloud::secretmanager::v1::Secret> CreateSecret(
      google::cloud::secretmanager::v1::CreateSecretRequest const& request);

  virtual StatusOr<google::cloud::secretmanager::v1::SecretVersion>
  AddSecretVersion(
      google::cloud::secretmanager::v1::AddSecretVersionRequest const& request);

  virtual StatusOr<google::cloud::secretmanager::v1::Secret> GetSecret(
      google::cloud::secretmanager::v1::GetSecretRequest const& request);

  virtual StatusOr<google::cloud::secretmanager::v1::Secret> UpdateSecret(
      google::cloud::secretmanager::v1::UpdateSecretRequest const& request);

  virtual Status DeleteSecret(
      google::cloud::secretmanager::v1::DeleteSecretRequest const& request);

  virtual StreamRange<google::cloud::secretmanager::v1::SecretVersion>
  ListSecretVersions(
      google::cloud::secretmanager::v1::ListSecretVersionsRequest request);

  virtual StatusOr<google::cloud::secretmanager::v1::SecretVersion>
  GetSecretVersion(
      google::cloud::secretmanager::v1::GetSecretVersionRequest const& request);

  virtual StatusOr<
      google::cloud::secretmanager::v1::AccessSecretVersionResponse>
  AccessSecretVersion(
      google::cloud::secretmanager::v1::AccessSecretVersionRequest const&
          request);

  virtual StatusOr<google::cloud::secretmanager::v1::SecretVersion>
  DisableSecretVersion(
      google::cloud::secretmanager::v1::DisableSecretVersionRequest const&
          request);

  virtual StatusOr<google::cloud::secretmanager::v1::SecretVersion>
  EnableSecretVersion(
      google::cloud::secretmanager::v1::EnableSecretVersionRequest const&
          request);

  virtual StatusOr<google::cloud::secretmanager::v1::SecretVersion>
  DestroySecretVersion(
      google::cloud::secretmanager::v1::DestroySecretVersionRequest const&
          request);

  virtual StatusOr<google::iam::v1::Policy> SetIamPolicy(
      google::iam::v1::SetIamPolicyRequest const& request);

  virtual StatusOr<google::iam::v1::Policy> GetIamPolicy(
      google::iam::v1::GetIamPolicyRequest const& request);

  virtual StatusOr<google::iam::v1::TestIamPermissionsResponse>
  TestIamPermissions(google::iam::v1::TestIamPermissionsRequest const& request);

  virtual StreamRange<google::cloud::location::Location> ListLocations(
      google::cloud::location::ListLocationsRequest request);

  virtual StatusOr<google::cloud::location::Location> GetLocation(
      google::cloud::location::GetLocationRequest const& request);
};

/**
 * A factory function to construct an object of type
 * `SecretManagerServiceConnection`.
 *
 * The returned connection object should not be used directly; instead it
 * should be passed as an argument to the constructor of
 * SecretManagerServiceClient.
 *
 * The optional @p options argument may be used to configure aspects of the
 * returned `SecretManagerServiceConnection`. Expected options are any of the
 * types in the following option lists:
 *
 * - `google::cloud::CommonOptionList`
 * - `google::cloud::GrpcOptionList`
 * - `google::cloud::UnifiedCredentialsOptionList`
 * - `google::cloud::secretmanager_v1::SecretManagerServicePolicyOptionList`
 *
 * @note Unexpected options will be ignored. To log unexpected options instead,
 *     set `GOOGLE_CLOUD_CPP_ENABLE_CLOG=yes` in the environment.
 *
 * @param options (optional) Configure the `SecretManagerServiceConnection`
 * created by this function.
 */
std::shared_ptr<SecretManagerServiceConnection>
MakeSecretManagerServiceConnection(Options options = {});

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace secretmanager_v1
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_SECRETMANAGER_V1_SECRET_MANAGER_CONNECTION_H
