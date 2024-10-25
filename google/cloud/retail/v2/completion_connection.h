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
// source: google/cloud/retail/v2/completion_service.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_RETAIL_V2_COMPLETION_CONNECTION_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_RETAIL_V2_COMPLETION_CONNECTION_H

#include "google/cloud/retail/v2/completion_connection_idempotency_policy.h"
#include "google/cloud/retail/v2/completion_service.pb.h"
#include "google/cloud/retail/v2/internal/completion_retry_traits.h"
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
namespace retail_v2 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

/// The retry policy for `CompletionServiceConnection`.
class CompletionServiceRetryPolicy : public ::google::cloud::RetryPolicy {
 public:
  /// Creates a new instance of the policy, reset to the initial state.
  virtual std::unique_ptr<CompletionServiceRetryPolicy> clone() const = 0;
};

/**
 * A retry policy for `CompletionServiceConnection` based on counting errors.
 *
 * This policy stops retrying if:
 * - An RPC returns a non-transient error.
 * - More than a prescribed number of transient failures is detected.
 *
 * In this class the following status codes are treated as transient errors:
 * - [`kUnavailable`](@ref google::cloud::StatusCode)
 */
class CompletionServiceLimitedErrorCountRetryPolicy
    : public CompletionServiceRetryPolicy {
 public:
  /**
   * Create an instance that tolerates up to @p maximum_failures transient
   * errors.
   *
   * @note Disable the retry loop by providing an instance of this policy with
   *     @p maximum_failures == 0.
   */
  explicit CompletionServiceLimitedErrorCountRetryPolicy(int maximum_failures)
      : impl_(maximum_failures) {}

  CompletionServiceLimitedErrorCountRetryPolicy(
      CompletionServiceLimitedErrorCountRetryPolicy&& rhs) noexcept
      : CompletionServiceLimitedErrorCountRetryPolicy(rhs.maximum_failures()) {}
  CompletionServiceLimitedErrorCountRetryPolicy(
      CompletionServiceLimitedErrorCountRetryPolicy const& rhs) noexcept
      : CompletionServiceLimitedErrorCountRetryPolicy(rhs.maximum_failures()) {}

  int maximum_failures() const { return impl_.maximum_failures(); }

  bool OnFailure(Status const& status) override {
    return impl_.OnFailure(status);
  }
  bool IsExhausted() const override { return impl_.IsExhausted(); }
  bool IsPermanentFailure(Status const& status) const override {
    return impl_.IsPermanentFailure(status);
  }
  std::unique_ptr<CompletionServiceRetryPolicy> clone() const override {
    return std::make_unique<CompletionServiceLimitedErrorCountRetryPolicy>(
        maximum_failures());
  }

  // This is provided only for backwards compatibility.
  using BaseType = CompletionServiceRetryPolicy;

 private:
  google::cloud::internal::LimitedErrorCountRetryPolicy<
      retail_v2_internal::CompletionServiceRetryTraits>
      impl_;
};

/**
 * A retry policy for `CompletionServiceConnection` based on elapsed time.
 *
 * This policy stops retrying if:
 * - An RPC returns a non-transient error.
 * - The elapsed time in the retry loop exceeds a prescribed duration.
 *
 * In this class the following status codes are treated as transient errors:
 * - [`kUnavailable`](@ref google::cloud::StatusCode)
 */
class CompletionServiceLimitedTimeRetryPolicy
    : public CompletionServiceRetryPolicy {
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
  explicit CompletionServiceLimitedTimeRetryPolicy(
      std::chrono::duration<DurationRep, DurationPeriod> maximum_duration)
      : impl_(maximum_duration) {}

  CompletionServiceLimitedTimeRetryPolicy(
      CompletionServiceLimitedTimeRetryPolicy&& rhs) noexcept
      : CompletionServiceLimitedTimeRetryPolicy(rhs.maximum_duration()) {}
  CompletionServiceLimitedTimeRetryPolicy(
      CompletionServiceLimitedTimeRetryPolicy const& rhs) noexcept
      : CompletionServiceLimitedTimeRetryPolicy(rhs.maximum_duration()) {}

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
  std::unique_ptr<CompletionServiceRetryPolicy> clone() const override {
    return std::make_unique<CompletionServiceLimitedTimeRetryPolicy>(
        maximum_duration());
  }

  // This is provided only for backwards compatibility.
  using BaseType = CompletionServiceRetryPolicy;

 private:
  google::cloud::internal::LimitedTimeRetryPolicy<
      retail_v2_internal::CompletionServiceRetryTraits>
      impl_;
};

/**
 * The `CompletionServiceConnection` object for `CompletionServiceClient`.
 *
 * This interface defines virtual methods for each of the user-facing overload
 * sets in `CompletionServiceClient`. This allows users to inject custom
 * behavior (e.g., with a Google Mock object) when writing tests that use
 * objects of type `CompletionServiceClient`.
 *
 * To create a concrete instance, see `MakeCompletionServiceConnection()`.
 *
 * For mocking, see `retail_v2_mocks::MockCompletionServiceConnection`.
 */
class CompletionServiceConnection {
 public:
  virtual ~CompletionServiceConnection() = 0;

  virtual Options options() { return Options{}; }

  virtual StatusOr<google::cloud::retail::v2::CompleteQueryResponse>
  CompleteQuery(google::cloud::retail::v2::CompleteQueryRequest const& request);

  virtual future<
      StatusOr<google::cloud::retail::v2::ImportCompletionDataResponse>>
  ImportCompletionData(
      google::cloud::retail::v2::ImportCompletionDataRequest const& request);

  virtual StatusOr<google::longrunning::Operation> ImportCompletionData(
      NoAwaitTag,
      google::cloud::retail::v2::ImportCompletionDataRequest const& request);

  virtual future<
      StatusOr<google::cloud::retail::v2::ImportCompletionDataResponse>>
  ImportCompletionData(google::longrunning::Operation const& operation);

  virtual StreamRange<google::longrunning::Operation> ListOperations(
      google::longrunning::ListOperationsRequest request);

  virtual StatusOr<google::longrunning::Operation> GetOperation(
      google::longrunning::GetOperationRequest const& request);
};

/**
 * A factory function to construct an object of type
 * `CompletionServiceConnection`.
 *
 * The returned connection object should not be used directly; instead it
 * should be passed as an argument to the constructor of
 * CompletionServiceClient.
 *
 * The optional @p options argument may be used to configure aspects of the
 * returned `CompletionServiceConnection`. Expected options are any of the types
 * in the following option lists:
 *
 * - `google::cloud::CommonOptionList`
 * - `google::cloud::GrpcOptionList`
 * - `google::cloud::UnifiedCredentialsOptionList`
 * - `google::cloud::retail_v2::CompletionServicePolicyOptionList`
 *
 * @note Unexpected options will be ignored. To log unexpected options instead,
 *     set `GOOGLE_CLOUD_CPP_ENABLE_CLOG=yes` in the environment.
 *
 * @param options (optional) Configure the `CompletionServiceConnection` created
 * by this function.
 */
std::shared_ptr<CompletionServiceConnection> MakeCompletionServiceConnection(
    Options options = {});

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace retail_v2
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_RETAIL_V2_COMPLETION_CONNECTION_H
