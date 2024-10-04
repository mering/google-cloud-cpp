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
// source: google/cloud/dialogflow/v2/environment.proto

#include "google/cloud/dialogflow_es/internal/environments_tracing_connection.h"
#include "google/cloud/internal/opentelemetry.h"
#include "google/cloud/internal/traced_stream_range.h"
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace dialogflow_es_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

EnvironmentsTracingConnection::EnvironmentsTracingConnection(
    std::shared_ptr<dialogflow_es::EnvironmentsConnection> child)
    : child_(std::move(child)) {}

StreamRange<google::cloud::dialogflow::v2::Environment>
EnvironmentsTracingConnection::ListEnvironments(
    google::cloud::dialogflow::v2::ListEnvironmentsRequest request) {
  auto span = internal::MakeSpan(
      "dialogflow_es::EnvironmentsConnection::ListEnvironments");
  internal::OTelScope scope(span);
  auto sr = child_->ListEnvironments(std::move(request));
  return internal::MakeTracedStreamRange<
      google::cloud::dialogflow::v2::Environment>(std::move(span),
                                                  std::move(sr));
}

StatusOr<google::cloud::dialogflow::v2::Environment>
EnvironmentsTracingConnection::GetEnvironment(
    google::cloud::dialogflow::v2::GetEnvironmentRequest const& request) {
  auto span = internal::MakeSpan(
      "dialogflow_es::EnvironmentsConnection::GetEnvironment");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->GetEnvironment(request));
}

StatusOr<google::cloud::dialogflow::v2::Environment>
EnvironmentsTracingConnection::CreateEnvironment(
    google::cloud::dialogflow::v2::CreateEnvironmentRequest const& request) {
  auto span = internal::MakeSpan(
      "dialogflow_es::EnvironmentsConnection::CreateEnvironment");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->CreateEnvironment(request));
}

StatusOr<google::cloud::dialogflow::v2::Environment>
EnvironmentsTracingConnection::UpdateEnvironment(
    google::cloud::dialogflow::v2::UpdateEnvironmentRequest const& request) {
  auto span = internal::MakeSpan(
      "dialogflow_es::EnvironmentsConnection::UpdateEnvironment");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->UpdateEnvironment(request));
}

Status EnvironmentsTracingConnection::DeleteEnvironment(
    google::cloud::dialogflow::v2::DeleteEnvironmentRequest const& request) {
  auto span = internal::MakeSpan(
      "dialogflow_es::EnvironmentsConnection::DeleteEnvironment");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->DeleteEnvironment(request));
}

StreamRange<google::cloud::dialogflow::v2::EnvironmentHistory::Entry>
EnvironmentsTracingConnection::GetEnvironmentHistory(
    google::cloud::dialogflow::v2::GetEnvironmentHistoryRequest request) {
  auto span = internal::MakeSpan(
      "dialogflow_es::EnvironmentsConnection::GetEnvironmentHistory");
  internal::OTelScope scope(span);
  auto sr = child_->GetEnvironmentHistory(std::move(request));
  return internal::MakeTracedStreamRange<
      google::cloud::dialogflow::v2::EnvironmentHistory::Entry>(std::move(span),
                                                                std::move(sr));
}

StreamRange<google::cloud::location::Location>
EnvironmentsTracingConnection::ListLocations(
    google::cloud::location::ListLocationsRequest request) {
  auto span = internal::MakeSpan(
      "dialogflow_es::EnvironmentsConnection::ListLocations");
  internal::OTelScope scope(span);
  auto sr = child_->ListLocations(std::move(request));
  return internal::MakeTracedStreamRange<google::cloud::location::Location>(
      std::move(span), std::move(sr));
}

StatusOr<google::cloud::location::Location>
EnvironmentsTracingConnection::GetLocation(
    google::cloud::location::GetLocationRequest const& request) {
  auto span =
      internal::MakeSpan("dialogflow_es::EnvironmentsConnection::GetLocation");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->GetLocation(request));
}

StreamRange<google::longrunning::Operation>
EnvironmentsTracingConnection::ListOperations(
    google::longrunning::ListOperationsRequest request) {
  auto span = internal::MakeSpan(
      "dialogflow_es::EnvironmentsConnection::ListOperations");
  internal::OTelScope scope(span);
  auto sr = child_->ListOperations(std::move(request));
  return internal::MakeTracedStreamRange<google::longrunning::Operation>(
      std::move(span), std::move(sr));
}

StatusOr<google::longrunning::Operation>
EnvironmentsTracingConnection::GetOperation(
    google::longrunning::GetOperationRequest const& request) {
  auto span =
      internal::MakeSpan("dialogflow_es::EnvironmentsConnection::GetOperation");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->GetOperation(request));
}

Status EnvironmentsTracingConnection::CancelOperation(
    google::longrunning::CancelOperationRequest const& request) {
  auto span = internal::MakeSpan(
      "dialogflow_es::EnvironmentsConnection::CancelOperation");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->CancelOperation(request));
}

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

std::shared_ptr<dialogflow_es::EnvironmentsConnection>
MakeEnvironmentsTracingConnection(
    std::shared_ptr<dialogflow_es::EnvironmentsConnection> conn) {
#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
  if (internal::TracingEnabled(conn->options())) {
    conn = std::make_shared<EnvironmentsTracingConnection>(std::move(conn));
  }
#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
  return conn;
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace dialogflow_es_internal
}  // namespace cloud
}  // namespace google
