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
// source: google/cloud/talent/v4/tenant_service.proto

#include "google/cloud/talent/v4/internal/tenant_auth_decorator.h"
#include <google/cloud/talent/v4/tenant_service.grpc.pb.h>
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace talent_v4_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

TenantServiceAuth::TenantServiceAuth(
    std::shared_ptr<google::cloud::internal::GrpcAuthenticationStrategy> auth,
    std::shared_ptr<TenantServiceStub> child)
    : auth_(std::move(auth)), child_(std::move(child)) {}

StatusOr<google::cloud::talent::v4::Tenant> TenantServiceAuth::CreateTenant(
    grpc::ClientContext& context, Options const& options,
    google::cloud::talent::v4::CreateTenantRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->CreateTenant(context, options, request);
}

StatusOr<google::cloud::talent::v4::Tenant> TenantServiceAuth::GetTenant(
    grpc::ClientContext& context, Options const& options,
    google::cloud::talent::v4::GetTenantRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->GetTenant(context, options, request);
}

StatusOr<google::cloud::talent::v4::Tenant> TenantServiceAuth::UpdateTenant(
    grpc::ClientContext& context, Options const& options,
    google::cloud::talent::v4::UpdateTenantRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->UpdateTenant(context, options, request);
}

Status TenantServiceAuth::DeleteTenant(
    grpc::ClientContext& context, Options const& options,
    google::cloud::talent::v4::DeleteTenantRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->DeleteTenant(context, options, request);
}

StatusOr<google::cloud::talent::v4::ListTenantsResponse>
TenantServiceAuth::ListTenants(
    grpc::ClientContext& context, Options const& options,
    google::cloud::talent::v4::ListTenantsRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->ListTenants(context, options, request);
}

StatusOr<google::longrunning::Operation> TenantServiceAuth::GetOperation(
    grpc::ClientContext& context, Options const& options,
    google::longrunning::GetOperationRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->GetOperation(context, options, request);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace talent_v4_internal
}  // namespace cloud
}  // namespace google
