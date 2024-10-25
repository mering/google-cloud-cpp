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
// source: google/monitoring/v3/alert_service.proto

#include "google/cloud/monitoring/v3/internal/alert_policy_auth_decorator.h"
#include "google/monitoring/v3/alert_service.grpc.pb.h"
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace monitoring_v3_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

AlertPolicyServiceAuth::AlertPolicyServiceAuth(
    std::shared_ptr<google::cloud::internal::GrpcAuthenticationStrategy> auth,
    std::shared_ptr<AlertPolicyServiceStub> child)
    : auth_(std::move(auth)), child_(std::move(child)) {}

StatusOr<google::monitoring::v3::ListAlertPoliciesResponse>
AlertPolicyServiceAuth::ListAlertPolicies(
    grpc::ClientContext& context, Options const& options,
    google::monitoring::v3::ListAlertPoliciesRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->ListAlertPolicies(context, options, request);
}

StatusOr<google::monitoring::v3::AlertPolicy>
AlertPolicyServiceAuth::GetAlertPolicy(
    grpc::ClientContext& context, Options const& options,
    google::monitoring::v3::GetAlertPolicyRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->GetAlertPolicy(context, options, request);
}

StatusOr<google::monitoring::v3::AlertPolicy>
AlertPolicyServiceAuth::CreateAlertPolicy(
    grpc::ClientContext& context, Options const& options,
    google::monitoring::v3::CreateAlertPolicyRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->CreateAlertPolicy(context, options, request);
}

Status AlertPolicyServiceAuth::DeleteAlertPolicy(
    grpc::ClientContext& context, Options const& options,
    google::monitoring::v3::DeleteAlertPolicyRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->DeleteAlertPolicy(context, options, request);
}

StatusOr<google::monitoring::v3::AlertPolicy>
AlertPolicyServiceAuth::UpdateAlertPolicy(
    grpc::ClientContext& context, Options const& options,
    google::monitoring::v3::UpdateAlertPolicyRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->UpdateAlertPolicy(context, options, request);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace monitoring_v3_internal
}  // namespace cloud
}  // namespace google
