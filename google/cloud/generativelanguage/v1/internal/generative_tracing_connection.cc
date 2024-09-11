// Copyright 2024 Google LLC
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
// source: google/ai/generativelanguage/v1/generative_service.proto

#include "google/cloud/generativelanguage/v1/internal/generative_tracing_connection.h"
#include "google/cloud/internal/opentelemetry.h"
#include "google/cloud/internal/traced_stream_range.h"
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace generativelanguage_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

GenerativeServiceTracingConnection::GenerativeServiceTracingConnection(
    std::shared_ptr<generativelanguage_v1::GenerativeServiceConnection> child)
    : child_(std::move(child)) {}

StatusOr<google::ai::generativelanguage::v1::GenerateContentResponse>
GenerativeServiceTracingConnection::GenerateContent(
    google::ai::generativelanguage::v1::GenerateContentRequest const& request) {
  auto span = internal::MakeSpan(
      "generativelanguage_v1::GenerativeServiceConnection::GenerateContent");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->GenerateContent(request));
}

StreamRange<google::ai::generativelanguage::v1::GenerateContentResponse>
GenerativeServiceTracingConnection::StreamGenerateContent(
    google::ai::generativelanguage::v1::GenerateContentRequest const& request) {
  auto span = internal::MakeSpan(
      "generativelanguage_v1::GenerativeServiceConnection::"
      "StreamGenerateContent");
  internal::OTelScope scope(span);
  auto sr = child_->StreamGenerateContent(request);
  return internal::MakeTracedStreamRange<
      google::ai::generativelanguage::v1::GenerateContentResponse>(
      std::move(span), std::move(sr));
}
StatusOr<google::ai::generativelanguage::v1::EmbedContentResponse>
GenerativeServiceTracingConnection::EmbedContent(
    google::ai::generativelanguage::v1::EmbedContentRequest const& request) {
  auto span = internal::MakeSpan(
      "generativelanguage_v1::GenerativeServiceConnection::EmbedContent");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->EmbedContent(request));
}

StatusOr<google::ai::generativelanguage::v1::BatchEmbedContentsResponse>
GenerativeServiceTracingConnection::BatchEmbedContents(
    google::ai::generativelanguage::v1::BatchEmbedContentsRequest const&
        request) {
  auto span = internal::MakeSpan(
      "generativelanguage_v1::GenerativeServiceConnection::BatchEmbedContents");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->BatchEmbedContents(request));
}

StatusOr<google::ai::generativelanguage::v1::CountTokensResponse>
GenerativeServiceTracingConnection::CountTokens(
    google::ai::generativelanguage::v1::CountTokensRequest const& request) {
  auto span = internal::MakeSpan(
      "generativelanguage_v1::GenerativeServiceConnection::CountTokens");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->CountTokens(request));
}

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

std::shared_ptr<generativelanguage_v1::GenerativeServiceConnection>
MakeGenerativeServiceTracingConnection(
    std::shared_ptr<generativelanguage_v1::GenerativeServiceConnection> conn) {
#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
  if (internal::TracingEnabled(conn->options())) {
    conn =
        std::make_shared<GenerativeServiceTracingConnection>(std::move(conn));
  }
#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
  return conn;
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace generativelanguage_v1_internal
}  // namespace cloud
}  // namespace google
