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

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_GKEMULTICLOUD_V1_INTERNAL_ATTACHED_CLUSTERS_STUB_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_GKEMULTICLOUD_V1_INTERNAL_ATTACHED_CLUSTERS_STUB_H

#include "google/cloud/gkemulticloud/v1/attached_service.grpc.pb.h"
#include "google/cloud/completion_queue.h"
#include "google/cloud/future.h"
#include "google/cloud/options.h"
#include "google/cloud/status_or.h"
#include "google/cloud/version.h"
#include "google/longrunning/operations.grpc.pb.h"
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace gkemulticloud_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class AttachedClustersStub {
 public:
  virtual ~AttachedClustersStub() = 0;

  virtual future<StatusOr<google::longrunning::Operation>>
  AsyncCreateAttachedCluster(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::gkemulticloud::v1::CreateAttachedClusterRequest const&
          request) = 0;

  virtual StatusOr<google::longrunning::Operation> CreateAttachedCluster(
      grpc::ClientContext& context, Options options,
      google::cloud::gkemulticloud::v1::CreateAttachedClusterRequest const&
          request) = 0;

  virtual future<StatusOr<google::longrunning::Operation>>
  AsyncUpdateAttachedCluster(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::gkemulticloud::v1::UpdateAttachedClusterRequest const&
          request) = 0;

  virtual StatusOr<google::longrunning::Operation> UpdateAttachedCluster(
      grpc::ClientContext& context, Options options,
      google::cloud::gkemulticloud::v1::UpdateAttachedClusterRequest const&
          request) = 0;

  virtual future<StatusOr<google::longrunning::Operation>>
  AsyncImportAttachedCluster(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::gkemulticloud::v1::ImportAttachedClusterRequest const&
          request) = 0;

  virtual StatusOr<google::longrunning::Operation> ImportAttachedCluster(
      grpc::ClientContext& context, Options options,
      google::cloud::gkemulticloud::v1::ImportAttachedClusterRequest const&
          request) = 0;

  virtual StatusOr<google::cloud::gkemulticloud::v1::AttachedCluster>
  GetAttachedCluster(
      grpc::ClientContext& context, Options const& options,
      google::cloud::gkemulticloud::v1::GetAttachedClusterRequest const&
          request) = 0;

  virtual StatusOr<
      google::cloud::gkemulticloud::v1::ListAttachedClustersResponse>
  ListAttachedClusters(
      grpc::ClientContext& context, Options const& options,
      google::cloud::gkemulticloud::v1::ListAttachedClustersRequest const&
          request) = 0;

  virtual future<StatusOr<google::longrunning::Operation>>
  AsyncDeleteAttachedCluster(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::gkemulticloud::v1::DeleteAttachedClusterRequest const&
          request) = 0;

  virtual StatusOr<google::longrunning::Operation> DeleteAttachedCluster(
      grpc::ClientContext& context, Options options,
      google::cloud::gkemulticloud::v1::DeleteAttachedClusterRequest const&
          request) = 0;

  virtual StatusOr<google::cloud::gkemulticloud::v1::AttachedServerConfig>
  GetAttachedServerConfig(
      grpc::ClientContext& context, Options const& options,
      google::cloud::gkemulticloud::v1::GetAttachedServerConfigRequest const&
          request) = 0;

  virtual StatusOr<google::cloud::gkemulticloud::v1::
                       GenerateAttachedClusterInstallManifestResponse>
  GenerateAttachedClusterInstallManifest(
      grpc::ClientContext& context, Options const& options,
      google::cloud::gkemulticloud::v1::
          GenerateAttachedClusterInstallManifestRequest const& request) = 0;

  virtual StatusOr<google::cloud::gkemulticloud::v1::
                       GenerateAttachedClusterAgentTokenResponse>
  GenerateAttachedClusterAgentToken(
      grpc::ClientContext& context, Options const& options,
      google::cloud::gkemulticloud::v1::
          GenerateAttachedClusterAgentTokenRequest const& request) = 0;

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

class DefaultAttachedClustersStub : public AttachedClustersStub {
 public:
  DefaultAttachedClustersStub(
      std::unique_ptr<
          google::cloud::gkemulticloud::v1::AttachedClusters::StubInterface>
          grpc_stub,
      std::unique_ptr<google::longrunning::Operations::StubInterface>
          operations_stub,
      std::unique_ptr<google::longrunning::Operations::StubInterface>
          operations)
      : grpc_stub_(std::move(grpc_stub)),
        operations_stub_(std::move(operations_stub)),
        operations_(std::move(operations)) {}

  future<StatusOr<google::longrunning::Operation>> AsyncCreateAttachedCluster(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::gkemulticloud::v1::CreateAttachedClusterRequest const&
          request) override;

  StatusOr<google::longrunning::Operation> CreateAttachedCluster(
      grpc::ClientContext& context, Options options,
      google::cloud::gkemulticloud::v1::CreateAttachedClusterRequest const&
          request) override;

  future<StatusOr<google::longrunning::Operation>> AsyncUpdateAttachedCluster(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::gkemulticloud::v1::UpdateAttachedClusterRequest const&
          request) override;

  StatusOr<google::longrunning::Operation> UpdateAttachedCluster(
      grpc::ClientContext& context, Options options,
      google::cloud::gkemulticloud::v1::UpdateAttachedClusterRequest const&
          request) override;

  future<StatusOr<google::longrunning::Operation>> AsyncImportAttachedCluster(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::gkemulticloud::v1::ImportAttachedClusterRequest const&
          request) override;

  StatusOr<google::longrunning::Operation> ImportAttachedCluster(
      grpc::ClientContext& context, Options options,
      google::cloud::gkemulticloud::v1::ImportAttachedClusterRequest const&
          request) override;

  StatusOr<google::cloud::gkemulticloud::v1::AttachedCluster>
  GetAttachedCluster(
      grpc::ClientContext& context, Options const& options,
      google::cloud::gkemulticloud::v1::GetAttachedClusterRequest const&
          request) override;

  StatusOr<google::cloud::gkemulticloud::v1::ListAttachedClustersResponse>
  ListAttachedClusters(
      grpc::ClientContext& context, Options const& options,
      google::cloud::gkemulticloud::v1::ListAttachedClustersRequest const&
          request) override;

  future<StatusOr<google::longrunning::Operation>> AsyncDeleteAttachedCluster(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::gkemulticloud::v1::DeleteAttachedClusterRequest const&
          request) override;

  StatusOr<google::longrunning::Operation> DeleteAttachedCluster(
      grpc::ClientContext& context, Options options,
      google::cloud::gkemulticloud::v1::DeleteAttachedClusterRequest const&
          request) override;

  StatusOr<google::cloud::gkemulticloud::v1::AttachedServerConfig>
  GetAttachedServerConfig(
      grpc::ClientContext& context, Options const& options,
      google::cloud::gkemulticloud::v1::GetAttachedServerConfigRequest const&
          request) override;

  StatusOr<google::cloud::gkemulticloud::v1::
               GenerateAttachedClusterInstallManifestResponse>
  GenerateAttachedClusterInstallManifest(
      grpc::ClientContext& context, Options const& options,
      google::cloud::gkemulticloud::v1::
          GenerateAttachedClusterInstallManifestRequest const& request)
      override;

  StatusOr<google::cloud::gkemulticloud::v1::
               GenerateAttachedClusterAgentTokenResponse>
  GenerateAttachedClusterAgentToken(
      grpc::ClientContext& context, Options const& options,
      google::cloud::gkemulticloud::v1::
          GenerateAttachedClusterAgentTokenRequest const& request) override;

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
      google::cloud::gkemulticloud::v1::AttachedClusters::StubInterface>
      grpc_stub_;
  std::unique_ptr<google::longrunning::Operations::StubInterface>
      operations_stub_;
  std::unique_ptr<google::longrunning::Operations::StubInterface> operations_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace gkemulticloud_v1_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_GKEMULTICLOUD_V1_INTERNAL_ATTACHED_CLUSTERS_STUB_H
