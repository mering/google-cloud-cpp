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
// source: google/cloud/config/v1/config.proto

#include "google/cloud/config/v1/internal/config_stub.h"
#include "google/cloud/grpc_error_delegate.h"
#include "google/cloud/status_or.h"
#include "google/cloud/config/v1/config.grpc.pb.h"
#include "google/longrunning/operations.grpc.pb.h"
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace config_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

ConfigStub::~ConfigStub() = default;

StatusOr<google::cloud::config::v1::ListDeploymentsResponse>
DefaultConfigStub::ListDeployments(
    grpc::ClientContext& context, Options const&,
    google::cloud::config::v1::ListDeploymentsRequest const& request) {
  google::cloud::config::v1::ListDeploymentsResponse response;
  auto status = grpc_stub_->ListDeployments(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::config::v1::Deployment>
DefaultConfigStub::GetDeployment(
    grpc::ClientContext& context, Options const&,
    google::cloud::config::v1::GetDeploymentRequest const& request) {
  google::cloud::config::v1::Deployment response;
  auto status = grpc_stub_->GetDeployment(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

future<StatusOr<google::longrunning::Operation>>
DefaultConfigStub::AsyncCreateDeployment(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions,
    google::cloud::config::v1::CreateDeploymentRequest const& request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::config::v1::CreateDeploymentRequest,
      google::longrunning::Operation>(
      cq,
      [this](grpc::ClientContext* context,
             google::cloud::config::v1::CreateDeploymentRequest const& request,
             grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncCreateDeployment(context, request, cq);
      },
      request, std::move(context));
}

StatusOr<google::longrunning::Operation> DefaultConfigStub::CreateDeployment(
    grpc::ClientContext& context, Options,
    google::cloud::config::v1::CreateDeploymentRequest const& request) {
  google::longrunning::Operation response;
  auto status = grpc_stub_->CreateDeployment(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

future<StatusOr<google::longrunning::Operation>>
DefaultConfigStub::AsyncUpdateDeployment(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions,
    google::cloud::config::v1::UpdateDeploymentRequest const& request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::config::v1::UpdateDeploymentRequest,
      google::longrunning::Operation>(
      cq,
      [this](grpc::ClientContext* context,
             google::cloud::config::v1::UpdateDeploymentRequest const& request,
             grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncUpdateDeployment(context, request, cq);
      },
      request, std::move(context));
}

StatusOr<google::longrunning::Operation> DefaultConfigStub::UpdateDeployment(
    grpc::ClientContext& context, Options,
    google::cloud::config::v1::UpdateDeploymentRequest const& request) {
  google::longrunning::Operation response;
  auto status = grpc_stub_->UpdateDeployment(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

future<StatusOr<google::longrunning::Operation>>
DefaultConfigStub::AsyncDeleteDeployment(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions,
    google::cloud::config::v1::DeleteDeploymentRequest const& request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::config::v1::DeleteDeploymentRequest,
      google::longrunning::Operation>(
      cq,
      [this](grpc::ClientContext* context,
             google::cloud::config::v1::DeleteDeploymentRequest const& request,
             grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncDeleteDeployment(context, request, cq);
      },
      request, std::move(context));
}

StatusOr<google::longrunning::Operation> DefaultConfigStub::DeleteDeployment(
    grpc::ClientContext& context, Options,
    google::cloud::config::v1::DeleteDeploymentRequest const& request) {
  google::longrunning::Operation response;
  auto status = grpc_stub_->DeleteDeployment(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::config::v1::ListRevisionsResponse>
DefaultConfigStub::ListRevisions(
    grpc::ClientContext& context, Options const&,
    google::cloud::config::v1::ListRevisionsRequest const& request) {
  google::cloud::config::v1::ListRevisionsResponse response;
  auto status = grpc_stub_->ListRevisions(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::config::v1::Revision> DefaultConfigStub::GetRevision(
    grpc::ClientContext& context, Options const&,
    google::cloud::config::v1::GetRevisionRequest const& request) {
  google::cloud::config::v1::Revision response;
  auto status = grpc_stub_->GetRevision(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::config::v1::Resource> DefaultConfigStub::GetResource(
    grpc::ClientContext& context, Options const&,
    google::cloud::config::v1::GetResourceRequest const& request) {
  google::cloud::config::v1::Resource response;
  auto status = grpc_stub_->GetResource(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::config::v1::ListResourcesResponse>
DefaultConfigStub::ListResources(
    grpc::ClientContext& context, Options const&,
    google::cloud::config::v1::ListResourcesRequest const& request) {
  google::cloud::config::v1::ListResourcesResponse response;
  auto status = grpc_stub_->ListResources(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::config::v1::Statefile>
DefaultConfigStub::ExportDeploymentStatefile(
    grpc::ClientContext& context, Options const&,
    google::cloud::config::v1::ExportDeploymentStatefileRequest const&
        request) {
  google::cloud::config::v1::Statefile response;
  auto status =
      grpc_stub_->ExportDeploymentStatefile(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::config::v1::Statefile>
DefaultConfigStub::ExportRevisionStatefile(
    grpc::ClientContext& context, Options const&,
    google::cloud::config::v1::ExportRevisionStatefileRequest const& request) {
  google::cloud::config::v1::Statefile response;
  auto status =
      grpc_stub_->ExportRevisionStatefile(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::config::v1::Statefile>
DefaultConfigStub::ImportStatefile(
    grpc::ClientContext& context, Options const&,
    google::cloud::config::v1::ImportStatefileRequest const& request) {
  google::cloud::config::v1::Statefile response;
  auto status = grpc_stub_->ImportStatefile(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

Status DefaultConfigStub::DeleteStatefile(
    grpc::ClientContext& context, Options const&,
    google::cloud::config::v1::DeleteStatefileRequest const& request) {
  google::protobuf::Empty response;
  auto status = grpc_stub_->DeleteStatefile(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return google::cloud::Status();
}

future<StatusOr<google::longrunning::Operation>>
DefaultConfigStub::AsyncLockDeployment(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions,
    google::cloud::config::v1::LockDeploymentRequest const& request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::config::v1::LockDeploymentRequest,
      google::longrunning::Operation>(
      cq,
      [this](grpc::ClientContext* context,
             google::cloud::config::v1::LockDeploymentRequest const& request,
             grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncLockDeployment(context, request, cq);
      },
      request, std::move(context));
}

StatusOr<google::longrunning::Operation> DefaultConfigStub::LockDeployment(
    grpc::ClientContext& context, Options,
    google::cloud::config::v1::LockDeploymentRequest const& request) {
  google::longrunning::Operation response;
  auto status = grpc_stub_->LockDeployment(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

future<StatusOr<google::longrunning::Operation>>
DefaultConfigStub::AsyncUnlockDeployment(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions,
    google::cloud::config::v1::UnlockDeploymentRequest const& request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::config::v1::UnlockDeploymentRequest,
      google::longrunning::Operation>(
      cq,
      [this](grpc::ClientContext* context,
             google::cloud::config::v1::UnlockDeploymentRequest const& request,
             grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncUnlockDeployment(context, request, cq);
      },
      request, std::move(context));
}

StatusOr<google::longrunning::Operation> DefaultConfigStub::UnlockDeployment(
    grpc::ClientContext& context, Options,
    google::cloud::config::v1::UnlockDeploymentRequest const& request) {
  google::longrunning::Operation response;
  auto status = grpc_stub_->UnlockDeployment(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::config::v1::LockInfo> DefaultConfigStub::ExportLockInfo(
    grpc::ClientContext& context, Options const&,
    google::cloud::config::v1::ExportLockInfoRequest const& request) {
  google::cloud::config::v1::LockInfo response;
  auto status = grpc_stub_->ExportLockInfo(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

future<StatusOr<google::longrunning::Operation>>
DefaultConfigStub::AsyncCreatePreview(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions,
    google::cloud::config::v1::CreatePreviewRequest const& request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::config::v1::CreatePreviewRequest,
      google::longrunning::Operation>(
      cq,
      [this](grpc::ClientContext* context,
             google::cloud::config::v1::CreatePreviewRequest const& request,
             grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncCreatePreview(context, request, cq);
      },
      request, std::move(context));
}

StatusOr<google::longrunning::Operation> DefaultConfigStub::CreatePreview(
    grpc::ClientContext& context, Options,
    google::cloud::config::v1::CreatePreviewRequest const& request) {
  google::longrunning::Operation response;
  auto status = grpc_stub_->CreatePreview(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::config::v1::Preview> DefaultConfigStub::GetPreview(
    grpc::ClientContext& context, Options const&,
    google::cloud::config::v1::GetPreviewRequest const& request) {
  google::cloud::config::v1::Preview response;
  auto status = grpc_stub_->GetPreview(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::config::v1::ListPreviewsResponse>
DefaultConfigStub::ListPreviews(
    grpc::ClientContext& context, Options const&,
    google::cloud::config::v1::ListPreviewsRequest const& request) {
  google::cloud::config::v1::ListPreviewsResponse response;
  auto status = grpc_stub_->ListPreviews(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

future<StatusOr<google::longrunning::Operation>>
DefaultConfigStub::AsyncDeletePreview(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions,
    google::cloud::config::v1::DeletePreviewRequest const& request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::config::v1::DeletePreviewRequest,
      google::longrunning::Operation>(
      cq,
      [this](grpc::ClientContext* context,
             google::cloud::config::v1::DeletePreviewRequest const& request,
             grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncDeletePreview(context, request, cq);
      },
      request, std::move(context));
}

StatusOr<google::longrunning::Operation> DefaultConfigStub::DeletePreview(
    grpc::ClientContext& context, Options,
    google::cloud::config::v1::DeletePreviewRequest const& request) {
  google::longrunning::Operation response;
  auto status = grpc_stub_->DeletePreview(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::config::v1::ExportPreviewResultResponse>
DefaultConfigStub::ExportPreviewResult(
    grpc::ClientContext& context, Options const&,
    google::cloud::config::v1::ExportPreviewResultRequest const& request) {
  google::cloud::config::v1::ExportPreviewResultResponse response;
  auto status = grpc_stub_->ExportPreviewResult(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::config::v1::ListTerraformVersionsResponse>
DefaultConfigStub::ListTerraformVersions(
    grpc::ClientContext& context, Options const&,
    google::cloud::config::v1::ListTerraformVersionsRequest const& request) {
  google::cloud::config::v1::ListTerraformVersionsResponse response;
  auto status = grpc_stub_->ListTerraformVersions(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::config::v1::TerraformVersion>
DefaultConfigStub::GetTerraformVersion(
    grpc::ClientContext& context, Options const&,
    google::cloud::config::v1::GetTerraformVersionRequest const& request) {
  google::cloud::config::v1::TerraformVersion response;
  auto status = grpc_stub_->GetTerraformVersion(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::location::ListLocationsResponse>
DefaultConfigStub::ListLocations(
    grpc::ClientContext& context, Options const&,
    google::cloud::location::ListLocationsRequest const& request) {
  google::cloud::location::ListLocationsResponse response;
  auto status = locations_stub_->ListLocations(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::location::Location> DefaultConfigStub::GetLocation(
    grpc::ClientContext& context, Options const&,
    google::cloud::location::GetLocationRequest const& request) {
  google::cloud::location::Location response;
  auto status = locations_stub_->GetLocation(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::iam::v1::Policy> DefaultConfigStub::SetIamPolicy(
    grpc::ClientContext& context, Options const&,
    google::iam::v1::SetIamPolicyRequest const& request) {
  google::iam::v1::Policy response;
  auto status = iampolicy_stub_->SetIamPolicy(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::iam::v1::Policy> DefaultConfigStub::GetIamPolicy(
    grpc::ClientContext& context, Options const&,
    google::iam::v1::GetIamPolicyRequest const& request) {
  google::iam::v1::Policy response;
  auto status = iampolicy_stub_->GetIamPolicy(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::iam::v1::TestIamPermissionsResponse>
DefaultConfigStub::TestIamPermissions(
    grpc::ClientContext& context, Options const&,
    google::iam::v1::TestIamPermissionsRequest const& request) {
  google::iam::v1::TestIamPermissionsResponse response;
  auto status =
      iampolicy_stub_->TestIamPermissions(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::longrunning::ListOperationsResponse>
DefaultConfigStub::ListOperations(
    grpc::ClientContext& context, Options const&,
    google::longrunning::ListOperationsRequest const& request) {
  google::longrunning::ListOperationsResponse response;
  auto status = operations_stub_->ListOperations(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::longrunning::Operation> DefaultConfigStub::GetOperation(
    grpc::ClientContext& context, Options const&,
    google::longrunning::GetOperationRequest const& request) {
  google::longrunning::Operation response;
  auto status = operations_stub_->GetOperation(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

Status DefaultConfigStub::DeleteOperation(
    grpc::ClientContext& context, Options const&,
    google::longrunning::DeleteOperationRequest const& request) {
  google::protobuf::Empty response;
  auto status = operations_stub_->DeleteOperation(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return google::cloud::Status();
}

Status DefaultConfigStub::CancelOperation(
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
DefaultConfigStub::AsyncGetOperation(
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

future<Status> DefaultConfigStub::AsyncCancelOperation(
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
}  // namespace config_v1_internal
}  // namespace cloud
}  // namespace google
