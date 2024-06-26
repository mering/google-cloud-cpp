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

#include "google/cloud/commerce/consumer/procurement/v1/consumer_procurement_client.h"
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace commerce_consumer_procurement_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

ConsumerProcurementServiceClient::ConsumerProcurementServiceClient(
    std::shared_ptr<ConsumerProcurementServiceConnection> connection,
    Options opts)
    : connection_(std::move(connection)),
      options_(
          internal::MergeOptions(std::move(opts), connection_->options())) {}
ConsumerProcurementServiceClient::~ConsumerProcurementServiceClient() = default;

future<StatusOr<google::cloud::commerce::consumer::procurement::v1::Order>>
ConsumerProcurementServiceClient::PlaceOrder(
    google::cloud::commerce::consumer::procurement::v1::PlaceOrderRequest const&
        request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->PlaceOrder(request);
}

StatusOr<google::longrunning::Operation>
ConsumerProcurementServiceClient::PlaceOrder(
    ExperimentalTag, NoAwaitTag,
    google::cloud::commerce::consumer::procurement::v1::PlaceOrderRequest const&
        request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->PlaceOrder(ExperimentalTag{}, NoAwaitTag{}, request);
}

future<StatusOr<google::cloud::commerce::consumer::procurement::v1::Order>>
ConsumerProcurementServiceClient::PlaceOrder(
    ExperimentalTag, google::longrunning::Operation const& operation,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->PlaceOrder(ExperimentalTag{}, operation);
}

StatusOr<google::cloud::commerce::consumer::procurement::v1::Order>
ConsumerProcurementServiceClient::GetOrder(std::string const& name,
                                           Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::commerce::consumer::procurement::v1::GetOrderRequest request;
  request.set_name(name);
  return connection_->GetOrder(request);
}

StatusOr<google::cloud::commerce::consumer::procurement::v1::Order>
ConsumerProcurementServiceClient::GetOrder(
    google::cloud::commerce::consumer::procurement::v1::GetOrderRequest const&
        request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->GetOrder(request);
}

StreamRange<google::cloud::commerce::consumer::procurement::v1::Order>
ConsumerProcurementServiceClient::ListOrders(std::string const& parent,
                                             Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::commerce::consumer::procurement::v1::ListOrdersRequest request;
  request.set_parent(parent);
  return connection_->ListOrders(request);
}

StreamRange<google::cloud::commerce::consumer::procurement::v1::Order>
ConsumerProcurementServiceClient::ListOrders(
    google::cloud::commerce::consumer::procurement::v1::ListOrdersRequest
        request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->ListOrders(std::move(request));
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace commerce_consumer_procurement_v1
}  // namespace cloud
}  // namespace google
