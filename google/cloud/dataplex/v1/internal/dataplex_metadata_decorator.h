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

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DATAPLEX_V1_INTERNAL_DATAPLEX_METADATA_DECORATOR_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DATAPLEX_V1_INTERNAL_DATAPLEX_METADATA_DECORATOR_H

#include "google/cloud/dataplex/v1/internal/dataplex_stub.h"
#include "google/cloud/options.h"
#include "google/cloud/version.h"
#include <google/longrunning/operations.grpc.pb.h>
#include <map>
#include <memory>
#include <string>

namespace google {
namespace cloud {
namespace dataplex_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class DataplexServiceMetadata : public DataplexServiceStub {
 public:
  ~DataplexServiceMetadata() override = default;
  DataplexServiceMetadata(
      std::shared_ptr<DataplexServiceStub> child,
      std::multimap<std::string, std::string> fixed_metadata,
      std::string api_client_header = "");

  future<StatusOr<google::longrunning::Operation>> AsyncCreateLake(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::dataplex::v1::CreateLakeRequest const& request) override;

  StatusOr<google::longrunning::Operation> CreateLake(
      grpc::ClientContext& context, Options options,
      google::cloud::dataplex::v1::CreateLakeRequest const& request) override;

  future<StatusOr<google::longrunning::Operation>> AsyncUpdateLake(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::dataplex::v1::UpdateLakeRequest const& request) override;

  StatusOr<google::longrunning::Operation> UpdateLake(
      grpc::ClientContext& context, Options options,
      google::cloud::dataplex::v1::UpdateLakeRequest const& request) override;

  future<StatusOr<google::longrunning::Operation>> AsyncDeleteLake(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::dataplex::v1::DeleteLakeRequest const& request) override;

  StatusOr<google::longrunning::Operation> DeleteLake(
      grpc::ClientContext& context, Options options,
      google::cloud::dataplex::v1::DeleteLakeRequest const& request) override;

  StatusOr<google::cloud::dataplex::v1::ListLakesResponse> ListLakes(
      grpc::ClientContext& context, Options const& options,
      google::cloud::dataplex::v1::ListLakesRequest const& request) override;

  StatusOr<google::cloud::dataplex::v1::Lake> GetLake(
      grpc::ClientContext& context, Options const& options,
      google::cloud::dataplex::v1::GetLakeRequest const& request) override;

  StatusOr<google::cloud::dataplex::v1::ListActionsResponse> ListLakeActions(
      grpc::ClientContext& context, Options const& options,
      google::cloud::dataplex::v1::ListLakeActionsRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncCreateZone(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::dataplex::v1::CreateZoneRequest const& request) override;

  StatusOr<google::longrunning::Operation> CreateZone(
      grpc::ClientContext& context, Options options,
      google::cloud::dataplex::v1::CreateZoneRequest const& request) override;

  future<StatusOr<google::longrunning::Operation>> AsyncUpdateZone(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::dataplex::v1::UpdateZoneRequest const& request) override;

  StatusOr<google::longrunning::Operation> UpdateZone(
      grpc::ClientContext& context, Options options,
      google::cloud::dataplex::v1::UpdateZoneRequest const& request) override;

  future<StatusOr<google::longrunning::Operation>> AsyncDeleteZone(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::dataplex::v1::DeleteZoneRequest const& request) override;

  StatusOr<google::longrunning::Operation> DeleteZone(
      grpc::ClientContext& context, Options options,
      google::cloud::dataplex::v1::DeleteZoneRequest const& request) override;

  StatusOr<google::cloud::dataplex::v1::ListZonesResponse> ListZones(
      grpc::ClientContext& context, Options const& options,
      google::cloud::dataplex::v1::ListZonesRequest const& request) override;

  StatusOr<google::cloud::dataplex::v1::Zone> GetZone(
      grpc::ClientContext& context, Options const& options,
      google::cloud::dataplex::v1::GetZoneRequest const& request) override;

  StatusOr<google::cloud::dataplex::v1::ListActionsResponse> ListZoneActions(
      grpc::ClientContext& context, Options const& options,
      google::cloud::dataplex::v1::ListZoneActionsRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncCreateAsset(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::dataplex::v1::CreateAssetRequest const& request) override;

  StatusOr<google::longrunning::Operation> CreateAsset(
      grpc::ClientContext& context, Options options,
      google::cloud::dataplex::v1::CreateAssetRequest const& request) override;

  future<StatusOr<google::longrunning::Operation>> AsyncUpdateAsset(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::dataplex::v1::UpdateAssetRequest const& request) override;

  StatusOr<google::longrunning::Operation> UpdateAsset(
      grpc::ClientContext& context, Options options,
      google::cloud::dataplex::v1::UpdateAssetRequest const& request) override;

  future<StatusOr<google::longrunning::Operation>> AsyncDeleteAsset(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::dataplex::v1::DeleteAssetRequest const& request) override;

  StatusOr<google::longrunning::Operation> DeleteAsset(
      grpc::ClientContext& context, Options options,
      google::cloud::dataplex::v1::DeleteAssetRequest const& request) override;

  StatusOr<google::cloud::dataplex::v1::ListAssetsResponse> ListAssets(
      grpc::ClientContext& context, Options const& options,
      google::cloud::dataplex::v1::ListAssetsRequest const& request) override;

  StatusOr<google::cloud::dataplex::v1::Asset> GetAsset(
      grpc::ClientContext& context, Options const& options,
      google::cloud::dataplex::v1::GetAssetRequest const& request) override;

  StatusOr<google::cloud::dataplex::v1::ListActionsResponse> ListAssetActions(
      grpc::ClientContext& context, Options const& options,
      google::cloud::dataplex::v1::ListAssetActionsRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncCreateTask(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::dataplex::v1::CreateTaskRequest const& request) override;

  StatusOr<google::longrunning::Operation> CreateTask(
      grpc::ClientContext& context, Options options,
      google::cloud::dataplex::v1::CreateTaskRequest const& request) override;

  future<StatusOr<google::longrunning::Operation>> AsyncUpdateTask(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::dataplex::v1::UpdateTaskRequest const& request) override;

  StatusOr<google::longrunning::Operation> UpdateTask(
      grpc::ClientContext& context, Options options,
      google::cloud::dataplex::v1::UpdateTaskRequest const& request) override;

  future<StatusOr<google::longrunning::Operation>> AsyncDeleteTask(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::dataplex::v1::DeleteTaskRequest const& request) override;

  StatusOr<google::longrunning::Operation> DeleteTask(
      grpc::ClientContext& context, Options options,
      google::cloud::dataplex::v1::DeleteTaskRequest const& request) override;

  StatusOr<google::cloud::dataplex::v1::ListTasksResponse> ListTasks(
      grpc::ClientContext& context, Options const& options,
      google::cloud::dataplex::v1::ListTasksRequest const& request) override;

  StatusOr<google::cloud::dataplex::v1::Task> GetTask(
      grpc::ClientContext& context, Options const& options,
      google::cloud::dataplex::v1::GetTaskRequest const& request) override;

  StatusOr<google::cloud::dataplex::v1::ListJobsResponse> ListJobs(
      grpc::ClientContext& context, Options const& options,
      google::cloud::dataplex::v1::ListJobsRequest const& request) override;

  StatusOr<google::cloud::dataplex::v1::RunTaskResponse> RunTask(
      grpc::ClientContext& context, Options const& options,
      google::cloud::dataplex::v1::RunTaskRequest const& request) override;

  StatusOr<google::cloud::dataplex::v1::Job> GetJob(
      grpc::ClientContext& context, Options const& options,
      google::cloud::dataplex::v1::GetJobRequest const& request) override;

  Status CancelJob(
      grpc::ClientContext& context, Options const& options,
      google::cloud::dataplex::v1::CancelJobRequest const& request) override;

  future<StatusOr<google::longrunning::Operation>> AsyncCreateEnvironment(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::dataplex::v1::CreateEnvironmentRequest const& request)
      override;

  StatusOr<google::longrunning::Operation> CreateEnvironment(
      grpc::ClientContext& context, Options options,
      google::cloud::dataplex::v1::CreateEnvironmentRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncUpdateEnvironment(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::dataplex::v1::UpdateEnvironmentRequest const& request)
      override;

  StatusOr<google::longrunning::Operation> UpdateEnvironment(
      grpc::ClientContext& context, Options options,
      google::cloud::dataplex::v1::UpdateEnvironmentRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncDeleteEnvironment(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::dataplex::v1::DeleteEnvironmentRequest const& request)
      override;

  StatusOr<google::longrunning::Operation> DeleteEnvironment(
      grpc::ClientContext& context, Options options,
      google::cloud::dataplex::v1::DeleteEnvironmentRequest const& request)
      override;

  StatusOr<google::cloud::dataplex::v1::ListEnvironmentsResponse>
  ListEnvironments(grpc::ClientContext& context, Options const& options,
                   google::cloud::dataplex::v1::ListEnvironmentsRequest const&
                       request) override;

  StatusOr<google::cloud::dataplex::v1::Environment> GetEnvironment(
      grpc::ClientContext& context, Options const& options,
      google::cloud::dataplex::v1::GetEnvironmentRequest const& request)
      override;

  StatusOr<google::cloud::dataplex::v1::ListSessionsResponse> ListSessions(
      grpc::ClientContext& context, Options const& options,
      google::cloud::dataplex::v1::ListSessionsRequest const& request) override;

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
  void SetMetadata(grpc::ClientContext& context, Options const& options,
                   std::string const& request_params);
  void SetMetadata(grpc::ClientContext& context, Options const& options);

  std::shared_ptr<DataplexServiceStub> child_;
  std::multimap<std::string, std::string> fixed_metadata_;
  std::string api_client_header_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace dataplex_v1_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DATAPLEX_V1_INTERNAL_DATAPLEX_METADATA_DECORATOR_H
