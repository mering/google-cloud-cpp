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

#include "google/cloud/dialogflow_es/internal/conversations_auth_decorator.h"
#include <google/cloud/dialogflow/v2/conversation.grpc.pb.h>
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace dialogflow_es_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

ConversationsAuth::ConversationsAuth(
    std::shared_ptr<google::cloud::internal::GrpcAuthenticationStrategy> auth,
    std::shared_ptr<ConversationsStub> child)
    : auth_(std::move(auth)), child_(std::move(child)) {}

StatusOr<google::cloud::dialogflow::v2::Conversation>
ConversationsAuth::CreateConversation(
    grpc::ClientContext& context, Options const& options,
    google::cloud::dialogflow::v2::CreateConversationRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->CreateConversation(context, options, request);
}

StatusOr<google::cloud::dialogflow::v2::ListConversationsResponse>
ConversationsAuth::ListConversations(
    grpc::ClientContext& context, Options const& options,
    google::cloud::dialogflow::v2::ListConversationsRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->ListConversations(context, options, request);
}

StatusOr<google::cloud::dialogflow::v2::Conversation>
ConversationsAuth::GetConversation(
    grpc::ClientContext& context, Options const& options,
    google::cloud::dialogflow::v2::GetConversationRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->GetConversation(context, options, request);
}

StatusOr<google::cloud::dialogflow::v2::Conversation>
ConversationsAuth::CompleteConversation(
    grpc::ClientContext& context, Options const& options,
    google::cloud::dialogflow::v2::CompleteConversationRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->CompleteConversation(context, options, request);
}

StatusOr<google::cloud::dialogflow::v2::ListMessagesResponse>
ConversationsAuth::ListMessages(
    grpc::ClientContext& context, Options const& options,
    google::cloud::dialogflow::v2::ListMessagesRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->ListMessages(context, options, request);
}

StatusOr<google::cloud::dialogflow::v2::SuggestConversationSummaryResponse>
ConversationsAuth::SuggestConversationSummary(
    grpc::ClientContext& context, Options const& options,
    google::cloud::dialogflow::v2::SuggestConversationSummaryRequest const&
        request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->SuggestConversationSummary(context, options, request);
}

StatusOr<google::cloud::dialogflow::v2::GenerateStatelessSummaryResponse>
ConversationsAuth::GenerateStatelessSummary(
    grpc::ClientContext& context, Options const& options,
    google::cloud::dialogflow::v2::GenerateStatelessSummaryRequest const&
        request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->GenerateStatelessSummary(context, options, request);
}

StatusOr<google::cloud::dialogflow::v2::GenerateStatelessSuggestionResponse>
ConversationsAuth::GenerateStatelessSuggestion(
    grpc::ClientContext& context, Options const& options,
    google::cloud::dialogflow::v2::GenerateStatelessSuggestionRequest const&
        request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->GenerateStatelessSuggestion(context, options, request);
}

StatusOr<google::cloud::dialogflow::v2::SearchKnowledgeResponse>
ConversationsAuth::SearchKnowledge(
    grpc::ClientContext& context, Options const& options,
    google::cloud::dialogflow::v2::SearchKnowledgeRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->SearchKnowledge(context, options, request);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace dialogflow_es_internal
}  // namespace cloud
}  // namespace google
