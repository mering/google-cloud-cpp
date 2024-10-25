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

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_AIPLATFORM_V1_JOB_CONNECTION_IDEMPOTENCY_POLICY_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_AIPLATFORM_V1_JOB_CONNECTION_IDEMPOTENCY_POLICY_H

#include "google/cloud/aiplatform/v1/job_service.grpc.pb.h"
#include "google/cloud/location/locations.grpc.pb.h"
#include "google/cloud/idempotency.h"
#include "google/cloud/version.h"
#include "google/iam/v1/iam_policy.grpc.pb.h"
#include "google/longrunning/operations.grpc.pb.h"
#include <memory>

namespace google {
namespace cloud {
namespace aiplatform_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class JobServiceConnectionIdempotencyPolicy {
 public:
  virtual ~JobServiceConnectionIdempotencyPolicy();

  /// Create a new copy of this object.
  virtual std::unique_ptr<JobServiceConnectionIdempotencyPolicy> clone() const;

  virtual google::cloud::Idempotency CreateCustomJob(
      google::cloud::aiplatform::v1::CreateCustomJobRequest const& request);

  virtual google::cloud::Idempotency GetCustomJob(
      google::cloud::aiplatform::v1::GetCustomJobRequest const& request);

  virtual google::cloud::Idempotency ListCustomJobs(
      google::cloud::aiplatform::v1::ListCustomJobsRequest request);

  virtual google::cloud::Idempotency DeleteCustomJob(
      google::cloud::aiplatform::v1::DeleteCustomJobRequest const& request);

  virtual google::cloud::Idempotency CancelCustomJob(
      google::cloud::aiplatform::v1::CancelCustomJobRequest const& request);

  virtual google::cloud::Idempotency CreateDataLabelingJob(
      google::cloud::aiplatform::v1::CreateDataLabelingJobRequest const&
          request);

  virtual google::cloud::Idempotency GetDataLabelingJob(
      google::cloud::aiplatform::v1::GetDataLabelingJobRequest const& request);

  virtual google::cloud::Idempotency ListDataLabelingJobs(
      google::cloud::aiplatform::v1::ListDataLabelingJobsRequest request);

  virtual google::cloud::Idempotency DeleteDataLabelingJob(
      google::cloud::aiplatform::v1::DeleteDataLabelingJobRequest const&
          request);

  virtual google::cloud::Idempotency CancelDataLabelingJob(
      google::cloud::aiplatform::v1::CancelDataLabelingJobRequest const&
          request);

  virtual google::cloud::Idempotency CreateHyperparameterTuningJob(
      google::cloud::aiplatform::v1::CreateHyperparameterTuningJobRequest const&
          request);

  virtual google::cloud::Idempotency GetHyperparameterTuningJob(
      google::cloud::aiplatform::v1::GetHyperparameterTuningJobRequest const&
          request);

  virtual google::cloud::Idempotency ListHyperparameterTuningJobs(
      google::cloud::aiplatform::v1::ListHyperparameterTuningJobsRequest
          request);

  virtual google::cloud::Idempotency DeleteHyperparameterTuningJob(
      google::cloud::aiplatform::v1::DeleteHyperparameterTuningJobRequest const&
          request);

  virtual google::cloud::Idempotency CancelHyperparameterTuningJob(
      google::cloud::aiplatform::v1::CancelHyperparameterTuningJobRequest const&
          request);

  virtual google::cloud::Idempotency CreateNasJob(
      google::cloud::aiplatform::v1::CreateNasJobRequest const& request);

  virtual google::cloud::Idempotency GetNasJob(
      google::cloud::aiplatform::v1::GetNasJobRequest const& request);

  virtual google::cloud::Idempotency ListNasJobs(
      google::cloud::aiplatform::v1::ListNasJobsRequest request);

  virtual google::cloud::Idempotency DeleteNasJob(
      google::cloud::aiplatform::v1::DeleteNasJobRequest const& request);

  virtual google::cloud::Idempotency CancelNasJob(
      google::cloud::aiplatform::v1::CancelNasJobRequest const& request);

  virtual google::cloud::Idempotency GetNasTrialDetail(
      google::cloud::aiplatform::v1::GetNasTrialDetailRequest const& request);

  virtual google::cloud::Idempotency ListNasTrialDetails(
      google::cloud::aiplatform::v1::ListNasTrialDetailsRequest request);

  virtual google::cloud::Idempotency CreateBatchPredictionJob(
      google::cloud::aiplatform::v1::CreateBatchPredictionJobRequest const&
          request);

  virtual google::cloud::Idempotency GetBatchPredictionJob(
      google::cloud::aiplatform::v1::GetBatchPredictionJobRequest const&
          request);

  virtual google::cloud::Idempotency ListBatchPredictionJobs(
      google::cloud::aiplatform::v1::ListBatchPredictionJobsRequest request);

  virtual google::cloud::Idempotency DeleteBatchPredictionJob(
      google::cloud::aiplatform::v1::DeleteBatchPredictionJobRequest const&
          request);

  virtual google::cloud::Idempotency CancelBatchPredictionJob(
      google::cloud::aiplatform::v1::CancelBatchPredictionJobRequest const&
          request);

  virtual google::cloud::Idempotency CreateModelDeploymentMonitoringJob(
      google::cloud::aiplatform::v1::
          CreateModelDeploymentMonitoringJobRequest const& request);

  virtual google::cloud::Idempotency
  SearchModelDeploymentMonitoringStatsAnomalies(
      google::cloud::aiplatform::v1::
          SearchModelDeploymentMonitoringStatsAnomaliesRequest request);

  virtual google::cloud::Idempotency GetModelDeploymentMonitoringJob(
      google::cloud::aiplatform::v1::
          GetModelDeploymentMonitoringJobRequest const& request);

  virtual google::cloud::Idempotency ListModelDeploymentMonitoringJobs(
      google::cloud::aiplatform::v1::ListModelDeploymentMonitoringJobsRequest
          request);

  virtual google::cloud::Idempotency UpdateModelDeploymentMonitoringJob(
      google::cloud::aiplatform::v1::
          UpdateModelDeploymentMonitoringJobRequest const& request);

  virtual google::cloud::Idempotency DeleteModelDeploymentMonitoringJob(
      google::cloud::aiplatform::v1::
          DeleteModelDeploymentMonitoringJobRequest const& request);

  virtual google::cloud::Idempotency PauseModelDeploymentMonitoringJob(
      google::cloud::aiplatform::v1::
          PauseModelDeploymentMonitoringJobRequest const& request);

  virtual google::cloud::Idempotency ResumeModelDeploymentMonitoringJob(
      google::cloud::aiplatform::v1::
          ResumeModelDeploymentMonitoringJobRequest const& request);

  virtual google::cloud::Idempotency ListLocations(
      google::cloud::location::ListLocationsRequest request);

  virtual google::cloud::Idempotency GetLocation(
      google::cloud::location::GetLocationRequest const& request);

  virtual google::cloud::Idempotency SetIamPolicy(
      google::iam::v1::SetIamPolicyRequest const& request);

  virtual google::cloud::Idempotency GetIamPolicy(
      google::iam::v1::GetIamPolicyRequest const& request);

  virtual google::cloud::Idempotency TestIamPermissions(
      google::iam::v1::TestIamPermissionsRequest const& request);

  virtual google::cloud::Idempotency ListOperations(
      google::longrunning::ListOperationsRequest request);

  virtual google::cloud::Idempotency GetOperation(
      google::longrunning::GetOperationRequest const& request);

  virtual google::cloud::Idempotency DeleteOperation(
      google::longrunning::DeleteOperationRequest const& request);

  virtual google::cloud::Idempotency CancelOperation(
      google::longrunning::CancelOperationRequest const& request);

  virtual google::cloud::Idempotency WaitOperation(
      google::longrunning::WaitOperationRequest const& request);
};

std::unique_ptr<JobServiceConnectionIdempotencyPolicy>
MakeDefaultJobServiceConnectionIdempotencyPolicy();

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace aiplatform_v1
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_AIPLATFORM_V1_JOB_CONNECTION_IDEMPOTENCY_POLICY_H
