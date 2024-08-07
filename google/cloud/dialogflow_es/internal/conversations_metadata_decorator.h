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

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DIALOGFLOW_ES_INTERNAL_CONVERSATIONS_METADATA_DECORATOR_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DIALOGFLOW_ES_INTERNAL_CONVERSATIONS_METADATA_DECORATOR_H

#include "google/cloud/dialogflow_es/internal/conversations_stub.h"
#include "google/cloud/options.h"
#include "google/cloud/version.h"
#include <map>
#include <memory>
#include <string>

namespace google {
namespace cloud {
namespace dialogflow_es_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class ConversationsMetadata : public ConversationsStub {
 public:
  ~ConversationsMetadata() override = default;
  ConversationsMetadata(std::shared_ptr<ConversationsStub> child,
                        std::multimap<std::string, std::string> fixed_metadata,
                        std::string api_client_header = "");

  StatusOr<google::cloud::dialogflow::v2::Conversation> CreateConversation(
      grpc::ClientContext& context, Options const& options,
      google::cloud::dialogflow::v2::CreateConversationRequest const& request)
      override;

  StatusOr<google::cloud::dialogflow::v2::ListConversationsResponse>
  ListConversations(
      grpc::ClientContext& context, Options const& options,
      google::cloud::dialogflow::v2::ListConversationsRequest const& request)
      override;

  StatusOr<google::cloud::dialogflow::v2::Conversation> GetConversation(
      grpc::ClientContext& context, Options const& options,
      google::cloud::dialogflow::v2::GetConversationRequest const& request)
      override;

  StatusOr<google::cloud::dialogflow::v2::Conversation> CompleteConversation(
      grpc::ClientContext& context, Options const& options,
      google::cloud::dialogflow::v2::CompleteConversationRequest const& request)
      override;

  StatusOr<google::cloud::dialogflow::v2::ListMessagesResponse> ListMessages(
      grpc::ClientContext& context, Options const& options,
      google::cloud::dialogflow::v2::ListMessagesRequest const& request)
      override;

  StatusOr<google::cloud::dialogflow::v2::SuggestConversationSummaryResponse>
  SuggestConversationSummary(
      grpc::ClientContext& context, Options const& options,
      google::cloud::dialogflow::v2::SuggestConversationSummaryRequest const&
          request) override;

  StatusOr<google::cloud::dialogflow::v2::GenerateStatelessSummaryResponse>
  GenerateStatelessSummary(
      grpc::ClientContext& context, Options const& options,
      google::cloud::dialogflow::v2::GenerateStatelessSummaryRequest const&
          request) override;

  StatusOr<google::cloud::dialogflow::v2::GenerateStatelessSuggestionResponse>
  GenerateStatelessSuggestion(
      grpc::ClientContext& context, Options const& options,
      google::cloud::dialogflow::v2::GenerateStatelessSuggestionRequest const&
          request) override;

  StatusOr<google::cloud::dialogflow::v2::SearchKnowledgeResponse>
  SearchKnowledge(grpc::ClientContext& context, Options const& options,
                  google::cloud::dialogflow::v2::SearchKnowledgeRequest const&
                      request) override;

 private:
  void SetMetadata(grpc::ClientContext& context, Options const& options,
                   std::string const& request_params);
  void SetMetadata(grpc::ClientContext& context, Options const& options);

  std::shared_ptr<ConversationsStub> child_;
  std::multimap<std::string, std::string> fixed_metadata_;
  std::string api_client_header_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace dialogflow_es_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DIALOGFLOW_ES_INTERNAL_CONVERSATIONS_METADATA_DECORATOR_H
