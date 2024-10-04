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
// source: google/cloud/aiplatform/v1/model_service.proto

#include "google/cloud/aiplatform/v1/internal/model_auth_decorator.h"
#include <google/cloud/aiplatform/v1/model_service.grpc.pb.h>
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace aiplatform_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

ModelServiceAuth::ModelServiceAuth(
    std::shared_ptr<google::cloud::internal::GrpcAuthenticationStrategy> auth,
    std::shared_ptr<ModelServiceStub> child)
    : auth_(std::move(auth)), child_(std::move(child)) {}

future<StatusOr<google::longrunning::Operation>>
ModelServiceAuth::AsyncUploadModel(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::aiplatform::v1::UploadModelRequest const& request) {
  using ReturnType = StatusOr<google::longrunning::Operation>;
  return auth_->AsyncConfigureContext(std::move(context))
      .then([cq, child = child_, options = std::move(options),
             request](future<StatusOr<std::shared_ptr<grpc::ClientContext>>>
                          f) mutable {
        auto context = f.get();
        if (!context) {
          return make_ready_future(ReturnType(std::move(context).status()));
        }
        return child->AsyncUploadModel(cq, *std::move(context),
                                       std::move(options), request);
      });
}

StatusOr<google::longrunning::Operation> ModelServiceAuth::UploadModel(
    grpc::ClientContext& context, Options options,
    google::cloud::aiplatform::v1::UploadModelRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->UploadModel(context, options, request);
}

StatusOr<google::cloud::aiplatform::v1::Model> ModelServiceAuth::GetModel(
    grpc::ClientContext& context, Options const& options,
    google::cloud::aiplatform::v1::GetModelRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->GetModel(context, options, request);
}

StatusOr<google::cloud::aiplatform::v1::ListModelsResponse>
ModelServiceAuth::ListModels(
    grpc::ClientContext& context, Options const& options,
    google::cloud::aiplatform::v1::ListModelsRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->ListModels(context, options, request);
}

StatusOr<google::cloud::aiplatform::v1::ListModelVersionsResponse>
ModelServiceAuth::ListModelVersions(
    grpc::ClientContext& context, Options const& options,
    google::cloud::aiplatform::v1::ListModelVersionsRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->ListModelVersions(context, options, request);
}

StatusOr<google::cloud::aiplatform::v1::Model> ModelServiceAuth::UpdateModel(
    grpc::ClientContext& context, Options const& options,
    google::cloud::aiplatform::v1::UpdateModelRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->UpdateModel(context, options, request);
}

future<StatusOr<google::longrunning::Operation>>
ModelServiceAuth::AsyncUpdateExplanationDataset(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::aiplatform::v1::UpdateExplanationDatasetRequest const&
        request) {
  using ReturnType = StatusOr<google::longrunning::Operation>;
  return auth_->AsyncConfigureContext(std::move(context))
      .then([cq, child = child_, options = std::move(options),
             request](future<StatusOr<std::shared_ptr<grpc::ClientContext>>>
                          f) mutable {
        auto context = f.get();
        if (!context) {
          return make_ready_future(ReturnType(std::move(context).status()));
        }
        return child->AsyncUpdateExplanationDataset(
            cq, *std::move(context), std::move(options), request);
      });
}

StatusOr<google::longrunning::Operation>
ModelServiceAuth::UpdateExplanationDataset(
    grpc::ClientContext& context, Options options,
    google::cloud::aiplatform::v1::UpdateExplanationDatasetRequest const&
        request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->UpdateExplanationDataset(context, options, request);
}

future<StatusOr<google::longrunning::Operation>>
ModelServiceAuth::AsyncDeleteModel(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::aiplatform::v1::DeleteModelRequest const& request) {
  using ReturnType = StatusOr<google::longrunning::Operation>;
  return auth_->AsyncConfigureContext(std::move(context))
      .then([cq, child = child_, options = std::move(options),
             request](future<StatusOr<std::shared_ptr<grpc::ClientContext>>>
                          f) mutable {
        auto context = f.get();
        if (!context) {
          return make_ready_future(ReturnType(std::move(context).status()));
        }
        return child->AsyncDeleteModel(cq, *std::move(context),
                                       std::move(options), request);
      });
}

StatusOr<google::longrunning::Operation> ModelServiceAuth::DeleteModel(
    grpc::ClientContext& context, Options options,
    google::cloud::aiplatform::v1::DeleteModelRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->DeleteModel(context, options, request);
}

future<StatusOr<google::longrunning::Operation>>
ModelServiceAuth::AsyncDeleteModelVersion(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::aiplatform::v1::DeleteModelVersionRequest const& request) {
  using ReturnType = StatusOr<google::longrunning::Operation>;
  return auth_->AsyncConfigureContext(std::move(context))
      .then([cq, child = child_, options = std::move(options),
             request](future<StatusOr<std::shared_ptr<grpc::ClientContext>>>
                          f) mutable {
        auto context = f.get();
        if (!context) {
          return make_ready_future(ReturnType(std::move(context).status()));
        }
        return child->AsyncDeleteModelVersion(cq, *std::move(context),
                                              std::move(options), request);
      });
}

StatusOr<google::longrunning::Operation> ModelServiceAuth::DeleteModelVersion(
    grpc::ClientContext& context, Options options,
    google::cloud::aiplatform::v1::DeleteModelVersionRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->DeleteModelVersion(context, options, request);
}

StatusOr<google::cloud::aiplatform::v1::Model>
ModelServiceAuth::MergeVersionAliases(
    grpc::ClientContext& context, Options const& options,
    google::cloud::aiplatform::v1::MergeVersionAliasesRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->MergeVersionAliases(context, options, request);
}

future<StatusOr<google::longrunning::Operation>>
ModelServiceAuth::AsyncExportModel(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::aiplatform::v1::ExportModelRequest const& request) {
  using ReturnType = StatusOr<google::longrunning::Operation>;
  return auth_->AsyncConfigureContext(std::move(context))
      .then([cq, child = child_, options = std::move(options),
             request](future<StatusOr<std::shared_ptr<grpc::ClientContext>>>
                          f) mutable {
        auto context = f.get();
        if (!context) {
          return make_ready_future(ReturnType(std::move(context).status()));
        }
        return child->AsyncExportModel(cq, *std::move(context),
                                       std::move(options), request);
      });
}

StatusOr<google::longrunning::Operation> ModelServiceAuth::ExportModel(
    grpc::ClientContext& context, Options options,
    google::cloud::aiplatform::v1::ExportModelRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->ExportModel(context, options, request);
}

future<StatusOr<google::longrunning::Operation>>
ModelServiceAuth::AsyncCopyModel(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::aiplatform::v1::CopyModelRequest const& request) {
  using ReturnType = StatusOr<google::longrunning::Operation>;
  return auth_->AsyncConfigureContext(std::move(context))
      .then([cq, child = child_, options = std::move(options),
             request](future<StatusOr<std::shared_ptr<grpc::ClientContext>>>
                          f) mutable {
        auto context = f.get();
        if (!context) {
          return make_ready_future(ReturnType(std::move(context).status()));
        }
        return child->AsyncCopyModel(cq, *std::move(context),
                                     std::move(options), request);
      });
}

StatusOr<google::longrunning::Operation> ModelServiceAuth::CopyModel(
    grpc::ClientContext& context, Options options,
    google::cloud::aiplatform::v1::CopyModelRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->CopyModel(context, options, request);
}

StatusOr<google::cloud::aiplatform::v1::ModelEvaluation>
ModelServiceAuth::ImportModelEvaluation(
    grpc::ClientContext& context, Options const& options,
    google::cloud::aiplatform::v1::ImportModelEvaluationRequest const&
        request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->ImportModelEvaluation(context, options, request);
}

StatusOr<
    google::cloud::aiplatform::v1::BatchImportModelEvaluationSlicesResponse>
ModelServiceAuth::BatchImportModelEvaluationSlices(
    grpc::ClientContext& context, Options const& options,
    google::cloud::aiplatform::v1::
        BatchImportModelEvaluationSlicesRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->BatchImportModelEvaluationSlices(context, options, request);
}

StatusOr<google::cloud::aiplatform::v1::BatchImportEvaluatedAnnotationsResponse>
ModelServiceAuth::BatchImportEvaluatedAnnotations(
    grpc::ClientContext& context, Options const& options,
    google::cloud::aiplatform::v1::BatchImportEvaluatedAnnotationsRequest const&
        request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->BatchImportEvaluatedAnnotations(context, options, request);
}

StatusOr<google::cloud::aiplatform::v1::ModelEvaluation>
ModelServiceAuth::GetModelEvaluation(
    grpc::ClientContext& context, Options const& options,
    google::cloud::aiplatform::v1::GetModelEvaluationRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->GetModelEvaluation(context, options, request);
}

StatusOr<google::cloud::aiplatform::v1::ListModelEvaluationsResponse>
ModelServiceAuth::ListModelEvaluations(
    grpc::ClientContext& context, Options const& options,
    google::cloud::aiplatform::v1::ListModelEvaluationsRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->ListModelEvaluations(context, options, request);
}

StatusOr<google::cloud::aiplatform::v1::ModelEvaluationSlice>
ModelServiceAuth::GetModelEvaluationSlice(
    grpc::ClientContext& context, Options const& options,
    google::cloud::aiplatform::v1::GetModelEvaluationSliceRequest const&
        request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->GetModelEvaluationSlice(context, options, request);
}

StatusOr<google::cloud::aiplatform::v1::ListModelEvaluationSlicesResponse>
ModelServiceAuth::ListModelEvaluationSlices(
    grpc::ClientContext& context, Options const& options,
    google::cloud::aiplatform::v1::ListModelEvaluationSlicesRequest const&
        request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->ListModelEvaluationSlices(context, options, request);
}

StatusOr<google::cloud::location::ListLocationsResponse>
ModelServiceAuth::ListLocations(
    grpc::ClientContext& context, Options const& options,
    google::cloud::location::ListLocationsRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->ListLocations(context, options, request);
}

StatusOr<google::cloud::location::Location> ModelServiceAuth::GetLocation(
    grpc::ClientContext& context, Options const& options,
    google::cloud::location::GetLocationRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->GetLocation(context, options, request);
}

StatusOr<google::iam::v1::Policy> ModelServiceAuth::SetIamPolicy(
    grpc::ClientContext& context, Options const& options,
    google::iam::v1::SetIamPolicyRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->SetIamPolicy(context, options, request);
}

StatusOr<google::iam::v1::Policy> ModelServiceAuth::GetIamPolicy(
    grpc::ClientContext& context, Options const& options,
    google::iam::v1::GetIamPolicyRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->GetIamPolicy(context, options, request);
}

StatusOr<google::iam::v1::TestIamPermissionsResponse>
ModelServiceAuth::TestIamPermissions(
    grpc::ClientContext& context, Options const& options,
    google::iam::v1::TestIamPermissionsRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->TestIamPermissions(context, options, request);
}

StatusOr<google::longrunning::ListOperationsResponse>
ModelServiceAuth::ListOperations(
    grpc::ClientContext& context, Options const& options,
    google::longrunning::ListOperationsRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->ListOperations(context, options, request);
}

StatusOr<google::longrunning::Operation> ModelServiceAuth::GetOperation(
    grpc::ClientContext& context, Options const& options,
    google::longrunning::GetOperationRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->GetOperation(context, options, request);
}

Status ModelServiceAuth::DeleteOperation(
    grpc::ClientContext& context, Options const& options,
    google::longrunning::DeleteOperationRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->DeleteOperation(context, options, request);
}

Status ModelServiceAuth::CancelOperation(
    grpc::ClientContext& context, Options const& options,
    google::longrunning::CancelOperationRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->CancelOperation(context, options, request);
}

StatusOr<google::longrunning::Operation> ModelServiceAuth::WaitOperation(
    grpc::ClientContext& context, Options const& options,
    google::longrunning::WaitOperationRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->WaitOperation(context, options, request);
}

future<StatusOr<google::longrunning::Operation>>
ModelServiceAuth::AsyncGetOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::longrunning::GetOperationRequest const& request) {
  using ReturnType = StatusOr<google::longrunning::Operation>;
  return auth_->AsyncConfigureContext(std::move(context))
      .then([cq, child = child_, options = std::move(options),
             request](future<StatusOr<std::shared_ptr<grpc::ClientContext>>>
                          f) mutable {
        auto context = f.get();
        if (!context) {
          return make_ready_future(ReturnType(std::move(context).status()));
        }
        return child->AsyncGetOperation(cq, *std::move(context),
                                        std::move(options), request);
      });
}

future<Status> ModelServiceAuth::AsyncCancelOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::longrunning::CancelOperationRequest const& request) {
  return auth_->AsyncConfigureContext(std::move(context))
      .then([cq, child = child_, options = std::move(options),
             request](future<StatusOr<std::shared_ptr<grpc::ClientContext>>>
                          f) mutable {
        auto context = f.get();
        if (!context) return make_ready_future(std::move(context).status());
        return child->AsyncCancelOperation(cq, *std::move(context),
                                           std::move(options), request);
      });
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace aiplatform_v1_internal
}  // namespace cloud
}  // namespace google
