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
// source: google/cloud/aiplatform/v1/featurestore_service.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_AIPLATFORM_V1_FEATURESTORE_CONNECTION_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_AIPLATFORM_V1_FEATURESTORE_CONNECTION_H

#include "google/cloud/aiplatform/v1/featurestore_connection_idempotency_policy.h"
#include "google/cloud/aiplatform/v1/featurestore_service.pb.h"
#include "google/cloud/aiplatform/v1/internal/featurestore_retry_traits.h"
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

/// The retry policy for `FeaturestoreServiceConnection`.
class FeaturestoreServiceRetryPolicy : public ::google::cloud::RetryPolicy {
 public:
  /// Creates a new instance of the policy, reset to the initial state.
  virtual std::unique_ptr<FeaturestoreServiceRetryPolicy> clone() const = 0;
};

/**
 * A retry policy for `FeaturestoreServiceConnection` based on counting errors.
 *
 * This policy stops retrying if:
 * - An RPC returns a non-transient error.
 * - More than a prescribed number of transient failures is detected.
 *
 * In this class the following status codes are treated as transient errors:
 * - [`kUnavailable`](@ref google::cloud::StatusCode)
 */
class FeaturestoreServiceLimitedErrorCountRetryPolicy
    : public FeaturestoreServiceRetryPolicy {
 public:
  /**
   * Create an instance that tolerates up to @p maximum_failures transient
   * errors.
   *
   * @note Disable the retry loop by providing an instance of this policy with
   *     @p maximum_failures == 0.
   */
  explicit FeaturestoreServiceLimitedErrorCountRetryPolicy(int maximum_failures)
      : impl_(maximum_failures) {}

  FeaturestoreServiceLimitedErrorCountRetryPolicy(
      FeaturestoreServiceLimitedErrorCountRetryPolicy&& rhs) noexcept
      : FeaturestoreServiceLimitedErrorCountRetryPolicy(
            rhs.maximum_failures()) {}
  FeaturestoreServiceLimitedErrorCountRetryPolicy(
      FeaturestoreServiceLimitedErrorCountRetryPolicy const& rhs) noexcept
      : FeaturestoreServiceLimitedErrorCountRetryPolicy(
            rhs.maximum_failures()) {}

  int maximum_failures() const { return impl_.maximum_failures(); }

  bool OnFailure(Status const& status) override {
    return impl_.OnFailure(status);
  }
  bool IsExhausted() const override { return impl_.IsExhausted(); }
  bool IsPermanentFailure(Status const& status) const override {
    return impl_.IsPermanentFailure(status);
  }
  std::unique_ptr<FeaturestoreServiceRetryPolicy> clone() const override {
    return std::make_unique<FeaturestoreServiceLimitedErrorCountRetryPolicy>(
        maximum_failures());
  }

  // This is provided only for backwards compatibility.
  using BaseType = FeaturestoreServiceRetryPolicy;

 private:
  google::cloud::internal::LimitedErrorCountRetryPolicy<
      aiplatform_v1_internal::FeaturestoreServiceRetryTraits>
      impl_;
};

/**
 * A retry policy for `FeaturestoreServiceConnection` based on elapsed time.
 *
 * This policy stops retrying if:
 * - An RPC returns a non-transient error.
 * - The elapsed time in the retry loop exceeds a prescribed duration.
 *
 * In this class the following status codes are treated as transient errors:
 * - [`kUnavailable`](@ref google::cloud::StatusCode)
 */
class FeaturestoreServiceLimitedTimeRetryPolicy
    : public FeaturestoreServiceRetryPolicy {
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
  explicit FeaturestoreServiceLimitedTimeRetryPolicy(
      std::chrono::duration<DurationRep, DurationPeriod> maximum_duration)
      : impl_(maximum_duration) {}

  FeaturestoreServiceLimitedTimeRetryPolicy(
      FeaturestoreServiceLimitedTimeRetryPolicy&& rhs) noexcept
      : FeaturestoreServiceLimitedTimeRetryPolicy(rhs.maximum_duration()) {}
  FeaturestoreServiceLimitedTimeRetryPolicy(
      FeaturestoreServiceLimitedTimeRetryPolicy const& rhs) noexcept
      : FeaturestoreServiceLimitedTimeRetryPolicy(rhs.maximum_duration()) {}

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
  std::unique_ptr<FeaturestoreServiceRetryPolicy> clone() const override {
    return std::make_unique<FeaturestoreServiceLimitedTimeRetryPolicy>(
        maximum_duration());
  }

  // This is provided only for backwards compatibility.
  using BaseType = FeaturestoreServiceRetryPolicy;

 private:
  google::cloud::internal::LimitedTimeRetryPolicy<
      aiplatform_v1_internal::FeaturestoreServiceRetryTraits>
      impl_;
};

/**
 * The `FeaturestoreServiceConnection` object for `FeaturestoreServiceClient`.
 *
 * This interface defines virtual methods for each of the user-facing overload
 * sets in `FeaturestoreServiceClient`. This allows users to inject custom
 * behavior (e.g., with a Google Mock object) when writing tests that use
 * objects of type `FeaturestoreServiceClient`.
 *
 * To create a concrete instance, see `MakeFeaturestoreServiceConnection()`.
 *
 * For mocking, see `aiplatform_v1_mocks::MockFeaturestoreServiceConnection`.
 */
class FeaturestoreServiceConnection {
 public:
  virtual ~FeaturestoreServiceConnection() = 0;

  virtual Options options() { return Options{}; }

  virtual future<StatusOr<google::cloud::aiplatform::v1::Featurestore>>
  CreateFeaturestore(
      google::cloud::aiplatform::v1::CreateFeaturestoreRequest const& request);

  virtual StatusOr<google::longrunning::Operation> CreateFeaturestore(
      NoAwaitTag,
      google::cloud::aiplatform::v1::CreateFeaturestoreRequest const& request);

  virtual future<StatusOr<google::cloud::aiplatform::v1::Featurestore>>
  CreateFeaturestore(google::longrunning::Operation const& operation);

  virtual StatusOr<google::cloud::aiplatform::v1::Featurestore> GetFeaturestore(
      google::cloud::aiplatform::v1::GetFeaturestoreRequest const& request);

  virtual StreamRange<google::cloud::aiplatform::v1::Featurestore>
  ListFeaturestores(
      google::cloud::aiplatform::v1::ListFeaturestoresRequest request);

  virtual future<StatusOr<google::cloud::aiplatform::v1::Featurestore>>
  UpdateFeaturestore(
      google::cloud::aiplatform::v1::UpdateFeaturestoreRequest const& request);

  virtual StatusOr<google::longrunning::Operation> UpdateFeaturestore(
      NoAwaitTag,
      google::cloud::aiplatform::v1::UpdateFeaturestoreRequest const& request);

  virtual future<StatusOr<google::cloud::aiplatform::v1::Featurestore>>
  UpdateFeaturestore(google::longrunning::Operation const& operation);

  virtual future<
      StatusOr<google::cloud::aiplatform::v1::DeleteOperationMetadata>>
  DeleteFeaturestore(
      google::cloud::aiplatform::v1::DeleteFeaturestoreRequest const& request);

  virtual StatusOr<google::longrunning::Operation> DeleteFeaturestore(
      NoAwaitTag,
      google::cloud::aiplatform::v1::DeleteFeaturestoreRequest const& request);

  virtual future<
      StatusOr<google::cloud::aiplatform::v1::DeleteOperationMetadata>>
  DeleteFeaturestore(google::longrunning::Operation const& operation);

  virtual future<StatusOr<google::cloud::aiplatform::v1::EntityType>>
  CreateEntityType(
      google::cloud::aiplatform::v1::CreateEntityTypeRequest const& request);

  virtual StatusOr<google::longrunning::Operation> CreateEntityType(
      NoAwaitTag,
      google::cloud::aiplatform::v1::CreateEntityTypeRequest const& request);

  virtual future<StatusOr<google::cloud::aiplatform::v1::EntityType>>
  CreateEntityType(google::longrunning::Operation const& operation);

  virtual StatusOr<google::cloud::aiplatform::v1::EntityType> GetEntityType(
      google::cloud::aiplatform::v1::GetEntityTypeRequest const& request);

  virtual StreamRange<google::cloud::aiplatform::v1::EntityType>
  ListEntityTypes(
      google::cloud::aiplatform::v1::ListEntityTypesRequest request);

  virtual StatusOr<google::cloud::aiplatform::v1::EntityType> UpdateEntityType(
      google::cloud::aiplatform::v1::UpdateEntityTypeRequest const& request);

  virtual future<
      StatusOr<google::cloud::aiplatform::v1::DeleteOperationMetadata>>
  DeleteEntityType(
      google::cloud::aiplatform::v1::DeleteEntityTypeRequest const& request);

  virtual StatusOr<google::longrunning::Operation> DeleteEntityType(
      NoAwaitTag,
      google::cloud::aiplatform::v1::DeleteEntityTypeRequest const& request);

  virtual future<
      StatusOr<google::cloud::aiplatform::v1::DeleteOperationMetadata>>
  DeleteEntityType(google::longrunning::Operation const& operation);

  virtual future<StatusOr<google::cloud::aiplatform::v1::Feature>>
  CreateFeature(
      google::cloud::aiplatform::v1::CreateFeatureRequest const& request);

  virtual StatusOr<google::longrunning::Operation> CreateFeature(
      NoAwaitTag,
      google::cloud::aiplatform::v1::CreateFeatureRequest const& request);

  virtual future<StatusOr<google::cloud::aiplatform::v1::Feature>>
  CreateFeature(google::longrunning::Operation const& operation);

  virtual future<
      StatusOr<google::cloud::aiplatform::v1::BatchCreateFeaturesResponse>>
  BatchCreateFeatures(
      google::cloud::aiplatform::v1::BatchCreateFeaturesRequest const& request);

  virtual StatusOr<google::longrunning::Operation> BatchCreateFeatures(
      NoAwaitTag,
      google::cloud::aiplatform::v1::BatchCreateFeaturesRequest const& request);

  virtual future<
      StatusOr<google::cloud::aiplatform::v1::BatchCreateFeaturesResponse>>
  BatchCreateFeatures(google::longrunning::Operation const& operation);

  virtual StatusOr<google::cloud::aiplatform::v1::Feature> GetFeature(
      google::cloud::aiplatform::v1::GetFeatureRequest const& request);

  virtual StreamRange<google::cloud::aiplatform::v1::Feature> ListFeatures(
      google::cloud::aiplatform::v1::ListFeaturesRequest request);

  virtual StatusOr<google::cloud::aiplatform::v1::Feature> UpdateFeature(
      google::cloud::aiplatform::v1::UpdateFeatureRequest const& request);

  virtual future<
      StatusOr<google::cloud::aiplatform::v1::DeleteOperationMetadata>>
  DeleteFeature(
      google::cloud::aiplatform::v1::DeleteFeatureRequest const& request);

  virtual StatusOr<google::longrunning::Operation> DeleteFeature(
      NoAwaitTag,
      google::cloud::aiplatform::v1::DeleteFeatureRequest const& request);

  virtual future<
      StatusOr<google::cloud::aiplatform::v1::DeleteOperationMetadata>>
  DeleteFeature(google::longrunning::Operation const& operation);

  virtual future<
      StatusOr<google::cloud::aiplatform::v1::ImportFeatureValuesResponse>>
  ImportFeatureValues(
      google::cloud::aiplatform::v1::ImportFeatureValuesRequest const& request);

  virtual StatusOr<google::longrunning::Operation> ImportFeatureValues(
      NoAwaitTag,
      google::cloud::aiplatform::v1::ImportFeatureValuesRequest const& request);

  virtual future<
      StatusOr<google::cloud::aiplatform::v1::ImportFeatureValuesResponse>>
  ImportFeatureValues(google::longrunning::Operation const& operation);

  virtual future<
      StatusOr<google::cloud::aiplatform::v1::BatchReadFeatureValuesResponse>>
  BatchReadFeatureValues(
      google::cloud::aiplatform::v1::BatchReadFeatureValuesRequest const&
          request);

  virtual StatusOr<google::longrunning::Operation> BatchReadFeatureValues(
      NoAwaitTag,
      google::cloud::aiplatform::v1::BatchReadFeatureValuesRequest const&
          request);

  virtual future<
      StatusOr<google::cloud::aiplatform::v1::BatchReadFeatureValuesResponse>>
  BatchReadFeatureValues(google::longrunning::Operation const& operation);

  virtual future<
      StatusOr<google::cloud::aiplatform::v1::ExportFeatureValuesResponse>>
  ExportFeatureValues(
      google::cloud::aiplatform::v1::ExportFeatureValuesRequest const& request);

  virtual StatusOr<google::longrunning::Operation> ExportFeatureValues(
      NoAwaitTag,
      google::cloud::aiplatform::v1::ExportFeatureValuesRequest const& request);

  virtual future<
      StatusOr<google::cloud::aiplatform::v1::ExportFeatureValuesResponse>>
  ExportFeatureValues(google::longrunning::Operation const& operation);

  virtual future<
      StatusOr<google::cloud::aiplatform::v1::DeleteFeatureValuesResponse>>
  DeleteFeatureValues(
      google::cloud::aiplatform::v1::DeleteFeatureValuesRequest const& request);

  virtual StatusOr<google::longrunning::Operation> DeleteFeatureValues(
      NoAwaitTag,
      google::cloud::aiplatform::v1::DeleteFeatureValuesRequest const& request);

  virtual future<
      StatusOr<google::cloud::aiplatform::v1::DeleteFeatureValuesResponse>>
  DeleteFeatureValues(google::longrunning::Operation const& operation);

  virtual StreamRange<google::cloud::aiplatform::v1::Feature> SearchFeatures(
      google::cloud::aiplatform::v1::SearchFeaturesRequest request);

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
 * `FeaturestoreServiceConnection`.
 *
 * The returned connection object should not be used directly; instead it
 * should be passed as an argument to the constructor of
 * FeaturestoreServiceClient.
 *
 * The optional @p options argument may be used to configure aspects of the
 * returned `FeaturestoreServiceConnection`. Expected options are any of the
 * types in the following option lists:
 *
 * - `google::cloud::CommonOptionList`
 * - `google::cloud::GrpcOptionList`
 * - `google::cloud::UnifiedCredentialsOptionList`
 * - `google::cloud::aiplatform_v1::FeaturestoreServicePolicyOptionList`
 *
 * @note Unexpected options will be ignored. To log unexpected options instead,
 *     set `GOOGLE_CLOUD_CPP_ENABLE_CLOG=yes` in the environment.
 *
 * @param location Sets the prefix for the default `EndpointOption` value.
 * @param options (optional) Configure the `FeaturestoreServiceConnection`
 * created by this function.
 */
std::shared_ptr<FeaturestoreServiceConnection>
MakeFeaturestoreServiceConnection(std::string const& location,
                                  Options options = {});

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace aiplatform_v1
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_AIPLATFORM_V1_FEATURESTORE_CONNECTION_H
