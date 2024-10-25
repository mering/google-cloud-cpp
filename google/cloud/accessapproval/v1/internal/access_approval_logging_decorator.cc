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

#include "google/cloud/accessapproval/v1/internal/access_approval_logging_decorator.h"
#include "google/cloud/internal/log_wrapper.h"
#include "google/cloud/status_or.h"
#include "google/cloud/accessapproval/v1/accessapproval.grpc.pb.h"
#include <memory>
#include <set>
#include <string>
#include <utility>

namespace google {
namespace cloud {
namespace accessapproval_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

AccessApprovalLogging::AccessApprovalLogging(
    std::shared_ptr<AccessApprovalStub> child, TracingOptions tracing_options,
    std::set<std::string> const&)
    : child_(std::move(child)), tracing_options_(std::move(tracing_options)) {}

StatusOr<google::cloud::accessapproval::v1::ListApprovalRequestsResponse>
AccessApprovalLogging::ListApprovalRequests(
    grpc::ClientContext& context, Options const& options,
    google::cloud::accessapproval::v1::ListApprovalRequestsMessage const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](
          grpc::ClientContext& context, Options const& options,
          google::cloud::accessapproval::v1::ListApprovalRequestsMessage const&
              request) {
        return child_->ListApprovalRequests(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::accessapproval::v1::ApprovalRequest>
AccessApprovalLogging::GetApprovalRequest(
    grpc::ClientContext& context, Options const& options,
    google::cloud::accessapproval::v1::GetApprovalRequestMessage const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::accessapproval::v1::GetApprovalRequestMessage const&
                 request) {
        return child_->GetApprovalRequest(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::accessapproval::v1::ApprovalRequest>
AccessApprovalLogging::ApproveApprovalRequest(
    grpc::ClientContext& context, Options const& options,
    google::cloud::accessapproval::v1::ApproveApprovalRequestMessage const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::accessapproval::v1::
                 ApproveApprovalRequestMessage const& request) {
        return child_->ApproveApprovalRequest(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::accessapproval::v1::ApprovalRequest>
AccessApprovalLogging::DismissApprovalRequest(
    grpc::ClientContext& context, Options const& options,
    google::cloud::accessapproval::v1::DismissApprovalRequestMessage const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::accessapproval::v1::
                 DismissApprovalRequestMessage const& request) {
        return child_->DismissApprovalRequest(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::accessapproval::v1::ApprovalRequest>
AccessApprovalLogging::InvalidateApprovalRequest(
    grpc::ClientContext& context, Options const& options,
    google::cloud::accessapproval::v1::InvalidateApprovalRequestMessage const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::accessapproval::v1::
                 InvalidateApprovalRequestMessage const& request) {
        return child_->InvalidateApprovalRequest(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::accessapproval::v1::AccessApprovalSettings>
AccessApprovalLogging::GetAccessApprovalSettings(
    grpc::ClientContext& context, Options const& options,
    google::cloud::accessapproval::v1::GetAccessApprovalSettingsMessage const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::accessapproval::v1::
                 GetAccessApprovalSettingsMessage const& request) {
        return child_->GetAccessApprovalSettings(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::accessapproval::v1::AccessApprovalSettings>
AccessApprovalLogging::UpdateAccessApprovalSettings(
    grpc::ClientContext& context, Options const& options,
    google::cloud::accessapproval::v1::
        UpdateAccessApprovalSettingsMessage const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::accessapproval::v1::
                 UpdateAccessApprovalSettingsMessage const& request) {
        return child_->UpdateAccessApprovalSettings(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

Status AccessApprovalLogging::DeleteAccessApprovalSettings(
    grpc::ClientContext& context, Options const& options,
    google::cloud::accessapproval::v1::
        DeleteAccessApprovalSettingsMessage const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::accessapproval::v1::
                 DeleteAccessApprovalSettingsMessage const& request) {
        return child_->DeleteAccessApprovalSettings(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::accessapproval::v1::AccessApprovalServiceAccount>
AccessApprovalLogging::GetAccessApprovalServiceAccount(
    grpc::ClientContext& context, Options const& options,
    google::cloud::accessapproval::v1::
        GetAccessApprovalServiceAccountMessage const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::accessapproval::v1::
                 GetAccessApprovalServiceAccountMessage const& request) {
        return child_->GetAccessApprovalServiceAccount(context, options,
                                                       request);
      },
      context, options, request, __func__, tracing_options_);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace accessapproval_v1_internal
}  // namespace cloud
}  // namespace google
