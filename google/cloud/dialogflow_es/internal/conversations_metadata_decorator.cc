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
// source: google/cloud/dialogflow/v2/conversation.proto

#include "google/cloud/dialogflow_es/internal/conversations_metadata_decorator.h"
#include "google/cloud/dialogflow/v2/conversation.grpc.pb.h"
#include "google/cloud/grpc_options.h"
#include "google/cloud/internal/absl_str_cat_quiet.h"
#include "google/cloud/internal/api_client_header.h"
#include "google/cloud/internal/url_encode.h"
#include "google/cloud/status_or.h"
#include <memory>
#include <string>
#include <utility>
#include <vector>

namespace google {
namespace cloud {
namespace dialogflow_es_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

ConversationsMetadata::ConversationsMetadata(
    std::shared_ptr<ConversationsStub> child,
    std::multimap<std::string, std::string> fixed_metadata,
    std::string api_client_header)
    : child_(std::move(child)),
      fixed_metadata_(std::move(fixed_metadata)),
      api_client_header_(
          api_client_header.empty()
              ? google::cloud::internal::GeneratedLibClientHeader()
              : std::move(api_client_header)) {}

StatusOr<google::cloud::dialogflow::v2::Conversation>
ConversationsMetadata::CreateConversation(
    grpc::ClientContext& context, Options const& options,
    google::cloud::dialogflow::v2::CreateConversationRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->CreateConversation(context, options, request);
}

StatusOr<google::cloud::dialogflow::v2::ListConversationsResponse>
ConversationsMetadata::ListConversations(
    grpc::ClientContext& context, Options const& options,
    google::cloud::dialogflow::v2::ListConversationsRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->ListConversations(context, options, request);
}

StatusOr<google::cloud::dialogflow::v2::Conversation>
ConversationsMetadata::GetConversation(
    grpc::ClientContext& context, Options const& options,
    google::cloud::dialogflow::v2::GetConversationRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->GetConversation(context, options, request);
}

StatusOr<google::cloud::dialogflow::v2::Conversation>
ConversationsMetadata::CompleteConversation(
    grpc::ClientContext& context, Options const& options,
    google::cloud::dialogflow::v2::CompleteConversationRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->CompleteConversation(context, options, request);
}

StatusOr<google::cloud::dialogflow::v2::ListMessagesResponse>
ConversationsMetadata::ListMessages(
    grpc::ClientContext& context, Options const& options,
    google::cloud::dialogflow::v2::ListMessagesRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->ListMessages(context, options, request);
}

StatusOr<google::cloud::dialogflow::v2::SuggestConversationSummaryResponse>
ConversationsMetadata::SuggestConversationSummary(
    grpc::ClientContext& context, Options const& options,
    google::cloud::dialogflow::v2::SuggestConversationSummaryRequest const&
        request) {
  SetMetadata(context, options,
              absl::StrCat("conversation=",
                           internal::UrlEncode(request.conversation())));
  return child_->SuggestConversationSummary(context, options, request);
}

StatusOr<google::cloud::dialogflow::v2::GenerateStatelessSummaryResponse>
ConversationsMetadata::GenerateStatelessSummary(
    grpc::ClientContext& context, Options const& options,
    google::cloud::dialogflow::v2::GenerateStatelessSummaryRequest const&
        request) {
  SetMetadata(context, options,
              absl::StrCat("stateless_conversation.parent=",
                           internal::UrlEncode(
                               request.stateless_conversation().parent())));
  return child_->GenerateStatelessSummary(context, options, request);
}

StatusOr<google::cloud::dialogflow::v2::GenerateStatelessSuggestionResponse>
ConversationsMetadata::GenerateStatelessSuggestion(
    grpc::ClientContext& context, Options const& options,
    google::cloud::dialogflow::v2::GenerateStatelessSuggestionRequest const&
        request) {
  SetMetadata(context, options,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->GenerateStatelessSuggestion(context, options, request);
}

StatusOr<google::cloud::dialogflow::v2::SearchKnowledgeResponse>
ConversationsMetadata::SearchKnowledge(
    grpc::ClientContext& context, Options const& options,
    google::cloud::dialogflow::v2::SearchKnowledgeRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->SearchKnowledge(context, options, request);
}

StatusOr<google::cloud::location::ListLocationsResponse>
ConversationsMetadata::ListLocations(
    grpc::ClientContext& context, Options const& options,
    google::cloud::location::ListLocationsRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->ListLocations(context, options, request);
}

StatusOr<google::cloud::location::Location> ConversationsMetadata::GetLocation(
    grpc::ClientContext& context, Options const& options,
    google::cloud::location::GetLocationRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->GetLocation(context, options, request);
}

StatusOr<google::longrunning::ListOperationsResponse>
ConversationsMetadata::ListOperations(
    grpc::ClientContext& context, Options const& options,
    google::longrunning::ListOperationsRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->ListOperations(context, options, request);
}

StatusOr<google::longrunning::Operation> ConversationsMetadata::GetOperation(
    grpc::ClientContext& context, Options const& options,
    google::longrunning::GetOperationRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->GetOperation(context, options, request);
}

Status ConversationsMetadata::CancelOperation(
    grpc::ClientContext& context, Options const& options,
    google::longrunning::CancelOperationRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->CancelOperation(context, options, request);
}

void ConversationsMetadata::SetMetadata(grpc::ClientContext& context,
                                        Options const& options,
                                        std::string const& request_params) {
  context.AddMetadata("x-goog-request-params", request_params);
  SetMetadata(context, options);
}

void ConversationsMetadata::SetMetadata(grpc::ClientContext& context,
                                        Options const& options) {
  google::cloud::internal::SetMetadata(context, options, fixed_metadata_,
                                       api_client_header_);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace dialogflow_es_internal
}  // namespace cloud
}  // namespace google
