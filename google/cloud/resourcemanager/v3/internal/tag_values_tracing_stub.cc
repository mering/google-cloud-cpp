// Copyright 2023 Google LLC
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
// source: google/cloud/resourcemanager/v3/tag_values.proto

#include "google/cloud/resourcemanager/v3/internal/tag_values_tracing_stub.h"
#include "google/cloud/internal/grpc_opentelemetry.h"
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace resourcemanager_v3_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

TagValuesTracingStub::TagValuesTracingStub(std::shared_ptr<TagValuesStub> child)
    : child_(std::move(child)), propagator_(internal::MakePropagator()) {}

StatusOr<google::cloud::resourcemanager::v3::ListTagValuesResponse>
TagValuesTracingStub::ListTagValues(
    grpc::ClientContext& context, Options const& options,
    google::cloud::resourcemanager::v3::ListTagValuesRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.resourcemanager.v3.TagValues", "ListTagValues");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->ListTagValues(context, options, request));
}

StatusOr<google::cloud::resourcemanager::v3::TagValue>
TagValuesTracingStub::GetTagValue(
    grpc::ClientContext& context, Options const& options,
    google::cloud::resourcemanager::v3::GetTagValueRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.resourcemanager.v3.TagValues", "GetTagValue");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->GetTagValue(context, options, request));
}

StatusOr<google::cloud::resourcemanager::v3::TagValue>
TagValuesTracingStub::GetNamespacedTagValue(
    grpc::ClientContext& context, Options const& options,
    google::cloud::resourcemanager::v3::GetNamespacedTagValueRequest const&
        request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.resourcemanager.v3.TagValues", "GetNamespacedTagValue");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(
      context, *span, child_->GetNamespacedTagValue(context, options, request));
}

future<StatusOr<google::longrunning::Operation>>
TagValuesTracingStub::AsyncCreateTagValue(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::resourcemanager::v3::CreateTagValueRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.resourcemanager.v3.TagValues", "CreateTagValue");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto f =
      child_->AsyncCreateTagValue(cq, context, std::move(options), request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

StatusOr<google::longrunning::Operation> TagValuesTracingStub::CreateTagValue(
    grpc::ClientContext& context, Options options,
    google::cloud::resourcemanager::v3::CreateTagValueRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.resourcemanager.v3.TagValues", "CreateTagValue");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->CreateTagValue(context, options, request));
}

future<StatusOr<google::longrunning::Operation>>
TagValuesTracingStub::AsyncUpdateTagValue(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::resourcemanager::v3::UpdateTagValueRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.resourcemanager.v3.TagValues", "UpdateTagValue");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto f =
      child_->AsyncUpdateTagValue(cq, context, std::move(options), request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

StatusOr<google::longrunning::Operation> TagValuesTracingStub::UpdateTagValue(
    grpc::ClientContext& context, Options options,
    google::cloud::resourcemanager::v3::UpdateTagValueRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.resourcemanager.v3.TagValues", "UpdateTagValue");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->UpdateTagValue(context, options, request));
}

future<StatusOr<google::longrunning::Operation>>
TagValuesTracingStub::AsyncDeleteTagValue(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::resourcemanager::v3::DeleteTagValueRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.resourcemanager.v3.TagValues", "DeleteTagValue");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto f =
      child_->AsyncDeleteTagValue(cq, context, std::move(options), request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

StatusOr<google::longrunning::Operation> TagValuesTracingStub::DeleteTagValue(
    grpc::ClientContext& context, Options options,
    google::cloud::resourcemanager::v3::DeleteTagValueRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.resourcemanager.v3.TagValues", "DeleteTagValue");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->DeleteTagValue(context, options, request));
}

StatusOr<google::iam::v1::Policy> TagValuesTracingStub::GetIamPolicy(
    grpc::ClientContext& context, Options const& options,
    google::iam::v1::GetIamPolicyRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.resourcemanager.v3.TagValues", "GetIamPolicy");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->GetIamPolicy(context, options, request));
}

StatusOr<google::iam::v1::Policy> TagValuesTracingStub::SetIamPolicy(
    grpc::ClientContext& context, Options const& options,
    google::iam::v1::SetIamPolicyRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.resourcemanager.v3.TagValues", "SetIamPolicy");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->SetIamPolicy(context, options, request));
}

StatusOr<google::iam::v1::TestIamPermissionsResponse>
TagValuesTracingStub::TestIamPermissions(
    grpc::ClientContext& context, Options const& options,
    google::iam::v1::TestIamPermissionsRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.resourcemanager.v3.TagValues", "TestIamPermissions");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(
      context, *span, child_->TestIamPermissions(context, options, request));
}

StatusOr<google::longrunning::Operation> TagValuesTracingStub::GetOperation(
    grpc::ClientContext& context, Options const& options,
    google::longrunning::GetOperationRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.resourcemanager.v3.TagValues", "GetOperation");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->GetOperation(context, options, request));
}

future<StatusOr<google::longrunning::Operation>>
TagValuesTracingStub::AsyncGetOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::longrunning::GetOperationRequest const& request) {
  auto span =
      internal::MakeSpanGrpc("google.longrunning.Operations", "GetOperation");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto f = child_->AsyncGetOperation(cq, context, std::move(options), request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

future<Status> TagValuesTracingStub::AsyncCancelOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::longrunning::CancelOperationRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.longrunning.Operations",
                                     "CancelOperation");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto f =
      child_->AsyncCancelOperation(cq, context, std::move(options), request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

std::shared_ptr<TagValuesStub> MakeTagValuesTracingStub(
    std::shared_ptr<TagValuesStub> stub) {
#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
  return std::make_shared<TagValuesTracingStub>(std::move(stub));
#else
  return stub;
#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace resourcemanager_v3_internal
}  // namespace cloud
}  // namespace google
