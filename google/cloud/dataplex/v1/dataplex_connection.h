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
// source: google/cloud/dataplex/v1/service.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DATAPLEX_V1_DATAPLEX_CONNECTION_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DATAPLEX_V1_DATAPLEX_CONNECTION_H

#include "google/cloud/dataplex/v1/dataplex_connection_idempotency_policy.h"
#include "google/cloud/dataplex/v1/internal/dataplex_retry_traits.h"
#include "google/cloud/dataplex/v1/service.pb.h"
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
namespace dataplex_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

/// The retry policy for `DataplexServiceConnection`.
class DataplexServiceRetryPolicy : public ::google::cloud::RetryPolicy {
 public:
  /// Creates a new instance of the policy, reset to the initial state.
  virtual std::unique_ptr<DataplexServiceRetryPolicy> clone() const = 0;
};

/**
 * A retry policy for `DataplexServiceConnection` based on counting errors.
 *
 * This policy stops retrying if:
 * - An RPC returns a non-transient error.
 * - More than a prescribed number of transient failures is detected.
 *
 * In this class the following status codes are treated as transient errors:
 * - [`kUnavailable`](@ref google::cloud::StatusCode)
 */
class DataplexServiceLimitedErrorCountRetryPolicy
    : public DataplexServiceRetryPolicy {
 public:
  /**
   * Create an instance that tolerates up to @p maximum_failures transient
   * errors.
   *
   * @note Disable the retry loop by providing an instance of this policy with
   *     @p maximum_failures == 0.
   */
  explicit DataplexServiceLimitedErrorCountRetryPolicy(int maximum_failures)
      : impl_(maximum_failures) {}

  DataplexServiceLimitedErrorCountRetryPolicy(
      DataplexServiceLimitedErrorCountRetryPolicy&& rhs) noexcept
      : DataplexServiceLimitedErrorCountRetryPolicy(rhs.maximum_failures()) {}
  DataplexServiceLimitedErrorCountRetryPolicy(
      DataplexServiceLimitedErrorCountRetryPolicy const& rhs) noexcept
      : DataplexServiceLimitedErrorCountRetryPolicy(rhs.maximum_failures()) {}

  int maximum_failures() const { return impl_.maximum_failures(); }

  bool OnFailure(Status const& status) override {
    return impl_.OnFailure(status);
  }
  bool IsExhausted() const override { return impl_.IsExhausted(); }
  bool IsPermanentFailure(Status const& status) const override {
    return impl_.IsPermanentFailure(status);
  }
  std::unique_ptr<DataplexServiceRetryPolicy> clone() const override {
    return std::make_unique<DataplexServiceLimitedErrorCountRetryPolicy>(
        maximum_failures());
  }

  // This is provided only for backwards compatibility.
  using BaseType = DataplexServiceRetryPolicy;

 private:
  google::cloud::internal::LimitedErrorCountRetryPolicy<
      dataplex_v1_internal::DataplexServiceRetryTraits>
      impl_;
};

/**
 * A retry policy for `DataplexServiceConnection` based on elapsed time.
 *
 * This policy stops retrying if:
 * - An RPC returns a non-transient error.
 * - The elapsed time in the retry loop exceeds a prescribed duration.
 *
 * In this class the following status codes are treated as transient errors:
 * - [`kUnavailable`](@ref google::cloud::StatusCode)
 */
class DataplexServiceLimitedTimeRetryPolicy
    : public DataplexServiceRetryPolicy {
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
  explicit DataplexServiceLimitedTimeRetryPolicy(
      std::chrono::duration<DurationRep, DurationPeriod> maximum_duration)
      : impl_(maximum_duration) {}

  DataplexServiceLimitedTimeRetryPolicy(
      DataplexServiceLimitedTimeRetryPolicy&& rhs) noexcept
      : DataplexServiceLimitedTimeRetryPolicy(rhs.maximum_duration()) {}
  DataplexServiceLimitedTimeRetryPolicy(
      DataplexServiceLimitedTimeRetryPolicy const& rhs) noexcept
      : DataplexServiceLimitedTimeRetryPolicy(rhs.maximum_duration()) {}

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
  std::unique_ptr<DataplexServiceRetryPolicy> clone() const override {
    return std::make_unique<DataplexServiceLimitedTimeRetryPolicy>(
        maximum_duration());
  }

  // This is provided only for backwards compatibility.
  using BaseType = DataplexServiceRetryPolicy;

 private:
  google::cloud::internal::LimitedTimeRetryPolicy<
      dataplex_v1_internal::DataplexServiceRetryTraits>
      impl_;
};

/**
 * The `DataplexServiceConnection` object for `DataplexServiceClient`.
 *
 * This interface defines virtual methods for each of the user-facing overload
 * sets in `DataplexServiceClient`. This allows users to inject custom behavior
 * (e.g., with a Google Mock object) when writing tests that use objects of type
 * `DataplexServiceClient`.
 *
 * To create a concrete instance, see `MakeDataplexServiceConnection()`.
 *
 * For mocking, see `dataplex_v1_mocks::MockDataplexServiceConnection`.
 */
class DataplexServiceConnection {
 public:
  virtual ~DataplexServiceConnection() = 0;

  virtual Options options() { return Options{}; }

  virtual future<StatusOr<google::cloud::dataplex::v1::Lake>> CreateLake(
      google::cloud::dataplex::v1::CreateLakeRequest const& request);

  virtual StatusOr<google::longrunning::Operation> CreateLake(
      NoAwaitTag,
      google::cloud::dataplex::v1::CreateLakeRequest const& request);

  virtual future<StatusOr<google::cloud::dataplex::v1::Lake>> CreateLake(
      google::longrunning::Operation const& operation);

  virtual future<StatusOr<google::cloud::dataplex::v1::Lake>> UpdateLake(
      google::cloud::dataplex::v1::UpdateLakeRequest const& request);

  virtual StatusOr<google::longrunning::Operation> UpdateLake(
      NoAwaitTag,
      google::cloud::dataplex::v1::UpdateLakeRequest const& request);

  virtual future<StatusOr<google::cloud::dataplex::v1::Lake>> UpdateLake(
      google::longrunning::Operation const& operation);

  virtual future<StatusOr<google::cloud::dataplex::v1::OperationMetadata>>
  DeleteLake(google::cloud::dataplex::v1::DeleteLakeRequest const& request);

  virtual StatusOr<google::longrunning::Operation> DeleteLake(
      NoAwaitTag,
      google::cloud::dataplex::v1::DeleteLakeRequest const& request);

  virtual future<StatusOr<google::cloud::dataplex::v1::OperationMetadata>>
  DeleteLake(google::longrunning::Operation const& operation);

  virtual StreamRange<google::cloud::dataplex::v1::Lake> ListLakes(
      google::cloud::dataplex::v1::ListLakesRequest request);

  virtual StatusOr<google::cloud::dataplex::v1::Lake> GetLake(
      google::cloud::dataplex::v1::GetLakeRequest const& request);

  virtual StreamRange<google::cloud::dataplex::v1::Action> ListLakeActions(
      google::cloud::dataplex::v1::ListLakeActionsRequest request);

  virtual future<StatusOr<google::cloud::dataplex::v1::Zone>> CreateZone(
      google::cloud::dataplex::v1::CreateZoneRequest const& request);

  virtual StatusOr<google::longrunning::Operation> CreateZone(
      NoAwaitTag,
      google::cloud::dataplex::v1::CreateZoneRequest const& request);

  virtual future<StatusOr<google::cloud::dataplex::v1::Zone>> CreateZone(
      google::longrunning::Operation const& operation);

  virtual future<StatusOr<google::cloud::dataplex::v1::Zone>> UpdateZone(
      google::cloud::dataplex::v1::UpdateZoneRequest const& request);

  virtual StatusOr<google::longrunning::Operation> UpdateZone(
      NoAwaitTag,
      google::cloud::dataplex::v1::UpdateZoneRequest const& request);

  virtual future<StatusOr<google::cloud::dataplex::v1::Zone>> UpdateZone(
      google::longrunning::Operation const& operation);

  virtual future<StatusOr<google::cloud::dataplex::v1::OperationMetadata>>
  DeleteZone(google::cloud::dataplex::v1::DeleteZoneRequest const& request);

  virtual StatusOr<google::longrunning::Operation> DeleteZone(
      NoAwaitTag,
      google::cloud::dataplex::v1::DeleteZoneRequest const& request);

  virtual future<StatusOr<google::cloud::dataplex::v1::OperationMetadata>>
  DeleteZone(google::longrunning::Operation const& operation);

  virtual StreamRange<google::cloud::dataplex::v1::Zone> ListZones(
      google::cloud::dataplex::v1::ListZonesRequest request);

  virtual StatusOr<google::cloud::dataplex::v1::Zone> GetZone(
      google::cloud::dataplex::v1::GetZoneRequest const& request);

  virtual StreamRange<google::cloud::dataplex::v1::Action> ListZoneActions(
      google::cloud::dataplex::v1::ListZoneActionsRequest request);

  virtual future<StatusOr<google::cloud::dataplex::v1::Asset>> CreateAsset(
      google::cloud::dataplex::v1::CreateAssetRequest const& request);

  virtual StatusOr<google::longrunning::Operation> CreateAsset(
      NoAwaitTag,
      google::cloud::dataplex::v1::CreateAssetRequest const& request);

  virtual future<StatusOr<google::cloud::dataplex::v1::Asset>> CreateAsset(
      google::longrunning::Operation const& operation);

  virtual future<StatusOr<google::cloud::dataplex::v1::Asset>> UpdateAsset(
      google::cloud::dataplex::v1::UpdateAssetRequest const& request);

  virtual StatusOr<google::longrunning::Operation> UpdateAsset(
      NoAwaitTag,
      google::cloud::dataplex::v1::UpdateAssetRequest const& request);

  virtual future<StatusOr<google::cloud::dataplex::v1::Asset>> UpdateAsset(
      google::longrunning::Operation const& operation);

  virtual future<StatusOr<google::cloud::dataplex::v1::OperationMetadata>>
  DeleteAsset(google::cloud::dataplex::v1::DeleteAssetRequest const& request);

  virtual StatusOr<google::longrunning::Operation> DeleteAsset(
      NoAwaitTag,
      google::cloud::dataplex::v1::DeleteAssetRequest const& request);

  virtual future<StatusOr<google::cloud::dataplex::v1::OperationMetadata>>
  DeleteAsset(google::longrunning::Operation const& operation);

  virtual StreamRange<google::cloud::dataplex::v1::Asset> ListAssets(
      google::cloud::dataplex::v1::ListAssetsRequest request);

  virtual StatusOr<google::cloud::dataplex::v1::Asset> GetAsset(
      google::cloud::dataplex::v1::GetAssetRequest const& request);

  virtual StreamRange<google::cloud::dataplex::v1::Action> ListAssetActions(
      google::cloud::dataplex::v1::ListAssetActionsRequest request);

  virtual future<StatusOr<google::cloud::dataplex::v1::Task>> CreateTask(
      google::cloud::dataplex::v1::CreateTaskRequest const& request);

  virtual StatusOr<google::longrunning::Operation> CreateTask(
      NoAwaitTag,
      google::cloud::dataplex::v1::CreateTaskRequest const& request);

  virtual future<StatusOr<google::cloud::dataplex::v1::Task>> CreateTask(
      google::longrunning::Operation const& operation);

  virtual future<StatusOr<google::cloud::dataplex::v1::Task>> UpdateTask(
      google::cloud::dataplex::v1::UpdateTaskRequest const& request);

  virtual StatusOr<google::longrunning::Operation> UpdateTask(
      NoAwaitTag,
      google::cloud::dataplex::v1::UpdateTaskRequest const& request);

  virtual future<StatusOr<google::cloud::dataplex::v1::Task>> UpdateTask(
      google::longrunning::Operation const& operation);

  virtual future<StatusOr<google::cloud::dataplex::v1::OperationMetadata>>
  DeleteTask(google::cloud::dataplex::v1::DeleteTaskRequest const& request);

  virtual StatusOr<google::longrunning::Operation> DeleteTask(
      NoAwaitTag,
      google::cloud::dataplex::v1::DeleteTaskRequest const& request);

  virtual future<StatusOr<google::cloud::dataplex::v1::OperationMetadata>>
  DeleteTask(google::longrunning::Operation const& operation);

  virtual StreamRange<google::cloud::dataplex::v1::Task> ListTasks(
      google::cloud::dataplex::v1::ListTasksRequest request);

  virtual StatusOr<google::cloud::dataplex::v1::Task> GetTask(
      google::cloud::dataplex::v1::GetTaskRequest const& request);

  virtual StreamRange<google::cloud::dataplex::v1::Job> ListJobs(
      google::cloud::dataplex::v1::ListJobsRequest request);

  virtual StatusOr<google::cloud::dataplex::v1::RunTaskResponse> RunTask(
      google::cloud::dataplex::v1::RunTaskRequest const& request);

  virtual StatusOr<google::cloud::dataplex::v1::Job> GetJob(
      google::cloud::dataplex::v1::GetJobRequest const& request);

  virtual Status CancelJob(
      google::cloud::dataplex::v1::CancelJobRequest const& request);

  virtual future<StatusOr<google::cloud::dataplex::v1::Environment>>
  CreateEnvironment(
      google::cloud::dataplex::v1::CreateEnvironmentRequest const& request);

  virtual StatusOr<google::longrunning::Operation> CreateEnvironment(
      NoAwaitTag,
      google::cloud::dataplex::v1::CreateEnvironmentRequest const& request);

  virtual future<StatusOr<google::cloud::dataplex::v1::Environment>>
  CreateEnvironment(google::longrunning::Operation const& operation);

  virtual future<StatusOr<google::cloud::dataplex::v1::Environment>>
  UpdateEnvironment(
      google::cloud::dataplex::v1::UpdateEnvironmentRequest const& request);

  virtual StatusOr<google::longrunning::Operation> UpdateEnvironment(
      NoAwaitTag,
      google::cloud::dataplex::v1::UpdateEnvironmentRequest const& request);

  virtual future<StatusOr<google::cloud::dataplex::v1::Environment>>
  UpdateEnvironment(google::longrunning::Operation const& operation);

  virtual future<StatusOr<google::cloud::dataplex::v1::OperationMetadata>>
  DeleteEnvironment(
      google::cloud::dataplex::v1::DeleteEnvironmentRequest const& request);

  virtual StatusOr<google::longrunning::Operation> DeleteEnvironment(
      NoAwaitTag,
      google::cloud::dataplex::v1::DeleteEnvironmentRequest const& request);

  virtual future<StatusOr<google::cloud::dataplex::v1::OperationMetadata>>
  DeleteEnvironment(google::longrunning::Operation const& operation);

  virtual StreamRange<google::cloud::dataplex::v1::Environment>
  ListEnvironments(
      google::cloud::dataplex::v1::ListEnvironmentsRequest request);

  virtual StatusOr<google::cloud::dataplex::v1::Environment> GetEnvironment(
      google::cloud::dataplex::v1::GetEnvironmentRequest const& request);

  virtual StreamRange<google::cloud::dataplex::v1::Session> ListSessions(
      google::cloud::dataplex::v1::ListSessionsRequest request);

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
 * `DataplexServiceConnection`.
 *
 * The returned connection object should not be used directly; instead it
 * should be passed as an argument to the constructor of DataplexServiceClient.
 *
 * The optional @p options argument may be used to configure aspects of the
 * returned `DataplexServiceConnection`. Expected options are any of the types
 * in the following option lists:
 *
 * - `google::cloud::CommonOptionList`
 * - `google::cloud::GrpcOptionList`
 * - `google::cloud::UnifiedCredentialsOptionList`
 * - `google::cloud::dataplex_v1::DataplexServicePolicyOptionList`
 *
 * @note Unexpected options will be ignored. To log unexpected options instead,
 *     set `GOOGLE_CLOUD_CPP_ENABLE_CLOG=yes` in the environment.
 *
 * @param options (optional) Configure the `DataplexServiceConnection` created
 * by this function.
 */
std::shared_ptr<DataplexServiceConnection> MakeDataplexServiceConnection(
    Options options = {});

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace dataplex_v1
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DATAPLEX_V1_DATAPLEX_CONNECTION_H
