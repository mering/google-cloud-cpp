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

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_VISION_V1_INTERNAL_IMAGE_ANNOTATOR_METADATA_DECORATOR_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_VISION_V1_INTERNAL_IMAGE_ANNOTATOR_METADATA_DECORATOR_H

#include "google/cloud/vision/v1/internal/image_annotator_stub.h"
#include "google/cloud/options.h"
#include "google/cloud/version.h"
#include "google/longrunning/operations.grpc.pb.h"
#include <map>
#include <memory>
#include <string>

namespace google {
namespace cloud {
namespace vision_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class ImageAnnotatorMetadata : public ImageAnnotatorStub {
 public:
  ~ImageAnnotatorMetadata() override = default;
  ImageAnnotatorMetadata(std::shared_ptr<ImageAnnotatorStub> child,
                         std::multimap<std::string, std::string> fixed_metadata,
                         std::string api_client_header = "");

  StatusOr<google::cloud::vision::v1::BatchAnnotateImagesResponse>
  BatchAnnotateImages(
      grpc::ClientContext& context, Options const& options,
      google::cloud::vision::v1::BatchAnnotateImagesRequest const& request)
      override;

  StatusOr<google::cloud::vision::v1::BatchAnnotateFilesResponse>
  BatchAnnotateFiles(grpc::ClientContext& context, Options const& options,
                     google::cloud::vision::v1::BatchAnnotateFilesRequest const&
                         request) override;

  future<StatusOr<google::longrunning::Operation>>
  AsyncAsyncBatchAnnotateImages(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::vision::v1::AsyncBatchAnnotateImagesRequest const& request)
      override;

  StatusOr<google::longrunning::Operation> AsyncBatchAnnotateImages(
      grpc::ClientContext& context, Options options,
      google::cloud::vision::v1::AsyncBatchAnnotateImagesRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncAsyncBatchAnnotateFiles(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::vision::v1::AsyncBatchAnnotateFilesRequest const& request)
      override;

  StatusOr<google::longrunning::Operation> AsyncBatchAnnotateFiles(
      grpc::ClientContext& context, Options options,
      google::cloud::vision::v1::AsyncBatchAnnotateFilesRequest const& request)
      override;

  StatusOr<google::longrunning::Operation> GetOperation(
      grpc::ClientContext& context, Options const& options,
      google::longrunning::GetOperationRequest const& request) override;

  future<StatusOr<google::longrunning::Operation>> AsyncGetOperation(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::longrunning::GetOperationRequest const& request) override;

  future<Status> AsyncCancelOperation(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::longrunning::CancelOperationRequest const& request) override;

 private:
  void SetMetadata(grpc::ClientContext& context, Options const& options,
                   std::string const& request_params);
  void SetMetadata(grpc::ClientContext& context, Options const& options);

  std::shared_ptr<ImageAnnotatorStub> child_;
  std::multimap<std::string, std::string> fixed_metadata_;
  std::string api_client_header_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace vision_v1_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_VISION_V1_INTERNAL_IMAGE_ANNOTATOR_METADATA_DECORATOR_H
