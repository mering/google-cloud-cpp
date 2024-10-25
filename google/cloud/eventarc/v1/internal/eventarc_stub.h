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

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_EVENTARC_V1_INTERNAL_EVENTARC_STUB_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_EVENTARC_V1_INTERNAL_EVENTARC_STUB_H

#include "google/cloud/completion_queue.h"
#include "google/cloud/future.h"
#include "google/cloud/options.h"
#include "google/cloud/status_or.h"
#include "google/cloud/version.h"
#include "google/cloud/eventarc/v1/eventarc.grpc.pb.h"
#include "google/cloud/location/locations.grpc.pb.h"
#include "google/iam/v1/iam_policy.grpc.pb.h"
#include "google/longrunning/operations.grpc.pb.h"
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace eventarc_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class EventarcStub {
 public:
  virtual ~EventarcStub() = 0;

  virtual StatusOr<google::cloud::eventarc::v1::Trigger> GetTrigger(
      grpc::ClientContext& context, Options const& options,
      google::cloud::eventarc::v1::GetTriggerRequest const& request) = 0;

  virtual StatusOr<google::cloud::eventarc::v1::ListTriggersResponse>
  ListTriggers(
      grpc::ClientContext& context, Options const& options,
      google::cloud::eventarc::v1::ListTriggersRequest const& request) = 0;

  virtual future<StatusOr<google::longrunning::Operation>> AsyncCreateTrigger(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::eventarc::v1::CreateTriggerRequest const& request) = 0;

  virtual StatusOr<google::longrunning::Operation> CreateTrigger(
      grpc::ClientContext& context, Options options,
      google::cloud::eventarc::v1::CreateTriggerRequest const& request) = 0;

  virtual future<StatusOr<google::longrunning::Operation>> AsyncUpdateTrigger(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::eventarc::v1::UpdateTriggerRequest const& request) = 0;

  virtual StatusOr<google::longrunning::Operation> UpdateTrigger(
      grpc::ClientContext& context, Options options,
      google::cloud::eventarc::v1::UpdateTriggerRequest const& request) = 0;

  virtual future<StatusOr<google::longrunning::Operation>> AsyncDeleteTrigger(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::eventarc::v1::DeleteTriggerRequest const& request) = 0;

  virtual StatusOr<google::longrunning::Operation> DeleteTrigger(
      grpc::ClientContext& context, Options options,
      google::cloud::eventarc::v1::DeleteTriggerRequest const& request) = 0;

  virtual StatusOr<google::cloud::eventarc::v1::Channel> GetChannel(
      grpc::ClientContext& context, Options const& options,
      google::cloud::eventarc::v1::GetChannelRequest const& request) = 0;

  virtual StatusOr<google::cloud::eventarc::v1::ListChannelsResponse>
  ListChannels(
      grpc::ClientContext& context, Options const& options,
      google::cloud::eventarc::v1::ListChannelsRequest const& request) = 0;

  virtual future<StatusOr<google::longrunning::Operation>> AsyncCreateChannel(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::eventarc::v1::CreateChannelRequest const& request) = 0;

  virtual StatusOr<google::longrunning::Operation> CreateChannel(
      grpc::ClientContext& context, Options options,
      google::cloud::eventarc::v1::CreateChannelRequest const& request) = 0;

  virtual future<StatusOr<google::longrunning::Operation>> AsyncUpdateChannel(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::eventarc::v1::UpdateChannelRequest const& request) = 0;

  virtual StatusOr<google::longrunning::Operation> UpdateChannel(
      grpc::ClientContext& context, Options options,
      google::cloud::eventarc::v1::UpdateChannelRequest const& request) = 0;

  virtual future<StatusOr<google::longrunning::Operation>> AsyncDeleteChannel(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::eventarc::v1::DeleteChannelRequest const& request) = 0;

  virtual StatusOr<google::longrunning::Operation> DeleteChannel(
      grpc::ClientContext& context, Options options,
      google::cloud::eventarc::v1::DeleteChannelRequest const& request) = 0;

  virtual StatusOr<google::cloud::eventarc::v1::Provider> GetProvider(
      grpc::ClientContext& context, Options const& options,
      google::cloud::eventarc::v1::GetProviderRequest const& request) = 0;

  virtual StatusOr<google::cloud::eventarc::v1::ListProvidersResponse>
  ListProviders(
      grpc::ClientContext& context, Options const& options,
      google::cloud::eventarc::v1::ListProvidersRequest const& request) = 0;

  virtual StatusOr<google::cloud::eventarc::v1::ChannelConnection>
  GetChannelConnection(
      grpc::ClientContext& context, Options const& options,
      google::cloud::eventarc::v1::GetChannelConnectionRequest const&
          request) = 0;

  virtual StatusOr<google::cloud::eventarc::v1::ListChannelConnectionsResponse>
  ListChannelConnections(
      grpc::ClientContext& context, Options const& options,
      google::cloud::eventarc::v1::ListChannelConnectionsRequest const&
          request) = 0;

  virtual future<StatusOr<google::longrunning::Operation>>
  AsyncCreateChannelConnection(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::eventarc::v1::CreateChannelConnectionRequest const&
          request) = 0;

  virtual StatusOr<google::longrunning::Operation> CreateChannelConnection(
      grpc::ClientContext& context, Options options,
      google::cloud::eventarc::v1::CreateChannelConnectionRequest const&
          request) = 0;

  virtual future<StatusOr<google::longrunning::Operation>>
  AsyncDeleteChannelConnection(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::eventarc::v1::DeleteChannelConnectionRequest const&
          request) = 0;

  virtual StatusOr<google::longrunning::Operation> DeleteChannelConnection(
      grpc::ClientContext& context, Options options,
      google::cloud::eventarc::v1::DeleteChannelConnectionRequest const&
          request) = 0;

  virtual StatusOr<google::cloud::eventarc::v1::GoogleChannelConfig>
  GetGoogleChannelConfig(
      grpc::ClientContext& context, Options const& options,
      google::cloud::eventarc::v1::GetGoogleChannelConfigRequest const&
          request) = 0;

  virtual StatusOr<google::cloud::eventarc::v1::GoogleChannelConfig>
  UpdateGoogleChannelConfig(
      grpc::ClientContext& context, Options const& options,
      google::cloud::eventarc::v1::UpdateGoogleChannelConfigRequest const&
          request) = 0;

  virtual StatusOr<google::cloud::location::ListLocationsResponse>
  ListLocations(
      grpc::ClientContext& context, Options const& options,
      google::cloud::location::ListLocationsRequest const& request) = 0;

  virtual StatusOr<google::cloud::location::Location> GetLocation(
      grpc::ClientContext& context, Options const& options,
      google::cloud::location::GetLocationRequest const& request) = 0;

  virtual StatusOr<google::iam::v1::Policy> SetIamPolicy(
      grpc::ClientContext& context, Options const& options,
      google::iam::v1::SetIamPolicyRequest const& request) = 0;

  virtual StatusOr<google::iam::v1::Policy> GetIamPolicy(
      grpc::ClientContext& context, Options const& options,
      google::iam::v1::GetIamPolicyRequest const& request) = 0;

  virtual StatusOr<google::iam::v1::TestIamPermissionsResponse>
  TestIamPermissions(
      grpc::ClientContext& context, Options const& options,
      google::iam::v1::TestIamPermissionsRequest const& request) = 0;

  virtual StatusOr<google::longrunning::ListOperationsResponse> ListOperations(
      grpc::ClientContext& context, Options const& options,
      google::longrunning::ListOperationsRequest const& request) = 0;

  virtual StatusOr<google::longrunning::Operation> GetOperation(
      grpc::ClientContext& context, Options const& options,
      google::longrunning::GetOperationRequest const& request) = 0;

  virtual Status DeleteOperation(
      grpc::ClientContext& context, Options const& options,
      google::longrunning::DeleteOperationRequest const& request) = 0;

  virtual Status CancelOperation(
      grpc::ClientContext& context, Options const& options,
      google::longrunning::CancelOperationRequest const& request) = 0;

  virtual future<StatusOr<google::longrunning::Operation>> AsyncGetOperation(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::longrunning::GetOperationRequest const& request) = 0;

  virtual future<Status> AsyncCancelOperation(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::longrunning::CancelOperationRequest const& request) = 0;
};

class DefaultEventarcStub : public EventarcStub {
 public:
  DefaultEventarcStub(
      std::unique_ptr<google::cloud::eventarc::v1::Eventarc::StubInterface>
          grpc_stub,
      std::unique_ptr<google::longrunning::Operations::StubInterface>
          operations_stub,
      std::unique_ptr<google::iam::v1::IAMPolicy::StubInterface> iampolicy_stub,
      std::unique_ptr<google::cloud::location::Locations::StubInterface>
          locations_stub,
      std::unique_ptr<google::longrunning::Operations::StubInterface>
          operations)
      : grpc_stub_(std::move(grpc_stub)),
        operations_stub_(std::move(operations_stub)),
        iampolicy_stub_(std::move(iampolicy_stub)),
        locations_stub_(std::move(locations_stub)),
        operations_(std::move(operations)) {}

  StatusOr<google::cloud::eventarc::v1::Trigger> GetTrigger(
      grpc::ClientContext& context, Options const& options,
      google::cloud::eventarc::v1::GetTriggerRequest const& request) override;

  StatusOr<google::cloud::eventarc::v1::ListTriggersResponse> ListTriggers(
      grpc::ClientContext& context, Options const& options,
      google::cloud::eventarc::v1::ListTriggersRequest const& request) override;

  future<StatusOr<google::longrunning::Operation>> AsyncCreateTrigger(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::eventarc::v1::CreateTriggerRequest const& request)
      override;

  StatusOr<google::longrunning::Operation> CreateTrigger(
      grpc::ClientContext& context, Options options,
      google::cloud::eventarc::v1::CreateTriggerRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncUpdateTrigger(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::eventarc::v1::UpdateTriggerRequest const& request)
      override;

  StatusOr<google::longrunning::Operation> UpdateTrigger(
      grpc::ClientContext& context, Options options,
      google::cloud::eventarc::v1::UpdateTriggerRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncDeleteTrigger(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::eventarc::v1::DeleteTriggerRequest const& request)
      override;

  StatusOr<google::longrunning::Operation> DeleteTrigger(
      grpc::ClientContext& context, Options options,
      google::cloud::eventarc::v1::DeleteTriggerRequest const& request)
      override;

  StatusOr<google::cloud::eventarc::v1::Channel> GetChannel(
      grpc::ClientContext& context, Options const& options,
      google::cloud::eventarc::v1::GetChannelRequest const& request) override;

  StatusOr<google::cloud::eventarc::v1::ListChannelsResponse> ListChannels(
      grpc::ClientContext& context, Options const& options,
      google::cloud::eventarc::v1::ListChannelsRequest const& request) override;

  future<StatusOr<google::longrunning::Operation>> AsyncCreateChannel(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::eventarc::v1::CreateChannelRequest const& request)
      override;

  StatusOr<google::longrunning::Operation> CreateChannel(
      grpc::ClientContext& context, Options options,
      google::cloud::eventarc::v1::CreateChannelRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncUpdateChannel(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::eventarc::v1::UpdateChannelRequest const& request)
      override;

  StatusOr<google::longrunning::Operation> UpdateChannel(
      grpc::ClientContext& context, Options options,
      google::cloud::eventarc::v1::UpdateChannelRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncDeleteChannel(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::eventarc::v1::DeleteChannelRequest const& request)
      override;

  StatusOr<google::longrunning::Operation> DeleteChannel(
      grpc::ClientContext& context, Options options,
      google::cloud::eventarc::v1::DeleteChannelRequest const& request)
      override;

  StatusOr<google::cloud::eventarc::v1::Provider> GetProvider(
      grpc::ClientContext& context, Options const& options,
      google::cloud::eventarc::v1::GetProviderRequest const& request) override;

  StatusOr<google::cloud::eventarc::v1::ListProvidersResponse> ListProviders(
      grpc::ClientContext& context, Options const& options,
      google::cloud::eventarc::v1::ListProvidersRequest const& request)
      override;

  StatusOr<google::cloud::eventarc::v1::ChannelConnection> GetChannelConnection(
      grpc::ClientContext& context, Options const& options,
      google::cloud::eventarc::v1::GetChannelConnectionRequest const& request)
      override;

  StatusOr<google::cloud::eventarc::v1::ListChannelConnectionsResponse>
  ListChannelConnections(
      grpc::ClientContext& context, Options const& options,
      google::cloud::eventarc::v1::ListChannelConnectionsRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncCreateChannelConnection(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::eventarc::v1::CreateChannelConnectionRequest const&
          request) override;

  StatusOr<google::longrunning::Operation> CreateChannelConnection(
      grpc::ClientContext& context, Options options,
      google::cloud::eventarc::v1::CreateChannelConnectionRequest const&
          request) override;

  future<StatusOr<google::longrunning::Operation>> AsyncDeleteChannelConnection(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::eventarc::v1::DeleteChannelConnectionRequest const&
          request) override;

  StatusOr<google::longrunning::Operation> DeleteChannelConnection(
      grpc::ClientContext& context, Options options,
      google::cloud::eventarc::v1::DeleteChannelConnectionRequest const&
          request) override;

  StatusOr<google::cloud::eventarc::v1::GoogleChannelConfig>
  GetGoogleChannelConfig(
      grpc::ClientContext& context, Options const& options,
      google::cloud::eventarc::v1::GetGoogleChannelConfigRequest const& request)
      override;

  StatusOr<google::cloud::eventarc::v1::GoogleChannelConfig>
  UpdateGoogleChannelConfig(
      grpc::ClientContext& context, Options const& options,
      google::cloud::eventarc::v1::UpdateGoogleChannelConfigRequest const&
          request) override;

  StatusOr<google::cloud::location::ListLocationsResponse> ListLocations(
      grpc::ClientContext& context, Options const& options,
      google::cloud::location::ListLocationsRequest const& request) override;

  StatusOr<google::cloud::location::Location> GetLocation(
      grpc::ClientContext& context, Options const& options,
      google::cloud::location::GetLocationRequest const& request) override;

  StatusOr<google::iam::v1::Policy> SetIamPolicy(
      grpc::ClientContext& context, Options const& options,
      google::iam::v1::SetIamPolicyRequest const& request) override;

  StatusOr<google::iam::v1::Policy> GetIamPolicy(
      grpc::ClientContext& context, Options const& options,
      google::iam::v1::GetIamPolicyRequest const& request) override;

  StatusOr<google::iam::v1::TestIamPermissionsResponse> TestIamPermissions(
      grpc::ClientContext& context, Options const& options,
      google::iam::v1::TestIamPermissionsRequest const& request) override;

  StatusOr<google::longrunning::ListOperationsResponse> ListOperations(
      grpc::ClientContext& context, Options const& options,
      google::longrunning::ListOperationsRequest const& request) override;

  StatusOr<google::longrunning::Operation> GetOperation(
      grpc::ClientContext& context, Options const& options,
      google::longrunning::GetOperationRequest const& request) override;

  Status DeleteOperation(
      grpc::ClientContext& context, Options const& options,
      google::longrunning::DeleteOperationRequest const& request) override;

  Status CancelOperation(
      grpc::ClientContext& context, Options const& options,
      google::longrunning::CancelOperationRequest const& request) override;

  future<StatusOr<google::longrunning::Operation>> AsyncGetOperation(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::longrunning::GetOperationRequest const& request) override;

  future<Status> AsyncCancelOperation(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::longrunning::CancelOperationRequest const& request) override;

 private:
  std::unique_ptr<google::cloud::eventarc::v1::Eventarc::StubInterface>
      grpc_stub_;
  std::unique_ptr<google::longrunning::Operations::StubInterface>
      operations_stub_;
  std::unique_ptr<google::iam::v1::IAMPolicy::StubInterface> iampolicy_stub_;
  std::unique_ptr<google::cloud::location::Locations::StubInterface>
      locations_stub_;
  std::unique_ptr<google::longrunning::Operations::StubInterface> operations_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace eventarc_v1_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_EVENTARC_V1_INTERNAL_EVENTARC_STUB_H
