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

#include "google/cloud/retail/v2/internal/product_stub.h"
#include "google/cloud/grpc_error_delegate.h"
#include "google/cloud/status_or.h"
#include "google/cloud/retail/v2/product_service.grpc.pb.h"
#include "google/longrunning/operations.grpc.pb.h"
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace retail_v2_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

ProductServiceStub::~ProductServiceStub() = default;

StatusOr<google::cloud::retail::v2::Product>
DefaultProductServiceStub::CreateProduct(
    grpc::ClientContext& context, Options const&,
    google::cloud::retail::v2::CreateProductRequest const& request) {
  google::cloud::retail::v2::Product response;
  auto status = grpc_stub_->CreateProduct(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::retail::v2::Product>
DefaultProductServiceStub::GetProduct(
    grpc::ClientContext& context, Options const&,
    google::cloud::retail::v2::GetProductRequest const& request) {
  google::cloud::retail::v2::Product response;
  auto status = grpc_stub_->GetProduct(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::retail::v2::ListProductsResponse>
DefaultProductServiceStub::ListProducts(
    grpc::ClientContext& context, Options const&,
    google::cloud::retail::v2::ListProductsRequest const& request) {
  google::cloud::retail::v2::ListProductsResponse response;
  auto status = grpc_stub_->ListProducts(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::retail::v2::Product>
DefaultProductServiceStub::UpdateProduct(
    grpc::ClientContext& context, Options const&,
    google::cloud::retail::v2::UpdateProductRequest const& request) {
  google::cloud::retail::v2::Product response;
  auto status = grpc_stub_->UpdateProduct(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

Status DefaultProductServiceStub::DeleteProduct(
    grpc::ClientContext& context, Options const&,
    google::cloud::retail::v2::DeleteProductRequest const& request) {
  google::protobuf::Empty response;
  auto status = grpc_stub_->DeleteProduct(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return google::cloud::Status();
}

future<StatusOr<google::longrunning::Operation>>
DefaultProductServiceStub::AsyncPurgeProducts(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions,
    google::cloud::retail::v2::PurgeProductsRequest const& request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::retail::v2::PurgeProductsRequest,
      google::longrunning::Operation>(
      cq,
      [this](grpc::ClientContext* context,
             google::cloud::retail::v2::PurgeProductsRequest const& request,
             grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncPurgeProducts(context, request, cq);
      },
      request, std::move(context));
}

StatusOr<google::longrunning::Operation>
DefaultProductServiceStub::PurgeProducts(
    grpc::ClientContext& context, Options,
    google::cloud::retail::v2::PurgeProductsRequest const& request) {
  google::longrunning::Operation response;
  auto status = grpc_stub_->PurgeProducts(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

future<StatusOr<google::longrunning::Operation>>
DefaultProductServiceStub::AsyncImportProducts(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions,
    google::cloud::retail::v2::ImportProductsRequest const& request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::retail::v2::ImportProductsRequest,
      google::longrunning::Operation>(
      cq,
      [this](grpc::ClientContext* context,
             google::cloud::retail::v2::ImportProductsRequest const& request,
             grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncImportProducts(context, request, cq);
      },
      request, std::move(context));
}

StatusOr<google::longrunning::Operation>
DefaultProductServiceStub::ImportProducts(
    grpc::ClientContext& context, Options,
    google::cloud::retail::v2::ImportProductsRequest const& request) {
  google::longrunning::Operation response;
  auto status = grpc_stub_->ImportProducts(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

future<StatusOr<google::longrunning::Operation>>
DefaultProductServiceStub::AsyncSetInventory(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions,
    google::cloud::retail::v2::SetInventoryRequest const& request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::retail::v2::SetInventoryRequest,
      google::longrunning::Operation>(
      cq,
      [this](grpc::ClientContext* context,
             google::cloud::retail::v2::SetInventoryRequest const& request,
             grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncSetInventory(context, request, cq);
      },
      request, std::move(context));
}

StatusOr<google::longrunning::Operation>
DefaultProductServiceStub::SetInventory(
    grpc::ClientContext& context, Options,
    google::cloud::retail::v2::SetInventoryRequest const& request) {
  google::longrunning::Operation response;
  auto status = grpc_stub_->SetInventory(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

future<StatusOr<google::longrunning::Operation>>
DefaultProductServiceStub::AsyncAddFulfillmentPlaces(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions,
    google::cloud::retail::v2::AddFulfillmentPlacesRequest const& request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::retail::v2::AddFulfillmentPlacesRequest,
      google::longrunning::Operation>(
      cq,
      [this](
          grpc::ClientContext* context,
          google::cloud::retail::v2::AddFulfillmentPlacesRequest const& request,
          grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncAddFulfillmentPlaces(context, request, cq);
      },
      request, std::move(context));
}

StatusOr<google::longrunning::Operation>
DefaultProductServiceStub::AddFulfillmentPlaces(
    grpc::ClientContext& context, Options,
    google::cloud::retail::v2::AddFulfillmentPlacesRequest const& request) {
  google::longrunning::Operation response;
  auto status = grpc_stub_->AddFulfillmentPlaces(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

future<StatusOr<google::longrunning::Operation>>
DefaultProductServiceStub::AsyncRemoveFulfillmentPlaces(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions,
    google::cloud::retail::v2::RemoveFulfillmentPlacesRequest const& request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::retail::v2::RemoveFulfillmentPlacesRequest,
      google::longrunning::Operation>(
      cq,
      [this](grpc::ClientContext* context,
             google::cloud::retail::v2::RemoveFulfillmentPlacesRequest const&
                 request,
             grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncRemoveFulfillmentPlaces(context, request, cq);
      },
      request, std::move(context));
}

StatusOr<google::longrunning::Operation>
DefaultProductServiceStub::RemoveFulfillmentPlaces(
    grpc::ClientContext& context, Options,
    google::cloud::retail::v2::RemoveFulfillmentPlacesRequest const& request) {
  google::longrunning::Operation response;
  auto status =
      grpc_stub_->RemoveFulfillmentPlaces(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

future<StatusOr<google::longrunning::Operation>>
DefaultProductServiceStub::AsyncAddLocalInventories(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions,
    google::cloud::retail::v2::AddLocalInventoriesRequest const& request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::retail::v2::AddLocalInventoriesRequest,
      google::longrunning::Operation>(
      cq,
      [this](
          grpc::ClientContext* context,
          google::cloud::retail::v2::AddLocalInventoriesRequest const& request,
          grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncAddLocalInventories(context, request, cq);
      },
      request, std::move(context));
}

StatusOr<google::longrunning::Operation>
DefaultProductServiceStub::AddLocalInventories(
    grpc::ClientContext& context, Options,
    google::cloud::retail::v2::AddLocalInventoriesRequest const& request) {
  google::longrunning::Operation response;
  auto status = grpc_stub_->AddLocalInventories(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

future<StatusOr<google::longrunning::Operation>>
DefaultProductServiceStub::AsyncRemoveLocalInventories(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions,
    google::cloud::retail::v2::RemoveLocalInventoriesRequest const& request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::retail::v2::RemoveLocalInventoriesRequest,
      google::longrunning::Operation>(
      cq,
      [this](grpc::ClientContext* context,
             google::cloud::retail::v2::RemoveLocalInventoriesRequest const&
                 request,
             grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncRemoveLocalInventories(context, request, cq);
      },
      request, std::move(context));
}

StatusOr<google::longrunning::Operation>
DefaultProductServiceStub::RemoveLocalInventories(
    grpc::ClientContext& context, Options,
    google::cloud::retail::v2::RemoveLocalInventoriesRequest const& request) {
  google::longrunning::Operation response;
  auto status =
      grpc_stub_->RemoveLocalInventories(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::longrunning::ListOperationsResponse>
DefaultProductServiceStub::ListOperations(
    grpc::ClientContext& context, Options const&,
    google::longrunning::ListOperationsRequest const& request) {
  google::longrunning::ListOperationsResponse response;
  auto status = operations_stub_->ListOperations(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::longrunning::Operation>
DefaultProductServiceStub::GetOperation(
    grpc::ClientContext& context, Options const&,
    google::longrunning::GetOperationRequest const& request) {
  google::longrunning::Operation response;
  auto status = operations_stub_->GetOperation(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

future<StatusOr<google::longrunning::Operation>>
DefaultProductServiceStub::AsyncGetOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    // NOLINTNEXTLINE(performance-unnecessary-value-param)
    google::cloud::internal::ImmutableOptions,
    google::longrunning::GetOperationRequest const& request) {
  return internal::MakeUnaryRpcImpl<google::longrunning::GetOperationRequest,
                                    google::longrunning::Operation>(
      cq,
      [this](grpc::ClientContext* context,
             google::longrunning::GetOperationRequest const& request,
             grpc::CompletionQueue* cq) {
        return operations_->AsyncGetOperation(context, request, cq);
      },
      request, std::move(context));
}

future<Status> DefaultProductServiceStub::AsyncCancelOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    // NOLINTNEXTLINE(performance-unnecessary-value-param)
    google::cloud::internal::ImmutableOptions,
    google::longrunning::CancelOperationRequest const& request) {
  return internal::MakeUnaryRpcImpl<google::longrunning::CancelOperationRequest,
                                    google::protobuf::Empty>(
             cq,
             [this](grpc::ClientContext* context,
                    google::longrunning::CancelOperationRequest const& request,
                    grpc::CompletionQueue* cq) {
               return operations_->AsyncCancelOperation(context, request, cq);
             },
             request, std::move(context))
      .then([](future<StatusOr<google::protobuf::Empty>> f) {
        return f.get().status();
      });
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace retail_v2_internal
}  // namespace cloud
}  // namespace google
