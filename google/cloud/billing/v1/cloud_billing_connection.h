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
// source: google/cloud/billing/v1/cloud_billing.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_BILLING_V1_CLOUD_BILLING_CONNECTION_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_BILLING_V1_CLOUD_BILLING_CONNECTION_H

#include "google/cloud/billing/v1/cloud_billing_connection_idempotency_policy.h"
#include "google/cloud/billing/v1/internal/cloud_billing_retry_traits.h"
#include "google/cloud/backoff_policy.h"
#include "google/cloud/internal/retry_policy_impl.h"
#include "google/cloud/options.h"
#include "google/cloud/status_or.h"
#include "google/cloud/stream_range.h"
#include "google/cloud/version.h"
#include "google/cloud/billing/v1/cloud_billing.pb.h"
#include <memory>

namespace google {
namespace cloud {
namespace billing_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

/// The retry policy for `CloudBillingConnection`.
class CloudBillingRetryPolicy : public ::google::cloud::RetryPolicy {
 public:
  /// Creates a new instance of the policy, reset to the initial state.
  virtual std::unique_ptr<CloudBillingRetryPolicy> clone() const = 0;
};

/**
 * A retry policy for `CloudBillingConnection` based on counting errors.
 *
 * This policy stops retrying if:
 * - An RPC returns a non-transient error.
 * - More than a prescribed number of transient failures is detected.
 *
 * In this class the following status codes are treated as transient errors:
 * - [`kUnavailable`](@ref google::cloud::StatusCode)
 */
class CloudBillingLimitedErrorCountRetryPolicy
    : public CloudBillingRetryPolicy {
 public:
  /**
   * Create an instance that tolerates up to @p maximum_failures transient
   * errors.
   *
   * @note Disable the retry loop by providing an instance of this policy with
   *     @p maximum_failures == 0.
   */
  explicit CloudBillingLimitedErrorCountRetryPolicy(int maximum_failures)
      : impl_(maximum_failures) {}

  CloudBillingLimitedErrorCountRetryPolicy(
      CloudBillingLimitedErrorCountRetryPolicy&& rhs) noexcept
      : CloudBillingLimitedErrorCountRetryPolicy(rhs.maximum_failures()) {}
  CloudBillingLimitedErrorCountRetryPolicy(
      CloudBillingLimitedErrorCountRetryPolicy const& rhs) noexcept
      : CloudBillingLimitedErrorCountRetryPolicy(rhs.maximum_failures()) {}

  int maximum_failures() const { return impl_.maximum_failures(); }

  bool OnFailure(Status const& status) override {
    return impl_.OnFailure(status);
  }
  bool IsExhausted() const override { return impl_.IsExhausted(); }
  bool IsPermanentFailure(Status const& status) const override {
    return impl_.IsPermanentFailure(status);
  }
  std::unique_ptr<CloudBillingRetryPolicy> clone() const override {
    return std::make_unique<CloudBillingLimitedErrorCountRetryPolicy>(
        maximum_failures());
  }

  // This is provided only for backwards compatibility.
  using BaseType = CloudBillingRetryPolicy;

 private:
  google::cloud::internal::LimitedErrorCountRetryPolicy<
      billing_v1_internal::CloudBillingRetryTraits>
      impl_;
};

/**
 * A retry policy for `CloudBillingConnection` based on elapsed time.
 *
 * This policy stops retrying if:
 * - An RPC returns a non-transient error.
 * - The elapsed time in the retry loop exceeds a prescribed duration.
 *
 * In this class the following status codes are treated as transient errors:
 * - [`kUnavailable`](@ref google::cloud::StatusCode)
 */
class CloudBillingLimitedTimeRetryPolicy : public CloudBillingRetryPolicy {
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
  explicit CloudBillingLimitedTimeRetryPolicy(
      std::chrono::duration<DurationRep, DurationPeriod> maximum_duration)
      : impl_(maximum_duration) {}

  CloudBillingLimitedTimeRetryPolicy(
      CloudBillingLimitedTimeRetryPolicy&& rhs) noexcept
      : CloudBillingLimitedTimeRetryPolicy(rhs.maximum_duration()) {}
  CloudBillingLimitedTimeRetryPolicy(
      CloudBillingLimitedTimeRetryPolicy const& rhs) noexcept
      : CloudBillingLimitedTimeRetryPolicy(rhs.maximum_duration()) {}

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
  std::unique_ptr<CloudBillingRetryPolicy> clone() const override {
    return std::make_unique<CloudBillingLimitedTimeRetryPolicy>(
        maximum_duration());
  }

  // This is provided only for backwards compatibility.
  using BaseType = CloudBillingRetryPolicy;

 private:
  google::cloud::internal::LimitedTimeRetryPolicy<
      billing_v1_internal::CloudBillingRetryTraits>
      impl_;
};

/**
 * The `CloudBillingConnection` object for `CloudBillingClient`.
 *
 * This interface defines virtual methods for each of the user-facing overload
 * sets in `CloudBillingClient`. This allows users to inject custom behavior
 * (e.g., with a Google Mock object) when writing tests that use objects of type
 * `CloudBillingClient`.
 *
 * To create a concrete instance, see `MakeCloudBillingConnection()`.
 *
 * For mocking, see `billing_v1_mocks::MockCloudBillingConnection`.
 */
class CloudBillingConnection {
 public:
  virtual ~CloudBillingConnection() = 0;

  virtual Options options() { return Options{}; }

  virtual StatusOr<google::cloud::billing::v1::BillingAccount>
  GetBillingAccount(
      google::cloud::billing::v1::GetBillingAccountRequest const& request);

  virtual StreamRange<google::cloud::billing::v1::BillingAccount>
  ListBillingAccounts(
      google::cloud::billing::v1::ListBillingAccountsRequest request);

  virtual StatusOr<google::cloud::billing::v1::BillingAccount>
  UpdateBillingAccount(
      google::cloud::billing::v1::UpdateBillingAccountRequest const& request);

  virtual StatusOr<google::cloud::billing::v1::BillingAccount>
  CreateBillingAccount(
      google::cloud::billing::v1::CreateBillingAccountRequest const& request);

  virtual StreamRange<google::cloud::billing::v1::ProjectBillingInfo>
  ListProjectBillingInfo(
      google::cloud::billing::v1::ListProjectBillingInfoRequest request);

  virtual StatusOr<google::cloud::billing::v1::ProjectBillingInfo>
  GetProjectBillingInfo(
      google::cloud::billing::v1::GetProjectBillingInfoRequest const& request);

  virtual StatusOr<google::cloud::billing::v1::ProjectBillingInfo>
  UpdateProjectBillingInfo(
      google::cloud::billing::v1::UpdateProjectBillingInfoRequest const&
          request);

  virtual StatusOr<google::iam::v1::Policy> GetIamPolicy(
      google::iam::v1::GetIamPolicyRequest const& request);

  virtual StatusOr<google::iam::v1::Policy> SetIamPolicy(
      google::iam::v1::SetIamPolicyRequest const& request);

  virtual StatusOr<google::iam::v1::TestIamPermissionsResponse>
  TestIamPermissions(google::iam::v1::TestIamPermissionsRequest const& request);

  virtual StatusOr<google::cloud::billing::v1::BillingAccount>
  MoveBillingAccount(
      google::cloud::billing::v1::MoveBillingAccountRequest const& request);
};

/**
 * A factory function to construct an object of type `CloudBillingConnection`.
 *
 * The returned connection object should not be used directly; instead it
 * should be passed as an argument to the constructor of CloudBillingClient.
 *
 * The optional @p options argument may be used to configure aspects of the
 * returned `CloudBillingConnection`. Expected options are any of the types in
 * the following option lists:
 *
 * - `google::cloud::CommonOptionList`
 * - `google::cloud::GrpcOptionList`
 * - `google::cloud::UnifiedCredentialsOptionList`
 * - `google::cloud::billing_v1::CloudBillingPolicyOptionList`
 *
 * @note Unexpected options will be ignored. To log unexpected options instead,
 *     set `GOOGLE_CLOUD_CPP_ENABLE_CLOG=yes` in the environment.
 *
 * @param options (optional) Configure the `CloudBillingConnection` created by
 * this function.
 */
std::shared_ptr<CloudBillingConnection> MakeCloudBillingConnection(
    Options options = {});

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace billing_v1
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_BILLING_V1_CLOUD_BILLING_CONNECTION_H
