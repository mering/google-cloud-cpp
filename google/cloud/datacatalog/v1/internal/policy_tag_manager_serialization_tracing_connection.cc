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
// source: google/cloud/datacatalog/v1/policytagmanagerserialization.proto

#include "google/cloud/datacatalog/v1/internal/policy_tag_manager_serialization_tracing_connection.h"
#include "google/cloud/internal/opentelemetry.h"
#include "google/cloud/internal/traced_stream_range.h"
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace datacatalog_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

PolicyTagManagerSerializationTracingConnection::
    PolicyTagManagerSerializationTracingConnection(
        std::shared_ptr<datacatalog_v1::PolicyTagManagerSerializationConnection>
            child)
    : child_(std::move(child)) {}

StatusOr<google::cloud::datacatalog::v1::Taxonomy>
PolicyTagManagerSerializationTracingConnection::ReplaceTaxonomy(
    google::cloud::datacatalog::v1::ReplaceTaxonomyRequest const& request) {
  auto span = internal::MakeSpan(
      "datacatalog_v1::PolicyTagManagerSerializationConnection::"
      "ReplaceTaxonomy");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->ReplaceTaxonomy(request));
}

StatusOr<google::cloud::datacatalog::v1::ImportTaxonomiesResponse>
PolicyTagManagerSerializationTracingConnection::ImportTaxonomies(
    google::cloud::datacatalog::v1::ImportTaxonomiesRequest const& request) {
  auto span = internal::MakeSpan(
      "datacatalog_v1::PolicyTagManagerSerializationConnection::"
      "ImportTaxonomies");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->ImportTaxonomies(request));
}

StatusOr<google::cloud::datacatalog::v1::ExportTaxonomiesResponse>
PolicyTagManagerSerializationTracingConnection::ExportTaxonomies(
    google::cloud::datacatalog::v1::ExportTaxonomiesRequest const& request) {
  auto span = internal::MakeSpan(
      "datacatalog_v1::PolicyTagManagerSerializationConnection::"
      "ExportTaxonomies");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->ExportTaxonomies(request));
}

StreamRange<google::longrunning::Operation>
PolicyTagManagerSerializationTracingConnection::ListOperations(
    google::longrunning::ListOperationsRequest request) {
  auto span = internal::MakeSpan(
      "datacatalog_v1::PolicyTagManagerSerializationConnection::"
      "ListOperations");
  internal::OTelScope scope(span);
  auto sr = child_->ListOperations(std::move(request));
  return internal::MakeTracedStreamRange<google::longrunning::Operation>(
      std::move(span), std::move(sr));
}

StatusOr<google::longrunning::Operation>
PolicyTagManagerSerializationTracingConnection::GetOperation(
    google::longrunning::GetOperationRequest const& request) {
  auto span = internal::MakeSpan(
      "datacatalog_v1::PolicyTagManagerSerializationConnection::GetOperation");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->GetOperation(request));
}

Status PolicyTagManagerSerializationTracingConnection::DeleteOperation(
    google::longrunning::DeleteOperationRequest const& request) {
  auto span = internal::MakeSpan(
      "datacatalog_v1::PolicyTagManagerSerializationConnection::"
      "DeleteOperation");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->DeleteOperation(request));
}

Status PolicyTagManagerSerializationTracingConnection::CancelOperation(
    google::longrunning::CancelOperationRequest const& request) {
  auto span = internal::MakeSpan(
      "datacatalog_v1::PolicyTagManagerSerializationConnection::"
      "CancelOperation");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->CancelOperation(request));
}

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

std::shared_ptr<datacatalog_v1::PolicyTagManagerSerializationConnection>
MakePolicyTagManagerSerializationTracingConnection(
    std::shared_ptr<datacatalog_v1::PolicyTagManagerSerializationConnection>
        conn) {
#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
  if (internal::TracingEnabled(conn->options())) {
    conn = std::make_shared<PolicyTagManagerSerializationTracingConnection>(
        std::move(conn));
  }
#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
  return conn;
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace datacatalog_v1_internal
}  // namespace cloud
}  // namespace google
