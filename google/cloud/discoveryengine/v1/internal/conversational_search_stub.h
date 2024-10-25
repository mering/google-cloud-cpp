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

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DISCOVERYENGINE_V1_INTERNAL_CONVERSATIONAL_SEARCH_STUB_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DISCOVERYENGINE_V1_INTERNAL_CONVERSATIONAL_SEARCH_STUB_H

#include "google/cloud/discoveryengine/v1/conversational_search_service.grpc.pb.h"
#include "google/cloud/options.h"
#include "google/cloud/status_or.h"
#include "google/cloud/version.h"
#include "google/longrunning/operations.grpc.pb.h"
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace discoveryengine_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class ConversationalSearchServiceStub {
 public:
  virtual ~ConversationalSearchServiceStub() = 0;

  virtual StatusOr<
      google::cloud::discoveryengine::v1::ConverseConversationResponse>
  ConverseConversation(
      grpc::ClientContext& context, Options const& options,
      google::cloud::discoveryengine::v1::ConverseConversationRequest const&
          request) = 0;

  virtual StatusOr<google::cloud::discoveryengine::v1::Conversation>
  CreateConversation(
      grpc::ClientContext& context, Options const& options,
      google::cloud::discoveryengine::v1::CreateConversationRequest const&
          request) = 0;

  virtual Status DeleteConversation(
      grpc::ClientContext& context, Options const& options,
      google::cloud::discoveryengine::v1::DeleteConversationRequest const&
          request) = 0;

  virtual StatusOr<google::cloud::discoveryengine::v1::Conversation>
  UpdateConversation(
      grpc::ClientContext& context, Options const& options,
      google::cloud::discoveryengine::v1::UpdateConversationRequest const&
          request) = 0;

  virtual StatusOr<google::cloud::discoveryengine::v1::Conversation>
  GetConversation(
      grpc::ClientContext& context, Options const& options,
      google::cloud::discoveryengine::v1::GetConversationRequest const&
          request) = 0;

  virtual StatusOr<
      google::cloud::discoveryengine::v1::ListConversationsResponse>
  ListConversations(
      grpc::ClientContext& context, Options const& options,
      google::cloud::discoveryengine::v1::ListConversationsRequest const&
          request) = 0;

  virtual StatusOr<google::cloud::discoveryengine::v1::AnswerQueryResponse>
  AnswerQuery(grpc::ClientContext& context, Options const& options,
              google::cloud::discoveryengine::v1::AnswerQueryRequest const&
                  request) = 0;

  virtual StatusOr<google::cloud::discoveryengine::v1::Answer> GetAnswer(
      grpc::ClientContext& context, Options const& options,
      google::cloud::discoveryengine::v1::GetAnswerRequest const& request) = 0;

  virtual StatusOr<google::cloud::discoveryengine::v1::Session> CreateSession(
      grpc::ClientContext& context, Options const& options,
      google::cloud::discoveryengine::v1::CreateSessionRequest const&
          request) = 0;

  virtual Status DeleteSession(
      grpc::ClientContext& context, Options const& options,
      google::cloud::discoveryengine::v1::DeleteSessionRequest const&
          request) = 0;

  virtual StatusOr<google::cloud::discoveryengine::v1::Session> UpdateSession(
      grpc::ClientContext& context, Options const& options,
      google::cloud::discoveryengine::v1::UpdateSessionRequest const&
          request) = 0;

  virtual StatusOr<google::cloud::discoveryengine::v1::Session> GetSession(
      grpc::ClientContext& context, Options const& options,
      google::cloud::discoveryengine::v1::GetSessionRequest const& request) = 0;

  virtual StatusOr<google::cloud::discoveryengine::v1::ListSessionsResponse>
  ListSessions(grpc::ClientContext& context, Options const& options,
               google::cloud::discoveryengine::v1::ListSessionsRequest const&
                   request) = 0;

  virtual StatusOr<google::longrunning::ListOperationsResponse> ListOperations(
      grpc::ClientContext& context, Options const& options,
      google::longrunning::ListOperationsRequest const& request) = 0;

  virtual StatusOr<google::longrunning::Operation> GetOperation(
      grpc::ClientContext& context, Options const& options,
      google::longrunning::GetOperationRequest const& request) = 0;

  virtual Status CancelOperation(
      grpc::ClientContext& context, Options const& options,
      google::longrunning::CancelOperationRequest const& request) = 0;
};

class DefaultConversationalSearchServiceStub
    : public ConversationalSearchServiceStub {
 public:
  explicit DefaultConversationalSearchServiceStub(
      std::unique_ptr<google::cloud::discoveryengine::v1::
                          ConversationalSearchService::StubInterface>
          grpc_stub,
      std::unique_ptr<google::longrunning::Operations::StubInterface>
          operations_stub)
      : grpc_stub_(std::move(grpc_stub)),
        operations_stub_(std::move(operations_stub)) {}

  StatusOr<google::cloud::discoveryengine::v1::ConverseConversationResponse>
  ConverseConversation(
      grpc::ClientContext& context, Options const& options,
      google::cloud::discoveryengine::v1::ConverseConversationRequest const&
          request) override;

  StatusOr<google::cloud::discoveryengine::v1::Conversation> CreateConversation(
      grpc::ClientContext& context, Options const& options,
      google::cloud::discoveryengine::v1::CreateConversationRequest const&
          request) override;

  Status DeleteConversation(
      grpc::ClientContext& context, Options const& options,
      google::cloud::discoveryengine::v1::DeleteConversationRequest const&
          request) override;

  StatusOr<google::cloud::discoveryengine::v1::Conversation> UpdateConversation(
      grpc::ClientContext& context, Options const& options,
      google::cloud::discoveryengine::v1::UpdateConversationRequest const&
          request) override;

  StatusOr<google::cloud::discoveryengine::v1::Conversation> GetConversation(
      grpc::ClientContext& context, Options const& options,
      google::cloud::discoveryengine::v1::GetConversationRequest const& request)
      override;

  StatusOr<google::cloud::discoveryengine::v1::ListConversationsResponse>
  ListConversations(
      grpc::ClientContext& context, Options const& options,
      google::cloud::discoveryengine::v1::ListConversationsRequest const&
          request) override;

  StatusOr<google::cloud::discoveryengine::v1::AnswerQueryResponse> AnswerQuery(
      grpc::ClientContext& context, Options const& options,
      google::cloud::discoveryengine::v1::AnswerQueryRequest const& request)
      override;

  StatusOr<google::cloud::discoveryengine::v1::Answer> GetAnswer(
      grpc::ClientContext& context, Options const& options,
      google::cloud::discoveryengine::v1::GetAnswerRequest const& request)
      override;

  StatusOr<google::cloud::discoveryengine::v1::Session> CreateSession(
      grpc::ClientContext& context, Options const& options,
      google::cloud::discoveryengine::v1::CreateSessionRequest const& request)
      override;

  Status DeleteSession(
      grpc::ClientContext& context, Options const& options,
      google::cloud::discoveryengine::v1::DeleteSessionRequest const& request)
      override;

  StatusOr<google::cloud::discoveryengine::v1::Session> UpdateSession(
      grpc::ClientContext& context, Options const& options,
      google::cloud::discoveryengine::v1::UpdateSessionRequest const& request)
      override;

  StatusOr<google::cloud::discoveryengine::v1::Session> GetSession(
      grpc::ClientContext& context, Options const& options,
      google::cloud::discoveryengine::v1::GetSessionRequest const& request)
      override;

  StatusOr<google::cloud::discoveryengine::v1::ListSessionsResponse>
  ListSessions(grpc::ClientContext& context, Options const& options,
               google::cloud::discoveryengine::v1::ListSessionsRequest const&
                   request) override;

  StatusOr<google::longrunning::ListOperationsResponse> ListOperations(
      grpc::ClientContext& context, Options const& options,
      google::longrunning::ListOperationsRequest const& request) override;

  StatusOr<google::longrunning::Operation> GetOperation(
      grpc::ClientContext& context, Options const& options,
      google::longrunning::GetOperationRequest const& request) override;

  Status CancelOperation(
      grpc::ClientContext& context, Options const& options,
      google::longrunning::CancelOperationRequest const& request) override;

 private:
  std::unique_ptr<google::cloud::discoveryengine::v1::
                      ConversationalSearchService::StubInterface>
      grpc_stub_;
  std::unique_ptr<google::longrunning::Operations::StubInterface>
      operations_stub_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace discoveryengine_v1_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DISCOVERYENGINE_V1_INTERNAL_CONVERSATIONAL_SEARCH_STUB_H
