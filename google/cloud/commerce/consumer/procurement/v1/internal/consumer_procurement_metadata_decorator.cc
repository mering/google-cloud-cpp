// Copyright 2023 Google LLC
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
// source:
// google/cloud/commerce/consumer/procurement/v1/procurement_service.proto

#include "google/cloud/commerce/consumer/procurement/v1/internal/consumer_procurement_metadata_decorator.h"
#include "google/cloud/grpc_options.h"
#include "google/cloud/internal/absl_str_cat_quiet.h"
#include "google/cloud/internal/api_client_header.h"
#include "google/cloud/internal/url_encode.h"
#include "google/cloud/status_or.h"
#include "google/cloud/commerce/consumer/procurement/v1/procurement_service.grpc.pb.h"
#include <memory>
#include <string>
#include <utility>
#include <vector>

namespace google {
namespace cloud {
namespace commerce_consumer_procurement_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

ConsumerProcurementServiceMetadata::ConsumerProcurementServiceMetadata(
    std::shared_ptr<ConsumerProcurementServiceStub> child,
    std::multimap<std::string, std::string> fixed_metadata,
    std::string api_client_header)
    : child_(std::move(child)),
      fixed_metadata_(std::move(fixed_metadata)),
      api_client_header_(
          api_client_header.empty()
              ? google::cloud::internal::GeneratedLibClientHeader()
              : std::move(api_client_header)) {}

future<StatusOr<google::longrunning::Operation>>
ConsumerProcurementServiceMetadata::AsyncPlaceOrder(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::commerce::consumer::procurement::v1::PlaceOrderRequest const&
        request) {
  SetMetadata(*context, *options,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->AsyncPlaceOrder(cq, std::move(context), std::move(options),
                                 request);
}

StatusOr<google::longrunning::Operation>
ConsumerProcurementServiceMetadata::PlaceOrder(
    grpc::ClientContext& context, Options options,
    google::cloud::commerce::consumer::procurement::v1::PlaceOrderRequest const&
        request) {
  SetMetadata(context, options,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->PlaceOrder(context, options, request);
}

StatusOr<google::cloud::commerce::consumer::procurement::v1::Order>
ConsumerProcurementServiceMetadata::GetOrder(
    grpc::ClientContext& context, Options const& options,
    google::cloud::commerce::consumer::procurement::v1::GetOrderRequest const&
        request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->GetOrder(context, options, request);
}

StatusOr<google::cloud::commerce::consumer::procurement::v1::ListOrdersResponse>
ConsumerProcurementServiceMetadata::ListOrders(
    grpc::ClientContext& context, Options const& options,
    google::cloud::commerce::consumer::procurement::v1::ListOrdersRequest const&
        request) {
  SetMetadata(context, options,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->ListOrders(context, options, request);
}

future<StatusOr<google::longrunning::Operation>>
ConsumerProcurementServiceMetadata::AsyncModifyOrder(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::commerce::consumer::procurement::v1::
        ModifyOrderRequest const& request) {
  SetMetadata(*context, *options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->AsyncModifyOrder(cq, std::move(context), std::move(options),
                                  request);
}

StatusOr<google::longrunning::Operation>
ConsumerProcurementServiceMetadata::ModifyOrder(
    grpc::ClientContext& context, Options options,
    google::cloud::commerce::consumer::procurement::v1::
        ModifyOrderRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->ModifyOrder(context, options, request);
}

future<StatusOr<google::longrunning::Operation>>
ConsumerProcurementServiceMetadata::AsyncCancelOrder(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::commerce::consumer::procurement::v1::
        CancelOrderRequest const& request) {
  SetMetadata(*context, *options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->AsyncCancelOrder(cq, std::move(context), std::move(options),
                                  request);
}

StatusOr<google::longrunning::Operation>
ConsumerProcurementServiceMetadata::CancelOrder(
    grpc::ClientContext& context, Options options,
    google::cloud::commerce::consumer::procurement::v1::
        CancelOrderRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->CancelOrder(context, options, request);
}

StatusOr<google::longrunning::Operation>
ConsumerProcurementServiceMetadata::GetOperation(
    grpc::ClientContext& context, Options const& options,
    google::longrunning::GetOperationRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->GetOperation(context, options, request);
}

future<StatusOr<google::longrunning::Operation>>
ConsumerProcurementServiceMetadata::AsyncGetOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::longrunning::GetOperationRequest const& request) {
  SetMetadata(*context, *options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->AsyncGetOperation(cq, std::move(context), std::move(options),
                                   request);
}

future<Status> ConsumerProcurementServiceMetadata::AsyncCancelOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::longrunning::CancelOperationRequest const& request) {
  SetMetadata(*context, *options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->AsyncCancelOperation(cq, std::move(context),
                                      std::move(options), request);
}

void ConsumerProcurementServiceMetadata::SetMetadata(
    grpc::ClientContext& context, Options const& options,
    std::string const& request_params) {
  context.AddMetadata("x-goog-request-params", request_params);
  SetMetadata(context, options);
}

void ConsumerProcurementServiceMetadata::SetMetadata(
    grpc::ClientContext& context, Options const& options) {
  google::cloud::internal::SetMetadata(context, options, fixed_metadata_,
                                       api_client_header_);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace commerce_consumer_procurement_v1_internal
}  // namespace cloud
}  // namespace google
