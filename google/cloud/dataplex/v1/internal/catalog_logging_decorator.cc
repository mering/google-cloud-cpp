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
// source: google/cloud/dataplex/v1/catalog.proto

#include "google/cloud/dataplex/v1/internal/catalog_logging_decorator.h"
#include "google/cloud/internal/log_wrapper.h"
#include "google/cloud/status_or.h"
#include "google/cloud/dataplex/v1/catalog.grpc.pb.h"
#include <memory>
#include <set>
#include <string>
#include <utility>

namespace google {
namespace cloud {
namespace dataplex_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

CatalogServiceLogging::CatalogServiceLogging(
    std::shared_ptr<CatalogServiceStub> child, TracingOptions tracing_options,
    std::set<std::string> const&)
    : child_(std::move(child)), tracing_options_(std::move(tracing_options)) {}

future<StatusOr<google::longrunning::Operation>>
CatalogServiceLogging::AsyncCreateEntryType(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::dataplex::v1::CreateEntryTypeRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](
          google::cloud::CompletionQueue& cq,
          std::shared_ptr<grpc::ClientContext> context,
          google::cloud::internal::ImmutableOptions options,
          google::cloud::dataplex::v1::CreateEntryTypeRequest const& request) {
        return child_->AsyncCreateEntryType(cq, std::move(context),
                                            std::move(options), request);
      },
      cq, std::move(context), std::move(options), request, __func__,
      tracing_options_);
}

StatusOr<google::longrunning::Operation> CatalogServiceLogging::CreateEntryType(
    grpc::ClientContext& context, Options options,
    google::cloud::dataplex::v1::CreateEntryTypeRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](
          grpc::ClientContext& context, Options const& options,
          google::cloud::dataplex::v1::CreateEntryTypeRequest const& request) {
        return child_->CreateEntryType(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
CatalogServiceLogging::AsyncUpdateEntryType(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::dataplex::v1::UpdateEntryTypeRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](
          google::cloud::CompletionQueue& cq,
          std::shared_ptr<grpc::ClientContext> context,
          google::cloud::internal::ImmutableOptions options,
          google::cloud::dataplex::v1::UpdateEntryTypeRequest const& request) {
        return child_->AsyncUpdateEntryType(cq, std::move(context),
                                            std::move(options), request);
      },
      cq, std::move(context), std::move(options), request, __func__,
      tracing_options_);
}

StatusOr<google::longrunning::Operation> CatalogServiceLogging::UpdateEntryType(
    grpc::ClientContext& context, Options options,
    google::cloud::dataplex::v1::UpdateEntryTypeRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](
          grpc::ClientContext& context, Options const& options,
          google::cloud::dataplex::v1::UpdateEntryTypeRequest const& request) {
        return child_->UpdateEntryType(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
CatalogServiceLogging::AsyncDeleteEntryType(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::dataplex::v1::DeleteEntryTypeRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](
          google::cloud::CompletionQueue& cq,
          std::shared_ptr<grpc::ClientContext> context,
          google::cloud::internal::ImmutableOptions options,
          google::cloud::dataplex::v1::DeleteEntryTypeRequest const& request) {
        return child_->AsyncDeleteEntryType(cq, std::move(context),
                                            std::move(options), request);
      },
      cq, std::move(context), std::move(options), request, __func__,
      tracing_options_);
}

StatusOr<google::longrunning::Operation> CatalogServiceLogging::DeleteEntryType(
    grpc::ClientContext& context, Options options,
    google::cloud::dataplex::v1::DeleteEntryTypeRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](
          grpc::ClientContext& context, Options const& options,
          google::cloud::dataplex::v1::DeleteEntryTypeRequest const& request) {
        return child_->DeleteEntryType(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::dataplex::v1::ListEntryTypesResponse>
CatalogServiceLogging::ListEntryTypes(
    grpc::ClientContext& context, Options const& options,
    google::cloud::dataplex::v1::ListEntryTypesRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](
          grpc::ClientContext& context, Options const& options,
          google::cloud::dataplex::v1::ListEntryTypesRequest const& request) {
        return child_->ListEntryTypes(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::dataplex::v1::EntryType>
CatalogServiceLogging::GetEntryType(
    grpc::ClientContext& context, Options const& options,
    google::cloud::dataplex::v1::GetEntryTypeRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::dataplex::v1::GetEntryTypeRequest const& request) {
        return child_->GetEntryType(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
CatalogServiceLogging::AsyncCreateAspectType(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::dataplex::v1::CreateAspectTypeRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](
          google::cloud::CompletionQueue& cq,
          std::shared_ptr<grpc::ClientContext> context,
          google::cloud::internal::ImmutableOptions options,
          google::cloud::dataplex::v1::CreateAspectTypeRequest const& request) {
        return child_->AsyncCreateAspectType(cq, std::move(context),
                                             std::move(options), request);
      },
      cq, std::move(context), std::move(options), request, __func__,
      tracing_options_);
}

StatusOr<google::longrunning::Operation>
CatalogServiceLogging::CreateAspectType(
    grpc::ClientContext& context, Options options,
    google::cloud::dataplex::v1::CreateAspectTypeRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](
          grpc::ClientContext& context, Options const& options,
          google::cloud::dataplex::v1::CreateAspectTypeRequest const& request) {
        return child_->CreateAspectType(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
CatalogServiceLogging::AsyncUpdateAspectType(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::dataplex::v1::UpdateAspectTypeRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](
          google::cloud::CompletionQueue& cq,
          std::shared_ptr<grpc::ClientContext> context,
          google::cloud::internal::ImmutableOptions options,
          google::cloud::dataplex::v1::UpdateAspectTypeRequest const& request) {
        return child_->AsyncUpdateAspectType(cq, std::move(context),
                                             std::move(options), request);
      },
      cq, std::move(context), std::move(options), request, __func__,
      tracing_options_);
}

StatusOr<google::longrunning::Operation>
CatalogServiceLogging::UpdateAspectType(
    grpc::ClientContext& context, Options options,
    google::cloud::dataplex::v1::UpdateAspectTypeRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](
          grpc::ClientContext& context, Options const& options,
          google::cloud::dataplex::v1::UpdateAspectTypeRequest const& request) {
        return child_->UpdateAspectType(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
CatalogServiceLogging::AsyncDeleteAspectType(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::dataplex::v1::DeleteAspectTypeRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](
          google::cloud::CompletionQueue& cq,
          std::shared_ptr<grpc::ClientContext> context,
          google::cloud::internal::ImmutableOptions options,
          google::cloud::dataplex::v1::DeleteAspectTypeRequest const& request) {
        return child_->AsyncDeleteAspectType(cq, std::move(context),
                                             std::move(options), request);
      },
      cq, std::move(context), std::move(options), request, __func__,
      tracing_options_);
}

StatusOr<google::longrunning::Operation>
CatalogServiceLogging::DeleteAspectType(
    grpc::ClientContext& context, Options options,
    google::cloud::dataplex::v1::DeleteAspectTypeRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](
          grpc::ClientContext& context, Options const& options,
          google::cloud::dataplex::v1::DeleteAspectTypeRequest const& request) {
        return child_->DeleteAspectType(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::dataplex::v1::ListAspectTypesResponse>
CatalogServiceLogging::ListAspectTypes(
    grpc::ClientContext& context, Options const& options,
    google::cloud::dataplex::v1::ListAspectTypesRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](
          grpc::ClientContext& context, Options const& options,
          google::cloud::dataplex::v1::ListAspectTypesRequest const& request) {
        return child_->ListAspectTypes(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::dataplex::v1::AspectType>
CatalogServiceLogging::GetAspectType(
    grpc::ClientContext& context, Options const& options,
    google::cloud::dataplex::v1::GetAspectTypeRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::dataplex::v1::GetAspectTypeRequest const& request) {
        return child_->GetAspectType(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
CatalogServiceLogging::AsyncCreateEntryGroup(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::dataplex::v1::CreateEntryGroupRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](
          google::cloud::CompletionQueue& cq,
          std::shared_ptr<grpc::ClientContext> context,
          google::cloud::internal::ImmutableOptions options,
          google::cloud::dataplex::v1::CreateEntryGroupRequest const& request) {
        return child_->AsyncCreateEntryGroup(cq, std::move(context),
                                             std::move(options), request);
      },
      cq, std::move(context), std::move(options), request, __func__,
      tracing_options_);
}

StatusOr<google::longrunning::Operation>
CatalogServiceLogging::CreateEntryGroup(
    grpc::ClientContext& context, Options options,
    google::cloud::dataplex::v1::CreateEntryGroupRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](
          grpc::ClientContext& context, Options const& options,
          google::cloud::dataplex::v1::CreateEntryGroupRequest const& request) {
        return child_->CreateEntryGroup(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
CatalogServiceLogging::AsyncUpdateEntryGroup(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::dataplex::v1::UpdateEntryGroupRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](
          google::cloud::CompletionQueue& cq,
          std::shared_ptr<grpc::ClientContext> context,
          google::cloud::internal::ImmutableOptions options,
          google::cloud::dataplex::v1::UpdateEntryGroupRequest const& request) {
        return child_->AsyncUpdateEntryGroup(cq, std::move(context),
                                             std::move(options), request);
      },
      cq, std::move(context), std::move(options), request, __func__,
      tracing_options_);
}

StatusOr<google::longrunning::Operation>
CatalogServiceLogging::UpdateEntryGroup(
    grpc::ClientContext& context, Options options,
    google::cloud::dataplex::v1::UpdateEntryGroupRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](
          grpc::ClientContext& context, Options const& options,
          google::cloud::dataplex::v1::UpdateEntryGroupRequest const& request) {
        return child_->UpdateEntryGroup(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
CatalogServiceLogging::AsyncDeleteEntryGroup(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::dataplex::v1::DeleteEntryGroupRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](
          google::cloud::CompletionQueue& cq,
          std::shared_ptr<grpc::ClientContext> context,
          google::cloud::internal::ImmutableOptions options,
          google::cloud::dataplex::v1::DeleteEntryGroupRequest const& request) {
        return child_->AsyncDeleteEntryGroup(cq, std::move(context),
                                             std::move(options), request);
      },
      cq, std::move(context), std::move(options), request, __func__,
      tracing_options_);
}

StatusOr<google::longrunning::Operation>
CatalogServiceLogging::DeleteEntryGroup(
    grpc::ClientContext& context, Options options,
    google::cloud::dataplex::v1::DeleteEntryGroupRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](
          grpc::ClientContext& context, Options const& options,
          google::cloud::dataplex::v1::DeleteEntryGroupRequest const& request) {
        return child_->DeleteEntryGroup(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::dataplex::v1::ListEntryGroupsResponse>
CatalogServiceLogging::ListEntryGroups(
    grpc::ClientContext& context, Options const& options,
    google::cloud::dataplex::v1::ListEntryGroupsRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](
          grpc::ClientContext& context, Options const& options,
          google::cloud::dataplex::v1::ListEntryGroupsRequest const& request) {
        return child_->ListEntryGroups(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::dataplex::v1::EntryGroup>
CatalogServiceLogging::GetEntryGroup(
    grpc::ClientContext& context, Options const& options,
    google::cloud::dataplex::v1::GetEntryGroupRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::dataplex::v1::GetEntryGroupRequest const& request) {
        return child_->GetEntryGroup(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::dataplex::v1::Entry> CatalogServiceLogging::CreateEntry(
    grpc::ClientContext& context, Options const& options,
    google::cloud::dataplex::v1::CreateEntryRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::dataplex::v1::CreateEntryRequest const& request) {
        return child_->CreateEntry(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::dataplex::v1::Entry> CatalogServiceLogging::UpdateEntry(
    grpc::ClientContext& context, Options const& options,
    google::cloud::dataplex::v1::UpdateEntryRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::dataplex::v1::UpdateEntryRequest const& request) {
        return child_->UpdateEntry(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::dataplex::v1::Entry> CatalogServiceLogging::DeleteEntry(
    grpc::ClientContext& context, Options const& options,
    google::cloud::dataplex::v1::DeleteEntryRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::dataplex::v1::DeleteEntryRequest const& request) {
        return child_->DeleteEntry(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::dataplex::v1::ListEntriesResponse>
CatalogServiceLogging::ListEntries(
    grpc::ClientContext& context, Options const& options,
    google::cloud::dataplex::v1::ListEntriesRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::dataplex::v1::ListEntriesRequest const& request) {
        return child_->ListEntries(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::dataplex::v1::Entry> CatalogServiceLogging::GetEntry(
    grpc::ClientContext& context, Options const& options,
    google::cloud::dataplex::v1::GetEntryRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::dataplex::v1::GetEntryRequest const& request) {
        return child_->GetEntry(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::dataplex::v1::Entry> CatalogServiceLogging::LookupEntry(
    grpc::ClientContext& context, Options const& options,
    google::cloud::dataplex::v1::LookupEntryRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::dataplex::v1::LookupEntryRequest const& request) {
        return child_->LookupEntry(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::dataplex::v1::SearchEntriesResponse>
CatalogServiceLogging::SearchEntries(
    grpc::ClientContext& context, Options const& options,
    google::cloud::dataplex::v1::SearchEntriesRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::dataplex::v1::SearchEntriesRequest const& request) {
        return child_->SearchEntries(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::location::ListLocationsResponse>
CatalogServiceLogging::ListLocations(
    grpc::ClientContext& context, Options const& options,
    google::cloud::location::ListLocationsRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::location::ListLocationsRequest const& request) {
        return child_->ListLocations(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::location::Location> CatalogServiceLogging::GetLocation(
    grpc::ClientContext& context, Options const& options,
    google::cloud::location::GetLocationRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::location::GetLocationRequest const& request) {
        return child_->GetLocation(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::iam::v1::Policy> CatalogServiceLogging::SetIamPolicy(
    grpc::ClientContext& context, Options const& options,
    google::iam::v1::SetIamPolicyRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::iam::v1::SetIamPolicyRequest const& request) {
        return child_->SetIamPolicy(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::iam::v1::Policy> CatalogServiceLogging::GetIamPolicy(
    grpc::ClientContext& context, Options const& options,
    google::iam::v1::GetIamPolicyRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::iam::v1::GetIamPolicyRequest const& request) {
        return child_->GetIamPolicy(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::iam::v1::TestIamPermissionsResponse>
CatalogServiceLogging::TestIamPermissions(
    grpc::ClientContext& context, Options const& options,
    google::iam::v1::TestIamPermissionsRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::iam::v1::TestIamPermissionsRequest const& request) {
        return child_->TestIamPermissions(context, options, request);
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

Status CatalogServiceLogging::DeleteOperation(
    grpc::ClientContext& context, Options const& options,
    google::longrunning::DeleteOperationRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::longrunning::DeleteOperationRequest const& request) {
        return child_->DeleteOperation(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

Status CatalogServiceLogging::CancelOperation(
    grpc::ClientContext& context, Options const& options,
    google::longrunning::CancelOperationRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::longrunning::CancelOperationRequest const& request) {
        return child_->CancelOperation(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
CatalogServiceLogging::AsyncGetOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::longrunning::GetOperationRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             google::cloud::internal::ImmutableOptions options,
             google::longrunning::GetOperationRequest const& request) {
        return child_->AsyncGetOperation(cq, std::move(context),
                                         std::move(options), request);
      },
      cq, std::move(context), std::move(options), request, __func__,
      tracing_options_);
}

future<Status> CatalogServiceLogging::AsyncCancelOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::longrunning::CancelOperationRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             google::cloud::internal::ImmutableOptions options,
             google::longrunning::CancelOperationRequest const& request) {
        return child_->AsyncCancelOperation(cq, std::move(context),
                                            std::move(options), request);
      },
      cq, std::move(context), std::move(options), request, __func__,
      tracing_options_);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace dataplex_v1_internal
}  // namespace cloud
}  // namespace google
