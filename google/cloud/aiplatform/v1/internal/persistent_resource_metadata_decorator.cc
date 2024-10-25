// Copyright 2024 Google LLC
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
// source: google/cloud/aiplatform/v1/persistent_resource_service.proto

#include "google/cloud/aiplatform/v1/internal/persistent_resource_metadata_decorator.h"
#include "google/cloud/grpc_options.h"
#include "google/cloud/internal/absl_str_cat_quiet.h"
#include "google/cloud/internal/api_client_header.h"
#include "google/cloud/internal/url_encode.h"
#include "google/cloud/status_or.h"
#include "google/cloud/aiplatform/v1/persistent_resource_service.grpc.pb.h"
#include <memory>
#include <string>
#include <utility>
#include <vector>

namespace google {
namespace cloud {
namespace aiplatform_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

PersistentResourceServiceMetadata::PersistentResourceServiceMetadata(
    std::shared_ptr<PersistentResourceServiceStub> child,
    std::multimap<std::string, std::string> fixed_metadata,
    std::string api_client_header)
    : child_(std::move(child)),
      fixed_metadata_(std::move(fixed_metadata)),
      api_client_header_(
          api_client_header.empty()
              ? google::cloud::internal::GeneratedLibClientHeader()
              : std::move(api_client_header)) {}

future<StatusOr<google::longrunning::Operation>>
PersistentResourceServiceMetadata::AsyncCreatePersistentResource(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::aiplatform::v1::CreatePersistentResourceRequest const&
        request) {
  SetMetadata(*context, *options,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->AsyncCreatePersistentResource(cq, std::move(context),
                                               std::move(options), request);
}

StatusOr<google::longrunning::Operation>
PersistentResourceServiceMetadata::CreatePersistentResource(
    grpc::ClientContext& context, Options options,
    google::cloud::aiplatform::v1::CreatePersistentResourceRequest const&
        request) {
  SetMetadata(context, options,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->CreatePersistentResource(context, options, request);
}

StatusOr<google::cloud::aiplatform::v1::PersistentResource>
PersistentResourceServiceMetadata::GetPersistentResource(
    grpc::ClientContext& context, Options const& options,
    google::cloud::aiplatform::v1::GetPersistentResourceRequest const&
        request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->GetPersistentResource(context, options, request);
}

StatusOr<google::cloud::aiplatform::v1::ListPersistentResourcesResponse>
PersistentResourceServiceMetadata::ListPersistentResources(
    grpc::ClientContext& context, Options const& options,
    google::cloud::aiplatform::v1::ListPersistentResourcesRequest const&
        request) {
  SetMetadata(context, options,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->ListPersistentResources(context, options, request);
}

future<StatusOr<google::longrunning::Operation>>
PersistentResourceServiceMetadata::AsyncDeletePersistentResource(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::aiplatform::v1::DeletePersistentResourceRequest const&
        request) {
  SetMetadata(*context, *options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->AsyncDeletePersistentResource(cq, std::move(context),
                                               std::move(options), request);
}

StatusOr<google::longrunning::Operation>
PersistentResourceServiceMetadata::DeletePersistentResource(
    grpc::ClientContext& context, Options options,
    google::cloud::aiplatform::v1::DeletePersistentResourceRequest const&
        request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->DeletePersistentResource(context, options, request);
}

future<StatusOr<google::longrunning::Operation>>
PersistentResourceServiceMetadata::AsyncUpdatePersistentResource(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::aiplatform::v1::UpdatePersistentResourceRequest const&
        request) {
  SetMetadata(
      *context, *options,
      absl::StrCat("persistent_resource.name=",
                   internal::UrlEncode(request.persistent_resource().name())));
  return child_->AsyncUpdatePersistentResource(cq, std::move(context),
                                               std::move(options), request);
}

StatusOr<google::longrunning::Operation>
PersistentResourceServiceMetadata::UpdatePersistentResource(
    grpc::ClientContext& context, Options options,
    google::cloud::aiplatform::v1::UpdatePersistentResourceRequest const&
        request) {
  SetMetadata(
      context, options,
      absl::StrCat("persistent_resource.name=",
                   internal::UrlEncode(request.persistent_resource().name())));
  return child_->UpdatePersistentResource(context, options, request);
}

future<StatusOr<google::longrunning::Operation>>
PersistentResourceServiceMetadata::AsyncRebootPersistentResource(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::aiplatform::v1::RebootPersistentResourceRequest const&
        request) {
  SetMetadata(*context, *options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->AsyncRebootPersistentResource(cq, std::move(context),
                                               std::move(options), request);
}

StatusOr<google::longrunning::Operation>
PersistentResourceServiceMetadata::RebootPersistentResource(
    grpc::ClientContext& context, Options options,
    google::cloud::aiplatform::v1::RebootPersistentResourceRequest const&
        request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->RebootPersistentResource(context, options, request);
}

StatusOr<google::cloud::location::ListLocationsResponse>
PersistentResourceServiceMetadata::ListLocations(
    grpc::ClientContext& context, Options const& options,
    google::cloud::location::ListLocationsRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->ListLocations(context, options, request);
}

StatusOr<google::cloud::location::Location>
PersistentResourceServiceMetadata::GetLocation(
    grpc::ClientContext& context, Options const& options,
    google::cloud::location::GetLocationRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->GetLocation(context, options, request);
}

StatusOr<google::iam::v1::Policy>
PersistentResourceServiceMetadata::SetIamPolicy(
    grpc::ClientContext& context, Options const& options,
    google::iam::v1::SetIamPolicyRequest const& request) {
  SetMetadata(
      context, options,
      absl::StrCat("resource=", internal::UrlEncode(request.resource())));
  return child_->SetIamPolicy(context, options, request);
}

StatusOr<google::iam::v1::Policy>
PersistentResourceServiceMetadata::GetIamPolicy(
    grpc::ClientContext& context, Options const& options,
    google::iam::v1::GetIamPolicyRequest const& request) {
  SetMetadata(
      context, options,
      absl::StrCat("resource=", internal::UrlEncode(request.resource())));
  return child_->GetIamPolicy(context, options, request);
}

StatusOr<google::iam::v1::TestIamPermissionsResponse>
PersistentResourceServiceMetadata::TestIamPermissions(
    grpc::ClientContext& context, Options const& options,
    google::iam::v1::TestIamPermissionsRequest const& request) {
  SetMetadata(
      context, options,
      absl::StrCat("resource=", internal::UrlEncode(request.resource())));
  return child_->TestIamPermissions(context, options, request);
}

StatusOr<google::longrunning::ListOperationsResponse>
PersistentResourceServiceMetadata::ListOperations(
    grpc::ClientContext& context, Options const& options,
    google::longrunning::ListOperationsRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->ListOperations(context, options, request);
}

StatusOr<google::longrunning::Operation>
PersistentResourceServiceMetadata::GetOperation(
    grpc::ClientContext& context, Options const& options,
    google::longrunning::GetOperationRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->GetOperation(context, options, request);
}

Status PersistentResourceServiceMetadata::DeleteOperation(
    grpc::ClientContext& context, Options const& options,
    google::longrunning::DeleteOperationRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->DeleteOperation(context, options, request);
}

Status PersistentResourceServiceMetadata::CancelOperation(
    grpc::ClientContext& context, Options const& options,
    google::longrunning::CancelOperationRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->CancelOperation(context, options, request);
}

StatusOr<google::longrunning::Operation>
PersistentResourceServiceMetadata::WaitOperation(
    grpc::ClientContext& context, Options const& options,
    google::longrunning::WaitOperationRequest const& request) {
  SetMetadata(context, options);
  return child_->WaitOperation(context, options, request);
}

future<StatusOr<google::longrunning::Operation>>
PersistentResourceServiceMetadata::AsyncGetOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::longrunning::GetOperationRequest const& request) {
  SetMetadata(*context, *options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->AsyncGetOperation(cq, std::move(context), std::move(options),
                                   request);
}

future<Status> PersistentResourceServiceMetadata::AsyncCancelOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::longrunning::CancelOperationRequest const& request) {
  SetMetadata(*context, *options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->AsyncCancelOperation(cq, std::move(context),
                                      std::move(options), request);
}

void PersistentResourceServiceMetadata::SetMetadata(
    grpc::ClientContext& context, Options const& options,
    std::string const& request_params) {
  context.AddMetadata("x-goog-request-params", request_params);
  SetMetadata(context, options);
}

void PersistentResourceServiceMetadata::SetMetadata(
    grpc::ClientContext& context, Options const& options) {
  google::cloud::internal::SetMetadata(context, options, fixed_metadata_,
                                       api_client_header_);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace aiplatform_v1_internal
}  // namespace cloud
}  // namespace google
