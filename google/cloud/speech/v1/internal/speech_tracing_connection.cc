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
// source: google/cloud/speech/v1/cloud_speech.proto

#include "google/cloud/speech/v1/internal/speech_tracing_connection.h"
#include "google/cloud/internal/opentelemetry.h"
#include "google/cloud/internal/traced_stream_range.h"
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace speech_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

SpeechTracingConnection::SpeechTracingConnection(
    std::shared_ptr<speech_v1::SpeechConnection> child)
    : child_(std::move(child)) {}

StatusOr<google::cloud::speech::v1::RecognizeResponse>
SpeechTracingConnection::Recognize(
    google::cloud::speech::v1::RecognizeRequest const& request) {
  auto span = internal::MakeSpan("speech_v1::SpeechConnection::Recognize");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->Recognize(request));
}

future<StatusOr<google::cloud::speech::v1::LongRunningRecognizeResponse>>
SpeechTracingConnection::LongRunningRecognize(
    google::cloud::speech::v1::LongRunningRecognizeRequest const& request) {
  auto span =
      internal::MakeSpan("speech_v1::SpeechConnection::LongRunningRecognize");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span),
                           child_->LongRunningRecognize(request));
}

StatusOr<google::longrunning::Operation>
SpeechTracingConnection::LongRunningRecognize(
    NoAwaitTag,
    google::cloud::speech::v1::LongRunningRecognizeRequest const& request) {
  auto span =
      internal::MakeSpan("speech_v1::SpeechConnection::LongRunningRecognize");
  opentelemetry::trace::Scope scope(span);
  return internal::EndSpan(*span,
                           child_->LongRunningRecognize(NoAwaitTag{}, request));
}

future<StatusOr<google::cloud::speech::v1::LongRunningRecognizeResponse>>
SpeechTracingConnection::LongRunningRecognize(
    google::longrunning::Operation const& operation) {
  auto span =
      internal::MakeSpan("speech_v1::SpeechConnection::LongRunningRecognize");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span),
                           child_->LongRunningRecognize(operation));
}

std::unique_ptr<::google::cloud::AsyncStreamingReadWriteRpc<
    google::cloud::speech::v1::StreamingRecognizeRequest,
    google::cloud::speech::v1::StreamingRecognizeResponse>>
SpeechTracingConnection::AsyncStreamingRecognize() {
  return child_->AsyncStreamingRecognize();
}

StreamRange<google::longrunning::Operation>
SpeechTracingConnection::ListOperations(
    google::longrunning::ListOperationsRequest request) {
  auto span = internal::MakeSpan("speech_v1::SpeechConnection::ListOperations");
  internal::OTelScope scope(span);
  auto sr = child_->ListOperations(std::move(request));
  return internal::MakeTracedStreamRange<google::longrunning::Operation>(
      std::move(span), std::move(sr));
}

StatusOr<google::longrunning::Operation> SpeechTracingConnection::GetOperation(
    google::longrunning::GetOperationRequest const& request) {
  auto span = internal::MakeSpan("speech_v1::SpeechConnection::GetOperation");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->GetOperation(request));
}

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

std::shared_ptr<speech_v1::SpeechConnection> MakeSpeechTracingConnection(
    std::shared_ptr<speech_v1::SpeechConnection> conn) {
#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
  if (internal::TracingEnabled(conn->options())) {
    conn = std::make_shared<SpeechTracingConnection>(std::move(conn));
  }
#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
  return conn;
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace speech_v1_internal
}  // namespace cloud
}  // namespace google
