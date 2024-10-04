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
// source: google/cloud/retail/v2/product_service.proto

#include "google/cloud/retail/v2/product_connection_idempotency_policy.h"
#include <memory>

namespace google {
namespace cloud {
namespace retail_v2 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

using ::google::cloud::Idempotency;

ProductServiceConnectionIdempotencyPolicy::
    ~ProductServiceConnectionIdempotencyPolicy() = default;

std::unique_ptr<ProductServiceConnectionIdempotencyPolicy>
ProductServiceConnectionIdempotencyPolicy::clone() const {
  return std::make_unique<ProductServiceConnectionIdempotencyPolicy>(*this);
}

Idempotency ProductServiceConnectionIdempotencyPolicy::CreateProduct(
    google::cloud::retail::v2::CreateProductRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency ProductServiceConnectionIdempotencyPolicy::GetProduct(
    google::cloud::retail::v2::GetProductRequest const&) {
  return Idempotency::kIdempotent;
}

Idempotency ProductServiceConnectionIdempotencyPolicy::ListProducts(
    google::cloud::retail::v2::ListProductsRequest) {  // NOLINT
  return Idempotency::kIdempotent;
}

Idempotency ProductServiceConnectionIdempotencyPolicy::UpdateProduct(
    google::cloud::retail::v2::UpdateProductRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency ProductServiceConnectionIdempotencyPolicy::DeleteProduct(
    google::cloud::retail::v2::DeleteProductRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency ProductServiceConnectionIdempotencyPolicy::PurgeProducts(
    google::cloud::retail::v2::PurgeProductsRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency ProductServiceConnectionIdempotencyPolicy::ImportProducts(
    google::cloud::retail::v2::ImportProductsRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency ProductServiceConnectionIdempotencyPolicy::SetInventory(
    google::cloud::retail::v2::SetInventoryRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency ProductServiceConnectionIdempotencyPolicy::AddFulfillmentPlaces(
    google::cloud::retail::v2::AddFulfillmentPlacesRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency ProductServiceConnectionIdempotencyPolicy::RemoveFulfillmentPlaces(
    google::cloud::retail::v2::RemoveFulfillmentPlacesRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency ProductServiceConnectionIdempotencyPolicy::AddLocalInventories(
    google::cloud::retail::v2::AddLocalInventoriesRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency ProductServiceConnectionIdempotencyPolicy::RemoveLocalInventories(
    google::cloud::retail::v2::RemoveLocalInventoriesRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency ProductServiceConnectionIdempotencyPolicy::ListOperations(
    google::longrunning::ListOperationsRequest) {  // NOLINT
  return Idempotency::kIdempotent;
}

Idempotency ProductServiceConnectionIdempotencyPolicy::GetOperation(
    google::longrunning::GetOperationRequest const&) {
  return Idempotency::kIdempotent;
}

std::unique_ptr<ProductServiceConnectionIdempotencyPolicy>
MakeDefaultProductServiceConnectionIdempotencyPolicy() {
  return std::make_unique<ProductServiceConnectionIdempotencyPolicy>();
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace retail_v2
}  // namespace cloud
}  // namespace google
