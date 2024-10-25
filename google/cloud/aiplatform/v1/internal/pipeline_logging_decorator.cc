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
// source: google/cloud/aiplatform/v1/pipeline_service.proto

#include "google/cloud/aiplatform/v1/internal/pipeline_logging_decorator.h"
#include "google/cloud/aiplatform/v1/pipeline_service.grpc.pb.h"
#include "google/cloud/internal/log_wrapper.h"
#include "google/cloud/status_or.h"
#include <memory>
#include <set>
#include <string>
#include <utility>

namespace google {
namespace cloud {
namespace aiplatform_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

PipelineServiceLogging::PipelineServiceLogging(
    std::shared_ptr<PipelineServiceStub> child, TracingOptions tracing_options,
    std::set<std::string> const&)
    : child_(std::move(child)), tracing_options_(std::move(tracing_options)) {}

StatusOr<google::cloud::aiplatform::v1::TrainingPipeline>
PipelineServiceLogging::CreateTrainingPipeline(
    grpc::ClientContext& context, Options const& options,
    google::cloud::aiplatform::v1::CreateTrainingPipelineRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::aiplatform::v1::CreateTrainingPipelineRequest const&
                 request) {
        return child_->CreateTrainingPipeline(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::aiplatform::v1::TrainingPipeline>
PipelineServiceLogging::GetTrainingPipeline(
    grpc::ClientContext& context, Options const& options,
    google::cloud::aiplatform::v1::GetTrainingPipelineRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::aiplatform::v1::GetTrainingPipelineRequest const&
                 request) {
        return child_->GetTrainingPipeline(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::aiplatform::v1::ListTrainingPipelinesResponse>
PipelineServiceLogging::ListTrainingPipelines(
    grpc::ClientContext& context, Options const& options,
    google::cloud::aiplatform::v1::ListTrainingPipelinesRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::aiplatform::v1::ListTrainingPipelinesRequest const&
                 request) {
        return child_->ListTrainingPipelines(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
PipelineServiceLogging::AsyncDeleteTrainingPipeline(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::aiplatform::v1::DeleteTrainingPipelineRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             google::cloud::internal::ImmutableOptions options,
             google::cloud::aiplatform::v1::DeleteTrainingPipelineRequest const&
                 request) {
        return child_->AsyncDeleteTrainingPipeline(cq, std::move(context),
                                                   std::move(options), request);
      },
      cq, std::move(context), std::move(options), request, __func__,
      tracing_options_);
}

StatusOr<google::longrunning::Operation>
PipelineServiceLogging::DeleteTrainingPipeline(
    grpc::ClientContext& context, Options options,
    google::cloud::aiplatform::v1::DeleteTrainingPipelineRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::aiplatform::v1::DeleteTrainingPipelineRequest const&
                 request) {
        return child_->DeleteTrainingPipeline(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

Status PipelineServiceLogging::CancelTrainingPipeline(
    grpc::ClientContext& context, Options const& options,
    google::cloud::aiplatform::v1::CancelTrainingPipelineRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::aiplatform::v1::CancelTrainingPipelineRequest const&
                 request) {
        return child_->CancelTrainingPipeline(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::aiplatform::v1::PipelineJob>
PipelineServiceLogging::CreatePipelineJob(
    grpc::ClientContext& context, Options const& options,
    google::cloud::aiplatform::v1::CreatePipelineJobRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::aiplatform::v1::CreatePipelineJobRequest const&
                 request) {
        return child_->CreatePipelineJob(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::aiplatform::v1::PipelineJob>
PipelineServiceLogging::GetPipelineJob(
    grpc::ClientContext& context, Options const& options,
    google::cloud::aiplatform::v1::GetPipelineJobRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](
          grpc::ClientContext& context, Options const& options,
          google::cloud::aiplatform::v1::GetPipelineJobRequest const& request) {
        return child_->GetPipelineJob(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::aiplatform::v1::ListPipelineJobsResponse>
PipelineServiceLogging::ListPipelineJobs(
    grpc::ClientContext& context, Options const& options,
    google::cloud::aiplatform::v1::ListPipelineJobsRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::aiplatform::v1::ListPipelineJobsRequest const&
                 request) {
        return child_->ListPipelineJobs(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
PipelineServiceLogging::AsyncDeletePipelineJob(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::aiplatform::v1::DeletePipelineJobRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             google::cloud::internal::ImmutableOptions options,
             google::cloud::aiplatform::v1::DeletePipelineJobRequest const&
                 request) {
        return child_->AsyncDeletePipelineJob(cq, std::move(context),
                                              std::move(options), request);
      },
      cq, std::move(context), std::move(options), request, __func__,
      tracing_options_);
}

StatusOr<google::longrunning::Operation>
PipelineServiceLogging::DeletePipelineJob(
    grpc::ClientContext& context, Options options,
    google::cloud::aiplatform::v1::DeletePipelineJobRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::aiplatform::v1::DeletePipelineJobRequest const&
                 request) {
        return child_->DeletePipelineJob(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
PipelineServiceLogging::AsyncBatchDeletePipelineJobs(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::aiplatform::v1::BatchDeletePipelineJobsRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](
          google::cloud::CompletionQueue& cq,
          std::shared_ptr<grpc::ClientContext> context,
          google::cloud::internal::ImmutableOptions options,
          google::cloud::aiplatform::v1::BatchDeletePipelineJobsRequest const&
              request) {
        return child_->AsyncBatchDeletePipelineJobs(
            cq, std::move(context), std::move(options), request);
      },
      cq, std::move(context), std::move(options), request, __func__,
      tracing_options_);
}

StatusOr<google::longrunning::Operation>
PipelineServiceLogging::BatchDeletePipelineJobs(
    grpc::ClientContext& context, Options options,
    google::cloud::aiplatform::v1::BatchDeletePipelineJobsRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](
          grpc::ClientContext& context, Options const& options,
          google::cloud::aiplatform::v1::BatchDeletePipelineJobsRequest const&
              request) {
        return child_->BatchDeletePipelineJobs(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

Status PipelineServiceLogging::CancelPipelineJob(
    grpc::ClientContext& context, Options const& options,
    google::cloud::aiplatform::v1::CancelPipelineJobRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::aiplatform::v1::CancelPipelineJobRequest const&
                 request) {
        return child_->CancelPipelineJob(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
PipelineServiceLogging::AsyncBatchCancelPipelineJobs(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::aiplatform::v1::BatchCancelPipelineJobsRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](
          google::cloud::CompletionQueue& cq,
          std::shared_ptr<grpc::ClientContext> context,
          google::cloud::internal::ImmutableOptions options,
          google::cloud::aiplatform::v1::BatchCancelPipelineJobsRequest const&
              request) {
        return child_->AsyncBatchCancelPipelineJobs(
            cq, std::move(context), std::move(options), request);
      },
      cq, std::move(context), std::move(options), request, __func__,
      tracing_options_);
}

StatusOr<google::longrunning::Operation>
PipelineServiceLogging::BatchCancelPipelineJobs(
    grpc::ClientContext& context, Options options,
    google::cloud::aiplatform::v1::BatchCancelPipelineJobsRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](
          grpc::ClientContext& context, Options const& options,
          google::cloud::aiplatform::v1::BatchCancelPipelineJobsRequest const&
              request) {
        return child_->BatchCancelPipelineJobs(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::location::ListLocationsResponse>
PipelineServiceLogging::ListLocations(
    grpc::ClientContext& context, Options const& options,
    google::cloud::location::ListLocationsRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::location::ListLocationsRequest const& request) {
        return child_->ListLocations(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::location::Location> PipelineServiceLogging::GetLocation(
    grpc::ClientContext& context, Options const& options,
    google::cloud::location::GetLocationRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::location::GetLocationRequest const& request) {
        return child_->GetLocation(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::iam::v1::Policy> PipelineServiceLogging::SetIamPolicy(
    grpc::ClientContext& context, Options const& options,
    google::iam::v1::SetIamPolicyRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::iam::v1::SetIamPolicyRequest const& request) {
        return child_->SetIamPolicy(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::iam::v1::Policy> PipelineServiceLogging::GetIamPolicy(
    grpc::ClientContext& context, Options const& options,
    google::iam::v1::GetIamPolicyRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::iam::v1::GetIamPolicyRequest const& request) {
        return child_->GetIamPolicy(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::iam::v1::TestIamPermissionsResponse>
PipelineServiceLogging::TestIamPermissions(
    grpc::ClientContext& context, Options const& options,
    google::iam::v1::TestIamPermissionsRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::iam::v1::TestIamPermissionsRequest const& request) {
        return child_->TestIamPermissions(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::longrunning::ListOperationsResponse>
PipelineServiceLogging::ListOperations(
    grpc::ClientContext& context, Options const& options,
    google::longrunning::ListOperationsRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::longrunning::ListOperationsRequest const& request) {
        return child_->ListOperations(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::longrunning::Operation> PipelineServiceLogging::GetOperation(
    grpc::ClientContext& context, Options const& options,
    google::longrunning::GetOperationRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::longrunning::GetOperationRequest const& request) {
        return child_->GetOperation(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

Status PipelineServiceLogging::DeleteOperation(
    grpc::ClientContext& context, Options const& options,
    google::longrunning::DeleteOperationRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::longrunning::DeleteOperationRequest const& request) {
        return child_->DeleteOperation(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

Status PipelineServiceLogging::CancelOperation(
    grpc::ClientContext& context, Options const& options,
    google::longrunning::CancelOperationRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::longrunning::CancelOperationRequest const& request) {
        return child_->CancelOperation(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::longrunning::Operation> PipelineServiceLogging::WaitOperation(
    grpc::ClientContext& context, Options const& options,
    google::longrunning::WaitOperationRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::longrunning::WaitOperationRequest const& request) {
        return child_->WaitOperation(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
PipelineServiceLogging::AsyncGetOperation(
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

future<Status> PipelineServiceLogging::AsyncCancelOperation(
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
}  // namespace aiplatform_v1_internal
}  // namespace cloud
}  // namespace google
