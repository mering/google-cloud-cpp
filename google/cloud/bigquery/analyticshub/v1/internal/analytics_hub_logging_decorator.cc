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
// source: google/cloud/bigquery/analyticshub/v1/analyticshub.proto

#include "google/cloud/bigquery/analyticshub/v1/internal/analytics_hub_logging_decorator.h"
#include "google/cloud/internal/log_wrapper.h"
#include "google/cloud/status_or.h"
#include "google/cloud/bigquery/analyticshub/v1/analyticshub.grpc.pb.h"
#include <memory>
#include <set>
#include <string>
#include <utility>

namespace google {
namespace cloud {
namespace bigquery_analyticshub_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

AnalyticsHubServiceLogging::AnalyticsHubServiceLogging(
    std::shared_ptr<AnalyticsHubServiceStub> child,
    TracingOptions tracing_options, std::set<std::string> const&)
    : child_(std::move(child)), tracing_options_(std::move(tracing_options)) {}

StatusOr<google::cloud::bigquery::analyticshub::v1::ListDataExchangesResponse>
AnalyticsHubServiceLogging::ListDataExchanges(
    grpc::ClientContext& context, Options const& options,
    google::cloud::bigquery::analyticshub::v1::ListDataExchangesRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::bigquery::analyticshub::v1::
                 ListDataExchangesRequest const& request) {
        return child_->ListDataExchanges(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<
    google::cloud::bigquery::analyticshub::v1::ListOrgDataExchangesResponse>
AnalyticsHubServiceLogging::ListOrgDataExchanges(
    grpc::ClientContext& context, Options const& options,
    google::cloud::bigquery::analyticshub::v1::
        ListOrgDataExchangesRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::bigquery::analyticshub::v1::
                 ListOrgDataExchangesRequest const& request) {
        return child_->ListOrgDataExchanges(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::bigquery::analyticshub::v1::DataExchange>
AnalyticsHubServiceLogging::GetDataExchange(
    grpc::ClientContext& context, Options const& options,
    google::cloud::bigquery::analyticshub::v1::GetDataExchangeRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::bigquery::analyticshub::v1::
                 GetDataExchangeRequest const& request) {
        return child_->GetDataExchange(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::bigquery::analyticshub::v1::DataExchange>
AnalyticsHubServiceLogging::CreateDataExchange(
    grpc::ClientContext& context, Options const& options,
    google::cloud::bigquery::analyticshub::v1::CreateDataExchangeRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::bigquery::analyticshub::v1::
                 CreateDataExchangeRequest const& request) {
        return child_->CreateDataExchange(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::bigquery::analyticshub::v1::DataExchange>
AnalyticsHubServiceLogging::UpdateDataExchange(
    grpc::ClientContext& context, Options const& options,
    google::cloud::bigquery::analyticshub::v1::UpdateDataExchangeRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::bigquery::analyticshub::v1::
                 UpdateDataExchangeRequest const& request) {
        return child_->UpdateDataExchange(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

Status AnalyticsHubServiceLogging::DeleteDataExchange(
    grpc::ClientContext& context, Options const& options,
    google::cloud::bigquery::analyticshub::v1::DeleteDataExchangeRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::bigquery::analyticshub::v1::
                 DeleteDataExchangeRequest const& request) {
        return child_->DeleteDataExchange(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::bigquery::analyticshub::v1::ListListingsResponse>
AnalyticsHubServiceLogging::ListListings(
    grpc::ClientContext& context, Options const& options,
    google::cloud::bigquery::analyticshub::v1::ListListingsRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](
          grpc::ClientContext& context, Options const& options,
          google::cloud::bigquery::analyticshub::v1::ListListingsRequest const&
              request) {
        return child_->ListListings(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::bigquery::analyticshub::v1::Listing>
AnalyticsHubServiceLogging::GetListing(
    grpc::ClientContext& context, Options const& options,
    google::cloud::bigquery::analyticshub::v1::GetListingRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::bigquery::analyticshub::v1::GetListingRequest const&
                 request) {
        return child_->GetListing(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::bigquery::analyticshub::v1::Listing>
AnalyticsHubServiceLogging::CreateListing(
    grpc::ClientContext& context, Options const& options,
    google::cloud::bigquery::analyticshub::v1::CreateListingRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](
          grpc::ClientContext& context, Options const& options,
          google::cloud::bigquery::analyticshub::v1::CreateListingRequest const&
              request) {
        return child_->CreateListing(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::bigquery::analyticshub::v1::Listing>
AnalyticsHubServiceLogging::UpdateListing(
    grpc::ClientContext& context, Options const& options,
    google::cloud::bigquery::analyticshub::v1::UpdateListingRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](
          grpc::ClientContext& context, Options const& options,
          google::cloud::bigquery::analyticshub::v1::UpdateListingRequest const&
              request) {
        return child_->UpdateListing(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

Status AnalyticsHubServiceLogging::DeleteListing(
    grpc::ClientContext& context, Options const& options,
    google::cloud::bigquery::analyticshub::v1::DeleteListingRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](
          grpc::ClientContext& context, Options const& options,
          google::cloud::bigquery::analyticshub::v1::DeleteListingRequest const&
              request) {
        return child_->DeleteListing(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::bigquery::analyticshub::v1::SubscribeListingResponse>
AnalyticsHubServiceLogging::SubscribeListing(
    grpc::ClientContext& context, Options const& options,
    google::cloud::bigquery::analyticshub::v1::SubscribeListingRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::bigquery::analyticshub::v1::
                 SubscribeListingRequest const& request) {
        return child_->SubscribeListing(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
AnalyticsHubServiceLogging::AsyncSubscribeDataExchange(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::bigquery::analyticshub::v1::
        SubscribeDataExchangeRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             google::cloud::internal::ImmutableOptions options,
             google::cloud::bigquery::analyticshub::v1::
                 SubscribeDataExchangeRequest const& request) {
        return child_->AsyncSubscribeDataExchange(cq, std::move(context),
                                                  std::move(options), request);
      },
      cq, std::move(context), std::move(options), request, __func__,
      tracing_options_);
}

StatusOr<google::longrunning::Operation>
AnalyticsHubServiceLogging::SubscribeDataExchange(
    grpc::ClientContext& context, Options options,
    google::cloud::bigquery::analyticshub::v1::
        SubscribeDataExchangeRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::bigquery::analyticshub::v1::
                 SubscribeDataExchangeRequest const& request) {
        return child_->SubscribeDataExchange(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
AnalyticsHubServiceLogging::AsyncRefreshSubscription(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::bigquery::analyticshub::v1::RefreshSubscriptionRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             google::cloud::internal::ImmutableOptions options,
             google::cloud::bigquery::analyticshub::v1::
                 RefreshSubscriptionRequest const& request) {
        return child_->AsyncRefreshSubscription(cq, std::move(context),
                                                std::move(options), request);
      },
      cq, std::move(context), std::move(options), request, __func__,
      tracing_options_);
}

StatusOr<google::longrunning::Operation>
AnalyticsHubServiceLogging::RefreshSubscription(
    grpc::ClientContext& context, Options options,
    google::cloud::bigquery::analyticshub::v1::RefreshSubscriptionRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::bigquery::analyticshub::v1::
                 RefreshSubscriptionRequest const& request) {
        return child_->RefreshSubscription(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::bigquery::analyticshub::v1::Subscription>
AnalyticsHubServiceLogging::GetSubscription(
    grpc::ClientContext& context, Options const& options,
    google::cloud::bigquery::analyticshub::v1::GetSubscriptionRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::bigquery::analyticshub::v1::
                 GetSubscriptionRequest const& request) {
        return child_->GetSubscription(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::bigquery::analyticshub::v1::ListSubscriptionsResponse>
AnalyticsHubServiceLogging::ListSubscriptions(
    grpc::ClientContext& context, Options const& options,
    google::cloud::bigquery::analyticshub::v1::ListSubscriptionsRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::bigquery::analyticshub::v1::
                 ListSubscriptionsRequest const& request) {
        return child_->ListSubscriptions(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::bigquery::analyticshub::v1::
             ListSharedResourceSubscriptionsResponse>
AnalyticsHubServiceLogging::ListSharedResourceSubscriptions(
    grpc::ClientContext& context, Options const& options,
    google::cloud::bigquery::analyticshub::v1::
        ListSharedResourceSubscriptionsRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::bigquery::analyticshub::v1::
                 ListSharedResourceSubscriptionsRequest const& request) {
        return child_->ListSharedResourceSubscriptions(context, options,
                                                       request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::bigquery::analyticshub::v1::RevokeSubscriptionResponse>
AnalyticsHubServiceLogging::RevokeSubscription(
    grpc::ClientContext& context, Options const& options,
    google::cloud::bigquery::analyticshub::v1::RevokeSubscriptionRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::bigquery::analyticshub::v1::
                 RevokeSubscriptionRequest const& request) {
        return child_->RevokeSubscription(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
AnalyticsHubServiceLogging::AsyncDeleteSubscription(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::bigquery::analyticshub::v1::DeleteSubscriptionRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             google::cloud::internal::ImmutableOptions options,
             google::cloud::bigquery::analyticshub::v1::
                 DeleteSubscriptionRequest const& request) {
        return child_->AsyncDeleteSubscription(cq, std::move(context),
                                               std::move(options), request);
      },
      cq, std::move(context), std::move(options), request, __func__,
      tracing_options_);
}

StatusOr<google::longrunning::Operation>
AnalyticsHubServiceLogging::DeleteSubscription(
    grpc::ClientContext& context, Options options,
    google::cloud::bigquery::analyticshub::v1::DeleteSubscriptionRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::bigquery::analyticshub::v1::
                 DeleteSubscriptionRequest const& request) {
        return child_->DeleteSubscription(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::iam::v1::Policy> AnalyticsHubServiceLogging::GetIamPolicy(
    grpc::ClientContext& context, Options const& options,
    google::iam::v1::GetIamPolicyRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::iam::v1::GetIamPolicyRequest const& request) {
        return child_->GetIamPolicy(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::iam::v1::Policy> AnalyticsHubServiceLogging::SetIamPolicy(
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
AnalyticsHubServiceLogging::TestIamPermissions(
    grpc::ClientContext& context, Options const& options,
    google::iam::v1::TestIamPermissionsRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::iam::v1::TestIamPermissionsRequest const& request) {
        return child_->TestIamPermissions(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
AnalyticsHubServiceLogging::AsyncGetOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::longrunning::GetOperationRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             google::cloud::internal::ImmutableOptions options,
             google::longrunning::GetOperationRequest const& request) {
        return child_->AsyncGetOperation(cq, std::move(context),
                                         std::move(options), request);
      },
      cq, std::move(context), std::move(options), request, __func__,
      tracing_options_);
}

future<Status> AnalyticsHubServiceLogging::AsyncCancelOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::longrunning::CancelOperationRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             google::cloud::internal::ImmutableOptions options,
             google::longrunning::CancelOperationRequest const& request) {
        return child_->AsyncCancelOperation(cq, std::move(context),
                                            std::move(options), request);
      },
      cq, std::move(context), std::move(options), request, __func__,
      tracing_options_);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace bigquery_analyticshub_v1_internal
}  // namespace cloud
}  // namespace google
