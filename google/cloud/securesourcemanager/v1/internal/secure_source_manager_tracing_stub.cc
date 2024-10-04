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
// source: google/cloud/securesourcemanager/v1/secure_source_manager.proto

#include "google/cloud/securesourcemanager/v1/internal/secure_source_manager_tracing_stub.h"
#include "google/cloud/internal/grpc_opentelemetry.h"
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace securesourcemanager_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

SecureSourceManagerTracingStub::SecureSourceManagerTracingStub(
    std::shared_ptr<SecureSourceManagerStub> child)
    : child_(std::move(child)), propagator_(internal::MakePropagator()) {}

StatusOr<google::cloud::securesourcemanager::v1::ListInstancesResponse>
SecureSourceManagerTracingStub::ListInstances(
    grpc::ClientContext& context, Options const& options,
    google::cloud::securesourcemanager::v1::ListInstancesRequest const&
        request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.securesourcemanager.v1.SecureSourceManager",
      "ListInstances");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->ListInstances(context, options, request));
}

StatusOr<google::cloud::securesourcemanager::v1::Instance>
SecureSourceManagerTracingStub::GetInstance(
    grpc::ClientContext& context, Options const& options,
    google::cloud::securesourcemanager::v1::GetInstanceRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.securesourcemanager.v1.SecureSourceManager", "GetInstance");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->GetInstance(context, options, request));
}

future<StatusOr<google::longrunning::Operation>>
SecureSourceManagerTracingStub::AsyncCreateInstance(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::securesourcemanager::v1::CreateInstanceRequest const&
        request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.securesourcemanager.v1.SecureSourceManager",
      "CreateInstance");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto f =
      child_->AsyncCreateInstance(cq, context, std::move(options), request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

StatusOr<google::longrunning::Operation>
SecureSourceManagerTracingStub::CreateInstance(
    grpc::ClientContext& context, Options options,
    google::cloud::securesourcemanager::v1::CreateInstanceRequest const&
        request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.securesourcemanager.v1.SecureSourceManager",
      "CreateInstance");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->CreateInstance(context, options, request));
}

future<StatusOr<google::longrunning::Operation>>
SecureSourceManagerTracingStub::AsyncDeleteInstance(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::securesourcemanager::v1::DeleteInstanceRequest const&
        request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.securesourcemanager.v1.SecureSourceManager",
      "DeleteInstance");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto f =
      child_->AsyncDeleteInstance(cq, context, std::move(options), request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

StatusOr<google::longrunning::Operation>
SecureSourceManagerTracingStub::DeleteInstance(
    grpc::ClientContext& context, Options options,
    google::cloud::securesourcemanager::v1::DeleteInstanceRequest const&
        request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.securesourcemanager.v1.SecureSourceManager",
      "DeleteInstance");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->DeleteInstance(context, options, request));
}

StatusOr<google::cloud::securesourcemanager::v1::ListRepositoriesResponse>
SecureSourceManagerTracingStub::ListRepositories(
    grpc::ClientContext& context, Options const& options,
    google::cloud::securesourcemanager::v1::ListRepositoriesRequest const&
        request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.securesourcemanager.v1.SecureSourceManager",
      "ListRepositories");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->ListRepositories(context, options, request));
}

StatusOr<google::cloud::securesourcemanager::v1::Repository>
SecureSourceManagerTracingStub::GetRepository(
    grpc::ClientContext& context, Options const& options,
    google::cloud::securesourcemanager::v1::GetRepositoryRequest const&
        request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.securesourcemanager.v1.SecureSourceManager",
      "GetRepository");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->GetRepository(context, options, request));
}

future<StatusOr<google::longrunning::Operation>>
SecureSourceManagerTracingStub::AsyncCreateRepository(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::securesourcemanager::v1::CreateRepositoryRequest const&
        request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.securesourcemanager.v1.SecureSourceManager",
      "CreateRepository");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto f =
      child_->AsyncCreateRepository(cq, context, std::move(options), request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

StatusOr<google::longrunning::Operation>
SecureSourceManagerTracingStub::CreateRepository(
    grpc::ClientContext& context, Options options,
    google::cloud::securesourcemanager::v1::CreateRepositoryRequest const&
        request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.securesourcemanager.v1.SecureSourceManager",
      "CreateRepository");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->CreateRepository(context, options, request));
}

future<StatusOr<google::longrunning::Operation>>
SecureSourceManagerTracingStub::AsyncDeleteRepository(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::securesourcemanager::v1::DeleteRepositoryRequest const&
        request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.securesourcemanager.v1.SecureSourceManager",
      "DeleteRepository");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto f =
      child_->AsyncDeleteRepository(cq, context, std::move(options), request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

StatusOr<google::longrunning::Operation>
SecureSourceManagerTracingStub::DeleteRepository(
    grpc::ClientContext& context, Options options,
    google::cloud::securesourcemanager::v1::DeleteRepositoryRequest const&
        request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.securesourcemanager.v1.SecureSourceManager",
      "DeleteRepository");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->DeleteRepository(context, options, request));
}

StatusOr<google::iam::v1::Policy>
SecureSourceManagerTracingStub::GetIamPolicyRepo(
    grpc::ClientContext& context, Options const& options,
    google::iam::v1::GetIamPolicyRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.securesourcemanager.v1.SecureSourceManager",
      "GetIamPolicyRepo");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->GetIamPolicyRepo(context, options, request));
}

StatusOr<google::iam::v1::Policy>
SecureSourceManagerTracingStub::SetIamPolicyRepo(
    grpc::ClientContext& context, Options const& options,
    google::iam::v1::SetIamPolicyRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.securesourcemanager.v1.SecureSourceManager",
      "SetIamPolicyRepo");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->SetIamPolicyRepo(context, options, request));
}

StatusOr<google::iam::v1::TestIamPermissionsResponse>
SecureSourceManagerTracingStub::TestIamPermissionsRepo(
    grpc::ClientContext& context, Options const& options,
    google::iam::v1::TestIamPermissionsRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.securesourcemanager.v1.SecureSourceManager",
      "TestIamPermissionsRepo");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(
      context, *span,
      child_->TestIamPermissionsRepo(context, options, request));
}

StatusOr<google::cloud::location::ListLocationsResponse>
SecureSourceManagerTracingStub::ListLocations(
    grpc::ClientContext& context, Options const& options,
    google::cloud::location::ListLocationsRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.securesourcemanager.v1.SecureSourceManager",
      "ListLocations");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->ListLocations(context, options, request));
}

StatusOr<google::cloud::location::Location>
SecureSourceManagerTracingStub::GetLocation(
    grpc::ClientContext& context, Options const& options,
    google::cloud::location::GetLocationRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.securesourcemanager.v1.SecureSourceManager", "GetLocation");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->GetLocation(context, options, request));
}

StatusOr<google::iam::v1::Policy> SecureSourceManagerTracingStub::SetIamPolicy(
    grpc::ClientContext& context, Options const& options,
    google::iam::v1::SetIamPolicyRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.securesourcemanager.v1.SecureSourceManager",
      "SetIamPolicy");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->SetIamPolicy(context, options, request));
}

StatusOr<google::iam::v1::Policy> SecureSourceManagerTracingStub::GetIamPolicy(
    grpc::ClientContext& context, Options const& options,
    google::iam::v1::GetIamPolicyRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.securesourcemanager.v1.SecureSourceManager",
      "GetIamPolicy");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->GetIamPolicy(context, options, request));
}

StatusOr<google::iam::v1::TestIamPermissionsResponse>
SecureSourceManagerTracingStub::TestIamPermissions(
    grpc::ClientContext& context, Options const& options,
    google::iam::v1::TestIamPermissionsRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.securesourcemanager.v1.SecureSourceManager",
      "TestIamPermissions");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(
      context, *span, child_->TestIamPermissions(context, options, request));
}

StatusOr<google::longrunning::ListOperationsResponse>
SecureSourceManagerTracingStub::ListOperations(
    grpc::ClientContext& context, Options const& options,
    google::longrunning::ListOperationsRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.securesourcemanager.v1.SecureSourceManager",
      "ListOperations");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->ListOperations(context, options, request));
}

StatusOr<google::longrunning::Operation>
SecureSourceManagerTracingStub::GetOperation(
    grpc::ClientContext& context, Options const& options,
    google::longrunning::GetOperationRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.securesourcemanager.v1.SecureSourceManager",
      "GetOperation");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->GetOperation(context, options, request));
}

Status SecureSourceManagerTracingStub::DeleteOperation(
    grpc::ClientContext& context, Options const& options,
    google::longrunning::DeleteOperationRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.securesourcemanager.v1.SecureSourceManager",
      "DeleteOperation");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->DeleteOperation(context, options, request));
}

Status SecureSourceManagerTracingStub::CancelOperation(
    grpc::ClientContext& context, Options const& options,
    google::longrunning::CancelOperationRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.securesourcemanager.v1.SecureSourceManager",
      "CancelOperation");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->CancelOperation(context, options, request));
}

future<StatusOr<google::longrunning::Operation>>
SecureSourceManagerTracingStub::AsyncGetOperation(
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

future<Status> SecureSourceManagerTracingStub::AsyncCancelOperation(
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

std::shared_ptr<SecureSourceManagerStub> MakeSecureSourceManagerTracingStub(
    std::shared_ptr<SecureSourceManagerStub> stub) {
#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
  return std::make_shared<SecureSourceManagerTracingStub>(std::move(stub));
#else
  return stub;
#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace securesourcemanager_v1_internal
}  // namespace cloud
}  // namespace google
