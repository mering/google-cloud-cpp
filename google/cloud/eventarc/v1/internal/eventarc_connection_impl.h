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
// source: google/cloud/eventarc/v1/eventarc.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_EVENTARC_V1_INTERNAL_EVENTARC_CONNECTION_IMPL_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_EVENTARC_V1_INTERNAL_EVENTARC_CONNECTION_IMPL_H

#include "google/cloud/eventarc/v1/eventarc_connection.h"
#include "google/cloud/eventarc/v1/eventarc_connection_idempotency_policy.h"
#include "google/cloud/eventarc/v1/eventarc_options.h"
#include "google/cloud/eventarc/v1/internal/eventarc_retry_traits.h"
#include "google/cloud/eventarc/v1/internal/eventarc_stub.h"
#include "google/cloud/background_threads.h"
#include "google/cloud/backoff_policy.h"
#include "google/cloud/future.h"
#include "google/cloud/options.h"
#include "google/cloud/polling_policy.h"
#include "google/cloud/status_or.h"
#include "google/cloud/stream_range.h"
#include "google/cloud/version.h"
#include "google/longrunning/operations.grpc.pb.h"
#include <memory>

namespace google {
namespace cloud {
namespace eventarc_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class EventarcConnectionImpl : public eventarc_v1::EventarcConnection {
 public:
  ~EventarcConnectionImpl() override = default;

  EventarcConnectionImpl(
      std::unique_ptr<google::cloud::BackgroundThreads> background,
      std::shared_ptr<eventarc_v1_internal::EventarcStub> stub,
      Options options);

  Options options() override { return options_; }

  StatusOr<google::cloud::eventarc::v1::Trigger> GetTrigger(
      google::cloud::eventarc::v1::GetTriggerRequest const& request) override;

  StreamRange<google::cloud::eventarc::v1::Trigger> ListTriggers(
      google::cloud::eventarc::v1::ListTriggersRequest request) override;

  future<StatusOr<google::cloud::eventarc::v1::Trigger>> CreateTrigger(
      google::cloud::eventarc::v1::CreateTriggerRequest const& request)
      override;

  StatusOr<google::longrunning::Operation> CreateTrigger(
      NoAwaitTag,
      google::cloud::eventarc::v1::CreateTriggerRequest const& request)
      override;

  future<StatusOr<google::cloud::eventarc::v1::Trigger>> CreateTrigger(
      google::longrunning::Operation const& operation) override;

  future<StatusOr<google::cloud::eventarc::v1::Trigger>> UpdateTrigger(
      google::cloud::eventarc::v1::UpdateTriggerRequest const& request)
      override;

  StatusOr<google::longrunning::Operation> UpdateTrigger(
      NoAwaitTag,
      google::cloud::eventarc::v1::UpdateTriggerRequest const& request)
      override;

  future<StatusOr<google::cloud::eventarc::v1::Trigger>> UpdateTrigger(
      google::longrunning::Operation const& operation) override;

  future<StatusOr<google::cloud::eventarc::v1::Trigger>> DeleteTrigger(
      google::cloud::eventarc::v1::DeleteTriggerRequest const& request)
      override;

  StatusOr<google::longrunning::Operation> DeleteTrigger(
      NoAwaitTag,
      google::cloud::eventarc::v1::DeleteTriggerRequest const& request)
      override;

  future<StatusOr<google::cloud::eventarc::v1::Trigger>> DeleteTrigger(
      google::longrunning::Operation const& operation) override;

  StatusOr<google::cloud::eventarc::v1::Channel> GetChannel(
      google::cloud::eventarc::v1::GetChannelRequest const& request) override;

  StreamRange<google::cloud::eventarc::v1::Channel> ListChannels(
      google::cloud::eventarc::v1::ListChannelsRequest request) override;

  future<StatusOr<google::cloud::eventarc::v1::Channel>> CreateChannel(
      google::cloud::eventarc::v1::CreateChannelRequest const& request)
      override;

  StatusOr<google::longrunning::Operation> CreateChannel(
      NoAwaitTag,
      google::cloud::eventarc::v1::CreateChannelRequest const& request)
      override;

  future<StatusOr<google::cloud::eventarc::v1::Channel>> CreateChannel(
      google::longrunning::Operation const& operation) override;

  future<StatusOr<google::cloud::eventarc::v1::Channel>> UpdateChannel(
      google::cloud::eventarc::v1::UpdateChannelRequest const& request)
      override;

  StatusOr<google::longrunning::Operation> UpdateChannel(
      NoAwaitTag,
      google::cloud::eventarc::v1::UpdateChannelRequest const& request)
      override;

  future<StatusOr<google::cloud::eventarc::v1::Channel>> UpdateChannel(
      google::longrunning::Operation const& operation) override;

  future<StatusOr<google::cloud::eventarc::v1::Channel>> DeleteChannel(
      google::cloud::eventarc::v1::DeleteChannelRequest const& request)
      override;

  StatusOr<google::longrunning::Operation> DeleteChannel(
      NoAwaitTag,
      google::cloud::eventarc::v1::DeleteChannelRequest const& request)
      override;

  future<StatusOr<google::cloud::eventarc::v1::Channel>> DeleteChannel(
      google::longrunning::Operation const& operation) override;

  StatusOr<google::cloud::eventarc::v1::Provider> GetProvider(
      google::cloud::eventarc::v1::GetProviderRequest const& request) override;

  StreamRange<google::cloud::eventarc::v1::Provider> ListProviders(
      google::cloud::eventarc::v1::ListProvidersRequest request) override;

  StatusOr<google::cloud::eventarc::v1::ChannelConnection> GetChannelConnection(
      google::cloud::eventarc::v1::GetChannelConnectionRequest const& request)
      override;

  StreamRange<google::cloud::eventarc::v1::ChannelConnection>
  ListChannelConnections(
      google::cloud::eventarc::v1::ListChannelConnectionsRequest request)
      override;

  future<StatusOr<google::cloud::eventarc::v1::ChannelConnection>>
  CreateChannelConnection(
      google::cloud::eventarc::v1::CreateChannelConnectionRequest const&
          request) override;

  StatusOr<google::longrunning::Operation> CreateChannelConnection(
      NoAwaitTag,
      google::cloud::eventarc::v1::CreateChannelConnectionRequest const&
          request) override;

  future<StatusOr<google::cloud::eventarc::v1::ChannelConnection>>
  CreateChannelConnection(
      google::longrunning::Operation const& operation) override;

  future<StatusOr<google::cloud::eventarc::v1::ChannelConnection>>
  DeleteChannelConnection(
      google::cloud::eventarc::v1::DeleteChannelConnectionRequest const&
          request) override;

  StatusOr<google::longrunning::Operation> DeleteChannelConnection(
      NoAwaitTag,
      google::cloud::eventarc::v1::DeleteChannelConnectionRequest const&
          request) override;

  future<StatusOr<google::cloud::eventarc::v1::ChannelConnection>>
  DeleteChannelConnection(
      google::longrunning::Operation const& operation) override;

  StatusOr<google::cloud::eventarc::v1::GoogleChannelConfig>
  GetGoogleChannelConfig(
      google::cloud::eventarc::v1::GetGoogleChannelConfigRequest const& request)
      override;

  StatusOr<google::cloud::eventarc::v1::GoogleChannelConfig>
  UpdateGoogleChannelConfig(
      google::cloud::eventarc::v1::UpdateGoogleChannelConfigRequest const&
          request) override;

  StreamRange<google::cloud::location::Location> ListLocations(
      google::cloud::location::ListLocationsRequest request) override;

  StatusOr<google::cloud::location::Location> GetLocation(
      google::cloud::location::GetLocationRequest const& request) override;

  StatusOr<google::iam::v1::Policy> SetIamPolicy(
      google::iam::v1::SetIamPolicyRequest const& request) override;

  StatusOr<google::iam::v1::Policy> GetIamPolicy(
      google::iam::v1::GetIamPolicyRequest const& request) override;

  StatusOr<google::iam::v1::TestIamPermissionsResponse> TestIamPermissions(
      google::iam::v1::TestIamPermissionsRequest const& request) override;

  StreamRange<google::longrunning::Operation> ListOperations(
      google::longrunning::ListOperationsRequest request) override;

  StatusOr<google::longrunning::Operation> GetOperation(
      google::longrunning::GetOperationRequest const& request) override;

  Status DeleteOperation(
      google::longrunning::DeleteOperationRequest const& request) override;

  Status CancelOperation(
      google::longrunning::CancelOperationRequest const& request) override;

 private:
  std::unique_ptr<google::cloud::BackgroundThreads> background_;
  std::shared_ptr<eventarc_v1_internal::EventarcStub> stub_;
  Options options_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace eventarc_v1_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_EVENTARC_V1_INTERNAL_EVENTARC_CONNECTION_IMPL_H
