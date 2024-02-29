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
// source: google/cloud/aiplatform/v1/index_endpoint_service.proto

#include "google/cloud/aiplatform/v1/internal/index_endpoint_stub.h"
#include "google/cloud/grpc_error_delegate.h"
#include "google/cloud/status_or.h"
#include <google/cloud/aiplatform/v1/index_endpoint_service.grpc.pb.h>
#include <google/longrunning/operations.grpc.pb.h>
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace aiplatform_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

IndexEndpointServiceStub::~IndexEndpointServiceStub() = default;

future<StatusOr<google::longrunning::Operation>>
DefaultIndexEndpointServiceStub::AsyncCreateIndexEndpoint(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions,
    google::cloud::aiplatform::v1::CreateIndexEndpointRequest const& request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::aiplatform::v1::CreateIndexEndpointRequest,
      google::longrunning::Operation>(
      cq,
      [this](grpc::ClientContext* context,
             google::cloud::aiplatform::v1::CreateIndexEndpointRequest const&
                 request,
             grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncCreateIndexEndpoint(context, request, cq);
      },
      request, std::move(context));
}

StatusOr<google::cloud::aiplatform::v1::IndexEndpoint>
DefaultIndexEndpointServiceStub::GetIndexEndpoint(
    grpc::ClientContext& context, Options const&,
    google::cloud::aiplatform::v1::GetIndexEndpointRequest const& request) {
  google::cloud::aiplatform::v1::IndexEndpoint response;
  auto status = grpc_stub_->GetIndexEndpoint(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::aiplatform::v1::ListIndexEndpointsResponse>
DefaultIndexEndpointServiceStub::ListIndexEndpoints(
    grpc::ClientContext& context, Options const&,
    google::cloud::aiplatform::v1::ListIndexEndpointsRequest const& request) {
  google::cloud::aiplatform::v1::ListIndexEndpointsResponse response;
  auto status = grpc_stub_->ListIndexEndpoints(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::aiplatform::v1::IndexEndpoint>
DefaultIndexEndpointServiceStub::UpdateIndexEndpoint(
    grpc::ClientContext& context, Options const&,
    google::cloud::aiplatform::v1::UpdateIndexEndpointRequest const& request) {
  google::cloud::aiplatform::v1::IndexEndpoint response;
  auto status = grpc_stub_->UpdateIndexEndpoint(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

future<StatusOr<google::longrunning::Operation>>
DefaultIndexEndpointServiceStub::AsyncDeleteIndexEndpoint(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions,
    google::cloud::aiplatform::v1::DeleteIndexEndpointRequest const& request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::aiplatform::v1::DeleteIndexEndpointRequest,
      google::longrunning::Operation>(
      cq,
      [this](grpc::ClientContext* context,
             google::cloud::aiplatform::v1::DeleteIndexEndpointRequest const&
                 request,
             grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncDeleteIndexEndpoint(context, request, cq);
      },
      request, std::move(context));
}

future<StatusOr<google::longrunning::Operation>>
DefaultIndexEndpointServiceStub::AsyncDeployIndex(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions,
    google::cloud::aiplatform::v1::DeployIndexRequest const& request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::aiplatform::v1::DeployIndexRequest,
      google::longrunning::Operation>(
      cq,
      [this](grpc::ClientContext* context,
             google::cloud::aiplatform::v1::DeployIndexRequest const& request,
             grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncDeployIndex(context, request, cq);
      },
      request, std::move(context));
}

future<StatusOr<google::longrunning::Operation>>
DefaultIndexEndpointServiceStub::AsyncUndeployIndex(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions,
    google::cloud::aiplatform::v1::UndeployIndexRequest const& request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::aiplatform::v1::UndeployIndexRequest,
      google::longrunning::Operation>(
      cq,
      [this](grpc::ClientContext* context,
             google::cloud::aiplatform::v1::UndeployIndexRequest const& request,
             grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncUndeployIndex(context, request, cq);
      },
      request, std::move(context));
}

future<StatusOr<google::longrunning::Operation>>
DefaultIndexEndpointServiceStub::AsyncMutateDeployedIndex(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions,
    google::cloud::aiplatform::v1::MutateDeployedIndexRequest const& request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::aiplatform::v1::MutateDeployedIndexRequest,
      google::longrunning::Operation>(
      cq,
      [this](grpc::ClientContext* context,
             google::cloud::aiplatform::v1::MutateDeployedIndexRequest const&
                 request,
             grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncMutateDeployedIndex(context, request, cq);
      },
      request, std::move(context));
}

future<StatusOr<google::longrunning::Operation>>
DefaultIndexEndpointServiceStub::AsyncGetOperation(
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

future<Status> DefaultIndexEndpointServiceStub::AsyncCancelOperation(
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
}  // namespace aiplatform_v1_internal
}  // namespace cloud
}  // namespace google
