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
// source: google/cloud/iap/v1/service.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_IAP_V1_IDENTITY_AWARE_PROXY_O_AUTH_CONNECTION_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_IAP_V1_IDENTITY_AWARE_PROXY_O_AUTH_CONNECTION_H

#include "google/cloud/iap/v1/identity_aware_proxy_o_auth_connection_idempotency_policy.h"
#include "google/cloud/iap/v1/internal/identity_aware_proxy_o_auth_retry_traits.h"
#include "google/cloud/backoff_policy.h"
#include "google/cloud/internal/retry_policy_impl.h"
#include "google/cloud/options.h"
#include "google/cloud/status_or.h"
#include "google/cloud/stream_range.h"
#include "google/cloud/version.h"
#include "google/cloud/iap/v1/service.pb.h"
#include <memory>

namespace google {
namespace cloud {
namespace iap_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

/// The retry policy for `IdentityAwareProxyOAuthServiceConnection`.
class IdentityAwareProxyOAuthServiceRetryPolicy
    : public ::google::cloud::RetryPolicy {
 public:
  /// Creates a new instance of the policy, reset to the initial state.
  virtual std::unique_ptr<IdentityAwareProxyOAuthServiceRetryPolicy> clone()
      const = 0;
};

/**
 * A retry policy for `IdentityAwareProxyOAuthServiceConnection` based on
 * counting errors.
 *
 * This policy stops retrying if:
 * - An RPC returns a non-transient error.
 * - More than a prescribed number of transient failures is detected.
 *
 * In this class the following status codes are treated as transient errors:
 * - [`kUnavailable`](@ref google::cloud::StatusCode)
 */
class IdentityAwareProxyOAuthServiceLimitedErrorCountRetryPolicy
    : public IdentityAwareProxyOAuthServiceRetryPolicy {
 public:
  /**
   * Create an instance that tolerates up to @p maximum_failures transient
   * errors.
   *
   * @note Disable the retry loop by providing an instance of this policy with
   *     @p maximum_failures == 0.
   */
  explicit IdentityAwareProxyOAuthServiceLimitedErrorCountRetryPolicy(
      int maximum_failures)
      : impl_(maximum_failures) {}

  IdentityAwareProxyOAuthServiceLimitedErrorCountRetryPolicy(
      IdentityAwareProxyOAuthServiceLimitedErrorCountRetryPolicy&& rhs) noexcept
      : IdentityAwareProxyOAuthServiceLimitedErrorCountRetryPolicy(
            rhs.maximum_failures()) {}
  IdentityAwareProxyOAuthServiceLimitedErrorCountRetryPolicy(
      IdentityAwareProxyOAuthServiceLimitedErrorCountRetryPolicy const&
          rhs) noexcept
      : IdentityAwareProxyOAuthServiceLimitedErrorCountRetryPolicy(
            rhs.maximum_failures()) {}

  int maximum_failures() const { return impl_.maximum_failures(); }

  bool OnFailure(Status const& status) override {
    return impl_.OnFailure(status);
  }
  bool IsExhausted() const override { return impl_.IsExhausted(); }
  bool IsPermanentFailure(Status const& status) const override {
    return impl_.IsPermanentFailure(status);
  }
  std::unique_ptr<IdentityAwareProxyOAuthServiceRetryPolicy> clone()
      const override {
    return std::make_unique<
        IdentityAwareProxyOAuthServiceLimitedErrorCountRetryPolicy>(
        maximum_failures());
  }

  // This is provided only for backwards compatibility.
  using BaseType = IdentityAwareProxyOAuthServiceRetryPolicy;

 private:
  google::cloud::internal::LimitedErrorCountRetryPolicy<
      iap_v1_internal::IdentityAwareProxyOAuthServiceRetryTraits>
      impl_;
};

/**
 * A retry policy for `IdentityAwareProxyOAuthServiceConnection` based on
 * elapsed time.
 *
 * This policy stops retrying if:
 * - An RPC returns a non-transient error.
 * - The elapsed time in the retry loop exceeds a prescribed duration.
 *
 * In this class the following status codes are treated as transient errors:
 * - [`kUnavailable`](@ref google::cloud::StatusCode)
 */
class IdentityAwareProxyOAuthServiceLimitedTimeRetryPolicy
    : public IdentityAwareProxyOAuthServiceRetryPolicy {
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
  explicit IdentityAwareProxyOAuthServiceLimitedTimeRetryPolicy(
      std::chrono::duration<DurationRep, DurationPeriod> maximum_duration)
      : impl_(maximum_duration) {}

  IdentityAwareProxyOAuthServiceLimitedTimeRetryPolicy(
      IdentityAwareProxyOAuthServiceLimitedTimeRetryPolicy&& rhs) noexcept
      : IdentityAwareProxyOAuthServiceLimitedTimeRetryPolicy(
            rhs.maximum_duration()) {}
  IdentityAwareProxyOAuthServiceLimitedTimeRetryPolicy(
      IdentityAwareProxyOAuthServiceLimitedTimeRetryPolicy const& rhs) noexcept
      : IdentityAwareProxyOAuthServiceLimitedTimeRetryPolicy(
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
  std::unique_ptr<IdentityAwareProxyOAuthServiceRetryPolicy> clone()
      const override {
    return std::make_unique<
        IdentityAwareProxyOAuthServiceLimitedTimeRetryPolicy>(
        maximum_duration());
  }

  // This is provided only for backwards compatibility.
  using BaseType = IdentityAwareProxyOAuthServiceRetryPolicy;

 private:
  google::cloud::internal::LimitedTimeRetryPolicy<
      iap_v1_internal::IdentityAwareProxyOAuthServiceRetryTraits>
      impl_;
};

/**
 * The `IdentityAwareProxyOAuthServiceConnection` object for
 * `IdentityAwareProxyOAuthServiceClient`.
 *
 * This interface defines virtual methods for each of the user-facing overload
 * sets in `IdentityAwareProxyOAuthServiceClient`. This allows users to inject
 * custom behavior (e.g., with a Google Mock object) when writing tests that use
 * objects of type `IdentityAwareProxyOAuthServiceClient`.
 *
 * To create a concrete instance, see
 * `MakeIdentityAwareProxyOAuthServiceConnection()`.
 *
 * For mocking, see
 * `iap_v1_mocks::MockIdentityAwareProxyOAuthServiceConnection`.
 */
class IdentityAwareProxyOAuthServiceConnection {
 public:
  virtual ~IdentityAwareProxyOAuthServiceConnection() = 0;

  virtual Options options() { return Options{}; }

  virtual StatusOr<google::cloud::iap::v1::ListBrandsResponse> ListBrands(
      google::cloud::iap::v1::ListBrandsRequest const& request);

  virtual StatusOr<google::cloud::iap::v1::Brand> CreateBrand(
      google::cloud::iap::v1::CreateBrandRequest const& request);

  virtual StatusOr<google::cloud::iap::v1::Brand> GetBrand(
      google::cloud::iap::v1::GetBrandRequest const& request);

  virtual StatusOr<google::cloud::iap::v1::IdentityAwareProxyClient>
  CreateIdentityAwareProxyClient(
      google::cloud::iap::v1::CreateIdentityAwareProxyClientRequest const&
          request);

  virtual StreamRange<google::cloud::iap::v1::IdentityAwareProxyClient>
  ListIdentityAwareProxyClients(
      google::cloud::iap::v1::ListIdentityAwareProxyClientsRequest request);

  virtual StatusOr<google::cloud::iap::v1::IdentityAwareProxyClient>
  GetIdentityAwareProxyClient(
      google::cloud::iap::v1::GetIdentityAwareProxyClientRequest const&
          request);

  virtual StatusOr<google::cloud::iap::v1::IdentityAwareProxyClient>
  ResetIdentityAwareProxyClientSecret(
      google::cloud::iap::v1::ResetIdentityAwareProxyClientSecretRequest const&
          request);

  virtual Status DeleteIdentityAwareProxyClient(
      google::cloud::iap::v1::DeleteIdentityAwareProxyClientRequest const&
          request);
};

/**
 * A factory function to construct an object of type
 * `IdentityAwareProxyOAuthServiceConnection`.
 *
 * The returned connection object should not be used directly; instead it
 * should be passed as an argument to the constructor of
 * IdentityAwareProxyOAuthServiceClient.
 *
 * The optional @p options argument may be used to configure aspects of the
 * returned `IdentityAwareProxyOAuthServiceConnection`. Expected options are any
 * of the types in the following option lists:
 *
 * - `google::cloud::CommonOptionList`
 * - `google::cloud::GrpcOptionList`
 * - `google::cloud::UnifiedCredentialsOptionList`
 * - `google::cloud::iap_v1::IdentityAwareProxyOAuthServicePolicyOptionList`
 *
 * @note Unexpected options will be ignored. To log unexpected options instead,
 *     set `GOOGLE_CLOUD_CPP_ENABLE_CLOG=yes` in the environment.
 *
 * @param options (optional) Configure the
 * `IdentityAwareProxyOAuthServiceConnection` created by this function.
 */
std::shared_ptr<IdentityAwareProxyOAuthServiceConnection>
MakeIdentityAwareProxyOAuthServiceConnection(Options options = {});

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace iap_v1
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_IAP_V1_IDENTITY_AWARE_PROXY_O_AUTH_CONNECTION_H
