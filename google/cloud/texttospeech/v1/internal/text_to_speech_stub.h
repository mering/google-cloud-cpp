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

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_TEXTTOSPEECH_V1_INTERNAL_TEXT_TO_SPEECH_STUB_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_TEXTTOSPEECH_V1_INTERNAL_TEXT_TO_SPEECH_STUB_H

#include "google/cloud/texttospeech/v1/cloud_tts.grpc.pb.h"
#include "google/cloud/async_streaming_read_write_rpc.h"
#include "google/cloud/completion_queue.h"
#include "google/cloud/options.h"
#include "google/cloud/status_or.h"
#include "google/cloud/version.h"
#include "google/longrunning/operations.grpc.pb.h"
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace texttospeech_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class TextToSpeechStub {
 public:
  virtual ~TextToSpeechStub() = 0;

  virtual StatusOr<google::cloud::texttospeech::v1::ListVoicesResponse>
  ListVoices(
      grpc::ClientContext& context, Options const& options,
      google::cloud::texttospeech::v1::ListVoicesRequest const& request) = 0;

  virtual StatusOr<google::cloud::texttospeech::v1::SynthesizeSpeechResponse>
  SynthesizeSpeech(
      grpc::ClientContext& context, Options const& options,
      google::cloud::texttospeech::v1::SynthesizeSpeechRequest const&
          request) = 0;

  virtual std::unique_ptr<::google::cloud::AsyncStreamingReadWriteRpc<
      google::cloud::texttospeech::v1::StreamingSynthesizeRequest,
      google::cloud::texttospeech::v1::StreamingSynthesizeResponse>>
  AsyncStreamingSynthesize(
      google::cloud::CompletionQueue const& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options) = 0;

  virtual StatusOr<google::longrunning::ListOperationsResponse> ListOperations(
      grpc::ClientContext& context, Options const& options,
      google::longrunning::ListOperationsRequest const& request) = 0;

  virtual StatusOr<google::longrunning::Operation> GetOperation(
      grpc::ClientContext& context, Options const& options,
      google::longrunning::GetOperationRequest const& request) = 0;
};

class DefaultTextToSpeechStub : public TextToSpeechStub {
 public:
  explicit DefaultTextToSpeechStub(
      std::unique_ptr<
          google::cloud::texttospeech::v1::TextToSpeech::StubInterface>
          grpc_stub,
      std::unique_ptr<google::longrunning::Operations::StubInterface>
          operations_stub)
      : grpc_stub_(std::move(grpc_stub)),
        operations_stub_(std::move(operations_stub)) {}

  StatusOr<google::cloud::texttospeech::v1::ListVoicesResponse> ListVoices(
      grpc::ClientContext& context, Options const& options,
      google::cloud::texttospeech::v1::ListVoicesRequest const& request)
      override;

  StatusOr<google::cloud::texttospeech::v1::SynthesizeSpeechResponse>
  SynthesizeSpeech(
      grpc::ClientContext& context, Options const& options,
      google::cloud::texttospeech::v1::SynthesizeSpeechRequest const& request)
      override;

  std::unique_ptr<::google::cloud::AsyncStreamingReadWriteRpc<
      google::cloud::texttospeech::v1::StreamingSynthesizeRequest,
      google::cloud::texttospeech::v1::StreamingSynthesizeResponse>>
  AsyncStreamingSynthesize(
      google::cloud::CompletionQueue const& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options) override;

  StatusOr<google::longrunning::ListOperationsResponse> ListOperations(
      grpc::ClientContext& context, Options const& options,
      google::longrunning::ListOperationsRequest const& request) override;

  StatusOr<google::longrunning::Operation> GetOperation(
      grpc::ClientContext& context, Options const& options,
      google::longrunning::GetOperationRequest const& request) override;

 private:
  std::unique_ptr<google::cloud::texttospeech::v1::TextToSpeech::StubInterface>
      grpc_stub_;
  std::unique_ptr<google::longrunning::Operations::StubInterface>
      operations_stub_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace texttospeech_v1_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_TEXTTOSPEECH_V1_INTERNAL_TEXT_TO_SPEECH_STUB_H
