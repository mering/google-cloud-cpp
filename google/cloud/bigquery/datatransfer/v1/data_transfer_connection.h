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
// source: google/cloud/bigquery/datatransfer/v1/datatransfer.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_BIGQUERY_DATATRANSFER_V1_DATA_TRANSFER_CONNECTION_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_BIGQUERY_DATATRANSFER_V1_DATA_TRANSFER_CONNECTION_H

#include "google/cloud/bigquery/datatransfer/v1/data_transfer_connection_idempotency_policy.h"
#include "google/cloud/bigquery/datatransfer/v1/internal/data_transfer_retry_traits.h"
#include "google/cloud/backoff_policy.h"
#include "google/cloud/internal/retry_policy_impl.h"
#include "google/cloud/options.h"
#include "google/cloud/status_or.h"
#include "google/cloud/stream_range.h"
#include "google/cloud/version.h"
#include "google/cloud/bigquery/datatransfer/v1/datatransfer.pb.h"
#include <memory>

namespace google {
namespace cloud {
namespace bigquery_datatransfer_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

/// The retry policy for `DataTransferServiceConnection`.
class DataTransferServiceRetryPolicy : public ::google::cloud::RetryPolicy {
 public:
  /// Creates a new instance of the policy, reset to the initial state.
  virtual std::unique_ptr<DataTransferServiceRetryPolicy> clone() const = 0;
};

/**
 * A retry policy for `DataTransferServiceConnection` based on counting errors.
 *
 * This policy stops retrying if:
 * - An RPC returns a non-transient error.
 * - More than a prescribed number of transient failures is detected.
 *
 * In this class the following status codes are treated as transient errors:
 * - [`kUnavailable`](@ref google::cloud::StatusCode)
 */
class DataTransferServiceLimitedErrorCountRetryPolicy
    : public DataTransferServiceRetryPolicy {
 public:
  /**
   * Create an instance that tolerates up to @p maximum_failures transient
   * errors.
   *
   * @note Disable the retry loop by providing an instance of this policy with
   *     @p maximum_failures == 0.
   */
  explicit DataTransferServiceLimitedErrorCountRetryPolicy(int maximum_failures)
      : impl_(maximum_failures) {}

  DataTransferServiceLimitedErrorCountRetryPolicy(
      DataTransferServiceLimitedErrorCountRetryPolicy&& rhs) noexcept
      : DataTransferServiceLimitedErrorCountRetryPolicy(
            rhs.maximum_failures()) {}
  DataTransferServiceLimitedErrorCountRetryPolicy(
      DataTransferServiceLimitedErrorCountRetryPolicy const& rhs) noexcept
      : DataTransferServiceLimitedErrorCountRetryPolicy(
            rhs.maximum_failures()) {}

  int maximum_failures() const { return impl_.maximum_failures(); }

  bool OnFailure(Status const& status) override {
    return impl_.OnFailure(status);
  }
  bool IsExhausted() const override { return impl_.IsExhausted(); }
  bool IsPermanentFailure(Status const& status) const override {
    return impl_.IsPermanentFailure(status);
  }
  std::unique_ptr<DataTransferServiceRetryPolicy> clone() const override {
    return std::make_unique<DataTransferServiceLimitedErrorCountRetryPolicy>(
        maximum_failures());
  }

  // This is provided only for backwards compatibility.
  using BaseType = DataTransferServiceRetryPolicy;

 private:
  google::cloud::internal::LimitedErrorCountRetryPolicy<
      bigquery_datatransfer_v1_internal::DataTransferServiceRetryTraits>
      impl_;
};

/**
 * A retry policy for `DataTransferServiceConnection` based on elapsed time.
 *
 * This policy stops retrying if:
 * - An RPC returns a non-transient error.
 * - The elapsed time in the retry loop exceeds a prescribed duration.
 *
 * In this class the following status codes are treated as transient errors:
 * - [`kUnavailable`](@ref google::cloud::StatusCode)
 */
class DataTransferServiceLimitedTimeRetryPolicy
    : public DataTransferServiceRetryPolicy {
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
  explicit DataTransferServiceLimitedTimeRetryPolicy(
      std::chrono::duration<DurationRep, DurationPeriod> maximum_duration)
      : impl_(maximum_duration) {}

  DataTransferServiceLimitedTimeRetryPolicy(
      DataTransferServiceLimitedTimeRetryPolicy&& rhs) noexcept
      : DataTransferServiceLimitedTimeRetryPolicy(rhs.maximum_duration()) {}
  DataTransferServiceLimitedTimeRetryPolicy(
      DataTransferServiceLimitedTimeRetryPolicy const& rhs) noexcept
      : DataTransferServiceLimitedTimeRetryPolicy(rhs.maximum_duration()) {}

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
  std::unique_ptr<DataTransferServiceRetryPolicy> clone() const override {
    return std::make_unique<DataTransferServiceLimitedTimeRetryPolicy>(
        maximum_duration());
  }

  // This is provided only for backwards compatibility.
  using BaseType = DataTransferServiceRetryPolicy;

 private:
  google::cloud::internal::LimitedTimeRetryPolicy<
      bigquery_datatransfer_v1_internal::DataTransferServiceRetryTraits>
      impl_;
};

/**
 * The `DataTransferServiceConnection` object for `DataTransferServiceClient`.
 *
 * This interface defines virtual methods for each of the user-facing overload
 * sets in `DataTransferServiceClient`. This allows users to inject custom
 * behavior (e.g., with a Google Mock object) when writing tests that use
 * objects of type `DataTransferServiceClient`.
 *
 * To create a concrete instance, see `MakeDataTransferServiceConnection()`.
 *
 * For mocking, see
 * `bigquery_datatransfer_v1_mocks::MockDataTransferServiceConnection`.
 */
class DataTransferServiceConnection {
 public:
  virtual ~DataTransferServiceConnection() = 0;

  virtual Options options() { return Options{}; }

  virtual StatusOr<google::cloud::bigquery::datatransfer::v1::DataSource>
  GetDataSource(
      google::cloud::bigquery::datatransfer::v1::GetDataSourceRequest const&
          request);

  virtual StreamRange<google::cloud::bigquery::datatransfer::v1::DataSource>
  ListDataSources(
      google::cloud::bigquery::datatransfer::v1::ListDataSourcesRequest
          request);

  virtual StatusOr<google::cloud::bigquery::datatransfer::v1::TransferConfig>
  CreateTransferConfig(google::cloud::bigquery::datatransfer::v1::
                           CreateTransferConfigRequest const& request);

  virtual StatusOr<google::cloud::bigquery::datatransfer::v1::TransferConfig>
  UpdateTransferConfig(google::cloud::bigquery::datatransfer::v1::
                           UpdateTransferConfigRequest const& request);

  virtual Status DeleteTransferConfig(
      google::cloud::bigquery::datatransfer::v1::
          DeleteTransferConfigRequest const& request);

  virtual StatusOr<google::cloud::bigquery::datatransfer::v1::TransferConfig>
  GetTransferConfig(
      google::cloud::bigquery::datatransfer::v1::GetTransferConfigRequest const&
          request);

  virtual StreamRange<google::cloud::bigquery::datatransfer::v1::TransferConfig>
  ListTransferConfigs(
      google::cloud::bigquery::datatransfer::v1::ListTransferConfigsRequest
          request);

  virtual StatusOr<
      google::cloud::bigquery::datatransfer::v1::ScheduleTransferRunsResponse>
  ScheduleTransferRuns(google::cloud::bigquery::datatransfer::v1::
                           ScheduleTransferRunsRequest const& request);

  virtual StatusOr<google::cloud::bigquery::datatransfer::v1::
                       StartManualTransferRunsResponse>
  StartManualTransferRuns(google::cloud::bigquery::datatransfer::v1::
                              StartManualTransferRunsRequest const& request);

  virtual StatusOr<google::cloud::bigquery::datatransfer::v1::TransferRun>
  GetTransferRun(
      google::cloud::bigquery::datatransfer::v1::GetTransferRunRequest const&
          request);

  virtual Status DeleteTransferRun(
      google::cloud::bigquery::datatransfer::v1::DeleteTransferRunRequest const&
          request);

  virtual StreamRange<google::cloud::bigquery::datatransfer::v1::TransferRun>
  ListTransferRuns(
      google::cloud::bigquery::datatransfer::v1::ListTransferRunsRequest
          request);

  virtual StreamRange<
      google::cloud::bigquery::datatransfer::v1::TransferMessage>
  ListTransferLogs(
      google::cloud::bigquery::datatransfer::v1::ListTransferLogsRequest
          request);

  virtual StatusOr<
      google::cloud::bigquery::datatransfer::v1::CheckValidCredsResponse>
  CheckValidCreds(
      google::cloud::bigquery::datatransfer::v1::CheckValidCredsRequest const&
          request);

  virtual Status EnrollDataSources(
      google::cloud::bigquery::datatransfer::v1::EnrollDataSourcesRequest const&
          request);

  virtual Status UnenrollDataSources(
      google::cloud::bigquery::datatransfer::v1::
          UnenrollDataSourcesRequest const& request);

  virtual StreamRange<google::cloud::location::Location> ListLocations(
      google::cloud::location::ListLocationsRequest request);

  virtual StatusOr<google::cloud::location::Location> GetLocation(
      google::cloud::location::GetLocationRequest const& request);
};

/**
 * A factory function to construct an object of type
 * `DataTransferServiceConnection`.
 *
 * The returned connection object should not be used directly; instead it
 * should be passed as an argument to the constructor of
 * DataTransferServiceClient.
 *
 * The optional @p options argument may be used to configure aspects of the
 * returned `DataTransferServiceConnection`. Expected options are any of the
 * types in the following option lists:
 *
 * - `google::cloud::CommonOptionList`
 * - `google::cloud::GrpcOptionList`
 * - `google::cloud::UnifiedCredentialsOptionList`
 * -
 * `google::cloud::bigquery_datatransfer_v1::DataTransferServicePolicyOptionList`
 *
 * @note Unexpected options will be ignored. To log unexpected options instead,
 *     set `GOOGLE_CLOUD_CPP_ENABLE_CLOG=yes` in the environment.
 *
 * @param options (optional) Configure the `DataTransferServiceConnection`
 * created by this function.
 */
std::shared_ptr<DataTransferServiceConnection>
MakeDataTransferServiceConnection(Options options = {});

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace bigquery_datatransfer_v1
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_BIGQUERY_DATATRANSFER_V1_DATA_TRANSFER_CONNECTION_H
