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
// source: google/cloud/automl/v1/service.proto

#include "google/cloud/automl/v1/internal/auto_ml_logging_decorator.h"
#include "google/cloud/automl/v1/service.grpc.pb.h"
#include "google/cloud/internal/log_wrapper.h"
#include "google/cloud/status_or.h"
#include <memory>
#include <set>
#include <string>
#include <utility>

namespace google {
namespace cloud {
namespace automl_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

AutoMlLogging::AutoMlLogging(std::shared_ptr<AutoMlStub> child,
                             TracingOptions tracing_options,
                             std::set<std::string> const&)
    : child_(std::move(child)), tracing_options_(std::move(tracing_options)) {}

future<StatusOr<google::longrunning::Operation>>
AutoMlLogging::AsyncCreateDataset(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::automl::v1::CreateDatasetRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             google::cloud::internal::ImmutableOptions options,
             google::cloud::automl::v1::CreateDatasetRequest const& request) {
        return child_->AsyncCreateDataset(cq, std::move(context),
                                          std::move(options), request);
      },
      cq, std::move(context), std::move(options), request, __func__,
      tracing_options_);
}

StatusOr<google::longrunning::Operation> AutoMlLogging::CreateDataset(
    grpc::ClientContext& context, Options options,
    google::cloud::automl::v1::CreateDatasetRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::automl::v1::CreateDatasetRequest const& request) {
        return child_->CreateDataset(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::automl::v1::Dataset> AutoMlLogging::GetDataset(
    grpc::ClientContext& context, Options const& options,
    google::cloud::automl::v1::GetDatasetRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::automl::v1::GetDatasetRequest const& request) {
        return child_->GetDataset(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::automl::v1::ListDatasetsResponse>
AutoMlLogging::ListDatasets(
    grpc::ClientContext& context, Options const& options,
    google::cloud::automl::v1::ListDatasetsRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::automl::v1::ListDatasetsRequest const& request) {
        return child_->ListDatasets(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::automl::v1::Dataset> AutoMlLogging::UpdateDataset(
    grpc::ClientContext& context, Options const& options,
    google::cloud::automl::v1::UpdateDatasetRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::automl::v1::UpdateDatasetRequest const& request) {
        return child_->UpdateDataset(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
AutoMlLogging::AsyncDeleteDataset(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::automl::v1::DeleteDatasetRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             google::cloud::internal::ImmutableOptions options,
             google::cloud::automl::v1::DeleteDatasetRequest const& request) {
        return child_->AsyncDeleteDataset(cq, std::move(context),
                                          std::move(options), request);
      },
      cq, std::move(context), std::move(options), request, __func__,
      tracing_options_);
}

StatusOr<google::longrunning::Operation> AutoMlLogging::DeleteDataset(
    grpc::ClientContext& context, Options options,
    google::cloud::automl::v1::DeleteDatasetRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::automl::v1::DeleteDatasetRequest const& request) {
        return child_->DeleteDataset(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>> AutoMlLogging::AsyncImportData(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::automl::v1::ImportDataRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             google::cloud::internal::ImmutableOptions options,
             google::cloud::automl::v1::ImportDataRequest const& request) {
        return child_->AsyncImportData(cq, std::move(context),
                                       std::move(options), request);
      },
      cq, std::move(context), std::move(options), request, __func__,
      tracing_options_);
}

StatusOr<google::longrunning::Operation> AutoMlLogging::ImportData(
    grpc::ClientContext& context, Options options,
    google::cloud::automl::v1::ImportDataRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::automl::v1::ImportDataRequest const& request) {
        return child_->ImportData(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>> AutoMlLogging::AsyncExportData(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::automl::v1::ExportDataRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             google::cloud::internal::ImmutableOptions options,
             google::cloud::automl::v1::ExportDataRequest const& request) {
        return child_->AsyncExportData(cq, std::move(context),
                                       std::move(options), request);
      },
      cq, std::move(context), std::move(options), request, __func__,
      tracing_options_);
}

StatusOr<google::longrunning::Operation> AutoMlLogging::ExportData(
    grpc::ClientContext& context, Options options,
    google::cloud::automl::v1::ExportDataRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::automl::v1::ExportDataRequest const& request) {
        return child_->ExportData(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::automl::v1::AnnotationSpec>
AutoMlLogging::GetAnnotationSpec(
    grpc::ClientContext& context, Options const& options,
    google::cloud::automl::v1::GetAnnotationSpecRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](
          grpc::ClientContext& context, Options const& options,
          google::cloud::automl::v1::GetAnnotationSpecRequest const& request) {
        return child_->GetAnnotationSpec(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
AutoMlLogging::AsyncCreateModel(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::automl::v1::CreateModelRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             google::cloud::internal::ImmutableOptions options,
             google::cloud::automl::v1::CreateModelRequest const& request) {
        return child_->AsyncCreateModel(cq, std::move(context),
                                        std::move(options), request);
      },
      cq, std::move(context), std::move(options), request, __func__,
      tracing_options_);
}

StatusOr<google::longrunning::Operation> AutoMlLogging::CreateModel(
    grpc::ClientContext& context, Options options,
    google::cloud::automl::v1::CreateModelRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::automl::v1::CreateModelRequest const& request) {
        return child_->CreateModel(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::automl::v1::Model> AutoMlLogging::GetModel(
    grpc::ClientContext& context, Options const& options,
    google::cloud::automl::v1::GetModelRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::automl::v1::GetModelRequest const& request) {
        return child_->GetModel(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::automl::v1::ListModelsResponse>
AutoMlLogging::ListModels(
    grpc::ClientContext& context, Options const& options,
    google::cloud::automl::v1::ListModelsRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::automl::v1::ListModelsRequest const& request) {
        return child_->ListModels(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
AutoMlLogging::AsyncDeleteModel(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::automl::v1::DeleteModelRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             google::cloud::internal::ImmutableOptions options,
             google::cloud::automl::v1::DeleteModelRequest const& request) {
        return child_->AsyncDeleteModel(cq, std::move(context),
                                        std::move(options), request);
      },
      cq, std::move(context), std::move(options), request, __func__,
      tracing_options_);
}

StatusOr<google::longrunning::Operation> AutoMlLogging::DeleteModel(
    grpc::ClientContext& context, Options options,
    google::cloud::automl::v1::DeleteModelRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::automl::v1::DeleteModelRequest const& request) {
        return child_->DeleteModel(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::automl::v1::Model> AutoMlLogging::UpdateModel(
    grpc::ClientContext& context, Options const& options,
    google::cloud::automl::v1::UpdateModelRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::automl::v1::UpdateModelRequest const& request) {
        return child_->UpdateModel(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
AutoMlLogging::AsyncDeployModel(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::automl::v1::DeployModelRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             google::cloud::internal::ImmutableOptions options,
             google::cloud::automl::v1::DeployModelRequest const& request) {
        return child_->AsyncDeployModel(cq, std::move(context),
                                        std::move(options), request);
      },
      cq, std::move(context), std::move(options), request, __func__,
      tracing_options_);
}

StatusOr<google::longrunning::Operation> AutoMlLogging::DeployModel(
    grpc::ClientContext& context, Options options,
    google::cloud::automl::v1::DeployModelRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::automl::v1::DeployModelRequest const& request) {
        return child_->DeployModel(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
AutoMlLogging::AsyncUndeployModel(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::automl::v1::UndeployModelRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             google::cloud::internal::ImmutableOptions options,
             google::cloud::automl::v1::UndeployModelRequest const& request) {
        return child_->AsyncUndeployModel(cq, std::move(context),
                                          std::move(options), request);
      },
      cq, std::move(context), std::move(options), request, __func__,
      tracing_options_);
}

StatusOr<google::longrunning::Operation> AutoMlLogging::UndeployModel(
    grpc::ClientContext& context, Options options,
    google::cloud::automl::v1::UndeployModelRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::automl::v1::UndeployModelRequest const& request) {
        return child_->UndeployModel(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
AutoMlLogging::AsyncExportModel(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::automl::v1::ExportModelRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             google::cloud::internal::ImmutableOptions options,
             google::cloud::automl::v1::ExportModelRequest const& request) {
        return child_->AsyncExportModel(cq, std::move(context),
                                        std::move(options), request);
      },
      cq, std::move(context), std::move(options), request, __func__,
      tracing_options_);
}

StatusOr<google::longrunning::Operation> AutoMlLogging::ExportModel(
    grpc::ClientContext& context, Options options,
    google::cloud::automl::v1::ExportModelRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::automl::v1::ExportModelRequest const& request) {
        return child_->ExportModel(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::automl::v1::ModelEvaluation>
AutoMlLogging::GetModelEvaluation(
    grpc::ClientContext& context, Options const& options,
    google::cloud::automl::v1::GetModelEvaluationRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](
          grpc::ClientContext& context, Options const& options,
          google::cloud::automl::v1::GetModelEvaluationRequest const& request) {
        return child_->GetModelEvaluation(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::automl::v1::ListModelEvaluationsResponse>
AutoMlLogging::ListModelEvaluations(
    grpc::ClientContext& context, Options const& options,
    google::cloud::automl::v1::ListModelEvaluationsRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::automl::v1::ListModelEvaluationsRequest const&
                 request) {
        return child_->ListModelEvaluations(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
AutoMlLogging::AsyncGetOperation(
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

future<Status> AutoMlLogging::AsyncCancelOperation(
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
}  // namespace automl_v1_internal
}  // namespace cloud
}  // namespace google
