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
// source: google/cloud/compute/region_autoscalers/v1/region_autoscalers.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_REGION_AUTOSCALERS_V1_INTERNAL_REGION_AUTOSCALERS_REST_LOGGING_DECORATOR_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_REGION_AUTOSCALERS_V1_INTERNAL_REGION_AUTOSCALERS_REST_LOGGING_DECORATOR_H

#include "google/cloud/compute/region_autoscalers/v1/internal/region_autoscalers_rest_stub.h"
#include "google/cloud/future.h"
#include "google/cloud/internal/rest_context.h"
#include "google/cloud/tracing_options.h"
#include "google/cloud/version.h"
#include "google/cloud/compute/region_autoscalers/v1/region_autoscalers.pb.h"
#include "google/cloud/compute/region_operations/v1/region_operations.pb.h"
#include <memory>
#include <set>
#include <string>

namespace google {
namespace cloud {
namespace compute_region_autoscalers_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class RegionAutoscalersRestLogging : public RegionAutoscalersRestStub {
 public:
  ~RegionAutoscalersRestLogging() override = default;
  RegionAutoscalersRestLogging(std::shared_ptr<RegionAutoscalersRestStub> child,
                               TracingOptions tracing_options,
                               std::set<std::string> components);

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  AsyncDeleteAutoscaler(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<google::cloud::rest_internal::RestContext> rest_context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::cpp::compute::region_autoscalers::v1::
          DeleteAutoscalerRequest const& request) override;

  StatusOr<google::cloud::cpp::compute::v1::Operation> DeleteAutoscaler(
      google::cloud::rest_internal::RestContext& rest_context,
      Options const& options,
      google::cloud::cpp::compute::region_autoscalers::v1::
          DeleteAutoscalerRequest const& request) override;

  StatusOr<google::cloud::cpp::compute::v1::Autoscaler> GetAutoscaler(
      google::cloud::rest_internal::RestContext& rest_context,
      Options const& options,
      google::cloud::cpp::compute::region_autoscalers::v1::
          GetAutoscalerRequest const& request) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  AsyncInsertAutoscaler(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<google::cloud::rest_internal::RestContext> rest_context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::cpp::compute::region_autoscalers::v1::
          InsertAutoscalerRequest const& request) override;

  StatusOr<google::cloud::cpp::compute::v1::Operation> InsertAutoscaler(
      google::cloud::rest_internal::RestContext& rest_context,
      Options const& options,
      google::cloud::cpp::compute::region_autoscalers::v1::
          InsertAutoscalerRequest const& request) override;

  StatusOr<google::cloud::cpp::compute::v1::RegionAutoscalerList>
  ListRegionAutoscalers(
      google::cloud::rest_internal::RestContext& rest_context,
      Options const& options,
      google::cloud::cpp::compute::region_autoscalers::v1::
          ListRegionAutoscalersRequest const& request) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  AsyncPatchAutoscaler(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<google::cloud::rest_internal::RestContext> rest_context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::cpp::compute::region_autoscalers::v1::
          PatchAutoscalerRequest const& request) override;

  StatusOr<google::cloud::cpp::compute::v1::Operation> PatchAutoscaler(
      google::cloud::rest_internal::RestContext& rest_context,
      Options const& options,
      google::cloud::cpp::compute::region_autoscalers::v1::
          PatchAutoscalerRequest const& request) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  AsyncUpdateAutoscaler(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<google::cloud::rest_internal::RestContext> rest_context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::cpp::compute::region_autoscalers::v1::
          UpdateAutoscalerRequest const& request) override;

  StatusOr<google::cloud::cpp::compute::v1::Operation> UpdateAutoscaler(
      google::cloud::rest_internal::RestContext& rest_context,
      Options const& options,
      google::cloud::cpp::compute::region_autoscalers::v1::
          UpdateAutoscalerRequest const& request) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  AsyncGetOperation(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<google::cloud::rest_internal::RestContext> rest_context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::cpp::compute::region_operations::v1::
          GetOperationRequest const& request) override;

  future<Status> AsyncCancelOperation(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<google::cloud::rest_internal::RestContext> rest_context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::cpp::compute::region_operations::v1::
          DeleteOperationRequest const& request) override;

 private:
  std::shared_ptr<RegionAutoscalersRestStub> child_;
  TracingOptions tracing_options_;
  std::set<std::string> components_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_region_autoscalers_v1_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_REGION_AUTOSCALERS_V1_INTERNAL_REGION_AUTOSCALERS_REST_LOGGING_DECORATOR_H
