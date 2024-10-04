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
// source: google/cloud/dialogflow/cx/v3/version.proto

#include "google/cloud/dialogflow_cx/internal/versions_tracing_connection.h"
#include "google/cloud/internal/opentelemetry.h"
#include "google/cloud/internal/traced_stream_range.h"
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace dialogflow_cx_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

VersionsTracingConnection::VersionsTracingConnection(
    std::shared_ptr<dialogflow_cx::VersionsConnection> child)
    : child_(std::move(child)) {}

StreamRange<google::cloud::dialogflow::cx::v3::Version>
VersionsTracingConnection::ListVersions(
    google::cloud::dialogflow::cx::v3::ListVersionsRequest request) {
  auto span =
      internal::MakeSpan("dialogflow_cx::VersionsConnection::ListVersions");
  internal::OTelScope scope(span);
  auto sr = child_->ListVersions(std::move(request));
  return internal::MakeTracedStreamRange<
      google::cloud::dialogflow::cx::v3::Version>(std::move(span),
                                                  std::move(sr));
}

StatusOr<google::cloud::dialogflow::cx::v3::Version>
VersionsTracingConnection::GetVersion(
    google::cloud::dialogflow::cx::v3::GetVersionRequest const& request) {
  auto span =
      internal::MakeSpan("dialogflow_cx::VersionsConnection::GetVersion");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->GetVersion(request));
}

future<StatusOr<google::cloud::dialogflow::cx::v3::Version>>
VersionsTracingConnection::CreateVersion(
    google::cloud::dialogflow::cx::v3::CreateVersionRequest const& request) {
  auto span =
      internal::MakeSpan("dialogflow_cx::VersionsConnection::CreateVersion");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span), child_->CreateVersion(request));
}

StatusOr<google::longrunning::Operation>
VersionsTracingConnection::CreateVersion(
    NoAwaitTag,
    google::cloud::dialogflow::cx::v3::CreateVersionRequest const& request) {
  auto span =
      internal::MakeSpan("dialogflow_cx::VersionsConnection::CreateVersion");
  opentelemetry::trace::Scope scope(span);
  return internal::EndSpan(*span, child_->CreateVersion(NoAwaitTag{}, request));
}

future<StatusOr<google::cloud::dialogflow::cx::v3::Version>>
VersionsTracingConnection::CreateVersion(
    google::longrunning::Operation const& operation) {
  auto span =
      internal::MakeSpan("dialogflow_cx::VersionsConnection::CreateVersion");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span), child_->CreateVersion(operation));
}

StatusOr<google::cloud::dialogflow::cx::v3::Version>
VersionsTracingConnection::UpdateVersion(
    google::cloud::dialogflow::cx::v3::UpdateVersionRequest const& request) {
  auto span =
      internal::MakeSpan("dialogflow_cx::VersionsConnection::UpdateVersion");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->UpdateVersion(request));
}

Status VersionsTracingConnection::DeleteVersion(
    google::cloud::dialogflow::cx::v3::DeleteVersionRequest const& request) {
  auto span =
      internal::MakeSpan("dialogflow_cx::VersionsConnection::DeleteVersion");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->DeleteVersion(request));
}

future<StatusOr<google::protobuf::Struct>>
VersionsTracingConnection::LoadVersion(
    google::cloud::dialogflow::cx::v3::LoadVersionRequest const& request) {
  auto span =
      internal::MakeSpan("dialogflow_cx::VersionsConnection::LoadVersion");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span), child_->LoadVersion(request));
}

StatusOr<google::longrunning::Operation> VersionsTracingConnection::LoadVersion(
    NoAwaitTag,
    google::cloud::dialogflow::cx::v3::LoadVersionRequest const& request) {
  auto span =
      internal::MakeSpan("dialogflow_cx::VersionsConnection::LoadVersion");
  opentelemetry::trace::Scope scope(span);
  return internal::EndSpan(*span, child_->LoadVersion(NoAwaitTag{}, request));
}

future<StatusOr<google::protobuf::Struct>>
VersionsTracingConnection::LoadVersion(
    google::longrunning::Operation const& operation) {
  auto span =
      internal::MakeSpan("dialogflow_cx::VersionsConnection::LoadVersion");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span), child_->LoadVersion(operation));
}

StatusOr<google::cloud::dialogflow::cx::v3::CompareVersionsResponse>
VersionsTracingConnection::CompareVersions(
    google::cloud::dialogflow::cx::v3::CompareVersionsRequest const& request) {
  auto span =
      internal::MakeSpan("dialogflow_cx::VersionsConnection::CompareVersions");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->CompareVersions(request));
}

StreamRange<google::cloud::location::Location>
VersionsTracingConnection::ListLocations(
    google::cloud::location::ListLocationsRequest request) {
  auto span =
      internal::MakeSpan("dialogflow_cx::VersionsConnection::ListLocations");
  internal::OTelScope scope(span);
  auto sr = child_->ListLocations(std::move(request));
  return internal::MakeTracedStreamRange<google::cloud::location::Location>(
      std::move(span), std::move(sr));
}

StatusOr<google::cloud::location::Location>
VersionsTracingConnection::GetLocation(
    google::cloud::location::GetLocationRequest const& request) {
  auto span =
      internal::MakeSpan("dialogflow_cx::VersionsConnection::GetLocation");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->GetLocation(request));
}

StreamRange<google::longrunning::Operation>
VersionsTracingConnection::ListOperations(
    google::longrunning::ListOperationsRequest request) {
  auto span =
      internal::MakeSpan("dialogflow_cx::VersionsConnection::ListOperations");
  internal::OTelScope scope(span);
  auto sr = child_->ListOperations(std::move(request));
  return internal::MakeTracedStreamRange<google::longrunning::Operation>(
      std::move(span), std::move(sr));
}

StatusOr<google::longrunning::Operation>
VersionsTracingConnection::GetOperation(
    google::longrunning::GetOperationRequest const& request) {
  auto span =
      internal::MakeSpan("dialogflow_cx::VersionsConnection::GetOperation");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->GetOperation(request));
}

Status VersionsTracingConnection::CancelOperation(
    google::longrunning::CancelOperationRequest const& request) {
  auto span =
      internal::MakeSpan("dialogflow_cx::VersionsConnection::CancelOperation");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->CancelOperation(request));
}

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

std::shared_ptr<dialogflow_cx::VersionsConnection>
MakeVersionsTracingConnection(
    std::shared_ptr<dialogflow_cx::VersionsConnection> conn) {
#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
  if (internal::TracingEnabled(conn->options())) {
    conn = std::make_shared<VersionsTracingConnection>(std::move(conn));
  }
#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
  return conn;
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace dialogflow_cx_internal
}  // namespace cloud
}  // namespace google
