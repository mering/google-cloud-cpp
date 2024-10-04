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
// source: google/cloud/gkemulticloud/v1/aws_service.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_GKEMULTICLOUD_V1_INTERNAL_AWS_CLUSTERS_STUB_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_GKEMULTICLOUD_V1_INTERNAL_AWS_CLUSTERS_STUB_H

#include "google/cloud/completion_queue.h"
#include "google/cloud/future.h"
#include "google/cloud/options.h"
#include "google/cloud/status_or.h"
#include "google/cloud/version.h"
#include <google/cloud/gkemulticloud/v1/aws_service.grpc.pb.h>
#include <google/longrunning/operations.grpc.pb.h>
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace gkemulticloud_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class AwsClustersStub {
 public:
  virtual ~AwsClustersStub() = 0;

  virtual future<StatusOr<google::longrunning::Operation>>
  AsyncCreateAwsCluster(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::gkemulticloud::v1::CreateAwsClusterRequest const&
          request) = 0;

  virtual StatusOr<google::longrunning::Operation> CreateAwsCluster(
      grpc::ClientContext& context, Options options,
      google::cloud::gkemulticloud::v1::CreateAwsClusterRequest const&
          request) = 0;

  virtual future<StatusOr<google::longrunning::Operation>>
  AsyncUpdateAwsCluster(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::gkemulticloud::v1::UpdateAwsClusterRequest const&
          request) = 0;

  virtual StatusOr<google::longrunning::Operation> UpdateAwsCluster(
      grpc::ClientContext& context, Options options,
      google::cloud::gkemulticloud::v1::UpdateAwsClusterRequest const&
          request) = 0;

  virtual StatusOr<google::cloud::gkemulticloud::v1::AwsCluster> GetAwsCluster(
      grpc::ClientContext& context, Options const& options,
      google::cloud::gkemulticloud::v1::GetAwsClusterRequest const&
          request) = 0;

  virtual StatusOr<google::cloud::gkemulticloud::v1::ListAwsClustersResponse>
  ListAwsClusters(
      grpc::ClientContext& context, Options const& options,
      google::cloud::gkemulticloud::v1::ListAwsClustersRequest const&
          request) = 0;

  virtual future<StatusOr<google::longrunning::Operation>>
  AsyncDeleteAwsCluster(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::gkemulticloud::v1::DeleteAwsClusterRequest const&
          request) = 0;

  virtual StatusOr<google::longrunning::Operation> DeleteAwsCluster(
      grpc::ClientContext& context, Options options,
      google::cloud::gkemulticloud::v1::DeleteAwsClusterRequest const&
          request) = 0;

  virtual StatusOr<
      google::cloud::gkemulticloud::v1::GenerateAwsClusterAgentTokenResponse>
  GenerateAwsClusterAgentToken(
      grpc::ClientContext& context, Options const& options,
      google::cloud::gkemulticloud::v1::
          GenerateAwsClusterAgentTokenRequest const& request) = 0;

  virtual StatusOr<
      google::cloud::gkemulticloud::v1::GenerateAwsAccessTokenResponse>
  GenerateAwsAccessToken(
      grpc::ClientContext& context, Options const& options,
      google::cloud::gkemulticloud::v1::GenerateAwsAccessTokenRequest const&
          request) = 0;

  virtual future<StatusOr<google::longrunning::Operation>>
  AsyncCreateAwsNodePool(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::gkemulticloud::v1::CreateAwsNodePoolRequest const&
          request) = 0;

  virtual StatusOr<google::longrunning::Operation> CreateAwsNodePool(
      grpc::ClientContext& context, Options options,
      google::cloud::gkemulticloud::v1::CreateAwsNodePoolRequest const&
          request) = 0;

  virtual future<StatusOr<google::longrunning::Operation>>
  AsyncUpdateAwsNodePool(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::gkemulticloud::v1::UpdateAwsNodePoolRequest const&
          request) = 0;

  virtual StatusOr<google::longrunning::Operation> UpdateAwsNodePool(
      grpc::ClientContext& context, Options options,
      google::cloud::gkemulticloud::v1::UpdateAwsNodePoolRequest const&
          request) = 0;

  virtual future<StatusOr<google::longrunning::Operation>>
  AsyncRollbackAwsNodePoolUpdate(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::gkemulticloud::v1::RollbackAwsNodePoolUpdateRequest const&
          request) = 0;

  virtual StatusOr<google::longrunning::Operation> RollbackAwsNodePoolUpdate(
      grpc::ClientContext& context, Options options,
      google::cloud::gkemulticloud::v1::RollbackAwsNodePoolUpdateRequest const&
          request) = 0;

  virtual StatusOr<google::cloud::gkemulticloud::v1::AwsNodePool>
  GetAwsNodePool(grpc::ClientContext& context, Options const& options,
                 google::cloud::gkemulticloud::v1::GetAwsNodePoolRequest const&
                     request) = 0;

  virtual StatusOr<google::cloud::gkemulticloud::v1::ListAwsNodePoolsResponse>
  ListAwsNodePools(
      grpc::ClientContext& context, Options const& options,
      google::cloud::gkemulticloud::v1::ListAwsNodePoolsRequest const&
          request) = 0;

  virtual future<StatusOr<google::longrunning::Operation>>
  AsyncDeleteAwsNodePool(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::gkemulticloud::v1::DeleteAwsNodePoolRequest const&
          request) = 0;

  virtual StatusOr<google::longrunning::Operation> DeleteAwsNodePool(
      grpc::ClientContext& context, Options options,
      google::cloud::gkemulticloud::v1::DeleteAwsNodePoolRequest const&
          request) = 0;

  virtual StatusOr<google::cloud::gkemulticloud::v1::AwsOpenIdConfig>
  GetAwsOpenIdConfig(
      grpc::ClientContext& context, Options const& options,
      google::cloud::gkemulticloud::v1::GetAwsOpenIdConfigRequest const&
          request) = 0;

  virtual StatusOr<google::cloud::gkemulticloud::v1::AwsJsonWebKeys>
  GetAwsJsonWebKeys(
      grpc::ClientContext& context, Options const& options,
      google::cloud::gkemulticloud::v1::GetAwsJsonWebKeysRequest const&
          request) = 0;

  virtual StatusOr<google::cloud::gkemulticloud::v1::AwsServerConfig>
  GetAwsServerConfig(
      grpc::ClientContext& context, Options const& options,
      google::cloud::gkemulticloud::v1::GetAwsServerConfigRequest const&
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

class DefaultAwsClustersStub : public AwsClustersStub {
 public:
  DefaultAwsClustersStub(
      std::unique_ptr<
          google::cloud::gkemulticloud::v1::AwsClusters::StubInterface>
          grpc_stub,
      std::unique_ptr<google::longrunning::Operations::StubInterface>
          operations_stub,
      std::unique_ptr<google::longrunning::Operations::StubInterface>
          operations)
      : grpc_stub_(std::move(grpc_stub)),
        operations_stub_(std::move(operations_stub)),
        operations_(std::move(operations)) {}

  future<StatusOr<google::longrunning::Operation>> AsyncCreateAwsCluster(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::gkemulticloud::v1::CreateAwsClusterRequest const& request)
      override;

  StatusOr<google::longrunning::Operation> CreateAwsCluster(
      grpc::ClientContext& context, Options options,
      google::cloud::gkemulticloud::v1::CreateAwsClusterRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncUpdateAwsCluster(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::gkemulticloud::v1::UpdateAwsClusterRequest const& request)
      override;

  StatusOr<google::longrunning::Operation> UpdateAwsCluster(
      grpc::ClientContext& context, Options options,
      google::cloud::gkemulticloud::v1::UpdateAwsClusterRequest const& request)
      override;

  StatusOr<google::cloud::gkemulticloud::v1::AwsCluster> GetAwsCluster(
      grpc::ClientContext& context, Options const& options,
      google::cloud::gkemulticloud::v1::GetAwsClusterRequest const& request)
      override;

  StatusOr<google::cloud::gkemulticloud::v1::ListAwsClustersResponse>
  ListAwsClusters(
      grpc::ClientContext& context, Options const& options,
      google::cloud::gkemulticloud::v1::ListAwsClustersRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncDeleteAwsCluster(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::gkemulticloud::v1::DeleteAwsClusterRequest const& request)
      override;

  StatusOr<google::longrunning::Operation> DeleteAwsCluster(
      grpc::ClientContext& context, Options options,
      google::cloud::gkemulticloud::v1::DeleteAwsClusterRequest const& request)
      override;

  StatusOr<
      google::cloud::gkemulticloud::v1::GenerateAwsClusterAgentTokenResponse>
  GenerateAwsClusterAgentToken(
      grpc::ClientContext& context, Options const& options,
      google::cloud::gkemulticloud::v1::
          GenerateAwsClusterAgentTokenRequest const& request) override;

  StatusOr<google::cloud::gkemulticloud::v1::GenerateAwsAccessTokenResponse>
  GenerateAwsAccessToken(
      grpc::ClientContext& context, Options const& options,
      google::cloud::gkemulticloud::v1::GenerateAwsAccessTokenRequest const&
          request) override;

  future<StatusOr<google::longrunning::Operation>> AsyncCreateAwsNodePool(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::gkemulticloud::v1::CreateAwsNodePoolRequest const& request)
      override;

  StatusOr<google::longrunning::Operation> CreateAwsNodePool(
      grpc::ClientContext& context, Options options,
      google::cloud::gkemulticloud::v1::CreateAwsNodePoolRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncUpdateAwsNodePool(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::gkemulticloud::v1::UpdateAwsNodePoolRequest const& request)
      override;

  StatusOr<google::longrunning::Operation> UpdateAwsNodePool(
      grpc::ClientContext& context, Options options,
      google::cloud::gkemulticloud::v1::UpdateAwsNodePoolRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>>
  AsyncRollbackAwsNodePoolUpdate(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::gkemulticloud::v1::RollbackAwsNodePoolUpdateRequest const&
          request) override;

  StatusOr<google::longrunning::Operation> RollbackAwsNodePoolUpdate(
      grpc::ClientContext& context, Options options,
      google::cloud::gkemulticloud::v1::RollbackAwsNodePoolUpdateRequest const&
          request) override;

  StatusOr<google::cloud::gkemulticloud::v1::AwsNodePool> GetAwsNodePool(
      grpc::ClientContext& context, Options const& options,
      google::cloud::gkemulticloud::v1::GetAwsNodePoolRequest const& request)
      override;

  StatusOr<google::cloud::gkemulticloud::v1::ListAwsNodePoolsResponse>
  ListAwsNodePools(
      grpc::ClientContext& context, Options const& options,
      google::cloud::gkemulticloud::v1::ListAwsNodePoolsRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncDeleteAwsNodePool(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::gkemulticloud::v1::DeleteAwsNodePoolRequest const& request)
      override;

  StatusOr<google::longrunning::Operation> DeleteAwsNodePool(
      grpc::ClientContext& context, Options options,
      google::cloud::gkemulticloud::v1::DeleteAwsNodePoolRequest const& request)
      override;

  StatusOr<google::cloud::gkemulticloud::v1::AwsOpenIdConfig>
  GetAwsOpenIdConfig(
      grpc::ClientContext& context, Options const& options,
      google::cloud::gkemulticloud::v1::GetAwsOpenIdConfigRequest const&
          request) override;

  StatusOr<google::cloud::gkemulticloud::v1::AwsJsonWebKeys> GetAwsJsonWebKeys(
      grpc::ClientContext& context, Options const& options,
      google::cloud::gkemulticloud::v1::GetAwsJsonWebKeysRequest const& request)
      override;

  StatusOr<google::cloud::gkemulticloud::v1::AwsServerConfig>
  GetAwsServerConfig(
      grpc::ClientContext& context, Options const& options,
      google::cloud::gkemulticloud::v1::GetAwsServerConfigRequest const&
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
  std::unique_ptr<google::cloud::gkemulticloud::v1::AwsClusters::StubInterface>
      grpc_stub_;
  std::unique_ptr<google::longrunning::Operations::StubInterface>
      operations_stub_;
  std::unique_ptr<google::longrunning::Operations::StubInterface> operations_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace gkemulticloud_v1_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_GKEMULTICLOUD_V1_INTERNAL_AWS_CLUSTERS_STUB_H
