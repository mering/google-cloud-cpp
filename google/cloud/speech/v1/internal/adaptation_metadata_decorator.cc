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
// source: google/cloud/speech/v1/cloud_speech_adaptation.proto

#include "google/cloud/speech/v1/internal/adaptation_metadata_decorator.h"
#include "google/cloud/grpc_options.h"
#include "google/cloud/internal/absl_str_cat_quiet.h"
#include "google/cloud/internal/api_client_header.h"
#include "google/cloud/internal/url_encode.h"
#include "google/cloud/status_or.h"
#include "google/cloud/speech/v1/cloud_speech_adaptation.grpc.pb.h"
#include <memory>
#include <string>
#include <utility>
#include <vector>

namespace google {
namespace cloud {
namespace speech_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

AdaptationMetadata::AdaptationMetadata(
    std::shared_ptr<AdaptationStub> child,
    std::multimap<std::string, std::string> fixed_metadata,
    std::string api_client_header)
    : child_(std::move(child)),
      fixed_metadata_(std::move(fixed_metadata)),
      api_client_header_(
          api_client_header.empty()
              ? google::cloud::internal::GeneratedLibClientHeader()
              : std::move(api_client_header)) {}

StatusOr<google::cloud::speech::v1::PhraseSet>
AdaptationMetadata::CreatePhraseSet(
    grpc::ClientContext& context, Options const& options,
    google::cloud::speech::v1::CreatePhraseSetRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->CreatePhraseSet(context, options, request);
}

StatusOr<google::cloud::speech::v1::PhraseSet> AdaptationMetadata::GetPhraseSet(
    grpc::ClientContext& context, Options const& options,
    google::cloud::speech::v1::GetPhraseSetRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->GetPhraseSet(context, options, request);
}

StatusOr<google::cloud::speech::v1::ListPhraseSetResponse>
AdaptationMetadata::ListPhraseSet(
    grpc::ClientContext& context, Options const& options,
    google::cloud::speech::v1::ListPhraseSetRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->ListPhraseSet(context, options, request);
}

StatusOr<google::cloud::speech::v1::PhraseSet>
AdaptationMetadata::UpdatePhraseSet(
    grpc::ClientContext& context, Options const& options,
    google::cloud::speech::v1::UpdatePhraseSetRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("phrase_set.name=",
                           internal::UrlEncode(request.phrase_set().name())));
  return child_->UpdatePhraseSet(context, options, request);
}

Status AdaptationMetadata::DeletePhraseSet(
    grpc::ClientContext& context, Options const& options,
    google::cloud::speech::v1::DeletePhraseSetRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->DeletePhraseSet(context, options, request);
}

StatusOr<google::cloud::speech::v1::CustomClass>
AdaptationMetadata::CreateCustomClass(
    grpc::ClientContext& context, Options const& options,
    google::cloud::speech::v1::CreateCustomClassRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->CreateCustomClass(context, options, request);
}

StatusOr<google::cloud::speech::v1::CustomClass>
AdaptationMetadata::GetCustomClass(
    grpc::ClientContext& context, Options const& options,
    google::cloud::speech::v1::GetCustomClassRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->GetCustomClass(context, options, request);
}

StatusOr<google::cloud::speech::v1::ListCustomClassesResponse>
AdaptationMetadata::ListCustomClasses(
    grpc::ClientContext& context, Options const& options,
    google::cloud::speech::v1::ListCustomClassesRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->ListCustomClasses(context, options, request);
}

StatusOr<google::cloud::speech::v1::CustomClass>
AdaptationMetadata::UpdateCustomClass(
    grpc::ClientContext& context, Options const& options,
    google::cloud::speech::v1::UpdateCustomClassRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("custom_class.name=",
                           internal::UrlEncode(request.custom_class().name())));
  return child_->UpdateCustomClass(context, options, request);
}

Status AdaptationMetadata::DeleteCustomClass(
    grpc::ClientContext& context, Options const& options,
    google::cloud::speech::v1::DeleteCustomClassRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->DeleteCustomClass(context, options, request);
}

StatusOr<google::longrunning::ListOperationsResponse>
AdaptationMetadata::ListOperations(
    grpc::ClientContext& context, Options const& options,
    google::longrunning::ListOperationsRequest const& request) {
  SetMetadata(context, options, absl::StrCat());
  return child_->ListOperations(context, options, request);
}

StatusOr<google::longrunning::Operation> AdaptationMetadata::GetOperation(
    grpc::ClientContext& context, Options const& options,
    google::longrunning::GetOperationRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->GetOperation(context, options, request);
}

void AdaptationMetadata::SetMetadata(grpc::ClientContext& context,
                                     Options const& options,
                                     std::string const& request_params) {
  context.AddMetadata("x-goog-request-params", request_params);
  SetMetadata(context, options);
}

void AdaptationMetadata::SetMetadata(grpc::ClientContext& context,
                                     Options const& options) {
  google::cloud::internal::SetMetadata(context, options, fixed_metadata_,
                                       api_client_header_);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace speech_v1_internal
}  // namespace cloud
}  // namespace google
