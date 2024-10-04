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

#include "google/cloud/dataplex/v1/internal/catalog_stub.h"
#include "google/cloud/grpc_error_delegate.h"
#include "google/cloud/status_or.h"
#include <google/cloud/dataplex/v1/catalog.grpc.pb.h>
#include <google/longrunning/operations.grpc.pb.h>
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace dataplex_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

CatalogServiceStub::~CatalogServiceStub() = default;

future<StatusOr<google::longrunning::Operation>>
DefaultCatalogServiceStub::AsyncCreateEntryType(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions,
    google::cloud::dataplex::v1::CreateEntryTypeRequest const& request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::dataplex::v1::CreateEntryTypeRequest,
      google::longrunning::Operation>(
      cq,
      [this](grpc::ClientContext* context,
             google::cloud::dataplex::v1::CreateEntryTypeRequest const& request,
             grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncCreateEntryType(context, request, cq);
      },
      request, std::move(context));
}

StatusOr<google::longrunning::Operation>
DefaultCatalogServiceStub::CreateEntryType(
    grpc::ClientContext& context, Options,
    google::cloud::dataplex::v1::CreateEntryTypeRequest const& request) {
  google::longrunning::Operation response;
  auto status = grpc_stub_->CreateEntryType(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

future<StatusOr<google::longrunning::Operation>>
DefaultCatalogServiceStub::AsyncUpdateEntryType(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions,
    google::cloud::dataplex::v1::UpdateEntryTypeRequest const& request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::dataplex::v1::UpdateEntryTypeRequest,
      google::longrunning::Operation>(
      cq,
      [this](grpc::ClientContext* context,
             google::cloud::dataplex::v1::UpdateEntryTypeRequest const& request,
             grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncUpdateEntryType(context, request, cq);
      },
      request, std::move(context));
}

StatusOr<google::longrunning::Operation>
DefaultCatalogServiceStub::UpdateEntryType(
    grpc::ClientContext& context, Options,
    google::cloud::dataplex::v1::UpdateEntryTypeRequest const& request) {
  google::longrunning::Operation response;
  auto status = grpc_stub_->UpdateEntryType(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

future<StatusOr<google::longrunning::Operation>>
DefaultCatalogServiceStub::AsyncDeleteEntryType(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions,
    google::cloud::dataplex::v1::DeleteEntryTypeRequest const& request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::dataplex::v1::DeleteEntryTypeRequest,
      google::longrunning::Operation>(
      cq,
      [this](grpc::ClientContext* context,
             google::cloud::dataplex::v1::DeleteEntryTypeRequest const& request,
             grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncDeleteEntryType(context, request, cq);
      },
      request, std::move(context));
}

StatusOr<google::longrunning::Operation>
DefaultCatalogServiceStub::DeleteEntryType(
    grpc::ClientContext& context, Options,
    google::cloud::dataplex::v1::DeleteEntryTypeRequest const& request) {
  google::longrunning::Operation response;
  auto status = grpc_stub_->DeleteEntryType(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::dataplex::v1::ListEntryTypesResponse>
DefaultCatalogServiceStub::ListEntryTypes(
    grpc::ClientContext& context, Options const&,
    google::cloud::dataplex::v1::ListEntryTypesRequest const& request) {
  google::cloud::dataplex::v1::ListEntryTypesResponse response;
  auto status = grpc_stub_->ListEntryTypes(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::dataplex::v1::EntryType>
DefaultCatalogServiceStub::GetEntryType(
    grpc::ClientContext& context, Options const&,
    google::cloud::dataplex::v1::GetEntryTypeRequest const& request) {
  google::cloud::dataplex::v1::EntryType response;
  auto status = grpc_stub_->GetEntryType(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

future<StatusOr<google::longrunning::Operation>>
DefaultCatalogServiceStub::AsyncCreateAspectType(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions,
    google::cloud::dataplex::v1::CreateAspectTypeRequest const& request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::dataplex::v1::CreateAspectTypeRequest,
      google::longrunning::Operation>(
      cq,
      [this](
          grpc::ClientContext* context,
          google::cloud::dataplex::v1::CreateAspectTypeRequest const& request,
          grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncCreateAspectType(context, request, cq);
      },
      request, std::move(context));
}

StatusOr<google::longrunning::Operation>
DefaultCatalogServiceStub::CreateAspectType(
    grpc::ClientContext& context, Options,
    google::cloud::dataplex::v1::CreateAspectTypeRequest const& request) {
  google::longrunning::Operation response;
  auto status = grpc_stub_->CreateAspectType(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

future<StatusOr<google::longrunning::Operation>>
DefaultCatalogServiceStub::AsyncUpdateAspectType(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions,
    google::cloud::dataplex::v1::UpdateAspectTypeRequest const& request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::dataplex::v1::UpdateAspectTypeRequest,
      google::longrunning::Operation>(
      cq,
      [this](
          grpc::ClientContext* context,
          google::cloud::dataplex::v1::UpdateAspectTypeRequest const& request,
          grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncUpdateAspectType(context, request, cq);
      },
      request, std::move(context));
}

StatusOr<google::longrunning::Operation>
DefaultCatalogServiceStub::UpdateAspectType(
    grpc::ClientContext& context, Options,
    google::cloud::dataplex::v1::UpdateAspectTypeRequest const& request) {
  google::longrunning::Operation response;
  auto status = grpc_stub_->UpdateAspectType(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

future<StatusOr<google::longrunning::Operation>>
DefaultCatalogServiceStub::AsyncDeleteAspectType(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions,
    google::cloud::dataplex::v1::DeleteAspectTypeRequest const& request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::dataplex::v1::DeleteAspectTypeRequest,
      google::longrunning::Operation>(
      cq,
      [this](
          grpc::ClientContext* context,
          google::cloud::dataplex::v1::DeleteAspectTypeRequest const& request,
          grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncDeleteAspectType(context, request, cq);
      },
      request, std::move(context));
}

StatusOr<google::longrunning::Operation>
DefaultCatalogServiceStub::DeleteAspectType(
    grpc::ClientContext& context, Options,
    google::cloud::dataplex::v1::DeleteAspectTypeRequest const& request) {
  google::longrunning::Operation response;
  auto status = grpc_stub_->DeleteAspectType(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::dataplex::v1::ListAspectTypesResponse>
DefaultCatalogServiceStub::ListAspectTypes(
    grpc::ClientContext& context, Options const&,
    google::cloud::dataplex::v1::ListAspectTypesRequest const& request) {
  google::cloud::dataplex::v1::ListAspectTypesResponse response;
  auto status = grpc_stub_->ListAspectTypes(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::dataplex::v1::AspectType>
DefaultCatalogServiceStub::GetAspectType(
    grpc::ClientContext& context, Options const&,
    google::cloud::dataplex::v1::GetAspectTypeRequest const& request) {
  google::cloud::dataplex::v1::AspectType response;
  auto status = grpc_stub_->GetAspectType(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

future<StatusOr<google::longrunning::Operation>>
DefaultCatalogServiceStub::AsyncCreateEntryGroup(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions,
    google::cloud::dataplex::v1::CreateEntryGroupRequest const& request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::dataplex::v1::CreateEntryGroupRequest,
      google::longrunning::Operation>(
      cq,
      [this](
          grpc::ClientContext* context,
          google::cloud::dataplex::v1::CreateEntryGroupRequest const& request,
          grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncCreateEntryGroup(context, request, cq);
      },
      request, std::move(context));
}

StatusOr<google::longrunning::Operation>
DefaultCatalogServiceStub::CreateEntryGroup(
    grpc::ClientContext& context, Options,
    google::cloud::dataplex::v1::CreateEntryGroupRequest const& request) {
  google::longrunning::Operation response;
  auto status = grpc_stub_->CreateEntryGroup(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

future<StatusOr<google::longrunning::Operation>>
DefaultCatalogServiceStub::AsyncUpdateEntryGroup(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions,
    google::cloud::dataplex::v1::UpdateEntryGroupRequest const& request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::dataplex::v1::UpdateEntryGroupRequest,
      google::longrunning::Operation>(
      cq,
      [this](
          grpc::ClientContext* context,
          google::cloud::dataplex::v1::UpdateEntryGroupRequest const& request,
          grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncUpdateEntryGroup(context, request, cq);
      },
      request, std::move(context));
}

StatusOr<google::longrunning::Operation>
DefaultCatalogServiceStub::UpdateEntryGroup(
    grpc::ClientContext& context, Options,
    google::cloud::dataplex::v1::UpdateEntryGroupRequest const& request) {
  google::longrunning::Operation response;
  auto status = grpc_stub_->UpdateEntryGroup(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

future<StatusOr<google::longrunning::Operation>>
DefaultCatalogServiceStub::AsyncDeleteEntryGroup(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions,
    google::cloud::dataplex::v1::DeleteEntryGroupRequest const& request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::dataplex::v1::DeleteEntryGroupRequest,
      google::longrunning::Operation>(
      cq,
      [this](
          grpc::ClientContext* context,
          google::cloud::dataplex::v1::DeleteEntryGroupRequest const& request,
          grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncDeleteEntryGroup(context, request, cq);
      },
      request, std::move(context));
}

StatusOr<google::longrunning::Operation>
DefaultCatalogServiceStub::DeleteEntryGroup(
    grpc::ClientContext& context, Options,
    google::cloud::dataplex::v1::DeleteEntryGroupRequest const& request) {
  google::longrunning::Operation response;
  auto status = grpc_stub_->DeleteEntryGroup(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::dataplex::v1::ListEntryGroupsResponse>
DefaultCatalogServiceStub::ListEntryGroups(
    grpc::ClientContext& context, Options const&,
    google::cloud::dataplex::v1::ListEntryGroupsRequest const& request) {
  google::cloud::dataplex::v1::ListEntryGroupsResponse response;
  auto status = grpc_stub_->ListEntryGroups(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::dataplex::v1::EntryGroup>
DefaultCatalogServiceStub::GetEntryGroup(
    grpc::ClientContext& context, Options const&,
    google::cloud::dataplex::v1::GetEntryGroupRequest const& request) {
  google::cloud::dataplex::v1::EntryGroup response;
  auto status = grpc_stub_->GetEntryGroup(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::dataplex::v1::Entry>
DefaultCatalogServiceStub::CreateEntry(
    grpc::ClientContext& context, Options const&,
    google::cloud::dataplex::v1::CreateEntryRequest const& request) {
  google::cloud::dataplex::v1::Entry response;
  auto status = grpc_stub_->CreateEntry(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::dataplex::v1::Entry>
DefaultCatalogServiceStub::UpdateEntry(
    grpc::ClientContext& context, Options const&,
    google::cloud::dataplex::v1::UpdateEntryRequest const& request) {
  google::cloud::dataplex::v1::Entry response;
  auto status = grpc_stub_->UpdateEntry(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::dataplex::v1::Entry>
DefaultCatalogServiceStub::DeleteEntry(
    grpc::ClientContext& context, Options const&,
    google::cloud::dataplex::v1::DeleteEntryRequest const& request) {
  google::cloud::dataplex::v1::Entry response;
  auto status = grpc_stub_->DeleteEntry(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::dataplex::v1::ListEntriesResponse>
DefaultCatalogServiceStub::ListEntries(
    grpc::ClientContext& context, Options const&,
    google::cloud::dataplex::v1::ListEntriesRequest const& request) {
  google::cloud::dataplex::v1::ListEntriesResponse response;
  auto status = grpc_stub_->ListEntries(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::dataplex::v1::Entry>
DefaultCatalogServiceStub::GetEntry(
    grpc::ClientContext& context, Options const&,
    google::cloud::dataplex::v1::GetEntryRequest const& request) {
  google::cloud::dataplex::v1::Entry response;
  auto status = grpc_stub_->GetEntry(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::dataplex::v1::Entry>
DefaultCatalogServiceStub::LookupEntry(
    grpc::ClientContext& context, Options const&,
    google::cloud::dataplex::v1::LookupEntryRequest const& request) {
  google::cloud::dataplex::v1::Entry response;
  auto status = grpc_stub_->LookupEntry(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::dataplex::v1::SearchEntriesResponse>
DefaultCatalogServiceStub::SearchEntries(
    grpc::ClientContext& context, Options const&,
    google::cloud::dataplex::v1::SearchEntriesRequest const& request) {
  google::cloud::dataplex::v1::SearchEntriesResponse response;
  auto status = grpc_stub_->SearchEntries(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::location::ListLocationsResponse>
DefaultCatalogServiceStub::ListLocations(
    grpc::ClientContext& context, Options const&,
    google::cloud::location::ListLocationsRequest const& request) {
  google::cloud::location::ListLocationsResponse response;
  auto status = locations_stub_->ListLocations(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::location::Location>
DefaultCatalogServiceStub::GetLocation(
    grpc::ClientContext& context, Options const&,
    google::cloud::location::GetLocationRequest const& request) {
  google::cloud::location::Location response;
  auto status = locations_stub_->GetLocation(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::iam::v1::Policy> DefaultCatalogServiceStub::SetIamPolicy(
    grpc::ClientContext& context, Options const&,
    google::iam::v1::SetIamPolicyRequest const& request) {
  google::iam::v1::Policy response;
  auto status = iampolicy_stub_->SetIamPolicy(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::iam::v1::Policy> DefaultCatalogServiceStub::GetIamPolicy(
    grpc::ClientContext& context, Options const&,
    google::iam::v1::GetIamPolicyRequest const& request) {
  google::iam::v1::Policy response;
  auto status = iampolicy_stub_->GetIamPolicy(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::iam::v1::TestIamPermissionsResponse>
DefaultCatalogServiceStub::TestIamPermissions(
    grpc::ClientContext& context, Options const&,
    google::iam::v1::TestIamPermissionsRequest const& request) {
  google::iam::v1::TestIamPermissionsResponse response;
  auto status =
      iampolicy_stub_->TestIamPermissions(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::longrunning::ListOperationsResponse>
DefaultCatalogServiceStub::ListOperations(
    grpc::ClientContext& context, Options const&,
    google::longrunning::ListOperationsRequest const& request) {
  google::longrunning::ListOperationsResponse response;
  auto status = operations_stub_->ListOperations(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::longrunning::Operation>
DefaultCatalogServiceStub::GetOperation(
    grpc::ClientContext& context, Options const&,
    google::longrunning::GetOperationRequest const& request) {
  google::longrunning::Operation response;
  auto status = operations_stub_->GetOperation(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

Status DefaultCatalogServiceStub::DeleteOperation(
    grpc::ClientContext& context, Options const&,
    google::longrunning::DeleteOperationRequest const& request) {
  google::protobuf::Empty response;
  auto status = operations_stub_->DeleteOperation(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return google::cloud::Status();
}

Status DefaultCatalogServiceStub::CancelOperation(
    grpc::ClientContext& context, Options const&,
    google::longrunning::CancelOperationRequest const& request) {
  google::protobuf::Empty response;
  auto status = operations_stub_->CancelOperation(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return google::cloud::Status();
}

future<StatusOr<google::longrunning::Operation>>
DefaultCatalogServiceStub::AsyncGetOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    // NOLINTNEXTLINE(performance-unnecessary-value-param)
    google::cloud::internal::ImmutableOptions,
    google::longrunning::GetOperationRequest const& request) {
  return internal::MakeUnaryRpcImpl<google::longrunning::GetOperationRequest,
                                    google::longrunning::Operation>(
      cq,
      [this](grpc::ClientContext* context,
             google::longrunning::GetOperationRequest const& request,
             grpc::CompletionQueue* cq) {
        return operations_->AsyncGetOperation(context, request, cq);
      },
      request, std::move(context));
}

future<Status> DefaultCatalogServiceStub::AsyncCancelOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    // NOLINTNEXTLINE(performance-unnecessary-value-param)
    google::cloud::internal::ImmutableOptions,
    google::longrunning::CancelOperationRequest const& request) {
  return internal::MakeUnaryRpcImpl<google::longrunning::CancelOperationRequest,
                                    google::protobuf::Empty>(
             cq,
             [this](grpc::ClientContext* context,
                    google::longrunning::CancelOperationRequest const& request,
                    grpc::CompletionQueue* cq) {
               return operations_->AsyncCancelOperation(context, request, cq);
             },
             request, std::move(context))
      .then([](future<StatusOr<google::protobuf::Empty>> f) {
        return f.get().status();
      });
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace dataplex_v1_internal
}  // namespace cloud
}  // namespace google
