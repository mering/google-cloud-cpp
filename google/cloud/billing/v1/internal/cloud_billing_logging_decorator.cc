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
// source: google/cloud/billing/v1/cloud_billing.proto

#include "google/cloud/billing/v1/internal/cloud_billing_logging_decorator.h"
#include "google/cloud/billing/v1/cloud_billing.grpc.pb.h"
#include "google/cloud/internal/log_wrapper.h"
#include "google/cloud/status_or.h"
#include <memory>
#include <set>
#include <string>
#include <utility>

namespace google {
namespace cloud {
namespace billing_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

CloudBillingLogging::CloudBillingLogging(
    std::shared_ptr<CloudBillingStub> child, TracingOptions tracing_options,
    std::set<std::string> const&)
    : child_(std::move(child)), tracing_options_(std::move(tracing_options)) {}

StatusOr<google::cloud::billing::v1::BillingAccount>
CloudBillingLogging::GetBillingAccount(
    grpc::ClientContext& context, Options const& options,
    google::cloud::billing::v1::GetBillingAccountRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](
          grpc::ClientContext& context, Options const& options,
          google::cloud::billing::v1::GetBillingAccountRequest const& request) {
        return child_->GetBillingAccount(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::billing::v1::ListBillingAccountsResponse>
CloudBillingLogging::ListBillingAccounts(
    grpc::ClientContext& context, Options const& options,
    google::cloud::billing::v1::ListBillingAccountsRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::billing::v1::ListBillingAccountsRequest const&
                 request) {
        return child_->ListBillingAccounts(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::billing::v1::BillingAccount>
CloudBillingLogging::UpdateBillingAccount(
    grpc::ClientContext& context, Options const& options,
    google::cloud::billing::v1::UpdateBillingAccountRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::billing::v1::UpdateBillingAccountRequest const&
                 request) {
        return child_->UpdateBillingAccount(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::billing::v1::BillingAccount>
CloudBillingLogging::CreateBillingAccount(
    grpc::ClientContext& context, Options const& options,
    google::cloud::billing::v1::CreateBillingAccountRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::billing::v1::CreateBillingAccountRequest const&
                 request) {
        return child_->CreateBillingAccount(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::billing::v1::ListProjectBillingInfoResponse>
CloudBillingLogging::ListProjectBillingInfo(
    grpc::ClientContext& context, Options const& options,
    google::cloud::billing::v1::ListProjectBillingInfoRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::billing::v1::ListProjectBillingInfoRequest const&
                 request) {
        return child_->ListProjectBillingInfo(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::billing::v1::ProjectBillingInfo>
CloudBillingLogging::GetProjectBillingInfo(
    grpc::ClientContext& context, Options const& options,
    google::cloud::billing::v1::GetProjectBillingInfoRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::billing::v1::GetProjectBillingInfoRequest const&
                 request) {
        return child_->GetProjectBillingInfo(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::billing::v1::ProjectBillingInfo>
CloudBillingLogging::UpdateProjectBillingInfo(
    grpc::ClientContext& context, Options const& options,
    google::cloud::billing::v1::UpdateProjectBillingInfoRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::billing::v1::UpdateProjectBillingInfoRequest const&
                 request) {
        return child_->UpdateProjectBillingInfo(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::iam::v1::Policy> CloudBillingLogging::GetIamPolicy(
    grpc::ClientContext& context, Options const& options,
    google::iam::v1::GetIamPolicyRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::iam::v1::GetIamPolicyRequest const& request) {
        return child_->GetIamPolicy(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::iam::v1::Policy> CloudBillingLogging::SetIamPolicy(
    grpc::ClientContext& context, Options const& options,
    google::iam::v1::SetIamPolicyRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::iam::v1::SetIamPolicyRequest const& request) {
        return child_->SetIamPolicy(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::iam::v1::TestIamPermissionsResponse>
CloudBillingLogging::TestIamPermissions(
    grpc::ClientContext& context, Options const& options,
    google::iam::v1::TestIamPermissionsRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::iam::v1::TestIamPermissionsRequest const& request) {
        return child_->TestIamPermissions(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::billing::v1::BillingAccount>
CloudBillingLogging::MoveBillingAccount(
    grpc::ClientContext& context, Options const& options,
    google::cloud::billing::v1::MoveBillingAccountRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::billing::v1::MoveBillingAccountRequest const&
                 request) {
        return child_->MoveBillingAccount(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace billing_v1_internal
}  // namespace cloud
}  // namespace google
