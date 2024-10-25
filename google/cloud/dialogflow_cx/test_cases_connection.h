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
// source: google/cloud/dialogflow/cx/v3/test_case.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DIALOGFLOW_CX_TEST_CASES_CONNECTION_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DIALOGFLOW_CX_TEST_CASES_CONNECTION_H

#include "google/cloud/dialogflow_cx/internal/test_cases_retry_traits.h"
#include "google/cloud/dialogflow_cx/test_cases_connection_idempotency_policy.h"
#include "google/cloud/backoff_policy.h"
#include "google/cloud/future.h"
#include "google/cloud/internal/retry_policy_impl.h"
#include "google/cloud/no_await_tag.h"
#include "google/cloud/options.h"
#include "google/cloud/polling_policy.h"
#include "google/cloud/status_or.h"
#include "google/cloud/stream_range.h"
#include "google/cloud/version.h"
#include "google/cloud/dialogflow/cx/v3/test_case.pb.h"
#include "google/longrunning/operations.grpc.pb.h"
#include <memory>
#include <string>

namespace google {
namespace cloud {
namespace dialogflow_cx {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

/// The retry policy for `TestCasesConnection`.
class TestCasesRetryPolicy : public ::google::cloud::RetryPolicy {
 public:
  /// Creates a new instance of the policy, reset to the initial state.
  virtual std::unique_ptr<TestCasesRetryPolicy> clone() const = 0;
};

/**
 * A retry policy for `TestCasesConnection` based on counting errors.
 *
 * This policy stops retrying if:
 * - An RPC returns a non-transient error.
 * - More than a prescribed number of transient failures is detected.
 *
 * In this class the following status codes are treated as transient errors:
 * - [`kUnavailable`](@ref google::cloud::StatusCode)
 */
class TestCasesLimitedErrorCountRetryPolicy : public TestCasesRetryPolicy {
 public:
  /**
   * Create an instance that tolerates up to @p maximum_failures transient
   * errors.
   *
   * @note Disable the retry loop by providing an instance of this policy with
   *     @p maximum_failures == 0.
   */
  explicit TestCasesLimitedErrorCountRetryPolicy(int maximum_failures)
      : impl_(maximum_failures) {}

  TestCasesLimitedErrorCountRetryPolicy(
      TestCasesLimitedErrorCountRetryPolicy&& rhs) noexcept
      : TestCasesLimitedErrorCountRetryPolicy(rhs.maximum_failures()) {}
  TestCasesLimitedErrorCountRetryPolicy(
      TestCasesLimitedErrorCountRetryPolicy const& rhs) noexcept
      : TestCasesLimitedErrorCountRetryPolicy(rhs.maximum_failures()) {}

  int maximum_failures() const { return impl_.maximum_failures(); }

  bool OnFailure(Status const& status) override {
    return impl_.OnFailure(status);
  }
  bool IsExhausted() const override { return impl_.IsExhausted(); }
  bool IsPermanentFailure(Status const& status) const override {
    return impl_.IsPermanentFailure(status);
  }
  std::unique_ptr<TestCasesRetryPolicy> clone() const override {
    return std::make_unique<TestCasesLimitedErrorCountRetryPolicy>(
        maximum_failures());
  }

  // This is provided only for backwards compatibility.
  using BaseType = TestCasesRetryPolicy;

 private:
  google::cloud::internal::LimitedErrorCountRetryPolicy<
      dialogflow_cx_internal::TestCasesRetryTraits>
      impl_;
};

/**
 * A retry policy for `TestCasesConnection` based on elapsed time.
 *
 * This policy stops retrying if:
 * - An RPC returns a non-transient error.
 * - The elapsed time in the retry loop exceeds a prescribed duration.
 *
 * In this class the following status codes are treated as transient errors:
 * - [`kUnavailable`](@ref google::cloud::StatusCode)
 */
class TestCasesLimitedTimeRetryPolicy : public TestCasesRetryPolicy {
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
  explicit TestCasesLimitedTimeRetryPolicy(
      std::chrono::duration<DurationRep, DurationPeriod> maximum_duration)
      : impl_(maximum_duration) {}

  TestCasesLimitedTimeRetryPolicy(
      TestCasesLimitedTimeRetryPolicy&& rhs) noexcept
      : TestCasesLimitedTimeRetryPolicy(rhs.maximum_duration()) {}
  TestCasesLimitedTimeRetryPolicy(
      TestCasesLimitedTimeRetryPolicy const& rhs) noexcept
      : TestCasesLimitedTimeRetryPolicy(rhs.maximum_duration()) {}

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
  std::unique_ptr<TestCasesRetryPolicy> clone() const override {
    return std::make_unique<TestCasesLimitedTimeRetryPolicy>(
        maximum_duration());
  }

  // This is provided only for backwards compatibility.
  using BaseType = TestCasesRetryPolicy;

 private:
  google::cloud::internal::LimitedTimeRetryPolicy<
      dialogflow_cx_internal::TestCasesRetryTraits>
      impl_;
};

/**
 * The `TestCasesConnection` object for `TestCasesClient`.
 *
 * This interface defines virtual methods for each of the user-facing overload
 * sets in `TestCasesClient`. This allows users to inject custom behavior
 * (e.g., with a Google Mock object) when writing tests that use objects of type
 * `TestCasesClient`.
 *
 * To create a concrete instance, see `MakeTestCasesConnection()`.
 *
 * For mocking, see `dialogflow_cx_mocks::MockTestCasesConnection`.
 */
class TestCasesConnection {
 public:
  virtual ~TestCasesConnection() = 0;

  virtual Options options() { return Options{}; }

  virtual StreamRange<google::cloud::dialogflow::cx::v3::TestCase>
  ListTestCases(
      google::cloud::dialogflow::cx::v3::ListTestCasesRequest request);

  virtual Status BatchDeleteTestCases(
      google::cloud::dialogflow::cx::v3::BatchDeleteTestCasesRequest const&
          request);

  virtual StatusOr<google::cloud::dialogflow::cx::v3::TestCase> GetTestCase(
      google::cloud::dialogflow::cx::v3::GetTestCaseRequest const& request);

  virtual StatusOr<google::cloud::dialogflow::cx::v3::TestCase> CreateTestCase(
      google::cloud::dialogflow::cx::v3::CreateTestCaseRequest const& request);

  virtual StatusOr<google::cloud::dialogflow::cx::v3::TestCase> UpdateTestCase(
      google::cloud::dialogflow::cx::v3::UpdateTestCaseRequest const& request);

  virtual future<
      StatusOr<google::cloud::dialogflow::cx::v3::RunTestCaseResponse>>
  RunTestCase(
      google::cloud::dialogflow::cx::v3::RunTestCaseRequest const& request);

  virtual StatusOr<google::longrunning::Operation> RunTestCase(
      NoAwaitTag,
      google::cloud::dialogflow::cx::v3::RunTestCaseRequest const& request);

  virtual future<
      StatusOr<google::cloud::dialogflow::cx::v3::RunTestCaseResponse>>
  RunTestCase(google::longrunning::Operation const& operation);

  virtual future<
      StatusOr<google::cloud::dialogflow::cx::v3::BatchRunTestCasesResponse>>
  BatchRunTestCases(
      google::cloud::dialogflow::cx::v3::BatchRunTestCasesRequest const&
          request);

  virtual StatusOr<google::longrunning::Operation> BatchRunTestCases(
      NoAwaitTag,
      google::cloud::dialogflow::cx::v3::BatchRunTestCasesRequest const&
          request);

  virtual future<
      StatusOr<google::cloud::dialogflow::cx::v3::BatchRunTestCasesResponse>>
  BatchRunTestCases(google::longrunning::Operation const& operation);

  virtual StatusOr<google::cloud::dialogflow::cx::v3::CalculateCoverageResponse>
  CalculateCoverage(
      google::cloud::dialogflow::cx::v3::CalculateCoverageRequest const&
          request);

  virtual future<
      StatusOr<google::cloud::dialogflow::cx::v3::ImportTestCasesResponse>>
  ImportTestCases(
      google::cloud::dialogflow::cx::v3::ImportTestCasesRequest const& request);

  virtual StatusOr<google::longrunning::Operation> ImportTestCases(
      NoAwaitTag,
      google::cloud::dialogflow::cx::v3::ImportTestCasesRequest const& request);

  virtual future<
      StatusOr<google::cloud::dialogflow::cx::v3::ImportTestCasesResponse>>
  ImportTestCases(google::longrunning::Operation const& operation);

  virtual future<
      StatusOr<google::cloud::dialogflow::cx::v3::ExportTestCasesResponse>>
  ExportTestCases(
      google::cloud::dialogflow::cx::v3::ExportTestCasesRequest const& request);

  virtual StatusOr<google::longrunning::Operation> ExportTestCases(
      NoAwaitTag,
      google::cloud::dialogflow::cx::v3::ExportTestCasesRequest const& request);

  virtual future<
      StatusOr<google::cloud::dialogflow::cx::v3::ExportTestCasesResponse>>
  ExportTestCases(google::longrunning::Operation const& operation);

  virtual StreamRange<google::cloud::dialogflow::cx::v3::TestCaseResult>
  ListTestCaseResults(
      google::cloud::dialogflow::cx::v3::ListTestCaseResultsRequest request);

  virtual StatusOr<google::cloud::dialogflow::cx::v3::TestCaseResult>
  GetTestCaseResult(
      google::cloud::dialogflow::cx::v3::GetTestCaseResultRequest const&
          request);

  virtual StreamRange<google::cloud::location::Location> ListLocations(
      google::cloud::location::ListLocationsRequest request);

  virtual StatusOr<google::cloud::location::Location> GetLocation(
      google::cloud::location::GetLocationRequest const& request);

  virtual StreamRange<google::longrunning::Operation> ListOperations(
      google::longrunning::ListOperationsRequest request);

  virtual StatusOr<google::longrunning::Operation> GetOperation(
      google::longrunning::GetOperationRequest const& request);

  virtual Status CancelOperation(
      google::longrunning::CancelOperationRequest const& request);
};

/**
 * A factory function to construct an object of type `TestCasesConnection`.
 *
 * The returned connection object should not be used directly; instead it
 * should be passed as an argument to the constructor of TestCasesClient.
 *
 * The optional @p options argument may be used to configure aspects of the
 * returned `TestCasesConnection`. Expected options are any of the types in
 * the following option lists:
 *
 * - `google::cloud::CommonOptionList`
 * - `google::cloud::GrpcOptionList`
 * - `google::cloud::UnifiedCredentialsOptionList`
 * - `google::cloud::dialogflow_cx::TestCasesPolicyOptionList`
 *
 * @note Unexpected options will be ignored. To log unexpected options instead,
 *     set `GOOGLE_CLOUD_CPP_ENABLE_CLOG=yes` in the environment.
 *
 * @param location Sets the prefix for the default `EndpointOption` value.
 * @param options (optional) Configure the `TestCasesConnection` created by
 * this function.
 */
std::shared_ptr<TestCasesConnection> MakeTestCasesConnection(
    std::string const& location, Options options = {});

/**
 * A backwards-compatible version of the previous factory function.  Unless
 * the service also offers a global endpoint, the default value of the
 * `EndpointOption` may be useless, in which case it must be overridden.
 *
 * @deprecated Please use the `location` overload instead.
 */
std::shared_ptr<TestCasesConnection> MakeTestCasesConnection(
    Options options = {});

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace dialogflow_cx
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DIALOGFLOW_CX_TEST_CASES_CONNECTION_H
