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

#include "google/cloud/commerce/consumer/procurement/v1/internal/consumer_procurement_connection_impl.h"
#include "google/cloud/commerce/consumer/procurement/v1/internal/consumer_procurement_option_defaults.h"
#include "google/cloud/background_threads.h"
#include "google/cloud/common_options.h"
#include "google/cloud/grpc_options.h"
#include "google/cloud/internal/async_long_running_operation.h"
#include "google/cloud/internal/pagination_range.h"
#include "google/cloud/internal/retry_loop.h"
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace commerce_consumer_procurement_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN
namespace {

std::unique_ptr<
    commerce_consumer_procurement_v1::ConsumerProcurementServiceRetryPolicy>
retry_policy(Options const& options) {
  return options
      .get<commerce_consumer_procurement_v1::
               ConsumerProcurementServiceRetryPolicyOption>()
      ->clone();
}

std::unique_ptr<BackoffPolicy> backoff_policy(Options const& options) {
  return options
      .get<commerce_consumer_procurement_v1::
               ConsumerProcurementServiceBackoffPolicyOption>()
      ->clone();
}

std::unique_ptr<commerce_consumer_procurement_v1::
                    ConsumerProcurementServiceConnectionIdempotencyPolicy>
idempotency_policy(Options const& options) {
  return options
      .get<commerce_consumer_procurement_v1::
               ConsumerProcurementServiceConnectionIdempotencyPolicyOption>()
      ->clone();
}

std::unique_ptr<PollingPolicy> polling_policy(Options const& options) {
  return options
      .get<commerce_consumer_procurement_v1::
               ConsumerProcurementServicePollingPolicyOption>()
      ->clone();
}

}  // namespace

ConsumerProcurementServiceConnectionImpl::
    ConsumerProcurementServiceConnectionImpl(
        std::unique_ptr<google::cloud::BackgroundThreads> background,
        std::shared_ptr<commerce_consumer_procurement_v1_internal::
                            ConsumerProcurementServiceStub>
            stub,
        Options options)
    : background_(std::move(background)),
      stub_(std::move(stub)),
      options_(internal::MergeOptions(
          std::move(options),
          ConsumerProcurementServiceConnection::options())) {}

future<StatusOr<google::cloud::commerce::consumer::procurement::v1::Order>>
ConsumerProcurementServiceConnectionImpl::PlaceOrder(
    google::cloud::commerce::consumer::procurement::v1::PlaceOrderRequest const&
        request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  auto request_copy = request;
  auto const idempotent =
      idempotency_policy(*current)->PlaceOrder(request_copy);
  return google::cloud::internal::AsyncLongRunningOperation<
      google::cloud::commerce::consumer::procurement::v1::Order>(
      background_->cq(), current, std::move(request_copy),
      [stub = stub_](google::cloud::CompletionQueue& cq,
                     std::shared_ptr<grpc::ClientContext> context,
                     google::cloud::internal::ImmutableOptions options,
                     google::cloud::commerce::consumer::procurement::v1::
                         PlaceOrderRequest const& request) {
        return stub->AsyncPlaceOrder(cq, std::move(context), std::move(options),
                                     request);
      },
      [stub = stub_](google::cloud::CompletionQueue& cq,
                     std::shared_ptr<grpc::ClientContext> context,
                     google::cloud::internal::ImmutableOptions options,
                     google::longrunning::GetOperationRequest const& request) {
        return stub->AsyncGetOperation(cq, std::move(context),
                                       std::move(options), request);
      },
      [stub = stub_](
          google::cloud::CompletionQueue& cq,
          std::shared_ptr<grpc::ClientContext> context,
          google::cloud::internal::ImmutableOptions options,
          google::longrunning::CancelOperationRequest const& request) {
        return stub->AsyncCancelOperation(cq, std::move(context),
                                          std::move(options), request);
      },
      &google::cloud::internal::ExtractLongRunningResultResponse<
          google::cloud::commerce::consumer::procurement::v1::Order>,
      retry_policy(*current), backoff_policy(*current), idempotent,
      polling_policy(*current), __func__);
}

StatusOr<google::longrunning::Operation>
ConsumerProcurementServiceConnectionImpl::PlaceOrder(
    NoAwaitTag,
    google::cloud::commerce::consumer::procurement::v1::PlaceOrderRequest const&
        request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->PlaceOrder(request),
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::commerce::consumer::procurement::v1::
                 PlaceOrderRequest const& request) {
        return stub_->PlaceOrder(context, options, request);
      },
      *current, request, __func__);
}

future<StatusOr<google::cloud::commerce::consumer::procurement::v1::Order>>
ConsumerProcurementServiceConnectionImpl::PlaceOrder(
    google::longrunning::Operation const& operation) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  if (!operation.metadata()
           .Is<typename google::cloud::commerce::consumer::procurement::v1::
                   PlaceOrderMetadata>()) {
    return make_ready_future<
        StatusOr<google::cloud::commerce::consumer::procurement::v1::Order>>(
        internal::InvalidArgumentError(
            "operation does not correspond to PlaceOrder",
            GCP_ERROR_INFO().WithMetadata("operation",
                                          operation.metadata().DebugString())));
  }

  return google::cloud::internal::AsyncAwaitLongRunningOperation<
      google::cloud::commerce::consumer::procurement::v1::Order>(
      background_->cq(), current, operation,
      [stub = stub_](google::cloud::CompletionQueue& cq,
                     std::shared_ptr<grpc::ClientContext> context,
                     google::cloud::internal::ImmutableOptions options,
                     google::longrunning::GetOperationRequest const& request) {
        return stub->AsyncGetOperation(cq, std::move(context),
                                       std::move(options), request);
      },
      [stub = stub_](
          google::cloud::CompletionQueue& cq,
          std::shared_ptr<grpc::ClientContext> context,
          google::cloud::internal::ImmutableOptions options,
          google::longrunning::CancelOperationRequest const& request) {
        return stub->AsyncCancelOperation(cq, std::move(context),
                                          std::move(options), request);
      },
      &google::cloud::internal::ExtractLongRunningResultResponse<
          google::cloud::commerce::consumer::procurement::v1::Order>,
      polling_policy(*current), __func__);
}

StatusOr<google::cloud::commerce::consumer::procurement::v1::Order>
ConsumerProcurementServiceConnectionImpl::GetOrder(
    google::cloud::commerce::consumer::procurement::v1::GetOrderRequest const&
        request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->GetOrder(request),
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::commerce::consumer::procurement::v1::
                 GetOrderRequest const& request) {
        return stub_->GetOrder(context, options, request);
      },
      *current, request, __func__);
}

StreamRange<google::cloud::commerce::consumer::procurement::v1::Order>
ConsumerProcurementServiceConnectionImpl::ListOrders(
    google::cloud::commerce::consumer::procurement::v1::ListOrdersRequest
        request) {
  request.clear_page_token();
  auto current = google::cloud::internal::SaveCurrentOptions();
  auto idempotency = idempotency_policy(*current)->ListOrders(request);
  char const* function_name = __func__;
  return google::cloud::internal::MakePaginationRange<
      StreamRange<google::cloud::commerce::consumer::procurement::v1::Order>>(
      current, std::move(request),
      [idempotency, function_name, stub = stub_,
       retry = std::shared_ptr<commerce_consumer_procurement_v1::
                                   ConsumerProcurementServiceRetryPolicy>(
           retry_policy(*current)),
       backoff = std::shared_ptr<BackoffPolicy>(backoff_policy(*current))](
          Options const& options,
          google::cloud::commerce::consumer::procurement::v1::
              ListOrdersRequest const& r) {
        return google::cloud::internal::RetryLoop(
            retry->clone(), backoff->clone(), idempotency,
            [stub](grpc::ClientContext& context, Options const& options,
                   google::cloud::commerce::consumer::procurement::v1::
                       ListOrdersRequest const& request) {
              return stub->ListOrders(context, options, request);
            },
            options, r, function_name);
      },
      [](google::cloud::commerce::consumer::procurement::v1::ListOrdersResponse
             r) {
        std::vector<google::cloud::commerce::consumer::procurement::v1::Order>
            result(r.orders().size());
        auto& messages = *r.mutable_orders();
        std::move(messages.begin(), messages.end(), result.begin());
        return result;
      });
}

future<StatusOr<google::cloud::commerce::consumer::procurement::v1::Order>>
ConsumerProcurementServiceConnectionImpl::ModifyOrder(
    google::cloud::commerce::consumer::procurement::v1::
        ModifyOrderRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  auto request_copy = request;
  auto const idempotent =
      idempotency_policy(*current)->ModifyOrder(request_copy);
  return google::cloud::internal::AsyncLongRunningOperation<
      google::cloud::commerce::consumer::procurement::v1::Order>(
      background_->cq(), current, std::move(request_copy),
      [stub = stub_](google::cloud::CompletionQueue& cq,
                     std::shared_ptr<grpc::ClientContext> context,
                     google::cloud::internal::ImmutableOptions options,
                     google::cloud::commerce::consumer::procurement::v1::
                         ModifyOrderRequest const& request) {
        return stub->AsyncModifyOrder(cq, std::move(context),
                                      std::move(options), request);
      },
      [stub = stub_](google::cloud::CompletionQueue& cq,
                     std::shared_ptr<grpc::ClientContext> context,
                     google::cloud::internal::ImmutableOptions options,
                     google::longrunning::GetOperationRequest const& request) {
        return stub->AsyncGetOperation(cq, std::move(context),
                                       std::move(options), request);
      },
      [stub = stub_](
          google::cloud::CompletionQueue& cq,
          std::shared_ptr<grpc::ClientContext> context,
          google::cloud::internal::ImmutableOptions options,
          google::longrunning::CancelOperationRequest const& request) {
        return stub->AsyncCancelOperation(cq, std::move(context),
                                          std::move(options), request);
      },
      &google::cloud::internal::ExtractLongRunningResultResponse<
          google::cloud::commerce::consumer::procurement::v1::Order>,
      retry_policy(*current), backoff_policy(*current), idempotent,
      polling_policy(*current), __func__);
}

StatusOr<google::longrunning::Operation>
ConsumerProcurementServiceConnectionImpl::ModifyOrder(
    NoAwaitTag, google::cloud::commerce::consumer::procurement::v1::
                    ModifyOrderRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->ModifyOrder(request),
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::commerce::consumer::procurement::v1::
                 ModifyOrderRequest const& request) {
        return stub_->ModifyOrder(context, options, request);
      },
      *current, request, __func__);
}

future<StatusOr<google::cloud::commerce::consumer::procurement::v1::Order>>
ConsumerProcurementServiceConnectionImpl::ModifyOrder(
    google::longrunning::Operation const& operation) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  if (!operation.metadata()
           .Is<typename google::cloud::commerce::consumer::procurement::v1::
                   ModifyOrderMetadata>()) {
    return make_ready_future<
        StatusOr<google::cloud::commerce::consumer::procurement::v1::Order>>(
        internal::InvalidArgumentError(
            "operation does not correspond to ModifyOrder",
            GCP_ERROR_INFO().WithMetadata("operation",
                                          operation.metadata().DebugString())));
  }

  return google::cloud::internal::AsyncAwaitLongRunningOperation<
      google::cloud::commerce::consumer::procurement::v1::Order>(
      background_->cq(), current, operation,
      [stub = stub_](google::cloud::CompletionQueue& cq,
                     std::shared_ptr<grpc::ClientContext> context,
                     google::cloud::internal::ImmutableOptions options,
                     google::longrunning::GetOperationRequest const& request) {
        return stub->AsyncGetOperation(cq, std::move(context),
                                       std::move(options), request);
      },
      [stub = stub_](
          google::cloud::CompletionQueue& cq,
          std::shared_ptr<grpc::ClientContext> context,
          google::cloud::internal::ImmutableOptions options,
          google::longrunning::CancelOperationRequest const& request) {
        return stub->AsyncCancelOperation(cq, std::move(context),
                                          std::move(options), request);
      },
      &google::cloud::internal::ExtractLongRunningResultResponse<
          google::cloud::commerce::consumer::procurement::v1::Order>,
      polling_policy(*current), __func__);
}

future<StatusOr<google::cloud::commerce::consumer::procurement::v1::Order>>
ConsumerProcurementServiceConnectionImpl::CancelOrder(
    google::cloud::commerce::consumer::procurement::v1::
        CancelOrderRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  auto request_copy = request;
  auto const idempotent =
      idempotency_policy(*current)->CancelOrder(request_copy);
  return google::cloud::internal::AsyncLongRunningOperation<
      google::cloud::commerce::consumer::procurement::v1::Order>(
      background_->cq(), current, std::move(request_copy),
      [stub = stub_](google::cloud::CompletionQueue& cq,
                     std::shared_ptr<grpc::ClientContext> context,
                     google::cloud::internal::ImmutableOptions options,
                     google::cloud::commerce::consumer::procurement::v1::
                         CancelOrderRequest const& request) {
        return stub->AsyncCancelOrder(cq, std::move(context),
                                      std::move(options), request);
      },
      [stub = stub_](google::cloud::CompletionQueue& cq,
                     std::shared_ptr<grpc::ClientContext> context,
                     google::cloud::internal::ImmutableOptions options,
                     google::longrunning::GetOperationRequest const& request) {
        return stub->AsyncGetOperation(cq, std::move(context),
                                       std::move(options), request);
      },
      [stub = stub_](
          google::cloud::CompletionQueue& cq,
          std::shared_ptr<grpc::ClientContext> context,
          google::cloud::internal::ImmutableOptions options,
          google::longrunning::CancelOperationRequest const& request) {
        return stub->AsyncCancelOperation(cq, std::move(context),
                                          std::move(options), request);
      },
      &google::cloud::internal::ExtractLongRunningResultResponse<
          google::cloud::commerce::consumer::procurement::v1::Order>,
      retry_policy(*current), backoff_policy(*current), idempotent,
      polling_policy(*current), __func__);
}

StatusOr<google::longrunning::Operation>
ConsumerProcurementServiceConnectionImpl::CancelOrder(
    NoAwaitTag, google::cloud::commerce::consumer::procurement::v1::
                    CancelOrderRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->CancelOrder(request),
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::commerce::consumer::procurement::v1::
                 CancelOrderRequest const& request) {
        return stub_->CancelOrder(context, options, request);
      },
      *current, request, __func__);
}

future<StatusOr<google::cloud::commerce::consumer::procurement::v1::Order>>
ConsumerProcurementServiceConnectionImpl::CancelOrder(
    google::longrunning::Operation const& operation) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  if (!operation.metadata()
           .Is<typename google::cloud::commerce::consumer::procurement::v1::
                   CancelOrderMetadata>()) {
    return make_ready_future<
        StatusOr<google::cloud::commerce::consumer::procurement::v1::Order>>(
        internal::InvalidArgumentError(
            "operation does not correspond to CancelOrder",
            GCP_ERROR_INFO().WithMetadata("operation",
                                          operation.metadata().DebugString())));
  }

  return google::cloud::internal::AsyncAwaitLongRunningOperation<
      google::cloud::commerce::consumer::procurement::v1::Order>(
      background_->cq(), current, operation,
      [stub = stub_](google::cloud::CompletionQueue& cq,
                     std::shared_ptr<grpc::ClientContext> context,
                     google::cloud::internal::ImmutableOptions options,
                     google::longrunning::GetOperationRequest const& request) {
        return stub->AsyncGetOperation(cq, std::move(context),
                                       std::move(options), request);
      },
      [stub = stub_](
          google::cloud::CompletionQueue& cq,
          std::shared_ptr<grpc::ClientContext> context,
          google::cloud::internal::ImmutableOptions options,
          google::longrunning::CancelOperationRequest const& request) {
        return stub->AsyncCancelOperation(cq, std::move(context),
                                          std::move(options), request);
      },
      &google::cloud::internal::ExtractLongRunningResultResponse<
          google::cloud::commerce::consumer::procurement::v1::Order>,
      polling_policy(*current), __func__);
}

StatusOr<google::longrunning::Operation>
ConsumerProcurementServiceConnectionImpl::GetOperation(
    google::longrunning::GetOperationRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->GetOperation(request),
      [this](grpc::ClientContext& context, Options const& options,
             google::longrunning::GetOperationRequest const& request) {
        return stub_->GetOperation(context, options, request);
      },
      *current, request, __func__);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace commerce_consumer_procurement_v1_internal
}  // namespace cloud
}  // namespace google
