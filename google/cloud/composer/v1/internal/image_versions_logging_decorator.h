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
// source: google/cloud/orchestration/airflow/service/v1/image_versions.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPOSER_V1_INTERNAL_IMAGE_VERSIONS_LOGGING_DECORATOR_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPOSER_V1_INTERNAL_IMAGE_VERSIONS_LOGGING_DECORATOR_H

#include "google/cloud/composer/v1/internal/image_versions_stub.h"
#include "google/cloud/tracing_options.h"
#include "google/cloud/version.h"
#include <memory>
#include <set>
#include <string>

namespace google {
namespace cloud {
namespace composer_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class ImageVersionsLogging : public ImageVersionsStub {
 public:
  ~ImageVersionsLogging() override = default;
  ImageVersionsLogging(std::shared_ptr<ImageVersionsStub> child,
                       TracingOptions tracing_options,
                       std::set<std::string> const& components);

  StatusOr<google::cloud::orchestration::airflow::service::v1::
               ListImageVersionsResponse>
  ListImageVersions(grpc::ClientContext& context, Options const& options,
                    google::cloud::orchestration::airflow::service::v1::
                        ListImageVersionsRequest const& request) override;

  StatusOr<google::longrunning::ListOperationsResponse> ListOperations(
      grpc::ClientContext& context, Options const& options,
      google::longrunning::ListOperationsRequest const& request) override;

  StatusOr<google::longrunning::Operation> GetOperation(
      grpc::ClientContext& context, Options const& options,
      google::longrunning::GetOperationRequest const& request) override;

  Status DeleteOperation(
      grpc::ClientContext& context, Options const& options,
      google::longrunning::DeleteOperationRequest const& request) override;

 private:
  std::shared_ptr<ImageVersionsStub> child_;
  TracingOptions tracing_options_;
};  // ImageVersionsLogging

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace composer_v1_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPOSER_V1_INTERNAL_IMAGE_VERSIONS_LOGGING_DECORATOR_H
