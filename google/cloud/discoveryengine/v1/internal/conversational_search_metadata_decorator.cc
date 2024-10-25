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
// source: google/cloud/discoveryengine/v1/conversational_search_service.proto

#include "google/cloud/discoveryengine/v1/internal/conversational_search_metadata_decorator.h"
#include "google/cloud/discoveryengine/v1/conversational_search_service.grpc.pb.h"
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
namespace discoveryengine_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

ConversationalSearchServiceMetadata::ConversationalSearchServiceMetadata(
    std::shared_ptr<ConversationalSearchServiceStub> child,
    std::multimap<std::string, std::string> fixed_metadata,
    std::string api_client_header)
    : child_(std::move(child)),
      fixed_metadata_(std::move(fixed_metadata)),
      api_client_header_(
          api_client_header.empty()
              ? google::cloud::internal::GeneratedLibClientHeader()
              : std::move(api_client_header)) {}

StatusOr<google::cloud::discoveryengine::v1::ConverseConversationResponse>
ConversationalSearchServiceMetadata::ConverseConversation(
    grpc::ClientContext& context, Options const& options,
    google::cloud::discoveryengine::v1::ConverseConversationRequest const&
        request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->ConverseConversation(context, options, request);
}

StatusOr<google::cloud::discoveryengine::v1::Conversation>
ConversationalSearchServiceMetadata::CreateConversation(
    grpc::ClientContext& context, Options const& options,
    google::cloud::discoveryengine::v1::CreateConversationRequest const&
        request) {
  SetMetadata(context, options,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->CreateConversation(context, options, request);
}

Status ConversationalSearchServiceMetadata::DeleteConversation(
    grpc::ClientContext& context, Options const& options,
    google::cloud::discoveryengine::v1::DeleteConversationRequest const&
        request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->DeleteConversation(context, options, request);
}

StatusOr<google::cloud::discoveryengine::v1::Conversation>
ConversationalSearchServiceMetadata::UpdateConversation(
    grpc::ClientContext& context, Options const& options,
    google::cloud::discoveryengine::v1::UpdateConversationRequest const&
        request) {
  SetMetadata(context, options,
              absl::StrCat("conversation.name=",
                           internal::UrlEncode(request.conversation().name())));
  return child_->UpdateConversation(context, options, request);
}

StatusOr<google::cloud::discoveryengine::v1::Conversation>
ConversationalSearchServiceMetadata::GetConversation(
    grpc::ClientContext& context, Options const& options,
    google::cloud::discoveryengine::v1::GetConversationRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->GetConversation(context, options, request);
}

StatusOr<google::cloud::discoveryengine::v1::ListConversationsResponse>
ConversationalSearchServiceMetadata::ListConversations(
    grpc::ClientContext& context, Options const& options,
    google::cloud::discoveryengine::v1::ListConversationsRequest const&
        request) {
  SetMetadata(context, options,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->ListConversations(context, options, request);
}

StatusOr<google::cloud::discoveryengine::v1::AnswerQueryResponse>
ConversationalSearchServiceMetadata::AnswerQuery(
    grpc::ClientContext& context, Options const& options,
    google::cloud::discoveryengine::v1::AnswerQueryRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("serving_config=",
                           internal::UrlEncode(request.serving_config())));
  return child_->AnswerQuery(context, options, request);
}

StatusOr<google::cloud::discoveryengine::v1::Answer>
ConversationalSearchServiceMetadata::GetAnswer(
    grpc::ClientContext& context, Options const& options,
    google::cloud::discoveryengine::v1::GetAnswerRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->GetAnswer(context, options, request);
}

StatusOr<google::cloud::discoveryengine::v1::Session>
ConversationalSearchServiceMetadata::CreateSession(
    grpc::ClientContext& context, Options const& options,
    google::cloud::discoveryengine::v1::CreateSessionRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->CreateSession(context, options, request);
}

Status ConversationalSearchServiceMetadata::DeleteSession(
    grpc::ClientContext& context, Options const& options,
    google::cloud::discoveryengine::v1::DeleteSessionRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->DeleteSession(context, options, request);
}

StatusOr<google::cloud::discoveryengine::v1::Session>
ConversationalSearchServiceMetadata::UpdateSession(
    grpc::ClientContext& context, Options const& options,
    google::cloud::discoveryengine::v1::UpdateSessionRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("session.name=",
                           internal::UrlEncode(request.session().name())));
  return child_->UpdateSession(context, options, request);
}

StatusOr<google::cloud::discoveryengine::v1::Session>
ConversationalSearchServiceMetadata::GetSession(
    grpc::ClientContext& context, Options const& options,
    google::cloud::discoveryengine::v1::GetSessionRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->GetSession(context, options, request);
}

StatusOr<google::cloud::discoveryengine::v1::ListSessionsResponse>
ConversationalSearchServiceMetadata::ListSessions(
    grpc::ClientContext& context, Options const& options,
    google::cloud::discoveryengine::v1::ListSessionsRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->ListSessions(context, options, request);
}

StatusOr<google::longrunning::ListOperationsResponse>
ConversationalSearchServiceMetadata::ListOperations(
    grpc::ClientContext& context, Options const& options,
    google::longrunning::ListOperationsRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->ListOperations(context, options, request);
}

StatusOr<google::longrunning::Operation>
ConversationalSearchServiceMetadata::GetOperation(
    grpc::ClientContext& context, Options const& options,
    google::longrunning::GetOperationRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->GetOperation(context, options, request);
}

Status ConversationalSearchServiceMetadata::CancelOperation(
    grpc::ClientContext& context, Options const& options,
    google::longrunning::CancelOperationRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->CancelOperation(context, options, request);
}

void ConversationalSearchServiceMetadata::SetMetadata(
    grpc::ClientContext& context, Options const& options,
    std::string const& request_params) {
  context.AddMetadata("x-goog-request-params", request_params);
  SetMetadata(context, options);
}

void ConversationalSearchServiceMetadata::SetMetadata(
    grpc::ClientContext& context, Options const& options) {
  google::cloud::internal::SetMetadata(context, options, fixed_metadata_,
                                       api_client_header_);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace discoveryengine_v1_internal
}  // namespace cloud
}  // namespace google
