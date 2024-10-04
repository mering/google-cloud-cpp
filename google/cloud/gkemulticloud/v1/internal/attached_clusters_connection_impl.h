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

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_GKEMULTICLOUD_V1_INTERNAL_ATTACHED_CLUSTERS_CONNECTION_IMPL_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_GKEMULTICLOUD_V1_INTERNAL_ATTACHED_CLUSTERS_CONNECTION_IMPL_H

#include "google/cloud/gkemulticloud/v1/attached_clusters_connection.h"
#include "google/cloud/gkemulticloud/v1/attached_clusters_connection_idempotency_policy.h"
#include "google/cloud/gkemulticloud/v1/attached_clusters_options.h"
#include "google/cloud/gkemulticloud/v1/internal/attached_clusters_retry_traits.h"
#include "google/cloud/gkemulticloud/v1/internal/attached_clusters_stub.h"
#include "google/cloud/background_threads.h"
#include "google/cloud/backoff_policy.h"
#include "google/cloud/future.h"
#include "google/cloud/options.h"
#include "google/cloud/polling_policy.h"
#include "google/cloud/status_or.h"
#include "google/cloud/stream_range.h"
#include "google/cloud/version.h"
#include <google/longrunning/operations.grpc.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace gkemulticloud_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class AttachedClustersConnectionImpl
    : public gkemulticloud_v1::AttachedClustersConnection {
 public:
  ~AttachedClustersConnectionImpl() override = default;

  AttachedClustersConnectionImpl(
      std::unique_ptr<google::cloud::BackgroundThreads> background,
      std::shared_ptr<gkemulticloud_v1_internal::AttachedClustersStub> stub,
      Options options);

  Options options() override { return options_; }

  future<StatusOr<google::cloud::gkemulticloud::v1::AttachedCluster>>
  CreateAttachedCluster(
      google::cloud::gkemulticloud::v1::CreateAttachedClusterRequest const&
          request) override;

  StatusOr<google::longrunning::Operation> CreateAttachedCluster(
      NoAwaitTag,
      google::cloud::gkemulticloud::v1::CreateAttachedClusterRequest const&
          request) override;

  future<StatusOr<google::cloud::gkemulticloud::v1::AttachedCluster>>
  CreateAttachedCluster(
      google::longrunning::Operation const& operation) override;

  future<StatusOr<google::cloud::gkemulticloud::v1::AttachedCluster>>
  UpdateAttachedCluster(
      google::cloud::gkemulticloud::v1::UpdateAttachedClusterRequest const&
          request) override;

  StatusOr<google::longrunning::Operation> UpdateAttachedCluster(
      NoAwaitTag,
      google::cloud::gkemulticloud::v1::UpdateAttachedClusterRequest const&
          request) override;

  future<StatusOr<google::cloud::gkemulticloud::v1::AttachedCluster>>
  UpdateAttachedCluster(
      google::longrunning::Operation const& operation) override;

  future<StatusOr<google::cloud::gkemulticloud::v1::AttachedCluster>>
  ImportAttachedCluster(
      google::cloud::gkemulticloud::v1::ImportAttachedClusterRequest const&
          request) override;

  StatusOr<google::longrunning::Operation> ImportAttachedCluster(
      NoAwaitTag,
      google::cloud::gkemulticloud::v1::ImportAttachedClusterRequest const&
          request) override;

  future<StatusOr<google::cloud::gkemulticloud::v1::AttachedCluster>>
  ImportAttachedCluster(
      google::longrunning::Operation const& operation) override;

  StatusOr<google::cloud::gkemulticloud::v1::AttachedCluster>
  GetAttachedCluster(
      google::cloud::gkemulticloud::v1::GetAttachedClusterRequest const&
          request) override;

  StreamRange<google::cloud::gkemulticloud::v1::AttachedCluster>
  ListAttachedClusters(
      google::cloud::gkemulticloud::v1::ListAttachedClustersRequest request)
      override;

  future<StatusOr<google::cloud::gkemulticloud::v1::OperationMetadata>>
  DeleteAttachedCluster(
      google::cloud::gkemulticloud::v1::DeleteAttachedClusterRequest const&
          request) override;

  StatusOr<google::longrunning::Operation> DeleteAttachedCluster(
      NoAwaitTag,
      google::cloud::gkemulticloud::v1::DeleteAttachedClusterRequest const&
          request) override;

  future<StatusOr<google::cloud::gkemulticloud::v1::OperationMetadata>>
  DeleteAttachedCluster(
      google::longrunning::Operation const& operation) override;

  StatusOr<google::cloud::gkemulticloud::v1::AttachedServerConfig>
  GetAttachedServerConfig(
      google::cloud::gkemulticloud::v1::GetAttachedServerConfigRequest const&
          request) override;

  StatusOr<google::cloud::gkemulticloud::v1::
               GenerateAttachedClusterInstallManifestResponse>
  GenerateAttachedClusterInstallManifest(
      google::cloud::gkemulticloud::v1::
          GenerateAttachedClusterInstallManifestRequest const& request)
      override;

  StatusOr<google::cloud::gkemulticloud::v1::
               GenerateAttachedClusterAgentTokenResponse>
  GenerateAttachedClusterAgentToken(
      google::cloud::gkemulticloud::v1::
          GenerateAttachedClusterAgentTokenRequest const& request) override;

  StreamRange<google::longrunning::Operation> ListOperations(
      google::longrunning::ListOperationsRequest request) override;

  StatusOr<google::longrunning::Operation> GetOperation(
      google::longrunning::GetOperationRequest const& request) override;

  Status DeleteOperation(
      google::longrunning::DeleteOperationRequest const& request) override;

  Status CancelOperation(
      google::longrunning::CancelOperationRequest const& request) override;

 private:
  std::unique_ptr<google::cloud::BackgroundThreads> background_;
  std::shared_ptr<gkemulticloud_v1_internal::AttachedClustersStub> stub_;
  Options options_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace gkemulticloud_v1_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_GKEMULTICLOUD_V1_INTERNAL_ATTACHED_CLUSTERS_CONNECTION_IMPL_H
