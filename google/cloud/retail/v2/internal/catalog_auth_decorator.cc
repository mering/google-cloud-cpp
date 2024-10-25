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
// source: google/cloud/retail/v2/catalog_service.proto

#include "google/cloud/retail/v2/internal/catalog_auth_decorator.h"
#include "google/cloud/retail/v2/catalog_service.grpc.pb.h"
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace retail_v2_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

CatalogServiceAuth::CatalogServiceAuth(
    std::shared_ptr<google::cloud::internal::GrpcAuthenticationStrategy> auth,
    std::shared_ptr<CatalogServiceStub> child)
    : auth_(std::move(auth)), child_(std::move(child)) {}

StatusOr<google::cloud::retail::v2::ListCatalogsResponse>
CatalogServiceAuth::ListCatalogs(
    grpc::ClientContext& context, Options const& options,
    google::cloud::retail::v2::ListCatalogsRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->ListCatalogs(context, options, request);
}

StatusOr<google::cloud::retail::v2::Catalog> CatalogServiceAuth::UpdateCatalog(
    grpc::ClientContext& context, Options const& options,
    google::cloud::retail::v2::UpdateCatalogRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->UpdateCatalog(context, options, request);
}

Status CatalogServiceAuth::SetDefaultBranch(
    grpc::ClientContext& context, Options const& options,
    google::cloud::retail::v2::SetDefaultBranchRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->SetDefaultBranch(context, options, request);
}

StatusOr<google::cloud::retail::v2::GetDefaultBranchResponse>
CatalogServiceAuth::GetDefaultBranch(
    grpc::ClientContext& context, Options const& options,
    google::cloud::retail::v2::GetDefaultBranchRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->GetDefaultBranch(context, options, request);
}

StatusOr<google::cloud::retail::v2::CompletionConfig>
CatalogServiceAuth::GetCompletionConfig(
    grpc::ClientContext& context, Options const& options,
    google::cloud::retail::v2::GetCompletionConfigRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->GetCompletionConfig(context, options, request);
}

StatusOr<google::cloud::retail::v2::CompletionConfig>
CatalogServiceAuth::UpdateCompletionConfig(
    grpc::ClientContext& context, Options const& options,
    google::cloud::retail::v2::UpdateCompletionConfigRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->UpdateCompletionConfig(context, options, request);
}

StatusOr<google::cloud::retail::v2::AttributesConfig>
CatalogServiceAuth::GetAttributesConfig(
    grpc::ClientContext& context, Options const& options,
    google::cloud::retail::v2::GetAttributesConfigRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->GetAttributesConfig(context, options, request);
}

StatusOr<google::cloud::retail::v2::AttributesConfig>
CatalogServiceAuth::UpdateAttributesConfig(
    grpc::ClientContext& context, Options const& options,
    google::cloud::retail::v2::UpdateAttributesConfigRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->UpdateAttributesConfig(context, options, request);
}

StatusOr<google::cloud::retail::v2::AttributesConfig>
CatalogServiceAuth::AddCatalogAttribute(
    grpc::ClientContext& context, Options const& options,
    google::cloud::retail::v2::AddCatalogAttributeRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->AddCatalogAttribute(context, options, request);
}

StatusOr<google::cloud::retail::v2::AttributesConfig>
CatalogServiceAuth::RemoveCatalogAttribute(
    grpc::ClientContext& context, Options const& options,
    google::cloud::retail::v2::RemoveCatalogAttributeRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->RemoveCatalogAttribute(context, options, request);
}

StatusOr<google::cloud::retail::v2::AttributesConfig>
CatalogServiceAuth::ReplaceCatalogAttribute(
    grpc::ClientContext& context, Options const& options,
    google::cloud::retail::v2::ReplaceCatalogAttributeRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->ReplaceCatalogAttribute(context, options, request);
}

StatusOr<google::longrunning::ListOperationsResponse>
CatalogServiceAuth::ListOperations(
    grpc::ClientContext& context, Options const& options,
    google::longrunning::ListOperationsRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->ListOperations(context, options, request);
}

StatusOr<google::longrunning::Operation> CatalogServiceAuth::GetOperation(
    grpc::ClientContext& context, Options const& options,
    google::longrunning::GetOperationRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->GetOperation(context, options, request);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace retail_v2_internal
}  // namespace cloud
}  // namespace google
