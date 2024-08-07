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
// source: google/cloud/dialogflow/v2/participant.proto

#include "google/cloud/dialogflow_es/participants_connection.h"
#include "google/cloud/dialogflow_es/internal/participants_connection_impl.h"
#include "google/cloud/dialogflow_es/internal/participants_option_defaults.h"
#include "google/cloud/dialogflow_es/internal/participants_stub_factory.h"
#include "google/cloud/dialogflow_es/internal/participants_tracing_connection.h"
#include "google/cloud/dialogflow_es/participants_options.h"
#include "google/cloud/background_threads.h"
#include "google/cloud/common_options.h"
#include "google/cloud/credentials.h"
#include "google/cloud/grpc_options.h"
#include "google/cloud/internal/pagination_range.h"
#include "google/cloud/internal/unified_grpc_credentials.h"
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace dialogflow_es {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

ParticipantsConnection::~ParticipantsConnection() = default;

StatusOr<google::cloud::dialogflow::v2::Participant>
ParticipantsConnection::CreateParticipant(
    google::cloud::dialogflow::v2::CreateParticipantRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::cloud::dialogflow::v2::Participant>
ParticipantsConnection::GetParticipant(
    google::cloud::dialogflow::v2::GetParticipantRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StreamRange<google::cloud::dialogflow::v2::Participant>
ParticipantsConnection::ListParticipants(
    google::cloud::dialogflow::v2::
        ListParticipantsRequest) {  // NOLINT(performance-unnecessary-value-param)
  return google::cloud::internal::MakeUnimplementedPaginationRange<
      StreamRange<google::cloud::dialogflow::v2::Participant>>();
}

StatusOr<google::cloud::dialogflow::v2::Participant>
ParticipantsConnection::UpdateParticipant(
    google::cloud::dialogflow::v2::UpdateParticipantRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::cloud::dialogflow::v2::AnalyzeContentResponse>
ParticipantsConnection::AnalyzeContent(
    google::cloud::dialogflow::v2::AnalyzeContentRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

std::unique_ptr<::google::cloud::AsyncStreamingReadWriteRpc<
    google::cloud::dialogflow::v2::StreamingAnalyzeContentRequest,
    google::cloud::dialogflow::v2::StreamingAnalyzeContentResponse>>
ParticipantsConnection::AsyncStreamingAnalyzeContent() {
  return std::make_unique<
      ::google::cloud::internal::AsyncStreamingReadWriteRpcError<
          google::cloud::dialogflow::v2::StreamingAnalyzeContentRequest,
          google::cloud::dialogflow::v2::StreamingAnalyzeContentResponse>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

StatusOr<google::cloud::dialogflow::v2::SuggestArticlesResponse>
ParticipantsConnection::SuggestArticles(
    google::cloud::dialogflow::v2::SuggestArticlesRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::cloud::dialogflow::v2::SuggestFaqAnswersResponse>
ParticipantsConnection::SuggestFaqAnswers(
    google::cloud::dialogflow::v2::SuggestFaqAnswersRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::cloud::dialogflow::v2::SuggestSmartRepliesResponse>
ParticipantsConnection::SuggestSmartReplies(
    google::cloud::dialogflow::v2::SuggestSmartRepliesRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::cloud::dialogflow::v2::SuggestKnowledgeAssistResponse>
ParticipantsConnection::SuggestKnowledgeAssist(
    google::cloud::dialogflow::v2::SuggestKnowledgeAssistRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

std::shared_ptr<ParticipantsConnection> MakeParticipantsConnection(
    std::string const& location, Options options) {
  internal::CheckExpectedOptions<CommonOptionList, GrpcOptionList,
                                 UnifiedCredentialsOptionList,
                                 ParticipantsPolicyOptionList>(options,
                                                               __func__);
  options = dialogflow_es_internal::ParticipantsDefaultOptions(
      location, std::move(options));
  auto background = internal::MakeBackgroundThreadsFactory(options)();
  auto auth = internal::CreateAuthenticationStrategy(background->cq(), options);
  auto stub = dialogflow_es_internal::CreateDefaultParticipantsStub(
      std::move(auth), options);
  return dialogflow_es_internal::MakeParticipantsTracingConnection(
      std::make_shared<dialogflow_es_internal::ParticipantsConnectionImpl>(
          std::move(background), std::move(stub), std::move(options)));
}

std::shared_ptr<ParticipantsConnection> MakeParticipantsConnection(
    Options options) {
  return MakeParticipantsConnection(std::string{}, std::move(options));
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace dialogflow_es
}  // namespace cloud
}  // namespace google
