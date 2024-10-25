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
// source: google/cloud/retail/v2/model_service.proto

#include "google/cloud/retail/v2/internal/model_stub.h"
#include "google/cloud/grpc_error_delegate.h"
#include "google/cloud/status_or.h"
#include "google/cloud/retail/v2/model_service.grpc.pb.h"
#include "google/longrunning/operations.grpc.pb.h"
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace retail_v2_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

ModelServiceStub::~ModelServiceStub() = default;

future<StatusOr<google::longrunning::Operation>>
DefaultModelServiceStub::AsyncCreateModel(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions,
    google::cloud::retail::v2::CreateModelRequest const& request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::retail::v2::CreateModelRequest,
      google::longrunning::Operation>(
      cq,
      [this](grpc::ClientContext* context,
             google::cloud::retail::v2::CreateModelRequest const& request,
             grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncCreateModel(context, request, cq);
      },
      request, std::move(context));
}

StatusOr<google::longrunning::Operation> DefaultModelServiceStub::CreateModel(
    grpc::ClientContext& context, Options,
    google::cloud::retail::v2::CreateModelRequest const& request) {
  google::longrunning::Operation response;
  auto status = grpc_stub_->CreateModel(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::retail::v2::Model> DefaultModelServiceStub::GetModel(
    grpc::ClientContext& context, Options const&,
    google::cloud::retail::v2::GetModelRequest const& request) {
  google::cloud::retail::v2::Model response;
  auto status = grpc_stub_->GetModel(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::retail::v2::Model> DefaultModelServiceStub::PauseModel(
    grpc::ClientContext& context, Options const&,
    google::cloud::retail::v2::PauseModelRequest const& request) {
  google::cloud::retail::v2::Model response;
  auto status = grpc_stub_->PauseModel(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::retail::v2::Model> DefaultModelServiceStub::ResumeModel(
    grpc::ClientContext& context, Options const&,
    google::cloud::retail::v2::ResumeModelRequest const& request) {
  google::cloud::retail::v2::Model response;
  auto status = grpc_stub_->ResumeModel(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

Status DefaultModelServiceStub::DeleteModel(
    grpc::ClientContext& context, Options const&,
    google::cloud::retail::v2::DeleteModelRequest const& request) {
  google::protobuf::Empty response;
  auto status = grpc_stub_->DeleteModel(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return google::cloud::Status();
}

StatusOr<google::cloud::retail::v2::ListModelsResponse>
DefaultModelServiceStub::ListModels(
    grpc::ClientContext& context, Options const&,
    google::cloud::retail::v2::ListModelsRequest const& request) {
  google::cloud::retail::v2::ListModelsResponse response;
  auto status = grpc_stub_->ListModels(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::retail::v2::Model> DefaultModelServiceStub::UpdateModel(
    grpc::ClientContext& context, Options const&,
    google::cloud::retail::v2::UpdateModelRequest const& request) {
  google::cloud::retail::v2::Model response;
  auto status = grpc_stub_->UpdateModel(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

future<StatusOr<google::longrunning::Operation>>
DefaultModelServiceStub::AsyncTuneModel(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions,
    google::cloud::retail::v2::TuneModelRequest const& request) {
  return internal::MakeUnaryRpcImpl<google::cloud::retail::v2::TuneModelRequest,
                                    google::longrunning::Operation>(
      cq,
      [this](grpc::ClientContext* context,
             google::cloud::retail::v2::TuneModelRequest const& request,
             grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncTuneModel(context, request, cq);
      },
      request, std::move(context));
}

StatusOr<google::longrunning::Operation> DefaultModelServiceStub::TuneModel(
    grpc::ClientContext& context, Options,
    google::cloud::retail::v2::TuneModelRequest const& request) {
  google::longrunning::Operation response;
  auto status = grpc_stub_->TuneModel(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::longrunning::ListOperationsResponse>
DefaultModelServiceStub::ListOperations(
    grpc::ClientContext& context, Options const&,
    google::longrunning::ListOperationsRequest const& request) {
  google::longrunning::ListOperationsResponse response;
  auto status = operations_stub_->ListOperations(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::longrunning::Operation> DefaultModelServiceStub::GetOperation(
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
DefaultModelServiceStub::AsyncGetOperation(
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

future<Status> DefaultModelServiceStub::AsyncCancelOperation(
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
