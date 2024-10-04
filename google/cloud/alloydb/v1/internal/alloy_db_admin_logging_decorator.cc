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
// source: google/cloud/alloydb/v1/service.proto

#include "google/cloud/alloydb/v1/internal/alloy_db_admin_logging_decorator.h"
#include "google/cloud/internal/log_wrapper.h"
#include "google/cloud/status_or.h"
#include <google/cloud/alloydb/v1/service.grpc.pb.h>
#include <memory>
#include <set>
#include <string>
#include <utility>

namespace google {
namespace cloud {
namespace alloydb_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

AlloyDBAdminLogging::AlloyDBAdminLogging(
    std::shared_ptr<AlloyDBAdminStub> child, TracingOptions tracing_options,
    std::set<std::string> const&)
    : child_(std::move(child)), tracing_options_(std::move(tracing_options)) {}

StatusOr<google::cloud::alloydb::v1::ListClustersResponse>
AlloyDBAdminLogging::ListClusters(
    grpc::ClientContext& context, Options const& options,
    google::cloud::alloydb::v1::ListClustersRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::alloydb::v1::ListClustersRequest const& request) {
        return child_->ListClusters(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::alloydb::v1::Cluster> AlloyDBAdminLogging::GetCluster(
    grpc::ClientContext& context, Options const& options,
    google::cloud::alloydb::v1::GetClusterRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::alloydb::v1::GetClusterRequest const& request) {
        return child_->GetCluster(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
AlloyDBAdminLogging::AsyncCreateCluster(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::alloydb::v1::CreateClusterRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             google::cloud::internal::ImmutableOptions options,
             google::cloud::alloydb::v1::CreateClusterRequest const& request) {
        return child_->AsyncCreateCluster(cq, std::move(context),
                                          std::move(options), request);
      },
      cq, std::move(context), std::move(options), request, __func__,
      tracing_options_);
}

StatusOr<google::longrunning::Operation> AlloyDBAdminLogging::CreateCluster(
    grpc::ClientContext& context, Options options,
    google::cloud::alloydb::v1::CreateClusterRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::alloydb::v1::CreateClusterRequest const& request) {
        return child_->CreateCluster(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
AlloyDBAdminLogging::AsyncUpdateCluster(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::alloydb::v1::UpdateClusterRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             google::cloud::internal::ImmutableOptions options,
             google::cloud::alloydb::v1::UpdateClusterRequest const& request) {
        return child_->AsyncUpdateCluster(cq, std::move(context),
                                          std::move(options), request);
      },
      cq, std::move(context), std::move(options), request, __func__,
      tracing_options_);
}

StatusOr<google::longrunning::Operation> AlloyDBAdminLogging::UpdateCluster(
    grpc::ClientContext& context, Options options,
    google::cloud::alloydb::v1::UpdateClusterRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::alloydb::v1::UpdateClusterRequest const& request) {
        return child_->UpdateCluster(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
AlloyDBAdminLogging::AsyncDeleteCluster(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::alloydb::v1::DeleteClusterRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             google::cloud::internal::ImmutableOptions options,
             google::cloud::alloydb::v1::DeleteClusterRequest const& request) {
        return child_->AsyncDeleteCluster(cq, std::move(context),
                                          std::move(options), request);
      },
      cq, std::move(context), std::move(options), request, __func__,
      tracing_options_);
}

StatusOr<google::longrunning::Operation> AlloyDBAdminLogging::DeleteCluster(
    grpc::ClientContext& context, Options options,
    google::cloud::alloydb::v1::DeleteClusterRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::alloydb::v1::DeleteClusterRequest const& request) {
        return child_->DeleteCluster(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
AlloyDBAdminLogging::AsyncPromoteCluster(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::alloydb::v1::PromoteClusterRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             google::cloud::internal::ImmutableOptions options,
             google::cloud::alloydb::v1::PromoteClusterRequest const& request) {
        return child_->AsyncPromoteCluster(cq, std::move(context),
                                           std::move(options), request);
      },
      cq, std::move(context), std::move(options), request, __func__,
      tracing_options_);
}

StatusOr<google::longrunning::Operation> AlloyDBAdminLogging::PromoteCluster(
    grpc::ClientContext& context, Options options,
    google::cloud::alloydb::v1::PromoteClusterRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::alloydb::v1::PromoteClusterRequest const& request) {
        return child_->PromoteCluster(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
AlloyDBAdminLogging::AsyncRestoreCluster(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::alloydb::v1::RestoreClusterRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             google::cloud::internal::ImmutableOptions options,
             google::cloud::alloydb::v1::RestoreClusterRequest const& request) {
        return child_->AsyncRestoreCluster(cq, std::move(context),
                                           std::move(options), request);
      },
      cq, std::move(context), std::move(options), request, __func__,
      tracing_options_);
}

StatusOr<google::longrunning::Operation> AlloyDBAdminLogging::RestoreCluster(
    grpc::ClientContext& context, Options options,
    google::cloud::alloydb::v1::RestoreClusterRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::alloydb::v1::RestoreClusterRequest const& request) {
        return child_->RestoreCluster(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
AlloyDBAdminLogging::AsyncCreateSecondaryCluster(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::alloydb::v1::CreateSecondaryClusterRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             google::cloud::internal::ImmutableOptions options,
             google::cloud::alloydb::v1::CreateSecondaryClusterRequest const&
                 request) {
        return child_->AsyncCreateSecondaryCluster(cq, std::move(context),
                                                   std::move(options), request);
      },
      cq, std::move(context), std::move(options), request, __func__,
      tracing_options_);
}

StatusOr<google::longrunning::Operation>
AlloyDBAdminLogging::CreateSecondaryCluster(
    grpc::ClientContext& context, Options options,
    google::cloud::alloydb::v1::CreateSecondaryClusterRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::alloydb::v1::CreateSecondaryClusterRequest const&
                 request) {
        return child_->CreateSecondaryCluster(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::alloydb::v1::ListInstancesResponse>
AlloyDBAdminLogging::ListInstances(
    grpc::ClientContext& context, Options const& options,
    google::cloud::alloydb::v1::ListInstancesRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::alloydb::v1::ListInstancesRequest const& request) {
        return child_->ListInstances(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::alloydb::v1::Instance> AlloyDBAdminLogging::GetInstance(
    grpc::ClientContext& context, Options const& options,
    google::cloud::alloydb::v1::GetInstanceRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::alloydb::v1::GetInstanceRequest const& request) {
        return child_->GetInstance(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
AlloyDBAdminLogging::AsyncCreateInstance(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::alloydb::v1::CreateInstanceRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             google::cloud::internal::ImmutableOptions options,
             google::cloud::alloydb::v1::CreateInstanceRequest const& request) {
        return child_->AsyncCreateInstance(cq, std::move(context),
                                           std::move(options), request);
      },
      cq, std::move(context), std::move(options), request, __func__,
      tracing_options_);
}

StatusOr<google::longrunning::Operation> AlloyDBAdminLogging::CreateInstance(
    grpc::ClientContext& context, Options options,
    google::cloud::alloydb::v1::CreateInstanceRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::alloydb::v1::CreateInstanceRequest const& request) {
        return child_->CreateInstance(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
AlloyDBAdminLogging::AsyncCreateSecondaryInstance(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::alloydb::v1::CreateSecondaryInstanceRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             google::cloud::internal::ImmutableOptions options,
             google::cloud::alloydb::v1::CreateSecondaryInstanceRequest const&
                 request) {
        return child_->AsyncCreateSecondaryInstance(
            cq, std::move(context), std::move(options), request);
      },
      cq, std::move(context), std::move(options), request, __func__,
      tracing_options_);
}

StatusOr<google::longrunning::Operation>
AlloyDBAdminLogging::CreateSecondaryInstance(
    grpc::ClientContext& context, Options options,
    google::cloud::alloydb::v1::CreateSecondaryInstanceRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::alloydb::v1::CreateSecondaryInstanceRequest const&
                 request) {
        return child_->CreateSecondaryInstance(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
AlloyDBAdminLogging::AsyncBatchCreateInstances(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::alloydb::v1::BatchCreateInstancesRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             google::cloud::internal::ImmutableOptions options,
             google::cloud::alloydb::v1::BatchCreateInstancesRequest const&
                 request) {
        return child_->AsyncBatchCreateInstances(cq, std::move(context),
                                                 std::move(options), request);
      },
      cq, std::move(context), std::move(options), request, __func__,
      tracing_options_);
}

StatusOr<google::longrunning::Operation>
AlloyDBAdminLogging::BatchCreateInstances(
    grpc::ClientContext& context, Options options,
    google::cloud::alloydb::v1::BatchCreateInstancesRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::alloydb::v1::BatchCreateInstancesRequest const&
                 request) {
        return child_->BatchCreateInstances(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
AlloyDBAdminLogging::AsyncUpdateInstance(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::alloydb::v1::UpdateInstanceRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             google::cloud::internal::ImmutableOptions options,
             google::cloud::alloydb::v1::UpdateInstanceRequest const& request) {
        return child_->AsyncUpdateInstance(cq, std::move(context),
                                           std::move(options), request);
      },
      cq, std::move(context), std::move(options), request, __func__,
      tracing_options_);
}

StatusOr<google::longrunning::Operation> AlloyDBAdminLogging::UpdateInstance(
    grpc::ClientContext& context, Options options,
    google::cloud::alloydb::v1::UpdateInstanceRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::alloydb::v1::UpdateInstanceRequest const& request) {
        return child_->UpdateInstance(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
AlloyDBAdminLogging::AsyncDeleteInstance(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::alloydb::v1::DeleteInstanceRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             google::cloud::internal::ImmutableOptions options,
             google::cloud::alloydb::v1::DeleteInstanceRequest const& request) {
        return child_->AsyncDeleteInstance(cq, std::move(context),
                                           std::move(options), request);
      },
      cq, std::move(context), std::move(options), request, __func__,
      tracing_options_);
}

StatusOr<google::longrunning::Operation> AlloyDBAdminLogging::DeleteInstance(
    grpc::ClientContext& context, Options options,
    google::cloud::alloydb::v1::DeleteInstanceRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::alloydb::v1::DeleteInstanceRequest const& request) {
        return child_->DeleteInstance(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
AlloyDBAdminLogging::AsyncFailoverInstance(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::alloydb::v1::FailoverInstanceRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](
          google::cloud::CompletionQueue& cq,
          std::shared_ptr<grpc::ClientContext> context,
          google::cloud::internal::ImmutableOptions options,
          google::cloud::alloydb::v1::FailoverInstanceRequest const& request) {
        return child_->AsyncFailoverInstance(cq, std::move(context),
                                             std::move(options), request);
      },
      cq, std::move(context), std::move(options), request, __func__,
      tracing_options_);
}

StatusOr<google::longrunning::Operation> AlloyDBAdminLogging::FailoverInstance(
    grpc::ClientContext& context, Options options,
    google::cloud::alloydb::v1::FailoverInstanceRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](
          grpc::ClientContext& context, Options const& options,
          google::cloud::alloydb::v1::FailoverInstanceRequest const& request) {
        return child_->FailoverInstance(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
AlloyDBAdminLogging::AsyncInjectFault(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::alloydb::v1::InjectFaultRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             google::cloud::internal::ImmutableOptions options,
             google::cloud::alloydb::v1::InjectFaultRequest const& request) {
        return child_->AsyncInjectFault(cq, std::move(context),
                                        std::move(options), request);
      },
      cq, std::move(context), std::move(options), request, __func__,
      tracing_options_);
}

StatusOr<google::longrunning::Operation> AlloyDBAdminLogging::InjectFault(
    grpc::ClientContext& context, Options options,
    google::cloud::alloydb::v1::InjectFaultRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::alloydb::v1::InjectFaultRequest const& request) {
        return child_->InjectFault(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
AlloyDBAdminLogging::AsyncRestartInstance(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::alloydb::v1::RestartInstanceRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](
          google::cloud::CompletionQueue& cq,
          std::shared_ptr<grpc::ClientContext> context,
          google::cloud::internal::ImmutableOptions options,
          google::cloud::alloydb::v1::RestartInstanceRequest const& request) {
        return child_->AsyncRestartInstance(cq, std::move(context),
                                            std::move(options), request);
      },
      cq, std::move(context), std::move(options), request, __func__,
      tracing_options_);
}

StatusOr<google::longrunning::Operation> AlloyDBAdminLogging::RestartInstance(
    grpc::ClientContext& context, Options options,
    google::cloud::alloydb::v1::RestartInstanceRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](
          grpc::ClientContext& context, Options const& options,
          google::cloud::alloydb::v1::RestartInstanceRequest const& request) {
        return child_->RestartInstance(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::alloydb::v1::ListBackupsResponse>
AlloyDBAdminLogging::ListBackups(
    grpc::ClientContext& context, Options const& options,
    google::cloud::alloydb::v1::ListBackupsRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::alloydb::v1::ListBackupsRequest const& request) {
        return child_->ListBackups(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::alloydb::v1::Backup> AlloyDBAdminLogging::GetBackup(
    grpc::ClientContext& context, Options const& options,
    google::cloud::alloydb::v1::GetBackupRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::alloydb::v1::GetBackupRequest const& request) {
        return child_->GetBackup(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
AlloyDBAdminLogging::AsyncCreateBackup(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::alloydb::v1::CreateBackupRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             google::cloud::internal::ImmutableOptions options,
             google::cloud::alloydb::v1::CreateBackupRequest const& request) {
        return child_->AsyncCreateBackup(cq, std::move(context),
                                         std::move(options), request);
      },
      cq, std::move(context), std::move(options), request, __func__,
      tracing_options_);
}

StatusOr<google::longrunning::Operation> AlloyDBAdminLogging::CreateBackup(
    grpc::ClientContext& context, Options options,
    google::cloud::alloydb::v1::CreateBackupRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::alloydb::v1::CreateBackupRequest const& request) {
        return child_->CreateBackup(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
AlloyDBAdminLogging::AsyncUpdateBackup(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::alloydb::v1::UpdateBackupRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             google::cloud::internal::ImmutableOptions options,
             google::cloud::alloydb::v1::UpdateBackupRequest const& request) {
        return child_->AsyncUpdateBackup(cq, std::move(context),
                                         std::move(options), request);
      },
      cq, std::move(context), std::move(options), request, __func__,
      tracing_options_);
}

StatusOr<google::longrunning::Operation> AlloyDBAdminLogging::UpdateBackup(
    grpc::ClientContext& context, Options options,
    google::cloud::alloydb::v1::UpdateBackupRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::alloydb::v1::UpdateBackupRequest const& request) {
        return child_->UpdateBackup(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
AlloyDBAdminLogging::AsyncDeleteBackup(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::alloydb::v1::DeleteBackupRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             google::cloud::internal::ImmutableOptions options,
             google::cloud::alloydb::v1::DeleteBackupRequest const& request) {
        return child_->AsyncDeleteBackup(cq, std::move(context),
                                         std::move(options), request);
      },
      cq, std::move(context), std::move(options), request, __func__,
      tracing_options_);
}

StatusOr<google::longrunning::Operation> AlloyDBAdminLogging::DeleteBackup(
    grpc::ClientContext& context, Options options,
    google::cloud::alloydb::v1::DeleteBackupRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::alloydb::v1::DeleteBackupRequest const& request) {
        return child_->DeleteBackup(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::alloydb::v1::ListSupportedDatabaseFlagsResponse>
AlloyDBAdminLogging::ListSupportedDatabaseFlags(
    grpc::ClientContext& context, Options const& options,
    google::cloud::alloydb::v1::ListSupportedDatabaseFlagsRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](
          grpc::ClientContext& context, Options const& options,
          google::cloud::alloydb::v1::ListSupportedDatabaseFlagsRequest const&
              request) {
        return child_->ListSupportedDatabaseFlags(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::alloydb::v1::GenerateClientCertificateResponse>
AlloyDBAdminLogging::GenerateClientCertificate(
    grpc::ClientContext& context, Options const& options,
    google::cloud::alloydb::v1::GenerateClientCertificateRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::alloydb::v1::GenerateClientCertificateRequest const&
                 request) {
        return child_->GenerateClientCertificate(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::alloydb::v1::ConnectionInfo>
AlloyDBAdminLogging::GetConnectionInfo(
    grpc::ClientContext& context, Options const& options,
    google::cloud::alloydb::v1::GetConnectionInfoRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](
          grpc::ClientContext& context, Options const& options,
          google::cloud::alloydb::v1::GetConnectionInfoRequest const& request) {
        return child_->GetConnectionInfo(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::alloydb::v1::ListUsersResponse>
AlloyDBAdminLogging::ListUsers(
    grpc::ClientContext& context, Options const& options,
    google::cloud::alloydb::v1::ListUsersRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::alloydb::v1::ListUsersRequest const& request) {
        return child_->ListUsers(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::alloydb::v1::User> AlloyDBAdminLogging::GetUser(
    grpc::ClientContext& context, Options const& options,
    google::cloud::alloydb::v1::GetUserRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::alloydb::v1::GetUserRequest const& request) {
        return child_->GetUser(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::alloydb::v1::User> AlloyDBAdminLogging::CreateUser(
    grpc::ClientContext& context, Options const& options,
    google::cloud::alloydb::v1::CreateUserRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::alloydb::v1::CreateUserRequest const& request) {
        return child_->CreateUser(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::alloydb::v1::User> AlloyDBAdminLogging::UpdateUser(
    grpc::ClientContext& context, Options const& options,
    google::cloud::alloydb::v1::UpdateUserRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::alloydb::v1::UpdateUserRequest const& request) {
        return child_->UpdateUser(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

Status AlloyDBAdminLogging::DeleteUser(
    grpc::ClientContext& context, Options const& options,
    google::cloud::alloydb::v1::DeleteUserRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::alloydb::v1::DeleteUserRequest const& request) {
        return child_->DeleteUser(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::location::ListLocationsResponse>
AlloyDBAdminLogging::ListLocations(
    grpc::ClientContext& context, Options const& options,
    google::cloud::location::ListLocationsRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::location::ListLocationsRequest const& request) {
        return child_->ListLocations(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::location::Location> AlloyDBAdminLogging::GetLocation(
    grpc::ClientContext& context, Options const& options,
    google::cloud::location::GetLocationRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::location::GetLocationRequest const& request) {
        return child_->GetLocation(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::longrunning::ListOperationsResponse>
AlloyDBAdminLogging::ListOperations(
    grpc::ClientContext& context, Options const& options,
    google::longrunning::ListOperationsRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::longrunning::ListOperationsRequest const& request) {
        return child_->ListOperations(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::longrunning::Operation> AlloyDBAdminLogging::GetOperation(
    grpc::ClientContext& context, Options const& options,
    google::longrunning::GetOperationRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::longrunning::GetOperationRequest const& request) {
        return child_->GetOperation(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

Status AlloyDBAdminLogging::DeleteOperation(
    grpc::ClientContext& context, Options const& options,
    google::longrunning::DeleteOperationRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::longrunning::DeleteOperationRequest const& request) {
        return child_->DeleteOperation(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

Status AlloyDBAdminLogging::CancelOperation(
    grpc::ClientContext& context, Options const& options,
    google::longrunning::CancelOperationRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::longrunning::CancelOperationRequest const& request) {
        return child_->CancelOperation(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
AlloyDBAdminLogging::AsyncGetOperation(
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

future<Status> AlloyDBAdminLogging::AsyncCancelOperation(
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
}  // namespace alloydb_v1_internal
}  // namespace cloud
}  // namespace google
