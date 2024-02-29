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
// source: google/cloud/baremetalsolution/v2/baremetalsolution.proto

#include "google/cloud/baremetalsolution/v2/internal/bare_metal_solution_stub.h"
#include "google/cloud/grpc_error_delegate.h"
#include "google/cloud/status_or.h"
#include <google/cloud/baremetalsolution/v2/baremetalsolution.grpc.pb.h>
#include <google/longrunning/operations.grpc.pb.h>
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace baremetalsolution_v2_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

BareMetalSolutionStub::~BareMetalSolutionStub() = default;

StatusOr<google::cloud::baremetalsolution::v2::ListInstancesResponse>
DefaultBareMetalSolutionStub::ListInstances(
    grpc::ClientContext& context, Options const&,
    google::cloud::baremetalsolution::v2::ListInstancesRequest const& request) {
  google::cloud::baremetalsolution::v2::ListInstancesResponse response;
  auto status = grpc_stub_->ListInstances(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::baremetalsolution::v2::Instance>
DefaultBareMetalSolutionStub::GetInstance(
    grpc::ClientContext& context, Options const&,
    google::cloud::baremetalsolution::v2::GetInstanceRequest const& request) {
  google::cloud::baremetalsolution::v2::Instance response;
  auto status = grpc_stub_->GetInstance(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

future<StatusOr<google::longrunning::Operation>>
DefaultBareMetalSolutionStub::AsyncUpdateInstance(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions,
    google::cloud::baremetalsolution::v2::UpdateInstanceRequest const&
        request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::baremetalsolution::v2::UpdateInstanceRequest,
      google::longrunning::Operation>(
      cq,
      [this](grpc::ClientContext* context,
             google::cloud::baremetalsolution::v2::UpdateInstanceRequest const&
                 request,
             grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncUpdateInstance(context, request, cq);
      },
      request, std::move(context));
}

StatusOr<google::cloud::baremetalsolution::v2::Instance>
DefaultBareMetalSolutionStub::RenameInstance(
    grpc::ClientContext& context, Options const&,
    google::cloud::baremetalsolution::v2::RenameInstanceRequest const&
        request) {
  google::cloud::baremetalsolution::v2::Instance response;
  auto status = grpc_stub_->RenameInstance(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

future<StatusOr<google::longrunning::Operation>>
DefaultBareMetalSolutionStub::AsyncResetInstance(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions,
    google::cloud::baremetalsolution::v2::ResetInstanceRequest const& request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::baremetalsolution::v2::ResetInstanceRequest,
      google::longrunning::Operation>(
      cq,
      [this](grpc::ClientContext* context,
             google::cloud::baremetalsolution::v2::ResetInstanceRequest const&
                 request,
             grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncResetInstance(context, request, cq);
      },
      request, std::move(context));
}

future<StatusOr<google::longrunning::Operation>>
DefaultBareMetalSolutionStub::AsyncStartInstance(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions,
    google::cloud::baremetalsolution::v2::StartInstanceRequest const& request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::baremetalsolution::v2::StartInstanceRequest,
      google::longrunning::Operation>(
      cq,
      [this](grpc::ClientContext* context,
             google::cloud::baremetalsolution::v2::StartInstanceRequest const&
                 request,
             grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncStartInstance(context, request, cq);
      },
      request, std::move(context));
}

future<StatusOr<google::longrunning::Operation>>
DefaultBareMetalSolutionStub::AsyncStopInstance(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions,
    google::cloud::baremetalsolution::v2::StopInstanceRequest const& request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::baremetalsolution::v2::StopInstanceRequest,
      google::longrunning::Operation>(
      cq,
      [this](grpc::ClientContext* context,
             google::cloud::baremetalsolution::v2::StopInstanceRequest const&
                 request,
             grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncStopInstance(context, request, cq);
      },
      request, std::move(context));
}

future<StatusOr<google::longrunning::Operation>>
DefaultBareMetalSolutionStub::AsyncEnableInteractiveSerialConsole(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions,
    google::cloud::baremetalsolution::v2::
        EnableInteractiveSerialConsoleRequest const& request) {
  return internal::MakeUnaryRpcImpl<google::cloud::baremetalsolution::v2::
                                        EnableInteractiveSerialConsoleRequest,
                                    google::longrunning::Operation>(
      cq,
      [this](grpc::ClientContext* context,
             google::cloud::baremetalsolution::v2::
                 EnableInteractiveSerialConsoleRequest const& request,
             grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncEnableInteractiveSerialConsole(context, request,
                                                               cq);
      },
      request, std::move(context));
}

future<StatusOr<google::longrunning::Operation>>
DefaultBareMetalSolutionStub::AsyncDisableInteractiveSerialConsole(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions,
    google::cloud::baremetalsolution::v2::
        DisableInteractiveSerialConsoleRequest const& request) {
  return internal::MakeUnaryRpcImpl<google::cloud::baremetalsolution::v2::
                                        DisableInteractiveSerialConsoleRequest,
                                    google::longrunning::Operation>(
      cq,
      [this](grpc::ClientContext* context,
             google::cloud::baremetalsolution::v2::
                 DisableInteractiveSerialConsoleRequest const& request,
             grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncDisableInteractiveSerialConsole(context,
                                                                request, cq);
      },
      request, std::move(context));
}

future<StatusOr<google::longrunning::Operation>>
DefaultBareMetalSolutionStub::AsyncDetachLun(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions,
    google::cloud::baremetalsolution::v2::DetachLunRequest const& request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::baremetalsolution::v2::DetachLunRequest,
      google::longrunning::Operation>(
      cq,
      [this](
          grpc::ClientContext* context,
          google::cloud::baremetalsolution::v2::DetachLunRequest const& request,
          grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncDetachLun(context, request, cq);
      },
      request, std::move(context));
}

StatusOr<google::cloud::baremetalsolution::v2::ListSSHKeysResponse>
DefaultBareMetalSolutionStub::ListSSHKeys(
    grpc::ClientContext& context, Options const&,
    google::cloud::baremetalsolution::v2::ListSSHKeysRequest const& request) {
  google::cloud::baremetalsolution::v2::ListSSHKeysResponse response;
  auto status = grpc_stub_->ListSSHKeys(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::baremetalsolution::v2::SSHKey>
DefaultBareMetalSolutionStub::CreateSSHKey(
    grpc::ClientContext& context, Options const&,
    google::cloud::baremetalsolution::v2::CreateSSHKeyRequest const& request) {
  google::cloud::baremetalsolution::v2::SSHKey response;
  auto status = grpc_stub_->CreateSSHKey(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

Status DefaultBareMetalSolutionStub::DeleteSSHKey(
    grpc::ClientContext& context, Options const&,
    google::cloud::baremetalsolution::v2::DeleteSSHKeyRequest const& request) {
  google::protobuf::Empty response;
  auto status = grpc_stub_->DeleteSSHKey(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return google::cloud::Status();
}

StatusOr<google::cloud::baremetalsolution::v2::ListVolumesResponse>
DefaultBareMetalSolutionStub::ListVolumes(
    grpc::ClientContext& context, Options const&,
    google::cloud::baremetalsolution::v2::ListVolumesRequest const& request) {
  google::cloud::baremetalsolution::v2::ListVolumesResponse response;
  auto status = grpc_stub_->ListVolumes(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::baremetalsolution::v2::Volume>
DefaultBareMetalSolutionStub::GetVolume(
    grpc::ClientContext& context, Options const&,
    google::cloud::baremetalsolution::v2::GetVolumeRequest const& request) {
  google::cloud::baremetalsolution::v2::Volume response;
  auto status = grpc_stub_->GetVolume(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

future<StatusOr<google::longrunning::Operation>>
DefaultBareMetalSolutionStub::AsyncUpdateVolume(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions,
    google::cloud::baremetalsolution::v2::UpdateVolumeRequest const& request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::baremetalsolution::v2::UpdateVolumeRequest,
      google::longrunning::Operation>(
      cq,
      [this](grpc::ClientContext* context,
             google::cloud::baremetalsolution::v2::UpdateVolumeRequest const&
                 request,
             grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncUpdateVolume(context, request, cq);
      },
      request, std::move(context));
}

StatusOr<google::cloud::baremetalsolution::v2::Volume>
DefaultBareMetalSolutionStub::RenameVolume(
    grpc::ClientContext& context, Options const&,
    google::cloud::baremetalsolution::v2::RenameVolumeRequest const& request) {
  google::cloud::baremetalsolution::v2::Volume response;
  auto status = grpc_stub_->RenameVolume(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

future<StatusOr<google::longrunning::Operation>>
DefaultBareMetalSolutionStub::AsyncEvictVolume(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions,
    google::cloud::baremetalsolution::v2::EvictVolumeRequest const& request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::baremetalsolution::v2::EvictVolumeRequest,
      google::longrunning::Operation>(
      cq,
      [this](grpc::ClientContext* context,
             google::cloud::baremetalsolution::v2::EvictVolumeRequest const&
                 request,
             grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncEvictVolume(context, request, cq);
      },
      request, std::move(context));
}

future<StatusOr<google::longrunning::Operation>>
DefaultBareMetalSolutionStub::AsyncResizeVolume(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions,
    google::cloud::baremetalsolution::v2::ResizeVolumeRequest const& request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::baremetalsolution::v2::ResizeVolumeRequest,
      google::longrunning::Operation>(
      cq,
      [this](grpc::ClientContext* context,
             google::cloud::baremetalsolution::v2::ResizeVolumeRequest const&
                 request,
             grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncResizeVolume(context, request, cq);
      },
      request, std::move(context));
}

StatusOr<google::cloud::baremetalsolution::v2::ListNetworksResponse>
DefaultBareMetalSolutionStub::ListNetworks(
    grpc::ClientContext& context, Options const&,
    google::cloud::baremetalsolution::v2::ListNetworksRequest const& request) {
  google::cloud::baremetalsolution::v2::ListNetworksResponse response;
  auto status = grpc_stub_->ListNetworks(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::baremetalsolution::v2::ListNetworkUsageResponse>
DefaultBareMetalSolutionStub::ListNetworkUsage(
    grpc::ClientContext& context, Options const&,
    google::cloud::baremetalsolution::v2::ListNetworkUsageRequest const&
        request) {
  google::cloud::baremetalsolution::v2::ListNetworkUsageResponse response;
  auto status = grpc_stub_->ListNetworkUsage(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::baremetalsolution::v2::Network>
DefaultBareMetalSolutionStub::GetNetwork(
    grpc::ClientContext& context, Options const&,
    google::cloud::baremetalsolution::v2::GetNetworkRequest const& request) {
  google::cloud::baremetalsolution::v2::Network response;
  auto status = grpc_stub_->GetNetwork(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

future<StatusOr<google::longrunning::Operation>>
DefaultBareMetalSolutionStub::AsyncUpdateNetwork(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions,
    google::cloud::baremetalsolution::v2::UpdateNetworkRequest const& request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::baremetalsolution::v2::UpdateNetworkRequest,
      google::longrunning::Operation>(
      cq,
      [this](grpc::ClientContext* context,
             google::cloud::baremetalsolution::v2::UpdateNetworkRequest const&
                 request,
             grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncUpdateNetwork(context, request, cq);
      },
      request, std::move(context));
}

StatusOr<google::cloud::baremetalsolution::v2::VolumeSnapshot>
DefaultBareMetalSolutionStub::CreateVolumeSnapshot(
    grpc::ClientContext& context, Options const&,
    google::cloud::baremetalsolution::v2::CreateVolumeSnapshotRequest const&
        request) {
  google::cloud::baremetalsolution::v2::VolumeSnapshot response;
  auto status = grpc_stub_->CreateVolumeSnapshot(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

future<StatusOr<google::longrunning::Operation>>
DefaultBareMetalSolutionStub::AsyncRestoreVolumeSnapshot(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions,
    google::cloud::baremetalsolution::v2::RestoreVolumeSnapshotRequest const&
        request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::baremetalsolution::v2::RestoreVolumeSnapshotRequest,
      google::longrunning::Operation>(
      cq,
      [this](grpc::ClientContext* context,
             google::cloud::baremetalsolution::v2::
                 RestoreVolumeSnapshotRequest const& request,
             grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncRestoreVolumeSnapshot(context, request, cq);
      },
      request, std::move(context));
}

Status DefaultBareMetalSolutionStub::DeleteVolumeSnapshot(
    grpc::ClientContext& context, Options const&,
    google::cloud::baremetalsolution::v2::DeleteVolumeSnapshotRequest const&
        request) {
  google::protobuf::Empty response;
  auto status = grpc_stub_->DeleteVolumeSnapshot(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return google::cloud::Status();
}

StatusOr<google::cloud::baremetalsolution::v2::VolumeSnapshot>
DefaultBareMetalSolutionStub::GetVolumeSnapshot(
    grpc::ClientContext& context, Options const&,
    google::cloud::baremetalsolution::v2::GetVolumeSnapshotRequest const&
        request) {
  google::cloud::baremetalsolution::v2::VolumeSnapshot response;
  auto status = grpc_stub_->GetVolumeSnapshot(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::baremetalsolution::v2::ListVolumeSnapshotsResponse>
DefaultBareMetalSolutionStub::ListVolumeSnapshots(
    grpc::ClientContext& context, Options const&,
    google::cloud::baremetalsolution::v2::ListVolumeSnapshotsRequest const&
        request) {
  google::cloud::baremetalsolution::v2::ListVolumeSnapshotsResponse response;
  auto status = grpc_stub_->ListVolumeSnapshots(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::baremetalsolution::v2::Lun>
DefaultBareMetalSolutionStub::GetLun(
    grpc::ClientContext& context, Options const&,
    google::cloud::baremetalsolution::v2::GetLunRequest const& request) {
  google::cloud::baremetalsolution::v2::Lun response;
  auto status = grpc_stub_->GetLun(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::baremetalsolution::v2::ListLunsResponse>
DefaultBareMetalSolutionStub::ListLuns(
    grpc::ClientContext& context, Options const&,
    google::cloud::baremetalsolution::v2::ListLunsRequest const& request) {
  google::cloud::baremetalsolution::v2::ListLunsResponse response;
  auto status = grpc_stub_->ListLuns(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

future<StatusOr<google::longrunning::Operation>>
DefaultBareMetalSolutionStub::AsyncEvictLun(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions,
    google::cloud::baremetalsolution::v2::EvictLunRequest const& request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::baremetalsolution::v2::EvictLunRequest,
      google::longrunning::Operation>(
      cq,
      [this](
          grpc::ClientContext* context,
          google::cloud::baremetalsolution::v2::EvictLunRequest const& request,
          grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncEvictLun(context, request, cq);
      },
      request, std::move(context));
}

StatusOr<google::cloud::baremetalsolution::v2::NfsShare>
DefaultBareMetalSolutionStub::GetNfsShare(
    grpc::ClientContext& context, Options const&,
    google::cloud::baremetalsolution::v2::GetNfsShareRequest const& request) {
  google::cloud::baremetalsolution::v2::NfsShare response;
  auto status = grpc_stub_->GetNfsShare(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::baremetalsolution::v2::ListNfsSharesResponse>
DefaultBareMetalSolutionStub::ListNfsShares(
    grpc::ClientContext& context, Options const&,
    google::cloud::baremetalsolution::v2::ListNfsSharesRequest const& request) {
  google::cloud::baremetalsolution::v2::ListNfsSharesResponse response;
  auto status = grpc_stub_->ListNfsShares(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

future<StatusOr<google::longrunning::Operation>>
DefaultBareMetalSolutionStub::AsyncUpdateNfsShare(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions,
    google::cloud::baremetalsolution::v2::UpdateNfsShareRequest const&
        request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::baremetalsolution::v2::UpdateNfsShareRequest,
      google::longrunning::Operation>(
      cq,
      [this](grpc::ClientContext* context,
             google::cloud::baremetalsolution::v2::UpdateNfsShareRequest const&
                 request,
             grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncUpdateNfsShare(context, request, cq);
      },
      request, std::move(context));
}

future<StatusOr<google::longrunning::Operation>>
DefaultBareMetalSolutionStub::AsyncCreateNfsShare(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions,
    google::cloud::baremetalsolution::v2::CreateNfsShareRequest const&
        request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::baremetalsolution::v2::CreateNfsShareRequest,
      google::longrunning::Operation>(
      cq,
      [this](grpc::ClientContext* context,
             google::cloud::baremetalsolution::v2::CreateNfsShareRequest const&
                 request,
             grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncCreateNfsShare(context, request, cq);
      },
      request, std::move(context));
}

StatusOr<google::cloud::baremetalsolution::v2::NfsShare>
DefaultBareMetalSolutionStub::RenameNfsShare(
    grpc::ClientContext& context, Options const&,
    google::cloud::baremetalsolution::v2::RenameNfsShareRequest const&
        request) {
  google::cloud::baremetalsolution::v2::NfsShare response;
  auto status = grpc_stub_->RenameNfsShare(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

future<StatusOr<google::longrunning::Operation>>
DefaultBareMetalSolutionStub::AsyncDeleteNfsShare(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions,
    google::cloud::baremetalsolution::v2::DeleteNfsShareRequest const&
        request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::baremetalsolution::v2::DeleteNfsShareRequest,
      google::longrunning::Operation>(
      cq,
      [this](grpc::ClientContext* context,
             google::cloud::baremetalsolution::v2::DeleteNfsShareRequest const&
                 request,
             grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncDeleteNfsShare(context, request, cq);
      },
      request, std::move(context));
}

StatusOr<google::cloud::baremetalsolution::v2::ListProvisioningQuotasResponse>
DefaultBareMetalSolutionStub::ListProvisioningQuotas(
    grpc::ClientContext& context, Options const&,
    google::cloud::baremetalsolution::v2::ListProvisioningQuotasRequest const&
        request) {
  google::cloud::baremetalsolution::v2::ListProvisioningQuotasResponse response;
  auto status =
      grpc_stub_->ListProvisioningQuotas(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::baremetalsolution::v2::SubmitProvisioningConfigResponse>
DefaultBareMetalSolutionStub::SubmitProvisioningConfig(
    grpc::ClientContext& context, Options const&,
    google::cloud::baremetalsolution::v2::SubmitProvisioningConfigRequest const&
        request) {
  google::cloud::baremetalsolution::v2::SubmitProvisioningConfigResponse
      response;
  auto status =
      grpc_stub_->SubmitProvisioningConfig(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::baremetalsolution::v2::ProvisioningConfig>
DefaultBareMetalSolutionStub::GetProvisioningConfig(
    grpc::ClientContext& context, Options const&,
    google::cloud::baremetalsolution::v2::GetProvisioningConfigRequest const&
        request) {
  google::cloud::baremetalsolution::v2::ProvisioningConfig response;
  auto status = grpc_stub_->GetProvisioningConfig(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::baremetalsolution::v2::ProvisioningConfig>
DefaultBareMetalSolutionStub::CreateProvisioningConfig(
    grpc::ClientContext& context, Options const&,
    google::cloud::baremetalsolution::v2::CreateProvisioningConfigRequest const&
        request) {
  google::cloud::baremetalsolution::v2::ProvisioningConfig response;
  auto status =
      grpc_stub_->CreateProvisioningConfig(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::baremetalsolution::v2::ProvisioningConfig>
DefaultBareMetalSolutionStub::UpdateProvisioningConfig(
    grpc::ClientContext& context, Options const&,
    google::cloud::baremetalsolution::v2::UpdateProvisioningConfigRequest const&
        request) {
  google::cloud::baremetalsolution::v2::ProvisioningConfig response;
  auto status =
      grpc_stub_->UpdateProvisioningConfig(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::baremetalsolution::v2::Network>
DefaultBareMetalSolutionStub::RenameNetwork(
    grpc::ClientContext& context, Options const&,
    google::cloud::baremetalsolution::v2::RenameNetworkRequest const& request) {
  google::cloud::baremetalsolution::v2::Network response;
  auto status = grpc_stub_->RenameNetwork(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::baremetalsolution::v2::ListOSImagesResponse>
DefaultBareMetalSolutionStub::ListOSImages(
    grpc::ClientContext& context, Options const&,
    google::cloud::baremetalsolution::v2::ListOSImagesRequest const& request) {
  google::cloud::baremetalsolution::v2::ListOSImagesResponse response;
  auto status = grpc_stub_->ListOSImages(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

future<StatusOr<google::longrunning::Operation>>
DefaultBareMetalSolutionStub::AsyncGetOperation(
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

future<Status> DefaultBareMetalSolutionStub::AsyncCancelOperation(
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
}  // namespace baremetalsolution_v2_internal
}  // namespace cloud
}  // namespace google
