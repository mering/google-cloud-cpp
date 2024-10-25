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

#include "google/cloud/commerce/consumer/procurement/v1/internal/consumer_procurement_logging_decorator.h"
#include "google/cloud/commerce/consumer/procurement/v1/procurement_service.grpc.pb.h"
#include "google/cloud/internal/log_wrapper.h"
#include "google/cloud/status_or.h"
#include <memory>
#include <set>
#include <string>
#include <utility>

namespace google {
namespace cloud {
namespace commerce_consumer_procurement_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

ConsumerProcurementServiceLogging::ConsumerProcurementServiceLogging(
    std::shared_ptr<ConsumerProcurementServiceStub> child,
    TracingOptions tracing_options, std::set<std::string> const&)
    : child_(std::move(child)), tracing_options_(std::move(tracing_options)) {}

future<StatusOr<google::longrunning::Operation>>
ConsumerProcurementServiceLogging::AsyncPlaceOrder(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::commerce::consumer::procurement::v1::PlaceOrderRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             google::cloud::internal::ImmutableOptions options,
             google::cloud::commerce::consumer::procurement::v1::
                 PlaceOrderRequest const& request) {
        return child_->AsyncPlaceOrder(cq, std::move(context),
                                       std::move(options), request);
      },
      cq, std::move(context), std::move(options), request, __func__,
      tracing_options_);
}

StatusOr<google::longrunning::Operation>
ConsumerProcurementServiceLogging::PlaceOrder(
    grpc::ClientContext& context, Options options,
    google::cloud::commerce::consumer::procurement::v1::PlaceOrderRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::commerce::consumer::procurement::v1::
                 PlaceOrderRequest const& request) {
        return child_->PlaceOrder(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::commerce::consumer::procurement::v1::Order>
ConsumerProcurementServiceLogging::GetOrder(
    grpc::ClientContext& context, Options const& options,
    google::cloud::commerce::consumer::procurement::v1::GetOrderRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::commerce::consumer::procurement::v1::
                 GetOrderRequest const& request) {
        return child_->GetOrder(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::commerce::consumer::procurement::v1::ListOrdersResponse>
ConsumerProcurementServiceLogging::ListOrders(
    grpc::ClientContext& context, Options const& options,
    google::cloud::commerce::consumer::procurement::v1::ListOrdersRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::commerce::consumer::procurement::v1::
                 ListOrdersRequest const& request) {
        return child_->ListOrders(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
ConsumerProcurementServiceLogging::AsyncModifyOrder(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::commerce::consumer::procurement::v1::
        ModifyOrderRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             google::cloud::internal::ImmutableOptions options,
             google::cloud::commerce::consumer::procurement::v1::
                 ModifyOrderRequest const& request) {
        return child_->AsyncModifyOrder(cq, std::move(context),
                                        std::move(options), request);
      },
      cq, std::move(context), std::move(options), request, __func__,
      tracing_options_);
}

StatusOr<google::longrunning::Operation>
ConsumerProcurementServiceLogging::ModifyOrder(
    grpc::ClientContext& context, Options options,
    google::cloud::commerce::consumer::procurement::v1::
        ModifyOrderRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::commerce::consumer::procurement::v1::
                 ModifyOrderRequest const& request) {
        return child_->ModifyOrder(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
ConsumerProcurementServiceLogging::AsyncCancelOrder(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::commerce::consumer::procurement::v1::
        CancelOrderRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             google::cloud::internal::ImmutableOptions options,
             google::cloud::commerce::consumer::procurement::v1::
                 CancelOrderRequest const& request) {
        return child_->AsyncCancelOrder(cq, std::move(context),
                                        std::move(options), request);
      },
      cq, std::move(context), std::move(options), request, __func__,
      tracing_options_);
}

StatusOr<google::longrunning::Operation>
ConsumerProcurementServiceLogging::CancelOrder(
    grpc::ClientContext& context, Options options,
    google::cloud::commerce::consumer::procurement::v1::
        CancelOrderRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::commerce::consumer::procurement::v1::
                 CancelOrderRequest const& request) {
        return child_->CancelOrder(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::longrunning::Operation>
ConsumerProcurementServiceLogging::GetOperation(
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
ConsumerProcurementServiceLogging::AsyncGetOperation(
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

future<Status> ConsumerProcurementServiceLogging::AsyncCancelOperation(
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
}  // namespace commerce_consumer_procurement_v1_internal
}  // namespace cloud
}  // namespace google
