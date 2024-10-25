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
// source: google/cloud/connectors/v1/connectors_service.proto

#include "google/cloud/connectors/v1/internal/connectors_metadata_decorator.h"
#include "google/cloud/grpc_options.h"
#include "google/cloud/internal/absl_str_cat_quiet.h"
#include "google/cloud/internal/api_client_header.h"
#include "google/cloud/internal/url_encode.h"
#include "google/cloud/status_or.h"
#include "google/cloud/connectors/v1/connectors_service.grpc.pb.h"
#include <memory>
#include <string>
#include <utility>
#include <vector>

namespace google {
namespace cloud {
namespace connectors_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

ConnectorsMetadata::ConnectorsMetadata(
    std::shared_ptr<ConnectorsStub> child,
    std::multimap<std::string, std::string> fixed_metadata,
    std::string api_client_header)
    : child_(std::move(child)),
      fixed_metadata_(std::move(fixed_metadata)),
      api_client_header_(
          api_client_header.empty()
              ? google::cloud::internal::GeneratedLibClientHeader()
              : std::move(api_client_header)) {}

StatusOr<google::cloud::connectors::v1::ListConnectionsResponse>
ConnectorsMetadata::ListConnections(
    grpc::ClientContext& context, Options const& options,
    google::cloud::connectors::v1::ListConnectionsRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->ListConnections(context, options, request);
}

StatusOr<google::cloud::connectors::v1::Connection>
ConnectorsMetadata::GetConnection(
    grpc::ClientContext& context, Options const& options,
    google::cloud::connectors::v1::GetConnectionRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->GetConnection(context, options, request);
}

future<StatusOr<google::longrunning::Operation>>
ConnectorsMetadata::AsyncCreateConnection(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::connectors::v1::CreateConnectionRequest const& request) {
  SetMetadata(*context, *options,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->AsyncCreateConnection(cq, std::move(context),
                                       std::move(options), request);
}

StatusOr<google::longrunning::Operation> ConnectorsMetadata::CreateConnection(
    grpc::ClientContext& context, Options options,
    google::cloud::connectors::v1::CreateConnectionRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->CreateConnection(context, options, request);
}

future<StatusOr<google::longrunning::Operation>>
ConnectorsMetadata::AsyncUpdateConnection(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::connectors::v1::UpdateConnectionRequest const& request) {
  SetMetadata(*context, *options,
              absl::StrCat("connection.name=",
                           internal::UrlEncode(request.connection().name())));
  return child_->AsyncUpdateConnection(cq, std::move(context),
                                       std::move(options), request);
}

StatusOr<google::longrunning::Operation> ConnectorsMetadata::UpdateConnection(
    grpc::ClientContext& context, Options options,
    google::cloud::connectors::v1::UpdateConnectionRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("connection.name=",
                           internal::UrlEncode(request.connection().name())));
  return child_->UpdateConnection(context, options, request);
}

future<StatusOr<google::longrunning::Operation>>
ConnectorsMetadata::AsyncDeleteConnection(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::connectors::v1::DeleteConnectionRequest const& request) {
  SetMetadata(*context, *options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->AsyncDeleteConnection(cq, std::move(context),
                                       std::move(options), request);
}

StatusOr<google::longrunning::Operation> ConnectorsMetadata::DeleteConnection(
    grpc::ClientContext& context, Options options,
    google::cloud::connectors::v1::DeleteConnectionRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->DeleteConnection(context, options, request);
}

StatusOr<google::cloud::connectors::v1::ListProvidersResponse>
ConnectorsMetadata::ListProviders(
    grpc::ClientContext& context, Options const& options,
    google::cloud::connectors::v1::ListProvidersRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->ListProviders(context, options, request);
}

StatusOr<google::cloud::connectors::v1::Provider>
ConnectorsMetadata::GetProvider(
    grpc::ClientContext& context, Options const& options,
    google::cloud::connectors::v1::GetProviderRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->GetProvider(context, options, request);
}

StatusOr<google::cloud::connectors::v1::ListConnectorsResponse>
ConnectorsMetadata::ListConnectors(
    grpc::ClientContext& context, Options const& options,
    google::cloud::connectors::v1::ListConnectorsRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->ListConnectors(context, options, request);
}

StatusOr<google::cloud::connectors::v1::Connector>
ConnectorsMetadata::GetConnector(
    grpc::ClientContext& context, Options const& options,
    google::cloud::connectors::v1::GetConnectorRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->GetConnector(context, options, request);
}

StatusOr<google::cloud::connectors::v1::ListConnectorVersionsResponse>
ConnectorsMetadata::ListConnectorVersions(
    grpc::ClientContext& context, Options const& options,
    google::cloud::connectors::v1::ListConnectorVersionsRequest const&
        request) {
  SetMetadata(context, options,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->ListConnectorVersions(context, options, request);
}

StatusOr<google::cloud::connectors::v1::ConnectorVersion>
ConnectorsMetadata::GetConnectorVersion(
    grpc::ClientContext& context, Options const& options,
    google::cloud::connectors::v1::GetConnectorVersionRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->GetConnectorVersion(context, options, request);
}

StatusOr<google::cloud::connectors::v1::ConnectionSchemaMetadata>
ConnectorsMetadata::GetConnectionSchemaMetadata(
    grpc::ClientContext& context, Options const& options,
    google::cloud::connectors::v1::GetConnectionSchemaMetadataRequest const&
        request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->GetConnectionSchemaMetadata(context, options, request);
}

future<StatusOr<google::longrunning::Operation>>
ConnectorsMetadata::AsyncRefreshConnectionSchemaMetadata(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::connectors::v1::RefreshConnectionSchemaMetadataRequest const&
        request) {
  SetMetadata(*context, *options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->AsyncRefreshConnectionSchemaMetadata(
      cq, std::move(context), std::move(options), request);
}

StatusOr<google::longrunning::Operation>
ConnectorsMetadata::RefreshConnectionSchemaMetadata(
    grpc::ClientContext& context, Options options,
    google::cloud::connectors::v1::RefreshConnectionSchemaMetadataRequest const&
        request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->RefreshConnectionSchemaMetadata(context, options, request);
}

StatusOr<google::cloud::connectors::v1::ListRuntimeEntitySchemasResponse>
ConnectorsMetadata::ListRuntimeEntitySchemas(
    grpc::ClientContext& context, Options const& options,
    google::cloud::connectors::v1::ListRuntimeEntitySchemasRequest const&
        request) {
  SetMetadata(context, options,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->ListRuntimeEntitySchemas(context, options, request);
}

StatusOr<google::cloud::connectors::v1::ListRuntimeActionSchemasResponse>
ConnectorsMetadata::ListRuntimeActionSchemas(
    grpc::ClientContext& context, Options const& options,
    google::cloud::connectors::v1::ListRuntimeActionSchemasRequest const&
        request) {
  SetMetadata(context, options,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->ListRuntimeActionSchemas(context, options, request);
}

StatusOr<google::cloud::connectors::v1::RuntimeConfig>
ConnectorsMetadata::GetRuntimeConfig(
    grpc::ClientContext& context, Options const& options,
    google::cloud::connectors::v1::GetRuntimeConfigRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->GetRuntimeConfig(context, options, request);
}

StatusOr<google::cloud::connectors::v1::Settings>
ConnectorsMetadata::GetGlobalSettings(
    grpc::ClientContext& context, Options const& options,
    google::cloud::connectors::v1::GetGlobalSettingsRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->GetGlobalSettings(context, options, request);
}

StatusOr<google::cloud::location::ListLocationsResponse>
ConnectorsMetadata::ListLocations(
    grpc::ClientContext& context, Options const& options,
    google::cloud::location::ListLocationsRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->ListLocations(context, options, request);
}

StatusOr<google::cloud::location::Location> ConnectorsMetadata::GetLocation(
    grpc::ClientContext& context, Options const& options,
    google::cloud::location::GetLocationRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->GetLocation(context, options, request);
}

StatusOr<google::iam::v1::Policy> ConnectorsMetadata::SetIamPolicy(
    grpc::ClientContext& context, Options const& options,
    google::iam::v1::SetIamPolicyRequest const& request) {
  SetMetadata(
      context, options,
      absl::StrCat("resource=", internal::UrlEncode(request.resource())));
  return child_->SetIamPolicy(context, options, request);
}

StatusOr<google::iam::v1::Policy> ConnectorsMetadata::GetIamPolicy(
    grpc::ClientContext& context, Options const& options,
    google::iam::v1::GetIamPolicyRequest const& request) {
  SetMetadata(
      context, options,
      absl::StrCat("resource=", internal::UrlEncode(request.resource())));
  return child_->GetIamPolicy(context, options, request);
}

StatusOr<google::iam::v1::TestIamPermissionsResponse>
ConnectorsMetadata::TestIamPermissions(
    grpc::ClientContext& context, Options const& options,
    google::iam::v1::TestIamPermissionsRequest const& request) {
  SetMetadata(
      context, options,
      absl::StrCat("resource=", internal::UrlEncode(request.resource())));
  return child_->TestIamPermissions(context, options, request);
}

StatusOr<google::longrunning::ListOperationsResponse>
ConnectorsMetadata::ListOperations(
    grpc::ClientContext& context, Options const& options,
    google::longrunning::ListOperationsRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->ListOperations(context, options, request);
}

StatusOr<google::longrunning::Operation> ConnectorsMetadata::GetOperation(
    grpc::ClientContext& context, Options const& options,
    google::longrunning::GetOperationRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->GetOperation(context, options, request);
}

Status ConnectorsMetadata::DeleteOperation(
    grpc::ClientContext& context, Options const& options,
    google::longrunning::DeleteOperationRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->DeleteOperation(context, options, request);
}

Status ConnectorsMetadata::CancelOperation(
    grpc::ClientContext& context, Options const& options,
    google::longrunning::CancelOperationRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->CancelOperation(context, options, request);
}

future<StatusOr<google::longrunning::Operation>>
ConnectorsMetadata::AsyncGetOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::longrunning::GetOperationRequest const& request) {
  SetMetadata(*context, *options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->AsyncGetOperation(cq, std::move(context), std::move(options),
                                   request);
}

future<Status> ConnectorsMetadata::AsyncCancelOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::longrunning::CancelOperationRequest const& request) {
  SetMetadata(*context, *options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->AsyncCancelOperation(cq, std::move(context),
                                      std::move(options), request);
}

void ConnectorsMetadata::SetMetadata(grpc::ClientContext& context,
                                     Options const& options,
                                     std::string const& request_params) {
  context.AddMetadata("x-goog-request-params", request_params);
  SetMetadata(context, options);
}

void ConnectorsMetadata::SetMetadata(grpc::ClientContext& context,
                                     Options const& options) {
  google::cloud::internal::SetMetadata(context, options, fixed_metadata_,
                                       api_client_header_);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace connectors_v1_internal
}  // namespace cloud
}  // namespace google
