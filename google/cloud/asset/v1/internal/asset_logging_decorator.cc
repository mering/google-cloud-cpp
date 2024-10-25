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
// source: google/cloud/asset/v1/asset_service.proto

#include "google/cloud/asset/v1/internal/asset_logging_decorator.h"
#include "google/cloud/internal/log_wrapper.h"
#include "google/cloud/status_or.h"
#include "google/cloud/asset/v1/asset_service.grpc.pb.h"
#include <memory>
#include <set>
#include <string>
#include <utility>

namespace google {
namespace cloud {
namespace asset_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

AssetServiceLogging::AssetServiceLogging(
    std::shared_ptr<AssetServiceStub> child, TracingOptions tracing_options,
    std::set<std::string> const&)
    : child_(std::move(child)), tracing_options_(std::move(tracing_options)) {}

future<StatusOr<google::longrunning::Operation>>
AssetServiceLogging::AsyncExportAssets(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::asset::v1::ExportAssetsRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             google::cloud::internal::ImmutableOptions options,
             google::cloud::asset::v1::ExportAssetsRequest const& request) {
        return child_->AsyncExportAssets(cq, std::move(context),
                                         std::move(options), request);
      },
      cq, std::move(context), std::move(options), request, __func__,
      tracing_options_);
}

StatusOr<google::longrunning::Operation> AssetServiceLogging::ExportAssets(
    grpc::ClientContext& context, Options options,
    google::cloud::asset::v1::ExportAssetsRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::asset::v1::ExportAssetsRequest const& request) {
        return child_->ExportAssets(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::asset::v1::ListAssetsResponse>
AssetServiceLogging::ListAssets(
    grpc::ClientContext& context, Options const& options,
    google::cloud::asset::v1::ListAssetsRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::asset::v1::ListAssetsRequest const& request) {
        return child_->ListAssets(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::asset::v1::BatchGetAssetsHistoryResponse>
AssetServiceLogging::BatchGetAssetsHistory(
    grpc::ClientContext& context, Options const& options,
    google::cloud::asset::v1::BatchGetAssetsHistoryRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::asset::v1::BatchGetAssetsHistoryRequest const&
                 request) {
        return child_->BatchGetAssetsHistory(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::asset::v1::Feed> AssetServiceLogging::CreateFeed(
    grpc::ClientContext& context, Options const& options,
    google::cloud::asset::v1::CreateFeedRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::asset::v1::CreateFeedRequest const& request) {
        return child_->CreateFeed(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::asset::v1::Feed> AssetServiceLogging::GetFeed(
    grpc::ClientContext& context, Options const& options,
    google::cloud::asset::v1::GetFeedRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::asset::v1::GetFeedRequest const& request) {
        return child_->GetFeed(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::asset::v1::ListFeedsResponse>
AssetServiceLogging::ListFeeds(
    grpc::ClientContext& context, Options const& options,
    google::cloud::asset::v1::ListFeedsRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::asset::v1::ListFeedsRequest const& request) {
        return child_->ListFeeds(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::asset::v1::Feed> AssetServiceLogging::UpdateFeed(
    grpc::ClientContext& context, Options const& options,
    google::cloud::asset::v1::UpdateFeedRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::asset::v1::UpdateFeedRequest const& request) {
        return child_->UpdateFeed(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

Status AssetServiceLogging::DeleteFeed(
    grpc::ClientContext& context, Options const& options,
    google::cloud::asset::v1::DeleteFeedRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::asset::v1::DeleteFeedRequest const& request) {
        return child_->DeleteFeed(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::asset::v1::SearchAllResourcesResponse>
AssetServiceLogging::SearchAllResources(
    grpc::ClientContext& context, Options const& options,
    google::cloud::asset::v1::SearchAllResourcesRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](
          grpc::ClientContext& context, Options const& options,
          google::cloud::asset::v1::SearchAllResourcesRequest const& request) {
        return child_->SearchAllResources(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::asset::v1::SearchAllIamPoliciesResponse>
AssetServiceLogging::SearchAllIamPolicies(
    grpc::ClientContext& context, Options const& options,
    google::cloud::asset::v1::SearchAllIamPoliciesRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::asset::v1::SearchAllIamPoliciesRequest const&
                 request) {
        return child_->SearchAllIamPolicies(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::asset::v1::AnalyzeIamPolicyResponse>
AssetServiceLogging::AnalyzeIamPolicy(
    grpc::ClientContext& context, Options const& options,
    google::cloud::asset::v1::AnalyzeIamPolicyRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::asset::v1::AnalyzeIamPolicyRequest const& request) {
        return child_->AnalyzeIamPolicy(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
AssetServiceLogging::AsyncAnalyzeIamPolicyLongrunning(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::asset::v1::AnalyzeIamPolicyLongrunningRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             google::cloud::internal::ImmutableOptions options,
             google::cloud::asset::v1::AnalyzeIamPolicyLongrunningRequest const&
                 request) {
        return child_->AsyncAnalyzeIamPolicyLongrunning(
            cq, std::move(context), std::move(options), request);
      },
      cq, std::move(context), std::move(options), request, __func__,
      tracing_options_);
}

StatusOr<google::longrunning::Operation>
AssetServiceLogging::AnalyzeIamPolicyLongrunning(
    grpc::ClientContext& context, Options options,
    google::cloud::asset::v1::AnalyzeIamPolicyLongrunningRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::asset::v1::AnalyzeIamPolicyLongrunningRequest const&
                 request) {
        return child_->AnalyzeIamPolicyLongrunning(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::asset::v1::AnalyzeMoveResponse>
AssetServiceLogging::AnalyzeMove(
    grpc::ClientContext& context, Options const& options,
    google::cloud::asset::v1::AnalyzeMoveRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::asset::v1::AnalyzeMoveRequest const& request) {
        return child_->AnalyzeMove(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::asset::v1::QueryAssetsResponse>
AssetServiceLogging::QueryAssets(
    grpc::ClientContext& context, Options const& options,
    google::cloud::asset::v1::QueryAssetsRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::asset::v1::QueryAssetsRequest const& request) {
        return child_->QueryAssets(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::asset::v1::SavedQuery>
AssetServiceLogging::CreateSavedQuery(
    grpc::ClientContext& context, Options const& options,
    google::cloud::asset::v1::CreateSavedQueryRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::asset::v1::CreateSavedQueryRequest const& request) {
        return child_->CreateSavedQuery(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::asset::v1::SavedQuery>
AssetServiceLogging::GetSavedQuery(
    grpc::ClientContext& context, Options const& options,
    google::cloud::asset::v1::GetSavedQueryRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::asset::v1::GetSavedQueryRequest const& request) {
        return child_->GetSavedQuery(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::asset::v1::ListSavedQueriesResponse>
AssetServiceLogging::ListSavedQueries(
    grpc::ClientContext& context, Options const& options,
    google::cloud::asset::v1::ListSavedQueriesRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::asset::v1::ListSavedQueriesRequest const& request) {
        return child_->ListSavedQueries(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::asset::v1::SavedQuery>
AssetServiceLogging::UpdateSavedQuery(
    grpc::ClientContext& context, Options const& options,
    google::cloud::asset::v1::UpdateSavedQueryRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::asset::v1::UpdateSavedQueryRequest const& request) {
        return child_->UpdateSavedQuery(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

Status AssetServiceLogging::DeleteSavedQuery(
    grpc::ClientContext& context, Options const& options,
    google::cloud::asset::v1::DeleteSavedQueryRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::asset::v1::DeleteSavedQueryRequest const& request) {
        return child_->DeleteSavedQuery(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::asset::v1::BatchGetEffectiveIamPoliciesResponse>
AssetServiceLogging::BatchGetEffectiveIamPolicies(
    grpc::ClientContext& context, Options const& options,
    google::cloud::asset::v1::BatchGetEffectiveIamPoliciesRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](
          grpc::ClientContext& context, Options const& options,
          google::cloud::asset::v1::BatchGetEffectiveIamPoliciesRequest const&
              request) {
        return child_->BatchGetEffectiveIamPolicies(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::asset::v1::AnalyzeOrgPoliciesResponse>
AssetServiceLogging::AnalyzeOrgPolicies(
    grpc::ClientContext& context, Options const& options,
    google::cloud::asset::v1::AnalyzeOrgPoliciesRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](
          grpc::ClientContext& context, Options const& options,
          google::cloud::asset::v1::AnalyzeOrgPoliciesRequest const& request) {
        return child_->AnalyzeOrgPolicies(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::asset::v1::AnalyzeOrgPolicyGovernedContainersResponse>
AssetServiceLogging::AnalyzeOrgPolicyGovernedContainers(
    grpc::ClientContext& context, Options const& options,
    google::cloud::asset::v1::AnalyzeOrgPolicyGovernedContainersRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::asset::v1::
                 AnalyzeOrgPolicyGovernedContainersRequest const& request) {
        return child_->AnalyzeOrgPolicyGovernedContainers(context, options,
                                                          request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::asset::v1::AnalyzeOrgPolicyGovernedAssetsResponse>
AssetServiceLogging::AnalyzeOrgPolicyGovernedAssets(
    grpc::ClientContext& context, Options const& options,
    google::cloud::asset::v1::AnalyzeOrgPolicyGovernedAssetsRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](
          grpc::ClientContext& context, Options const& options,
          google::cloud::asset::v1::AnalyzeOrgPolicyGovernedAssetsRequest const&
              request) {
        return child_->AnalyzeOrgPolicyGovernedAssets(context, options,
                                                      request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::longrunning::Operation> AssetServiceLogging::GetOperation(
    grpc::ClientContext& context, Options const& options,
    google::longrunning::GetOperationRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::longrunning::GetOperationRequest const& request) {
        return child_->GetOperation(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
AssetServiceLogging::AsyncGetOperation(
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

future<Status> AssetServiceLogging::AsyncCancelOperation(
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
}  // namespace asset_v1_internal
}  // namespace cloud
}  // namespace google
