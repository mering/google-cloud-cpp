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
// source: google/cloud/vision/v1/image_annotator.proto

#include "google/cloud/vision/v1/internal/image_annotator_stub.h"
#include "google/cloud/grpc_error_delegate.h"
#include "google/cloud/status_or.h"
#include "google/cloud/vision/v1/image_annotator.grpc.pb.h"
#include "google/longrunning/operations.grpc.pb.h"
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace vision_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

ImageAnnotatorStub::~ImageAnnotatorStub() = default;

StatusOr<google::cloud::vision::v1::BatchAnnotateImagesResponse>
DefaultImageAnnotatorStub::BatchAnnotateImages(
    grpc::ClientContext& context, Options const&,
    google::cloud::vision::v1::BatchAnnotateImagesRequest const& request) {
  google::cloud::vision::v1::BatchAnnotateImagesResponse response;
  auto status = grpc_stub_->BatchAnnotateImages(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::vision::v1::BatchAnnotateFilesResponse>
DefaultImageAnnotatorStub::BatchAnnotateFiles(
    grpc::ClientContext& context, Options const&,
    google::cloud::vision::v1::BatchAnnotateFilesRequest const& request) {
  google::cloud::vision::v1::BatchAnnotateFilesResponse response;
  auto status = grpc_stub_->BatchAnnotateFiles(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

future<StatusOr<google::longrunning::Operation>>
DefaultImageAnnotatorStub::AsyncAsyncBatchAnnotateImages(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions,
    google::cloud::vision::v1::AsyncBatchAnnotateImagesRequest const& request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::vision::v1::AsyncBatchAnnotateImagesRequest,
      google::longrunning::Operation>(
      cq,
      [this](grpc::ClientContext* context,
             google::cloud::vision::v1::AsyncBatchAnnotateImagesRequest const&
                 request,
             grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncAsyncBatchAnnotateImages(context, request, cq);
      },
      request, std::move(context));
}

StatusOr<google::longrunning::Operation>
DefaultImageAnnotatorStub::AsyncBatchAnnotateImages(
    grpc::ClientContext& context, Options,
    google::cloud::vision::v1::AsyncBatchAnnotateImagesRequest const& request) {
  google::longrunning::Operation response;
  auto status =
      grpc_stub_->AsyncBatchAnnotateImages(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

future<StatusOr<google::longrunning::Operation>>
DefaultImageAnnotatorStub::AsyncAsyncBatchAnnotateFiles(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions,
    google::cloud::vision::v1::AsyncBatchAnnotateFilesRequest const& request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::vision::v1::AsyncBatchAnnotateFilesRequest,
      google::longrunning::Operation>(
      cq,
      [this](grpc::ClientContext* context,
             google::cloud::vision::v1::AsyncBatchAnnotateFilesRequest const&
                 request,
             grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncAsyncBatchAnnotateFiles(context, request, cq);
      },
      request, std::move(context));
}

StatusOr<google::longrunning::Operation>
DefaultImageAnnotatorStub::AsyncBatchAnnotateFiles(
    grpc::ClientContext& context, Options,
    google::cloud::vision::v1::AsyncBatchAnnotateFilesRequest const& request) {
  google::longrunning::Operation response;
  auto status =
      grpc_stub_->AsyncBatchAnnotateFiles(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::longrunning::Operation>
DefaultImageAnnotatorStub::GetOperation(
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
DefaultImageAnnotatorStub::AsyncGetOperation(
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

future<Status> DefaultImageAnnotatorStub::AsyncCancelOperation(
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
}  // namespace vision_v1_internal
}  // namespace cloud
}  // namespace google
