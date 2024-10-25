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
// source: google/cloud/shell/v1/cloudshell.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_SHELL_V1_CLOUD_SHELL_CONNECTION_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_SHELL_V1_CLOUD_SHELL_CONNECTION_H

#include "google/cloud/shell/v1/cloud_shell_connection_idempotency_policy.h"
#include "google/cloud/shell/v1/cloudshell.pb.h"
#include "google/cloud/shell/v1/internal/cloud_shell_retry_traits.h"
#include "google/cloud/backoff_policy.h"
#include "google/cloud/future.h"
#include "google/cloud/internal/retry_policy_impl.h"
#include "google/cloud/no_await_tag.h"
#include "google/cloud/options.h"
#include "google/cloud/polling_policy.h"
#include "google/cloud/status_or.h"
#include "google/cloud/version.h"
#include "google/longrunning/operations.grpc.pb.h"
#include <memory>

namespace google {
namespace cloud {
namespace shell_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

/// The retry policy for `CloudShellServiceConnection`.
class CloudShellServiceRetryPolicy : public ::google::cloud::RetryPolicy {
 public:
  /// Creates a new instance of the policy, reset to the initial state.
  virtual std::unique_ptr<CloudShellServiceRetryPolicy> clone() const = 0;
};

/**
 * A retry policy for `CloudShellServiceConnection` based on counting errors.
 *
 * This policy stops retrying if:
 * - An RPC returns a non-transient error.
 * - More than a prescribed number of transient failures is detected.
 *
 * In this class the following status codes are treated as transient errors:
 * - [`kUnavailable`](@ref google::cloud::StatusCode)
 * - [`kUnknown`](@ref google::cloud::StatusCode)
 */
class CloudShellServiceLimitedErrorCountRetryPolicy
    : public CloudShellServiceRetryPolicy {
 public:
  /**
   * Create an instance that tolerates up to @p maximum_failures transient
   * errors.
   *
   * @note Disable the retry loop by providing an instance of this policy with
   *     @p maximum_failures == 0.
   */
  explicit CloudShellServiceLimitedErrorCountRetryPolicy(int maximum_failures)
      : impl_(maximum_failures) {}

  CloudShellServiceLimitedErrorCountRetryPolicy(
      CloudShellServiceLimitedErrorCountRetryPolicy&& rhs) noexcept
      : CloudShellServiceLimitedErrorCountRetryPolicy(rhs.maximum_failures()) {}
  CloudShellServiceLimitedErrorCountRetryPolicy(
      CloudShellServiceLimitedErrorCountRetryPolicy const& rhs) noexcept
      : CloudShellServiceLimitedErrorCountRetryPolicy(rhs.maximum_failures()) {}

  int maximum_failures() const { return impl_.maximum_failures(); }

  bool OnFailure(Status const& status) override {
    return impl_.OnFailure(status);
  }
  bool IsExhausted() const override { return impl_.IsExhausted(); }
  bool IsPermanentFailure(Status const& status) const override {
    return impl_.IsPermanentFailure(status);
  }
  std::unique_ptr<CloudShellServiceRetryPolicy> clone() const override {
    return std::make_unique<CloudShellServiceLimitedErrorCountRetryPolicy>(
        maximum_failures());
  }

  // This is provided only for backwards compatibility.
  using BaseType = CloudShellServiceRetryPolicy;

 private:
  google::cloud::internal::LimitedErrorCountRetryPolicy<
      shell_v1_internal::CloudShellServiceRetryTraits>
      impl_;
};

/**
 * A retry policy for `CloudShellServiceConnection` based on elapsed time.
 *
 * This policy stops retrying if:
 * - An RPC returns a non-transient error.
 * - The elapsed time in the retry loop exceeds a prescribed duration.
 *
 * In this class the following status codes are treated as transient errors:
 * - [`kUnavailable`](@ref google::cloud::StatusCode)
 * - [`kUnknown`](@ref google::cloud::StatusCode)
 */
class CloudShellServiceLimitedTimeRetryPolicy
    : public CloudShellServiceRetryPolicy {
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
  explicit CloudShellServiceLimitedTimeRetryPolicy(
      std::chrono::duration<DurationRep, DurationPeriod> maximum_duration)
      : impl_(maximum_duration) {}

  CloudShellServiceLimitedTimeRetryPolicy(
      CloudShellServiceLimitedTimeRetryPolicy&& rhs) noexcept
      : CloudShellServiceLimitedTimeRetryPolicy(rhs.maximum_duration()) {}
  CloudShellServiceLimitedTimeRetryPolicy(
      CloudShellServiceLimitedTimeRetryPolicy const& rhs) noexcept
      : CloudShellServiceLimitedTimeRetryPolicy(rhs.maximum_duration()) {}

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
  std::unique_ptr<CloudShellServiceRetryPolicy> clone() const override {
    return std::make_unique<CloudShellServiceLimitedTimeRetryPolicy>(
        maximum_duration());
  }

  // This is provided only for backwards compatibility.
  using BaseType = CloudShellServiceRetryPolicy;

 private:
  google::cloud::internal::LimitedTimeRetryPolicy<
      shell_v1_internal::CloudShellServiceRetryTraits>
      impl_;
};

/**
 * The `CloudShellServiceConnection` object for `CloudShellServiceClient`.
 *
 * This interface defines virtual methods for each of the user-facing overload
 * sets in `CloudShellServiceClient`. This allows users to inject custom
 * behavior (e.g., with a Google Mock object) when writing tests that use
 * objects of type `CloudShellServiceClient`.
 *
 * To create a concrete instance, see `MakeCloudShellServiceConnection()`.
 *
 * For mocking, see `shell_v1_mocks::MockCloudShellServiceConnection`.
 */
class CloudShellServiceConnection {
 public:
  virtual ~CloudShellServiceConnection() = 0;

  virtual Options options() { return Options{}; }

  virtual StatusOr<google::cloud::shell::v1::Environment> GetEnvironment(
      google::cloud::shell::v1::GetEnvironmentRequest const& request);

  virtual future<StatusOr<google::cloud::shell::v1::StartEnvironmentResponse>>
  StartEnvironment(
      google::cloud::shell::v1::StartEnvironmentRequest const& request);

  virtual StatusOr<google::longrunning::Operation> StartEnvironment(
      NoAwaitTag,
      google::cloud::shell::v1::StartEnvironmentRequest const& request);

  virtual future<StatusOr<google::cloud::shell::v1::StartEnvironmentResponse>>
  StartEnvironment(google::longrunning::Operation const& operation);

  virtual future<
      StatusOr<google::cloud::shell::v1::AuthorizeEnvironmentResponse>>
  AuthorizeEnvironment(
      google::cloud::shell::v1::AuthorizeEnvironmentRequest const& request);

  virtual StatusOr<google::longrunning::Operation> AuthorizeEnvironment(
      NoAwaitTag,
      google::cloud::shell::v1::AuthorizeEnvironmentRequest const& request);

  virtual future<
      StatusOr<google::cloud::shell::v1::AuthorizeEnvironmentResponse>>
  AuthorizeEnvironment(google::longrunning::Operation const& operation);

  virtual future<StatusOr<google::cloud::shell::v1::AddPublicKeyResponse>>
  AddPublicKey(google::cloud::shell::v1::AddPublicKeyRequest const& request);

  virtual StatusOr<google::longrunning::Operation> AddPublicKey(
      NoAwaitTag, google::cloud::shell::v1::AddPublicKeyRequest const& request);

  virtual future<StatusOr<google::cloud::shell::v1::AddPublicKeyResponse>>
  AddPublicKey(google::longrunning::Operation const& operation);

  virtual future<StatusOr<google::cloud::shell::v1::RemovePublicKeyResponse>>
  RemovePublicKey(
      google::cloud::shell::v1::RemovePublicKeyRequest const& request);

  virtual StatusOr<google::longrunning::Operation> RemovePublicKey(
      NoAwaitTag,
      google::cloud::shell::v1::RemovePublicKeyRequest const& request);

  virtual future<StatusOr<google::cloud::shell::v1::RemovePublicKeyResponse>>
  RemovePublicKey(google::longrunning::Operation const& operation);
};

/**
 * A factory function to construct an object of type
 * `CloudShellServiceConnection`.
 *
 * The returned connection object should not be used directly; instead it
 * should be passed as an argument to the constructor of
 * CloudShellServiceClient.
 *
 * The optional @p options argument may be used to configure aspects of the
 * returned `CloudShellServiceConnection`. Expected options are any of the types
 * in the following option lists:
 *
 * - `google::cloud::CommonOptionList`
 * - `google::cloud::GrpcOptionList`
 * - `google::cloud::UnifiedCredentialsOptionList`
 * - `google::cloud::shell_v1::CloudShellServicePolicyOptionList`
 *
 * @note Unexpected options will be ignored. To log unexpected options instead,
 *     set `GOOGLE_CLOUD_CPP_ENABLE_CLOG=yes` in the environment.
 *
 * @param options (optional) Configure the `CloudShellServiceConnection` created
 * by this function.
 */
std::shared_ptr<CloudShellServiceConnection> MakeCloudShellServiceConnection(
    Options options = {});

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace shell_v1
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_SHELL_V1_CLOUD_SHELL_CONNECTION_H
