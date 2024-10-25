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
// source: google/cloud/iap/v1/service.proto

#include "google/cloud/iap/v1/internal/identity_aware_proxy_admin_metadata_decorator.h"
#include "google/cloud/iap/v1/service.grpc.pb.h"
#include "google/cloud/grpc_options.h"
#include "google/cloud/internal/absl_str_cat_quiet.h"
#include "google/cloud/internal/api_client_header.h"
#include "google/cloud/internal/url_encode.h"
#include "google/cloud/status_or.h"
#include <memory>
#include <string>
#include <utility>
#include <vector>

namespace google {
namespace cloud {
namespace iap_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

IdentityAwareProxyAdminServiceMetadata::IdentityAwareProxyAdminServiceMetadata(
    std::shared_ptr<IdentityAwareProxyAdminServiceStub> child,
    std::multimap<std::string, std::string> fixed_metadata,
    std::string api_client_header)
    : child_(std::move(child)),
      fixed_metadata_(std::move(fixed_metadata)),
      api_client_header_(
          api_client_header.empty()
              ? google::cloud::internal::GeneratedLibClientHeader()
              : std::move(api_client_header)) {}

StatusOr<google::iam::v1::Policy>
IdentityAwareProxyAdminServiceMetadata::SetIamPolicy(
    grpc::ClientContext& context, Options const& options,
    google::iam::v1::SetIamPolicyRequest const& request) {
  SetMetadata(
      context, options,
      absl::StrCat("resource=", internal::UrlEncode(request.resource())));
  return child_->SetIamPolicy(context, options, request);
}

StatusOr<google::iam::v1::Policy>
IdentityAwareProxyAdminServiceMetadata::GetIamPolicy(
    grpc::ClientContext& context, Options const& options,
    google::iam::v1::GetIamPolicyRequest const& request) {
  SetMetadata(
      context, options,
      absl::StrCat("resource=", internal::UrlEncode(request.resource())));
  return child_->GetIamPolicy(context, options, request);
}

StatusOr<google::iam::v1::TestIamPermissionsResponse>
IdentityAwareProxyAdminServiceMetadata::TestIamPermissions(
    grpc::ClientContext& context, Options const& options,
    google::iam::v1::TestIamPermissionsRequest const& request) {
  SetMetadata(
      context, options,
      absl::StrCat("resource=", internal::UrlEncode(request.resource())));
  return child_->TestIamPermissions(context, options, request);
}

StatusOr<google::cloud::iap::v1::IapSettings>
IdentityAwareProxyAdminServiceMetadata::GetIapSettings(
    grpc::ClientContext& context, Options const& options,
    google::cloud::iap::v1::GetIapSettingsRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->GetIapSettings(context, options, request);
}

StatusOr<google::cloud::iap::v1::IapSettings>
IdentityAwareProxyAdminServiceMetadata::UpdateIapSettings(
    grpc::ClientContext& context, Options const& options,
    google::cloud::iap::v1::UpdateIapSettingsRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("iap_settings.name=",
                           internal::UrlEncode(request.iap_settings().name())));
  return child_->UpdateIapSettings(context, options, request);
}

StatusOr<google::cloud::iap::v1::ListTunnelDestGroupsResponse>
IdentityAwareProxyAdminServiceMetadata::ListTunnelDestGroups(
    grpc::ClientContext& context, Options const& options,
    google::cloud::iap::v1::ListTunnelDestGroupsRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->ListTunnelDestGroups(context, options, request);
}

StatusOr<google::cloud::iap::v1::TunnelDestGroup>
IdentityAwareProxyAdminServiceMetadata::CreateTunnelDestGroup(
    grpc::ClientContext& context, Options const& options,
    google::cloud::iap::v1::CreateTunnelDestGroupRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->CreateTunnelDestGroup(context, options, request);
}

StatusOr<google::cloud::iap::v1::TunnelDestGroup>
IdentityAwareProxyAdminServiceMetadata::GetTunnelDestGroup(
    grpc::ClientContext& context, Options const& options,
    google::cloud::iap::v1::GetTunnelDestGroupRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->GetTunnelDestGroup(context, options, request);
}

Status IdentityAwareProxyAdminServiceMetadata::DeleteTunnelDestGroup(
    grpc::ClientContext& context, Options const& options,
    google::cloud::iap::v1::DeleteTunnelDestGroupRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->DeleteTunnelDestGroup(context, options, request);
}

StatusOr<google::cloud::iap::v1::TunnelDestGroup>
IdentityAwareProxyAdminServiceMetadata::UpdateTunnelDestGroup(
    grpc::ClientContext& context, Options const& options,
    google::cloud::iap::v1::UpdateTunnelDestGroupRequest const& request) {
  SetMetadata(
      context, options,
      absl::StrCat("tunnel_dest_group.name=",
                   internal::UrlEncode(request.tunnel_dest_group().name())));
  return child_->UpdateTunnelDestGroup(context, options, request);
}

void IdentityAwareProxyAdminServiceMetadata::SetMetadata(
    grpc::ClientContext& context, Options const& options,
    std::string const& request_params) {
  context.AddMetadata("x-goog-request-params", request_params);
  SetMetadata(context, options);
}

void IdentityAwareProxyAdminServiceMetadata::SetMetadata(
    grpc::ClientContext& context, Options const& options) {
  google::cloud::internal::SetMetadata(context, options, fixed_metadata_,
                                       api_client_header_);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace iap_v1_internal
}  // namespace cloud
}  // namespace google
