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
// source: google/cloud/sql/v1/cloud_sql_instances.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_SQL_V1_SQL_INSTANCES_CONNECTION_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_SQL_V1_SQL_INSTANCES_CONNECTION_H

#include "google/cloud/sql/v1/cloud_sql_instances.pb.h"
#include "google/cloud/sql/v1/internal/sql_instances_retry_traits.h"
#include "google/cloud/sql/v1/sql_instances_connection_idempotency_policy.h"
#include "google/cloud/backoff_policy.h"
#include "google/cloud/internal/retry_policy_impl.h"
#include "google/cloud/options.h"
#include "google/cloud/status_or.h"
#include "google/cloud/stream_range.h"
#include "google/cloud/version.h"
#include <memory>

namespace google {
namespace cloud {
namespace sql_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

/// The retry policy for `SqlInstancesServiceConnection`.
class SqlInstancesServiceRetryPolicy : public ::google::cloud::RetryPolicy {
 public:
  /// Creates a new instance of the policy, reset to the initial state.
  virtual std::unique_ptr<SqlInstancesServiceRetryPolicy> clone() const = 0;
};

/**
 * A retry policy for `SqlInstancesServiceConnection` based on counting errors.
 *
 * This policy stops retrying if:
 * - An RPC returns a non-transient error.
 * - More than a prescribed number of transient failures is detected.
 *
 * In this class the following status codes are treated as transient errors:
 * - [`kUnavailable`](@ref google::cloud::StatusCode)
 */
class SqlInstancesServiceLimitedErrorCountRetryPolicy
    : public SqlInstancesServiceRetryPolicy {
 public:
  /**
   * Create an instance that tolerates up to @p maximum_failures transient
   * errors.
   *
   * @note Disable the retry loop by providing an instance of this policy with
   *     @p maximum_failures == 0.
   */
  explicit SqlInstancesServiceLimitedErrorCountRetryPolicy(int maximum_failures)
      : impl_(maximum_failures) {}

  SqlInstancesServiceLimitedErrorCountRetryPolicy(
      SqlInstancesServiceLimitedErrorCountRetryPolicy&& rhs) noexcept
      : SqlInstancesServiceLimitedErrorCountRetryPolicy(
            rhs.maximum_failures()) {}
  SqlInstancesServiceLimitedErrorCountRetryPolicy(
      SqlInstancesServiceLimitedErrorCountRetryPolicy const& rhs) noexcept
      : SqlInstancesServiceLimitedErrorCountRetryPolicy(
            rhs.maximum_failures()) {}

  int maximum_failures() const { return impl_.maximum_failures(); }

  bool OnFailure(Status const& status) override {
    return impl_.OnFailure(status);
  }
  bool IsExhausted() const override { return impl_.IsExhausted(); }
  bool IsPermanentFailure(Status const& status) const override {
    return impl_.IsPermanentFailure(status);
  }
  std::unique_ptr<SqlInstancesServiceRetryPolicy> clone() const override {
    return std::make_unique<SqlInstancesServiceLimitedErrorCountRetryPolicy>(
        maximum_failures());
  }

  // This is provided only for backwards compatibility.
  using BaseType = SqlInstancesServiceRetryPolicy;

 private:
  google::cloud::internal::LimitedErrorCountRetryPolicy<
      sql_v1_internal::SqlInstancesServiceRetryTraits>
      impl_;
};

/**
 * A retry policy for `SqlInstancesServiceConnection` based on elapsed time.
 *
 * This policy stops retrying if:
 * - An RPC returns a non-transient error.
 * - The elapsed time in the retry loop exceeds a prescribed duration.
 *
 * In this class the following status codes are treated as transient errors:
 * - [`kUnavailable`](@ref google::cloud::StatusCode)
 */
class SqlInstancesServiceLimitedTimeRetryPolicy
    : public SqlInstancesServiceRetryPolicy {
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
  explicit SqlInstancesServiceLimitedTimeRetryPolicy(
      std::chrono::duration<DurationRep, DurationPeriod> maximum_duration)
      : impl_(maximum_duration) {}

  SqlInstancesServiceLimitedTimeRetryPolicy(
      SqlInstancesServiceLimitedTimeRetryPolicy&& rhs) noexcept
      : SqlInstancesServiceLimitedTimeRetryPolicy(rhs.maximum_duration()) {}
  SqlInstancesServiceLimitedTimeRetryPolicy(
      SqlInstancesServiceLimitedTimeRetryPolicy const& rhs) noexcept
      : SqlInstancesServiceLimitedTimeRetryPolicy(rhs.maximum_duration()) {}

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
  std::unique_ptr<SqlInstancesServiceRetryPolicy> clone() const override {
    return std::make_unique<SqlInstancesServiceLimitedTimeRetryPolicy>(
        maximum_duration());
  }

  // This is provided only for backwards compatibility.
  using BaseType = SqlInstancesServiceRetryPolicy;

 private:
  google::cloud::internal::LimitedTimeRetryPolicy<
      sql_v1_internal::SqlInstancesServiceRetryTraits>
      impl_;
};

/**
 * The `SqlInstancesServiceConnection` object for `SqlInstancesServiceClient`.
 *
 * This interface defines virtual methods for each of the user-facing overload
 * sets in `SqlInstancesServiceClient`. This allows users to inject custom
 * behavior (e.g., with a Google Mock object) when writing tests that use
 * objects of type `SqlInstancesServiceClient`.
 *
 * To create a concrete instance, see `MakeSqlInstancesServiceConnection()`.
 *
 * For mocking, see `sql_v1_mocks::MockSqlInstancesServiceConnection`.
 */
class SqlInstancesServiceConnection {
 public:
  virtual ~SqlInstancesServiceConnection() = 0;

  virtual Options options() { return Options{}; }

  virtual StatusOr<google::cloud::sql::v1::Operation> AddServerCa(
      google::cloud::sql::v1::SqlInstancesAddServerCaRequest const& request);

  virtual StatusOr<google::cloud::sql::v1::Operation> Clone(
      google::cloud::sql::v1::SqlInstancesCloneRequest const& request);

  virtual StatusOr<google::cloud::sql::v1::Operation> Delete(
      google::cloud::sql::v1::SqlInstancesDeleteRequest const& request);

  virtual StatusOr<google::cloud::sql::v1::Operation> DemoteMaster(
      google::cloud::sql::v1::SqlInstancesDemoteMasterRequest const& request);

  virtual StatusOr<google::cloud::sql::v1::Operation> Demote(
      google::cloud::sql::v1::SqlInstancesDemoteRequest const& request);

  virtual StatusOr<google::cloud::sql::v1::Operation> Export(
      google::cloud::sql::v1::SqlInstancesExportRequest const& request);

  virtual StatusOr<google::cloud::sql::v1::Operation> Failover(
      google::cloud::sql::v1::SqlInstancesFailoverRequest const& request);

  virtual StatusOr<google::cloud::sql::v1::Operation> Reencrypt(
      google::cloud::sql::v1::SqlInstancesReencryptRequest const& request);

  virtual StatusOr<google::cloud::sql::v1::DatabaseInstance> Get(
      google::cloud::sql::v1::SqlInstancesGetRequest const& request);

  virtual StatusOr<google::cloud::sql::v1::Operation> Import(
      google::cloud::sql::v1::SqlInstancesImportRequest const& request);

  virtual StatusOr<google::cloud::sql::v1::Operation> Insert(
      google::cloud::sql::v1::SqlInstancesInsertRequest const& request);

  virtual StreamRange<google::cloud::sql::v1::DatabaseInstance> List(
      google::cloud::sql::v1::SqlInstancesListRequest request);

  virtual StatusOr<google::cloud::sql::v1::InstancesListServerCasResponse>
  ListServerCas(
      google::cloud::sql::v1::SqlInstancesListServerCasRequest const& request);

  virtual StatusOr<google::cloud::sql::v1::Operation> Patch(
      google::cloud::sql::v1::SqlInstancesPatchRequest const& request);

  virtual StatusOr<google::cloud::sql::v1::Operation> PromoteReplica(
      google::cloud::sql::v1::SqlInstancesPromoteReplicaRequest const& request);

  virtual StatusOr<google::cloud::sql::v1::Operation> Switchover(
      google::cloud::sql::v1::SqlInstancesSwitchoverRequest const& request);

  virtual StatusOr<google::cloud::sql::v1::Operation> ResetSslConfig(
      google::cloud::sql::v1::SqlInstancesResetSslConfigRequest const& request);

  virtual StatusOr<google::cloud::sql::v1::Operation> Restart(
      google::cloud::sql::v1::SqlInstancesRestartRequest const& request);

  virtual StatusOr<google::cloud::sql::v1::Operation> RestoreBackup(
      google::cloud::sql::v1::SqlInstancesRestoreBackupRequest const& request);

  virtual StatusOr<google::cloud::sql::v1::Operation> RotateServerCa(
      google::cloud::sql::v1::SqlInstancesRotateServerCaRequest const& request);

  virtual StatusOr<google::cloud::sql::v1::Operation> StartReplica(
      google::cloud::sql::v1::SqlInstancesStartReplicaRequest const& request);

  virtual StatusOr<google::cloud::sql::v1::Operation> StopReplica(
      google::cloud::sql::v1::SqlInstancesStopReplicaRequest const& request);

  virtual StatusOr<google::cloud::sql::v1::Operation> TruncateLog(
      google::cloud::sql::v1::SqlInstancesTruncateLogRequest const& request);

  virtual StatusOr<google::cloud::sql::v1::Operation> Update(
      google::cloud::sql::v1::SqlInstancesUpdateRequest const& request);

  virtual StatusOr<google::cloud::sql::v1::SslCert> CreateEphemeral(
      google::cloud::sql::v1::SqlInstancesCreateEphemeralCertRequest const&
          request);

  virtual StatusOr<google::cloud::sql::v1::Operation> RescheduleMaintenance(
      google::cloud::sql::v1::SqlInstancesRescheduleMaintenanceRequest const&
          request);

  virtual StatusOr<
      google::cloud::sql::v1::SqlInstancesVerifyExternalSyncSettingsResponse>
  VerifyExternalSyncSettings(
      google::cloud::sql::v1::
          SqlInstancesVerifyExternalSyncSettingsRequest const& request);

  virtual StatusOr<google::cloud::sql::v1::Operation> StartExternalSync(
      google::cloud::sql::v1::SqlInstancesStartExternalSyncRequest const&
          request);

  virtual StatusOr<google::cloud::sql::v1::Operation> PerformDiskShrink(
      google::cloud::sql::v1::SqlInstancesPerformDiskShrinkRequest const&
          request);

  virtual StatusOr<
      google::cloud::sql::v1::SqlInstancesGetDiskShrinkConfigResponse>
  GetDiskShrinkConfig(
      google::cloud::sql::v1::SqlInstancesGetDiskShrinkConfigRequest const&
          request);

  virtual StatusOr<google::cloud::sql::v1::Operation> ResetReplicaSize(
      google::cloud::sql::v1::SqlInstancesResetReplicaSizeRequest const&
          request);

  virtual StatusOr<
      google::cloud::sql::v1::SqlInstancesGetLatestRecoveryTimeResponse>
  GetLatestRecoveryTime(
      google::cloud::sql::v1::SqlInstancesGetLatestRecoveryTimeRequest const&
          request);

  virtual StatusOr<google::cloud::sql::v1::SqlInstancesAcquireSsrsLeaseResponse>
  AcquireSsrsLease(
      google::cloud::sql::v1::SqlInstancesAcquireSsrsLeaseRequest const&
          request);

  virtual StatusOr<google::cloud::sql::v1::SqlInstancesReleaseSsrsLeaseResponse>
  ReleaseSsrsLease(
      google::cloud::sql::v1::SqlInstancesReleaseSsrsLeaseRequest const&
          request);
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace sql_v1
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_SQL_V1_SQL_INSTANCES_CONNECTION_H
