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
// source: google/cloud/compute/target_pools/v1/target_pools.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_TARGET_POOLS_V1_INTERNAL_TARGET_POOLS_REST_STUB_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_TARGET_POOLS_V1_INTERNAL_TARGET_POOLS_REST_STUB_H

#include "google/cloud/completion_queue.h"
#include "google/cloud/internal/rest_client.h"
#include "google/cloud/internal/rest_context.h"
#include "google/cloud/status_or.h"
#include "google/cloud/version.h"
#include "google/cloud/compute/region_operations/v1/region_operations.pb.h"
#include "google/cloud/compute/target_pools/v1/target_pools.pb.h"
#include <memory>

namespace google {
namespace cloud {
namespace compute_target_pools_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class TargetPoolsRestStub {
 public:
  virtual ~TargetPoolsRestStub() = default;

  virtual future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  AsyncAddHealthCheck(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<google::cloud::rest_internal::RestContext> rest_context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::cpp::compute::target_pools::v1::
          AddHealthCheckRequest const& request) = 0;

  virtual StatusOr<google::cloud::cpp::compute::v1::Operation> AddHealthCheck(
      google::cloud::rest_internal::RestContext& rest_context,
      Options const& options,
      google::cloud::cpp::compute::target_pools::v1::
          AddHealthCheckRequest const& request) = 0;

  virtual future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  AsyncAddInstance(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<google::cloud::rest_internal::RestContext> rest_context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::cpp::compute::target_pools::v1::AddInstanceRequest const&
          request) = 0;

  virtual StatusOr<google::cloud::cpp::compute::v1::Operation> AddInstance(
      google::cloud::rest_internal::RestContext& rest_context,
      Options const& options,
      google::cloud::cpp::compute::target_pools::v1::AddInstanceRequest const&
          request) = 0;

  virtual StatusOr<google::cloud::cpp::compute::v1::TargetPoolAggregatedList>
  AggregatedListTargetPools(
      google::cloud::rest_internal::RestContext& rest_context,
      Options const& options,
      google::cloud::cpp::compute::target_pools::v1::
          AggregatedListTargetPoolsRequest const& request) = 0;

  virtual future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  AsyncDeleteTargetPool(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<google::cloud::rest_internal::RestContext> rest_context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::cpp::compute::target_pools::v1::
          DeleteTargetPoolRequest const& request) = 0;

  virtual StatusOr<google::cloud::cpp::compute::v1::Operation> DeleteTargetPool(
      google::cloud::rest_internal::RestContext& rest_context,
      Options const& options,
      google::cloud::cpp::compute::target_pools::v1::
          DeleteTargetPoolRequest const& request) = 0;

  virtual StatusOr<google::cloud::cpp::compute::v1::TargetPool> GetTargetPool(
      google::cloud::rest_internal::RestContext& rest_context,
      Options const& options,
      google::cloud::cpp::compute::target_pools::v1::GetTargetPoolRequest const&
          request) = 0;

  virtual StatusOr<google::cloud::cpp::compute::v1::TargetPoolInstanceHealth>
  GetHealth(
      google::cloud::rest_internal::RestContext& rest_context,
      Options const& options,
      google::cloud::cpp::compute::target_pools::v1::GetHealthRequest const&
          request) = 0;

  virtual future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  AsyncInsertTargetPool(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<google::cloud::rest_internal::RestContext> rest_context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::cpp::compute::target_pools::v1::
          InsertTargetPoolRequest const& request) = 0;

  virtual StatusOr<google::cloud::cpp::compute::v1::Operation> InsertTargetPool(
      google::cloud::rest_internal::RestContext& rest_context,
      Options const& options,
      google::cloud::cpp::compute::target_pools::v1::
          InsertTargetPoolRequest const& request) = 0;

  virtual StatusOr<google::cloud::cpp::compute::v1::TargetPoolList>
  ListTargetPools(google::cloud::rest_internal::RestContext& rest_context,
                  Options const& options,
                  google::cloud::cpp::compute::target_pools::v1::
                      ListTargetPoolsRequest const& request) = 0;

  virtual future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  AsyncRemoveHealthCheck(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<google::cloud::rest_internal::RestContext> rest_context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::cpp::compute::target_pools::v1::
          RemoveHealthCheckRequest const& request) = 0;

  virtual StatusOr<google::cloud::cpp::compute::v1::Operation>
  RemoveHealthCheck(google::cloud::rest_internal::RestContext& rest_context,
                    Options const& options,
                    google::cloud::cpp::compute::target_pools::v1::
                        RemoveHealthCheckRequest const& request) = 0;

  virtual future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  AsyncRemoveInstance(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<google::cloud::rest_internal::RestContext> rest_context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::cpp::compute::target_pools::v1::
          RemoveInstanceRequest const& request) = 0;

  virtual StatusOr<google::cloud::cpp::compute::v1::Operation> RemoveInstance(
      google::cloud::rest_internal::RestContext& rest_context,
      Options const& options,
      google::cloud::cpp::compute::target_pools::v1::
          RemoveInstanceRequest const& request) = 0;

  virtual future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  AsyncSetBackup(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<google::cloud::rest_internal::RestContext> rest_context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::cpp::compute::target_pools::v1::SetBackupRequest const&
          request) = 0;

  virtual StatusOr<google::cloud::cpp::compute::v1::Operation> SetBackup(
      google::cloud::rest_internal::RestContext& rest_context,
      Options const& options,
      google::cloud::cpp::compute::target_pools::v1::SetBackupRequest const&
          request) = 0;

  virtual future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  AsyncSetSecurityPolicy(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<google::cloud::rest_internal::RestContext> rest_context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::cpp::compute::target_pools::v1::
          SetSecurityPolicyRequest const& request) = 0;

  virtual StatusOr<google::cloud::cpp::compute::v1::Operation>
  SetSecurityPolicy(google::cloud::rest_internal::RestContext& rest_context,
                    Options const& options,
                    google::cloud::cpp::compute::target_pools::v1::
                        SetSecurityPolicyRequest const& request) = 0;

  virtual future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  AsyncGetOperation(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<google::cloud::rest_internal::RestContext> rest_context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::cpp::compute::region_operations::v1::
          GetOperationRequest const& request) = 0;

  virtual future<Status> AsyncCancelOperation(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<google::cloud::rest_internal::RestContext> rest_context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::cpp::compute::region_operations::v1::
          DeleteOperationRequest const& request) = 0;
};

class DefaultTargetPoolsRestStub : public TargetPoolsRestStub {
 public:
  ~DefaultTargetPoolsRestStub() override = default;

  explicit DefaultTargetPoolsRestStub(Options options);
  DefaultTargetPoolsRestStub(
      std::shared_ptr<rest_internal::RestClient> service,
      std::shared_ptr<rest_internal::RestClient> operations, Options options);

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  AsyncAddHealthCheck(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<google::cloud::rest_internal::RestContext> rest_context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::cpp::compute::target_pools::v1::
          AddHealthCheckRequest const& request) override;

  StatusOr<google::cloud::cpp::compute::v1::Operation> AddHealthCheck(
      google::cloud::rest_internal::RestContext& rest_context,
      Options const& options,
      google::cloud::cpp::compute::target_pools::v1::
          AddHealthCheckRequest const& request) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>> AsyncAddInstance(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<google::cloud::rest_internal::RestContext> rest_context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::cpp::compute::target_pools::v1::AddInstanceRequest const&
          request) override;

  StatusOr<google::cloud::cpp::compute::v1::Operation> AddInstance(
      google::cloud::rest_internal::RestContext& rest_context,
      Options const& options,
      google::cloud::cpp::compute::target_pools::v1::AddInstanceRequest const&
          request) override;

  StatusOr<google::cloud::cpp::compute::v1::TargetPoolAggregatedList>
  AggregatedListTargetPools(
      google::cloud::rest_internal::RestContext& rest_context,
      Options const& options,
      google::cloud::cpp::compute::target_pools::v1::
          AggregatedListTargetPoolsRequest const& request) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  AsyncDeleteTargetPool(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<google::cloud::rest_internal::RestContext> rest_context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::cpp::compute::target_pools::v1::
          DeleteTargetPoolRequest const& request) override;

  StatusOr<google::cloud::cpp::compute::v1::Operation> DeleteTargetPool(
      google::cloud::rest_internal::RestContext& rest_context,
      Options const& options,
      google::cloud::cpp::compute::target_pools::v1::
          DeleteTargetPoolRequest const& request) override;

  StatusOr<google::cloud::cpp::compute::v1::TargetPool> GetTargetPool(
      google::cloud::rest_internal::RestContext& rest_context,
      Options const& options,
      google::cloud::cpp::compute::target_pools::v1::GetTargetPoolRequest const&
          request) override;

  StatusOr<google::cloud::cpp::compute::v1::TargetPoolInstanceHealth> GetHealth(
      google::cloud::rest_internal::RestContext& rest_context,
      Options const& options,
      google::cloud::cpp::compute::target_pools::v1::GetHealthRequest const&
          request) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  AsyncInsertTargetPool(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<google::cloud::rest_internal::RestContext> rest_context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::cpp::compute::target_pools::v1::
          InsertTargetPoolRequest const& request) override;

  StatusOr<google::cloud::cpp::compute::v1::Operation> InsertTargetPool(
      google::cloud::rest_internal::RestContext& rest_context,
      Options const& options,
      google::cloud::cpp::compute::target_pools::v1::
          InsertTargetPoolRequest const& request) override;

  StatusOr<google::cloud::cpp::compute::v1::TargetPoolList> ListTargetPools(
      google::cloud::rest_internal::RestContext& rest_context,
      Options const& options,
      google::cloud::cpp::compute::target_pools::v1::
          ListTargetPoolsRequest const& request) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  AsyncRemoveHealthCheck(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<google::cloud::rest_internal::RestContext> rest_context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::cpp::compute::target_pools::v1::
          RemoveHealthCheckRequest const& request) override;

  StatusOr<google::cloud::cpp::compute::v1::Operation> RemoveHealthCheck(
      google::cloud::rest_internal::RestContext& rest_context,
      Options const& options,
      google::cloud::cpp::compute::target_pools::v1::
          RemoveHealthCheckRequest const& request) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  AsyncRemoveInstance(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<google::cloud::rest_internal::RestContext> rest_context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::cpp::compute::target_pools::v1::
          RemoveInstanceRequest const& request) override;

  StatusOr<google::cloud::cpp::compute::v1::Operation> RemoveInstance(
      google::cloud::rest_internal::RestContext& rest_context,
      Options const& options,
      google::cloud::cpp::compute::target_pools::v1::
          RemoveInstanceRequest const& request) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>> AsyncSetBackup(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<google::cloud::rest_internal::RestContext> rest_context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::cpp::compute::target_pools::v1::SetBackupRequest const&
          request) override;

  StatusOr<google::cloud::cpp::compute::v1::Operation> SetBackup(
      google::cloud::rest_internal::RestContext& rest_context,
      Options const& options,
      google::cloud::cpp::compute::target_pools::v1::SetBackupRequest const&
          request) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  AsyncSetSecurityPolicy(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<google::cloud::rest_internal::RestContext> rest_context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::cpp::compute::target_pools::v1::
          SetSecurityPolicyRequest const& request) override;

  StatusOr<google::cloud::cpp::compute::v1::Operation> SetSecurityPolicy(
      google::cloud::rest_internal::RestContext& rest_context,
      Options const& options,
      google::cloud::cpp::compute::target_pools::v1::
          SetSecurityPolicyRequest const& request) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  AsyncGetOperation(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<google::cloud::rest_internal::RestContext> rest_context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::cpp::compute::region_operations::v1::
          GetOperationRequest const& request) override;

  future<Status> AsyncCancelOperation(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<google::cloud::rest_internal::RestContext> rest_context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::cpp::compute::region_operations::v1::
          DeleteOperationRequest const& request) override;

 private:
  std::shared_ptr<rest_internal::RestClient> service_;
  std::shared_ptr<rest_internal::RestClient> operations_;
  Options options_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_target_pools_v1_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_TARGET_POOLS_V1_INTERNAL_TARGET_POOLS_REST_STUB_H
