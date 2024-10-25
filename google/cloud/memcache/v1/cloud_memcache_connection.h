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
// source: google/cloud/memcache/v1/cloud_memcache.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_MEMCACHE_V1_CLOUD_MEMCACHE_CONNECTION_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_MEMCACHE_V1_CLOUD_MEMCACHE_CONNECTION_H

#include "google/cloud/memcache/v1/cloud_memcache.pb.h"
#include "google/cloud/memcache/v1/cloud_memcache_connection_idempotency_policy.h"
#include "google/cloud/memcache/v1/internal/cloud_memcache_retry_traits.h"
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
namespace memcache_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

/// The retry policy for `CloudMemcacheConnection`.
class CloudMemcacheRetryPolicy : public ::google::cloud::RetryPolicy {
 public:
  /// Creates a new instance of the policy, reset to the initial state.
  virtual std::unique_ptr<CloudMemcacheRetryPolicy> clone() const = 0;
};

/**
 * A retry policy for `CloudMemcacheConnection` based on counting errors.
 *
 * This policy stops retrying if:
 * - An RPC returns a non-transient error.
 * - More than a prescribed number of transient failures is detected.
 *
 * In this class the following status codes are treated as transient errors:
 * - [`kUnavailable`](@ref google::cloud::StatusCode)
 */
class CloudMemcacheLimitedErrorCountRetryPolicy
    : public CloudMemcacheRetryPolicy {
 public:
  /**
   * Create an instance that tolerates up to @p maximum_failures transient
   * errors.
   *
   * @note Disable the retry loop by providing an instance of this policy with
   *     @p maximum_failures == 0.
   */
  explicit CloudMemcacheLimitedErrorCountRetryPolicy(int maximum_failures)
      : impl_(maximum_failures) {}

  CloudMemcacheLimitedErrorCountRetryPolicy(
      CloudMemcacheLimitedErrorCountRetryPolicy&& rhs) noexcept
      : CloudMemcacheLimitedErrorCountRetryPolicy(rhs.maximum_failures()) {}
  CloudMemcacheLimitedErrorCountRetryPolicy(
      CloudMemcacheLimitedErrorCountRetryPolicy const& rhs) noexcept
      : CloudMemcacheLimitedErrorCountRetryPolicy(rhs.maximum_failures()) {}

  int maximum_failures() const { return impl_.maximum_failures(); }

  bool OnFailure(Status const& status) override {
    return impl_.OnFailure(status);
  }
  bool IsExhausted() const override { return impl_.IsExhausted(); }
  bool IsPermanentFailure(Status const& status) const override {
    return impl_.IsPermanentFailure(status);
  }
  std::unique_ptr<CloudMemcacheRetryPolicy> clone() const override {
    return std::make_unique<CloudMemcacheLimitedErrorCountRetryPolicy>(
        maximum_failures());
  }

  // This is provided only for backwards compatibility.
  using BaseType = CloudMemcacheRetryPolicy;

 private:
  google::cloud::internal::LimitedErrorCountRetryPolicy<
      memcache_v1_internal::CloudMemcacheRetryTraits>
      impl_;
};

/**
 * A retry policy for `CloudMemcacheConnection` based on elapsed time.
 *
 * This policy stops retrying if:
 * - An RPC returns a non-transient error.
 * - The elapsed time in the retry loop exceeds a prescribed duration.
 *
 * In this class the following status codes are treated as transient errors:
 * - [`kUnavailable`](@ref google::cloud::StatusCode)
 */
class CloudMemcacheLimitedTimeRetryPolicy : public CloudMemcacheRetryPolicy {
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
  explicit CloudMemcacheLimitedTimeRetryPolicy(
      std::chrono::duration<DurationRep, DurationPeriod> maximum_duration)
      : impl_(maximum_duration) {}

  CloudMemcacheLimitedTimeRetryPolicy(
      CloudMemcacheLimitedTimeRetryPolicy&& rhs) noexcept
      : CloudMemcacheLimitedTimeRetryPolicy(rhs.maximum_duration()) {}
  CloudMemcacheLimitedTimeRetryPolicy(
      CloudMemcacheLimitedTimeRetryPolicy const& rhs) noexcept
      : CloudMemcacheLimitedTimeRetryPolicy(rhs.maximum_duration()) {}

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
  std::unique_ptr<CloudMemcacheRetryPolicy> clone() const override {
    return std::make_unique<CloudMemcacheLimitedTimeRetryPolicy>(
        maximum_duration());
  }

  // This is provided only for backwards compatibility.
  using BaseType = CloudMemcacheRetryPolicy;

 private:
  google::cloud::internal::LimitedTimeRetryPolicy<
      memcache_v1_internal::CloudMemcacheRetryTraits>
      impl_;
};

/**
 * The `CloudMemcacheConnection` object for `CloudMemcacheClient`.
 *
 * This interface defines virtual methods for each of the user-facing overload
 * sets in `CloudMemcacheClient`. This allows users to inject custom behavior
 * (e.g., with a Google Mock object) when writing tests that use objects of type
 * `CloudMemcacheClient`.
 *
 * To create a concrete instance, see `MakeCloudMemcacheConnection()`.
 *
 * For mocking, see `memcache_v1_mocks::MockCloudMemcacheConnection`.
 */
class CloudMemcacheConnection {
 public:
  virtual ~CloudMemcacheConnection() = 0;

  virtual Options options() { return Options{}; }

  virtual StreamRange<google::cloud::memcache::v1::Instance> ListInstances(
      google::cloud::memcache::v1::ListInstancesRequest request);

  virtual StatusOr<google::cloud::memcache::v1::Instance> GetInstance(
      google::cloud::memcache::v1::GetInstanceRequest const& request);

  virtual future<StatusOr<google::cloud::memcache::v1::Instance>>
  CreateInstance(
      google::cloud::memcache::v1::CreateInstanceRequest const& request);

  virtual StatusOr<google::longrunning::Operation> CreateInstance(
      NoAwaitTag,
      google::cloud::memcache::v1::CreateInstanceRequest const& request);

  virtual future<StatusOr<google::cloud::memcache::v1::Instance>>
  CreateInstance(google::longrunning::Operation const& operation);

  virtual future<StatusOr<google::cloud::memcache::v1::Instance>>
  UpdateInstance(
      google::cloud::memcache::v1::UpdateInstanceRequest const& request);

  virtual StatusOr<google::longrunning::Operation> UpdateInstance(
      NoAwaitTag,
      google::cloud::memcache::v1::UpdateInstanceRequest const& request);

  virtual future<StatusOr<google::cloud::memcache::v1::Instance>>
  UpdateInstance(google::longrunning::Operation const& operation);

  virtual future<StatusOr<google::cloud::memcache::v1::Instance>>
  UpdateParameters(
      google::cloud::memcache::v1::UpdateParametersRequest const& request);

  virtual StatusOr<google::longrunning::Operation> UpdateParameters(
      NoAwaitTag,
      google::cloud::memcache::v1::UpdateParametersRequest const& request);

  virtual future<StatusOr<google::cloud::memcache::v1::Instance>>
  UpdateParameters(google::longrunning::Operation const& operation);

  virtual future<StatusOr<google::cloud::memcache::v1::OperationMetadata>>
  DeleteInstance(
      google::cloud::memcache::v1::DeleteInstanceRequest const& request);

  virtual StatusOr<google::longrunning::Operation> DeleteInstance(
      NoAwaitTag,
      google::cloud::memcache::v1::DeleteInstanceRequest const& request);

  virtual future<StatusOr<google::cloud::memcache::v1::OperationMetadata>>
  DeleteInstance(google::longrunning::Operation const& operation);

  virtual future<StatusOr<google::cloud::memcache::v1::Instance>>
  ApplyParameters(
      google::cloud::memcache::v1::ApplyParametersRequest const& request);

  virtual StatusOr<google::longrunning::Operation> ApplyParameters(
      NoAwaitTag,
      google::cloud::memcache::v1::ApplyParametersRequest const& request);

  virtual future<StatusOr<google::cloud::memcache::v1::Instance>>
  ApplyParameters(google::longrunning::Operation const& operation);

  virtual future<StatusOr<google::cloud::memcache::v1::Instance>>
  RescheduleMaintenance(
      google::cloud::memcache::v1::RescheduleMaintenanceRequest const& request);

  virtual StatusOr<google::longrunning::Operation> RescheduleMaintenance(
      NoAwaitTag,
      google::cloud::memcache::v1::RescheduleMaintenanceRequest const& request);

  virtual future<StatusOr<google::cloud::memcache::v1::Instance>>
  RescheduleMaintenance(google::longrunning::Operation const& operation);

  virtual StreamRange<google::cloud::location::Location> ListLocations(
      google::cloud::location::ListLocationsRequest request);

  virtual StatusOr<google::cloud::location::Location> GetLocation(
      google::cloud::location::GetLocationRequest const& request);

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
 * A factory function to construct an object of type `CloudMemcacheConnection`.
 *
 * The returned connection object should not be used directly; instead it
 * should be passed as an argument to the constructor of CloudMemcacheClient.
 *
 * The optional @p options argument may be used to configure aspects of the
 * returned `CloudMemcacheConnection`. Expected options are any of the types in
 * the following option lists:
 *
 * - `google::cloud::CommonOptionList`
 * - `google::cloud::GrpcOptionList`
 * - `google::cloud::UnifiedCredentialsOptionList`
 * - `google::cloud::memcache_v1::CloudMemcachePolicyOptionList`
 *
 * @note Unexpected options will be ignored. To log unexpected options instead,
 *     set `GOOGLE_CLOUD_CPP_ENABLE_CLOG=yes` in the environment.
 *
 * @param options (optional) Configure the `CloudMemcacheConnection` created by
 * this function.
 */
std::shared_ptr<CloudMemcacheConnection> MakeCloudMemcacheConnection(
    Options options = {});

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace memcache_v1
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_MEMCACHE_V1_CLOUD_MEMCACHE_CONNECTION_H
