// Copyright 2021 Google LLC
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
// source: google/spanner/admin/database/v1/spanner_database_admin.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_SPANNER_ADMIN_INTERNAL_DATABASE_ADMIN_STUB_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_SPANNER_ADMIN_INTERNAL_DATABASE_ADMIN_STUB_H

#include "google/cloud/completion_queue.h"
#include "google/cloud/future.h"
#include "google/cloud/options.h"
#include "google/cloud/status_or.h"
#include "google/cloud/version.h"
#include "google/longrunning/operations.grpc.pb.h"
#include "google/spanner/admin/database/v1/spanner_database_admin.grpc.pb.h"
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace spanner_admin_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class DatabaseAdminStub {
 public:
  virtual ~DatabaseAdminStub() = 0;

  virtual StatusOr<google::spanner::admin::database::v1::ListDatabasesResponse>
  ListDatabases(
      grpc::ClientContext& context, Options const& options,
      google::spanner::admin::database::v1::ListDatabasesRequest const&
          request) = 0;

  virtual future<StatusOr<google::longrunning::Operation>> AsyncCreateDatabase(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::spanner::admin::database::v1::CreateDatabaseRequest const&
          request) = 0;

  virtual StatusOr<google::longrunning::Operation> CreateDatabase(
      grpc::ClientContext& context, Options options,
      google::spanner::admin::database::v1::CreateDatabaseRequest const&
          request) = 0;

  virtual StatusOr<google::spanner::admin::database::v1::Database> GetDatabase(
      grpc::ClientContext& context, Options const& options,
      google::spanner::admin::database::v1::GetDatabaseRequest const&
          request) = 0;

  virtual future<StatusOr<google::longrunning::Operation>> AsyncUpdateDatabase(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::spanner::admin::database::v1::UpdateDatabaseRequest const&
          request) = 0;

  virtual StatusOr<google::longrunning::Operation> UpdateDatabase(
      grpc::ClientContext& context, Options options,
      google::spanner::admin::database::v1::UpdateDatabaseRequest const&
          request) = 0;

  virtual future<StatusOr<google::longrunning::Operation>>
  AsyncUpdateDatabaseDdl(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::spanner::admin::database::v1::UpdateDatabaseDdlRequest const&
          request) = 0;

  virtual StatusOr<google::longrunning::Operation> UpdateDatabaseDdl(
      grpc::ClientContext& context, Options options,
      google::spanner::admin::database::v1::UpdateDatabaseDdlRequest const&
          request) = 0;

  virtual Status DropDatabase(
      grpc::ClientContext& context, Options const& options,
      google::spanner::admin::database::v1::DropDatabaseRequest const&
          request) = 0;

  virtual StatusOr<google::spanner::admin::database::v1::GetDatabaseDdlResponse>
  GetDatabaseDdl(
      grpc::ClientContext& context, Options const& options,
      google::spanner::admin::database::v1::GetDatabaseDdlRequest const&
          request) = 0;

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

  virtual future<StatusOr<google::longrunning::Operation>> AsyncCreateBackup(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::spanner::admin::database::v1::CreateBackupRequest const&
          request) = 0;

  virtual StatusOr<google::longrunning::Operation> CreateBackup(
      grpc::ClientContext& context, Options options,
      google::spanner::admin::database::v1::CreateBackupRequest const&
          request) = 0;

  virtual future<StatusOr<google::longrunning::Operation>> AsyncCopyBackup(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::spanner::admin::database::v1::CopyBackupRequest const&
          request) = 0;

  virtual StatusOr<google::longrunning::Operation> CopyBackup(
      grpc::ClientContext& context, Options options,
      google::spanner::admin::database::v1::CopyBackupRequest const&
          request) = 0;

  virtual StatusOr<google::spanner::admin::database::v1::Backup> GetBackup(
      grpc::ClientContext& context, Options const& options,
      google::spanner::admin::database::v1::GetBackupRequest const&
          request) = 0;

  virtual StatusOr<google::spanner::admin::database::v1::Backup> UpdateBackup(
      grpc::ClientContext& context, Options const& options,
      google::spanner::admin::database::v1::UpdateBackupRequest const&
          request) = 0;

  virtual Status DeleteBackup(
      grpc::ClientContext& context, Options const& options,
      google::spanner::admin::database::v1::DeleteBackupRequest const&
          request) = 0;

  virtual StatusOr<google::spanner::admin::database::v1::ListBackupsResponse>
  ListBackups(grpc::ClientContext& context, Options const& options,
              google::spanner::admin::database::v1::ListBackupsRequest const&
                  request) = 0;

  virtual future<StatusOr<google::longrunning::Operation>> AsyncRestoreDatabase(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::spanner::admin::database::v1::RestoreDatabaseRequest const&
          request) = 0;

  virtual StatusOr<google::longrunning::Operation> RestoreDatabase(
      grpc::ClientContext& context, Options options,
      google::spanner::admin::database::v1::RestoreDatabaseRequest const&
          request) = 0;

  virtual StatusOr<
      google::spanner::admin::database::v1::ListDatabaseOperationsResponse>
  ListDatabaseOperations(
      grpc::ClientContext& context, Options const& options,
      google::spanner::admin::database::v1::ListDatabaseOperationsRequest const&
          request) = 0;

  virtual StatusOr<
      google::spanner::admin::database::v1::ListBackupOperationsResponse>
  ListBackupOperations(
      grpc::ClientContext& context, Options const& options,
      google::spanner::admin::database::v1::ListBackupOperationsRequest const&
          request) = 0;

  virtual StatusOr<
      google::spanner::admin::database::v1::ListDatabaseRolesResponse>
  ListDatabaseRoles(
      grpc::ClientContext& context, Options const& options,
      google::spanner::admin::database::v1::ListDatabaseRolesRequest const&
          request) = 0;

  virtual StatusOr<google::spanner::admin::database::v1::BackupSchedule>
  CreateBackupSchedule(
      grpc::ClientContext& context, Options const& options,
      google::spanner::admin::database::v1::CreateBackupScheduleRequest const&
          request) = 0;

  virtual StatusOr<google::spanner::admin::database::v1::BackupSchedule>
  GetBackupSchedule(
      grpc::ClientContext& context, Options const& options,
      google::spanner::admin::database::v1::GetBackupScheduleRequest const&
          request) = 0;

  virtual StatusOr<google::spanner::admin::database::v1::BackupSchedule>
  UpdateBackupSchedule(
      grpc::ClientContext& context, Options const& options,
      google::spanner::admin::database::v1::UpdateBackupScheduleRequest const&
          request) = 0;

  virtual Status DeleteBackupSchedule(
      grpc::ClientContext& context, Options const& options,
      google::spanner::admin::database::v1::DeleteBackupScheduleRequest const&
          request) = 0;

  virtual StatusOr<
      google::spanner::admin::database::v1::ListBackupSchedulesResponse>
  ListBackupSchedules(
      grpc::ClientContext& context, Options const& options,
      google::spanner::admin::database::v1::ListBackupSchedulesRequest const&
          request) = 0;

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

class DefaultDatabaseAdminStub : public DatabaseAdminStub {
 public:
  DefaultDatabaseAdminStub(
      std::unique_ptr<
          google::spanner::admin::database::v1::DatabaseAdmin::StubInterface>
          grpc_stub,
      std::unique_ptr<google::longrunning::Operations::StubInterface>
          operations_stub,
      std::unique_ptr<google::longrunning::Operations::StubInterface>
          operations)
      : grpc_stub_(std::move(grpc_stub)),
        operations_stub_(std::move(operations_stub)),
        operations_(std::move(operations)) {}

  StatusOr<google::spanner::admin::database::v1::ListDatabasesResponse>
  ListDatabases(
      grpc::ClientContext& context, Options const& options,
      google::spanner::admin::database::v1::ListDatabasesRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncCreateDatabase(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::spanner::admin::database::v1::CreateDatabaseRequest const&
          request) override;

  StatusOr<google::longrunning::Operation> CreateDatabase(
      grpc::ClientContext& context, Options options,
      google::spanner::admin::database::v1::CreateDatabaseRequest const&
          request) override;

  StatusOr<google::spanner::admin::database::v1::Database> GetDatabase(
      grpc::ClientContext& context, Options const& options,
      google::spanner::admin::database::v1::GetDatabaseRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncUpdateDatabase(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::spanner::admin::database::v1::UpdateDatabaseRequest const&
          request) override;

  StatusOr<google::longrunning::Operation> UpdateDatabase(
      grpc::ClientContext& context, Options options,
      google::spanner::admin::database::v1::UpdateDatabaseRequest const&
          request) override;

  future<StatusOr<google::longrunning::Operation>> AsyncUpdateDatabaseDdl(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::spanner::admin::database::v1::UpdateDatabaseDdlRequest const&
          request) override;

  StatusOr<google::longrunning::Operation> UpdateDatabaseDdl(
      grpc::ClientContext& context, Options options,
      google::spanner::admin::database::v1::UpdateDatabaseDdlRequest const&
          request) override;

  Status DropDatabase(
      grpc::ClientContext& context, Options const& options,
      google::spanner::admin::database::v1::DropDatabaseRequest const& request)
      override;

  StatusOr<google::spanner::admin::database::v1::GetDatabaseDdlResponse>
  GetDatabaseDdl(
      grpc::ClientContext& context, Options const& options,
      google::spanner::admin::database::v1::GetDatabaseDdlRequest const&
          request) override;

  StatusOr<google::iam::v1::Policy> SetIamPolicy(
      grpc::ClientContext& context, Options const& options,
      google::iam::v1::SetIamPolicyRequest const& request) override;

  StatusOr<google::iam::v1::Policy> GetIamPolicy(
      grpc::ClientContext& context, Options const& options,
      google::iam::v1::GetIamPolicyRequest const& request) override;

  StatusOr<google::iam::v1::TestIamPermissionsResponse> TestIamPermissions(
      grpc::ClientContext& context, Options const& options,
      google::iam::v1::TestIamPermissionsRequest const& request) override;

  future<StatusOr<google::longrunning::Operation>> AsyncCreateBackup(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::spanner::admin::database::v1::CreateBackupRequest const& request)
      override;

  StatusOr<google::longrunning::Operation> CreateBackup(
      grpc::ClientContext& context, Options options,
      google::spanner::admin::database::v1::CreateBackupRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncCopyBackup(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::spanner::admin::database::v1::CopyBackupRequest const& request)
      override;

  StatusOr<google::longrunning::Operation> CopyBackup(
      grpc::ClientContext& context, Options options,
      google::spanner::admin::database::v1::CopyBackupRequest const& request)
      override;

  StatusOr<google::spanner::admin::database::v1::Backup> GetBackup(
      grpc::ClientContext& context, Options const& options,
      google::spanner::admin::database::v1::GetBackupRequest const& request)
      override;

  StatusOr<google::spanner::admin::database::v1::Backup> UpdateBackup(
      grpc::ClientContext& context, Options const& options,
      google::spanner::admin::database::v1::UpdateBackupRequest const& request)
      override;

  Status DeleteBackup(
      grpc::ClientContext& context, Options const& options,
      google::spanner::admin::database::v1::DeleteBackupRequest const& request)
      override;

  StatusOr<google::spanner::admin::database::v1::ListBackupsResponse>
  ListBackups(grpc::ClientContext& context, Options const& options,
              google::spanner::admin::database::v1::ListBackupsRequest const&
                  request) override;

  future<StatusOr<google::longrunning::Operation>> AsyncRestoreDatabase(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::spanner::admin::database::v1::RestoreDatabaseRequest const&
          request) override;

  StatusOr<google::longrunning::Operation> RestoreDatabase(
      grpc::ClientContext& context, Options options,
      google::spanner::admin::database::v1::RestoreDatabaseRequest const&
          request) override;

  StatusOr<google::spanner::admin::database::v1::ListDatabaseOperationsResponse>
  ListDatabaseOperations(
      grpc::ClientContext& context, Options const& options,
      google::spanner::admin::database::v1::ListDatabaseOperationsRequest const&
          request) override;

  StatusOr<google::spanner::admin::database::v1::ListBackupOperationsResponse>
  ListBackupOperations(
      grpc::ClientContext& context, Options const& options,
      google::spanner::admin::database::v1::ListBackupOperationsRequest const&
          request) override;

  StatusOr<google::spanner::admin::database::v1::ListDatabaseRolesResponse>
  ListDatabaseRoles(
      grpc::ClientContext& context, Options const& options,
      google::spanner::admin::database::v1::ListDatabaseRolesRequest const&
          request) override;

  StatusOr<google::spanner::admin::database::v1::BackupSchedule>
  CreateBackupSchedule(
      grpc::ClientContext& context, Options const& options,
      google::spanner::admin::database::v1::CreateBackupScheduleRequest const&
          request) override;

  StatusOr<google::spanner::admin::database::v1::BackupSchedule>
  GetBackupSchedule(
      grpc::ClientContext& context, Options const& options,
      google::spanner::admin::database::v1::GetBackupScheduleRequest const&
          request) override;

  StatusOr<google::spanner::admin::database::v1::BackupSchedule>
  UpdateBackupSchedule(
      grpc::ClientContext& context, Options const& options,
      google::spanner::admin::database::v1::UpdateBackupScheduleRequest const&
          request) override;

  Status DeleteBackupSchedule(
      grpc::ClientContext& context, Options const& options,
      google::spanner::admin::database::v1::DeleteBackupScheduleRequest const&
          request) override;

  StatusOr<google::spanner::admin::database::v1::ListBackupSchedulesResponse>
  ListBackupSchedules(
      grpc::ClientContext& context, Options const& options,
      google::spanner::admin::database::v1::ListBackupSchedulesRequest const&
          request) override;

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
  std::unique_ptr<
      google::spanner::admin::database::v1::DatabaseAdmin::StubInterface>
      grpc_stub_;
  std::unique_ptr<google::longrunning::Operations::StubInterface>
      operations_stub_;
  std::unique_ptr<google::longrunning::Operations::StubInterface> operations_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
namespace gcpcxxV1 = GOOGLE_CLOUD_CPP_NS;  // NOLINT(misc-unused-alias-decls)
}  // namespace spanner_admin_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_SPANNER_ADMIN_INTERNAL_DATABASE_ADMIN_STUB_H
