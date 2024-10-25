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

#include "google/cloud/retail/v2/internal/catalog_logging_decorator.h"
#include "google/cloud/internal/log_wrapper.h"
#include "google/cloud/status_or.h"
#include "google/cloud/retail/v2/catalog_service.grpc.pb.h"
#include <memory>
#include <set>
#include <string>
#include <utility>

namespace google {
namespace cloud {
namespace retail_v2_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

CatalogServiceLogging::CatalogServiceLogging(
    std::shared_ptr<CatalogServiceStub> child, TracingOptions tracing_options,
    std::set<std::string> const&)
    : child_(std::move(child)), tracing_options_(std::move(tracing_options)) {}

StatusOr<google::cloud::retail::v2::ListCatalogsResponse>
CatalogServiceLogging::ListCatalogs(
    grpc::ClientContext& context, Options const& options,
    google::cloud::retail::v2::ListCatalogsRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::retail::v2::ListCatalogsRequest const& request) {
        return child_->ListCatalogs(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::retail::v2::Catalog>
CatalogServiceLogging::UpdateCatalog(
    grpc::ClientContext& context, Options const& options,
    google::cloud::retail::v2::UpdateCatalogRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::retail::v2::UpdateCatalogRequest const& request) {
        return child_->UpdateCatalog(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

Status CatalogServiceLogging::SetDefaultBranch(
    grpc::ClientContext& context, Options const& options,
    google::cloud::retail::v2::SetDefaultBranchRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](
          grpc::ClientContext& context, Options const& options,
          google::cloud::retail::v2::SetDefaultBranchRequest const& request) {
        return child_->SetDefaultBranch(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::retail::v2::GetDefaultBranchResponse>
CatalogServiceLogging::GetDefaultBranch(
    grpc::ClientContext& context, Options const& options,
    google::cloud::retail::v2::GetDefaultBranchRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](
          grpc::ClientContext& context, Options const& options,
          google::cloud::retail::v2::GetDefaultBranchRequest const& request) {
        return child_->GetDefaultBranch(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::retail::v2::CompletionConfig>
CatalogServiceLogging::GetCompletionConfig(
    grpc::ClientContext& context, Options const& options,
    google::cloud::retail::v2::GetCompletionConfigRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::retail::v2::GetCompletionConfigRequest const&
                 request) {
        return child_->GetCompletionConfig(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::retail::v2::CompletionConfig>
CatalogServiceLogging::UpdateCompletionConfig(
    grpc::ClientContext& context, Options const& options,
    google::cloud::retail::v2::UpdateCompletionConfigRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::retail::v2::UpdateCompletionConfigRequest const&
                 request) {
        return child_->UpdateCompletionConfig(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::retail::v2::AttributesConfig>
CatalogServiceLogging::GetAttributesConfig(
    grpc::ClientContext& context, Options const& options,
    google::cloud::retail::v2::GetAttributesConfigRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::retail::v2::GetAttributesConfigRequest const&
                 request) {
        return child_->GetAttributesConfig(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::retail::v2::AttributesConfig>
CatalogServiceLogging::UpdateAttributesConfig(
    grpc::ClientContext& context, Options const& options,
    google::cloud::retail::v2::UpdateAttributesConfigRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::retail::v2::UpdateAttributesConfigRequest const&
                 request) {
        return child_->UpdateAttributesConfig(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::retail::v2::AttributesConfig>
CatalogServiceLogging::AddCatalogAttribute(
    grpc::ClientContext& context, Options const& options,
    google::cloud::retail::v2::AddCatalogAttributeRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::retail::v2::AddCatalogAttributeRequest const&
                 request) {
        return child_->AddCatalogAttribute(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::retail::v2::AttributesConfig>
CatalogServiceLogging::RemoveCatalogAttribute(
    grpc::ClientContext& context, Options const& options,
    google::cloud::retail::v2::RemoveCatalogAttributeRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::retail::v2::RemoveCatalogAttributeRequest const&
                 request) {
        return child_->RemoveCatalogAttribute(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::retail::v2::AttributesConfig>
CatalogServiceLogging::ReplaceCatalogAttribute(
    grpc::ClientContext& context, Options const& options,
    google::cloud::retail::v2::ReplaceCatalogAttributeRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::retail::v2::ReplaceCatalogAttributeRequest const&
                 request) {
        return child_->ReplaceCatalogAttribute(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::longrunning::ListOperationsResponse>
CatalogServiceLogging::ListOperations(
    grpc::ClientContext& context, Options const& options,
    google::longrunning::ListOperationsRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::longrunning::ListOperationsRequest const& request) {
        return child_->ListOperations(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::longrunning::Operation> CatalogServiceLogging::GetOperation(
    grpc::ClientContext& context, Options const& options,
    google::longrunning::GetOperationRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::longrunning::GetOperationRequest const& request) {
        return child_->GetOperation(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace retail_v2_internal
}  // namespace cloud
}  // namespace google
