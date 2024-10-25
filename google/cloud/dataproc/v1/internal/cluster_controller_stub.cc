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
// source: google/cloud/dataproc/v1/clusters.proto

#include "google/cloud/dataproc/v1/internal/cluster_controller_stub.h"
#include "google/cloud/dataproc/v1/clusters.grpc.pb.h"
#include "google/cloud/grpc_error_delegate.h"
#include "google/cloud/status_or.h"
#include "google/longrunning/operations.grpc.pb.h"
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace dataproc_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

ClusterControllerStub::~ClusterControllerStub() = default;

future<StatusOr<google::longrunning::Operation>>
DefaultClusterControllerStub::AsyncCreateCluster(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions,
    google::cloud::dataproc::v1::CreateClusterRequest const& request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::dataproc::v1::CreateClusterRequest,
      google::longrunning::Operation>(
      cq,
      [this](grpc::ClientContext* context,
             google::cloud::dataproc::v1::CreateClusterRequest const& request,
             grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncCreateCluster(context, request, cq);
      },
      request, std::move(context));
}

StatusOr<google::longrunning::Operation>
DefaultClusterControllerStub::CreateCluster(
    grpc::ClientContext& context, Options,
    google::cloud::dataproc::v1::CreateClusterRequest const& request) {
  google::longrunning::Operation response;
  auto status = grpc_stub_->CreateCluster(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

future<StatusOr<google::longrunning::Operation>>
DefaultClusterControllerStub::AsyncUpdateCluster(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions,
    google::cloud::dataproc::v1::UpdateClusterRequest const& request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::dataproc::v1::UpdateClusterRequest,
      google::longrunning::Operation>(
      cq,
      [this](grpc::ClientContext* context,
             google::cloud::dataproc::v1::UpdateClusterRequest const& request,
             grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncUpdateCluster(context, request, cq);
      },
      request, std::move(context));
}

StatusOr<google::longrunning::Operation>
DefaultClusterControllerStub::UpdateCluster(
    grpc::ClientContext& context, Options,
    google::cloud::dataproc::v1::UpdateClusterRequest const& request) {
  google::longrunning::Operation response;
  auto status = grpc_stub_->UpdateCluster(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

future<StatusOr<google::longrunning::Operation>>
DefaultClusterControllerStub::AsyncStopCluster(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions,
    google::cloud::dataproc::v1::StopClusterRequest const& request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::dataproc::v1::StopClusterRequest,
      google::longrunning::Operation>(
      cq,
      [this](grpc::ClientContext* context,
             google::cloud::dataproc::v1::StopClusterRequest const& request,
             grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncStopCluster(context, request, cq);
      },
      request, std::move(context));
}

StatusOr<google::longrunning::Operation>
DefaultClusterControllerStub::StopCluster(
    grpc::ClientContext& context, Options,
    google::cloud::dataproc::v1::StopClusterRequest const& request) {
  google::longrunning::Operation response;
  auto status = grpc_stub_->StopCluster(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

future<StatusOr<google::longrunning::Operation>>
DefaultClusterControllerStub::AsyncStartCluster(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions,
    google::cloud::dataproc::v1::StartClusterRequest const& request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::dataproc::v1::StartClusterRequest,
      google::longrunning::Operation>(
      cq,
      [this](grpc::ClientContext* context,
             google::cloud::dataproc::v1::StartClusterRequest const& request,
             grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncStartCluster(context, request, cq);
      },
      request, std::move(context));
}

StatusOr<google::longrunning::Operation>
DefaultClusterControllerStub::StartCluster(
    grpc::ClientContext& context, Options,
    google::cloud::dataproc::v1::StartClusterRequest const& request) {
  google::longrunning::Operation response;
  auto status = grpc_stub_->StartCluster(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

future<StatusOr<google::longrunning::Operation>>
DefaultClusterControllerStub::AsyncDeleteCluster(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions,
    google::cloud::dataproc::v1::DeleteClusterRequest const& request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::dataproc::v1::DeleteClusterRequest,
      google::longrunning::Operation>(
      cq,
      [this](grpc::ClientContext* context,
             google::cloud::dataproc::v1::DeleteClusterRequest const& request,
             grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncDeleteCluster(context, request, cq);
      },
      request, std::move(context));
}

StatusOr<google::longrunning::Operation>
DefaultClusterControllerStub::DeleteCluster(
    grpc::ClientContext& context, Options,
    google::cloud::dataproc::v1::DeleteClusterRequest const& request) {
  google::longrunning::Operation response;
  auto status = grpc_stub_->DeleteCluster(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::dataproc::v1::Cluster>
DefaultClusterControllerStub::GetCluster(
    grpc::ClientContext& context, Options const&,
    google::cloud::dataproc::v1::GetClusterRequest const& request) {
  google::cloud::dataproc::v1::Cluster response;
  auto status = grpc_stub_->GetCluster(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::dataproc::v1::ListClustersResponse>
DefaultClusterControllerStub::ListClusters(
    grpc::ClientContext& context, Options const&,
    google::cloud::dataproc::v1::ListClustersRequest const& request) {
  google::cloud::dataproc::v1::ListClustersResponse response;
  auto status = grpc_stub_->ListClusters(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

future<StatusOr<google::longrunning::Operation>>
DefaultClusterControllerStub::AsyncDiagnoseCluster(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions,
    google::cloud::dataproc::v1::DiagnoseClusterRequest const& request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::dataproc::v1::DiagnoseClusterRequest,
      google::longrunning::Operation>(
      cq,
      [this](grpc::ClientContext* context,
             google::cloud::dataproc::v1::DiagnoseClusterRequest const& request,
             grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncDiagnoseCluster(context, request, cq);
      },
      request, std::move(context));
}

StatusOr<google::longrunning::Operation>
DefaultClusterControllerStub::DiagnoseCluster(
    grpc::ClientContext& context, Options,
    google::cloud::dataproc::v1::DiagnoseClusterRequest const& request) {
  google::longrunning::Operation response;
  auto status = grpc_stub_->DiagnoseCluster(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::iam::v1::Policy> DefaultClusterControllerStub::SetIamPolicy(
    grpc::ClientContext& context, Options const&,
    google::iam::v1::SetIamPolicyRequest const& request) {
  google::iam::v1::Policy response;
  auto status = iampolicy_stub_->SetIamPolicy(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::iam::v1::Policy> DefaultClusterControllerStub::GetIamPolicy(
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
DefaultClusterControllerStub::TestIamPermissions(
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
DefaultClusterControllerStub::ListOperations(
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
DefaultClusterControllerStub::GetOperation(
    grpc::ClientContext& context, Options const&,
    google::longrunning::GetOperationRequest const& request) {
  google::longrunning::Operation response;
  auto status = operations_stub_->GetOperation(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

Status DefaultClusterControllerStub::DeleteOperation(
    grpc::ClientContext& context, Options const&,
    google::longrunning::DeleteOperationRequest const& request) {
  google::protobuf::Empty response;
  auto status = operations_stub_->DeleteOperation(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return google::cloud::Status();
}

Status DefaultClusterControllerStub::CancelOperation(
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
DefaultClusterControllerStub::AsyncGetOperation(
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

future<Status> DefaultClusterControllerStub::AsyncCancelOperation(
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
}  // namespace dataproc_v1_internal
}  // namespace cloud
}  // namespace google
