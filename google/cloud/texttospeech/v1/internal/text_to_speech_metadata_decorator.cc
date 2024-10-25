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
// source: google/cloud/texttospeech/v1/cloud_tts.proto

#include "google/cloud/texttospeech/v1/internal/text_to_speech_metadata_decorator.h"
#include "google/cloud/grpc_options.h"
#include "google/cloud/internal/absl_str_cat_quiet.h"
#include "google/cloud/internal/api_client_header.h"
#include "google/cloud/internal/url_encode.h"
#include "google/cloud/status_or.h"
#include "google/cloud/texttospeech/v1/cloud_tts.grpc.pb.h"
#include <memory>
#include <string>
#include <utility>
#include <vector>

namespace google {
namespace cloud {
namespace texttospeech_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

TextToSpeechMetadata::TextToSpeechMetadata(
    std::shared_ptr<TextToSpeechStub> child,
    std::multimap<std::string, std::string> fixed_metadata,
    std::string api_client_header)
    : child_(std::move(child)),
      fixed_metadata_(std::move(fixed_metadata)),
      api_client_header_(
          api_client_header.empty()
              ? google::cloud::internal::GeneratedLibClientHeader()
              : std::move(api_client_header)) {}

StatusOr<google::cloud::texttospeech::v1::ListVoicesResponse>
TextToSpeechMetadata::ListVoices(
    grpc::ClientContext& context, Options const& options,
    google::cloud::texttospeech::v1::ListVoicesRequest const& request) {
  SetMetadata(context, options);
  return child_->ListVoices(context, options, request);
}

StatusOr<google::cloud::texttospeech::v1::SynthesizeSpeechResponse>
TextToSpeechMetadata::SynthesizeSpeech(
    grpc::ClientContext& context, Options const& options,
    google::cloud::texttospeech::v1::SynthesizeSpeechRequest const& request) {
  SetMetadata(context, options);
  return child_->SynthesizeSpeech(context, options, request);
}

std::unique_ptr<::google::cloud::AsyncStreamingReadWriteRpc<
    google::cloud::texttospeech::v1::StreamingSynthesizeRequest,
    google::cloud::texttospeech::v1::StreamingSynthesizeResponse>>
TextToSpeechMetadata::AsyncStreamingSynthesize(
    google::cloud::CompletionQueue const& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options) {
  SetMetadata(*context, *options);
  return child_->AsyncStreamingSynthesize(cq, std::move(context),
                                          std::move(options));
}

StatusOr<google::longrunning::ListOperationsResponse>
TextToSpeechMetadata::ListOperations(
    grpc::ClientContext& context, Options const& options,
    google::longrunning::ListOperationsRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->ListOperations(context, options, request);
}

StatusOr<google::longrunning::Operation> TextToSpeechMetadata::GetOperation(
    grpc::ClientContext& context, Options const& options,
    google::longrunning::GetOperationRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->GetOperation(context, options, request);
}

void TextToSpeechMetadata::SetMetadata(grpc::ClientContext& context,
                                       Options const& options,
                                       std::string const& request_params) {
  context.AddMetadata("x-goog-request-params", request_params);
  SetMetadata(context, options);
}

void TextToSpeechMetadata::SetMetadata(grpc::ClientContext& context,
                                       Options const& options) {
  google::cloud::internal::SetMetadata(context, options, fixed_metadata_,
                                       api_client_header_);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace texttospeech_v1_internal
}  // namespace cloud
}  // namespace google
