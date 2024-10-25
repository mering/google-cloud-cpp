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
// source: google/cloud/language/v2/language_service.proto

#include "google/cloud/language/v2/internal/language_stub.h"
#include "google/cloud/grpc_error_delegate.h"
#include "google/cloud/status_or.h"
#include "google/cloud/language/v2/language_service.grpc.pb.h"
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace language_v2_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

LanguageServiceStub::~LanguageServiceStub() = default;

StatusOr<google::cloud::language::v2::AnalyzeSentimentResponse>
DefaultLanguageServiceStub::AnalyzeSentiment(
    grpc::ClientContext& context, Options const&,
    google::cloud::language::v2::AnalyzeSentimentRequest const& request) {
  google::cloud::language::v2::AnalyzeSentimentResponse response;
  auto status = grpc_stub_->AnalyzeSentiment(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::language::v2::AnalyzeEntitiesResponse>
DefaultLanguageServiceStub::AnalyzeEntities(
    grpc::ClientContext& context, Options const&,
    google::cloud::language::v2::AnalyzeEntitiesRequest const& request) {
  google::cloud::language::v2::AnalyzeEntitiesResponse response;
  auto status = grpc_stub_->AnalyzeEntities(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::language::v2::ClassifyTextResponse>
DefaultLanguageServiceStub::ClassifyText(
    grpc::ClientContext& context, Options const&,
    google::cloud::language::v2::ClassifyTextRequest const& request) {
  google::cloud::language::v2::ClassifyTextResponse response;
  auto status = grpc_stub_->ClassifyText(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::language::v2::ModerateTextResponse>
DefaultLanguageServiceStub::ModerateText(
    grpc::ClientContext& context, Options const&,
    google::cloud::language::v2::ModerateTextRequest const& request) {
  google::cloud::language::v2::ModerateTextResponse response;
  auto status = grpc_stub_->ModerateText(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::language::v2::AnnotateTextResponse>
DefaultLanguageServiceStub::AnnotateText(
    grpc::ClientContext& context, Options const&,
    google::cloud::language::v2::AnnotateTextRequest const& request) {
  google::cloud::language::v2::AnnotateTextResponse response;
  auto status = grpc_stub_->AnnotateText(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace language_v2_internal
}  // namespace cloud
}  // namespace google
