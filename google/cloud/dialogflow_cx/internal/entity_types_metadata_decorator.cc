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
// source: google/cloud/dialogflow/cx/v3/entity_type.proto

#include "google/cloud/dialogflow_cx/internal/entity_types_metadata_decorator.h"
#include "google/cloud/grpc_options.h"
#include "google/cloud/internal/absl_str_cat_quiet.h"
#include "google/cloud/internal/api_client_header.h"
#include "google/cloud/internal/url_encode.h"
#include "google/cloud/status_or.h"
#include "google/cloud/dialogflow/cx/v3/entity_type.grpc.pb.h"
#include <memory>
#include <string>
#include <utility>
#include <vector>

namespace google {
namespace cloud {
namespace dialogflow_cx_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

EntityTypesMetadata::EntityTypesMetadata(
    std::shared_ptr<EntityTypesStub> child,
    std::multimap<std::string, std::string> fixed_metadata,
    std::string api_client_header)
    : child_(std::move(child)),
      fixed_metadata_(std::move(fixed_metadata)),
      api_client_header_(
          api_client_header.empty()
              ? google::cloud::internal::GeneratedLibClientHeader()
              : std::move(api_client_header)) {}

StatusOr<google::cloud::dialogflow::cx::v3::EntityType>
EntityTypesMetadata::GetEntityType(
    grpc::ClientContext& context, Options const& options,
    google::cloud::dialogflow::cx::v3::GetEntityTypeRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->GetEntityType(context, options, request);
}

StatusOr<google::cloud::dialogflow::cx::v3::EntityType>
EntityTypesMetadata::CreateEntityType(
    grpc::ClientContext& context, Options const& options,
    google::cloud::dialogflow::cx::v3::CreateEntityTypeRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->CreateEntityType(context, options, request);
}

StatusOr<google::cloud::dialogflow::cx::v3::EntityType>
EntityTypesMetadata::UpdateEntityType(
    grpc::ClientContext& context, Options const& options,
    google::cloud::dialogflow::cx::v3::UpdateEntityTypeRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("entity_type.name=",
                           internal::UrlEncode(request.entity_type().name())));
  return child_->UpdateEntityType(context, options, request);
}

Status EntityTypesMetadata::DeleteEntityType(
    grpc::ClientContext& context, Options const& options,
    google::cloud::dialogflow::cx::v3::DeleteEntityTypeRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->DeleteEntityType(context, options, request);
}

StatusOr<google::cloud::dialogflow::cx::v3::ListEntityTypesResponse>
EntityTypesMetadata::ListEntityTypes(
    grpc::ClientContext& context, Options const& options,
    google::cloud::dialogflow::cx::v3::ListEntityTypesRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->ListEntityTypes(context, options, request);
}

future<StatusOr<google::longrunning::Operation>>
EntityTypesMetadata::AsyncExportEntityTypes(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::dialogflow::cx::v3::ExportEntityTypesRequest const&
        request) {
  SetMetadata(*context, *options,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->AsyncExportEntityTypes(cq, std::move(context),
                                        std::move(options), request);
}

StatusOr<google::longrunning::Operation> EntityTypesMetadata::ExportEntityTypes(
    grpc::ClientContext& context, Options options,
    google::cloud::dialogflow::cx::v3::ExportEntityTypesRequest const&
        request) {
  SetMetadata(context, options,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->ExportEntityTypes(context, options, request);
}

future<StatusOr<google::longrunning::Operation>>
EntityTypesMetadata::AsyncImportEntityTypes(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::dialogflow::cx::v3::ImportEntityTypesRequest const&
        request) {
  SetMetadata(*context, *options,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->AsyncImportEntityTypes(cq, std::move(context),
                                        std::move(options), request);
}

StatusOr<google::longrunning::Operation> EntityTypesMetadata::ImportEntityTypes(
    grpc::ClientContext& context, Options options,
    google::cloud::dialogflow::cx::v3::ImportEntityTypesRequest const&
        request) {
  SetMetadata(context, options,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->ImportEntityTypes(context, options, request);
}

StatusOr<google::cloud::location::ListLocationsResponse>
EntityTypesMetadata::ListLocations(
    grpc::ClientContext& context, Options const& options,
    google::cloud::location::ListLocationsRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->ListLocations(context, options, request);
}

StatusOr<google::cloud::location::Location> EntityTypesMetadata::GetLocation(
    grpc::ClientContext& context, Options const& options,
    google::cloud::location::GetLocationRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->GetLocation(context, options, request);
}

StatusOr<google::longrunning::ListOperationsResponse>
EntityTypesMetadata::ListOperations(
    grpc::ClientContext& context, Options const& options,
    google::longrunning::ListOperationsRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->ListOperations(context, options, request);
}

StatusOr<google::longrunning::Operation> EntityTypesMetadata::GetOperation(
    grpc::ClientContext& context, Options const& options,
    google::longrunning::GetOperationRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->GetOperation(context, options, request);
}

Status EntityTypesMetadata::CancelOperation(
    grpc::ClientContext& context, Options const& options,
    google::longrunning::CancelOperationRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->CancelOperation(context, options, request);
}

future<StatusOr<google::longrunning::Operation>>
EntityTypesMetadata::AsyncGetOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::longrunning::GetOperationRequest const& request) {
  SetMetadata(*context, *options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->AsyncGetOperation(cq, std::move(context), std::move(options),
                                   request);
}

future<Status> EntityTypesMetadata::AsyncCancelOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::longrunning::CancelOperationRequest const& request) {
  SetMetadata(*context, *options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->AsyncCancelOperation(cq, std::move(context),
                                      std::move(options), request);
}

void EntityTypesMetadata::SetMetadata(grpc::ClientContext& context,
                                      Options const& options,
                                      std::string const& request_params) {
  context.AddMetadata("x-goog-request-params", request_params);
  SetMetadata(context, options);
}

void EntityTypesMetadata::SetMetadata(grpc::ClientContext& context,
                                      Options const& options) {
  google::cloud::internal::SetMetadata(context, options, fixed_metadata_,
                                       api_client_header_);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace dialogflow_cx_internal
}  // namespace cloud
}  // namespace google
