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
// source: google/cloud/dialogflow/v2/entity_type.proto

#include "google/cloud/dialogflow_es/internal/entity_types_stub.h"
#include "google/cloud/dialogflow/v2/entity_type.grpc.pb.h"
#include "google/cloud/grpc_error_delegate.h"
#include "google/cloud/status_or.h"
#include "google/longrunning/operations.grpc.pb.h"
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace dialogflow_es_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

EntityTypesStub::~EntityTypesStub() = default;

StatusOr<google::cloud::dialogflow::v2::ListEntityTypesResponse>
DefaultEntityTypesStub::ListEntityTypes(
    grpc::ClientContext& context, Options const&,
    google::cloud::dialogflow::v2::ListEntityTypesRequest const& request) {
  google::cloud::dialogflow::v2::ListEntityTypesResponse response;
  auto status = grpc_stub_->ListEntityTypes(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::dialogflow::v2::EntityType>
DefaultEntityTypesStub::GetEntityType(
    grpc::ClientContext& context, Options const&,
    google::cloud::dialogflow::v2::GetEntityTypeRequest const& request) {
  google::cloud::dialogflow::v2::EntityType response;
  auto status = grpc_stub_->GetEntityType(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::dialogflow::v2::EntityType>
DefaultEntityTypesStub::CreateEntityType(
    grpc::ClientContext& context, Options const&,
    google::cloud::dialogflow::v2::CreateEntityTypeRequest const& request) {
  google::cloud::dialogflow::v2::EntityType response;
  auto status = grpc_stub_->CreateEntityType(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::dialogflow::v2::EntityType>
DefaultEntityTypesStub::UpdateEntityType(
    grpc::ClientContext& context, Options const&,
    google::cloud::dialogflow::v2::UpdateEntityTypeRequest const& request) {
  google::cloud::dialogflow::v2::EntityType response;
  auto status = grpc_stub_->UpdateEntityType(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

Status DefaultEntityTypesStub::DeleteEntityType(
    grpc::ClientContext& context, Options const&,
    google::cloud::dialogflow::v2::DeleteEntityTypeRequest const& request) {
  google::protobuf::Empty response;
  auto status = grpc_stub_->DeleteEntityType(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return google::cloud::Status();
}

future<StatusOr<google::longrunning::Operation>>
DefaultEntityTypesStub::AsyncBatchUpdateEntityTypes(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions,
    google::cloud::dialogflow::v2::BatchUpdateEntityTypesRequest const&
        request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::dialogflow::v2::BatchUpdateEntityTypesRequest,
      google::longrunning::Operation>(
      cq,
      [this](grpc::ClientContext* context,
             google::cloud::dialogflow::v2::BatchUpdateEntityTypesRequest const&
                 request,
             grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncBatchUpdateEntityTypes(context, request, cq);
      },
      request, std::move(context));
}

StatusOr<google::longrunning::Operation>
DefaultEntityTypesStub::BatchUpdateEntityTypes(
    grpc::ClientContext& context, Options,
    google::cloud::dialogflow::v2::BatchUpdateEntityTypesRequest const&
        request) {
  google::longrunning::Operation response;
  auto status =
      grpc_stub_->BatchUpdateEntityTypes(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

future<StatusOr<google::longrunning::Operation>>
DefaultEntityTypesStub::AsyncBatchDeleteEntityTypes(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions,
    google::cloud::dialogflow::v2::BatchDeleteEntityTypesRequest const&
        request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::dialogflow::v2::BatchDeleteEntityTypesRequest,
      google::longrunning::Operation>(
      cq,
      [this](grpc::ClientContext* context,
             google::cloud::dialogflow::v2::BatchDeleteEntityTypesRequest const&
                 request,
             grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncBatchDeleteEntityTypes(context, request, cq);
      },
      request, std::move(context));
}

StatusOr<google::longrunning::Operation>
DefaultEntityTypesStub::BatchDeleteEntityTypes(
    grpc::ClientContext& context, Options,
    google::cloud::dialogflow::v2::BatchDeleteEntityTypesRequest const&
        request) {
  google::longrunning::Operation response;
  auto status =
      grpc_stub_->BatchDeleteEntityTypes(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

future<StatusOr<google::longrunning::Operation>>
DefaultEntityTypesStub::AsyncBatchCreateEntities(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions,
    google::cloud::dialogflow::v2::BatchCreateEntitiesRequest const& request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::dialogflow::v2::BatchCreateEntitiesRequest,
      google::longrunning::Operation>(
      cq,
      [this](grpc::ClientContext* context,
             google::cloud::dialogflow::v2::BatchCreateEntitiesRequest const&
                 request,
             grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncBatchCreateEntities(context, request, cq);
      },
      request, std::move(context));
}

StatusOr<google::longrunning::Operation>
DefaultEntityTypesStub::BatchCreateEntities(
    grpc::ClientContext& context, Options,
    google::cloud::dialogflow::v2::BatchCreateEntitiesRequest const& request) {
  google::longrunning::Operation response;
  auto status = grpc_stub_->BatchCreateEntities(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

future<StatusOr<google::longrunning::Operation>>
DefaultEntityTypesStub::AsyncBatchUpdateEntities(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions,
    google::cloud::dialogflow::v2::BatchUpdateEntitiesRequest const& request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::dialogflow::v2::BatchUpdateEntitiesRequest,
      google::longrunning::Operation>(
      cq,
      [this](grpc::ClientContext* context,
             google::cloud::dialogflow::v2::BatchUpdateEntitiesRequest const&
                 request,
             grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncBatchUpdateEntities(context, request, cq);
      },
      request, std::move(context));
}

StatusOr<google::longrunning::Operation>
DefaultEntityTypesStub::BatchUpdateEntities(
    grpc::ClientContext& context, Options,
    google::cloud::dialogflow::v2::BatchUpdateEntitiesRequest const& request) {
  google::longrunning::Operation response;
  auto status = grpc_stub_->BatchUpdateEntities(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

future<StatusOr<google::longrunning::Operation>>
DefaultEntityTypesStub::AsyncBatchDeleteEntities(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions,
    google::cloud::dialogflow::v2::BatchDeleteEntitiesRequest const& request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::dialogflow::v2::BatchDeleteEntitiesRequest,
      google::longrunning::Operation>(
      cq,
      [this](grpc::ClientContext* context,
             google::cloud::dialogflow::v2::BatchDeleteEntitiesRequest const&
                 request,
             grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncBatchDeleteEntities(context, request, cq);
      },
      request, std::move(context));
}

StatusOr<google::longrunning::Operation>
DefaultEntityTypesStub::BatchDeleteEntities(
    grpc::ClientContext& context, Options,
    google::cloud::dialogflow::v2::BatchDeleteEntitiesRequest const& request) {
  google::longrunning::Operation response;
  auto status = grpc_stub_->BatchDeleteEntities(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::location::ListLocationsResponse>
DefaultEntityTypesStub::ListLocations(
    grpc::ClientContext& context, Options const&,
    google::cloud::location::ListLocationsRequest const& request) {
  google::cloud::location::ListLocationsResponse response;
  auto status = locations_stub_->ListLocations(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::location::Location> DefaultEntityTypesStub::GetLocation(
    grpc::ClientContext& context, Options const&,
    google::cloud::location::GetLocationRequest const& request) {
  google::cloud::location::Location response;
  auto status = locations_stub_->GetLocation(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::longrunning::ListOperationsResponse>
DefaultEntityTypesStub::ListOperations(
    grpc::ClientContext& context, Options const&,
    google::longrunning::ListOperationsRequest const& request) {
  google::longrunning::ListOperationsResponse response;
  auto status = operations_stub_->ListOperations(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::longrunning::Operation> DefaultEntityTypesStub::GetOperation(
    grpc::ClientContext& context, Options const&,
    google::longrunning::GetOperationRequest const& request) {
  google::longrunning::Operation response;
  auto status = operations_stub_->GetOperation(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

Status DefaultEntityTypesStub::CancelOperation(
    grpc::ClientContext& context, Options const&,
    google::longrunning::CancelOperationRequest const& request) {
  google::protobuf::Empty response;
  auto status = operations_stub_->CancelOperation(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return google::cloud::Status();
}

future<StatusOr<google::longrunning::Operation>>
DefaultEntityTypesStub::AsyncGetOperation(
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

future<Status> DefaultEntityTypesStub::AsyncCancelOperation(
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
}  // namespace dialogflow_es_internal
}  // namespace cloud
}  // namespace google
