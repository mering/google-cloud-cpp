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
// source: google/cloud/dialogflow/cx/v3/session_entity_type.proto

#include "google/cloud/dialogflow_cx/internal/session_entity_types_tracing_connection.h"
#include "google/cloud/internal/opentelemetry.h"
#include "google/cloud/internal/traced_stream_range.h"
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace dialogflow_cx_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

SessionEntityTypesTracingConnection::SessionEntityTypesTracingConnection(
    std::shared_ptr<dialogflow_cx::SessionEntityTypesConnection> child)
    : child_(std::move(child)) {}

StreamRange<google::cloud::dialogflow::cx::v3::SessionEntityType>
SessionEntityTypesTracingConnection::ListSessionEntityTypes(
    google::cloud::dialogflow::cx::v3::ListSessionEntityTypesRequest request) {
  auto span = internal::MakeSpan(
      "dialogflow_cx::SessionEntityTypesConnection::ListSessionEntityTypes");
  internal::OTelScope scope(span);
  auto sr = child_->ListSessionEntityTypes(std::move(request));
  return internal::MakeTracedStreamRange<
      google::cloud::dialogflow::cx::v3::SessionEntityType>(std::move(span),
                                                            std::move(sr));
}

StatusOr<google::cloud::dialogflow::cx::v3::SessionEntityType>
SessionEntityTypesTracingConnection::GetSessionEntityType(
    google::cloud::dialogflow::cx::v3::GetSessionEntityTypeRequest const&
        request) {
  auto span = internal::MakeSpan(
      "dialogflow_cx::SessionEntityTypesConnection::GetSessionEntityType");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->GetSessionEntityType(request));
}

StatusOr<google::cloud::dialogflow::cx::v3::SessionEntityType>
SessionEntityTypesTracingConnection::CreateSessionEntityType(
    google::cloud::dialogflow::cx::v3::CreateSessionEntityTypeRequest const&
        request) {
  auto span = internal::MakeSpan(
      "dialogflow_cx::SessionEntityTypesConnection::CreateSessionEntityType");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->CreateSessionEntityType(request));
}

StatusOr<google::cloud::dialogflow::cx::v3::SessionEntityType>
SessionEntityTypesTracingConnection::UpdateSessionEntityType(
    google::cloud::dialogflow::cx::v3::UpdateSessionEntityTypeRequest const&
        request) {
  auto span = internal::MakeSpan(
      "dialogflow_cx::SessionEntityTypesConnection::UpdateSessionEntityType");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->UpdateSessionEntityType(request));
}

Status SessionEntityTypesTracingConnection::DeleteSessionEntityType(
    google::cloud::dialogflow::cx::v3::DeleteSessionEntityTypeRequest const&
        request) {
  auto span = internal::MakeSpan(
      "dialogflow_cx::SessionEntityTypesConnection::DeleteSessionEntityType");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->DeleteSessionEntityType(request));
}

StreamRange<google::cloud::location::Location>
SessionEntityTypesTracingConnection::ListLocations(
    google::cloud::location::ListLocationsRequest request) {
  auto span = internal::MakeSpan(
      "dialogflow_cx::SessionEntityTypesConnection::ListLocations");
  internal::OTelScope scope(span);
  auto sr = child_->ListLocations(std::move(request));
  return internal::MakeTracedStreamRange<google::cloud::location::Location>(
      std::move(span), std::move(sr));
}

StatusOr<google::cloud::location::Location>
SessionEntityTypesTracingConnection::GetLocation(
    google::cloud::location::GetLocationRequest const& request) {
  auto span = internal::MakeSpan(
      "dialogflow_cx::SessionEntityTypesConnection::GetLocation");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->GetLocation(request));
}

StreamRange<google::longrunning::Operation>
SessionEntityTypesTracingConnection::ListOperations(
    google::longrunning::ListOperationsRequest request) {
  auto span = internal::MakeSpan(
      "dialogflow_cx::SessionEntityTypesConnection::ListOperations");
  internal::OTelScope scope(span);
  auto sr = child_->ListOperations(std::move(request));
  return internal::MakeTracedStreamRange<google::longrunning::Operation>(
      std::move(span), std::move(sr));
}

StatusOr<google::longrunning::Operation>
SessionEntityTypesTracingConnection::GetOperation(
    google::longrunning::GetOperationRequest const& request) {
  auto span = internal::MakeSpan(
      "dialogflow_cx::SessionEntityTypesConnection::GetOperation");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->GetOperation(request));
}

Status SessionEntityTypesTracingConnection::CancelOperation(
    google::longrunning::CancelOperationRequest const& request) {
  auto span = internal::MakeSpan(
      "dialogflow_cx::SessionEntityTypesConnection::CancelOperation");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->CancelOperation(request));
}

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

std::shared_ptr<dialogflow_cx::SessionEntityTypesConnection>
MakeSessionEntityTypesTracingConnection(
    std::shared_ptr<dialogflow_cx::SessionEntityTypesConnection> conn) {
#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
  if (internal::TracingEnabled(conn->options())) {
    conn =
        std::make_shared<SessionEntityTypesTracingConnection>(std::move(conn));
  }
#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
  return conn;
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace dialogflow_cx_internal
}  // namespace cloud
}  // namespace google
