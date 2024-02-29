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
// source: google/bigtable/admin/v2/bigtable_table_admin.proto

#include "google/cloud/bigtable/admin/internal/bigtable_table_admin_logging_decorator.h"
#include "google/cloud/internal/log_wrapper.h"
#include "google/cloud/status_or.h"
#include <google/bigtable/admin/v2/bigtable_table_admin.grpc.pb.h>
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace bigtable_admin_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

BigtableTableAdminLogging::BigtableTableAdminLogging(
    std::shared_ptr<BigtableTableAdminStub> child,
    TracingOptions tracing_options, std::set<std::string> const& components)
    : child_(std::move(child)),
      tracing_options_(std::move(tracing_options)),
      stream_logging_(components.find("rpc-streams") != components.end()) {}

StatusOr<google::bigtable::admin::v2::Table>
BigtableTableAdminLogging::CreateTable(
    grpc::ClientContext& context, Options const& options,
    google::bigtable::admin::v2::CreateTableRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::bigtable::admin::v2::CreateTableRequest const& request) {
        return child_->CreateTable(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::bigtable::admin::v2::ListTablesResponse>
BigtableTableAdminLogging::ListTables(
    grpc::ClientContext& context, Options const& options,
    google::bigtable::admin::v2::ListTablesRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::bigtable::admin::v2::ListTablesRequest const& request) {
        return child_->ListTables(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::bigtable::admin::v2::Table>
BigtableTableAdminLogging::GetTable(
    grpc::ClientContext& context, Options const& options,
    google::bigtable::admin::v2::GetTableRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::bigtable::admin::v2::GetTableRequest const& request) {
        return child_->GetTable(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
BigtableTableAdminLogging::AsyncUpdateTable(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::bigtable::admin::v2::UpdateTableRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             google::cloud::internal::ImmutableOptions options,
             google::bigtable::admin::v2::UpdateTableRequest const& request) {
        return child_->AsyncUpdateTable(cq, std::move(context),
                                        std::move(options), request);
      },
      cq, std::move(context), std::move(options), request, __func__,
      tracing_options_);
}

Status BigtableTableAdminLogging::DeleteTable(
    grpc::ClientContext& context, Options const& options,
    google::bigtable::admin::v2::DeleteTableRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::bigtable::admin::v2::DeleteTableRequest const& request) {
        return child_->DeleteTable(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
BigtableTableAdminLogging::AsyncUndeleteTable(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::bigtable::admin::v2::UndeleteTableRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             google::cloud::internal::ImmutableOptions options,
             google::bigtable::admin::v2::UndeleteTableRequest const& request) {
        return child_->AsyncUndeleteTable(cq, std::move(context),
                                          std::move(options), request);
      },
      cq, std::move(context), std::move(options), request, __func__,
      tracing_options_);
}

StatusOr<google::bigtable::admin::v2::Table>
BigtableTableAdminLogging::ModifyColumnFamilies(
    grpc::ClientContext& context, Options const& options,
    google::bigtable::admin::v2::ModifyColumnFamiliesRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::bigtable::admin::v2::ModifyColumnFamiliesRequest const&
                 request) {
        return child_->ModifyColumnFamilies(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

Status BigtableTableAdminLogging::DropRowRange(
    grpc::ClientContext& context, Options const& options,
    google::bigtable::admin::v2::DropRowRangeRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::bigtable::admin::v2::DropRowRangeRequest const& request) {
        return child_->DropRowRange(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::bigtable::admin::v2::GenerateConsistencyTokenResponse>
BigtableTableAdminLogging::GenerateConsistencyToken(
    grpc::ClientContext& context, Options const& options,
    google::bigtable::admin::v2::GenerateConsistencyTokenRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::bigtable::admin::v2::GenerateConsistencyTokenRequest const&
                 request) {
        return child_->GenerateConsistencyToken(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::bigtable::admin::v2::CheckConsistencyResponse>
BigtableTableAdminLogging::CheckConsistency(
    grpc::ClientContext& context, Options const& options,
    google::bigtable::admin::v2::CheckConsistencyRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](
          grpc::ClientContext& context, Options const& options,
          google::bigtable::admin::v2::CheckConsistencyRequest const& request) {
        return child_->CheckConsistency(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
BigtableTableAdminLogging::AsyncCreateBackup(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::bigtable::admin::v2::CreateBackupRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             google::cloud::internal::ImmutableOptions options,
             google::bigtable::admin::v2::CreateBackupRequest const& request) {
        return child_->AsyncCreateBackup(cq, std::move(context),
                                         std::move(options), request);
      },
      cq, std::move(context), std::move(options), request, __func__,
      tracing_options_);
}

StatusOr<google::bigtable::admin::v2::Backup>
BigtableTableAdminLogging::GetBackup(
    grpc::ClientContext& context, Options const& options,
    google::bigtable::admin::v2::GetBackupRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::bigtable::admin::v2::GetBackupRequest const& request) {
        return child_->GetBackup(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::bigtable::admin::v2::Backup>
BigtableTableAdminLogging::UpdateBackup(
    grpc::ClientContext& context, Options const& options,
    google::bigtable::admin::v2::UpdateBackupRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::bigtable::admin::v2::UpdateBackupRequest const& request) {
        return child_->UpdateBackup(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

Status BigtableTableAdminLogging::DeleteBackup(
    grpc::ClientContext& context, Options const& options,
    google::bigtable::admin::v2::DeleteBackupRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::bigtable::admin::v2::DeleteBackupRequest const& request) {
        return child_->DeleteBackup(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::bigtable::admin::v2::ListBackupsResponse>
BigtableTableAdminLogging::ListBackups(
    grpc::ClientContext& context, Options const& options,
    google::bigtable::admin::v2::ListBackupsRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::bigtable::admin::v2::ListBackupsRequest const& request) {
        return child_->ListBackups(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
BigtableTableAdminLogging::AsyncRestoreTable(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::bigtable::admin::v2::RestoreTableRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             google::cloud::internal::ImmutableOptions options,
             google::bigtable::admin::v2::RestoreTableRequest const& request) {
        return child_->AsyncRestoreTable(cq, std::move(context),
                                         std::move(options), request);
      },
      cq, std::move(context), std::move(options), request, __func__,
      tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
BigtableTableAdminLogging::AsyncCopyBackup(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::bigtable::admin::v2::CopyBackupRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             google::cloud::internal::ImmutableOptions options,
             google::bigtable::admin::v2::CopyBackupRequest const& request) {
        return child_->AsyncCopyBackup(cq, std::move(context),
                                       std::move(options), request);
      },
      cq, std::move(context), std::move(options), request, __func__,
      tracing_options_);
}

StatusOr<google::iam::v1::Policy> BigtableTableAdminLogging::GetIamPolicy(
    grpc::ClientContext& context, Options const& options,
    google::iam::v1::GetIamPolicyRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::iam::v1::GetIamPolicyRequest const& request) {
        return child_->GetIamPolicy(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::iam::v1::Policy> BigtableTableAdminLogging::SetIamPolicy(
    grpc::ClientContext& context, Options const& options,
    google::iam::v1::SetIamPolicyRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::iam::v1::SetIamPolicyRequest const& request) {
        return child_->SetIamPolicy(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::iam::v1::TestIamPermissionsResponse>
BigtableTableAdminLogging::TestIamPermissions(
    grpc::ClientContext& context, Options const& options,
    google::iam::v1::TestIamPermissionsRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::iam::v1::TestIamPermissionsRequest const& request) {
        return child_->TestIamPermissions(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

future<StatusOr<google::bigtable::admin::v2::CheckConsistencyResponse>>
BigtableTableAdminLogging::AsyncCheckConsistency(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::bigtable::admin::v2::CheckConsistencyRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](
          google::cloud::CompletionQueue& cq,
          std::shared_ptr<grpc::ClientContext> context,
          google::cloud::internal::ImmutableOptions options,
          google::bigtable::admin::v2::CheckConsistencyRequest const& request) {
        return child_->AsyncCheckConsistency(cq, std::move(context),
                                             std::move(options), request);
      },
      cq, std::move(context), std::move(options), request, __func__,
      tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
BigtableTableAdminLogging::AsyncGetOperation(
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

future<Status> BigtableTableAdminLogging::AsyncCancelOperation(
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
}  // namespace bigtable_admin_internal
}  // namespace cloud
}  // namespace google
