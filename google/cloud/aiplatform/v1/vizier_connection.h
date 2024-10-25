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
// source: google/cloud/aiplatform/v1/vizier_service.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_AIPLATFORM_V1_VIZIER_CONNECTION_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_AIPLATFORM_V1_VIZIER_CONNECTION_H

#include "google/cloud/aiplatform/v1/internal/vizier_retry_traits.h"
#include "google/cloud/aiplatform/v1/vizier_connection_idempotency_policy.h"
#include "google/cloud/backoff_policy.h"
#include "google/cloud/future.h"
#include "google/cloud/internal/retry_policy_impl.h"
#include "google/cloud/no_await_tag.h"
#include "google/cloud/options.h"
#include "google/cloud/polling_policy.h"
#include "google/cloud/status_or.h"
#include "google/cloud/stream_range.h"
#include "google/cloud/version.h"
#include "google/cloud/aiplatform/v1/vizier_service.pb.h"
#include "google/longrunning/operations.grpc.pb.h"
#include <memory>
#include <string>

namespace google {
namespace cloud {
namespace aiplatform_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

/// The retry policy for `VizierServiceConnection`.
class VizierServiceRetryPolicy : public ::google::cloud::RetryPolicy {
 public:
  /// Creates a new instance of the policy, reset to the initial state.
  virtual std::unique_ptr<VizierServiceRetryPolicy> clone() const = 0;
};

/**
 * A retry policy for `VizierServiceConnection` based on counting errors.
 *
 * This policy stops retrying if:
 * - An RPC returns a non-transient error.
 * - More than a prescribed number of transient failures is detected.
 *
 * In this class the following status codes are treated as transient errors:
 * - [`kUnavailable`](@ref google::cloud::StatusCode)
 */
class VizierServiceLimitedErrorCountRetryPolicy
    : public VizierServiceRetryPolicy {
 public:
  /**
   * Create an instance that tolerates up to @p maximum_failures transient
   * errors.
   *
   * @note Disable the retry loop by providing an instance of this policy with
   *     @p maximum_failures == 0.
   */
  explicit VizierServiceLimitedErrorCountRetryPolicy(int maximum_failures)
      : impl_(maximum_failures) {}

  VizierServiceLimitedErrorCountRetryPolicy(
      VizierServiceLimitedErrorCountRetryPolicy&& rhs) noexcept
      : VizierServiceLimitedErrorCountRetryPolicy(rhs.maximum_failures()) {}
  VizierServiceLimitedErrorCountRetryPolicy(
      VizierServiceLimitedErrorCountRetryPolicy const& rhs) noexcept
      : VizierServiceLimitedErrorCountRetryPolicy(rhs.maximum_failures()) {}

  int maximum_failures() const { return impl_.maximum_failures(); }

  bool OnFailure(Status const& status) override {
    return impl_.OnFailure(status);
  }
  bool IsExhausted() const override { return impl_.IsExhausted(); }
  bool IsPermanentFailure(Status const& status) const override {
    return impl_.IsPermanentFailure(status);
  }
  std::unique_ptr<VizierServiceRetryPolicy> clone() const override {
    return std::make_unique<VizierServiceLimitedErrorCountRetryPolicy>(
        maximum_failures());
  }

  // This is provided only for backwards compatibility.
  using BaseType = VizierServiceRetryPolicy;

 private:
  google::cloud::internal::LimitedErrorCountRetryPolicy<
      aiplatform_v1_internal::VizierServiceRetryTraits>
      impl_;
};

/**
 * A retry policy for `VizierServiceConnection` based on elapsed time.
 *
 * This policy stops retrying if:
 * - An RPC returns a non-transient error.
 * - The elapsed time in the retry loop exceeds a prescribed duration.
 *
 * In this class the following status codes are treated as transient errors:
 * - [`kUnavailable`](@ref google::cloud::StatusCode)
 */
class VizierServiceLimitedTimeRetryPolicy : public VizierServiceRetryPolicy {
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
  explicit VizierServiceLimitedTimeRetryPolicy(
      std::chrono::duration<DurationRep, DurationPeriod> maximum_duration)
      : impl_(maximum_duration) {}

  VizierServiceLimitedTimeRetryPolicy(
      VizierServiceLimitedTimeRetryPolicy&& rhs) noexcept
      : VizierServiceLimitedTimeRetryPolicy(rhs.maximum_duration()) {}
  VizierServiceLimitedTimeRetryPolicy(
      VizierServiceLimitedTimeRetryPolicy const& rhs) noexcept
      : VizierServiceLimitedTimeRetryPolicy(rhs.maximum_duration()) {}

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
  std::unique_ptr<VizierServiceRetryPolicy> clone() const override {
    return std::make_unique<VizierServiceLimitedTimeRetryPolicy>(
        maximum_duration());
  }

  // This is provided only for backwards compatibility.
  using BaseType = VizierServiceRetryPolicy;

 private:
  google::cloud::internal::LimitedTimeRetryPolicy<
      aiplatform_v1_internal::VizierServiceRetryTraits>
      impl_;
};

/**
 * The `VizierServiceConnection` object for `VizierServiceClient`.
 *
 * This interface defines virtual methods for each of the user-facing overload
 * sets in `VizierServiceClient`. This allows users to inject custom behavior
 * (e.g., with a Google Mock object) when writing tests that use objects of type
 * `VizierServiceClient`.
 *
 * To create a concrete instance, see `MakeVizierServiceConnection()`.
 *
 * For mocking, see `aiplatform_v1_mocks::MockVizierServiceConnection`.
 */
class VizierServiceConnection {
 public:
  virtual ~VizierServiceConnection() = 0;

  virtual Options options() { return Options{}; }

  virtual StatusOr<google::cloud::aiplatform::v1::Study> CreateStudy(
      google::cloud::aiplatform::v1::CreateStudyRequest const& request);

  virtual StatusOr<google::cloud::aiplatform::v1::Study> GetStudy(
      google::cloud::aiplatform::v1::GetStudyRequest const& request);

  virtual StreamRange<google::cloud::aiplatform::v1::Study> ListStudies(
      google::cloud::aiplatform::v1::ListStudiesRequest request);

  virtual Status DeleteStudy(
      google::cloud::aiplatform::v1::DeleteStudyRequest const& request);

  virtual StatusOr<google::cloud::aiplatform::v1::Study> LookupStudy(
      google::cloud::aiplatform::v1::LookupStudyRequest const& request);

  virtual future<StatusOr<google::cloud::aiplatform::v1::SuggestTrialsResponse>>
  SuggestTrials(
      google::cloud::aiplatform::v1::SuggestTrialsRequest const& request);

  virtual StatusOr<google::longrunning::Operation> SuggestTrials(
      NoAwaitTag,
      google::cloud::aiplatform::v1::SuggestTrialsRequest const& request);

  virtual future<StatusOr<google::cloud::aiplatform::v1::SuggestTrialsResponse>>
  SuggestTrials(google::longrunning::Operation const& operation);

  virtual StatusOr<google::cloud::aiplatform::v1::Trial> CreateTrial(
      google::cloud::aiplatform::v1::CreateTrialRequest const& request);

  virtual StatusOr<google::cloud::aiplatform::v1::Trial> GetTrial(
      google::cloud::aiplatform::v1::GetTrialRequest const& request);

  virtual StreamRange<google::cloud::aiplatform::v1::Trial> ListTrials(
      google::cloud::aiplatform::v1::ListTrialsRequest request);

  virtual StatusOr<google::cloud::aiplatform::v1::Trial> AddTrialMeasurement(
      google::cloud::aiplatform::v1::AddTrialMeasurementRequest const& request);

  virtual StatusOr<google::cloud::aiplatform::v1::Trial> CompleteTrial(
      google::cloud::aiplatform::v1::CompleteTrialRequest const& request);

  virtual Status DeleteTrial(
      google::cloud::aiplatform::v1::DeleteTrialRequest const& request);

  virtual future<StatusOr<
      google::cloud::aiplatform::v1::CheckTrialEarlyStoppingStateResponse>>
  CheckTrialEarlyStoppingState(
      google::cloud::aiplatform::v1::CheckTrialEarlyStoppingStateRequest const&
          request);

  virtual StatusOr<google::longrunning::Operation> CheckTrialEarlyStoppingState(
      NoAwaitTag,
      google::cloud::aiplatform::v1::CheckTrialEarlyStoppingStateRequest const&
          request);

  virtual future<StatusOr<
      google::cloud::aiplatform::v1::CheckTrialEarlyStoppingStateResponse>>
  CheckTrialEarlyStoppingState(google::longrunning::Operation const& operation);

  virtual StatusOr<google::cloud::aiplatform::v1::Trial> StopTrial(
      google::cloud::aiplatform::v1::StopTrialRequest const& request);

  virtual StatusOr<google::cloud::aiplatform::v1::ListOptimalTrialsResponse>
  ListOptimalTrials(
      google::cloud::aiplatform::v1::ListOptimalTrialsRequest const& request);

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

  virtual StatusOr<google::longrunning::Operation> WaitOperation(
      google::longrunning::WaitOperationRequest const& request);
};

/**
 * A factory function to construct an object of type `VizierServiceConnection`.
 *
 * The returned connection object should not be used directly; instead it
 * should be passed as an argument to the constructor of VizierServiceClient.
 *
 * The optional @p options argument may be used to configure aspects of the
 * returned `VizierServiceConnection`. Expected options are any of the types in
 * the following option lists:
 *
 * - `google::cloud::CommonOptionList`
 * - `google::cloud::GrpcOptionList`
 * - `google::cloud::UnifiedCredentialsOptionList`
 * - `google::cloud::aiplatform_v1::VizierServicePolicyOptionList`
 *
 * @note Unexpected options will be ignored. To log unexpected options instead,
 *     set `GOOGLE_CLOUD_CPP_ENABLE_CLOG=yes` in the environment.
 *
 * @param location Sets the prefix for the default `EndpointOption` value.
 * @param options (optional) Configure the `VizierServiceConnection` created by
 * this function.
 */
std::shared_ptr<VizierServiceConnection> MakeVizierServiceConnection(
    std::string const& location, Options options = {});

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace aiplatform_v1
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_AIPLATFORM_V1_VIZIER_CONNECTION_H
