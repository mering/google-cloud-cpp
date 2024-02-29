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
// source: generator/integration_tests/test.proto

#include "generator/integration_tests/golden/v1/internal/golden_thing_admin_stub.h"
#include "google/cloud/grpc_error_delegate.h"
#include "google/cloud/status_or.h"
#include <generator/integration_tests/test.grpc.pb.h>
#include <google/longrunning/operations.grpc.pb.h>
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace golden_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

GoldenThingAdminStub::~GoldenThingAdminStub() = default;

StatusOr<google::test::admin::database::v1::ListDatabasesResponse>
DefaultGoldenThingAdminStub::ListDatabases(
  grpc::ClientContext& context, Options const&,
  google::test::admin::database::v1::ListDatabasesRequest const& request) {
    google::test::admin::database::v1::ListDatabasesResponse response;
    auto status =
        grpc_stub_->ListDatabases(&context, request, &response);
    if (!status.ok()) {
      return google::cloud::MakeStatusFromRpcError(status);
    }
    return response;
}

future<StatusOr<google::longrunning::Operation>>
DefaultGoldenThingAdminStub::AsyncCreateDatabase(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions,
      google::test::admin::database::v1::CreateDatabaseRequest const& request) {
  return internal::MakeUnaryRpcImpl<google::test::admin::database::v1::CreateDatabaseRequest,
                                    google::longrunning::Operation>(
      cq,
      [this](grpc::ClientContext* context,
             google::test::admin::database::v1::CreateDatabaseRequest const& request,
             grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncCreateDatabase(context, request, cq);
      },
      request, std::move(context));
}

StatusOr<google::test::admin::database::v1::Database>
DefaultGoldenThingAdminStub::GetDatabase(
  grpc::ClientContext& context, Options const&,
  google::test::admin::database::v1::GetDatabaseRequest const& request) {
    google::test::admin::database::v1::Database response;
    auto status =
        grpc_stub_->GetDatabase(&context, request, &response);
    if (!status.ok()) {
      return google::cloud::MakeStatusFromRpcError(status);
    }
    return response;
}

future<StatusOr<google::longrunning::Operation>>
DefaultGoldenThingAdminStub::AsyncUpdateDatabaseDdl(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions,
      google::test::admin::database::v1::UpdateDatabaseDdlRequest const& request) {
  return internal::MakeUnaryRpcImpl<google::test::admin::database::v1::UpdateDatabaseDdlRequest,
                                    google::longrunning::Operation>(
      cq,
      [this](grpc::ClientContext* context,
             google::test::admin::database::v1::UpdateDatabaseDdlRequest const& request,
             grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncUpdateDatabaseDdl(context, request, cq);
      },
      request, std::move(context));
}

Status
DefaultGoldenThingAdminStub::DropDatabase(
  grpc::ClientContext& context, Options const&,
  google::test::admin::database::v1::DropDatabaseRequest const& request) {
    google::protobuf::Empty response;
    auto status =
        grpc_stub_->DropDatabase(&context, request, &response);
    if (!status.ok()) {
      return google::cloud::MakeStatusFromRpcError(status);
    }
    return google::cloud::Status();
}

StatusOr<google::test::admin::database::v1::GetDatabaseDdlResponse>
DefaultGoldenThingAdminStub::GetDatabaseDdl(
  grpc::ClientContext& context, Options const&,
  google::test::admin::database::v1::GetDatabaseDdlRequest const& request) {
    google::test::admin::database::v1::GetDatabaseDdlResponse response;
    auto status =
        grpc_stub_->GetDatabaseDdl(&context, request, &response);
    if (!status.ok()) {
      return google::cloud::MakeStatusFromRpcError(status);
    }
    return response;
}

StatusOr<google::iam::v1::Policy>
DefaultGoldenThingAdminStub::SetIamPolicy(
  grpc::ClientContext& context, Options const&,
  google::iam::v1::SetIamPolicyRequest const& request) {
    google::iam::v1::Policy response;
    auto status =
        grpc_stub_->SetIamPolicy(&context, request, &response);
    if (!status.ok()) {
      return google::cloud::MakeStatusFromRpcError(status);
    }
    return response;
}

StatusOr<google::iam::v1::Policy>
DefaultGoldenThingAdminStub::GetIamPolicy(
  grpc::ClientContext& context, Options const&,
  google::iam::v1::GetIamPolicyRequest const& request) {
    google::iam::v1::Policy response;
    auto status =
        grpc_stub_->GetIamPolicy(&context, request, &response);
    if (!status.ok()) {
      return google::cloud::MakeStatusFromRpcError(status);
    }
    return response;
}

StatusOr<google::iam::v1::TestIamPermissionsResponse>
DefaultGoldenThingAdminStub::TestIamPermissions(
  grpc::ClientContext& context, Options const&,
  google::iam::v1::TestIamPermissionsRequest const& request) {
    google::iam::v1::TestIamPermissionsResponse response;
    auto status =
        grpc_stub_->TestIamPermissions(&context, request, &response);
    if (!status.ok()) {
      return google::cloud::MakeStatusFromRpcError(status);
    }
    return response;
}

future<StatusOr<google::longrunning::Operation>>
DefaultGoldenThingAdminStub::AsyncCreateBackup(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions,
      google::test::admin::database::v1::CreateBackupRequest const& request) {
  return internal::MakeUnaryRpcImpl<google::test::admin::database::v1::CreateBackupRequest,
                                    google::longrunning::Operation>(
      cq,
      [this](grpc::ClientContext* context,
             google::test::admin::database::v1::CreateBackupRequest const& request,
             grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncCreateBackup(context, request, cq);
      },
      request, std::move(context));
}

StatusOr<google::test::admin::database::v1::Backup>
DefaultGoldenThingAdminStub::GetBackup(
  grpc::ClientContext& context, Options const&,
  google::test::admin::database::v1::GetBackupRequest const& request) {
    google::test::admin::database::v1::Backup response;
    auto status =
        grpc_stub_->GetBackup(&context, request, &response);
    if (!status.ok()) {
      return google::cloud::MakeStatusFromRpcError(status);
    }
    return response;
}

StatusOr<google::test::admin::database::v1::Backup>
DefaultGoldenThingAdminStub::UpdateBackup(
  grpc::ClientContext& context, Options const&,
  google::test::admin::database::v1::UpdateBackupRequest const& request) {
    google::test::admin::database::v1::Backup response;
    auto status =
        grpc_stub_->UpdateBackup(&context, request, &response);
    if (!status.ok()) {
      return google::cloud::MakeStatusFromRpcError(status);
    }
    return response;
}

Status
DefaultGoldenThingAdminStub::DeleteBackup(
  grpc::ClientContext& context, Options const&,
  google::test::admin::database::v1::DeleteBackupRequest const& request) {
    google::protobuf::Empty response;
    auto status =
        grpc_stub_->DeleteBackup(&context, request, &response);
    if (!status.ok()) {
      return google::cloud::MakeStatusFromRpcError(status);
    }
    return google::cloud::Status();
}

StatusOr<google::test::admin::database::v1::ListBackupsResponse>
DefaultGoldenThingAdminStub::ListBackups(
  grpc::ClientContext& context, Options const&,
  google::test::admin::database::v1::ListBackupsRequest const& request) {
    google::test::admin::database::v1::ListBackupsResponse response;
    auto status =
        grpc_stub_->ListBackups(&context, request, &response);
    if (!status.ok()) {
      return google::cloud::MakeStatusFromRpcError(status);
    }
    return response;
}

future<StatusOr<google::longrunning::Operation>>
DefaultGoldenThingAdminStub::AsyncRestoreDatabase(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions,
      google::test::admin::database::v1::RestoreDatabaseRequest const& request) {
  return internal::MakeUnaryRpcImpl<google::test::admin::database::v1::RestoreDatabaseRequest,
                                    google::longrunning::Operation>(
      cq,
      [this](grpc::ClientContext* context,
             google::test::admin::database::v1::RestoreDatabaseRequest const& request,
             grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncRestoreDatabase(context, request, cq);
      },
      request, std::move(context));
}

StatusOr<google::test::admin::database::v1::ListDatabaseOperationsResponse>
DefaultGoldenThingAdminStub::ListDatabaseOperations(
  grpc::ClientContext& context, Options const&,
  google::test::admin::database::v1::ListDatabaseOperationsRequest const& request) {
    google::test::admin::database::v1::ListDatabaseOperationsResponse response;
    auto status =
        grpc_stub_->ListDatabaseOperations(&context, request, &response);
    if (!status.ok()) {
      return google::cloud::MakeStatusFromRpcError(status);
    }
    return response;
}

StatusOr<google::test::admin::database::v1::ListBackupOperationsResponse>
DefaultGoldenThingAdminStub::ListBackupOperations(
  grpc::ClientContext& context, Options const&,
  google::test::admin::database::v1::ListBackupOperationsRequest const& request) {
    google::test::admin::database::v1::ListBackupOperationsResponse response;
    auto status =
        grpc_stub_->ListBackupOperations(&context, request, &response);
    if (!status.ok()) {
      return google::cloud::MakeStatusFromRpcError(status);
    }
    return response;
}

future<StatusOr<google::longrunning::Operation>>
DefaultGoldenThingAdminStub::AsyncLongRunningWithoutRouting(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions,
      google::test::admin::database::v1::RestoreDatabaseRequest const& request) {
  return internal::MakeUnaryRpcImpl<google::test::admin::database::v1::RestoreDatabaseRequest,
                                    google::longrunning::Operation>(
      cq,
      [this](grpc::ClientContext* context,
             google::test::admin::database::v1::RestoreDatabaseRequest const& request,
             grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncLongRunningWithoutRouting(context, request, cq);
      },
      request, std::move(context));
}

future<StatusOr<google::test::admin::database::v1::Database>>
DefaultGoldenThingAdminStub::AsyncGetDatabase(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    // NOLINTNEXTLINE(performance-unnecessary-value-param)
    google::cloud::internal::ImmutableOptions,
    google::test::admin::database::v1::GetDatabaseRequest const& request) {
  return internal::MakeUnaryRpcImpl<google::test::admin::database::v1::GetDatabaseRequest,
                                    google::test::admin::database::v1::Database>(
      cq,
      [this](grpc::ClientContext* context,
             google::test::admin::database::v1::GetDatabaseRequest const& request,
             grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncGetDatabase(context, request, cq);
      },
      request, std::move(context));
}

future<Status>
DefaultGoldenThingAdminStub::AsyncDropDatabase(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    // NOLINTNEXTLINE(performance-unnecessary-value-param)
    google::cloud::internal::ImmutableOptions,
    google::test::admin::database::v1::DropDatabaseRequest const& request) {
  return internal::MakeUnaryRpcImpl<google::test::admin::database::v1::DropDatabaseRequest,
                                    google::protobuf::Empty>(
      cq,
      [this](grpc::ClientContext* context,
             google::test::admin::database::v1::DropDatabaseRequest const& request,
             grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncDropDatabase(context, request, cq);
      },
      request, std::move(context))
          .then([](future<StatusOr<google::protobuf::Empty>> f) {
            return f.get().status();
          });
}

future<StatusOr<google::longrunning::Operation>>
DefaultGoldenThingAdminStub::AsyncGetOperation(
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

future<Status> DefaultGoldenThingAdminStub::AsyncCancelOperation(
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
}  // namespace golden_v1_internal
}  // namespace cloud
}  // namespace google
