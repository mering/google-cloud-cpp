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

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_TEXTTOSPEECH_V1_INTERNAL_TEXT_TO_SPEECH_CONNECTION_IMPL_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_TEXTTOSPEECH_V1_INTERNAL_TEXT_TO_SPEECH_CONNECTION_IMPL_H

#include "google/cloud/texttospeech/v1/internal/text_to_speech_retry_traits.h"
#include "google/cloud/texttospeech/v1/internal/text_to_speech_stub.h"
#include "google/cloud/texttospeech/v1/text_to_speech_connection.h"
#include "google/cloud/texttospeech/v1/text_to_speech_connection_idempotency_policy.h"
#include "google/cloud/texttospeech/v1/text_to_speech_options.h"
#include "google/cloud/async_streaming_read_write_rpc.h"
#include "google/cloud/background_threads.h"
#include "google/cloud/backoff_policy.h"
#include "google/cloud/options.h"
#include "google/cloud/status_or.h"
#include "google/cloud/stream_range.h"
#include "google/cloud/version.h"
#include <memory>

namespace google {
namespace cloud {
namespace texttospeech_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class TextToSpeechConnectionImpl
    : public texttospeech_v1::TextToSpeechConnection {
 public:
  ~TextToSpeechConnectionImpl() override = default;

  TextToSpeechConnectionImpl(
      std::unique_ptr<google::cloud::BackgroundThreads> background,
      std::shared_ptr<texttospeech_v1_internal::TextToSpeechStub> stub,
      Options options);

  Options options() override { return options_; }

  StatusOr<google::cloud::texttospeech::v1::ListVoicesResponse> ListVoices(
      google::cloud::texttospeech::v1::ListVoicesRequest const& request)
      override;

  StatusOr<google::cloud::texttospeech::v1::SynthesizeSpeechResponse>
  SynthesizeSpeech(
      google::cloud::texttospeech::v1::SynthesizeSpeechRequest const& request)
      override;

  std::unique_ptr<::google::cloud::AsyncStreamingReadWriteRpc<
      google::cloud::texttospeech::v1::StreamingSynthesizeRequest,
      google::cloud::texttospeech::v1::StreamingSynthesizeResponse>>
  AsyncStreamingSynthesize() override;

  StreamRange<google::longrunning::Operation> ListOperations(
      google::longrunning::ListOperationsRequest request) override;

  StatusOr<google::longrunning::Operation> GetOperation(
      google::longrunning::GetOperationRequest const& request) override;

 private:
  std::unique_ptr<google::cloud::BackgroundThreads> background_;
  std::shared_ptr<texttospeech_v1_internal::TextToSpeechStub> stub_;
  Options options_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace texttospeech_v1_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_TEXTTOSPEECH_V1_INTERNAL_TEXT_TO_SPEECH_CONNECTION_IMPL_H
