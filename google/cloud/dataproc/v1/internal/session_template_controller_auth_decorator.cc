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
// source: google/cloud/dataproc/v1/session_templates.proto

#include "google/cloud/dataproc/v1/internal/session_template_controller_auth_decorator.h"
#include "google/cloud/dataproc/v1/session_templates.grpc.pb.h"
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace dataproc_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

SessionTemplateControllerAuth::SessionTemplateControllerAuth(
    std::shared_ptr<google::cloud::internal::GrpcAuthenticationStrategy> auth,
    std::shared_ptr<SessionTemplateControllerStub> child)
    : auth_(std::move(auth)), child_(std::move(child)) {}

StatusOr<google::cloud::dataproc::v1::SessionTemplate>
SessionTemplateControllerAuth::CreateSessionTemplate(
    grpc::ClientContext& context, Options const& options,
    google::cloud::dataproc::v1::CreateSessionTemplateRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->CreateSessionTemplate(context, options, request);
}

StatusOr<google::cloud::dataproc::v1::SessionTemplate>
SessionTemplateControllerAuth::UpdateSessionTemplate(
    grpc::ClientContext& context, Options const& options,
    google::cloud::dataproc::v1::UpdateSessionTemplateRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->UpdateSessionTemplate(context, options, request);
}

StatusOr<google::cloud::dataproc::v1::SessionTemplate>
SessionTemplateControllerAuth::GetSessionTemplate(
    grpc::ClientContext& context, Options const& options,
    google::cloud::dataproc::v1::GetSessionTemplateRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->GetSessionTemplate(context, options, request);
}

StatusOr<google::cloud::dataproc::v1::ListSessionTemplatesResponse>
SessionTemplateControllerAuth::ListSessionTemplates(
    grpc::ClientContext& context, Options const& options,
    google::cloud::dataproc::v1::ListSessionTemplatesRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->ListSessionTemplates(context, options, request);
}

Status SessionTemplateControllerAuth::DeleteSessionTemplate(
    grpc::ClientContext& context, Options const& options,
    google::cloud::dataproc::v1::DeleteSessionTemplateRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->DeleteSessionTemplate(context, options, request);
}

StatusOr<google::iam::v1::Policy> SessionTemplateControllerAuth::SetIamPolicy(
    grpc::ClientContext& context, Options const& options,
    google::iam::v1::SetIamPolicyRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->SetIamPolicy(context, options, request);
}

StatusOr<google::iam::v1::Policy> SessionTemplateControllerAuth::GetIamPolicy(
    grpc::ClientContext& context, Options const& options,
    google::iam::v1::GetIamPolicyRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->GetIamPolicy(context, options, request);
}

StatusOr<google::iam::v1::TestIamPermissionsResponse>
SessionTemplateControllerAuth::TestIamPermissions(
    grpc::ClientContext& context, Options const& options,
    google::iam::v1::TestIamPermissionsRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->TestIamPermissions(context, options, request);
}

StatusOr<google::longrunning::ListOperationsResponse>
SessionTemplateControllerAuth::ListOperations(
    grpc::ClientContext& context, Options const& options,
    google::longrunning::ListOperationsRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->ListOperations(context, options, request);
}

StatusOr<google::longrunning::Operation>
SessionTemplateControllerAuth::GetOperation(
    grpc::ClientContext& context, Options const& options,
    google::longrunning::GetOperationRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->GetOperation(context, options, request);
}

Status SessionTemplateControllerAuth::DeleteOperation(
    grpc::ClientContext& context, Options const& options,
    google::longrunning::DeleteOperationRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->DeleteOperation(context, options, request);
}

Status SessionTemplateControllerAuth::CancelOperation(
    grpc::ClientContext& context, Options const& options,
    google::longrunning::CancelOperationRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->CancelOperation(context, options, request);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace dataproc_v1_internal
}  // namespace cloud
}  // namespace google
