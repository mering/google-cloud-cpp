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
// source: google/cloud/aiplatform/v1/job_service.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_AIPLATFORM_V1_INTERNAL_JOB_CONNECTION_IMPL_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_AIPLATFORM_V1_INTERNAL_JOB_CONNECTION_IMPL_H

#include "google/cloud/aiplatform/v1/internal/job_retry_traits.h"
#include "google/cloud/aiplatform/v1/internal/job_stub.h"
#include "google/cloud/aiplatform/v1/job_connection.h"
#include "google/cloud/aiplatform/v1/job_connection_idempotency_policy.h"
#include "google/cloud/aiplatform/v1/job_options.h"
#include "google/cloud/background_threads.h"
#include "google/cloud/backoff_policy.h"
#include "google/cloud/future.h"
#include "google/cloud/options.h"
#include "google/cloud/polling_policy.h"
#include "google/cloud/status_or.h"
#include "google/cloud/stream_range.h"
#include "google/cloud/version.h"
#include "google/longrunning/operations.grpc.pb.h"
#include <memory>

namespace google {
namespace cloud {
namespace aiplatform_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class JobServiceConnectionImpl : public aiplatform_v1::JobServiceConnection {
 public:
  ~JobServiceConnectionImpl() override = default;

  JobServiceConnectionImpl(
      std::unique_ptr<google::cloud::BackgroundThreads> background,
      std::shared_ptr<aiplatform_v1_internal::JobServiceStub> stub,
      Options options);

  Options options() override { return options_; }

  StatusOr<google::cloud::aiplatform::v1::CustomJob> CreateCustomJob(
      google::cloud::aiplatform::v1::CreateCustomJobRequest const& request)
      override;

  StatusOr<google::cloud::aiplatform::v1::CustomJob> GetCustomJob(
      google::cloud::aiplatform::v1::GetCustomJobRequest const& request)
      override;

  StreamRange<google::cloud::aiplatform::v1::CustomJob> ListCustomJobs(
      google::cloud::aiplatform::v1::ListCustomJobsRequest request) override;

  future<StatusOr<google::cloud::aiplatform::v1::DeleteOperationMetadata>>
  DeleteCustomJob(google::cloud::aiplatform::v1::DeleteCustomJobRequest const&
                      request) override;

  StatusOr<google::longrunning::Operation> DeleteCustomJob(
      NoAwaitTag,
      google::cloud::aiplatform::v1::DeleteCustomJobRequest const& request)
      override;

  future<StatusOr<google::cloud::aiplatform::v1::DeleteOperationMetadata>>
  DeleteCustomJob(google::longrunning::Operation const& operation) override;

  Status CancelCustomJob(
      google::cloud::aiplatform::v1::CancelCustomJobRequest const& request)
      override;

  StatusOr<google::cloud::aiplatform::v1::DataLabelingJob>
  CreateDataLabelingJob(
      google::cloud::aiplatform::v1::CreateDataLabelingJobRequest const&
          request) override;

  StatusOr<google::cloud::aiplatform::v1::DataLabelingJob> GetDataLabelingJob(
      google::cloud::aiplatform::v1::GetDataLabelingJobRequest const& request)
      override;

  StreamRange<google::cloud::aiplatform::v1::DataLabelingJob>
  ListDataLabelingJobs(
      google::cloud::aiplatform::v1::ListDataLabelingJobsRequest request)
      override;

  future<StatusOr<google::cloud::aiplatform::v1::DeleteOperationMetadata>>
  DeleteDataLabelingJob(
      google::cloud::aiplatform::v1::DeleteDataLabelingJobRequest const&
          request) override;

  StatusOr<google::longrunning::Operation> DeleteDataLabelingJob(
      NoAwaitTag,
      google::cloud::aiplatform::v1::DeleteDataLabelingJobRequest const&
          request) override;

  future<StatusOr<google::cloud::aiplatform::v1::DeleteOperationMetadata>>
  DeleteDataLabelingJob(
      google::longrunning::Operation const& operation) override;

  Status CancelDataLabelingJob(
      google::cloud::aiplatform::v1::CancelDataLabelingJobRequest const&
          request) override;

  StatusOr<google::cloud::aiplatform::v1::HyperparameterTuningJob>
  CreateHyperparameterTuningJob(
      google::cloud::aiplatform::v1::CreateHyperparameterTuningJobRequest const&
          request) override;

  StatusOr<google::cloud::aiplatform::v1::HyperparameterTuningJob>
  GetHyperparameterTuningJob(
      google::cloud::aiplatform::v1::GetHyperparameterTuningJobRequest const&
          request) override;

  StreamRange<google::cloud::aiplatform::v1::HyperparameterTuningJob>
  ListHyperparameterTuningJobs(
      google::cloud::aiplatform::v1::ListHyperparameterTuningJobsRequest
          request) override;

  future<StatusOr<google::cloud::aiplatform::v1::DeleteOperationMetadata>>
  DeleteHyperparameterTuningJob(
      google::cloud::aiplatform::v1::DeleteHyperparameterTuningJobRequest const&
          request) override;

  StatusOr<google::longrunning::Operation> DeleteHyperparameterTuningJob(
      NoAwaitTag,
      google::cloud::aiplatform::v1::DeleteHyperparameterTuningJobRequest const&
          request) override;

  future<StatusOr<google::cloud::aiplatform::v1::DeleteOperationMetadata>>
  DeleteHyperparameterTuningJob(
      google::longrunning::Operation const& operation) override;

  Status CancelHyperparameterTuningJob(
      google::cloud::aiplatform::v1::CancelHyperparameterTuningJobRequest const&
          request) override;

  StatusOr<google::cloud::aiplatform::v1::NasJob> CreateNasJob(
      google::cloud::aiplatform::v1::CreateNasJobRequest const& request)
      override;

  StatusOr<google::cloud::aiplatform::v1::NasJob> GetNasJob(
      google::cloud::aiplatform::v1::GetNasJobRequest const& request) override;

  StreamRange<google::cloud::aiplatform::v1::NasJob> ListNasJobs(
      google::cloud::aiplatform::v1::ListNasJobsRequest request) override;

  future<StatusOr<google::cloud::aiplatform::v1::DeleteOperationMetadata>>
  DeleteNasJob(google::cloud::aiplatform::v1::DeleteNasJobRequest const&
                   request) override;

  StatusOr<google::longrunning::Operation> DeleteNasJob(
      NoAwaitTag,
      google::cloud::aiplatform::v1::DeleteNasJobRequest const& request)
      override;

  future<StatusOr<google::cloud::aiplatform::v1::DeleteOperationMetadata>>
  DeleteNasJob(google::longrunning::Operation const& operation) override;

  Status CancelNasJob(google::cloud::aiplatform::v1::CancelNasJobRequest const&
                          request) override;

  StatusOr<google::cloud::aiplatform::v1::NasTrialDetail> GetNasTrialDetail(
      google::cloud::aiplatform::v1::GetNasTrialDetailRequest const& request)
      override;

  StreamRange<google::cloud::aiplatform::v1::NasTrialDetail>
  ListNasTrialDetails(google::cloud::aiplatform::v1::ListNasTrialDetailsRequest
                          request) override;

  StatusOr<google::cloud::aiplatform::v1::BatchPredictionJob>
  CreateBatchPredictionJob(
      google::cloud::aiplatform::v1::CreateBatchPredictionJobRequest const&
          request) override;

  StatusOr<google::cloud::aiplatform::v1::BatchPredictionJob>
  GetBatchPredictionJob(
      google::cloud::aiplatform::v1::GetBatchPredictionJobRequest const&
          request) override;

  StreamRange<google::cloud::aiplatform::v1::BatchPredictionJob>
  ListBatchPredictionJobs(
      google::cloud::aiplatform::v1::ListBatchPredictionJobsRequest request)
      override;

  future<StatusOr<google::cloud::aiplatform::v1::DeleteOperationMetadata>>
  DeleteBatchPredictionJob(
      google::cloud::aiplatform::v1::DeleteBatchPredictionJobRequest const&
          request) override;

  StatusOr<google::longrunning::Operation> DeleteBatchPredictionJob(
      NoAwaitTag,
      google::cloud::aiplatform::v1::DeleteBatchPredictionJobRequest const&
          request) override;

  future<StatusOr<google::cloud::aiplatform::v1::DeleteOperationMetadata>>
  DeleteBatchPredictionJob(
      google::longrunning::Operation const& operation) override;

  Status CancelBatchPredictionJob(
      google::cloud::aiplatform::v1::CancelBatchPredictionJobRequest const&
          request) override;

  StatusOr<google::cloud::aiplatform::v1::ModelDeploymentMonitoringJob>
  CreateModelDeploymentMonitoringJob(
      google::cloud::aiplatform::v1::
          CreateModelDeploymentMonitoringJobRequest const& request) override;

  StreamRange<google::cloud::aiplatform::v1::ModelMonitoringStatsAnomalies>
  SearchModelDeploymentMonitoringStatsAnomalies(
      google::cloud::aiplatform::v1::
          SearchModelDeploymentMonitoringStatsAnomaliesRequest request)
      override;

  StatusOr<google::cloud::aiplatform::v1::ModelDeploymentMonitoringJob>
  GetModelDeploymentMonitoringJob(
      google::cloud::aiplatform::v1::
          GetModelDeploymentMonitoringJobRequest const& request) override;

  StreamRange<google::cloud::aiplatform::v1::ModelDeploymentMonitoringJob>
  ListModelDeploymentMonitoringJobs(
      google::cloud::aiplatform::v1::ListModelDeploymentMonitoringJobsRequest
          request) override;

  future<StatusOr<google::cloud::aiplatform::v1::ModelDeploymentMonitoringJob>>
  UpdateModelDeploymentMonitoringJob(
      google::cloud::aiplatform::v1::
          UpdateModelDeploymentMonitoringJobRequest const& request) override;

  StatusOr<google::longrunning::Operation> UpdateModelDeploymentMonitoringJob(
      NoAwaitTag,
      google::cloud::aiplatform::v1::
          UpdateModelDeploymentMonitoringJobRequest const& request) override;

  future<StatusOr<google::cloud::aiplatform::v1::ModelDeploymentMonitoringJob>>
  UpdateModelDeploymentMonitoringJob(
      google::longrunning::Operation const& operation) override;

  future<StatusOr<google::cloud::aiplatform::v1::DeleteOperationMetadata>>
  DeleteModelDeploymentMonitoringJob(
      google::cloud::aiplatform::v1::
          DeleteModelDeploymentMonitoringJobRequest const& request) override;

  StatusOr<google::longrunning::Operation> DeleteModelDeploymentMonitoringJob(
      NoAwaitTag,
      google::cloud::aiplatform::v1::
          DeleteModelDeploymentMonitoringJobRequest const& request) override;

  future<StatusOr<google::cloud::aiplatform::v1::DeleteOperationMetadata>>
  DeleteModelDeploymentMonitoringJob(
      google::longrunning::Operation const& operation) override;

  Status PauseModelDeploymentMonitoringJob(
      google::cloud::aiplatform::v1::
          PauseModelDeploymentMonitoringJobRequest const& request) override;

  Status ResumeModelDeploymentMonitoringJob(
      google::cloud::aiplatform::v1::
          ResumeModelDeploymentMonitoringJobRequest const& request) override;

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
  std::unique_ptr<google::cloud::BackgroundThreads> background_;
  std::shared_ptr<aiplatform_v1_internal::JobServiceStub> stub_;
  Options options_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace aiplatform_v1_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_AIPLATFORM_V1_INTERNAL_JOB_CONNECTION_IMPL_H
