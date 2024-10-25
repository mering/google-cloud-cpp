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

#include "google/cloud/talent/v4/internal/tenant_logging_decorator.h"
#include "google/cloud/talent/v4/tenant_service.grpc.pb.h"
#include "google/cloud/internal/log_wrapper.h"
#include "google/cloud/status_or.h"
#include <memory>
#include <set>
#include <string>
#include <utility>

namespace google {
namespace cloud {
namespace talent_v4_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

TenantServiceLogging::TenantServiceLogging(
    std::shared_ptr<TenantServiceStub> child, TracingOptions tracing_options,
    std::set<std::string> const&)
    : child_(std::move(child)), tracing_options_(std::move(tracing_options)) {}

StatusOr<google::cloud::talent::v4::Tenant> TenantServiceLogging::CreateTenant(
    grpc::ClientContext& context, Options const& options,
    google::cloud::talent::v4::CreateTenantRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::talent::v4::CreateTenantRequest const& request) {
        return child_->CreateTenant(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::talent::v4::Tenant> TenantServiceLogging::GetTenant(
    grpc::ClientContext& context, Options const& options,
    google::cloud::talent::v4::GetTenantRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::talent::v4::GetTenantRequest const& request) {
        return child_->GetTenant(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::talent::v4::Tenant> TenantServiceLogging::UpdateTenant(
    grpc::ClientContext& context, Options const& options,
    google::cloud::talent::v4::UpdateTenantRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::talent::v4::UpdateTenantRequest const& request) {
        return child_->UpdateTenant(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

Status TenantServiceLogging::DeleteTenant(
    grpc::ClientContext& context, Options const& options,
    google::cloud::talent::v4::DeleteTenantRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::talent::v4::DeleteTenantRequest const& request) {
        return child_->DeleteTenant(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::talent::v4::ListTenantsResponse>
TenantServiceLogging::ListTenants(
    grpc::ClientContext& context, Options const& options,
    google::cloud::talent::v4::ListTenantsRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::talent::v4::ListTenantsRequest const& request) {
        return child_->ListTenants(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::longrunning::Operation> TenantServiceLogging::GetOperation(
    grpc::ClientContext& context, Options const& options,
    google::longrunning::GetOperationRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::longrunning::GetOperationRequest const& request) {
        return child_->GetOperation(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace talent_v4_internal
}  // namespace cloud
}  // namespace google
