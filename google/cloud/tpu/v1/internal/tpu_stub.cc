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
// source: google/cloud/tpu/v1/cloud_tpu.proto

#include "google/cloud/tpu/v1/internal/tpu_stub.h"
#include "google/cloud/tpu/v1/cloud_tpu.grpc.pb.h"
#include "google/cloud/grpc_error_delegate.h"
#include "google/cloud/status_or.h"
#include "google/longrunning/operations.grpc.pb.h"
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace tpu_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

TpuStub::~TpuStub() = default;

StatusOr<google::cloud::tpu::v1::ListNodesResponse> DefaultTpuStub::ListNodes(
    grpc::ClientContext& context, Options const&,
    google::cloud::tpu::v1::ListNodesRequest const& request) {
  google::cloud::tpu::v1::ListNodesResponse response;
  auto status = grpc_stub_->ListNodes(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::tpu::v1::Node> DefaultTpuStub::GetNode(
    grpc::ClientContext& context, Options const&,
    google::cloud::tpu::v1::GetNodeRequest const& request) {
  google::cloud::tpu::v1::Node response;
  auto status = grpc_stub_->GetNode(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

future<StatusOr<google::longrunning::Operation>>
DefaultTpuStub::AsyncCreateNode(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions,
    google::cloud::tpu::v1::CreateNodeRequest const& request) {
  return internal::MakeUnaryRpcImpl<google::cloud::tpu::v1::CreateNodeRequest,
                                    google::longrunning::Operation>(
      cq,
      [this](grpc::ClientContext* context,
             google::cloud::tpu::v1::CreateNodeRequest const& request,
             grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncCreateNode(context, request, cq);
      },
      request, std::move(context));
}

StatusOr<google::longrunning::Operation> DefaultTpuStub::CreateNode(
    grpc::ClientContext& context, Options,
    google::cloud::tpu::v1::CreateNodeRequest const& request) {
  google::longrunning::Operation response;
  auto status = grpc_stub_->CreateNode(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

future<StatusOr<google::longrunning::Operation>>
DefaultTpuStub::AsyncDeleteNode(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions,
    google::cloud::tpu::v1::DeleteNodeRequest const& request) {
  return internal::MakeUnaryRpcImpl<google::cloud::tpu::v1::DeleteNodeRequest,
                                    google::longrunning::Operation>(
      cq,
      [this](grpc::ClientContext* context,
             google::cloud::tpu::v1::DeleteNodeRequest const& request,
             grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncDeleteNode(context, request, cq);
      },
      request, std::move(context));
}

StatusOr<google::longrunning::Operation> DefaultTpuStub::DeleteNode(
    grpc::ClientContext& context, Options,
    google::cloud::tpu::v1::DeleteNodeRequest const& request) {
  google::longrunning::Operation response;
  auto status = grpc_stub_->DeleteNode(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

future<StatusOr<google::longrunning::Operation>>
DefaultTpuStub::AsyncReimageNode(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions,
    google::cloud::tpu::v1::ReimageNodeRequest const& request) {
  return internal::MakeUnaryRpcImpl<google::cloud::tpu::v1::ReimageNodeRequest,
                                    google::longrunning::Operation>(
      cq,
      [this](grpc::ClientContext* context,
             google::cloud::tpu::v1::ReimageNodeRequest const& request,
             grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncReimageNode(context, request, cq);
      },
      request, std::move(context));
}

StatusOr<google::longrunning::Operation> DefaultTpuStub::ReimageNode(
    grpc::ClientContext& context, Options,
    google::cloud::tpu::v1::ReimageNodeRequest const& request) {
  google::longrunning::Operation response;
  auto status = grpc_stub_->ReimageNode(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

future<StatusOr<google::longrunning::Operation>> DefaultTpuStub::AsyncStopNode(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions,
    google::cloud::tpu::v1::StopNodeRequest const& request) {
  return internal::MakeUnaryRpcImpl<google::cloud::tpu::v1::StopNodeRequest,
                                    google::longrunning::Operation>(
      cq,
      [this](grpc::ClientContext* context,
             google::cloud::tpu::v1::StopNodeRequest const& request,
             grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncStopNode(context, request, cq);
      },
      request, std::move(context));
}

StatusOr<google::longrunning::Operation> DefaultTpuStub::StopNode(
    grpc::ClientContext& context, Options,
    google::cloud::tpu::v1::StopNodeRequest const& request) {
  google::longrunning::Operation response;
  auto status = grpc_stub_->StopNode(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

future<StatusOr<google::longrunning::Operation>> DefaultTpuStub::AsyncStartNode(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions,
    google::cloud::tpu::v1::StartNodeRequest const& request) {
  return internal::MakeUnaryRpcImpl<google::cloud::tpu::v1::StartNodeRequest,
                                    google::longrunning::Operation>(
      cq,
      [this](grpc::ClientContext* context,
             google::cloud::tpu::v1::StartNodeRequest const& request,
             grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncStartNode(context, request, cq);
      },
      request, std::move(context));
}

StatusOr<google::longrunning::Operation> DefaultTpuStub::StartNode(
    grpc::ClientContext& context, Options,
    google::cloud::tpu::v1::StartNodeRequest const& request) {
  google::longrunning::Operation response;
  auto status = grpc_stub_->StartNode(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::tpu::v1::ListTensorFlowVersionsResponse>
DefaultTpuStub::ListTensorFlowVersions(
    grpc::ClientContext& context, Options const&,
    google::cloud::tpu::v1::ListTensorFlowVersionsRequest const& request) {
  google::cloud::tpu::v1::ListTensorFlowVersionsResponse response;
  auto status =
      grpc_stub_->ListTensorFlowVersions(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::tpu::v1::TensorFlowVersion>
DefaultTpuStub::GetTensorFlowVersion(
    grpc::ClientContext& context, Options const&,
    google::cloud::tpu::v1::GetTensorFlowVersionRequest const& request) {
  google::cloud::tpu::v1::TensorFlowVersion response;
  auto status = grpc_stub_->GetTensorFlowVersion(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::tpu::v1::ListAcceleratorTypesResponse>
DefaultTpuStub::ListAcceleratorTypes(
    grpc::ClientContext& context, Options const&,
    google::cloud::tpu::v1::ListAcceleratorTypesRequest const& request) {
  google::cloud::tpu::v1::ListAcceleratorTypesResponse response;
  auto status = grpc_stub_->ListAcceleratorTypes(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::tpu::v1::AcceleratorType>
DefaultTpuStub::GetAcceleratorType(
    grpc::ClientContext& context, Options const&,
    google::cloud::tpu::v1::GetAcceleratorTypeRequest const& request) {
  google::cloud::tpu::v1::AcceleratorType response;
  auto status = grpc_stub_->GetAcceleratorType(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::location::ListLocationsResponse>
DefaultTpuStub::ListLocations(
    grpc::ClientContext& context, Options const&,
    google::cloud::location::ListLocationsRequest const& request) {
  google::cloud::location::ListLocationsResponse response;
  auto status = locations_stub_->ListLocations(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::location::Location> DefaultTpuStub::GetLocation(
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
DefaultTpuStub::ListOperations(
    grpc::ClientContext& context, Options const&,
    google::longrunning::ListOperationsRequest const& request) {
  google::longrunning::ListOperationsResponse response;
  auto status = operations_stub_->ListOperations(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::longrunning::Operation> DefaultTpuStub::GetOperation(
    grpc::ClientContext& context, Options const&,
    google::longrunning::GetOperationRequest const& request) {
  google::longrunning::Operation response;
  auto status = operations_stub_->GetOperation(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

Status DefaultTpuStub::DeleteOperation(
    grpc::ClientContext& context, Options const&,
    google::longrunning::DeleteOperationRequest const& request) {
  google::protobuf::Empty response;
  auto status = operations_stub_->DeleteOperation(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return google::cloud::Status();
}

Status DefaultTpuStub::CancelOperation(
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
DefaultTpuStub::AsyncGetOperation(
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

future<Status> DefaultTpuStub::AsyncCancelOperation(
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
}  // namespace tpu_v1_internal
}  // namespace cloud
}  // namespace google
