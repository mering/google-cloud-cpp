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
// source: google/cloud/vmmigration/v1/vmmigration.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_VMMIGRATION_V1_INTERNAL_VM_MIGRATION_LOGGING_DECORATOR_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_VMMIGRATION_V1_INTERNAL_VM_MIGRATION_LOGGING_DECORATOR_H

#include "google/cloud/vmmigration/v1/internal/vm_migration_stub.h"
#include "google/cloud/tracing_options.h"
#include "google/cloud/version.h"
#include "google/longrunning/operations.grpc.pb.h"
#include <memory>
#include <set>
#include <string>

namespace google {
namespace cloud {
namespace vmmigration_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class VmMigrationLogging : public VmMigrationStub {
 public:
  ~VmMigrationLogging() override = default;
  VmMigrationLogging(std::shared_ptr<VmMigrationStub> child,
                     TracingOptions tracing_options,
                     std::set<std::string> const& components);

  StatusOr<google::cloud::vmmigration::v1::ListSourcesResponse> ListSources(
      grpc::ClientContext& context, Options const& options,
      google::cloud::vmmigration::v1::ListSourcesRequest const& request)
      override;

  StatusOr<google::cloud::vmmigration::v1::Source> GetSource(
      grpc::ClientContext& context, Options const& options,
      google::cloud::vmmigration::v1::GetSourceRequest const& request) override;

  future<StatusOr<google::longrunning::Operation>> AsyncCreateSource(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::vmmigration::v1::CreateSourceRequest const& request)
      override;

  StatusOr<google::longrunning::Operation> CreateSource(
      grpc::ClientContext& context, Options options,
      google::cloud::vmmigration::v1::CreateSourceRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncUpdateSource(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::vmmigration::v1::UpdateSourceRequest const& request)
      override;

  StatusOr<google::longrunning::Operation> UpdateSource(
      grpc::ClientContext& context, Options options,
      google::cloud::vmmigration::v1::UpdateSourceRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncDeleteSource(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::vmmigration::v1::DeleteSourceRequest const& request)
      override;

  StatusOr<google::longrunning::Operation> DeleteSource(
      grpc::ClientContext& context, Options options,
      google::cloud::vmmigration::v1::DeleteSourceRequest const& request)
      override;

  StatusOr<google::cloud::vmmigration::v1::FetchInventoryResponse>
  FetchInventory(grpc::ClientContext& context, Options const& options,
                 google::cloud::vmmigration::v1::FetchInventoryRequest const&
                     request) override;

  StatusOr<google::cloud::vmmigration::v1::ListUtilizationReportsResponse>
  ListUtilizationReports(
      grpc::ClientContext& context, Options const& options,
      google::cloud::vmmigration::v1::ListUtilizationReportsRequest const&
          request) override;

  StatusOr<google::cloud::vmmigration::v1::UtilizationReport>
  GetUtilizationReport(
      grpc::ClientContext& context, Options const& options,
      google::cloud::vmmigration::v1::GetUtilizationReportRequest const&
          request) override;

  future<StatusOr<google::longrunning::Operation>> AsyncCreateUtilizationReport(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::vmmigration::v1::CreateUtilizationReportRequest const&
          request) override;

  StatusOr<google::longrunning::Operation> CreateUtilizationReport(
      grpc::ClientContext& context, Options options,
      google::cloud::vmmigration::v1::CreateUtilizationReportRequest const&
          request) override;

  future<StatusOr<google::longrunning::Operation>> AsyncDeleteUtilizationReport(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::vmmigration::v1::DeleteUtilizationReportRequest const&
          request) override;

  StatusOr<google::longrunning::Operation> DeleteUtilizationReport(
      grpc::ClientContext& context, Options options,
      google::cloud::vmmigration::v1::DeleteUtilizationReportRequest const&
          request) override;

  StatusOr<google::cloud::vmmigration::v1::ListDatacenterConnectorsResponse>
  ListDatacenterConnectors(
      grpc::ClientContext& context, Options const& options,
      google::cloud::vmmigration::v1::ListDatacenterConnectorsRequest const&
          request) override;

  StatusOr<google::cloud::vmmigration::v1::DatacenterConnector>
  GetDatacenterConnector(
      grpc::ClientContext& context, Options const& options,
      google::cloud::vmmigration::v1::GetDatacenterConnectorRequest const&
          request) override;

  future<StatusOr<google::longrunning::Operation>>
  AsyncCreateDatacenterConnector(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::vmmigration::v1::CreateDatacenterConnectorRequest const&
          request) override;

  StatusOr<google::longrunning::Operation> CreateDatacenterConnector(
      grpc::ClientContext& context, Options options,
      google::cloud::vmmigration::v1::CreateDatacenterConnectorRequest const&
          request) override;

  future<StatusOr<google::longrunning::Operation>>
  AsyncDeleteDatacenterConnector(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::vmmigration::v1::DeleteDatacenterConnectorRequest const&
          request) override;

  StatusOr<google::longrunning::Operation> DeleteDatacenterConnector(
      grpc::ClientContext& context, Options options,
      google::cloud::vmmigration::v1::DeleteDatacenterConnectorRequest const&
          request) override;

  future<StatusOr<google::longrunning::Operation>> AsyncUpgradeAppliance(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::vmmigration::v1::UpgradeApplianceRequest const& request)
      override;

  StatusOr<google::longrunning::Operation> UpgradeAppliance(
      grpc::ClientContext& context, Options options,
      google::cloud::vmmigration::v1::UpgradeApplianceRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncCreateMigratingVm(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::vmmigration::v1::CreateMigratingVmRequest const& request)
      override;

  StatusOr<google::longrunning::Operation> CreateMigratingVm(
      grpc::ClientContext& context, Options options,
      google::cloud::vmmigration::v1::CreateMigratingVmRequest const& request)
      override;

  StatusOr<google::cloud::vmmigration::v1::ListMigratingVmsResponse>
  ListMigratingVms(
      grpc::ClientContext& context, Options const& options,
      google::cloud::vmmigration::v1::ListMigratingVmsRequest const& request)
      override;

  StatusOr<google::cloud::vmmigration::v1::MigratingVm> GetMigratingVm(
      grpc::ClientContext& context, Options const& options,
      google::cloud::vmmigration::v1::GetMigratingVmRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncUpdateMigratingVm(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::vmmigration::v1::UpdateMigratingVmRequest const& request)
      override;

  StatusOr<google::longrunning::Operation> UpdateMigratingVm(
      grpc::ClientContext& context, Options options,
      google::cloud::vmmigration::v1::UpdateMigratingVmRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncDeleteMigratingVm(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::vmmigration::v1::DeleteMigratingVmRequest const& request)
      override;

  StatusOr<google::longrunning::Operation> DeleteMigratingVm(
      grpc::ClientContext& context, Options options,
      google::cloud::vmmigration::v1::DeleteMigratingVmRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncStartMigration(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::vmmigration::v1::StartMigrationRequest const& request)
      override;

  StatusOr<google::longrunning::Operation> StartMigration(
      grpc::ClientContext& context, Options options,
      google::cloud::vmmigration::v1::StartMigrationRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncResumeMigration(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::vmmigration::v1::ResumeMigrationRequest const& request)
      override;

  StatusOr<google::longrunning::Operation> ResumeMigration(
      grpc::ClientContext& context, Options options,
      google::cloud::vmmigration::v1::ResumeMigrationRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncPauseMigration(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::vmmigration::v1::PauseMigrationRequest const& request)
      override;

  StatusOr<google::longrunning::Operation> PauseMigration(
      grpc::ClientContext& context, Options options,
      google::cloud::vmmigration::v1::PauseMigrationRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncFinalizeMigration(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::vmmigration::v1::FinalizeMigrationRequest const& request)
      override;

  StatusOr<google::longrunning::Operation> FinalizeMigration(
      grpc::ClientContext& context, Options options,
      google::cloud::vmmigration::v1::FinalizeMigrationRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncCreateCloneJob(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::vmmigration::v1::CreateCloneJobRequest const& request)
      override;

  StatusOr<google::longrunning::Operation> CreateCloneJob(
      grpc::ClientContext& context, Options options,
      google::cloud::vmmigration::v1::CreateCloneJobRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncCancelCloneJob(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::vmmigration::v1::CancelCloneJobRequest const& request)
      override;

  StatusOr<google::longrunning::Operation> CancelCloneJob(
      grpc::ClientContext& context, Options options,
      google::cloud::vmmigration::v1::CancelCloneJobRequest const& request)
      override;

  StatusOr<google::cloud::vmmigration::v1::ListCloneJobsResponse> ListCloneJobs(
      grpc::ClientContext& context, Options const& options,
      google::cloud::vmmigration::v1::ListCloneJobsRequest const& request)
      override;

  StatusOr<google::cloud::vmmigration::v1::CloneJob> GetCloneJob(
      grpc::ClientContext& context, Options const& options,
      google::cloud::vmmigration::v1::GetCloneJobRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncCreateCutoverJob(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::vmmigration::v1::CreateCutoverJobRequest const& request)
      override;

  StatusOr<google::longrunning::Operation> CreateCutoverJob(
      grpc::ClientContext& context, Options options,
      google::cloud::vmmigration::v1::CreateCutoverJobRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncCancelCutoverJob(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::vmmigration::v1::CancelCutoverJobRequest const& request)
      override;

  StatusOr<google::longrunning::Operation> CancelCutoverJob(
      grpc::ClientContext& context, Options options,
      google::cloud::vmmigration::v1::CancelCutoverJobRequest const& request)
      override;

  StatusOr<google::cloud::vmmigration::v1::ListCutoverJobsResponse>
  ListCutoverJobs(grpc::ClientContext& context, Options const& options,
                  google::cloud::vmmigration::v1::ListCutoverJobsRequest const&
                      request) override;

  StatusOr<google::cloud::vmmigration::v1::CutoverJob> GetCutoverJob(
      grpc::ClientContext& context, Options const& options,
      google::cloud::vmmigration::v1::GetCutoverJobRequest const& request)
      override;

  StatusOr<google::cloud::vmmigration::v1::ListGroupsResponse> ListGroups(
      grpc::ClientContext& context, Options const& options,
      google::cloud::vmmigration::v1::ListGroupsRequest const& request)
      override;

  StatusOr<google::cloud::vmmigration::v1::Group> GetGroup(
      grpc::ClientContext& context, Options const& options,
      google::cloud::vmmigration::v1::GetGroupRequest const& request) override;

  future<StatusOr<google::longrunning::Operation>> AsyncCreateGroup(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::vmmigration::v1::CreateGroupRequest const& request)
      override;

  StatusOr<google::longrunning::Operation> CreateGroup(
      grpc::ClientContext& context, Options options,
      google::cloud::vmmigration::v1::CreateGroupRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncUpdateGroup(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::vmmigration::v1::UpdateGroupRequest const& request)
      override;

  StatusOr<google::longrunning::Operation> UpdateGroup(
      grpc::ClientContext& context, Options options,
      google::cloud::vmmigration::v1::UpdateGroupRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncDeleteGroup(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::vmmigration::v1::DeleteGroupRequest const& request)
      override;

  StatusOr<google::longrunning::Operation> DeleteGroup(
      grpc::ClientContext& context, Options options,
      google::cloud::vmmigration::v1::DeleteGroupRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncAddGroupMigration(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::vmmigration::v1::AddGroupMigrationRequest const& request)
      override;

  StatusOr<google::longrunning::Operation> AddGroupMigration(
      grpc::ClientContext& context, Options options,
      google::cloud::vmmigration::v1::AddGroupMigrationRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncRemoveGroupMigration(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::vmmigration::v1::RemoveGroupMigrationRequest const&
          request) override;

  StatusOr<google::longrunning::Operation> RemoveGroupMigration(
      grpc::ClientContext& context, Options options,
      google::cloud::vmmigration::v1::RemoveGroupMigrationRequest const&
          request) override;

  StatusOr<google::cloud::vmmigration::v1::ListTargetProjectsResponse>
  ListTargetProjects(
      grpc::ClientContext& context, Options const& options,
      google::cloud::vmmigration::v1::ListTargetProjectsRequest const& request)
      override;

  StatusOr<google::cloud::vmmigration::v1::TargetProject> GetTargetProject(
      grpc::ClientContext& context, Options const& options,
      google::cloud::vmmigration::v1::GetTargetProjectRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncCreateTargetProject(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::vmmigration::v1::CreateTargetProjectRequest const& request)
      override;

  StatusOr<google::longrunning::Operation> CreateTargetProject(
      grpc::ClientContext& context, Options options,
      google::cloud::vmmigration::v1::CreateTargetProjectRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncUpdateTargetProject(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::vmmigration::v1::UpdateTargetProjectRequest const& request)
      override;

  StatusOr<google::longrunning::Operation> UpdateTargetProject(
      grpc::ClientContext& context, Options options,
      google::cloud::vmmigration::v1::UpdateTargetProjectRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncDeleteTargetProject(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::vmmigration::v1::DeleteTargetProjectRequest const& request)
      override;

  StatusOr<google::longrunning::Operation> DeleteTargetProject(
      grpc::ClientContext& context, Options options,
      google::cloud::vmmigration::v1::DeleteTargetProjectRequest const& request)
      override;

  StatusOr<google::cloud::vmmigration::v1::ListReplicationCyclesResponse>
  ListReplicationCycles(
      grpc::ClientContext& context, Options const& options,
      google::cloud::vmmigration::v1::ListReplicationCyclesRequest const&
          request) override;

  StatusOr<google::cloud::vmmigration::v1::ReplicationCycle>
  GetReplicationCycle(
      grpc::ClientContext& context, Options const& options,
      google::cloud::vmmigration::v1::GetReplicationCycleRequest const& request)
      override;

  StatusOr<google::cloud::location::ListLocationsResponse> ListLocations(
      grpc::ClientContext& context, Options const& options,
      google::cloud::location::ListLocationsRequest const& request) override;

  StatusOr<google::cloud::location::Location> GetLocation(
      grpc::ClientContext& context, Options const& options,
      google::cloud::location::GetLocationRequest const& request) override;

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
  std::shared_ptr<VmMigrationStub> child_;
  TracingOptions tracing_options_;
};  // VmMigrationLogging

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace vmmigration_v1_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_VMMIGRATION_V1_INTERNAL_VM_MIGRATION_LOGGING_DECORATOR_H
