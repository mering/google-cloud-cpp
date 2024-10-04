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

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_AIPLATFORM_V1_INTERNAL_MODEL_TRACING_CONNECTION_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_AIPLATFORM_V1_INTERNAL_MODEL_TRACING_CONNECTION_H

#include "google/cloud/aiplatform/v1/model_connection.h"
#include "google/cloud/version.h"
#include <memory>

namespace google {
namespace cloud {
namespace aiplatform_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

class ModelServiceTracingConnection
    : public aiplatform_v1::ModelServiceConnection {
 public:
  ~ModelServiceTracingConnection() override = default;

  explicit ModelServiceTracingConnection(
      std::shared_ptr<aiplatform_v1::ModelServiceConnection> child);

  Options options() override { return child_->options(); }

  future<StatusOr<google::cloud::aiplatform::v1::UploadModelResponse>>
  UploadModel(google::cloud::aiplatform::v1::UploadModelRequest const& request)
      override;

  StatusOr<google::longrunning::Operation> UploadModel(
      NoAwaitTag,
      google::cloud::aiplatform::v1::UploadModelRequest const& request)
      override;

  future<StatusOr<google::cloud::aiplatform::v1::UploadModelResponse>>
  UploadModel(google::longrunning::Operation const& operation) override;

  StatusOr<google::cloud::aiplatform::v1::Model> GetModel(
      google::cloud::aiplatform::v1::GetModelRequest const& request) override;

  StreamRange<google::cloud::aiplatform::v1::Model> ListModels(
      google::cloud::aiplatform::v1::ListModelsRequest request) override;

  StreamRange<google::cloud::aiplatform::v1::Model> ListModelVersions(
      google::cloud::aiplatform::v1::ListModelVersionsRequest request) override;

  StatusOr<google::cloud::aiplatform::v1::Model> UpdateModel(
      google::cloud::aiplatform::v1::UpdateModelRequest const& request)
      override;

  future<
      StatusOr<google::cloud::aiplatform::v1::UpdateExplanationDatasetResponse>>
  UpdateExplanationDataset(
      google::cloud::aiplatform::v1::UpdateExplanationDatasetRequest const&
          request) override;

  StatusOr<google::longrunning::Operation> UpdateExplanationDataset(
      NoAwaitTag,
      google::cloud::aiplatform::v1::UpdateExplanationDatasetRequest const&
          request) override;

  future<
      StatusOr<google::cloud::aiplatform::v1::UpdateExplanationDatasetResponse>>
  UpdateExplanationDataset(
      google::longrunning::Operation const& operation) override;

  future<StatusOr<google::cloud::aiplatform::v1::DeleteOperationMetadata>>
  DeleteModel(google::cloud::aiplatform::v1::DeleteModelRequest const& request)
      override;

  StatusOr<google::longrunning::Operation> DeleteModel(
      NoAwaitTag,
      google::cloud::aiplatform::v1::DeleteModelRequest const& request)
      override;

  future<StatusOr<google::cloud::aiplatform::v1::DeleteOperationMetadata>>
  DeleteModel(google::longrunning::Operation const& operation) override;

  future<StatusOr<google::cloud::aiplatform::v1::DeleteOperationMetadata>>
  DeleteModelVersion(
      google::cloud::aiplatform::v1::DeleteModelVersionRequest const& request)
      override;

  StatusOr<google::longrunning::Operation> DeleteModelVersion(
      NoAwaitTag,
      google::cloud::aiplatform::v1::DeleteModelVersionRequest const& request)
      override;

  future<StatusOr<google::cloud::aiplatform::v1::DeleteOperationMetadata>>
  DeleteModelVersion(google::longrunning::Operation const& operation) override;

  StatusOr<google::cloud::aiplatform::v1::Model> MergeVersionAliases(
      google::cloud::aiplatform::v1::MergeVersionAliasesRequest const& request)
      override;

  future<StatusOr<google::cloud::aiplatform::v1::ExportModelResponse>>
  ExportModel(google::cloud::aiplatform::v1::ExportModelRequest const& request)
      override;

  StatusOr<google::longrunning::Operation> ExportModel(
      NoAwaitTag,
      google::cloud::aiplatform::v1::ExportModelRequest const& request)
      override;

  future<StatusOr<google::cloud::aiplatform::v1::ExportModelResponse>>
  ExportModel(google::longrunning::Operation const& operation) override;

  future<StatusOr<google::cloud::aiplatform::v1::CopyModelResponse>> CopyModel(
      google::cloud::aiplatform::v1::CopyModelRequest const& request) override;

  StatusOr<google::longrunning::Operation> CopyModel(
      NoAwaitTag,
      google::cloud::aiplatform::v1::CopyModelRequest const& request) override;

  future<StatusOr<google::cloud::aiplatform::v1::CopyModelResponse>> CopyModel(
      google::longrunning::Operation const& operation) override;

  StatusOr<google::cloud::aiplatform::v1::ModelEvaluation>
  ImportModelEvaluation(
      google::cloud::aiplatform::v1::ImportModelEvaluationRequest const&
          request) override;

  StatusOr<
      google::cloud::aiplatform::v1::BatchImportModelEvaluationSlicesResponse>
  BatchImportModelEvaluationSlices(
      google::cloud::aiplatform::v1::
          BatchImportModelEvaluationSlicesRequest const& request) override;

  StatusOr<
      google::cloud::aiplatform::v1::BatchImportEvaluatedAnnotationsResponse>
  BatchImportEvaluatedAnnotations(
      google::cloud::aiplatform::v1::
          BatchImportEvaluatedAnnotationsRequest const& request) override;

  StatusOr<google::cloud::aiplatform::v1::ModelEvaluation> GetModelEvaluation(
      google::cloud::aiplatform::v1::GetModelEvaluationRequest const& request)
      override;

  StreamRange<google::cloud::aiplatform::v1::ModelEvaluation>
  ListModelEvaluations(
      google::cloud::aiplatform::v1::ListModelEvaluationsRequest request)
      override;

  StatusOr<google::cloud::aiplatform::v1::ModelEvaluationSlice>
  GetModelEvaluationSlice(
      google::cloud::aiplatform::v1::GetModelEvaluationSliceRequest const&
          request) override;

  StreamRange<google::cloud::aiplatform::v1::ModelEvaluationSlice>
  ListModelEvaluationSlices(
      google::cloud::aiplatform::v1::ListModelEvaluationSlicesRequest request)
      override;

  StreamRange<google::cloud::location::Location> ListLocations(
      google::cloud::location::ListLocationsRequest request) override;

  StatusOr<google::cloud::location::Location> GetLocation(
      google::cloud::location::GetLocationRequest const& request) override;

  StatusOr<google::iam::v1::Policy> SetIamPolicy(
      google::iam::v1::SetIamPolicyRequest const& request) override;

  StatusOr<google::iam::v1::Policy> GetIamPolicy(
      google::iam::v1::GetIamPolicyRequest const& request) override;

  StatusOr<google::iam::v1::TestIamPermissionsResponse> TestIamPermissions(
      google::iam::v1::TestIamPermissionsRequest const& request) override;

  StreamRange<google::longrunning::Operation> ListOperations(
      google::longrunning::ListOperationsRequest request) override;

  StatusOr<google::longrunning::Operation> GetOperation(
      google::longrunning::GetOperationRequest const& request) override;

  Status DeleteOperation(
      google::longrunning::DeleteOperationRequest const& request) override;

  Status CancelOperation(
      google::longrunning::CancelOperationRequest const& request) override;

  StatusOr<google::longrunning::Operation> WaitOperation(
      google::longrunning::WaitOperationRequest const& request) override;

 private:
  std::shared_ptr<aiplatform_v1::ModelServiceConnection> child_;
};

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

/**
 * Conditionally applies the tracing decorator to the given connection.
 *
 * The connection is only decorated if tracing is enabled (as determined by the
 * connection's options).
 */
std::shared_ptr<aiplatform_v1::ModelServiceConnection>
MakeModelServiceTracingConnection(
    std::shared_ptr<aiplatform_v1::ModelServiceConnection> conn);

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace aiplatform_v1_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_AIPLATFORM_V1_INTERNAL_MODEL_TRACING_CONNECTION_H
