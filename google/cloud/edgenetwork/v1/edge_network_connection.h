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
// source: google/cloud/edgenetwork/v1/service.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_EDGENETWORK_V1_EDGE_NETWORK_CONNECTION_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_EDGENETWORK_V1_EDGE_NETWORK_CONNECTION_H

#include "google/cloud/edgenetwork/v1/edge_network_connection_idempotency_policy.h"
#include "google/cloud/edgenetwork/v1/internal/edge_network_retry_traits.h"
#include "google/cloud/edgenetwork/v1/service.pb.h"
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
namespace edgenetwork_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

/// The retry policy for `EdgeNetworkConnection`.
class EdgeNetworkRetryPolicy : public ::google::cloud::RetryPolicy {
 public:
  /// Creates a new instance of the policy, reset to the initial state.
  virtual std::unique_ptr<EdgeNetworkRetryPolicy> clone() const = 0;
};

/**
 * A retry policy for `EdgeNetworkConnection` based on counting errors.
 *
 * This policy stops retrying if:
 * - An RPC returns a non-transient error.
 * - More than a prescribed number of transient failures is detected.
 *
 * In this class the following status codes are treated as transient errors:
 * - [`kUnavailable`](@ref google::cloud::StatusCode)
 */
class EdgeNetworkLimitedErrorCountRetryPolicy : public EdgeNetworkRetryPolicy {
 public:
  /**
   * Create an instance that tolerates up to @p maximum_failures transient
   * errors.
   *
   * @note Disable the retry loop by providing an instance of this policy with
   *     @p maximum_failures == 0.
   */
  explicit EdgeNetworkLimitedErrorCountRetryPolicy(int maximum_failures)
      : impl_(maximum_failures) {}

  EdgeNetworkLimitedErrorCountRetryPolicy(
      EdgeNetworkLimitedErrorCountRetryPolicy&& rhs) noexcept
      : EdgeNetworkLimitedErrorCountRetryPolicy(rhs.maximum_failures()) {}
  EdgeNetworkLimitedErrorCountRetryPolicy(
      EdgeNetworkLimitedErrorCountRetryPolicy const& rhs) noexcept
      : EdgeNetworkLimitedErrorCountRetryPolicy(rhs.maximum_failures()) {}

  int maximum_failures() const { return impl_.maximum_failures(); }

  bool OnFailure(Status const& status) override {
    return impl_.OnFailure(status);
  }
  bool IsExhausted() const override { return impl_.IsExhausted(); }
  bool IsPermanentFailure(Status const& status) const override {
    return impl_.IsPermanentFailure(status);
  }
  std::unique_ptr<EdgeNetworkRetryPolicy> clone() const override {
    return std::make_unique<EdgeNetworkLimitedErrorCountRetryPolicy>(
        maximum_failures());
  }

  // This is provided only for backwards compatibility.
  using BaseType = EdgeNetworkRetryPolicy;

 private:
  google::cloud::internal::LimitedErrorCountRetryPolicy<
      edgenetwork_v1_internal::EdgeNetworkRetryTraits>
      impl_;
};

/**
 * A retry policy for `EdgeNetworkConnection` based on elapsed time.
 *
 * This policy stops retrying if:
 * - An RPC returns a non-transient error.
 * - The elapsed time in the retry loop exceeds a prescribed duration.
 *
 * In this class the following status codes are treated as transient errors:
 * - [`kUnavailable`](@ref google::cloud::StatusCode)
 */
class EdgeNetworkLimitedTimeRetryPolicy : public EdgeNetworkRetryPolicy {
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
  explicit EdgeNetworkLimitedTimeRetryPolicy(
      std::chrono::duration<DurationRep, DurationPeriod> maximum_duration)
      : impl_(maximum_duration) {}

  EdgeNetworkLimitedTimeRetryPolicy(
      EdgeNetworkLimitedTimeRetryPolicy&& rhs) noexcept
      : EdgeNetworkLimitedTimeRetryPolicy(rhs.maximum_duration()) {}
  EdgeNetworkLimitedTimeRetryPolicy(
      EdgeNetworkLimitedTimeRetryPolicy const& rhs) noexcept
      : EdgeNetworkLimitedTimeRetryPolicy(rhs.maximum_duration()) {}

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
  std::unique_ptr<EdgeNetworkRetryPolicy> clone() const override {
    return std::make_unique<EdgeNetworkLimitedTimeRetryPolicy>(
        maximum_duration());
  }

  // This is provided only for backwards compatibility.
  using BaseType = EdgeNetworkRetryPolicy;

 private:
  google::cloud::internal::LimitedTimeRetryPolicy<
      edgenetwork_v1_internal::EdgeNetworkRetryTraits>
      impl_;
};

/**
 * The `EdgeNetworkConnection` object for `EdgeNetworkClient`.
 *
 * This interface defines virtual methods for each of the user-facing overload
 * sets in `EdgeNetworkClient`. This allows users to inject custom behavior
 * (e.g., with a Google Mock object) when writing tests that use objects of type
 * `EdgeNetworkClient`.
 *
 * To create a concrete instance, see `MakeEdgeNetworkConnection()`.
 *
 * For mocking, see `edgenetwork_v1_mocks::MockEdgeNetworkConnection`.
 */
class EdgeNetworkConnection {
 public:
  virtual ~EdgeNetworkConnection() = 0;

  virtual Options options() { return Options{}; }

  virtual StatusOr<google::cloud::edgenetwork::v1::InitializeZoneResponse>
  InitializeZone(
      google::cloud::edgenetwork::v1::InitializeZoneRequest const& request);

  virtual StreamRange<google::cloud::edgenetwork::v1::Zone> ListZones(
      google::cloud::edgenetwork::v1::ListZonesRequest request);

  virtual StatusOr<google::cloud::edgenetwork::v1::Zone> GetZone(
      google::cloud::edgenetwork::v1::GetZoneRequest const& request);

  virtual StreamRange<google::cloud::edgenetwork::v1::Network> ListNetworks(
      google::cloud::edgenetwork::v1::ListNetworksRequest request);

  virtual StatusOr<google::cloud::edgenetwork::v1::Network> GetNetwork(
      google::cloud::edgenetwork::v1::GetNetworkRequest const& request);

  virtual StatusOr<google::cloud::edgenetwork::v1::DiagnoseNetworkResponse>
  DiagnoseNetwork(
      google::cloud::edgenetwork::v1::DiagnoseNetworkRequest const& request);

  virtual future<StatusOr<google::cloud::edgenetwork::v1::Network>>
  CreateNetwork(
      google::cloud::edgenetwork::v1::CreateNetworkRequest const& request);

  virtual StatusOr<google::longrunning::Operation> CreateNetwork(
      NoAwaitTag,
      google::cloud::edgenetwork::v1::CreateNetworkRequest const& request);

  virtual future<StatusOr<google::cloud::edgenetwork::v1::Network>>
  CreateNetwork(google::longrunning::Operation const& operation);

  virtual future<StatusOr<google::cloud::edgenetwork::v1::OperationMetadata>>
  DeleteNetwork(
      google::cloud::edgenetwork::v1::DeleteNetworkRequest const& request);

  virtual StatusOr<google::longrunning::Operation> DeleteNetwork(
      NoAwaitTag,
      google::cloud::edgenetwork::v1::DeleteNetworkRequest const& request);

  virtual future<StatusOr<google::cloud::edgenetwork::v1::OperationMetadata>>
  DeleteNetwork(google::longrunning::Operation const& operation);

  virtual StreamRange<google::cloud::edgenetwork::v1::Subnet> ListSubnets(
      google::cloud::edgenetwork::v1::ListSubnetsRequest request);

  virtual StatusOr<google::cloud::edgenetwork::v1::Subnet> GetSubnet(
      google::cloud::edgenetwork::v1::GetSubnetRequest const& request);

  virtual future<StatusOr<google::cloud::edgenetwork::v1::Subnet>> CreateSubnet(
      google::cloud::edgenetwork::v1::CreateSubnetRequest const& request);

  virtual StatusOr<google::longrunning::Operation> CreateSubnet(
      NoAwaitTag,
      google::cloud::edgenetwork::v1::CreateSubnetRequest const& request);

  virtual future<StatusOr<google::cloud::edgenetwork::v1::Subnet>> CreateSubnet(
      google::longrunning::Operation const& operation);

  virtual future<StatusOr<google::cloud::edgenetwork::v1::Subnet>> UpdateSubnet(
      google::cloud::edgenetwork::v1::UpdateSubnetRequest const& request);

  virtual StatusOr<google::longrunning::Operation> UpdateSubnet(
      NoAwaitTag,
      google::cloud::edgenetwork::v1::UpdateSubnetRequest const& request);

  virtual future<StatusOr<google::cloud::edgenetwork::v1::Subnet>> UpdateSubnet(
      google::longrunning::Operation const& operation);

  virtual future<StatusOr<google::cloud::edgenetwork::v1::OperationMetadata>>
  DeleteSubnet(
      google::cloud::edgenetwork::v1::DeleteSubnetRequest const& request);

  virtual StatusOr<google::longrunning::Operation> DeleteSubnet(
      NoAwaitTag,
      google::cloud::edgenetwork::v1::DeleteSubnetRequest const& request);

  virtual future<StatusOr<google::cloud::edgenetwork::v1::OperationMetadata>>
  DeleteSubnet(google::longrunning::Operation const& operation);

  virtual StreamRange<google::cloud::edgenetwork::v1::Interconnect>
  ListInterconnects(
      google::cloud::edgenetwork::v1::ListInterconnectsRequest request);

  virtual StatusOr<google::cloud::edgenetwork::v1::Interconnect>
  GetInterconnect(
      google::cloud::edgenetwork::v1::GetInterconnectRequest const& request);

  virtual StatusOr<google::cloud::edgenetwork::v1::DiagnoseInterconnectResponse>
  DiagnoseInterconnect(
      google::cloud::edgenetwork::v1::DiagnoseInterconnectRequest const&
          request);

  virtual StreamRange<google::cloud::edgenetwork::v1::InterconnectAttachment>
  ListInterconnectAttachments(
      google::cloud::edgenetwork::v1::ListInterconnectAttachmentsRequest
          request);

  virtual StatusOr<google::cloud::edgenetwork::v1::InterconnectAttachment>
  GetInterconnectAttachment(
      google::cloud::edgenetwork::v1::GetInterconnectAttachmentRequest const&
          request);

  virtual future<
      StatusOr<google::cloud::edgenetwork::v1::InterconnectAttachment>>
  CreateInterconnectAttachment(
      google::cloud::edgenetwork::v1::CreateInterconnectAttachmentRequest const&
          request);

  virtual StatusOr<google::longrunning::Operation> CreateInterconnectAttachment(
      NoAwaitTag,
      google::cloud::edgenetwork::v1::CreateInterconnectAttachmentRequest const&
          request);

  virtual future<
      StatusOr<google::cloud::edgenetwork::v1::InterconnectAttachment>>
  CreateInterconnectAttachment(google::longrunning::Operation const& operation);

  virtual future<StatusOr<google::cloud::edgenetwork::v1::OperationMetadata>>
  DeleteInterconnectAttachment(
      google::cloud::edgenetwork::v1::DeleteInterconnectAttachmentRequest const&
          request);

  virtual StatusOr<google::longrunning::Operation> DeleteInterconnectAttachment(
      NoAwaitTag,
      google::cloud::edgenetwork::v1::DeleteInterconnectAttachmentRequest const&
          request);

  virtual future<StatusOr<google::cloud::edgenetwork::v1::OperationMetadata>>
  DeleteInterconnectAttachment(google::longrunning::Operation const& operation);

  virtual StreamRange<google::cloud::edgenetwork::v1::Router> ListRouters(
      google::cloud::edgenetwork::v1::ListRoutersRequest request);

  virtual StatusOr<google::cloud::edgenetwork::v1::Router> GetRouter(
      google::cloud::edgenetwork::v1::GetRouterRequest const& request);

  virtual StatusOr<google::cloud::edgenetwork::v1::DiagnoseRouterResponse>
  DiagnoseRouter(
      google::cloud::edgenetwork::v1::DiagnoseRouterRequest const& request);

  virtual future<StatusOr<google::cloud::edgenetwork::v1::Router>> CreateRouter(
      google::cloud::edgenetwork::v1::CreateRouterRequest const& request);

  virtual StatusOr<google::longrunning::Operation> CreateRouter(
      NoAwaitTag,
      google::cloud::edgenetwork::v1::CreateRouterRequest const& request);

  virtual future<StatusOr<google::cloud::edgenetwork::v1::Router>> CreateRouter(
      google::longrunning::Operation const& operation);

  virtual future<StatusOr<google::cloud::edgenetwork::v1::Router>> UpdateRouter(
      google::cloud::edgenetwork::v1::UpdateRouterRequest const& request);

  virtual StatusOr<google::longrunning::Operation> UpdateRouter(
      NoAwaitTag,
      google::cloud::edgenetwork::v1::UpdateRouterRequest const& request);

  virtual future<StatusOr<google::cloud::edgenetwork::v1::Router>> UpdateRouter(
      google::longrunning::Operation const& operation);

  virtual future<StatusOr<google::cloud::edgenetwork::v1::OperationMetadata>>
  DeleteRouter(
      google::cloud::edgenetwork::v1::DeleteRouterRequest const& request);

  virtual StatusOr<google::longrunning::Operation> DeleteRouter(
      NoAwaitTag,
      google::cloud::edgenetwork::v1::DeleteRouterRequest const& request);

  virtual future<StatusOr<google::cloud::edgenetwork::v1::OperationMetadata>>
  DeleteRouter(google::longrunning::Operation const& operation);

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
 * A factory function to construct an object of type `EdgeNetworkConnection`.
 *
 * The returned connection object should not be used directly; instead it
 * should be passed as an argument to the constructor of EdgeNetworkClient.
 *
 * The optional @p options argument may be used to configure aspects of the
 * returned `EdgeNetworkConnection`. Expected options are any of the types in
 * the following option lists:
 *
 * - `google::cloud::CommonOptionList`
 * - `google::cloud::GrpcOptionList`
 * - `google::cloud::UnifiedCredentialsOptionList`
 * - `google::cloud::edgenetwork_v1::EdgeNetworkPolicyOptionList`
 *
 * @note Unexpected options will be ignored. To log unexpected options instead,
 *     set `GOOGLE_CLOUD_CPP_ENABLE_CLOG=yes` in the environment.
 *
 * @param options (optional) Configure the `EdgeNetworkConnection` created by
 * this function.
 */
std::shared_ptr<EdgeNetworkConnection> MakeEdgeNetworkConnection(
    Options options = {});

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace edgenetwork_v1
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_EDGENETWORK_V1_EDGE_NETWORK_CONNECTION_H
