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
// source: google/cloud/dataplex/v1/service.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DATAPLEX_V1_INTERNAL_DATAPLEX_CONNECTION_IMPL_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DATAPLEX_V1_INTERNAL_DATAPLEX_CONNECTION_IMPL_H

#include "google/cloud/dataplex/v1/dataplex_connection.h"
#include "google/cloud/dataplex/v1/dataplex_connection_idempotency_policy.h"
#include "google/cloud/dataplex/v1/dataplex_options.h"
#include "google/cloud/dataplex/v1/internal/dataplex_retry_traits.h"
#include "google/cloud/dataplex/v1/internal/dataplex_stub.h"
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
namespace dataplex_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class DataplexServiceConnectionImpl
    : public dataplex_v1::DataplexServiceConnection {
 public:
  ~DataplexServiceConnectionImpl() override = default;

  DataplexServiceConnectionImpl(
      std::unique_ptr<google::cloud::BackgroundThreads> background,
      std::shared_ptr<dataplex_v1_internal::DataplexServiceStub> stub,
      Options options);

  Options options() override { return options_; }

  future<StatusOr<google::cloud::dataplex::v1::Lake>> CreateLake(
      google::cloud::dataplex::v1::CreateLakeRequest const& request) override;

  StatusOr<google::longrunning::Operation> CreateLake(
      NoAwaitTag,
      google::cloud::dataplex::v1::CreateLakeRequest const& request) override;

  future<StatusOr<google::cloud::dataplex::v1::Lake>> CreateLake(
      google::longrunning::Operation const& operation) override;

  future<StatusOr<google::cloud::dataplex::v1::Lake>> UpdateLake(
      google::cloud::dataplex::v1::UpdateLakeRequest const& request) override;

  StatusOr<google::longrunning::Operation> UpdateLake(
      NoAwaitTag,
      google::cloud::dataplex::v1::UpdateLakeRequest const& request) override;

  future<StatusOr<google::cloud::dataplex::v1::Lake>> UpdateLake(
      google::longrunning::Operation const& operation) override;

  future<StatusOr<google::cloud::dataplex::v1::OperationMetadata>> DeleteLake(
      google::cloud::dataplex::v1::DeleteLakeRequest const& request) override;

  StatusOr<google::longrunning::Operation> DeleteLake(
      NoAwaitTag,
      google::cloud::dataplex::v1::DeleteLakeRequest const& request) override;

  future<StatusOr<google::cloud::dataplex::v1::OperationMetadata>> DeleteLake(
      google::longrunning::Operation const& operation) override;

  StreamRange<google::cloud::dataplex::v1::Lake> ListLakes(
      google::cloud::dataplex::v1::ListLakesRequest request) override;

  StatusOr<google::cloud::dataplex::v1::Lake> GetLake(
      google::cloud::dataplex::v1::GetLakeRequest const& request) override;

  StreamRange<google::cloud::dataplex::v1::Action> ListLakeActions(
      google::cloud::dataplex::v1::ListLakeActionsRequest request) override;

  future<StatusOr<google::cloud::dataplex::v1::Zone>> CreateZone(
      google::cloud::dataplex::v1::CreateZoneRequest const& request) override;

  StatusOr<google::longrunning::Operation> CreateZone(
      NoAwaitTag,
      google::cloud::dataplex::v1::CreateZoneRequest const& request) override;

  future<StatusOr<google::cloud::dataplex::v1::Zone>> CreateZone(
      google::longrunning::Operation const& operation) override;

  future<StatusOr<google::cloud::dataplex::v1::Zone>> UpdateZone(
      google::cloud::dataplex::v1::UpdateZoneRequest const& request) override;

  StatusOr<google::longrunning::Operation> UpdateZone(
      NoAwaitTag,
      google::cloud::dataplex::v1::UpdateZoneRequest const& request) override;

  future<StatusOr<google::cloud::dataplex::v1::Zone>> UpdateZone(
      google::longrunning::Operation const& operation) override;

  future<StatusOr<google::cloud::dataplex::v1::OperationMetadata>> DeleteZone(
      google::cloud::dataplex::v1::DeleteZoneRequest const& request) override;

  StatusOr<google::longrunning::Operation> DeleteZone(
      NoAwaitTag,
      google::cloud::dataplex::v1::DeleteZoneRequest const& request) override;

  future<StatusOr<google::cloud::dataplex::v1::OperationMetadata>> DeleteZone(
      google::longrunning::Operation const& operation) override;

  StreamRange<google::cloud::dataplex::v1::Zone> ListZones(
      google::cloud::dataplex::v1::ListZonesRequest request) override;

  StatusOr<google::cloud::dataplex::v1::Zone> GetZone(
      google::cloud::dataplex::v1::GetZoneRequest const& request) override;

  StreamRange<google::cloud::dataplex::v1::Action> ListZoneActions(
      google::cloud::dataplex::v1::ListZoneActionsRequest request) override;

  future<StatusOr<google::cloud::dataplex::v1::Asset>> CreateAsset(
      google::cloud::dataplex::v1::CreateAssetRequest const& request) override;

  StatusOr<google::longrunning::Operation> CreateAsset(
      NoAwaitTag,
      google::cloud::dataplex::v1::CreateAssetRequest const& request) override;

  future<StatusOr<google::cloud::dataplex::v1::Asset>> CreateAsset(
      google::longrunning::Operation const& operation) override;

  future<StatusOr<google::cloud::dataplex::v1::Asset>> UpdateAsset(
      google::cloud::dataplex::v1::UpdateAssetRequest const& request) override;

  StatusOr<google::longrunning::Operation> UpdateAsset(
      NoAwaitTag,
      google::cloud::dataplex::v1::UpdateAssetRequest const& request) override;

  future<StatusOr<google::cloud::dataplex::v1::Asset>> UpdateAsset(
      google::longrunning::Operation const& operation) override;

  future<StatusOr<google::cloud::dataplex::v1::OperationMetadata>> DeleteAsset(
      google::cloud::dataplex::v1::DeleteAssetRequest const& request) override;

  StatusOr<google::longrunning::Operation> DeleteAsset(
      NoAwaitTag,
      google::cloud::dataplex::v1::DeleteAssetRequest const& request) override;

  future<StatusOr<google::cloud::dataplex::v1::OperationMetadata>> DeleteAsset(
      google::longrunning::Operation const& operation) override;

  StreamRange<google::cloud::dataplex::v1::Asset> ListAssets(
      google::cloud::dataplex::v1::ListAssetsRequest request) override;

  StatusOr<google::cloud::dataplex::v1::Asset> GetAsset(
      google::cloud::dataplex::v1::GetAssetRequest const& request) override;

  StreamRange<google::cloud::dataplex::v1::Action> ListAssetActions(
      google::cloud::dataplex::v1::ListAssetActionsRequest request) override;

  future<StatusOr<google::cloud::dataplex::v1::Task>> CreateTask(
      google::cloud::dataplex::v1::CreateTaskRequest const& request) override;

  StatusOr<google::longrunning::Operation> CreateTask(
      NoAwaitTag,
      google::cloud::dataplex::v1::CreateTaskRequest const& request) override;

  future<StatusOr<google::cloud::dataplex::v1::Task>> CreateTask(
      google::longrunning::Operation const& operation) override;

  future<StatusOr<google::cloud::dataplex::v1::Task>> UpdateTask(
      google::cloud::dataplex::v1::UpdateTaskRequest const& request) override;

  StatusOr<google::longrunning::Operation> UpdateTask(
      NoAwaitTag,
      google::cloud::dataplex::v1::UpdateTaskRequest const& request) override;

  future<StatusOr<google::cloud::dataplex::v1::Task>> UpdateTask(
      google::longrunning::Operation const& operation) override;

  future<StatusOr<google::cloud::dataplex::v1::OperationMetadata>> DeleteTask(
      google::cloud::dataplex::v1::DeleteTaskRequest const& request) override;

  StatusOr<google::longrunning::Operation> DeleteTask(
      NoAwaitTag,
      google::cloud::dataplex::v1::DeleteTaskRequest const& request) override;

  future<StatusOr<google::cloud::dataplex::v1::OperationMetadata>> DeleteTask(
      google::longrunning::Operation const& operation) override;

  StreamRange<google::cloud::dataplex::v1::Task> ListTasks(
      google::cloud::dataplex::v1::ListTasksRequest request) override;

  StatusOr<google::cloud::dataplex::v1::Task> GetTask(
      google::cloud::dataplex::v1::GetTaskRequest const& request) override;

  StreamRange<google::cloud::dataplex::v1::Job> ListJobs(
      google::cloud::dataplex::v1::ListJobsRequest request) override;

  StatusOr<google::cloud::dataplex::v1::RunTaskResponse> RunTask(
      google::cloud::dataplex::v1::RunTaskRequest const& request) override;

  StatusOr<google::cloud::dataplex::v1::Job> GetJob(
      google::cloud::dataplex::v1::GetJobRequest const& request) override;

  Status CancelJob(
      google::cloud::dataplex::v1::CancelJobRequest const& request) override;

  future<StatusOr<google::cloud::dataplex::v1::Environment>> CreateEnvironment(
      google::cloud::dataplex::v1::CreateEnvironmentRequest const& request)
      override;

  StatusOr<google::longrunning::Operation> CreateEnvironment(
      NoAwaitTag,
      google::cloud::dataplex::v1::CreateEnvironmentRequest const& request)
      override;

  future<StatusOr<google::cloud::dataplex::v1::Environment>> CreateEnvironment(
      google::longrunning::Operation const& operation) override;

  future<StatusOr<google::cloud::dataplex::v1::Environment>> UpdateEnvironment(
      google::cloud::dataplex::v1::UpdateEnvironmentRequest const& request)
      override;

  StatusOr<google::longrunning::Operation> UpdateEnvironment(
      NoAwaitTag,
      google::cloud::dataplex::v1::UpdateEnvironmentRequest const& request)
      override;

  future<StatusOr<google::cloud::dataplex::v1::Environment>> UpdateEnvironment(
      google::longrunning::Operation const& operation) override;

  future<StatusOr<google::cloud::dataplex::v1::OperationMetadata>>
  DeleteEnvironment(google::cloud::dataplex::v1::DeleteEnvironmentRequest const&
                        request) override;

  StatusOr<google::longrunning::Operation> DeleteEnvironment(
      NoAwaitTag,
      google::cloud::dataplex::v1::DeleteEnvironmentRequest const& request)
      override;

  future<StatusOr<google::cloud::dataplex::v1::OperationMetadata>>
  DeleteEnvironment(google::longrunning::Operation const& operation) override;

  StreamRange<google::cloud::dataplex::v1::Environment> ListEnvironments(
      google::cloud::dataplex::v1::ListEnvironmentsRequest request) override;

  StatusOr<google::cloud::dataplex::v1::Environment> GetEnvironment(
      google::cloud::dataplex::v1::GetEnvironmentRequest const& request)
      override;

  StreamRange<google::cloud::dataplex::v1::Session> ListSessions(
      google::cloud::dataplex::v1::ListSessionsRequest request) override;

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

 private:
  std::unique_ptr<google::cloud::BackgroundThreads> background_;
  std::shared_ptr<dataplex_v1_internal::DataplexServiceStub> stub_;
  Options options_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace dataplex_v1_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DATAPLEX_V1_INTERNAL_DATAPLEX_CONNECTION_IMPL_H
