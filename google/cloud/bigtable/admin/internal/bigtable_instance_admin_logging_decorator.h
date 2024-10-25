// Copyright 2021 Google LLC
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
// source: google/bigtable/admin/v2/bigtable_instance_admin.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_BIGTABLE_ADMIN_INTERNAL_BIGTABLE_INSTANCE_ADMIN_LOGGING_DECORATOR_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_BIGTABLE_ADMIN_INTERNAL_BIGTABLE_INSTANCE_ADMIN_LOGGING_DECORATOR_H

#include "google/cloud/bigtable/admin/internal/bigtable_instance_admin_stub.h"
#include "google/cloud/tracing_options.h"
#include "google/cloud/version.h"
#include "google/longrunning/operations.grpc.pb.h"
#include <memory>
#include <set>
#include <string>

namespace google {
namespace cloud {
namespace bigtable_admin_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class BigtableInstanceAdminLogging : public BigtableInstanceAdminStub {
 public:
  ~BigtableInstanceAdminLogging() override = default;
  BigtableInstanceAdminLogging(std::shared_ptr<BigtableInstanceAdminStub> child,
                               TracingOptions tracing_options,
                               std::set<std::string> const& components);

  future<StatusOr<google::longrunning::Operation>> AsyncCreateInstance(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::bigtable::admin::v2::CreateInstanceRequest const& request)
      override;

  StatusOr<google::longrunning::Operation> CreateInstance(
      grpc::ClientContext& context, Options options,
      google::bigtable::admin::v2::CreateInstanceRequest const& request)
      override;

  StatusOr<google::bigtable::admin::v2::Instance> GetInstance(
      grpc::ClientContext& context, Options const& options,
      google::bigtable::admin::v2::GetInstanceRequest const& request) override;

  StatusOr<google::bigtable::admin::v2::ListInstancesResponse> ListInstances(
      grpc::ClientContext& context, Options const& options,
      google::bigtable::admin::v2::ListInstancesRequest const& request)
      override;

  StatusOr<google::bigtable::admin::v2::Instance> UpdateInstance(
      grpc::ClientContext& context, Options const& options,
      google::bigtable::admin::v2::Instance const& request) override;

  future<StatusOr<google::longrunning::Operation>> AsyncPartialUpdateInstance(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::bigtable::admin::v2::PartialUpdateInstanceRequest const& request)
      override;

  StatusOr<google::longrunning::Operation> PartialUpdateInstance(
      grpc::ClientContext& context, Options options,
      google::bigtable::admin::v2::PartialUpdateInstanceRequest const& request)
      override;

  Status DeleteInstance(
      grpc::ClientContext& context, Options const& options,
      google::bigtable::admin::v2::DeleteInstanceRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncCreateCluster(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::bigtable::admin::v2::CreateClusterRequest const& request)
      override;

  StatusOr<google::longrunning::Operation> CreateCluster(
      grpc::ClientContext& context, Options options,
      google::bigtable::admin::v2::CreateClusterRequest const& request)
      override;

  StatusOr<google::bigtable::admin::v2::Cluster> GetCluster(
      grpc::ClientContext& context, Options const& options,
      google::bigtable::admin::v2::GetClusterRequest const& request) override;

  StatusOr<google::bigtable::admin::v2::ListClustersResponse> ListClusters(
      grpc::ClientContext& context, Options const& options,
      google::bigtable::admin::v2::ListClustersRequest const& request) override;

  future<StatusOr<google::longrunning::Operation>> AsyncUpdateCluster(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::bigtable::admin::v2::Cluster const& request) override;

  StatusOr<google::longrunning::Operation> UpdateCluster(
      grpc::ClientContext& context, Options options,
      google::bigtable::admin::v2::Cluster const& request) override;

  future<StatusOr<google::longrunning::Operation>> AsyncPartialUpdateCluster(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::bigtable::admin::v2::PartialUpdateClusterRequest const& request)
      override;

  StatusOr<google::longrunning::Operation> PartialUpdateCluster(
      grpc::ClientContext& context, Options options,
      google::bigtable::admin::v2::PartialUpdateClusterRequest const& request)
      override;

  Status DeleteCluster(grpc::ClientContext& context, Options const& options,
                       google::bigtable::admin::v2::DeleteClusterRequest const&
                           request) override;

  StatusOr<google::bigtable::admin::v2::AppProfile> CreateAppProfile(
      grpc::ClientContext& context, Options const& options,
      google::bigtable::admin::v2::CreateAppProfileRequest const& request)
      override;

  StatusOr<google::bigtable::admin::v2::AppProfile> GetAppProfile(
      grpc::ClientContext& context, Options const& options,
      google::bigtable::admin::v2::GetAppProfileRequest const& request)
      override;

  StatusOr<google::bigtable::admin::v2::ListAppProfilesResponse>
  ListAppProfiles(grpc::ClientContext& context, Options const& options,
                  google::bigtable::admin::v2::ListAppProfilesRequest const&
                      request) override;

  future<StatusOr<google::longrunning::Operation>> AsyncUpdateAppProfile(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::bigtable::admin::v2::UpdateAppProfileRequest const& request)
      override;

  StatusOr<google::longrunning::Operation> UpdateAppProfile(
      grpc::ClientContext& context, Options options,
      google::bigtable::admin::v2::UpdateAppProfileRequest const& request)
      override;

  Status DeleteAppProfile(
      grpc::ClientContext& context, Options const& options,
      google::bigtable::admin::v2::DeleteAppProfileRequest const& request)
      override;

  StatusOr<google::iam::v1::Policy> GetIamPolicy(
      grpc::ClientContext& context, Options const& options,
      google::iam::v1::GetIamPolicyRequest const& request) override;

  StatusOr<google::iam::v1::Policy> SetIamPolicy(
      grpc::ClientContext& context, Options const& options,
      google::iam::v1::SetIamPolicyRequest const& request) override;

  StatusOr<google::iam::v1::TestIamPermissionsResponse> TestIamPermissions(
      grpc::ClientContext& context, Options const& options,
      google::iam::v1::TestIamPermissionsRequest const& request) override;

  StatusOr<google::bigtable::admin::v2::ListHotTabletsResponse> ListHotTablets(
      grpc::ClientContext& context, Options const& options,
      google::bigtable::admin::v2::ListHotTabletsRequest const& request)
      override;

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
  std::shared_ptr<BigtableInstanceAdminStub> child_;
  TracingOptions tracing_options_;
};  // BigtableInstanceAdminLogging

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace bigtable_admin_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_BIGTABLE_ADMIN_INTERNAL_BIGTABLE_INSTANCE_ADMIN_LOGGING_DECORATOR_H
