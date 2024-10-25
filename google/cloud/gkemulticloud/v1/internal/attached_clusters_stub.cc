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
// source: google/cloud/gkemulticloud/v1/attached_service.proto

#include "google/cloud/gkemulticloud/v1/internal/attached_clusters_stub.h"
#include "google/cloud/grpc_error_delegate.h"
#include "google/cloud/status_or.h"
#include "google/cloud/gkemulticloud/v1/attached_service.grpc.pb.h"
#include "google/longrunning/operations.grpc.pb.h"
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace gkemulticloud_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

AttachedClustersStub::~AttachedClustersStub() = default;

future<StatusOr<google::longrunning::Operation>>
DefaultAttachedClustersStub::AsyncCreateAttachedCluster(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions,
    google::cloud::gkemulticloud::v1::CreateAttachedClusterRequest const&
        request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::gkemulticloud::v1::CreateAttachedClusterRequest,
      google::longrunning::Operation>(
      cq,
      [this](
          grpc::ClientContext* context,
          google::cloud::gkemulticloud::v1::CreateAttachedClusterRequest const&
              request,
          grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncCreateAttachedCluster(context, request, cq);
      },
      request, std::move(context));
}

StatusOr<google::longrunning::Operation>
DefaultAttachedClustersStub::CreateAttachedCluster(
    grpc::ClientContext& context, Options,
    google::cloud::gkemulticloud::v1::CreateAttachedClusterRequest const&
        request) {
  google::longrunning::Operation response;
  auto status = grpc_stub_->CreateAttachedCluster(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

future<StatusOr<google::longrunning::Operation>>
DefaultAttachedClustersStub::AsyncUpdateAttachedCluster(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions,
    google::cloud::gkemulticloud::v1::UpdateAttachedClusterRequest const&
        request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::gkemulticloud::v1::UpdateAttachedClusterRequest,
      google::longrunning::Operation>(
      cq,
      [this](
          grpc::ClientContext* context,
          google::cloud::gkemulticloud::v1::UpdateAttachedClusterRequest const&
              request,
          grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncUpdateAttachedCluster(context, request, cq);
      },
      request, std::move(context));
}

StatusOr<google::longrunning::Operation>
DefaultAttachedClustersStub::UpdateAttachedCluster(
    grpc::ClientContext& context, Options,
    google::cloud::gkemulticloud::v1::UpdateAttachedClusterRequest const&
        request) {
  google::longrunning::Operation response;
  auto status = grpc_stub_->UpdateAttachedCluster(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

future<StatusOr<google::longrunning::Operation>>
DefaultAttachedClustersStub::AsyncImportAttachedCluster(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions,
    google::cloud::gkemulticloud::v1::ImportAttachedClusterRequest const&
        request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::gkemulticloud::v1::ImportAttachedClusterRequest,
      google::longrunning::Operation>(
      cq,
      [this](
          grpc::ClientContext* context,
          google::cloud::gkemulticloud::v1::ImportAttachedClusterRequest const&
              request,
          grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncImportAttachedCluster(context, request, cq);
      },
      request, std::move(context));
}

StatusOr<google::longrunning::Operation>
DefaultAttachedClustersStub::ImportAttachedCluster(
    grpc::ClientContext& context, Options,
    google::cloud::gkemulticloud::v1::ImportAttachedClusterRequest const&
        request) {
  google::longrunning::Operation response;
  auto status = grpc_stub_->ImportAttachedCluster(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::gkemulticloud::v1::AttachedCluster>
DefaultAttachedClustersStub::GetAttachedCluster(
    grpc::ClientContext& context, Options const&,
    google::cloud::gkemulticloud::v1::GetAttachedClusterRequest const&
        request) {
  google::cloud::gkemulticloud::v1::AttachedCluster response;
  auto status = grpc_stub_->GetAttachedCluster(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::gkemulticloud::v1::ListAttachedClustersResponse>
DefaultAttachedClustersStub::ListAttachedClusters(
    grpc::ClientContext& context, Options const&,
    google::cloud::gkemulticloud::v1::ListAttachedClustersRequest const&
        request) {
  google::cloud::gkemulticloud::v1::ListAttachedClustersResponse response;
  auto status = grpc_stub_->ListAttachedClusters(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

future<StatusOr<google::longrunning::Operation>>
DefaultAttachedClustersStub::AsyncDeleteAttachedCluster(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions,
    google::cloud::gkemulticloud::v1::DeleteAttachedClusterRequest const&
        request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::gkemulticloud::v1::DeleteAttachedClusterRequest,
      google::longrunning::Operation>(
      cq,
      [this](
          grpc::ClientContext* context,
          google::cloud::gkemulticloud::v1::DeleteAttachedClusterRequest const&
              request,
          grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncDeleteAttachedCluster(context, request, cq);
      },
      request, std::move(context));
}

StatusOr<google::longrunning::Operation>
DefaultAttachedClustersStub::DeleteAttachedCluster(
    grpc::ClientContext& context, Options,
    google::cloud::gkemulticloud::v1::DeleteAttachedClusterRequest const&
        request) {
  google::longrunning::Operation response;
  auto status = grpc_stub_->DeleteAttachedCluster(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::gkemulticloud::v1::AttachedServerConfig>
DefaultAttachedClustersStub::GetAttachedServerConfig(
    grpc::ClientContext& context, Options const&,
    google::cloud::gkemulticloud::v1::GetAttachedServerConfigRequest const&
        request) {
  google::cloud::gkemulticloud::v1::AttachedServerConfig response;
  auto status =
      grpc_stub_->GetAttachedServerConfig(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::gkemulticloud::v1::
             GenerateAttachedClusterInstallManifestResponse>
DefaultAttachedClustersStub::GenerateAttachedClusterInstallManifest(
    grpc::ClientContext& context, Options const&,
    google::cloud::gkemulticloud::v1::
        GenerateAttachedClusterInstallManifestRequest const& request) {
  google::cloud::gkemulticloud::v1::
      GenerateAttachedClusterInstallManifestResponse response;
  auto status = grpc_stub_->GenerateAttachedClusterInstallManifest(
      &context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<
    google::cloud::gkemulticloud::v1::GenerateAttachedClusterAgentTokenResponse>
DefaultAttachedClustersStub::GenerateAttachedClusterAgentToken(
    grpc::ClientContext& context, Options const&,
    google::cloud::gkemulticloud::v1::
        GenerateAttachedClusterAgentTokenRequest const& request) {
  google::cloud::gkemulticloud::v1::GenerateAttachedClusterAgentTokenResponse
      response;
  auto status = grpc_stub_->GenerateAttachedClusterAgentToken(&context, request,
                                                              &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::longrunning::ListOperationsResponse>
DefaultAttachedClustersStub::ListOperations(
    grpc::ClientContext& context, Options const&,
    google::longrunning::ListOperationsRequest const& request) {
  google::longrunning::ListOperationsResponse response;
  auto status = operations_stub_->ListOperations(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::longrunning::Operation>
DefaultAttachedClustersStub::GetOperation(
    grpc::ClientContext& context, Options const&,
    google::longrunning::GetOperationRequest const& request) {
  google::longrunning::Operation response;
  auto status = operations_stub_->GetOperation(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

Status DefaultAttachedClustersStub::DeleteOperation(
    grpc::ClientContext& context, Options const&,
    google::longrunning::DeleteOperationRequest const& request) {
  google::protobuf::Empty response;
  auto status = operations_stub_->DeleteOperation(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return google::cloud::Status();
}

Status DefaultAttachedClustersStub::CancelOperation(
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
DefaultAttachedClustersStub::AsyncGetOperation(
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

future<Status> DefaultAttachedClustersStub::AsyncCancelOperation(
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
}  // namespace gkemulticloud_v1_internal
}  // namespace cloud
}  // namespace google
