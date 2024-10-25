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
// source: google/cloud/aiplatform/v1/feature_online_store_admin_service.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_AIPLATFORM_V1_FEATURE_ONLINE_STORE_ADMIN_CONNECTION_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_AIPLATFORM_V1_FEATURE_ONLINE_STORE_ADMIN_CONNECTION_H

#include "google/cloud/aiplatform/v1/feature_online_store_admin_connection_idempotency_policy.h"
#include "google/cloud/aiplatform/v1/feature_online_store_admin_service.pb.h"
#include "google/cloud/aiplatform/v1/internal/feature_online_store_admin_retry_traits.h"
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
#include <string>

namespace google {
namespace cloud {
namespace aiplatform_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

/// The retry policy for `FeatureOnlineStoreAdminServiceConnection`.
class FeatureOnlineStoreAdminServiceRetryPolicy
    : public ::google::cloud::RetryPolicy {
 public:
  /// Creates a new instance of the policy, reset to the initial state.
  virtual std::unique_ptr<FeatureOnlineStoreAdminServiceRetryPolicy> clone()
      const = 0;
};

/**
 * A retry policy for `FeatureOnlineStoreAdminServiceConnection` based on
 * counting errors.
 *
 * This policy stops retrying if:
 * - An RPC returns a non-transient error.
 * - More than a prescribed number of transient failures is detected.
 *
 * In this class the following status codes are treated as transient errors:
 * - [`kUnavailable`](@ref google::cloud::StatusCode)
 */
class FeatureOnlineStoreAdminServiceLimitedErrorCountRetryPolicy
    : public FeatureOnlineStoreAdminServiceRetryPolicy {
 public:
  /**
   * Create an instance that tolerates up to @p maximum_failures transient
   * errors.
   *
   * @note Disable the retry loop by providing an instance of this policy with
   *     @p maximum_failures == 0.
   */
  explicit FeatureOnlineStoreAdminServiceLimitedErrorCountRetryPolicy(
      int maximum_failures)
      : impl_(maximum_failures) {}

  FeatureOnlineStoreAdminServiceLimitedErrorCountRetryPolicy(
      FeatureOnlineStoreAdminServiceLimitedErrorCountRetryPolicy&& rhs) noexcept
      : FeatureOnlineStoreAdminServiceLimitedErrorCountRetryPolicy(
            rhs.maximum_failures()) {}
  FeatureOnlineStoreAdminServiceLimitedErrorCountRetryPolicy(
      FeatureOnlineStoreAdminServiceLimitedErrorCountRetryPolicy const&
          rhs) noexcept
      : FeatureOnlineStoreAdminServiceLimitedErrorCountRetryPolicy(
            rhs.maximum_failures()) {}

  int maximum_failures() const { return impl_.maximum_failures(); }

  bool OnFailure(Status const& status) override {
    return impl_.OnFailure(status);
  }
  bool IsExhausted() const override { return impl_.IsExhausted(); }
  bool IsPermanentFailure(Status const& status) const override {
    return impl_.IsPermanentFailure(status);
  }
  std::unique_ptr<FeatureOnlineStoreAdminServiceRetryPolicy> clone()
      const override {
    return std::make_unique<
        FeatureOnlineStoreAdminServiceLimitedErrorCountRetryPolicy>(
        maximum_failures());
  }

  // This is provided only for backwards compatibility.
  using BaseType = FeatureOnlineStoreAdminServiceRetryPolicy;

 private:
  google::cloud::internal::LimitedErrorCountRetryPolicy<
      aiplatform_v1_internal::FeatureOnlineStoreAdminServiceRetryTraits>
      impl_;
};

/**
 * A retry policy for `FeatureOnlineStoreAdminServiceConnection` based on
 * elapsed time.
 *
 * This policy stops retrying if:
 * - An RPC returns a non-transient error.
 * - The elapsed time in the retry loop exceeds a prescribed duration.
 *
 * In this class the following status codes are treated as transient errors:
 * - [`kUnavailable`](@ref google::cloud::StatusCode)
 */
class FeatureOnlineStoreAdminServiceLimitedTimeRetryPolicy
    : public FeatureOnlineStoreAdminServiceRetryPolicy {
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
  explicit FeatureOnlineStoreAdminServiceLimitedTimeRetryPolicy(
      std::chrono::duration<DurationRep, DurationPeriod> maximum_duration)
      : impl_(maximum_duration) {}

  FeatureOnlineStoreAdminServiceLimitedTimeRetryPolicy(
      FeatureOnlineStoreAdminServiceLimitedTimeRetryPolicy&& rhs) noexcept
      : FeatureOnlineStoreAdminServiceLimitedTimeRetryPolicy(
            rhs.maximum_duration()) {}
  FeatureOnlineStoreAdminServiceLimitedTimeRetryPolicy(
      FeatureOnlineStoreAdminServiceLimitedTimeRetryPolicy const& rhs) noexcept
      : FeatureOnlineStoreAdminServiceLimitedTimeRetryPolicy(
            rhs.maximum_duration()) {}

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
  std::unique_ptr<FeatureOnlineStoreAdminServiceRetryPolicy> clone()
      const override {
    return std::make_unique<
        FeatureOnlineStoreAdminServiceLimitedTimeRetryPolicy>(
        maximum_duration());
  }

  // This is provided only for backwards compatibility.
  using BaseType = FeatureOnlineStoreAdminServiceRetryPolicy;

 private:
  google::cloud::internal::LimitedTimeRetryPolicy<
      aiplatform_v1_internal::FeatureOnlineStoreAdminServiceRetryTraits>
      impl_;
};

/**
 * The `FeatureOnlineStoreAdminServiceConnection` object for
 * `FeatureOnlineStoreAdminServiceClient`.
 *
 * This interface defines virtual methods for each of the user-facing overload
 * sets in `FeatureOnlineStoreAdminServiceClient`. This allows users to inject
 * custom behavior (e.g., with a Google Mock object) when writing tests that use
 * objects of type `FeatureOnlineStoreAdminServiceClient`.
 *
 * To create a concrete instance, see
 * `MakeFeatureOnlineStoreAdminServiceConnection()`.
 *
 * For mocking, see
 * `aiplatform_v1_mocks::MockFeatureOnlineStoreAdminServiceConnection`.
 */
class FeatureOnlineStoreAdminServiceConnection {
 public:
  virtual ~FeatureOnlineStoreAdminServiceConnection() = 0;

  virtual Options options() { return Options{}; }

  virtual future<StatusOr<google::cloud::aiplatform::v1::FeatureOnlineStore>>
  CreateFeatureOnlineStore(
      google::cloud::aiplatform::v1::CreateFeatureOnlineStoreRequest const&
          request);

  virtual StatusOr<google::longrunning::Operation> CreateFeatureOnlineStore(
      NoAwaitTag,
      google::cloud::aiplatform::v1::CreateFeatureOnlineStoreRequest const&
          request);

  virtual future<StatusOr<google::cloud::aiplatform::v1::FeatureOnlineStore>>
  CreateFeatureOnlineStore(google::longrunning::Operation const& operation);

  virtual StatusOr<google::cloud::aiplatform::v1::FeatureOnlineStore>
  GetFeatureOnlineStore(
      google::cloud::aiplatform::v1::GetFeatureOnlineStoreRequest const&
          request);

  virtual StreamRange<google::cloud::aiplatform::v1::FeatureOnlineStore>
  ListFeatureOnlineStores(
      google::cloud::aiplatform::v1::ListFeatureOnlineStoresRequest request);

  virtual future<StatusOr<google::cloud::aiplatform::v1::FeatureOnlineStore>>
  UpdateFeatureOnlineStore(
      google::cloud::aiplatform::v1::UpdateFeatureOnlineStoreRequest const&
          request);

  virtual StatusOr<google::longrunning::Operation> UpdateFeatureOnlineStore(
      NoAwaitTag,
      google::cloud::aiplatform::v1::UpdateFeatureOnlineStoreRequest const&
          request);

  virtual future<StatusOr<google::cloud::aiplatform::v1::FeatureOnlineStore>>
  UpdateFeatureOnlineStore(google::longrunning::Operation const& operation);

  virtual future<
      StatusOr<google::cloud::aiplatform::v1::DeleteOperationMetadata>>
  DeleteFeatureOnlineStore(
      google::cloud::aiplatform::v1::DeleteFeatureOnlineStoreRequest const&
          request);

  virtual StatusOr<google::longrunning::Operation> DeleteFeatureOnlineStore(
      NoAwaitTag,
      google::cloud::aiplatform::v1::DeleteFeatureOnlineStoreRequest const&
          request);

  virtual future<
      StatusOr<google::cloud::aiplatform::v1::DeleteOperationMetadata>>
  DeleteFeatureOnlineStore(google::longrunning::Operation const& operation);

  virtual future<StatusOr<google::cloud::aiplatform::v1::FeatureView>>
  CreateFeatureView(
      google::cloud::aiplatform::v1::CreateFeatureViewRequest const& request);

  virtual StatusOr<google::longrunning::Operation> CreateFeatureView(
      NoAwaitTag,
      google::cloud::aiplatform::v1::CreateFeatureViewRequest const& request);

  virtual future<StatusOr<google::cloud::aiplatform::v1::FeatureView>>
  CreateFeatureView(google::longrunning::Operation const& operation);

  virtual StatusOr<google::cloud::aiplatform::v1::FeatureView> GetFeatureView(
      google::cloud::aiplatform::v1::GetFeatureViewRequest const& request);

  virtual StreamRange<google::cloud::aiplatform::v1::FeatureView>
  ListFeatureViews(
      google::cloud::aiplatform::v1::ListFeatureViewsRequest request);

  virtual future<StatusOr<google::cloud::aiplatform::v1::FeatureView>>
  UpdateFeatureView(
      google::cloud::aiplatform::v1::UpdateFeatureViewRequest const& request);

  virtual StatusOr<google::longrunning::Operation> UpdateFeatureView(
      NoAwaitTag,
      google::cloud::aiplatform::v1::UpdateFeatureViewRequest const& request);

  virtual future<StatusOr<google::cloud::aiplatform::v1::FeatureView>>
  UpdateFeatureView(google::longrunning::Operation const& operation);

  virtual future<
      StatusOr<google::cloud::aiplatform::v1::DeleteOperationMetadata>>
  DeleteFeatureView(
      google::cloud::aiplatform::v1::DeleteFeatureViewRequest const& request);

  virtual StatusOr<google::longrunning::Operation> DeleteFeatureView(
      NoAwaitTag,
      google::cloud::aiplatform::v1::DeleteFeatureViewRequest const& request);

  virtual future<
      StatusOr<google::cloud::aiplatform::v1::DeleteOperationMetadata>>
  DeleteFeatureView(google::longrunning::Operation const& operation);

  virtual StatusOr<google::cloud::aiplatform::v1::SyncFeatureViewResponse>
  SyncFeatureView(
      google::cloud::aiplatform::v1::SyncFeatureViewRequest const& request);

  virtual StatusOr<google::cloud::aiplatform::v1::FeatureViewSync>
  GetFeatureViewSync(
      google::cloud::aiplatform::v1::GetFeatureViewSyncRequest const& request);

  virtual StreamRange<google::cloud::aiplatform::v1::FeatureViewSync>
  ListFeatureViewSyncs(
      google::cloud::aiplatform::v1::ListFeatureViewSyncsRequest request);

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
 * A factory function to construct an object of type
 * `FeatureOnlineStoreAdminServiceConnection`.
 *
 * The returned connection object should not be used directly; instead it
 * should be passed as an argument to the constructor of
 * FeatureOnlineStoreAdminServiceClient.
 *
 * The optional @p options argument may be used to configure aspects of the
 * returned `FeatureOnlineStoreAdminServiceConnection`. Expected options are any
 * of the types in the following option lists:
 *
 * - `google::cloud::CommonOptionList`
 * - `google::cloud::GrpcOptionList`
 * - `google::cloud::UnifiedCredentialsOptionList`
 * -
 * `google::cloud::aiplatform_v1::FeatureOnlineStoreAdminServicePolicyOptionList`
 *
 * @note Unexpected options will be ignored. To log unexpected options instead,
 *     set `GOOGLE_CLOUD_CPP_ENABLE_CLOG=yes` in the environment.
 *
 * @param location Sets the prefix for the default `EndpointOption` value.
 * @param options (optional) Configure the
 * `FeatureOnlineStoreAdminServiceConnection` created by this function.
 */
std::shared_ptr<FeatureOnlineStoreAdminServiceConnection>
MakeFeatureOnlineStoreAdminServiceConnection(std::string const& location,
                                             Options options = {});

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace aiplatform_v1
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_AIPLATFORM_V1_FEATURE_ONLINE_STORE_ADMIN_CONNECTION_H
