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
// source: google/cloud/gkehub/v1/service.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_GKEHUB_V1_GKE_HUB_CONNECTION_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_GKEHUB_V1_GKE_HUB_CONNECTION_H

#include "google/cloud/gkehub/v1/gke_hub_connection_idempotency_policy.h"
#include "google/cloud/gkehub/v1/internal/gke_hub_retry_traits.h"
#include "google/cloud/backoff_policy.h"
#include "google/cloud/future.h"
#include "google/cloud/internal/retry_policy_impl.h"
#include "google/cloud/no_await_tag.h"
#include "google/cloud/options.h"
#include "google/cloud/polling_policy.h"
#include "google/cloud/status_or.h"
#include "google/cloud/stream_range.h"
#include "google/cloud/version.h"
#include "google/cloud/gkehub/v1/service.pb.h"
#include "google/longrunning/operations.grpc.pb.h"
#include <memory>

namespace google {
namespace cloud {
namespace gkehub_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

/// The retry policy for `GkeHubConnection`.
class GkeHubRetryPolicy : public ::google::cloud::RetryPolicy {
 public:
  /// Creates a new instance of the policy, reset to the initial state.
  virtual std::unique_ptr<GkeHubRetryPolicy> clone() const = 0;
};

/**
 * A retry policy for `GkeHubConnection` based on counting errors.
 *
 * This policy stops retrying if:
 * - An RPC returns a non-transient error.
 * - More than a prescribed number of transient failures is detected.
 *
 * In this class the following status codes are treated as transient errors:
 * - [`kUnavailable`](@ref google::cloud::StatusCode)
 */
class GkeHubLimitedErrorCountRetryPolicy : public GkeHubRetryPolicy {
 public:
  /**
   * Create an instance that tolerates up to @p maximum_failures transient
   * errors.
   *
   * @note Disable the retry loop by providing an instance of this policy with
   *     @p maximum_failures == 0.
   */
  explicit GkeHubLimitedErrorCountRetryPolicy(int maximum_failures)
      : impl_(maximum_failures) {}

  GkeHubLimitedErrorCountRetryPolicy(
      GkeHubLimitedErrorCountRetryPolicy&& rhs) noexcept
      : GkeHubLimitedErrorCountRetryPolicy(rhs.maximum_failures()) {}
  GkeHubLimitedErrorCountRetryPolicy(
      GkeHubLimitedErrorCountRetryPolicy const& rhs) noexcept
      : GkeHubLimitedErrorCountRetryPolicy(rhs.maximum_failures()) {}

  int maximum_failures() const { return impl_.maximum_failures(); }

  bool OnFailure(Status const& status) override {
    return impl_.OnFailure(status);
  }
  bool IsExhausted() const override { return impl_.IsExhausted(); }
  bool IsPermanentFailure(Status const& status) const override {
    return impl_.IsPermanentFailure(status);
  }
  std::unique_ptr<GkeHubRetryPolicy> clone() const override {
    return std::make_unique<GkeHubLimitedErrorCountRetryPolicy>(
        maximum_failures());
  }

  // This is provided only for backwards compatibility.
  using BaseType = GkeHubRetryPolicy;

 private:
  google::cloud::internal::LimitedErrorCountRetryPolicy<
      gkehub_v1_internal::GkeHubRetryTraits>
      impl_;
};

/**
 * A retry policy for `GkeHubConnection` based on elapsed time.
 *
 * This policy stops retrying if:
 * - An RPC returns a non-transient error.
 * - The elapsed time in the retry loop exceeds a prescribed duration.
 *
 * In this class the following status codes are treated as transient errors:
 * - [`kUnavailable`](@ref google::cloud::StatusCode)
 */
class GkeHubLimitedTimeRetryPolicy : public GkeHubRetryPolicy {
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
  explicit GkeHubLimitedTimeRetryPolicy(
      std::chrono::duration<DurationRep, DurationPeriod> maximum_duration)
      : impl_(maximum_duration) {}

  GkeHubLimitedTimeRetryPolicy(GkeHubLimitedTimeRetryPolicy&& rhs) noexcept
      : GkeHubLimitedTimeRetryPolicy(rhs.maximum_duration()) {}
  GkeHubLimitedTimeRetryPolicy(GkeHubLimitedTimeRetryPolicy const& rhs) noexcept
      : GkeHubLimitedTimeRetryPolicy(rhs.maximum_duration()) {}

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
  std::unique_ptr<GkeHubRetryPolicy> clone() const override {
    return std::make_unique<GkeHubLimitedTimeRetryPolicy>(maximum_duration());
  }

  // This is provided only for backwards compatibility.
  using BaseType = GkeHubRetryPolicy;

 private:
  google::cloud::internal::LimitedTimeRetryPolicy<
      gkehub_v1_internal::GkeHubRetryTraits>
      impl_;
};

/**
 * The `GkeHubConnection` object for `GkeHubClient`.
 *
 * This interface defines virtual methods for each of the user-facing overload
 * sets in `GkeHubClient`. This allows users to inject custom behavior
 * (e.g., with a Google Mock object) when writing tests that use objects of type
 * `GkeHubClient`.
 *
 * To create a concrete instance, see `MakeGkeHubConnection()`.
 *
 * For mocking, see `gkehub_v1_mocks::MockGkeHubConnection`.
 */
class GkeHubConnection {
 public:
  virtual ~GkeHubConnection() = 0;

  virtual Options options() { return Options{}; }

  virtual StreamRange<google::cloud::gkehub::v1::Membership> ListMemberships(
      google::cloud::gkehub::v1::ListMembershipsRequest request);

  virtual StreamRange<google::cloud::gkehub::v1::Feature> ListFeatures(
      google::cloud::gkehub::v1::ListFeaturesRequest request);

  virtual StatusOr<google::cloud::gkehub::v1::Membership> GetMembership(
      google::cloud::gkehub::v1::GetMembershipRequest const& request);

  virtual StatusOr<google::cloud::gkehub::v1::Feature> GetFeature(
      google::cloud::gkehub::v1::GetFeatureRequest const& request);

  virtual future<StatusOr<google::cloud::gkehub::v1::Membership>>
  CreateMembership(
      google::cloud::gkehub::v1::CreateMembershipRequest const& request);

  virtual StatusOr<google::longrunning::Operation> CreateMembership(
      NoAwaitTag,
      google::cloud::gkehub::v1::CreateMembershipRequest const& request);

  virtual future<StatusOr<google::cloud::gkehub::v1::Membership>>
  CreateMembership(google::longrunning::Operation const& operation);

  virtual future<StatusOr<google::cloud::gkehub::v1::Feature>> CreateFeature(
      google::cloud::gkehub::v1::CreateFeatureRequest const& request);

  virtual StatusOr<google::longrunning::Operation> CreateFeature(
      NoAwaitTag,
      google::cloud::gkehub::v1::CreateFeatureRequest const& request);

  virtual future<StatusOr<google::cloud::gkehub::v1::Feature>> CreateFeature(
      google::longrunning::Operation const& operation);

  virtual future<StatusOr<google::cloud::gkehub::v1::OperationMetadata>>
  DeleteMembership(
      google::cloud::gkehub::v1::DeleteMembershipRequest const& request);

  virtual StatusOr<google::longrunning::Operation> DeleteMembership(
      NoAwaitTag,
      google::cloud::gkehub::v1::DeleteMembershipRequest const& request);

  virtual future<StatusOr<google::cloud::gkehub::v1::OperationMetadata>>
  DeleteMembership(google::longrunning::Operation const& operation);

  virtual future<StatusOr<google::cloud::gkehub::v1::OperationMetadata>>
  DeleteFeature(google::cloud::gkehub::v1::DeleteFeatureRequest const& request);

  virtual StatusOr<google::longrunning::Operation> DeleteFeature(
      NoAwaitTag,
      google::cloud::gkehub::v1::DeleteFeatureRequest const& request);

  virtual future<StatusOr<google::cloud::gkehub::v1::OperationMetadata>>
  DeleteFeature(google::longrunning::Operation const& operation);

  virtual future<StatusOr<google::cloud::gkehub::v1::Membership>>
  UpdateMembership(
      google::cloud::gkehub::v1::UpdateMembershipRequest const& request);

  virtual StatusOr<google::longrunning::Operation> UpdateMembership(
      NoAwaitTag,
      google::cloud::gkehub::v1::UpdateMembershipRequest const& request);

  virtual future<StatusOr<google::cloud::gkehub::v1::Membership>>
  UpdateMembership(google::longrunning::Operation const& operation);

  virtual future<StatusOr<google::cloud::gkehub::v1::Feature>> UpdateFeature(
      google::cloud::gkehub::v1::UpdateFeatureRequest const& request);

  virtual StatusOr<google::longrunning::Operation> UpdateFeature(
      NoAwaitTag,
      google::cloud::gkehub::v1::UpdateFeatureRequest const& request);

  virtual future<StatusOr<google::cloud::gkehub::v1::Feature>> UpdateFeature(
      google::longrunning::Operation const& operation);

  virtual StatusOr<google::cloud::gkehub::v1::GenerateConnectManifestResponse>
  GenerateConnectManifest(
      google::cloud::gkehub::v1::GenerateConnectManifestRequest const& request);
};

/**
 * A factory function to construct an object of type `GkeHubConnection`.
 *
 * The returned connection object should not be used directly; instead it
 * should be passed as an argument to the constructor of GkeHubClient.
 *
 * The optional @p options argument may be used to configure aspects of the
 * returned `GkeHubConnection`. Expected options are any of the types in
 * the following option lists:
 *
 * - `google::cloud::CommonOptionList`
 * - `google::cloud::GrpcOptionList`
 * - `google::cloud::UnifiedCredentialsOptionList`
 * - `google::cloud::gkehub_v1::GkeHubPolicyOptionList`
 *
 * @note Unexpected options will be ignored. To log unexpected options instead,
 *     set `GOOGLE_CLOUD_CPP_ENABLE_CLOG=yes` in the environment.
 *
 * @param options (optional) Configure the `GkeHubConnection` created by
 * this function.
 */
std::shared_ptr<GkeHubConnection> MakeGkeHubConnection(Options options = {});

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace gkehub_v1
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_GKEHUB_V1_GKE_HUB_CONNECTION_H
