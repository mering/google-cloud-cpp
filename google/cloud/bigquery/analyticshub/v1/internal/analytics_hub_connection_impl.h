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

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_BIGQUERY_ANALYTICSHUB_V1_INTERNAL_ANALYTICS_HUB_CONNECTION_IMPL_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_BIGQUERY_ANALYTICSHUB_V1_INTERNAL_ANALYTICS_HUB_CONNECTION_IMPL_H

#include "google/cloud/bigquery/analyticshub/v1/analytics_hub_connection.h"
#include "google/cloud/bigquery/analyticshub/v1/analytics_hub_connection_idempotency_policy.h"
#include "google/cloud/bigquery/analyticshub/v1/analytics_hub_options.h"
#include "google/cloud/bigquery/analyticshub/v1/internal/analytics_hub_retry_traits.h"
#include "google/cloud/bigquery/analyticshub/v1/internal/analytics_hub_stub.h"
#include "google/cloud/background_threads.h"
#include "google/cloud/backoff_policy.h"
#include "google/cloud/future.h"
#include "google/cloud/options.h"
#include "google/cloud/polling_policy.h"
#include "google/cloud/status_or.h"
#include "google/cloud/stream_range.h"
#include "google/cloud/version.h"
#include "google/longrunning/operations.grpc.pb.h"
#include <memory>

namespace google {
namespace cloud {
namespace bigquery_analyticshub_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class AnalyticsHubServiceConnectionImpl
    : public bigquery_analyticshub_v1::AnalyticsHubServiceConnection {
 public:
  ~AnalyticsHubServiceConnectionImpl() override = default;

  AnalyticsHubServiceConnectionImpl(
      std::unique_ptr<google::cloud::BackgroundThreads> background,
      std::shared_ptr<
          bigquery_analyticshub_v1_internal::AnalyticsHubServiceStub>
          stub,
      Options options);

  Options options() override { return options_; }

  StreamRange<google::cloud::bigquery::analyticshub::v1::DataExchange>
  ListDataExchanges(
      google::cloud::bigquery::analyticshub::v1::ListDataExchangesRequest
          request) override;

  StreamRange<google::cloud::bigquery::analyticshub::v1::DataExchange>
  ListOrgDataExchanges(
      google::cloud::bigquery::analyticshub::v1::ListOrgDataExchangesRequest
          request) override;

  StatusOr<google::cloud::bigquery::analyticshub::v1::DataExchange>
  GetDataExchange(
      google::cloud::bigquery::analyticshub::v1::GetDataExchangeRequest const&
          request) override;

  StatusOr<google::cloud::bigquery::analyticshub::v1::DataExchange>
  CreateDataExchange(google::cloud::bigquery::analyticshub::v1::
                         CreateDataExchangeRequest const& request) override;

  StatusOr<google::cloud::bigquery::analyticshub::v1::DataExchange>
  UpdateDataExchange(google::cloud::bigquery::analyticshub::v1::
                         UpdateDataExchangeRequest const& request) override;

  Status DeleteDataExchange(
      google::cloud::bigquery::analyticshub::v1::
          DeleteDataExchangeRequest const& request) override;

  StreamRange<google::cloud::bigquery::analyticshub::v1::Listing> ListListings(
      google::cloud::bigquery::analyticshub::v1::ListListingsRequest request)
      override;

  StatusOr<google::cloud::bigquery::analyticshub::v1::Listing> GetListing(
      google::cloud::bigquery::analyticshub::v1::GetListingRequest const&
          request) override;

  StatusOr<google::cloud::bigquery::analyticshub::v1::Listing> CreateListing(
      google::cloud::bigquery::analyticshub::v1::CreateListingRequest const&
          request) override;

  StatusOr<google::cloud::bigquery::analyticshub::v1::Listing> UpdateListing(
      google::cloud::bigquery::analyticshub::v1::UpdateListingRequest const&
          request) override;

  Status DeleteListing(
      google::cloud::bigquery::analyticshub::v1::DeleteListingRequest const&
          request) override;

  StatusOr<google::cloud::bigquery::analyticshub::v1::SubscribeListingResponse>
  SubscribeListing(
      google::cloud::bigquery::analyticshub::v1::SubscribeListingRequest const&
          request) override;

  future<StatusOr<
      google::cloud::bigquery::analyticshub::v1::SubscribeDataExchangeResponse>>
  SubscribeDataExchange(
      google::cloud::bigquery::analyticshub::v1::
          SubscribeDataExchangeRequest const& request) override;

  StatusOr<google::longrunning::Operation> SubscribeDataExchange(
      NoAwaitTag, google::cloud::bigquery::analyticshub::v1::
                      SubscribeDataExchangeRequest const& request) override;

  future<StatusOr<
      google::cloud::bigquery::analyticshub::v1::SubscribeDataExchangeResponse>>
  SubscribeDataExchange(
      google::longrunning::Operation const& operation) override;

  future<StatusOr<
      google::cloud::bigquery::analyticshub::v1::RefreshSubscriptionResponse>>
  RefreshSubscription(google::cloud::bigquery::analyticshub::v1::
                          RefreshSubscriptionRequest const& request) override;

  StatusOr<google::longrunning::Operation> RefreshSubscription(
      NoAwaitTag, google::cloud::bigquery::analyticshub::v1::
                      RefreshSubscriptionRequest const& request) override;

  future<StatusOr<
      google::cloud::bigquery::analyticshub::v1::RefreshSubscriptionResponse>>
  RefreshSubscription(google::longrunning::Operation const& operation) override;

  StatusOr<google::cloud::bigquery::analyticshub::v1::Subscription>
  GetSubscription(
      google::cloud::bigquery::analyticshub::v1::GetSubscriptionRequest const&
          request) override;

  StreamRange<google::cloud::bigquery::analyticshub::v1::Subscription>
  ListSubscriptions(
      google::cloud::bigquery::analyticshub::v1::ListSubscriptionsRequest
          request) override;

  StreamRange<google::cloud::bigquery::analyticshub::v1::Subscription>
  ListSharedResourceSubscriptions(
      google::cloud::bigquery::analyticshub::v1::
          ListSharedResourceSubscriptionsRequest request) override;

  StatusOr<
      google::cloud::bigquery::analyticshub::v1::RevokeSubscriptionResponse>
  RevokeSubscription(google::cloud::bigquery::analyticshub::v1::
                         RevokeSubscriptionRequest const& request) override;

  future<StatusOr<google::cloud::bigquery::analyticshub::v1::OperationMetadata>>
  DeleteSubscription(google::cloud::bigquery::analyticshub::v1::
                         DeleteSubscriptionRequest const& request) override;

  StatusOr<google::longrunning::Operation> DeleteSubscription(
      NoAwaitTag, google::cloud::bigquery::analyticshub::v1::
                      DeleteSubscriptionRequest const& request) override;

  future<StatusOr<google::cloud::bigquery::analyticshub::v1::OperationMetadata>>
  DeleteSubscription(google::longrunning::Operation const& operation) override;

  StatusOr<google::iam::v1::Policy> GetIamPolicy(
      google::iam::v1::GetIamPolicyRequest const& request) override;

  StatusOr<google::iam::v1::Policy> SetIamPolicy(
      google::iam::v1::SetIamPolicyRequest const& request) override;

  StatusOr<google::iam::v1::TestIamPermissionsResponse> TestIamPermissions(
      google::iam::v1::TestIamPermissionsRequest const& request) override;

 private:
  std::unique_ptr<google::cloud::BackgroundThreads> background_;
  std::shared_ptr<bigquery_analyticshub_v1_internal::AnalyticsHubServiceStub>
      stub_;
  Options options_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace bigquery_analyticshub_v1_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_BIGQUERY_ANALYTICSHUB_V1_INTERNAL_ANALYTICS_HUB_CONNECTION_IMPL_H
