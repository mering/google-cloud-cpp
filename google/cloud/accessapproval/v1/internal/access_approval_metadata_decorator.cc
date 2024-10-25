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
// source: google/cloud/accessapproval/v1/accessapproval.proto

#include "google/cloud/accessapproval/v1/internal/access_approval_metadata_decorator.h"
#include "google/cloud/accessapproval/v1/accessapproval.grpc.pb.h"
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
namespace accessapproval_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

AccessApprovalMetadata::AccessApprovalMetadata(
    std::shared_ptr<AccessApprovalStub> child,
    std::multimap<std::string, std::string> fixed_metadata,
    std::string api_client_header)
    : child_(std::move(child)),
      fixed_metadata_(std::move(fixed_metadata)),
      api_client_header_(
          api_client_header.empty()
              ? google::cloud::internal::GeneratedLibClientHeader()
              : std::move(api_client_header)) {}

StatusOr<google::cloud::accessapproval::v1::ListApprovalRequestsResponse>
AccessApprovalMetadata::ListApprovalRequests(
    grpc::ClientContext& context, Options const& options,
    google::cloud::accessapproval::v1::ListApprovalRequestsMessage const&
        request) {
  SetMetadata(context, options,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->ListApprovalRequests(context, options, request);
}

StatusOr<google::cloud::accessapproval::v1::ApprovalRequest>
AccessApprovalMetadata::GetApprovalRequest(
    grpc::ClientContext& context, Options const& options,
    google::cloud::accessapproval::v1::GetApprovalRequestMessage const&
        request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->GetApprovalRequest(context, options, request);
}

StatusOr<google::cloud::accessapproval::v1::ApprovalRequest>
AccessApprovalMetadata::ApproveApprovalRequest(
    grpc::ClientContext& context, Options const& options,
    google::cloud::accessapproval::v1::ApproveApprovalRequestMessage const&
        request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->ApproveApprovalRequest(context, options, request);
}

StatusOr<google::cloud::accessapproval::v1::ApprovalRequest>
AccessApprovalMetadata::DismissApprovalRequest(
    grpc::ClientContext& context, Options const& options,
    google::cloud::accessapproval::v1::DismissApprovalRequestMessage const&
        request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->DismissApprovalRequest(context, options, request);
}

StatusOr<google::cloud::accessapproval::v1::ApprovalRequest>
AccessApprovalMetadata::InvalidateApprovalRequest(
    grpc::ClientContext& context, Options const& options,
    google::cloud::accessapproval::v1::InvalidateApprovalRequestMessage const&
        request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->InvalidateApprovalRequest(context, options, request);
}

StatusOr<google::cloud::accessapproval::v1::AccessApprovalSettings>
AccessApprovalMetadata::GetAccessApprovalSettings(
    grpc::ClientContext& context, Options const& options,
    google::cloud::accessapproval::v1::GetAccessApprovalSettingsMessage const&
        request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->GetAccessApprovalSettings(context, options, request);
}

StatusOr<google::cloud::accessapproval::v1::AccessApprovalSettings>
AccessApprovalMetadata::UpdateAccessApprovalSettings(
    grpc::ClientContext& context, Options const& options,
    google::cloud::accessapproval::v1::
        UpdateAccessApprovalSettingsMessage const& request) {
  SetMetadata(context, options,
              absl::StrCat("settings.name=",
                           internal::UrlEncode(request.settings().name())));
  return child_->UpdateAccessApprovalSettings(context, options, request);
}

Status AccessApprovalMetadata::DeleteAccessApprovalSettings(
    grpc::ClientContext& context, Options const& options,
    google::cloud::accessapproval::v1::
        DeleteAccessApprovalSettingsMessage const& request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->DeleteAccessApprovalSettings(context, options, request);
}

StatusOr<google::cloud::accessapproval::v1::AccessApprovalServiceAccount>
AccessApprovalMetadata::GetAccessApprovalServiceAccount(
    grpc::ClientContext& context, Options const& options,
    google::cloud::accessapproval::v1::
        GetAccessApprovalServiceAccountMessage const& request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->GetAccessApprovalServiceAccount(context, options, request);
}

void AccessApprovalMetadata::SetMetadata(grpc::ClientContext& context,
                                         Options const& options,
                                         std::string const& request_params) {
  context.AddMetadata("x-goog-request-params", request_params);
  SetMetadata(context, options);
}

void AccessApprovalMetadata::SetMetadata(grpc::ClientContext& context,
                                         Options const& options) {
  google::cloud::internal::SetMetadata(context, options, fixed_metadata_,
                                       api_client_header_);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace accessapproval_v1_internal
}  // namespace cloud
}  // namespace google
