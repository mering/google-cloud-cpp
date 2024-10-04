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
// source: google/cloud/dialogflow/v2/context.proto

#include "google/cloud/dialogflow_es/internal/contexts_tracing_connection.h"
#include "google/cloud/internal/opentelemetry.h"
#include "google/cloud/internal/traced_stream_range.h"
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace dialogflow_es_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

ContextsTracingConnection::ContextsTracingConnection(
    std::shared_ptr<dialogflow_es::ContextsConnection> child)
    : child_(std::move(child)) {}

StreamRange<google::cloud::dialogflow::v2::Context>
ContextsTracingConnection::ListContexts(
    google::cloud::dialogflow::v2::ListContextsRequest request) {
  auto span =
      internal::MakeSpan("dialogflow_es::ContextsConnection::ListContexts");
  internal::OTelScope scope(span);
  auto sr = child_->ListContexts(std::move(request));
  return internal::MakeTracedStreamRange<
      google::cloud::dialogflow::v2::Context>(std::move(span), std::move(sr));
}

StatusOr<google::cloud::dialogflow::v2::Context>
ContextsTracingConnection::GetContext(
    google::cloud::dialogflow::v2::GetContextRequest const& request) {
  auto span =
      internal::MakeSpan("dialogflow_es::ContextsConnection::GetContext");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->GetContext(request));
}

StatusOr<google::cloud::dialogflow::v2::Context>
ContextsTracingConnection::CreateContext(
    google::cloud::dialogflow::v2::CreateContextRequest const& request) {
  auto span =
      internal::MakeSpan("dialogflow_es::ContextsConnection::CreateContext");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->CreateContext(request));
}

StatusOr<google::cloud::dialogflow::v2::Context>
ContextsTracingConnection::UpdateContext(
    google::cloud::dialogflow::v2::UpdateContextRequest const& request) {
  auto span =
      internal::MakeSpan("dialogflow_es::ContextsConnection::UpdateContext");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->UpdateContext(request));
}

Status ContextsTracingConnection::DeleteContext(
    google::cloud::dialogflow::v2::DeleteContextRequest const& request) {
  auto span =
      internal::MakeSpan("dialogflow_es::ContextsConnection::DeleteContext");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->DeleteContext(request));
}

Status ContextsTracingConnection::DeleteAllContexts(
    google::cloud::dialogflow::v2::DeleteAllContextsRequest const& request) {
  auto span = internal::MakeSpan(
      "dialogflow_es::ContextsConnection::DeleteAllContexts");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->DeleteAllContexts(request));
}

StreamRange<google::cloud::location::Location>
ContextsTracingConnection::ListLocations(
    google::cloud::location::ListLocationsRequest request) {
  auto span =
      internal::MakeSpan("dialogflow_es::ContextsConnection::ListLocations");
  internal::OTelScope scope(span);
  auto sr = child_->ListLocations(std::move(request));
  return internal::MakeTracedStreamRange<google::cloud::location::Location>(
      std::move(span), std::move(sr));
}

StatusOr<google::cloud::location::Location>
ContextsTracingConnection::GetLocation(
    google::cloud::location::GetLocationRequest const& request) {
  auto span =
      internal::MakeSpan("dialogflow_es::ContextsConnection::GetLocation");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->GetLocation(request));
}

StreamRange<google::longrunning::Operation>
ContextsTracingConnection::ListOperations(
    google::longrunning::ListOperationsRequest request) {
  auto span =
      internal::MakeSpan("dialogflow_es::ContextsConnection::ListOperations");
  internal::OTelScope scope(span);
  auto sr = child_->ListOperations(std::move(request));
  return internal::MakeTracedStreamRange<google::longrunning::Operation>(
      std::move(span), std::move(sr));
}

StatusOr<google::longrunning::Operation>
ContextsTracingConnection::GetOperation(
    google::longrunning::GetOperationRequest const& request) {
  auto span =
      internal::MakeSpan("dialogflow_es::ContextsConnection::GetOperation");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->GetOperation(request));
}

Status ContextsTracingConnection::CancelOperation(
    google::longrunning::CancelOperationRequest const& request) {
  auto span =
      internal::MakeSpan("dialogflow_es::ContextsConnection::CancelOperation");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->CancelOperation(request));
}

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

std::shared_ptr<dialogflow_es::ContextsConnection>
MakeContextsTracingConnection(
    std::shared_ptr<dialogflow_es::ContextsConnection> conn) {
#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
  if (internal::TracingEnabled(conn->options())) {
    conn = std::make_shared<ContextsTracingConnection>(std::move(conn));
  }
#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
  return conn;
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace dialogflow_es_internal
}  // namespace cloud
}  // namespace google
