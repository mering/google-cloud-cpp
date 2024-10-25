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
// source: google/cloud/dialogflow/v2/conversation_profile.proto

#include "google/cloud/dialogflow_es/internal/conversation_profiles_metadata_decorator.h"
#include "google/cloud/grpc_options.h"
#include "google/cloud/internal/absl_str_cat_quiet.h"
#include "google/cloud/internal/api_client_header.h"
#include "google/cloud/internal/url_encode.h"
#include "google/cloud/status_or.h"
#include "google/cloud/dialogflow/v2/conversation_profile.grpc.pb.h"
#include <memory>
#include <string>
#include <utility>
#include <vector>

namespace google {
namespace cloud {
namespace dialogflow_es_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

ConversationProfilesMetadata::ConversationProfilesMetadata(
    std::shared_ptr<ConversationProfilesStub> child,
    std::multimap<std::string, std::string> fixed_metadata,
    std::string api_client_header)
    : child_(std::move(child)),
      fixed_metadata_(std::move(fixed_metadata)),
      api_client_header_(
          api_client_header.empty()
              ? google::cloud::internal::GeneratedLibClientHeader()
              : std::move(api_client_header)) {}

StatusOr<google::cloud::dialogflow::v2::ListConversationProfilesResponse>
ConversationProfilesMetadata::ListConversationProfiles(
    grpc::ClientContext& context, Options const& options,
    google::cloud::dialogflow::v2::ListConversationProfilesRequest const&
        request) {
  SetMetadata(context, options,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->ListConversationProfiles(context, options, request);
}

StatusOr<google::cloud::dialogflow::v2::ConversationProfile>
ConversationProfilesMetadata::GetConversationProfile(
    grpc::ClientContext& context, Options const& options,
    google::cloud::dialogflow::v2::GetConversationProfileRequest const&
        request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->GetConversationProfile(context, options, request);
}

StatusOr<google::cloud::dialogflow::v2::ConversationProfile>
ConversationProfilesMetadata::CreateConversationProfile(
    grpc::ClientContext& context, Options const& options,
    google::cloud::dialogflow::v2::CreateConversationProfileRequest const&
        request) {
  SetMetadata(context, options,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->CreateConversationProfile(context, options, request);
}

StatusOr<google::cloud::dialogflow::v2::ConversationProfile>
ConversationProfilesMetadata::UpdateConversationProfile(
    grpc::ClientContext& context, Options const& options,
    google::cloud::dialogflow::v2::UpdateConversationProfileRequest const&
        request) {
  SetMetadata(
      context, options,
      absl::StrCat("conversation_profile.name=",
                   internal::UrlEncode(request.conversation_profile().name())));
  return child_->UpdateConversationProfile(context, options, request);
}

Status ConversationProfilesMetadata::DeleteConversationProfile(
    grpc::ClientContext& context, Options const& options,
    google::cloud::dialogflow::v2::DeleteConversationProfileRequest const&
        request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->DeleteConversationProfile(context, options, request);
}

future<StatusOr<google::longrunning::Operation>>
ConversationProfilesMetadata::AsyncSetSuggestionFeatureConfig(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::dialogflow::v2::SetSuggestionFeatureConfigRequest const&
        request) {
  SetMetadata(
      *context, *options,
      absl::StrCat("conversation_profile=",
                   internal::UrlEncode(request.conversation_profile())));
  return child_->AsyncSetSuggestionFeatureConfig(cq, std::move(context),
                                                 std::move(options), request);
}

StatusOr<google::longrunning::Operation>
ConversationProfilesMetadata::SetSuggestionFeatureConfig(
    grpc::ClientContext& context, Options options,
    google::cloud::dialogflow::v2::SetSuggestionFeatureConfigRequest const&
        request) {
  SetMetadata(
      context, options,
      absl::StrCat("conversation_profile=",
                   internal::UrlEncode(request.conversation_profile())));
  return child_->SetSuggestionFeatureConfig(context, options, request);
}

future<StatusOr<google::longrunning::Operation>>
ConversationProfilesMetadata::AsyncClearSuggestionFeatureConfig(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::dialogflow::v2::ClearSuggestionFeatureConfigRequest const&
        request) {
  SetMetadata(
      *context, *options,
      absl::StrCat("conversation_profile=",
                   internal::UrlEncode(request.conversation_profile())));
  return child_->AsyncClearSuggestionFeatureConfig(cq, std::move(context),
                                                   std::move(options), request);
}

StatusOr<google::longrunning::Operation>
ConversationProfilesMetadata::ClearSuggestionFeatureConfig(
    grpc::ClientContext& context, Options options,
    google::cloud::dialogflow::v2::ClearSuggestionFeatureConfigRequest const&
        request) {
  SetMetadata(
      context, options,
      absl::StrCat("conversation_profile=",
                   internal::UrlEncode(request.conversation_profile())));
  return child_->ClearSuggestionFeatureConfig(context, options, request);
}

StatusOr<google::cloud::location::ListLocationsResponse>
ConversationProfilesMetadata::ListLocations(
    grpc::ClientContext& context, Options const& options,
    google::cloud::location::ListLocationsRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->ListLocations(context, options, request);
}

StatusOr<google::cloud::location::Location>
ConversationProfilesMetadata::GetLocation(
    grpc::ClientContext& context, Options const& options,
    google::cloud::location::GetLocationRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->GetLocation(context, options, request);
}

StatusOr<google::longrunning::ListOperationsResponse>
ConversationProfilesMetadata::ListOperations(
    grpc::ClientContext& context, Options const& options,
    google::longrunning::ListOperationsRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->ListOperations(context, options, request);
}

StatusOr<google::longrunning::Operation>
ConversationProfilesMetadata::GetOperation(
    grpc::ClientContext& context, Options const& options,
    google::longrunning::GetOperationRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->GetOperation(context, options, request);
}

Status ConversationProfilesMetadata::CancelOperation(
    grpc::ClientContext& context, Options const& options,
    google::longrunning::CancelOperationRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->CancelOperation(context, options, request);
}

future<StatusOr<google::longrunning::Operation>>
ConversationProfilesMetadata::AsyncGetOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::longrunning::GetOperationRequest const& request) {
  SetMetadata(*context, *options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->AsyncGetOperation(cq, std::move(context), std::move(options),
                                   request);
}

future<Status> ConversationProfilesMetadata::AsyncCancelOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::longrunning::CancelOperationRequest const& request) {
  SetMetadata(*context, *options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->AsyncCancelOperation(cq, std::move(context),
                                      std::move(options), request);
}

void ConversationProfilesMetadata::SetMetadata(
    grpc::ClientContext& context, Options const& options,
    std::string const& request_params) {
  context.AddMetadata("x-goog-request-params", request_params);
  SetMetadata(context, options);
}

void ConversationProfilesMetadata::SetMetadata(grpc::ClientContext& context,
                                               Options const& options) {
  google::cloud::internal::SetMetadata(context, options, fixed_metadata_,
                                       api_client_header_);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace dialogflow_es_internal
}  // namespace cloud
}  // namespace google
