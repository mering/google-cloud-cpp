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
// source: google/cloud/run/v2/execution.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_RUN_V2_EXECUTIONS_CONNECTION_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_RUN_V2_EXECUTIONS_CONNECTION_H

#include "google/cloud/run/v2/executions_connection_idempotency_policy.h"
#include "google/cloud/run/v2/internal/executions_retry_traits.h"
#include "google/cloud/backoff_policy.h"
#include "google/cloud/future.h"
#include "google/cloud/internal/retry_policy_impl.h"
#include "google/cloud/no_await_tag.h"
#include "google/cloud/options.h"
#include "google/cloud/polling_policy.h"
#include "google/cloud/status_or.h"
#include "google/cloud/stream_range.h"
#include "google/cloud/version.h"
#include "google/cloud/run/v2/execution.pb.h"
#include "google/longrunning/operations.grpc.pb.h"
#include <memory>

namespace google {
namespace cloud {
namespace run_v2 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

/// The retry policy for `ExecutionsConnection`.
class ExecutionsRetryPolicy : public ::google::cloud::RetryPolicy {
 public:
  /// Creates a new instance of the policy, reset to the initial state.
  virtual std::unique_ptr<ExecutionsRetryPolicy> clone() const = 0;
};

/**
 * A retry policy for `ExecutionsConnection` based on counting errors.
 *
 * This policy stops retrying if:
 * - An RPC returns a non-transient error.
 * - More than a prescribed number of transient failures is detected.
 *
 * In this class the following status codes are treated as transient errors:
 * - [`kUnavailable`](@ref google::cloud::StatusCode)
 */
class ExecutionsLimitedErrorCountRetryPolicy : public ExecutionsRetryPolicy {
 public:
  /**
   * Create an instance that tolerates up to @p maximum_failures transient
   * errors.
   *
   * @note Disable the retry loop by providing an instance of this policy with
   *     @p maximum_failures == 0.
   */
  explicit ExecutionsLimitedErrorCountRetryPolicy(int maximum_failures)
      : impl_(maximum_failures) {}

  ExecutionsLimitedErrorCountRetryPolicy(
      ExecutionsLimitedErrorCountRetryPolicy&& rhs) noexcept
      : ExecutionsLimitedErrorCountRetryPolicy(rhs.maximum_failures()) {}
  ExecutionsLimitedErrorCountRetryPolicy(
      ExecutionsLimitedErrorCountRetryPolicy const& rhs) noexcept
      : ExecutionsLimitedErrorCountRetryPolicy(rhs.maximum_failures()) {}

  int maximum_failures() const { return impl_.maximum_failures(); }

  bool OnFailure(Status const& status) override {
    return impl_.OnFailure(status);
  }
  bool IsExhausted() const override { return impl_.IsExhausted(); }
  bool IsPermanentFailure(Status const& status) const override {
    return impl_.IsPermanentFailure(status);
  }
  std::unique_ptr<ExecutionsRetryPolicy> clone() const override {
    return std::make_unique<ExecutionsLimitedErrorCountRetryPolicy>(
        maximum_failures());
  }

  // This is provided only for backwards compatibility.
  using BaseType = ExecutionsRetryPolicy;

 private:
  google::cloud::internal::LimitedErrorCountRetryPolicy<
      run_v2_internal::ExecutionsRetryTraits>
      impl_;
};

/**
 * A retry policy for `ExecutionsConnection` based on elapsed time.
 *
 * This policy stops retrying if:
 * - An RPC returns a non-transient error.
 * - The elapsed time in the retry loop exceeds a prescribed duration.
 *
 * In this class the following status codes are treated as transient errors:
 * - [`kUnavailable`](@ref google::cloud::StatusCode)
 */
class ExecutionsLimitedTimeRetryPolicy : public ExecutionsRetryPolicy {
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
  explicit ExecutionsLimitedTimeRetryPolicy(
      std::chrono::duration<DurationRep, DurationPeriod> maximum_duration)
      : impl_(maximum_duration) {}

  ExecutionsLimitedTimeRetryPolicy(
      ExecutionsLimitedTimeRetryPolicy&& rhs) noexcept
      : ExecutionsLimitedTimeRetryPolicy(rhs.maximum_duration()) {}
  ExecutionsLimitedTimeRetryPolicy(
      ExecutionsLimitedTimeRetryPolicy const& rhs) noexcept
      : ExecutionsLimitedTimeRetryPolicy(rhs.maximum_duration()) {}

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
  std::unique_ptr<ExecutionsRetryPolicy> clone() const override {
    return std::make_unique<ExecutionsLimitedTimeRetryPolicy>(
        maximum_duration());
  }

  // This is provided only for backwards compatibility.
  using BaseType = ExecutionsRetryPolicy;

 private:
  google::cloud::internal::LimitedTimeRetryPolicy<
      run_v2_internal::ExecutionsRetryTraits>
      impl_;
};

/**
 * The `ExecutionsConnection` object for `ExecutionsClient`.
 *
 * This interface defines virtual methods for each of the user-facing overload
 * sets in `ExecutionsClient`. This allows users to inject custom behavior
 * (e.g., with a Google Mock object) when writing tests that use objects of type
 * `ExecutionsClient`.
 *
 * To create a concrete instance, see `MakeExecutionsConnection()`.
 *
 * For mocking, see `run_v2_mocks::MockExecutionsConnection`.
 */
class ExecutionsConnection {
 public:
  virtual ~ExecutionsConnection() = 0;

  virtual Options options() { return Options{}; }

  virtual StatusOr<google::cloud::run::v2::Execution> GetExecution(
      google::cloud::run::v2::GetExecutionRequest const& request);

  virtual StreamRange<google::cloud::run::v2::Execution> ListExecutions(
      google::cloud::run::v2::ListExecutionsRequest request);

  virtual future<StatusOr<google::cloud::run::v2::Execution>> DeleteExecution(
      google::cloud::run::v2::DeleteExecutionRequest const& request);

  virtual StatusOr<google::longrunning::Operation> DeleteExecution(
      NoAwaitTag,
      google::cloud::run::v2::DeleteExecutionRequest const& request);

  virtual future<StatusOr<google::cloud::run::v2::Execution>> DeleteExecution(
      google::longrunning::Operation const& operation);

  virtual future<StatusOr<google::cloud::run::v2::Execution>> CancelExecution(
      google::cloud::run::v2::CancelExecutionRequest const& request);

  virtual StatusOr<google::longrunning::Operation> CancelExecution(
      NoAwaitTag,
      google::cloud::run::v2::CancelExecutionRequest const& request);

  virtual future<StatusOr<google::cloud::run::v2::Execution>> CancelExecution(
      google::longrunning::Operation const& operation);

  virtual StreamRange<google::longrunning::Operation> ListOperations(
      google::longrunning::ListOperationsRequest request);

  virtual StatusOr<google::longrunning::Operation> GetOperation(
      google::longrunning::GetOperationRequest const& request);

  virtual Status DeleteOperation(
      google::longrunning::DeleteOperationRequest const& request);

  virtual StatusOr<google::longrunning::Operation> WaitOperation(
      google::longrunning::WaitOperationRequest const& request);
};

/**
 * A factory function to construct an object of type `ExecutionsConnection`.
 *
 * The returned connection object should not be used directly; instead it
 * should be passed as an argument to the constructor of ExecutionsClient.
 *
 * The optional @p options argument may be used to configure aspects of the
 * returned `ExecutionsConnection`. Expected options are any of the types in
 * the following option lists:
 *
 * - `google::cloud::CommonOptionList`
 * - `google::cloud::GrpcOptionList`
 * - `google::cloud::UnifiedCredentialsOptionList`
 * - `google::cloud::run_v2::ExecutionsPolicyOptionList`
 *
 * @note Unexpected options will be ignored. To log unexpected options instead,
 *     set `GOOGLE_CLOUD_CPP_ENABLE_CLOG=yes` in the environment.
 *
 * @param options (optional) Configure the `ExecutionsConnection` created by
 * this function.
 */
std::shared_ptr<ExecutionsConnection> MakeExecutionsConnection(
    Options options = {});

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace run_v2
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_RUN_V2_EXECUTIONS_CONNECTION_H
