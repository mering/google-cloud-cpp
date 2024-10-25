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
// source: google/cloud/workstations/v1/workstations.proto

#include "google/cloud/workstations/v1/internal/workstations_metadata_decorator.h"
#include "google/cloud/workstations/v1/workstations.grpc.pb.h"
#include "google/cloud/grpc_options.h"
#include "google/cloud/internal/absl_str_cat_quiet.h"
#include "google/cloud/internal/api_client_header.h"
#include "google/cloud/internal/url_encode.h"
#include "google/cloud/status_or.h"
#include <memory>
#include <string>
#include <utility>
#include <vector>

namespace google {
namespace cloud {
namespace workstations_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

WorkstationsMetadata::WorkstationsMetadata(
    std::shared_ptr<WorkstationsStub> child,
    std::multimap<std::string, std::string> fixed_metadata,
    std::string api_client_header)
    : child_(std::move(child)),
      fixed_metadata_(std::move(fixed_metadata)),
      api_client_header_(
          api_client_header.empty()
              ? google::cloud::internal::GeneratedLibClientHeader()
              : std::move(api_client_header)) {}

StatusOr<google::cloud::workstations::v1::WorkstationCluster>
WorkstationsMetadata::GetWorkstationCluster(
    grpc::ClientContext& context, Options const& options,
    google::cloud::workstations::v1::GetWorkstationClusterRequest const&
        request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->GetWorkstationCluster(context, options, request);
}

StatusOr<google::cloud::workstations::v1::ListWorkstationClustersResponse>
WorkstationsMetadata::ListWorkstationClusters(
    grpc::ClientContext& context, Options const& options,
    google::cloud::workstations::v1::ListWorkstationClustersRequest const&
        request) {
  SetMetadata(context, options,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->ListWorkstationClusters(context, options, request);
}

future<StatusOr<google::longrunning::Operation>>
WorkstationsMetadata::AsyncCreateWorkstationCluster(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::workstations::v1::CreateWorkstationClusterRequest const&
        request) {
  SetMetadata(*context, *options,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->AsyncCreateWorkstationCluster(cq, std::move(context),
                                               std::move(options), request);
}

StatusOr<google::longrunning::Operation>
WorkstationsMetadata::CreateWorkstationCluster(
    grpc::ClientContext& context, Options options,
    google::cloud::workstations::v1::CreateWorkstationClusterRequest const&
        request) {
  SetMetadata(context, options,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->CreateWorkstationCluster(context, options, request);
}

future<StatusOr<google::longrunning::Operation>>
WorkstationsMetadata::AsyncUpdateWorkstationCluster(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::workstations::v1::UpdateWorkstationClusterRequest const&
        request) {
  SetMetadata(
      *context, *options,
      absl::StrCat("workstation_cluster.name=",
                   internal::UrlEncode(request.workstation_cluster().name())));
  return child_->AsyncUpdateWorkstationCluster(cq, std::move(context),
                                               std::move(options), request);
}

StatusOr<google::longrunning::Operation>
WorkstationsMetadata::UpdateWorkstationCluster(
    grpc::ClientContext& context, Options options,
    google::cloud::workstations::v1::UpdateWorkstationClusterRequest const&
        request) {
  SetMetadata(
      context, options,
      absl::StrCat("workstation_cluster.name=",
                   internal::UrlEncode(request.workstation_cluster().name())));
  return child_->UpdateWorkstationCluster(context, options, request);
}

future<StatusOr<google::longrunning::Operation>>
WorkstationsMetadata::AsyncDeleteWorkstationCluster(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::workstations::v1::DeleteWorkstationClusterRequest const&
        request) {
  SetMetadata(*context, *options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->AsyncDeleteWorkstationCluster(cq, std::move(context),
                                               std::move(options), request);
}

StatusOr<google::longrunning::Operation>
WorkstationsMetadata::DeleteWorkstationCluster(
    grpc::ClientContext& context, Options options,
    google::cloud::workstations::v1::DeleteWorkstationClusterRequest const&
        request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->DeleteWorkstationCluster(context, options, request);
}

StatusOr<google::cloud::workstations::v1::WorkstationConfig>
WorkstationsMetadata::GetWorkstationConfig(
    grpc::ClientContext& context, Options const& options,
    google::cloud::workstations::v1::GetWorkstationConfigRequest const&
        request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->GetWorkstationConfig(context, options, request);
}

StatusOr<google::cloud::workstations::v1::ListWorkstationConfigsResponse>
WorkstationsMetadata::ListWorkstationConfigs(
    grpc::ClientContext& context, Options const& options,
    google::cloud::workstations::v1::ListWorkstationConfigsRequest const&
        request) {
  SetMetadata(context, options,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->ListWorkstationConfigs(context, options, request);
}

StatusOr<google::cloud::workstations::v1::ListUsableWorkstationConfigsResponse>
WorkstationsMetadata::ListUsableWorkstationConfigs(
    grpc::ClientContext& context, Options const& options,
    google::cloud::workstations::v1::ListUsableWorkstationConfigsRequest const&
        request) {
  SetMetadata(context, options,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->ListUsableWorkstationConfigs(context, options, request);
}

future<StatusOr<google::longrunning::Operation>>
WorkstationsMetadata::AsyncCreateWorkstationConfig(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::workstations::v1::CreateWorkstationConfigRequest const&
        request) {
  SetMetadata(*context, *options,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->AsyncCreateWorkstationConfig(cq, std::move(context),
                                              std::move(options), request);
}

StatusOr<google::longrunning::Operation>
WorkstationsMetadata::CreateWorkstationConfig(
    grpc::ClientContext& context, Options options,
    google::cloud::workstations::v1::CreateWorkstationConfigRequest const&
        request) {
  SetMetadata(context, options,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->CreateWorkstationConfig(context, options, request);
}

future<StatusOr<google::longrunning::Operation>>
WorkstationsMetadata::AsyncUpdateWorkstationConfig(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::workstations::v1::UpdateWorkstationConfigRequest const&
        request) {
  SetMetadata(
      *context, *options,
      absl::StrCat("workstation_config.name=",
                   internal::UrlEncode(request.workstation_config().name())));
  return child_->AsyncUpdateWorkstationConfig(cq, std::move(context),
                                              std::move(options), request);
}

StatusOr<google::longrunning::Operation>
WorkstationsMetadata::UpdateWorkstationConfig(
    grpc::ClientContext& context, Options options,
    google::cloud::workstations::v1::UpdateWorkstationConfigRequest const&
        request) {
  SetMetadata(
      context, options,
      absl::StrCat("workstation_config.name=",
                   internal::UrlEncode(request.workstation_config().name())));
  return child_->UpdateWorkstationConfig(context, options, request);
}

future<StatusOr<google::longrunning::Operation>>
WorkstationsMetadata::AsyncDeleteWorkstationConfig(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::workstations::v1::DeleteWorkstationConfigRequest const&
        request) {
  SetMetadata(*context, *options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->AsyncDeleteWorkstationConfig(cq, std::move(context),
                                              std::move(options), request);
}

StatusOr<google::longrunning::Operation>
WorkstationsMetadata::DeleteWorkstationConfig(
    grpc::ClientContext& context, Options options,
    google::cloud::workstations::v1::DeleteWorkstationConfigRequest const&
        request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->DeleteWorkstationConfig(context, options, request);
}

StatusOr<google::cloud::workstations::v1::Workstation>
WorkstationsMetadata::GetWorkstation(
    grpc::ClientContext& context, Options const& options,
    google::cloud::workstations::v1::GetWorkstationRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->GetWorkstation(context, options, request);
}

StatusOr<google::cloud::workstations::v1::ListWorkstationsResponse>
WorkstationsMetadata::ListWorkstations(
    grpc::ClientContext& context, Options const& options,
    google::cloud::workstations::v1::ListWorkstationsRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->ListWorkstations(context, options, request);
}

StatusOr<google::cloud::workstations::v1::ListUsableWorkstationsResponse>
WorkstationsMetadata::ListUsableWorkstations(
    grpc::ClientContext& context, Options const& options,
    google::cloud::workstations::v1::ListUsableWorkstationsRequest const&
        request) {
  SetMetadata(context, options,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->ListUsableWorkstations(context, options, request);
}

future<StatusOr<google::longrunning::Operation>>
WorkstationsMetadata::AsyncCreateWorkstation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::workstations::v1::CreateWorkstationRequest const& request) {
  SetMetadata(*context, *options,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->AsyncCreateWorkstation(cq, std::move(context),
                                        std::move(options), request);
}

StatusOr<google::longrunning::Operation>
WorkstationsMetadata::CreateWorkstation(
    grpc::ClientContext& context, Options options,
    google::cloud::workstations::v1::CreateWorkstationRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->CreateWorkstation(context, options, request);
}

future<StatusOr<google::longrunning::Operation>>
WorkstationsMetadata::AsyncUpdateWorkstation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::workstations::v1::UpdateWorkstationRequest const& request) {
  SetMetadata(*context, *options,
              absl::StrCat("workstation.name=",
                           internal::UrlEncode(request.workstation().name())));
  return child_->AsyncUpdateWorkstation(cq, std::move(context),
                                        std::move(options), request);
}

StatusOr<google::longrunning::Operation>
WorkstationsMetadata::UpdateWorkstation(
    grpc::ClientContext& context, Options options,
    google::cloud::workstations::v1::UpdateWorkstationRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("workstation.name=",
                           internal::UrlEncode(request.workstation().name())));
  return child_->UpdateWorkstation(context, options, request);
}

future<StatusOr<google::longrunning::Operation>>
WorkstationsMetadata::AsyncDeleteWorkstation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::workstations::v1::DeleteWorkstationRequest const& request) {
  SetMetadata(*context, *options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->AsyncDeleteWorkstation(cq, std::move(context),
                                        std::move(options), request);
}

StatusOr<google::longrunning::Operation>
WorkstationsMetadata::DeleteWorkstation(
    grpc::ClientContext& context, Options options,
    google::cloud::workstations::v1::DeleteWorkstationRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->DeleteWorkstation(context, options, request);
}

future<StatusOr<google::longrunning::Operation>>
WorkstationsMetadata::AsyncStartWorkstation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::workstations::v1::StartWorkstationRequest const& request) {
  SetMetadata(*context, *options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->AsyncStartWorkstation(cq, std::move(context),
                                       std::move(options), request);
}

StatusOr<google::longrunning::Operation> WorkstationsMetadata::StartWorkstation(
    grpc::ClientContext& context, Options options,
    google::cloud::workstations::v1::StartWorkstationRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->StartWorkstation(context, options, request);
}

future<StatusOr<google::longrunning::Operation>>
WorkstationsMetadata::AsyncStopWorkstation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::workstations::v1::StopWorkstationRequest const& request) {
  SetMetadata(*context, *options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->AsyncStopWorkstation(cq, std::move(context),
                                      std::move(options), request);
}

StatusOr<google::longrunning::Operation> WorkstationsMetadata::StopWorkstation(
    grpc::ClientContext& context, Options options,
    google::cloud::workstations::v1::StopWorkstationRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->StopWorkstation(context, options, request);
}

StatusOr<google::cloud::workstations::v1::GenerateAccessTokenResponse>
WorkstationsMetadata::GenerateAccessToken(
    grpc::ClientContext& context, Options const& options,
    google::cloud::workstations::v1::GenerateAccessTokenRequest const&
        request) {
  SetMetadata(
      context, options,
      absl::StrCat("workstation=", internal::UrlEncode(request.workstation())));
  return child_->GenerateAccessToken(context, options, request);
}

StatusOr<google::iam::v1::Policy> WorkstationsMetadata::SetIamPolicy(
    grpc::ClientContext& context, Options const& options,
    google::iam::v1::SetIamPolicyRequest const& request) {
  SetMetadata(
      context, options,
      absl::StrCat("resource=", internal::UrlEncode(request.resource())));
  return child_->SetIamPolicy(context, options, request);
}

StatusOr<google::iam::v1::Policy> WorkstationsMetadata::GetIamPolicy(
    grpc::ClientContext& context, Options const& options,
    google::iam::v1::GetIamPolicyRequest const& request) {
  SetMetadata(
      context, options,
      absl::StrCat("resource=", internal::UrlEncode(request.resource())));
  return child_->GetIamPolicy(context, options, request);
}

StatusOr<google::iam::v1::TestIamPermissionsResponse>
WorkstationsMetadata::TestIamPermissions(
    grpc::ClientContext& context, Options const& options,
    google::iam::v1::TestIamPermissionsRequest const& request) {
  SetMetadata(
      context, options,
      absl::StrCat("resource=", internal::UrlEncode(request.resource())));
  return child_->TestIamPermissions(context, options, request);
}

StatusOr<google::longrunning::ListOperationsResponse>
WorkstationsMetadata::ListOperations(
    grpc::ClientContext& context, Options const& options,
    google::longrunning::ListOperationsRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->ListOperations(context, options, request);
}

StatusOr<google::longrunning::Operation> WorkstationsMetadata::GetOperation(
    grpc::ClientContext& context, Options const& options,
    google::longrunning::GetOperationRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->GetOperation(context, options, request);
}

Status WorkstationsMetadata::DeleteOperation(
    grpc::ClientContext& context, Options const& options,
    google::longrunning::DeleteOperationRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->DeleteOperation(context, options, request);
}

Status WorkstationsMetadata::CancelOperation(
    grpc::ClientContext& context, Options const& options,
    google::longrunning::CancelOperationRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->CancelOperation(context, options, request);
}

future<StatusOr<google::longrunning::Operation>>
WorkstationsMetadata::AsyncGetOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::longrunning::GetOperationRequest const& request) {
  SetMetadata(*context, *options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->AsyncGetOperation(cq, std::move(context), std::move(options),
                                   request);
}

future<Status> WorkstationsMetadata::AsyncCancelOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::longrunning::CancelOperationRequest const& request) {
  SetMetadata(*context, *options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->AsyncCancelOperation(cq, std::move(context),
                                      std::move(options), request);
}

void WorkstationsMetadata::SetMetadata(grpc::ClientContext& context,
                                       Options const& options,
                                       std::string const& request_params) {
  context.AddMetadata("x-goog-request-params", request_params);
  SetMetadata(context, options);
}

void WorkstationsMetadata::SetMetadata(grpc::ClientContext& context,
                                       Options const& options) {
  google::cloud::internal::SetMetadata(context, options, fixed_metadata_,
                                       api_client_header_);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace workstations_v1_internal
}  // namespace cloud
}  // namespace google
