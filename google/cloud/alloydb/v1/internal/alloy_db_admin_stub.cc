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

#include "google/cloud/alloydb/v1/internal/alloy_db_admin_stub.h"
#include "google/cloud/alloydb/v1/service.grpc.pb.h"
#include "google/cloud/grpc_error_delegate.h"
#include "google/cloud/status_or.h"
#include "google/longrunning/operations.grpc.pb.h"
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace alloydb_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

AlloyDBAdminStub::~AlloyDBAdminStub() = default;

StatusOr<google::cloud::alloydb::v1::ListClustersResponse>
DefaultAlloyDBAdminStub::ListClusters(
    grpc::ClientContext& context, Options const&,
    google::cloud::alloydb::v1::ListClustersRequest const& request) {
  google::cloud::alloydb::v1::ListClustersResponse response;
  auto status = grpc_stub_->ListClusters(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::alloydb::v1::Cluster>
DefaultAlloyDBAdminStub::GetCluster(
    grpc::ClientContext& context, Options const&,
    google::cloud::alloydb::v1::GetClusterRequest const& request) {
  google::cloud::alloydb::v1::Cluster response;
  auto status = grpc_stub_->GetCluster(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

future<StatusOr<google::longrunning::Operation>>
DefaultAlloyDBAdminStub::AsyncCreateCluster(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions,
    google::cloud::alloydb::v1::CreateClusterRequest const& request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::alloydb::v1::CreateClusterRequest,
      google::longrunning::Operation>(
      cq,
      [this](grpc::ClientContext* context,
             google::cloud::alloydb::v1::CreateClusterRequest const& request,
             grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncCreateCluster(context, request, cq);
      },
      request, std::move(context));
}

StatusOr<google::longrunning::Operation> DefaultAlloyDBAdminStub::CreateCluster(
    grpc::ClientContext& context, Options,
    google::cloud::alloydb::v1::CreateClusterRequest const& request) {
  google::longrunning::Operation response;
  auto status = grpc_stub_->CreateCluster(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

future<StatusOr<google::longrunning::Operation>>
DefaultAlloyDBAdminStub::AsyncUpdateCluster(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions,
    google::cloud::alloydb::v1::UpdateClusterRequest const& request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::alloydb::v1::UpdateClusterRequest,
      google::longrunning::Operation>(
      cq,
      [this](grpc::ClientContext* context,
             google::cloud::alloydb::v1::UpdateClusterRequest const& request,
             grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncUpdateCluster(context, request, cq);
      },
      request, std::move(context));
}

StatusOr<google::longrunning::Operation> DefaultAlloyDBAdminStub::UpdateCluster(
    grpc::ClientContext& context, Options,
    google::cloud::alloydb::v1::UpdateClusterRequest const& request) {
  google::longrunning::Operation response;
  auto status = grpc_stub_->UpdateCluster(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

future<StatusOr<google::longrunning::Operation>>
DefaultAlloyDBAdminStub::AsyncDeleteCluster(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions,
    google::cloud::alloydb::v1::DeleteClusterRequest const& request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::alloydb::v1::DeleteClusterRequest,
      google::longrunning::Operation>(
      cq,
      [this](grpc::ClientContext* context,
             google::cloud::alloydb::v1::DeleteClusterRequest const& request,
             grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncDeleteCluster(context, request, cq);
      },
      request, std::move(context));
}

StatusOr<google::longrunning::Operation> DefaultAlloyDBAdminStub::DeleteCluster(
    grpc::ClientContext& context, Options,
    google::cloud::alloydb::v1::DeleteClusterRequest const& request) {
  google::longrunning::Operation response;
  auto status = grpc_stub_->DeleteCluster(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

future<StatusOr<google::longrunning::Operation>>
DefaultAlloyDBAdminStub::AsyncPromoteCluster(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions,
    google::cloud::alloydb::v1::PromoteClusterRequest const& request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::alloydb::v1::PromoteClusterRequest,
      google::longrunning::Operation>(
      cq,
      [this](grpc::ClientContext* context,
             google::cloud::alloydb::v1::PromoteClusterRequest const& request,
             grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncPromoteCluster(context, request, cq);
      },
      request, std::move(context));
}

StatusOr<google::longrunning::Operation>
DefaultAlloyDBAdminStub::PromoteCluster(
    grpc::ClientContext& context, Options,
    google::cloud::alloydb::v1::PromoteClusterRequest const& request) {
  google::longrunning::Operation response;
  auto status = grpc_stub_->PromoteCluster(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

future<StatusOr<google::longrunning::Operation>>
DefaultAlloyDBAdminStub::AsyncSwitchoverCluster(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions,
    google::cloud::alloydb::v1::SwitchoverClusterRequest const& request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::alloydb::v1::SwitchoverClusterRequest,
      google::longrunning::Operation>(
      cq,
      [this](
          grpc::ClientContext* context,
          google::cloud::alloydb::v1::SwitchoverClusterRequest const& request,
          grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncSwitchoverCluster(context, request, cq);
      },
      request, std::move(context));
}

StatusOr<google::longrunning::Operation>
DefaultAlloyDBAdminStub::SwitchoverCluster(
    grpc::ClientContext& context, Options,
    google::cloud::alloydb::v1::SwitchoverClusterRequest const& request) {
  google::longrunning::Operation response;
  auto status = grpc_stub_->SwitchoverCluster(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

future<StatusOr<google::longrunning::Operation>>
DefaultAlloyDBAdminStub::AsyncRestoreCluster(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions,
    google::cloud::alloydb::v1::RestoreClusterRequest const& request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::alloydb::v1::RestoreClusterRequest,
      google::longrunning::Operation>(
      cq,
      [this](grpc::ClientContext* context,
             google::cloud::alloydb::v1::RestoreClusterRequest const& request,
             grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncRestoreCluster(context, request, cq);
      },
      request, std::move(context));
}

StatusOr<google::longrunning::Operation>
DefaultAlloyDBAdminStub::RestoreCluster(
    grpc::ClientContext& context, Options,
    google::cloud::alloydb::v1::RestoreClusterRequest const& request) {
  google::longrunning::Operation response;
  auto status = grpc_stub_->RestoreCluster(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

future<StatusOr<google::longrunning::Operation>>
DefaultAlloyDBAdminStub::AsyncCreateSecondaryCluster(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions,
    google::cloud::alloydb::v1::CreateSecondaryClusterRequest const& request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::alloydb::v1::CreateSecondaryClusterRequest,
      google::longrunning::Operation>(
      cq,
      [this](grpc::ClientContext* context,
             google::cloud::alloydb::v1::CreateSecondaryClusterRequest const&
                 request,
             grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncCreateSecondaryCluster(context, request, cq);
      },
      request, std::move(context));
}

StatusOr<google::longrunning::Operation>
DefaultAlloyDBAdminStub::CreateSecondaryCluster(
    grpc::ClientContext& context, Options,
    google::cloud::alloydb::v1::CreateSecondaryClusterRequest const& request) {
  google::longrunning::Operation response;
  auto status =
      grpc_stub_->CreateSecondaryCluster(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::alloydb::v1::ListInstancesResponse>
DefaultAlloyDBAdminStub::ListInstances(
    grpc::ClientContext& context, Options const&,
    google::cloud::alloydb::v1::ListInstancesRequest const& request) {
  google::cloud::alloydb::v1::ListInstancesResponse response;
  auto status = grpc_stub_->ListInstances(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::alloydb::v1::Instance>
DefaultAlloyDBAdminStub::GetInstance(
    grpc::ClientContext& context, Options const&,
    google::cloud::alloydb::v1::GetInstanceRequest const& request) {
  google::cloud::alloydb::v1::Instance response;
  auto status = grpc_stub_->GetInstance(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

future<StatusOr<google::longrunning::Operation>>
DefaultAlloyDBAdminStub::AsyncCreateInstance(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions,
    google::cloud::alloydb::v1::CreateInstanceRequest const& request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::alloydb::v1::CreateInstanceRequest,
      google::longrunning::Operation>(
      cq,
      [this](grpc::ClientContext* context,
             google::cloud::alloydb::v1::CreateInstanceRequest const& request,
             grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncCreateInstance(context, request, cq);
      },
      request, std::move(context));
}

StatusOr<google::longrunning::Operation>
DefaultAlloyDBAdminStub::CreateInstance(
    grpc::ClientContext& context, Options,
    google::cloud::alloydb::v1::CreateInstanceRequest const& request) {
  google::longrunning::Operation response;
  auto status = grpc_stub_->CreateInstance(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

future<StatusOr<google::longrunning::Operation>>
DefaultAlloyDBAdminStub::AsyncCreateSecondaryInstance(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions,
    google::cloud::alloydb::v1::CreateSecondaryInstanceRequest const& request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::alloydb::v1::CreateSecondaryInstanceRequest,
      google::longrunning::Operation>(
      cq,
      [this](grpc::ClientContext* context,
             google::cloud::alloydb::v1::CreateSecondaryInstanceRequest const&
                 request,
             grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncCreateSecondaryInstance(context, request, cq);
      },
      request, std::move(context));
}

StatusOr<google::longrunning::Operation>
DefaultAlloyDBAdminStub::CreateSecondaryInstance(
    grpc::ClientContext& context, Options,
    google::cloud::alloydb::v1::CreateSecondaryInstanceRequest const& request) {
  google::longrunning::Operation response;
  auto status =
      grpc_stub_->CreateSecondaryInstance(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

future<StatusOr<google::longrunning::Operation>>
DefaultAlloyDBAdminStub::AsyncBatchCreateInstances(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions,
    google::cloud::alloydb::v1::BatchCreateInstancesRequest const& request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::alloydb::v1::BatchCreateInstancesRequest,
      google::longrunning::Operation>(
      cq,
      [this](grpc::ClientContext* context,
             google::cloud::alloydb::v1::BatchCreateInstancesRequest const&
                 request,
             grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncBatchCreateInstances(context, request, cq);
      },
      request, std::move(context));
}

StatusOr<google::longrunning::Operation>
DefaultAlloyDBAdminStub::BatchCreateInstances(
    grpc::ClientContext& context, Options,
    google::cloud::alloydb::v1::BatchCreateInstancesRequest const& request) {
  google::longrunning::Operation response;
  auto status = grpc_stub_->BatchCreateInstances(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

future<StatusOr<google::longrunning::Operation>>
DefaultAlloyDBAdminStub::AsyncUpdateInstance(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions,
    google::cloud::alloydb::v1::UpdateInstanceRequest const& request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::alloydb::v1::UpdateInstanceRequest,
      google::longrunning::Operation>(
      cq,
      [this](grpc::ClientContext* context,
             google::cloud::alloydb::v1::UpdateInstanceRequest const& request,
             grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncUpdateInstance(context, request, cq);
      },
      request, std::move(context));
}

StatusOr<google::longrunning::Operation>
DefaultAlloyDBAdminStub::UpdateInstance(
    grpc::ClientContext& context, Options,
    google::cloud::alloydb::v1::UpdateInstanceRequest const& request) {
  google::longrunning::Operation response;
  auto status = grpc_stub_->UpdateInstance(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

future<StatusOr<google::longrunning::Operation>>
DefaultAlloyDBAdminStub::AsyncDeleteInstance(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions,
    google::cloud::alloydb::v1::DeleteInstanceRequest const& request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::alloydb::v1::DeleteInstanceRequest,
      google::longrunning::Operation>(
      cq,
      [this](grpc::ClientContext* context,
             google::cloud::alloydb::v1::DeleteInstanceRequest const& request,
             grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncDeleteInstance(context, request, cq);
      },
      request, std::move(context));
}

StatusOr<google::longrunning::Operation>
DefaultAlloyDBAdminStub::DeleteInstance(
    grpc::ClientContext& context, Options,
    google::cloud::alloydb::v1::DeleteInstanceRequest const& request) {
  google::longrunning::Operation response;
  auto status = grpc_stub_->DeleteInstance(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

future<StatusOr<google::longrunning::Operation>>
DefaultAlloyDBAdminStub::AsyncFailoverInstance(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions,
    google::cloud::alloydb::v1::FailoverInstanceRequest const& request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::alloydb::v1::FailoverInstanceRequest,
      google::longrunning::Operation>(
      cq,
      [this](grpc::ClientContext* context,
             google::cloud::alloydb::v1::FailoverInstanceRequest const& request,
             grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncFailoverInstance(context, request, cq);
      },
      request, std::move(context));
}

StatusOr<google::longrunning::Operation>
DefaultAlloyDBAdminStub::FailoverInstance(
    grpc::ClientContext& context, Options,
    google::cloud::alloydb::v1::FailoverInstanceRequest const& request) {
  google::longrunning::Operation response;
  auto status = grpc_stub_->FailoverInstance(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

future<StatusOr<google::longrunning::Operation>>
DefaultAlloyDBAdminStub::AsyncInjectFault(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions,
    google::cloud::alloydb::v1::InjectFaultRequest const& request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::alloydb::v1::InjectFaultRequest,
      google::longrunning::Operation>(
      cq,
      [this](grpc::ClientContext* context,
             google::cloud::alloydb::v1::InjectFaultRequest const& request,
             grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncInjectFault(context, request, cq);
      },
      request, std::move(context));
}

StatusOr<google::longrunning::Operation> DefaultAlloyDBAdminStub::InjectFault(
    grpc::ClientContext& context, Options,
    google::cloud::alloydb::v1::InjectFaultRequest const& request) {
  google::longrunning::Operation response;
  auto status = grpc_stub_->InjectFault(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

future<StatusOr<google::longrunning::Operation>>
DefaultAlloyDBAdminStub::AsyncRestartInstance(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions,
    google::cloud::alloydb::v1::RestartInstanceRequest const& request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::alloydb::v1::RestartInstanceRequest,
      google::longrunning::Operation>(
      cq,
      [this](grpc::ClientContext* context,
             google::cloud::alloydb::v1::RestartInstanceRequest const& request,
             grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncRestartInstance(context, request, cq);
      },
      request, std::move(context));
}

StatusOr<google::longrunning::Operation>
DefaultAlloyDBAdminStub::RestartInstance(
    grpc::ClientContext& context, Options,
    google::cloud::alloydb::v1::RestartInstanceRequest const& request) {
  google::longrunning::Operation response;
  auto status = grpc_stub_->RestartInstance(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::alloydb::v1::ExecuteSqlResponse>
DefaultAlloyDBAdminStub::ExecuteSql(
    grpc::ClientContext& context, Options const&,
    google::cloud::alloydb::v1::ExecuteSqlRequest const& request) {
  google::cloud::alloydb::v1::ExecuteSqlResponse response;
  auto status = grpc_stub_->ExecuteSql(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::alloydb::v1::ListBackupsResponse>
DefaultAlloyDBAdminStub::ListBackups(
    grpc::ClientContext& context, Options const&,
    google::cloud::alloydb::v1::ListBackupsRequest const& request) {
  google::cloud::alloydb::v1::ListBackupsResponse response;
  auto status = grpc_stub_->ListBackups(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::alloydb::v1::Backup> DefaultAlloyDBAdminStub::GetBackup(
    grpc::ClientContext& context, Options const&,
    google::cloud::alloydb::v1::GetBackupRequest const& request) {
  google::cloud::alloydb::v1::Backup response;
  auto status = grpc_stub_->GetBackup(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

future<StatusOr<google::longrunning::Operation>>
DefaultAlloyDBAdminStub::AsyncCreateBackup(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions,
    google::cloud::alloydb::v1::CreateBackupRequest const& request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::alloydb::v1::CreateBackupRequest,
      google::longrunning::Operation>(
      cq,
      [this](grpc::ClientContext* context,
             google::cloud::alloydb::v1::CreateBackupRequest const& request,
             grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncCreateBackup(context, request, cq);
      },
      request, std::move(context));
}

StatusOr<google::longrunning::Operation> DefaultAlloyDBAdminStub::CreateBackup(
    grpc::ClientContext& context, Options,
    google::cloud::alloydb::v1::CreateBackupRequest const& request) {
  google::longrunning::Operation response;
  auto status = grpc_stub_->CreateBackup(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

future<StatusOr<google::longrunning::Operation>>
DefaultAlloyDBAdminStub::AsyncUpdateBackup(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions,
    google::cloud::alloydb::v1::UpdateBackupRequest const& request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::alloydb::v1::UpdateBackupRequest,
      google::longrunning::Operation>(
      cq,
      [this](grpc::ClientContext* context,
             google::cloud::alloydb::v1::UpdateBackupRequest const& request,
             grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncUpdateBackup(context, request, cq);
      },
      request, std::move(context));
}

StatusOr<google::longrunning::Operation> DefaultAlloyDBAdminStub::UpdateBackup(
    grpc::ClientContext& context, Options,
    google::cloud::alloydb::v1::UpdateBackupRequest const& request) {
  google::longrunning::Operation response;
  auto status = grpc_stub_->UpdateBackup(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

future<StatusOr<google::longrunning::Operation>>
DefaultAlloyDBAdminStub::AsyncDeleteBackup(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions,
    google::cloud::alloydb::v1::DeleteBackupRequest const& request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::alloydb::v1::DeleteBackupRequest,
      google::longrunning::Operation>(
      cq,
      [this](grpc::ClientContext* context,
             google::cloud::alloydb::v1::DeleteBackupRequest const& request,
             grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncDeleteBackup(context, request, cq);
      },
      request, std::move(context));
}

StatusOr<google::longrunning::Operation> DefaultAlloyDBAdminStub::DeleteBackup(
    grpc::ClientContext& context, Options,
    google::cloud::alloydb::v1::DeleteBackupRequest const& request) {
  google::longrunning::Operation response;
  auto status = grpc_stub_->DeleteBackup(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::alloydb::v1::ListSupportedDatabaseFlagsResponse>
DefaultAlloyDBAdminStub::ListSupportedDatabaseFlags(
    grpc::ClientContext& context, Options const&,
    google::cloud::alloydb::v1::ListSupportedDatabaseFlagsRequest const&
        request) {
  google::cloud::alloydb::v1::ListSupportedDatabaseFlagsResponse response;
  auto status =
      grpc_stub_->ListSupportedDatabaseFlags(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::alloydb::v1::GenerateClientCertificateResponse>
DefaultAlloyDBAdminStub::GenerateClientCertificate(
    grpc::ClientContext& context, Options const&,
    google::cloud::alloydb::v1::GenerateClientCertificateRequest const&
        request) {
  google::cloud::alloydb::v1::GenerateClientCertificateResponse response;
  auto status =
      grpc_stub_->GenerateClientCertificate(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::alloydb::v1::ConnectionInfo>
DefaultAlloyDBAdminStub::GetConnectionInfo(
    grpc::ClientContext& context, Options const&,
    google::cloud::alloydb::v1::GetConnectionInfoRequest const& request) {
  google::cloud::alloydb::v1::ConnectionInfo response;
  auto status = grpc_stub_->GetConnectionInfo(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::alloydb::v1::ListUsersResponse>
DefaultAlloyDBAdminStub::ListUsers(
    grpc::ClientContext& context, Options const&,
    google::cloud::alloydb::v1::ListUsersRequest const& request) {
  google::cloud::alloydb::v1::ListUsersResponse response;
  auto status = grpc_stub_->ListUsers(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::alloydb::v1::User> DefaultAlloyDBAdminStub::GetUser(
    grpc::ClientContext& context, Options const&,
    google::cloud::alloydb::v1::GetUserRequest const& request) {
  google::cloud::alloydb::v1::User response;
  auto status = grpc_stub_->GetUser(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::alloydb::v1::User> DefaultAlloyDBAdminStub::CreateUser(
    grpc::ClientContext& context, Options const&,
    google::cloud::alloydb::v1::CreateUserRequest const& request) {
  google::cloud::alloydb::v1::User response;
  auto status = grpc_stub_->CreateUser(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::alloydb::v1::User> DefaultAlloyDBAdminStub::UpdateUser(
    grpc::ClientContext& context, Options const&,
    google::cloud::alloydb::v1::UpdateUserRequest const& request) {
  google::cloud::alloydb::v1::User response;
  auto status = grpc_stub_->UpdateUser(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

Status DefaultAlloyDBAdminStub::DeleteUser(
    grpc::ClientContext& context, Options const&,
    google::cloud::alloydb::v1::DeleteUserRequest const& request) {
  google::protobuf::Empty response;
  auto status = grpc_stub_->DeleteUser(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return google::cloud::Status();
}

StatusOr<google::cloud::alloydb::v1::ListDatabasesResponse>
DefaultAlloyDBAdminStub::ListDatabases(
    grpc::ClientContext& context, Options const&,
    google::cloud::alloydb::v1::ListDatabasesRequest const& request) {
  google::cloud::alloydb::v1::ListDatabasesResponse response;
  auto status = grpc_stub_->ListDatabases(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::location::ListLocationsResponse>
DefaultAlloyDBAdminStub::ListLocations(
    grpc::ClientContext& context, Options const&,
    google::cloud::location::ListLocationsRequest const& request) {
  google::cloud::location::ListLocationsResponse response;
  auto status = locations_stub_->ListLocations(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::location::Location>
DefaultAlloyDBAdminStub::GetLocation(
    grpc::ClientContext& context, Options const&,
    google::cloud::location::GetLocationRequest const& request) {
  google::cloud::location::Location response;
  auto status = locations_stub_->GetLocation(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::longrunning::ListOperationsResponse>
DefaultAlloyDBAdminStub::ListOperations(
    grpc::ClientContext& context, Options const&,
    google::longrunning::ListOperationsRequest const& request) {
  google::longrunning::ListOperationsResponse response;
  auto status = operations_stub_->ListOperations(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::longrunning::Operation> DefaultAlloyDBAdminStub::GetOperation(
    grpc::ClientContext& context, Options const&,
    google::longrunning::GetOperationRequest const& request) {
  google::longrunning::Operation response;
  auto status = operations_stub_->GetOperation(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

Status DefaultAlloyDBAdminStub::DeleteOperation(
    grpc::ClientContext& context, Options const&,
    google::longrunning::DeleteOperationRequest const& request) {
  google::protobuf::Empty response;
  auto status = operations_stub_->DeleteOperation(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return google::cloud::Status();
}

Status DefaultAlloyDBAdminStub::CancelOperation(
    grpc::ClientContext& context, Options const&,
    google::longrunning::CancelOperationRequest const& request) {
  google::protobuf::Empty response;
  auto status = operations_stub_->CancelOperation(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return google::cloud::Status();
}

future<StatusOr<google::longrunning::Operation>>
DefaultAlloyDBAdminStub::AsyncGetOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    // NOLINTNEXTLINE(performance-unnecessary-value-param)
    google::cloud::internal::ImmutableOptions,
    google::longrunning::GetOperationRequest const& request) {
  return internal::MakeUnaryRpcImpl<google::longrunning::GetOperationRequest,
                                    google::longrunning::Operation>(
      cq,
      [this](grpc::ClientContext* context,
             google::longrunning::GetOperationRequest const& request,
             grpc::CompletionQueue* cq) {
        return operations_->AsyncGetOperation(context, request, cq);
      },
      request, std::move(context));
}

future<Status> DefaultAlloyDBAdminStub::AsyncCancelOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    // NOLINTNEXTLINE(performance-unnecessary-value-param)
    google::cloud::internal::ImmutableOptions,
    google::longrunning::CancelOperationRequest const& request) {
  return internal::MakeUnaryRpcImpl<google::longrunning::CancelOperationRequest,
                                    google::protobuf::Empty>(
             cq,
             [this](grpc::ClientContext* context,
                    google::longrunning::CancelOperationRequest const& request,
                    grpc::CompletionQueue* cq) {
               return operations_->AsyncCancelOperation(context, request, cq);
             },
             request, std::move(context))
      .then([](future<StatusOr<google::protobuf::Empty>> f) {
        return f.get().status();
      });
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace alloydb_v1_internal
}  // namespace cloud
}  // namespace google
