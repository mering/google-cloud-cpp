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
// source: google/cloud/dialogflow/v2/knowledge_base.proto

#include "google/cloud/dialogflow_es/internal/knowledge_bases_tracing_stub.h"
#include "google/cloud/internal/grpc_opentelemetry.h"
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace dialogflow_es_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

KnowledgeBasesTracingStub::KnowledgeBasesTracingStub(
    std::shared_ptr<KnowledgeBasesStub> child)
    : child_(std::move(child)), propagator_(internal::MakePropagator()) {}

StatusOr<google::cloud::dialogflow::v2::ListKnowledgeBasesResponse>
KnowledgeBasesTracingStub::ListKnowledgeBases(
    grpc::ClientContext& context, Options const& options,
    google::cloud::dialogflow::v2::ListKnowledgeBasesRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.dialogflow.v2.KnowledgeBases", "ListKnowledgeBases");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(
      context, *span, child_->ListKnowledgeBases(context, options, request));
}

StatusOr<google::cloud::dialogflow::v2::KnowledgeBase>
KnowledgeBasesTracingStub::GetKnowledgeBase(
    grpc::ClientContext& context, Options const& options,
    google::cloud::dialogflow::v2::GetKnowledgeBaseRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.dialogflow.v2.KnowledgeBases", "GetKnowledgeBase");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->GetKnowledgeBase(context, options, request));
}

StatusOr<google::cloud::dialogflow::v2::KnowledgeBase>
KnowledgeBasesTracingStub::CreateKnowledgeBase(
    grpc::ClientContext& context, Options const& options,
    google::cloud::dialogflow::v2::CreateKnowledgeBaseRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.dialogflow.v2.KnowledgeBases", "CreateKnowledgeBase");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(
      context, *span, child_->CreateKnowledgeBase(context, options, request));
}

Status KnowledgeBasesTracingStub::DeleteKnowledgeBase(
    grpc::ClientContext& context, Options const& options,
    google::cloud::dialogflow::v2::DeleteKnowledgeBaseRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.dialogflow.v2.KnowledgeBases", "DeleteKnowledgeBase");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(
      context, *span, child_->DeleteKnowledgeBase(context, options, request));
}

StatusOr<google::cloud::dialogflow::v2::KnowledgeBase>
KnowledgeBasesTracingStub::UpdateKnowledgeBase(
    grpc::ClientContext& context, Options const& options,
    google::cloud::dialogflow::v2::UpdateKnowledgeBaseRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.dialogflow.v2.KnowledgeBases", "UpdateKnowledgeBase");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(
      context, *span, child_->UpdateKnowledgeBase(context, options, request));
}

StatusOr<google::cloud::location::ListLocationsResponse>
KnowledgeBasesTracingStub::ListLocations(
    grpc::ClientContext& context, Options const& options,
    google::cloud::location::ListLocationsRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.dialogflow.v2.KnowledgeBases", "ListLocations");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->ListLocations(context, options, request));
}

StatusOr<google::cloud::location::Location>
KnowledgeBasesTracingStub::GetLocation(
    grpc::ClientContext& context, Options const& options,
    google::cloud::location::GetLocationRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.dialogflow.v2.KnowledgeBases", "GetLocation");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->GetLocation(context, options, request));
}

StatusOr<google::longrunning::ListOperationsResponse>
KnowledgeBasesTracingStub::ListOperations(
    grpc::ClientContext& context, Options const& options,
    google::longrunning::ListOperationsRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.dialogflow.v2.KnowledgeBases", "ListOperations");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->ListOperations(context, options, request));
}

StatusOr<google::longrunning::Operation>
KnowledgeBasesTracingStub::GetOperation(
    grpc::ClientContext& context, Options const& options,
    google::longrunning::GetOperationRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.dialogflow.v2.KnowledgeBases", "GetOperation");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->GetOperation(context, options, request));
}

Status KnowledgeBasesTracingStub::CancelOperation(
    grpc::ClientContext& context, Options const& options,
    google::longrunning::CancelOperationRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.dialogflow.v2.KnowledgeBases", "CancelOperation");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->CancelOperation(context, options, request));
}

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

std::shared_ptr<KnowledgeBasesStub> MakeKnowledgeBasesTracingStub(
    std::shared_ptr<KnowledgeBasesStub> stub) {
#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
  return std::make_shared<KnowledgeBasesTracingStub>(std::move(stub));
#else
  return stub;
#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace dialogflow_es_internal
}  // namespace cloud
}  // namespace google
