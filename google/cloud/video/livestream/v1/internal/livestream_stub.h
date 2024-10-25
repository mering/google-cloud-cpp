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
// source: google/cloud/video/livestream/v1/service.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_VIDEO_LIVESTREAM_V1_INTERNAL_LIVESTREAM_STUB_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_VIDEO_LIVESTREAM_V1_INTERNAL_LIVESTREAM_STUB_H

#include "google/cloud/location/locations.grpc.pb.h"
#include "google/cloud/video/livestream/v1/service.grpc.pb.h"
#include "google/cloud/completion_queue.h"
#include "google/cloud/future.h"
#include "google/cloud/options.h"
#include "google/cloud/status_or.h"
#include "google/cloud/version.h"
#include "google/longrunning/operations.grpc.pb.h"
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace video_livestream_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class LivestreamServiceStub {
 public:
  virtual ~LivestreamServiceStub() = 0;

  virtual future<StatusOr<google::longrunning::Operation>> AsyncCreateChannel(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::video::livestream::v1::CreateChannelRequest const&
          request) = 0;

  virtual StatusOr<google::longrunning::Operation> CreateChannel(
      grpc::ClientContext& context, Options options,
      google::cloud::video::livestream::v1::CreateChannelRequest const&
          request) = 0;

  virtual StatusOr<google::cloud::video::livestream::v1::ListChannelsResponse>
  ListChannels(grpc::ClientContext& context, Options const& options,
               google::cloud::video::livestream::v1::ListChannelsRequest const&
                   request) = 0;

  virtual StatusOr<google::cloud::video::livestream::v1::Channel> GetChannel(
      grpc::ClientContext& context, Options const& options,
      google::cloud::video::livestream::v1::GetChannelRequest const&
          request) = 0;

  virtual future<StatusOr<google::longrunning::Operation>> AsyncDeleteChannel(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::video::livestream::v1::DeleteChannelRequest const&
          request) = 0;

  virtual StatusOr<google::longrunning::Operation> DeleteChannel(
      grpc::ClientContext& context, Options options,
      google::cloud::video::livestream::v1::DeleteChannelRequest const&
          request) = 0;

  virtual future<StatusOr<google::longrunning::Operation>> AsyncUpdateChannel(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::video::livestream::v1::UpdateChannelRequest const&
          request) = 0;

  virtual StatusOr<google::longrunning::Operation> UpdateChannel(
      grpc::ClientContext& context, Options options,
      google::cloud::video::livestream::v1::UpdateChannelRequest const&
          request) = 0;

  virtual future<StatusOr<google::longrunning::Operation>> AsyncStartChannel(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::video::livestream::v1::StartChannelRequest const&
          request) = 0;

  virtual StatusOr<google::longrunning::Operation> StartChannel(
      grpc::ClientContext& context, Options options,
      google::cloud::video::livestream::v1::StartChannelRequest const&
          request) = 0;

  virtual future<StatusOr<google::longrunning::Operation>> AsyncStopChannel(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::video::livestream::v1::StopChannelRequest const&
          request) = 0;

  virtual StatusOr<google::longrunning::Operation> StopChannel(
      grpc::ClientContext& context, Options options,
      google::cloud::video::livestream::v1::StopChannelRequest const&
          request) = 0;

  virtual future<StatusOr<google::longrunning::Operation>> AsyncCreateInput(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::video::livestream::v1::CreateInputRequest const&
          request) = 0;

  virtual StatusOr<google::longrunning::Operation> CreateInput(
      grpc::ClientContext& context, Options options,
      google::cloud::video::livestream::v1::CreateInputRequest const&
          request) = 0;

  virtual StatusOr<google::cloud::video::livestream::v1::ListInputsResponse>
  ListInputs(grpc::ClientContext& context, Options const& options,
             google::cloud::video::livestream::v1::ListInputsRequest const&
                 request) = 0;

  virtual StatusOr<google::cloud::video::livestream::v1::Input> GetInput(
      grpc::ClientContext& context, Options const& options,
      google::cloud::video::livestream::v1::GetInputRequest const& request) = 0;

  virtual future<StatusOr<google::longrunning::Operation>> AsyncDeleteInput(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::video::livestream::v1::DeleteInputRequest const&
          request) = 0;

  virtual StatusOr<google::longrunning::Operation> DeleteInput(
      grpc::ClientContext& context, Options options,
      google::cloud::video::livestream::v1::DeleteInputRequest const&
          request) = 0;

  virtual future<StatusOr<google::longrunning::Operation>> AsyncUpdateInput(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::video::livestream::v1::UpdateInputRequest const&
          request) = 0;

  virtual StatusOr<google::longrunning::Operation> UpdateInput(
      grpc::ClientContext& context, Options options,
      google::cloud::video::livestream::v1::UpdateInputRequest const&
          request) = 0;

  virtual StatusOr<google::cloud::video::livestream::v1::Event> CreateEvent(
      grpc::ClientContext& context, Options const& options,
      google::cloud::video::livestream::v1::CreateEventRequest const&
          request) = 0;

  virtual StatusOr<google::cloud::video::livestream::v1::ListEventsResponse>
  ListEvents(grpc::ClientContext& context, Options const& options,
             google::cloud::video::livestream::v1::ListEventsRequest const&
                 request) = 0;

  virtual StatusOr<google::cloud::video::livestream::v1::Event> GetEvent(
      grpc::ClientContext& context, Options const& options,
      google::cloud::video::livestream::v1::GetEventRequest const& request) = 0;

  virtual Status DeleteEvent(
      grpc::ClientContext& context, Options const& options,
      google::cloud::video::livestream::v1::DeleteEventRequest const&
          request) = 0;

  virtual StatusOr<google::cloud::video::livestream::v1::ListClipsResponse>
  ListClips(grpc::ClientContext& context, Options const& options,
            google::cloud::video::livestream::v1::ListClipsRequest const&
                request) = 0;

  virtual StatusOr<google::cloud::video::livestream::v1::Clip> GetClip(
      grpc::ClientContext& context, Options const& options,
      google::cloud::video::livestream::v1::GetClipRequest const& request) = 0;

  virtual future<StatusOr<google::longrunning::Operation>> AsyncCreateClip(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::video::livestream::v1::CreateClipRequest const&
          request) = 0;

  virtual StatusOr<google::longrunning::Operation> CreateClip(
      grpc::ClientContext& context, Options options,
      google::cloud::video::livestream::v1::CreateClipRequest const&
          request) = 0;

  virtual future<StatusOr<google::longrunning::Operation>> AsyncDeleteClip(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::video::livestream::v1::DeleteClipRequest const&
          request) = 0;

  virtual StatusOr<google::longrunning::Operation> DeleteClip(
      grpc::ClientContext& context, Options options,
      google::cloud::video::livestream::v1::DeleteClipRequest const&
          request) = 0;

  virtual future<StatusOr<google::longrunning::Operation>> AsyncCreateAsset(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::video::livestream::v1::CreateAssetRequest const&
          request) = 0;

  virtual StatusOr<google::longrunning::Operation> CreateAsset(
      grpc::ClientContext& context, Options options,
      google::cloud::video::livestream::v1::CreateAssetRequest const&
          request) = 0;

  virtual future<StatusOr<google::longrunning::Operation>> AsyncDeleteAsset(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::video::livestream::v1::DeleteAssetRequest const&
          request) = 0;

  virtual StatusOr<google::longrunning::Operation> DeleteAsset(
      grpc::ClientContext& context, Options options,
      google::cloud::video::livestream::v1::DeleteAssetRequest const&
          request) = 0;

  virtual StatusOr<google::cloud::video::livestream::v1::Asset> GetAsset(
      grpc::ClientContext& context, Options const& options,
      google::cloud::video::livestream::v1::GetAssetRequest const& request) = 0;

  virtual StatusOr<google::cloud::video::livestream::v1::ListAssetsResponse>
  ListAssets(grpc::ClientContext& context, Options const& options,
             google::cloud::video::livestream::v1::ListAssetsRequest const&
                 request) = 0;

  virtual StatusOr<google::cloud::video::livestream::v1::Pool> GetPool(
      grpc::ClientContext& context, Options const& options,
      google::cloud::video::livestream::v1::GetPoolRequest const& request) = 0;

  virtual future<StatusOr<google::longrunning::Operation>> AsyncUpdatePool(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::video::livestream::v1::UpdatePoolRequest const&
          request) = 0;

  virtual StatusOr<google::longrunning::Operation> UpdatePool(
      grpc::ClientContext& context, Options options,
      google::cloud::video::livestream::v1::UpdatePoolRequest const&
          request) = 0;

  virtual StatusOr<google::cloud::location::ListLocationsResponse>
  ListLocations(
      grpc::ClientContext& context, Options const& options,
      google::cloud::location::ListLocationsRequest const& request) = 0;

  virtual StatusOr<google::cloud::location::Location> GetLocation(
      grpc::ClientContext& context, Options const& options,
      google::cloud::location::GetLocationRequest const& request) = 0;

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

class DefaultLivestreamServiceStub : public LivestreamServiceStub {
 public:
  DefaultLivestreamServiceStub(
      std::unique_ptr<google::cloud::video::livestream::v1::LivestreamService::
                          StubInterface>
          grpc_stub,
      std::unique_ptr<google::longrunning::Operations::StubInterface>
          operations_stub,
      std::unique_ptr<google::cloud::location::Locations::StubInterface>
          locations_stub,
      std::unique_ptr<google::longrunning::Operations::StubInterface>
          operations)
      : grpc_stub_(std::move(grpc_stub)),
        operations_stub_(std::move(operations_stub)),
        locations_stub_(std::move(locations_stub)),
        operations_(std::move(operations)) {}

  future<StatusOr<google::longrunning::Operation>> AsyncCreateChannel(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::video::livestream::v1::CreateChannelRequest const& request)
      override;

  StatusOr<google::longrunning::Operation> CreateChannel(
      grpc::ClientContext& context, Options options,
      google::cloud::video::livestream::v1::CreateChannelRequest const& request)
      override;

  StatusOr<google::cloud::video::livestream::v1::ListChannelsResponse>
  ListChannels(grpc::ClientContext& context, Options const& options,
               google::cloud::video::livestream::v1::ListChannelsRequest const&
                   request) override;

  StatusOr<google::cloud::video::livestream::v1::Channel> GetChannel(
      grpc::ClientContext& context, Options const& options,
      google::cloud::video::livestream::v1::GetChannelRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncDeleteChannel(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::video::livestream::v1::DeleteChannelRequest const& request)
      override;

  StatusOr<google::longrunning::Operation> DeleteChannel(
      grpc::ClientContext& context, Options options,
      google::cloud::video::livestream::v1::DeleteChannelRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncUpdateChannel(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::video::livestream::v1::UpdateChannelRequest const& request)
      override;

  StatusOr<google::longrunning::Operation> UpdateChannel(
      grpc::ClientContext& context, Options options,
      google::cloud::video::livestream::v1::UpdateChannelRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncStartChannel(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::video::livestream::v1::StartChannelRequest const& request)
      override;

  StatusOr<google::longrunning::Operation> StartChannel(
      grpc::ClientContext& context, Options options,
      google::cloud::video::livestream::v1::StartChannelRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncStopChannel(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::video::livestream::v1::StopChannelRequest const& request)
      override;

  StatusOr<google::longrunning::Operation> StopChannel(
      grpc::ClientContext& context, Options options,
      google::cloud::video::livestream::v1::StopChannelRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncCreateInput(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::video::livestream::v1::CreateInputRequest const& request)
      override;

  StatusOr<google::longrunning::Operation> CreateInput(
      grpc::ClientContext& context, Options options,
      google::cloud::video::livestream::v1::CreateInputRequest const& request)
      override;

  StatusOr<google::cloud::video::livestream::v1::ListInputsResponse> ListInputs(
      grpc::ClientContext& context, Options const& options,
      google::cloud::video::livestream::v1::ListInputsRequest const& request)
      override;

  StatusOr<google::cloud::video::livestream::v1::Input> GetInput(
      grpc::ClientContext& context, Options const& options,
      google::cloud::video::livestream::v1::GetInputRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncDeleteInput(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::video::livestream::v1::DeleteInputRequest const& request)
      override;

  StatusOr<google::longrunning::Operation> DeleteInput(
      grpc::ClientContext& context, Options options,
      google::cloud::video::livestream::v1::DeleteInputRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncUpdateInput(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::video::livestream::v1::UpdateInputRequest const& request)
      override;

  StatusOr<google::longrunning::Operation> UpdateInput(
      grpc::ClientContext& context, Options options,
      google::cloud::video::livestream::v1::UpdateInputRequest const& request)
      override;

  StatusOr<google::cloud::video::livestream::v1::Event> CreateEvent(
      grpc::ClientContext& context, Options const& options,
      google::cloud::video::livestream::v1::CreateEventRequest const& request)
      override;

  StatusOr<google::cloud::video::livestream::v1::ListEventsResponse> ListEvents(
      grpc::ClientContext& context, Options const& options,
      google::cloud::video::livestream::v1::ListEventsRequest const& request)
      override;

  StatusOr<google::cloud::video::livestream::v1::Event> GetEvent(
      grpc::ClientContext& context, Options const& options,
      google::cloud::video::livestream::v1::GetEventRequest const& request)
      override;

  Status DeleteEvent(
      grpc::ClientContext& context, Options const& options,
      google::cloud::video::livestream::v1::DeleteEventRequest const& request)
      override;

  StatusOr<google::cloud::video::livestream::v1::ListClipsResponse> ListClips(
      grpc::ClientContext& context, Options const& options,
      google::cloud::video::livestream::v1::ListClipsRequest const& request)
      override;

  StatusOr<google::cloud::video::livestream::v1::Clip> GetClip(
      grpc::ClientContext& context, Options const& options,
      google::cloud::video::livestream::v1::GetClipRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncCreateClip(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::video::livestream::v1::CreateClipRequest const& request)
      override;

  StatusOr<google::longrunning::Operation> CreateClip(
      grpc::ClientContext& context, Options options,
      google::cloud::video::livestream::v1::CreateClipRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncDeleteClip(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::video::livestream::v1::DeleteClipRequest const& request)
      override;

  StatusOr<google::longrunning::Operation> DeleteClip(
      grpc::ClientContext& context, Options options,
      google::cloud::video::livestream::v1::DeleteClipRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncCreateAsset(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::video::livestream::v1::CreateAssetRequest const& request)
      override;

  StatusOr<google::longrunning::Operation> CreateAsset(
      grpc::ClientContext& context, Options options,
      google::cloud::video::livestream::v1::CreateAssetRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncDeleteAsset(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::video::livestream::v1::DeleteAssetRequest const& request)
      override;

  StatusOr<google::longrunning::Operation> DeleteAsset(
      grpc::ClientContext& context, Options options,
      google::cloud::video::livestream::v1::DeleteAssetRequest const& request)
      override;

  StatusOr<google::cloud::video::livestream::v1::Asset> GetAsset(
      grpc::ClientContext& context, Options const& options,
      google::cloud::video::livestream::v1::GetAssetRequest const& request)
      override;

  StatusOr<google::cloud::video::livestream::v1::ListAssetsResponse> ListAssets(
      grpc::ClientContext& context, Options const& options,
      google::cloud::video::livestream::v1::ListAssetsRequest const& request)
      override;

  StatusOr<google::cloud::video::livestream::v1::Pool> GetPool(
      grpc::ClientContext& context, Options const& options,
      google::cloud::video::livestream::v1::GetPoolRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncUpdatePool(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::video::livestream::v1::UpdatePoolRequest const& request)
      override;

  StatusOr<google::longrunning::Operation> UpdatePool(
      grpc::ClientContext& context, Options options,
      google::cloud::video::livestream::v1::UpdatePoolRequest const& request)
      override;

  StatusOr<google::cloud::location::ListLocationsResponse> ListLocations(
      grpc::ClientContext& context, Options const& options,
      google::cloud::location::ListLocationsRequest const& request) override;

  StatusOr<google::cloud::location::Location> GetLocation(
      grpc::ClientContext& context, Options const& options,
      google::cloud::location::GetLocationRequest const& request) override;

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
  std::unique_ptr<
      google::cloud::video::livestream::v1::LivestreamService::StubInterface>
      grpc_stub_;
  std::unique_ptr<google::longrunning::Operations::StubInterface>
      operations_stub_;
  std::unique_ptr<google::cloud::location::Locations::StubInterface>
      locations_stub_;
  std::unique_ptr<google::longrunning::Operations::StubInterface> operations_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace video_livestream_v1_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_VIDEO_LIVESTREAM_V1_INTERNAL_LIVESTREAM_STUB_H
