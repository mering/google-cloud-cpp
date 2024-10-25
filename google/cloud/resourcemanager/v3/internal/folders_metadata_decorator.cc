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
// source: google/cloud/resourcemanager/v3/folders.proto

#include "google/cloud/resourcemanager/v3/internal/folders_metadata_decorator.h"
#include "google/cloud/grpc_options.h"
#include "google/cloud/internal/absl_str_cat_quiet.h"
#include "google/cloud/internal/api_client_header.h"
#include "google/cloud/internal/url_encode.h"
#include "google/cloud/status_or.h"
#include "google/cloud/resourcemanager/v3/folders.grpc.pb.h"
#include <memory>
#include <string>
#include <utility>
#include <vector>

namespace google {
namespace cloud {
namespace resourcemanager_v3_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

FoldersMetadata::FoldersMetadata(
    std::shared_ptr<FoldersStub> child,
    std::multimap<std::string, std::string> fixed_metadata,
    std::string api_client_header)
    : child_(std::move(child)),
      fixed_metadata_(std::move(fixed_metadata)),
      api_client_header_(
          api_client_header.empty()
              ? google::cloud::internal::GeneratedLibClientHeader()
              : std::move(api_client_header)) {}

StatusOr<google::cloud::resourcemanager::v3::Folder> FoldersMetadata::GetFolder(
    grpc::ClientContext& context, Options const& options,
    google::cloud::resourcemanager::v3::GetFolderRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->GetFolder(context, options, request);
}

StatusOr<google::cloud::resourcemanager::v3::ListFoldersResponse>
FoldersMetadata::ListFolders(
    grpc::ClientContext& context, Options const& options,
    google::cloud::resourcemanager::v3::ListFoldersRequest const& request) {
  SetMetadata(context, options);
  return child_->ListFolders(context, options, request);
}

StatusOr<google::cloud::resourcemanager::v3::SearchFoldersResponse>
FoldersMetadata::SearchFolders(
    grpc::ClientContext& context, Options const& options,
    google::cloud::resourcemanager::v3::SearchFoldersRequest const& request) {
  SetMetadata(context, options);
  return child_->SearchFolders(context, options, request);
}

future<StatusOr<google::longrunning::Operation>>
FoldersMetadata::AsyncCreateFolder(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::resourcemanager::v3::CreateFolderRequest const& request) {
  SetMetadata(*context, *options);
  return child_->AsyncCreateFolder(cq, std::move(context), std::move(options),
                                   request);
}

StatusOr<google::longrunning::Operation> FoldersMetadata::CreateFolder(
    grpc::ClientContext& context, Options options,
    google::cloud::resourcemanager::v3::CreateFolderRequest const& request) {
  SetMetadata(context, options);
  return child_->CreateFolder(context, options, request);
}

future<StatusOr<google::longrunning::Operation>>
FoldersMetadata::AsyncUpdateFolder(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::resourcemanager::v3::UpdateFolderRequest const& request) {
  SetMetadata(*context, *options,
              absl::StrCat("folder.name=",
                           internal::UrlEncode(request.folder().name())));
  return child_->AsyncUpdateFolder(cq, std::move(context), std::move(options),
                                   request);
}

StatusOr<google::longrunning::Operation> FoldersMetadata::UpdateFolder(
    grpc::ClientContext& context, Options options,
    google::cloud::resourcemanager::v3::UpdateFolderRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("folder.name=",
                           internal::UrlEncode(request.folder().name())));
  return child_->UpdateFolder(context, options, request);
}

future<StatusOr<google::longrunning::Operation>>
FoldersMetadata::AsyncMoveFolder(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::resourcemanager::v3::MoveFolderRequest const& request) {
  SetMetadata(*context, *options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->AsyncMoveFolder(cq, std::move(context), std::move(options),
                                 request);
}

StatusOr<google::longrunning::Operation> FoldersMetadata::MoveFolder(
    grpc::ClientContext& context, Options options,
    google::cloud::resourcemanager::v3::MoveFolderRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->MoveFolder(context, options, request);
}

future<StatusOr<google::longrunning::Operation>>
FoldersMetadata::AsyncDeleteFolder(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::resourcemanager::v3::DeleteFolderRequest const& request) {
  SetMetadata(*context, *options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->AsyncDeleteFolder(cq, std::move(context), std::move(options),
                                   request);
}

StatusOr<google::longrunning::Operation> FoldersMetadata::DeleteFolder(
    grpc::ClientContext& context, Options options,
    google::cloud::resourcemanager::v3::DeleteFolderRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->DeleteFolder(context, options, request);
}

future<StatusOr<google::longrunning::Operation>>
FoldersMetadata::AsyncUndeleteFolder(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::resourcemanager::v3::UndeleteFolderRequest const& request) {
  SetMetadata(*context, *options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->AsyncUndeleteFolder(cq, std::move(context), std::move(options),
                                     request);
}

StatusOr<google::longrunning::Operation> FoldersMetadata::UndeleteFolder(
    grpc::ClientContext& context, Options options,
    google::cloud::resourcemanager::v3::UndeleteFolderRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->UndeleteFolder(context, options, request);
}

StatusOr<google::iam::v1::Policy> FoldersMetadata::GetIamPolicy(
    grpc::ClientContext& context, Options const& options,
    google::iam::v1::GetIamPolicyRequest const& request) {
  SetMetadata(
      context, options,
      absl::StrCat("resource=", internal::UrlEncode(request.resource())));
  return child_->GetIamPolicy(context, options, request);
}

StatusOr<google::iam::v1::Policy> FoldersMetadata::SetIamPolicy(
    grpc::ClientContext& context, Options const& options,
    google::iam::v1::SetIamPolicyRequest const& request) {
  SetMetadata(
      context, options,
      absl::StrCat("resource=", internal::UrlEncode(request.resource())));
  return child_->SetIamPolicy(context, options, request);
}

StatusOr<google::iam::v1::TestIamPermissionsResponse>
FoldersMetadata::TestIamPermissions(
    grpc::ClientContext& context, Options const& options,
    google::iam::v1::TestIamPermissionsRequest const& request) {
  SetMetadata(
      context, options,
      absl::StrCat("resource=", internal::UrlEncode(request.resource())));
  return child_->TestIamPermissions(context, options, request);
}

StatusOr<google::longrunning::Operation> FoldersMetadata::GetOperation(
    grpc::ClientContext& context, Options const& options,
    google::longrunning::GetOperationRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->GetOperation(context, options, request);
}

future<StatusOr<google::longrunning::Operation>>
FoldersMetadata::AsyncGetOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::longrunning::GetOperationRequest const& request) {
  SetMetadata(*context, *options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->AsyncGetOperation(cq, std::move(context), std::move(options),
                                   request);
}

future<Status> FoldersMetadata::AsyncCancelOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::longrunning::CancelOperationRequest const& request) {
  SetMetadata(*context, *options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->AsyncCancelOperation(cq, std::move(context),
                                      std::move(options), request);
}

void FoldersMetadata::SetMetadata(grpc::ClientContext& context,
                                  Options const& options,
                                  std::string const& request_params) {
  context.AddMetadata("x-goog-request-params", request_params);
  SetMetadata(context, options);
}

void FoldersMetadata::SetMetadata(grpc::ClientContext& context,
                                  Options const& options) {
  google::cloud::internal::SetMetadata(context, options, fixed_metadata_,
                                       api_client_header_);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace resourcemanager_v3_internal
}  // namespace cloud
}  // namespace google
