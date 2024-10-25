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

#include "google/cloud/video/livestream/v1/internal/livestream_metadata_decorator.h"
#include "google/cloud/grpc_options.h"
#include "google/cloud/internal/absl_str_cat_quiet.h"
#include "google/cloud/internal/api_client_header.h"
#include "google/cloud/internal/url_encode.h"
#include "google/cloud/status_or.h"
#include "google/cloud/video/livestream/v1/service.grpc.pb.h"
#include <memory>
#include <string>
#include <utility>
#include <vector>

namespace google {
namespace cloud {
namespace video_livestream_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

LivestreamServiceMetadata::LivestreamServiceMetadata(
    std::shared_ptr<LivestreamServiceStub> child,
    std::multimap<std::string, std::string> fixed_metadata,
    std::string api_client_header)
    : child_(std::move(child)),
      fixed_metadata_(std::move(fixed_metadata)),
      api_client_header_(
          api_client_header.empty()
              ? google::cloud::internal::GeneratedLibClientHeader()
              : std::move(api_client_header)) {}

future<StatusOr<google::longrunning::Operation>>
LivestreamServiceMetadata::AsyncCreateChannel(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::video::livestream::v1::CreateChannelRequest const& request) {
  SetMetadata(*context, *options,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->AsyncCreateChannel(cq, std::move(context), std::move(options),
                                    request);
}

StatusOr<google::longrunning::Operation>
LivestreamServiceMetadata::CreateChannel(
    grpc::ClientContext& context, Options options,
    google::cloud::video::livestream::v1::CreateChannelRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->CreateChannel(context, options, request);
}

StatusOr<google::cloud::video::livestream::v1::ListChannelsResponse>
LivestreamServiceMetadata::ListChannels(
    grpc::ClientContext& context, Options const& options,
    google::cloud::video::livestream::v1::ListChannelsRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->ListChannels(context, options, request);
}

StatusOr<google::cloud::video::livestream::v1::Channel>
LivestreamServiceMetadata::GetChannel(
    grpc::ClientContext& context, Options const& options,
    google::cloud::video::livestream::v1::GetChannelRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->GetChannel(context, options, request);
}

future<StatusOr<google::longrunning::Operation>>
LivestreamServiceMetadata::AsyncDeleteChannel(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::video::livestream::v1::DeleteChannelRequest const& request) {
  SetMetadata(*context, *options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->AsyncDeleteChannel(cq, std::move(context), std::move(options),
                                    request);
}

StatusOr<google::longrunning::Operation>
LivestreamServiceMetadata::DeleteChannel(
    grpc::ClientContext& context, Options options,
    google::cloud::video::livestream::v1::DeleteChannelRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->DeleteChannel(context, options, request);
}

future<StatusOr<google::longrunning::Operation>>
LivestreamServiceMetadata::AsyncUpdateChannel(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::video::livestream::v1::UpdateChannelRequest const& request) {
  SetMetadata(*context, *options,
              absl::StrCat("channel.name=",
                           internal::UrlEncode(request.channel().name())));
  return child_->AsyncUpdateChannel(cq, std::move(context), std::move(options),
                                    request);
}

StatusOr<google::longrunning::Operation>
LivestreamServiceMetadata::UpdateChannel(
    grpc::ClientContext& context, Options options,
    google::cloud::video::livestream::v1::UpdateChannelRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("channel.name=",
                           internal::UrlEncode(request.channel().name())));
  return child_->UpdateChannel(context, options, request);
}

future<StatusOr<google::longrunning::Operation>>
LivestreamServiceMetadata::AsyncStartChannel(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::video::livestream::v1::StartChannelRequest const& request) {
  SetMetadata(*context, *options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->AsyncStartChannel(cq, std::move(context), std::move(options),
                                   request);
}

StatusOr<google::longrunning::Operation>
LivestreamServiceMetadata::StartChannel(
    grpc::ClientContext& context, Options options,
    google::cloud::video::livestream::v1::StartChannelRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->StartChannel(context, options, request);
}

future<StatusOr<google::longrunning::Operation>>
LivestreamServiceMetadata::AsyncStopChannel(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::video::livestream::v1::StopChannelRequest const& request) {
  SetMetadata(*context, *options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->AsyncStopChannel(cq, std::move(context), std::move(options),
                                  request);
}

StatusOr<google::longrunning::Operation> LivestreamServiceMetadata::StopChannel(
    grpc::ClientContext& context, Options options,
    google::cloud::video::livestream::v1::StopChannelRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->StopChannel(context, options, request);
}

future<StatusOr<google::longrunning::Operation>>
LivestreamServiceMetadata::AsyncCreateInput(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::video::livestream::v1::CreateInputRequest const& request) {
  SetMetadata(*context, *options,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->AsyncCreateInput(cq, std::move(context), std::move(options),
                                  request);
}

StatusOr<google::longrunning::Operation> LivestreamServiceMetadata::CreateInput(
    grpc::ClientContext& context, Options options,
    google::cloud::video::livestream::v1::CreateInputRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->CreateInput(context, options, request);
}

StatusOr<google::cloud::video::livestream::v1::ListInputsResponse>
LivestreamServiceMetadata::ListInputs(
    grpc::ClientContext& context, Options const& options,
    google::cloud::video::livestream::v1::ListInputsRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->ListInputs(context, options, request);
}

StatusOr<google::cloud::video::livestream::v1::Input>
LivestreamServiceMetadata::GetInput(
    grpc::ClientContext& context, Options const& options,
    google::cloud::video::livestream::v1::GetInputRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->GetInput(context, options, request);
}

future<StatusOr<google::longrunning::Operation>>
LivestreamServiceMetadata::AsyncDeleteInput(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::video::livestream::v1::DeleteInputRequest const& request) {
  SetMetadata(*context, *options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->AsyncDeleteInput(cq, std::move(context), std::move(options),
                                  request);
}

StatusOr<google::longrunning::Operation> LivestreamServiceMetadata::DeleteInput(
    grpc::ClientContext& context, Options options,
    google::cloud::video::livestream::v1::DeleteInputRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->DeleteInput(context, options, request);
}

future<StatusOr<google::longrunning::Operation>>
LivestreamServiceMetadata::AsyncUpdateInput(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::video::livestream::v1::UpdateInputRequest const& request) {
  SetMetadata(
      *context, *options,
      absl::StrCat("input.name=", internal::UrlEncode(request.input().name())));
  return child_->AsyncUpdateInput(cq, std::move(context), std::move(options),
                                  request);
}

StatusOr<google::longrunning::Operation> LivestreamServiceMetadata::UpdateInput(
    grpc::ClientContext& context, Options options,
    google::cloud::video::livestream::v1::UpdateInputRequest const& request) {
  SetMetadata(
      context, options,
      absl::StrCat("input.name=", internal::UrlEncode(request.input().name())));
  return child_->UpdateInput(context, options, request);
}

StatusOr<google::cloud::video::livestream::v1::Event>
LivestreamServiceMetadata::CreateEvent(
    grpc::ClientContext& context, Options const& options,
    google::cloud::video::livestream::v1::CreateEventRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->CreateEvent(context, options, request);
}

StatusOr<google::cloud::video::livestream::v1::ListEventsResponse>
LivestreamServiceMetadata::ListEvents(
    grpc::ClientContext& context, Options const& options,
    google::cloud::video::livestream::v1::ListEventsRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->ListEvents(context, options, request);
}

StatusOr<google::cloud::video::livestream::v1::Event>
LivestreamServiceMetadata::GetEvent(
    grpc::ClientContext& context, Options const& options,
    google::cloud::video::livestream::v1::GetEventRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->GetEvent(context, options, request);
}

Status LivestreamServiceMetadata::DeleteEvent(
    grpc::ClientContext& context, Options const& options,
    google::cloud::video::livestream::v1::DeleteEventRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->DeleteEvent(context, options, request);
}

StatusOr<google::cloud::video::livestream::v1::ListClipsResponse>
LivestreamServiceMetadata::ListClips(
    grpc::ClientContext& context, Options const& options,
    google::cloud::video::livestream::v1::ListClipsRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->ListClips(context, options, request);
}

StatusOr<google::cloud::video::livestream::v1::Clip>
LivestreamServiceMetadata::GetClip(
    grpc::ClientContext& context, Options const& options,
    google::cloud::video::livestream::v1::GetClipRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->GetClip(context, options, request);
}

future<StatusOr<google::longrunning::Operation>>
LivestreamServiceMetadata::AsyncCreateClip(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::video::livestream::v1::CreateClipRequest const& request) {
  SetMetadata(*context, *options,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->AsyncCreateClip(cq, std::move(context), std::move(options),
                                 request);
}

StatusOr<google::longrunning::Operation> LivestreamServiceMetadata::CreateClip(
    grpc::ClientContext& context, Options options,
    google::cloud::video::livestream::v1::CreateClipRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->CreateClip(context, options, request);
}

future<StatusOr<google::longrunning::Operation>>
LivestreamServiceMetadata::AsyncDeleteClip(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::video::livestream::v1::DeleteClipRequest const& request) {
  SetMetadata(*context, *options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->AsyncDeleteClip(cq, std::move(context), std::move(options),
                                 request);
}

StatusOr<google::longrunning::Operation> LivestreamServiceMetadata::DeleteClip(
    grpc::ClientContext& context, Options options,
    google::cloud::video::livestream::v1::DeleteClipRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->DeleteClip(context, options, request);
}

future<StatusOr<google::longrunning::Operation>>
LivestreamServiceMetadata::AsyncCreateAsset(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::video::livestream::v1::CreateAssetRequest const& request) {
  SetMetadata(*context, *options,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->AsyncCreateAsset(cq, std::move(context), std::move(options),
                                  request);
}

StatusOr<google::longrunning::Operation> LivestreamServiceMetadata::CreateAsset(
    grpc::ClientContext& context, Options options,
    google::cloud::video::livestream::v1::CreateAssetRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->CreateAsset(context, options, request);
}

future<StatusOr<google::longrunning::Operation>>
LivestreamServiceMetadata::AsyncDeleteAsset(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::video::livestream::v1::DeleteAssetRequest const& request) {
  SetMetadata(*context, *options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->AsyncDeleteAsset(cq, std::move(context), std::move(options),
                                  request);
}

StatusOr<google::longrunning::Operation> LivestreamServiceMetadata::DeleteAsset(
    grpc::ClientContext& context, Options options,
    google::cloud::video::livestream::v1::DeleteAssetRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->DeleteAsset(context, options, request);
}

StatusOr<google::cloud::video::livestream::v1::Asset>
LivestreamServiceMetadata::GetAsset(
    grpc::ClientContext& context, Options const& options,
    google::cloud::video::livestream::v1::GetAssetRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->GetAsset(context, options, request);
}

StatusOr<google::cloud::video::livestream::v1::ListAssetsResponse>
LivestreamServiceMetadata::ListAssets(
    grpc::ClientContext& context, Options const& options,
    google::cloud::video::livestream::v1::ListAssetsRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->ListAssets(context, options, request);
}

StatusOr<google::cloud::video::livestream::v1::Pool>
LivestreamServiceMetadata::GetPool(
    grpc::ClientContext& context, Options const& options,
    google::cloud::video::livestream::v1::GetPoolRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->GetPool(context, options, request);
}

future<StatusOr<google::longrunning::Operation>>
LivestreamServiceMetadata::AsyncUpdatePool(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::video::livestream::v1::UpdatePoolRequest const& request) {
  SetMetadata(
      *context, *options,
      absl::StrCat("pool.name=", internal::UrlEncode(request.pool().name())));
  return child_->AsyncUpdatePool(cq, std::move(context), std::move(options),
                                 request);
}

StatusOr<google::longrunning::Operation> LivestreamServiceMetadata::UpdatePool(
    grpc::ClientContext& context, Options options,
    google::cloud::video::livestream::v1::UpdatePoolRequest const& request) {
  SetMetadata(
      context, options,
      absl::StrCat("pool.name=", internal::UrlEncode(request.pool().name())));
  return child_->UpdatePool(context, options, request);
}

StatusOr<google::cloud::location::ListLocationsResponse>
LivestreamServiceMetadata::ListLocations(
    grpc::ClientContext& context, Options const& options,
    google::cloud::location::ListLocationsRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->ListLocations(context, options, request);
}

StatusOr<google::cloud::location::Location>
LivestreamServiceMetadata::GetLocation(
    grpc::ClientContext& context, Options const& options,
    google::cloud::location::GetLocationRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->GetLocation(context, options, request);
}

StatusOr<google::longrunning::ListOperationsResponse>
LivestreamServiceMetadata::ListOperations(
    grpc::ClientContext& context, Options const& options,
    google::longrunning::ListOperationsRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->ListOperations(context, options, request);
}

StatusOr<google::longrunning::Operation>
LivestreamServiceMetadata::GetOperation(
    grpc::ClientContext& context, Options const& options,
    google::longrunning::GetOperationRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->GetOperation(context, options, request);
}

Status LivestreamServiceMetadata::DeleteOperation(
    grpc::ClientContext& context, Options const& options,
    google::longrunning::DeleteOperationRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->DeleteOperation(context, options, request);
}

Status LivestreamServiceMetadata::CancelOperation(
    grpc::ClientContext& context, Options const& options,
    google::longrunning::CancelOperationRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->CancelOperation(context, options, request);
}

future<StatusOr<google::longrunning::Operation>>
LivestreamServiceMetadata::AsyncGetOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::longrunning::GetOperationRequest const& request) {
  SetMetadata(*context, *options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->AsyncGetOperation(cq, std::move(context), std::move(options),
                                   request);
}

future<Status> LivestreamServiceMetadata::AsyncCancelOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::longrunning::CancelOperationRequest const& request) {
  SetMetadata(*context, *options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->AsyncCancelOperation(cq, std::move(context),
                                      std::move(options), request);
}

void LivestreamServiceMetadata::SetMetadata(grpc::ClientContext& context,
                                            Options const& options,
                                            std::string const& request_params) {
  context.AddMetadata("x-goog-request-params", request_params);
  SetMetadata(context, options);
}

void LivestreamServiceMetadata::SetMetadata(grpc::ClientContext& context,
                                            Options const& options) {
  google::cloud::internal::SetMetadata(context, options, fixed_metadata_,
                                       api_client_header_);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace video_livestream_v1_internal
}  // namespace cloud
}  // namespace google
