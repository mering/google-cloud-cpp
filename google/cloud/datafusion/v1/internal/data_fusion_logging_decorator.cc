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
// source: google/cloud/datafusion/v1/datafusion.proto

#include "google/cloud/datafusion/v1/internal/data_fusion_logging_decorator.h"
#include "google/cloud/internal/log_wrapper.h"
#include "google/cloud/status_or.h"
#include "google/cloud/datafusion/v1/datafusion.grpc.pb.h"
#include <memory>
#include <set>
#include <string>
#include <utility>

namespace google {
namespace cloud {
namespace datafusion_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

DataFusionLogging::DataFusionLogging(std::shared_ptr<DataFusionStub> child,
                                     TracingOptions tracing_options,
                                     std::set<std::string> const&)
    : child_(std::move(child)), tracing_options_(std::move(tracing_options)) {}

StatusOr<google::cloud::datafusion::v1::ListAvailableVersionsResponse>
DataFusionLogging::ListAvailableVersions(
    grpc::ClientContext& context, Options const& options,
    google::cloud::datafusion::v1::ListAvailableVersionsRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::datafusion::v1::ListAvailableVersionsRequest const&
                 request) {
        return child_->ListAvailableVersions(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::datafusion::v1::ListInstancesResponse>
DataFusionLogging::ListInstances(
    grpc::ClientContext& context, Options const& options,
    google::cloud::datafusion::v1::ListInstancesRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](
          grpc::ClientContext& context, Options const& options,
          google::cloud::datafusion::v1::ListInstancesRequest const& request) {
        return child_->ListInstances(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::datafusion::v1::Instance>
DataFusionLogging::GetInstance(
    grpc::ClientContext& context, Options const& options,
    google::cloud::datafusion::v1::GetInstanceRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::datafusion::v1::GetInstanceRequest const& request) {
        return child_->GetInstance(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
DataFusionLogging::AsyncCreateInstance(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::datafusion::v1::CreateInstanceRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](
          google::cloud::CompletionQueue& cq,
          std::shared_ptr<grpc::ClientContext> context,
          google::cloud::internal::ImmutableOptions options,
          google::cloud::datafusion::v1::CreateInstanceRequest const& request) {
        return child_->AsyncCreateInstance(cq, std::move(context),
                                           std::move(options), request);
      },
      cq, std::move(context), std::move(options), request, __func__,
      tracing_options_);
}

StatusOr<google::longrunning::Operation> DataFusionLogging::CreateInstance(
    grpc::ClientContext& context, Options options,
    google::cloud::datafusion::v1::CreateInstanceRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](
          grpc::ClientContext& context, Options const& options,
          google::cloud::datafusion::v1::CreateInstanceRequest const& request) {
        return child_->CreateInstance(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
DataFusionLogging::AsyncDeleteInstance(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::datafusion::v1::DeleteInstanceRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](
          google::cloud::CompletionQueue& cq,
          std::shared_ptr<grpc::ClientContext> context,
          google::cloud::internal::ImmutableOptions options,
          google::cloud::datafusion::v1::DeleteInstanceRequest const& request) {
        return child_->AsyncDeleteInstance(cq, std::move(context),
                                           std::move(options), request);
      },
      cq, std::move(context), std::move(options), request, __func__,
      tracing_options_);
}

StatusOr<google::longrunning::Operation> DataFusionLogging::DeleteInstance(
    grpc::ClientContext& context, Options options,
    google::cloud::datafusion::v1::DeleteInstanceRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](
          grpc::ClientContext& context, Options const& options,
          google::cloud::datafusion::v1::DeleteInstanceRequest const& request) {
        return child_->DeleteInstance(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
DataFusionLogging::AsyncUpdateInstance(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::datafusion::v1::UpdateInstanceRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](
          google::cloud::CompletionQueue& cq,
          std::shared_ptr<grpc::ClientContext> context,
          google::cloud::internal::ImmutableOptions options,
          google::cloud::datafusion::v1::UpdateInstanceRequest const& request) {
        return child_->AsyncUpdateInstance(cq, std::move(context),
                                           std::move(options), request);
      },
      cq, std::move(context), std::move(options), request, __func__,
      tracing_options_);
}

StatusOr<google::longrunning::Operation> DataFusionLogging::UpdateInstance(
    grpc::ClientContext& context, Options options,
    google::cloud::datafusion::v1::UpdateInstanceRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](
          grpc::ClientContext& context, Options const& options,
          google::cloud::datafusion::v1::UpdateInstanceRequest const& request) {
        return child_->UpdateInstance(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
DataFusionLogging::AsyncRestartInstance(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::datafusion::v1::RestartInstanceRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             google::cloud::internal::ImmutableOptions options,
             google::cloud::datafusion::v1::RestartInstanceRequest const&
                 request) {
        return child_->AsyncRestartInstance(cq, std::move(context),
                                            std::move(options), request);
      },
      cq, std::move(context), std::move(options), request, __func__,
      tracing_options_);
}

StatusOr<google::longrunning::Operation> DataFusionLogging::RestartInstance(
    grpc::ClientContext& context, Options options,
    google::cloud::datafusion::v1::RestartInstanceRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::datafusion::v1::RestartInstanceRequest const&
                 request) {
        return child_->RestartInstance(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
DataFusionLogging::AsyncGetOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::longrunning::GetOperationRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             google::cloud::internal::ImmutableOptions options,
             google::longrunning::GetOperationRequest const& request) {
        return child_->AsyncGetOperation(cq, std::move(context),
                                         std::move(options), request);
      },
      cq, std::move(context), std::move(options), request, __func__,
      tracing_options_);
}

future<Status> DataFusionLogging::AsyncCancelOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::longrunning::CancelOperationRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             google::cloud::internal::ImmutableOptions options,
             google::longrunning::CancelOperationRequest const& request) {
        return child_->AsyncCancelOperation(cq, std::move(context),
                                            std::move(options), request);
      },
      cq, std::move(context), std::move(options), request, __func__,
      tracing_options_);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace datafusion_v1_internal
}  // namespace cloud
}  // namespace google
