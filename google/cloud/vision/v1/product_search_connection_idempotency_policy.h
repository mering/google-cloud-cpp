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
// source: google/cloud/vision/v1/product_search_service.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_VISION_V1_PRODUCT_SEARCH_CONNECTION_IDEMPOTENCY_POLICY_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_VISION_V1_PRODUCT_SEARCH_CONNECTION_IDEMPOTENCY_POLICY_H

#include "google/cloud/vision/v1/product_search_service.grpc.pb.h"
#include "google/cloud/idempotency.h"
#include "google/cloud/version.h"
#include "google/longrunning/operations.grpc.pb.h"
#include <memory>

namespace google {
namespace cloud {
namespace vision_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class ProductSearchConnectionIdempotencyPolicy {
 public:
  virtual ~ProductSearchConnectionIdempotencyPolicy();

  /// Create a new copy of this object.
  virtual std::unique_ptr<ProductSearchConnectionIdempotencyPolicy> clone()
      const;

  virtual google::cloud::Idempotency CreateProductSet(
      google::cloud::vision::v1::CreateProductSetRequest const& request);

  virtual google::cloud::Idempotency ListProductSets(
      google::cloud::vision::v1::ListProductSetsRequest request);

  virtual google::cloud::Idempotency GetProductSet(
      google::cloud::vision::v1::GetProductSetRequest const& request);

  virtual google::cloud::Idempotency UpdateProductSet(
      google::cloud::vision::v1::UpdateProductSetRequest const& request);

  virtual google::cloud::Idempotency DeleteProductSet(
      google::cloud::vision::v1::DeleteProductSetRequest const& request);

  virtual google::cloud::Idempotency CreateProduct(
      google::cloud::vision::v1::CreateProductRequest const& request);

  virtual google::cloud::Idempotency ListProducts(
      google::cloud::vision::v1::ListProductsRequest request);

  virtual google::cloud::Idempotency GetProduct(
      google::cloud::vision::v1::GetProductRequest const& request);

  virtual google::cloud::Idempotency UpdateProduct(
      google::cloud::vision::v1::UpdateProductRequest const& request);

  virtual google::cloud::Idempotency DeleteProduct(
      google::cloud::vision::v1::DeleteProductRequest const& request);

  virtual google::cloud::Idempotency CreateReferenceImage(
      google::cloud::vision::v1::CreateReferenceImageRequest const& request);

  virtual google::cloud::Idempotency DeleteReferenceImage(
      google::cloud::vision::v1::DeleteReferenceImageRequest const& request);

  virtual google::cloud::Idempotency ListReferenceImages(
      google::cloud::vision::v1::ListReferenceImagesRequest request);

  virtual google::cloud::Idempotency GetReferenceImage(
      google::cloud::vision::v1::GetReferenceImageRequest const& request);

  virtual google::cloud::Idempotency AddProductToProductSet(
      google::cloud::vision::v1::AddProductToProductSetRequest const& request);

  virtual google::cloud::Idempotency RemoveProductFromProductSet(
      google::cloud::vision::v1::RemoveProductFromProductSetRequest const&
          request);

  virtual google::cloud::Idempotency ListProductsInProductSet(
      google::cloud::vision::v1::ListProductsInProductSetRequest request);

  virtual google::cloud::Idempotency ImportProductSets(
      google::cloud::vision::v1::ImportProductSetsRequest const& request);

  virtual google::cloud::Idempotency PurgeProducts(
      google::cloud::vision::v1::PurgeProductsRequest const& request);

  virtual google::cloud::Idempotency GetOperation(
      google::longrunning::GetOperationRequest const& request);
};

std::unique_ptr<ProductSearchConnectionIdempotencyPolicy>
MakeDefaultProductSearchConnectionIdempotencyPolicy();

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace vision_v1
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_VISION_V1_PRODUCT_SEARCH_CONNECTION_IDEMPOTENCY_POLICY_H
