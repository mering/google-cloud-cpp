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

#include "google/cloud/config/v1/internal/config_metadata_decorator.h"
#include "google/cloud/config/v1/config.grpc.pb.h"
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
namespace config_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

ConfigMetadata::ConfigMetadata(
    std::shared_ptr<ConfigStub> child,
    std::multimap<std::string, std::string> fixed_metadata,
    std::string api_client_header)
    : child_(std::move(child)),
      fixed_metadata_(std::move(fixed_metadata)),
      api_client_header_(
          api_client_header.empty()
              ? google::cloud::internal::GeneratedLibClientHeader()
              : std::move(api_client_header)) {}

StatusOr<google::cloud::config::v1::ListDeploymentsResponse>
ConfigMetadata::ListDeployments(
    grpc::ClientContext& context, Options const& options,
    google::cloud::config::v1::ListDeploymentsRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->ListDeployments(context, options, request);
}

StatusOr<google::cloud::config::v1::Deployment> ConfigMetadata::GetDeployment(
    grpc::ClientContext& context, Options const& options,
    google::cloud::config::v1::GetDeploymentRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->GetDeployment(context, options, request);
}

future<StatusOr<google::longrunning::Operation>>
ConfigMetadata::AsyncCreateDeployment(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::config::v1::CreateDeploymentRequest const& request) {
  SetMetadata(*context, *options,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->AsyncCreateDeployment(cq, std::move(context),
                                       std::move(options), request);
}

StatusOr<google::longrunning::Operation> ConfigMetadata::CreateDeployment(
    grpc::ClientContext& context, Options options,
    google::cloud::config::v1::CreateDeploymentRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->CreateDeployment(context, options, request);
}

future<StatusOr<google::longrunning::Operation>>
ConfigMetadata::AsyncUpdateDeployment(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::config::v1::UpdateDeploymentRequest const& request) {
  SetMetadata(*context, *options,
              absl::StrCat("deployment.name=",
                           internal::UrlEncode(request.deployment().name())));
  return child_->AsyncUpdateDeployment(cq, std::move(context),
                                       std::move(options), request);
}

StatusOr<google::longrunning::Operation> ConfigMetadata::UpdateDeployment(
    grpc::ClientContext& context, Options options,
    google::cloud::config::v1::UpdateDeploymentRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("deployment.name=",
                           internal::UrlEncode(request.deployment().name())));
  return child_->UpdateDeployment(context, options, request);
}

future<StatusOr<google::longrunning::Operation>>
ConfigMetadata::AsyncDeleteDeployment(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::config::v1::DeleteDeploymentRequest const& request) {
  SetMetadata(*context, *options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->AsyncDeleteDeployment(cq, std::move(context),
                                       std::move(options), request);
}

StatusOr<google::longrunning::Operation> ConfigMetadata::DeleteDeployment(
    grpc::ClientContext& context, Options options,
    google::cloud::config::v1::DeleteDeploymentRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->DeleteDeployment(context, options, request);
}

StatusOr<google::cloud::config::v1::ListRevisionsResponse>
ConfigMetadata::ListRevisions(
    grpc::ClientContext& context, Options const& options,
    google::cloud::config::v1::ListRevisionsRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->ListRevisions(context, options, request);
}

StatusOr<google::cloud::config::v1::Revision> ConfigMetadata::GetRevision(
    grpc::ClientContext& context, Options const& options,
    google::cloud::config::v1::GetRevisionRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->GetRevision(context, options, request);
}

StatusOr<google::cloud::config::v1::Resource> ConfigMetadata::GetResource(
    grpc::ClientContext& context, Options const& options,
    google::cloud::config::v1::GetResourceRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->GetResource(context, options, request);
}

StatusOr<google::cloud::config::v1::ListResourcesResponse>
ConfigMetadata::ListResources(
    grpc::ClientContext& context, Options const& options,
    google::cloud::config::v1::ListResourcesRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->ListResources(context, options, request);
}

StatusOr<google::cloud::config::v1::Statefile>
ConfigMetadata::ExportDeploymentStatefile(
    grpc::ClientContext& context, Options const& options,
    google::cloud::config::v1::ExportDeploymentStatefileRequest const&
        request) {
  SetMetadata(context, options,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->ExportDeploymentStatefile(context, options, request);
}

StatusOr<google::cloud::config::v1::Statefile>
ConfigMetadata::ExportRevisionStatefile(
    grpc::ClientContext& context, Options const& options,
    google::cloud::config::v1::ExportRevisionStatefileRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->ExportRevisionStatefile(context, options, request);
}

StatusOr<google::cloud::config::v1::Statefile> ConfigMetadata::ImportStatefile(
    grpc::ClientContext& context, Options const& options,
    google::cloud::config::v1::ImportStatefileRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->ImportStatefile(context, options, request);
}

Status ConfigMetadata::DeleteStatefile(
    grpc::ClientContext& context, Options const& options,
    google::cloud::config::v1::DeleteStatefileRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->DeleteStatefile(context, options, request);
}

future<StatusOr<google::longrunning::Operation>>
ConfigMetadata::AsyncLockDeployment(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::config::v1::LockDeploymentRequest const& request) {
  SetMetadata(*context, *options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->AsyncLockDeployment(cq, std::move(context), std::move(options),
                                     request);
}

StatusOr<google::longrunning::Operation> ConfigMetadata::LockDeployment(
    grpc::ClientContext& context, Options options,
    google::cloud::config::v1::LockDeploymentRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->LockDeployment(context, options, request);
}

future<StatusOr<google::longrunning::Operation>>
ConfigMetadata::AsyncUnlockDeployment(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::config::v1::UnlockDeploymentRequest const& request) {
  SetMetadata(*context, *options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->AsyncUnlockDeployment(cq, std::move(context),
                                       std::move(options), request);
}

StatusOr<google::longrunning::Operation> ConfigMetadata::UnlockDeployment(
    grpc::ClientContext& context, Options options,
    google::cloud::config::v1::UnlockDeploymentRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->UnlockDeployment(context, options, request);
}

StatusOr<google::cloud::config::v1::LockInfo> ConfigMetadata::ExportLockInfo(
    grpc::ClientContext& context, Options const& options,
    google::cloud::config::v1::ExportLockInfoRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->ExportLockInfo(context, options, request);
}

future<StatusOr<google::longrunning::Operation>>
ConfigMetadata::AsyncCreatePreview(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::config::v1::CreatePreviewRequest const& request) {
  SetMetadata(*context, *options,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->AsyncCreatePreview(cq, std::move(context), std::move(options),
                                    request);
}

StatusOr<google::longrunning::Operation> ConfigMetadata::CreatePreview(
    grpc::ClientContext& context, Options options,
    google::cloud::config::v1::CreatePreviewRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->CreatePreview(context, options, request);
}

StatusOr<google::cloud::config::v1::Preview> ConfigMetadata::GetPreview(
    grpc::ClientContext& context, Options const& options,
    google::cloud::config::v1::GetPreviewRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->GetPreview(context, options, request);
}

StatusOr<google::cloud::config::v1::ListPreviewsResponse>
ConfigMetadata::ListPreviews(
    grpc::ClientContext& context, Options const& options,
    google::cloud::config::v1::ListPreviewsRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->ListPreviews(context, options, request);
}

future<StatusOr<google::longrunning::Operation>>
ConfigMetadata::AsyncDeletePreview(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::config::v1::DeletePreviewRequest const& request) {
  SetMetadata(*context, *options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->AsyncDeletePreview(cq, std::move(context), std::move(options),
                                    request);
}

StatusOr<google::longrunning::Operation> ConfigMetadata::DeletePreview(
    grpc::ClientContext& context, Options options,
    google::cloud::config::v1::DeletePreviewRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->DeletePreview(context, options, request);
}

StatusOr<google::cloud::config::v1::ExportPreviewResultResponse>
ConfigMetadata::ExportPreviewResult(
    grpc::ClientContext& context, Options const& options,
    google::cloud::config::v1::ExportPreviewResultRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->ExportPreviewResult(context, options, request);
}

StatusOr<google::cloud::config::v1::ListTerraformVersionsResponse>
ConfigMetadata::ListTerraformVersions(
    grpc::ClientContext& context, Options const& options,
    google::cloud::config::v1::ListTerraformVersionsRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->ListTerraformVersions(context, options, request);
}

StatusOr<google::cloud::config::v1::TerraformVersion>
ConfigMetadata::GetTerraformVersion(
    grpc::ClientContext& context, Options const& options,
    google::cloud::config::v1::GetTerraformVersionRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->GetTerraformVersion(context, options, request);
}

StatusOr<google::cloud::location::ListLocationsResponse>
ConfigMetadata::ListLocations(
    grpc::ClientContext& context, Options const& options,
    google::cloud::location::ListLocationsRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->ListLocations(context, options, request);
}

StatusOr<google::cloud::location::Location> ConfigMetadata::GetLocation(
    grpc::ClientContext& context, Options const& options,
    google::cloud::location::GetLocationRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->GetLocation(context, options, request);
}

StatusOr<google::iam::v1::Policy> ConfigMetadata::SetIamPolicy(
    grpc::ClientContext& context, Options const& options,
    google::iam::v1::SetIamPolicyRequest const& request) {
  SetMetadata(
      context, options,
      absl::StrCat("resource=", internal::UrlEncode(request.resource())));
  return child_->SetIamPolicy(context, options, request);
}

StatusOr<google::iam::v1::Policy> ConfigMetadata::GetIamPolicy(
    grpc::ClientContext& context, Options const& options,
    google::iam::v1::GetIamPolicyRequest const& request) {
  SetMetadata(
      context, options,
      absl::StrCat("resource=", internal::UrlEncode(request.resource())));
  return child_->GetIamPolicy(context, options, request);
}

StatusOr<google::iam::v1::TestIamPermissionsResponse>
ConfigMetadata::TestIamPermissions(
    grpc::ClientContext& context, Options const& options,
    google::iam::v1::TestIamPermissionsRequest const& request) {
  SetMetadata(
      context, options,
      absl::StrCat("resource=", internal::UrlEncode(request.resource())));
  return child_->TestIamPermissions(context, options, request);
}

StatusOr<google::longrunning::ListOperationsResponse>
ConfigMetadata::ListOperations(
    grpc::ClientContext& context, Options const& options,
    google::longrunning::ListOperationsRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->ListOperations(context, options, request);
}

StatusOr<google::longrunning::Operation> ConfigMetadata::GetOperation(
    grpc::ClientContext& context, Options const& options,
    google::longrunning::GetOperationRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->GetOperation(context, options, request);
}

Status ConfigMetadata::DeleteOperation(
    grpc::ClientContext& context, Options const& options,
    google::longrunning::DeleteOperationRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->DeleteOperation(context, options, request);
}

Status ConfigMetadata::CancelOperation(
    grpc::ClientContext& context, Options const& options,
    google::longrunning::CancelOperationRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->CancelOperation(context, options, request);
}

future<StatusOr<google::longrunning::Operation>>
ConfigMetadata::AsyncGetOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::longrunning::GetOperationRequest const& request) {
  SetMetadata(*context, *options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->AsyncGetOperation(cq, std::move(context), std::move(options),
                                   request);
}

future<Status> ConfigMetadata::AsyncCancelOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::longrunning::CancelOperationRequest const& request) {
  SetMetadata(*context, *options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->AsyncCancelOperation(cq, std::move(context),
                                      std::move(options), request);
}

void ConfigMetadata::SetMetadata(grpc::ClientContext& context,
                                 Options const& options,
                                 std::string const& request_params) {
  context.AddMetadata("x-goog-request-params", request_params);
  SetMetadata(context, options);
}

void ConfigMetadata::SetMetadata(grpc::ClientContext& context,
                                 Options const& options) {
  google::cloud::internal::SetMetadata(context, options, fixed_metadata_,
                                       api_client_header_);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace config_v1_internal
}  // namespace cloud
}  // namespace google
