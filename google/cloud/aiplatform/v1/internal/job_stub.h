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

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_AIPLATFORM_V1_INTERNAL_JOB_STUB_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_AIPLATFORM_V1_INTERNAL_JOB_STUB_H

#include "google/cloud/completion_queue.h"
#include "google/cloud/future.h"
#include "google/cloud/options.h"
#include "google/cloud/status_or.h"
#include "google/cloud/version.h"
#include <google/cloud/aiplatform/v1/job_service.grpc.pb.h>
#include <google/cloud/location/locations.grpc.pb.h>
#include <google/iam/v1/iam_policy.grpc.pb.h>
#include <google/longrunning/operations.grpc.pb.h>
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace aiplatform_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class JobServiceStub {
 public:
  virtual ~JobServiceStub() = 0;

  virtual StatusOr<google::cloud::aiplatform::v1::CustomJob> CreateCustomJob(
      grpc::ClientContext& context, Options const& options,
      google::cloud::aiplatform::v1::CreateCustomJobRequest const& request) = 0;

  virtual StatusOr<google::cloud::aiplatform::v1::CustomJob> GetCustomJob(
      grpc::ClientContext& context, Options const& options,
      google::cloud::aiplatform::v1::GetCustomJobRequest const& request) = 0;

  virtual StatusOr<google::cloud::aiplatform::v1::ListCustomJobsResponse>
  ListCustomJobs(
      grpc::ClientContext& context, Options const& options,
      google::cloud::aiplatform::v1::ListCustomJobsRequest const& request) = 0;

  virtual future<StatusOr<google::longrunning::Operation>> AsyncDeleteCustomJob(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::aiplatform::v1::DeleteCustomJobRequest const& request) = 0;

  virtual StatusOr<google::longrunning::Operation> DeleteCustomJob(
      grpc::ClientContext& context, Options options,
      google::cloud::aiplatform::v1::DeleteCustomJobRequest const& request) = 0;

  virtual Status CancelCustomJob(
      grpc::ClientContext& context, Options const& options,
      google::cloud::aiplatform::v1::CancelCustomJobRequest const& request) = 0;

  virtual StatusOr<google::cloud::aiplatform::v1::DataLabelingJob>
  CreateDataLabelingJob(
      grpc::ClientContext& context, Options const& options,
      google::cloud::aiplatform::v1::CreateDataLabelingJobRequest const&
          request) = 0;

  virtual StatusOr<google::cloud::aiplatform::v1::DataLabelingJob>
  GetDataLabelingJob(
      grpc::ClientContext& context, Options const& options,
      google::cloud::aiplatform::v1::GetDataLabelingJobRequest const&
          request) = 0;

  virtual StatusOr<google::cloud::aiplatform::v1::ListDataLabelingJobsResponse>
  ListDataLabelingJobs(
      grpc::ClientContext& context, Options const& options,
      google::cloud::aiplatform::v1::ListDataLabelingJobsRequest const&
          request) = 0;

  virtual future<StatusOr<google::longrunning::Operation>>
  AsyncDeleteDataLabelingJob(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::aiplatform::v1::DeleteDataLabelingJobRequest const&
          request) = 0;

  virtual StatusOr<google::longrunning::Operation> DeleteDataLabelingJob(
      grpc::ClientContext& context, Options options,
      google::cloud::aiplatform::v1::DeleteDataLabelingJobRequest const&
          request) = 0;

  virtual Status CancelDataLabelingJob(
      grpc::ClientContext& context, Options const& options,
      google::cloud::aiplatform::v1::CancelDataLabelingJobRequest const&
          request) = 0;

  virtual StatusOr<google::cloud::aiplatform::v1::HyperparameterTuningJob>
  CreateHyperparameterTuningJob(
      grpc::ClientContext& context, Options const& options,
      google::cloud::aiplatform::v1::CreateHyperparameterTuningJobRequest const&
          request) = 0;

  virtual StatusOr<google::cloud::aiplatform::v1::HyperparameterTuningJob>
  GetHyperparameterTuningJob(
      grpc::ClientContext& context, Options const& options,
      google::cloud::aiplatform::v1::GetHyperparameterTuningJobRequest const&
          request) = 0;

  virtual StatusOr<
      google::cloud::aiplatform::v1::ListHyperparameterTuningJobsResponse>
  ListHyperparameterTuningJobs(
      grpc::ClientContext& context, Options const& options,
      google::cloud::aiplatform::v1::ListHyperparameterTuningJobsRequest const&
          request) = 0;

  virtual future<StatusOr<google::longrunning::Operation>>
  AsyncDeleteHyperparameterTuningJob(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::aiplatform::v1::DeleteHyperparameterTuningJobRequest const&
          request) = 0;

  virtual StatusOr<google::longrunning::Operation>
  DeleteHyperparameterTuningJob(
      grpc::ClientContext& context, Options options,
      google::cloud::aiplatform::v1::DeleteHyperparameterTuningJobRequest const&
          request) = 0;

  virtual Status CancelHyperparameterTuningJob(
      grpc::ClientContext& context, Options const& options,
      google::cloud::aiplatform::v1::CancelHyperparameterTuningJobRequest const&
          request) = 0;

  virtual StatusOr<google::cloud::aiplatform::v1::NasJob> CreateNasJob(
      grpc::ClientContext& context, Options const& options,
      google::cloud::aiplatform::v1::CreateNasJobRequest const& request) = 0;

  virtual StatusOr<google::cloud::aiplatform::v1::NasJob> GetNasJob(
      grpc::ClientContext& context, Options const& options,
      google::cloud::aiplatform::v1::GetNasJobRequest const& request) = 0;

  virtual StatusOr<google::cloud::aiplatform::v1::ListNasJobsResponse>
  ListNasJobs(
      grpc::ClientContext& context, Options const& options,
      google::cloud::aiplatform::v1::ListNasJobsRequest const& request) = 0;

  virtual future<StatusOr<google::longrunning::Operation>> AsyncDeleteNasJob(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::aiplatform::v1::DeleteNasJobRequest const& request) = 0;

  virtual StatusOr<google::longrunning::Operation> DeleteNasJob(
      grpc::ClientContext& context, Options options,
      google::cloud::aiplatform::v1::DeleteNasJobRequest const& request) = 0;

  virtual Status CancelNasJob(
      grpc::ClientContext& context, Options const& options,
      google::cloud::aiplatform::v1::CancelNasJobRequest const& request) = 0;

  virtual StatusOr<google::cloud::aiplatform::v1::NasTrialDetail>
  GetNasTrialDetail(
      grpc::ClientContext& context, Options const& options,
      google::cloud::aiplatform::v1::GetNasTrialDetailRequest const&
          request) = 0;

  virtual StatusOr<google::cloud::aiplatform::v1::ListNasTrialDetailsResponse>
  ListNasTrialDetails(
      grpc::ClientContext& context, Options const& options,
      google::cloud::aiplatform::v1::ListNasTrialDetailsRequest const&
          request) = 0;

  virtual StatusOr<google::cloud::aiplatform::v1::BatchPredictionJob>
  CreateBatchPredictionJob(
      grpc::ClientContext& context, Options const& options,
      google::cloud::aiplatform::v1::CreateBatchPredictionJobRequest const&
          request) = 0;

  virtual StatusOr<google::cloud::aiplatform::v1::BatchPredictionJob>
  GetBatchPredictionJob(
      grpc::ClientContext& context, Options const& options,
      google::cloud::aiplatform::v1::GetBatchPredictionJobRequest const&
          request) = 0;

  virtual StatusOr<
      google::cloud::aiplatform::v1::ListBatchPredictionJobsResponse>
  ListBatchPredictionJobs(
      grpc::ClientContext& context, Options const& options,
      google::cloud::aiplatform::v1::ListBatchPredictionJobsRequest const&
          request) = 0;

  virtual future<StatusOr<google::longrunning::Operation>>
  AsyncDeleteBatchPredictionJob(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::aiplatform::v1::DeleteBatchPredictionJobRequest const&
          request) = 0;

  virtual StatusOr<google::longrunning::Operation> DeleteBatchPredictionJob(
      grpc::ClientContext& context, Options options,
      google::cloud::aiplatform::v1::DeleteBatchPredictionJobRequest const&
          request) = 0;

  virtual Status CancelBatchPredictionJob(
      grpc::ClientContext& context, Options const& options,
      google::cloud::aiplatform::v1::CancelBatchPredictionJobRequest const&
          request) = 0;

  virtual StatusOr<google::cloud::aiplatform::v1::ModelDeploymentMonitoringJob>
  CreateModelDeploymentMonitoringJob(
      grpc::ClientContext& context, Options const& options,
      google::cloud::aiplatform::v1::
          CreateModelDeploymentMonitoringJobRequest const& request) = 0;

  virtual StatusOr<google::cloud::aiplatform::v1::
                       SearchModelDeploymentMonitoringStatsAnomaliesResponse>
  SearchModelDeploymentMonitoringStatsAnomalies(
      grpc::ClientContext& context, Options const& options,
      google::cloud::aiplatform::v1::
          SearchModelDeploymentMonitoringStatsAnomaliesRequest const&
              request) = 0;

  virtual StatusOr<google::cloud::aiplatform::v1::ModelDeploymentMonitoringJob>
  GetModelDeploymentMonitoringJob(
      grpc::ClientContext& context, Options const& options,
      google::cloud::aiplatform::v1::
          GetModelDeploymentMonitoringJobRequest const& request) = 0;

  virtual StatusOr<
      google::cloud::aiplatform::v1::ListModelDeploymentMonitoringJobsResponse>
  ListModelDeploymentMonitoringJobs(
      grpc::ClientContext& context, Options const& options,
      google::cloud::aiplatform::v1::
          ListModelDeploymentMonitoringJobsRequest const& request) = 0;

  virtual future<StatusOr<google::longrunning::Operation>>
  AsyncUpdateModelDeploymentMonitoringJob(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::aiplatform::v1::
          UpdateModelDeploymentMonitoringJobRequest const& request) = 0;

  virtual StatusOr<google::longrunning::Operation>
  UpdateModelDeploymentMonitoringJob(
      grpc::ClientContext& context, Options options,
      google::cloud::aiplatform::v1::
          UpdateModelDeploymentMonitoringJobRequest const& request) = 0;

  virtual future<StatusOr<google::longrunning::Operation>>
  AsyncDeleteModelDeploymentMonitoringJob(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::aiplatform::v1::
          DeleteModelDeploymentMonitoringJobRequest const& request) = 0;

  virtual StatusOr<google::longrunning::Operation>
  DeleteModelDeploymentMonitoringJob(
      grpc::ClientContext& context, Options options,
      google::cloud::aiplatform::v1::
          DeleteModelDeploymentMonitoringJobRequest const& request) = 0;

  virtual Status PauseModelDeploymentMonitoringJob(
      grpc::ClientContext& context, Options const& options,
      google::cloud::aiplatform::v1::
          PauseModelDeploymentMonitoringJobRequest const& request) = 0;

  virtual Status ResumeModelDeploymentMonitoringJob(
      grpc::ClientContext& context, Options const& options,
      google::cloud::aiplatform::v1::
          ResumeModelDeploymentMonitoringJobRequest const& request) = 0;

  virtual StatusOr<google::cloud::location::ListLocationsResponse>
  ListLocations(
      grpc::ClientContext& context, Options const& options,
      google::cloud::location::ListLocationsRequest const& request) = 0;

  virtual StatusOr<google::cloud::location::Location> GetLocation(
      grpc::ClientContext& context, Options const& options,
      google::cloud::location::GetLocationRequest const& request) = 0;

  virtual StatusOr<google::iam::v1::Policy> SetIamPolicy(
      grpc::ClientContext& context, Options const& options,
      google::iam::v1::SetIamPolicyRequest const& request) = 0;

  virtual StatusOr<google::iam::v1::Policy> GetIamPolicy(
      grpc::ClientContext& context, Options const& options,
      google::iam::v1::GetIamPolicyRequest const& request) = 0;

  virtual StatusOr<google::iam::v1::TestIamPermissionsResponse>
  TestIamPermissions(
      grpc::ClientContext& context, Options const& options,
      google::iam::v1::TestIamPermissionsRequest const& request) = 0;

  virtual StatusOr<google::longrunning::ListOperationsResponse> ListOperations(
      grpc::ClientContext& context, Options const& options,
      google::longrunning::ListOperationsRequest const& request) = 0;

  virtual StatusOr<google::longrunning::Operation> GetOperation(
      grpc::ClientContext& context, Options const& options,
      google::longrunning::GetOperationRequest const& request) = 0;

  virtual Status DeleteOperation(
      grpc::ClientContext& context, Options const& options,
      google::longrunning::DeleteOperationRequest const& request) = 0;

  virtual Status CancelOperation(
      grpc::ClientContext& context, Options const& options,
      google::longrunning::CancelOperationRequest const& request) = 0;

  virtual StatusOr<google::longrunning::Operation> WaitOperation(
      grpc::ClientContext& context, Options const& options,
      google::longrunning::WaitOperationRequest const& request) = 0;

  virtual future<StatusOr<google::longrunning::Operation>> AsyncGetOperation(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::longrunning::GetOperationRequest const& request) = 0;

  virtual future<Status> AsyncCancelOperation(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::longrunning::CancelOperationRequest const& request) = 0;
};

class DefaultJobServiceStub : public JobServiceStub {
 public:
  DefaultJobServiceStub(
      std::unique_ptr<google::cloud::aiplatform::v1::JobService::StubInterface>
          grpc_stub,
      std::unique_ptr<google::longrunning::Operations::StubInterface>
          operations_stub,
      std::unique_ptr<google::iam::v1::IAMPolicy::StubInterface> iampolicy_stub,
      std::unique_ptr<google::cloud::location::Locations::StubInterface>
          locations_stub,
      std::unique_ptr<google::longrunning::Operations::StubInterface>
          operations)
      : grpc_stub_(std::move(grpc_stub)),
        operations_stub_(std::move(operations_stub)),
        iampolicy_stub_(std::move(iampolicy_stub)),
        locations_stub_(std::move(locations_stub)),
        operations_(std::move(operations)) {}

  StatusOr<google::cloud::aiplatform::v1::CustomJob> CreateCustomJob(
      grpc::ClientContext& context, Options const& options,
      google::cloud::aiplatform::v1::CreateCustomJobRequest const& request)
      override;

  StatusOr<google::cloud::aiplatform::v1::CustomJob> GetCustomJob(
      grpc::ClientContext& context, Options const& options,
      google::cloud::aiplatform::v1::GetCustomJobRequest const& request)
      override;

  StatusOr<google::cloud::aiplatform::v1::ListCustomJobsResponse>
  ListCustomJobs(grpc::ClientContext& context, Options const& options,
                 google::cloud::aiplatform::v1::ListCustomJobsRequest const&
                     request) override;

  future<StatusOr<google::longrunning::Operation>> AsyncDeleteCustomJob(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::aiplatform::v1::DeleteCustomJobRequest const& request)
      override;

  StatusOr<google::longrunning::Operation> DeleteCustomJob(
      grpc::ClientContext& context, Options options,
      google::cloud::aiplatform::v1::DeleteCustomJobRequest const& request)
      override;

  Status CancelCustomJob(
      grpc::ClientContext& context, Options const& options,
      google::cloud::aiplatform::v1::CancelCustomJobRequest const& request)
      override;

  StatusOr<google::cloud::aiplatform::v1::DataLabelingJob>
  CreateDataLabelingJob(
      grpc::ClientContext& context, Options const& options,
      google::cloud::aiplatform::v1::CreateDataLabelingJobRequest const&
          request) override;

  StatusOr<google::cloud::aiplatform::v1::DataLabelingJob> GetDataLabelingJob(
      grpc::ClientContext& context, Options const& options,
      google::cloud::aiplatform::v1::GetDataLabelingJobRequest const& request)
      override;

  StatusOr<google::cloud::aiplatform::v1::ListDataLabelingJobsResponse>
  ListDataLabelingJobs(
      grpc::ClientContext& context, Options const& options,
      google::cloud::aiplatform::v1::ListDataLabelingJobsRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncDeleteDataLabelingJob(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::aiplatform::v1::DeleteDataLabelingJobRequest const&
          request) override;

  StatusOr<google::longrunning::Operation> DeleteDataLabelingJob(
      grpc::ClientContext& context, Options options,
      google::cloud::aiplatform::v1::DeleteDataLabelingJobRequest const&
          request) override;

  Status CancelDataLabelingJob(
      grpc::ClientContext& context, Options const& options,
      google::cloud::aiplatform::v1::CancelDataLabelingJobRequest const&
          request) override;

  StatusOr<google::cloud::aiplatform::v1::HyperparameterTuningJob>
  CreateHyperparameterTuningJob(
      grpc::ClientContext& context, Options const& options,
      google::cloud::aiplatform::v1::CreateHyperparameterTuningJobRequest const&
          request) override;

  StatusOr<google::cloud::aiplatform::v1::HyperparameterTuningJob>
  GetHyperparameterTuningJob(
      grpc::ClientContext& context, Options const& options,
      google::cloud::aiplatform::v1::GetHyperparameterTuningJobRequest const&
          request) override;

  StatusOr<google::cloud::aiplatform::v1::ListHyperparameterTuningJobsResponse>
  ListHyperparameterTuningJobs(
      grpc::ClientContext& context, Options const& options,
      google::cloud::aiplatform::v1::ListHyperparameterTuningJobsRequest const&
          request) override;

  future<StatusOr<google::longrunning::Operation>>
  AsyncDeleteHyperparameterTuningJob(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::aiplatform::v1::DeleteHyperparameterTuningJobRequest const&
          request) override;

  StatusOr<google::longrunning::Operation> DeleteHyperparameterTuningJob(
      grpc::ClientContext& context, Options options,
      google::cloud::aiplatform::v1::DeleteHyperparameterTuningJobRequest const&
          request) override;

  Status CancelHyperparameterTuningJob(
      grpc::ClientContext& context, Options const& options,
      google::cloud::aiplatform::v1::CancelHyperparameterTuningJobRequest const&
          request) override;

  StatusOr<google::cloud::aiplatform::v1::NasJob> CreateNasJob(
      grpc::ClientContext& context, Options const& options,
      google::cloud::aiplatform::v1::CreateNasJobRequest const& request)
      override;

  StatusOr<google::cloud::aiplatform::v1::NasJob> GetNasJob(
      grpc::ClientContext& context, Options const& options,
      google::cloud::aiplatform::v1::GetNasJobRequest const& request) override;

  StatusOr<google::cloud::aiplatform::v1::ListNasJobsResponse> ListNasJobs(
      grpc::ClientContext& context, Options const& options,
      google::cloud::aiplatform::v1::ListNasJobsRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncDeleteNasJob(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::aiplatform::v1::DeleteNasJobRequest const& request)
      override;

  StatusOr<google::longrunning::Operation> DeleteNasJob(
      grpc::ClientContext& context, Options options,
      google::cloud::aiplatform::v1::DeleteNasJobRequest const& request)
      override;

  Status CancelNasJob(grpc::ClientContext& context, Options const& options,
                      google::cloud::aiplatform::v1::CancelNasJobRequest const&
                          request) override;

  StatusOr<google::cloud::aiplatform::v1::NasTrialDetail> GetNasTrialDetail(
      grpc::ClientContext& context, Options const& options,
      google::cloud::aiplatform::v1::GetNasTrialDetailRequest const& request)
      override;

  StatusOr<google::cloud::aiplatform::v1::ListNasTrialDetailsResponse>
  ListNasTrialDetails(
      grpc::ClientContext& context, Options const& options,
      google::cloud::aiplatform::v1::ListNasTrialDetailsRequest const& request)
      override;

  StatusOr<google::cloud::aiplatform::v1::BatchPredictionJob>
  CreateBatchPredictionJob(
      grpc::ClientContext& context, Options const& options,
      google::cloud::aiplatform::v1::CreateBatchPredictionJobRequest const&
          request) override;

  StatusOr<google::cloud::aiplatform::v1::BatchPredictionJob>
  GetBatchPredictionJob(
      grpc::ClientContext& context, Options const& options,
      google::cloud::aiplatform::v1::GetBatchPredictionJobRequest const&
          request) override;

  StatusOr<google::cloud::aiplatform::v1::ListBatchPredictionJobsResponse>
  ListBatchPredictionJobs(
      grpc::ClientContext& context, Options const& options,
      google::cloud::aiplatform::v1::ListBatchPredictionJobsRequest const&
          request) override;

  future<StatusOr<google::longrunning::Operation>>
  AsyncDeleteBatchPredictionJob(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::aiplatform::v1::DeleteBatchPredictionJobRequest const&
          request) override;

  StatusOr<google::longrunning::Operation> DeleteBatchPredictionJob(
      grpc::ClientContext& context, Options options,
      google::cloud::aiplatform::v1::DeleteBatchPredictionJobRequest const&
          request) override;

  Status CancelBatchPredictionJob(
      grpc::ClientContext& context, Options const& options,
      google::cloud::aiplatform::v1::CancelBatchPredictionJobRequest const&
          request) override;

  StatusOr<google::cloud::aiplatform::v1::ModelDeploymentMonitoringJob>
  CreateModelDeploymentMonitoringJob(
      grpc::ClientContext& context, Options const& options,
      google::cloud::aiplatform::v1::
          CreateModelDeploymentMonitoringJobRequest const& request) override;

  StatusOr<google::cloud::aiplatform::v1::
               SearchModelDeploymentMonitoringStatsAnomaliesResponse>
  SearchModelDeploymentMonitoringStatsAnomalies(
      grpc::ClientContext& context, Options const& options,
      google::cloud::aiplatform::v1::
          SearchModelDeploymentMonitoringStatsAnomaliesRequest const& request)
      override;

  StatusOr<google::cloud::aiplatform::v1::ModelDeploymentMonitoringJob>
  GetModelDeploymentMonitoringJob(
      grpc::ClientContext& context, Options const& options,
      google::cloud::aiplatform::v1::
          GetModelDeploymentMonitoringJobRequest const& request) override;

  StatusOr<
      google::cloud::aiplatform::v1::ListModelDeploymentMonitoringJobsResponse>
  ListModelDeploymentMonitoringJobs(
      grpc::ClientContext& context, Options const& options,
      google::cloud::aiplatform::v1::
          ListModelDeploymentMonitoringJobsRequest const& request) override;

  future<StatusOr<google::longrunning::Operation>>
  AsyncUpdateModelDeploymentMonitoringJob(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::aiplatform::v1::
          UpdateModelDeploymentMonitoringJobRequest const& request) override;

  StatusOr<google::longrunning::Operation> UpdateModelDeploymentMonitoringJob(
      grpc::ClientContext& context, Options options,
      google::cloud::aiplatform::v1::
          UpdateModelDeploymentMonitoringJobRequest const& request) override;

  future<StatusOr<google::longrunning::Operation>>
  AsyncDeleteModelDeploymentMonitoringJob(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::aiplatform::v1::
          DeleteModelDeploymentMonitoringJobRequest const& request) override;

  StatusOr<google::longrunning::Operation> DeleteModelDeploymentMonitoringJob(
      grpc::ClientContext& context, Options options,
      google::cloud::aiplatform::v1::
          DeleteModelDeploymentMonitoringJobRequest const& request) override;

  Status PauseModelDeploymentMonitoringJob(
      grpc::ClientContext& context, Options const& options,
      google::cloud::aiplatform::v1::
          PauseModelDeploymentMonitoringJobRequest const& request) override;

  Status ResumeModelDeploymentMonitoringJob(
      grpc::ClientContext& context, Options const& options,
      google::cloud::aiplatform::v1::
          ResumeModelDeploymentMonitoringJobRequest const& request) override;

  StatusOr<google::cloud::location::ListLocationsResponse> ListLocations(
      grpc::ClientContext& context, Options const& options,
      google::cloud::location::ListLocationsRequest const& request) override;

  StatusOr<google::cloud::location::Location> GetLocation(
      grpc::ClientContext& context, Options const& options,
      google::cloud::location::GetLocationRequest const& request) override;

  StatusOr<google::iam::v1::Policy> SetIamPolicy(
      grpc::ClientContext& context, Options const& options,
      google::iam::v1::SetIamPolicyRequest const& request) override;

  StatusOr<google::iam::v1::Policy> GetIamPolicy(
      grpc::ClientContext& context, Options const& options,
      google::iam::v1::GetIamPolicyRequest const& request) override;

  StatusOr<google::iam::v1::TestIamPermissionsResponse> TestIamPermissions(
      grpc::ClientContext& context, Options const& options,
      google::iam::v1::TestIamPermissionsRequest const& request) override;

  StatusOr<google::longrunning::ListOperationsResponse> ListOperations(
      grpc::ClientContext& context, Options const& options,
      google::longrunning::ListOperationsRequest const& request) override;

  StatusOr<google::longrunning::Operation> GetOperation(
      grpc::ClientContext& context, Options const& options,
      google::longrunning::GetOperationRequest const& request) override;

  Status DeleteOperation(
      grpc::ClientContext& context, Options const& options,
      google::longrunning::DeleteOperationRequest const& request) override;

  Status CancelOperation(
      grpc::ClientContext& context, Options const& options,
      google::longrunning::CancelOperationRequest const& request) override;

  StatusOr<google::longrunning::Operation> WaitOperation(
      grpc::ClientContext& context, Options const& options,
      google::longrunning::WaitOperationRequest const& request) override;

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
  std::unique_ptr<google::cloud::aiplatform::v1::JobService::StubInterface>
      grpc_stub_;
  std::unique_ptr<google::longrunning::Operations::StubInterface>
      operations_stub_;
  std::unique_ptr<google::iam::v1::IAMPolicy::StubInterface> iampolicy_stub_;
  std::unique_ptr<google::cloud::location::Locations::StubInterface>
      locations_stub_;
  std::unique_ptr<google::longrunning::Operations::StubInterface> operations_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace aiplatform_v1_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_AIPLATFORM_V1_INTERNAL_JOB_STUB_H
