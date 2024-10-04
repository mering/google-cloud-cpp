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

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DATAPLEX_V1_INTERNAL_CATALOG_AUTH_DECORATOR_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DATAPLEX_V1_INTERNAL_CATALOG_AUTH_DECORATOR_H

#include "google/cloud/dataplex/v1/internal/catalog_stub.h"
#include "google/cloud/internal/unified_grpc_credentials.h"
#include "google/cloud/version.h"
#include <google/longrunning/operations.grpc.pb.h>
#include <memory>
#include <set>
#include <string>

namespace google {
namespace cloud {
namespace dataplex_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class CatalogServiceAuth : public CatalogServiceStub {
 public:
  ~CatalogServiceAuth() override = default;
  CatalogServiceAuth(
      std::shared_ptr<google::cloud::internal::GrpcAuthenticationStrategy> auth,
      std::shared_ptr<CatalogServiceStub> child);

  future<StatusOr<google::longrunning::Operation>> AsyncCreateEntryType(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::dataplex::v1::CreateEntryTypeRequest const& request)
      override;

  StatusOr<google::longrunning::Operation> CreateEntryType(
      grpc::ClientContext& context, Options options,
      google::cloud::dataplex::v1::CreateEntryTypeRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncUpdateEntryType(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::dataplex::v1::UpdateEntryTypeRequest const& request)
      override;

  StatusOr<google::longrunning::Operation> UpdateEntryType(
      grpc::ClientContext& context, Options options,
      google::cloud::dataplex::v1::UpdateEntryTypeRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncDeleteEntryType(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::dataplex::v1::DeleteEntryTypeRequest const& request)
      override;

  StatusOr<google::longrunning::Operation> DeleteEntryType(
      grpc::ClientContext& context, Options options,
      google::cloud::dataplex::v1::DeleteEntryTypeRequest const& request)
      override;

  StatusOr<google::cloud::dataplex::v1::ListEntryTypesResponse> ListEntryTypes(
      grpc::ClientContext& context, Options const& options,
      google::cloud::dataplex::v1::ListEntryTypesRequest const& request)
      override;

  StatusOr<google::cloud::dataplex::v1::EntryType> GetEntryType(
      grpc::ClientContext& context, Options const& options,
      google::cloud::dataplex::v1::GetEntryTypeRequest const& request) override;

  future<StatusOr<google::longrunning::Operation>> AsyncCreateAspectType(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::dataplex::v1::CreateAspectTypeRequest const& request)
      override;

  StatusOr<google::longrunning::Operation> CreateAspectType(
      grpc::ClientContext& context, Options options,
      google::cloud::dataplex::v1::CreateAspectTypeRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncUpdateAspectType(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::dataplex::v1::UpdateAspectTypeRequest const& request)
      override;

  StatusOr<google::longrunning::Operation> UpdateAspectType(
      grpc::ClientContext& context, Options options,
      google::cloud::dataplex::v1::UpdateAspectTypeRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncDeleteAspectType(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::dataplex::v1::DeleteAspectTypeRequest const& request)
      override;

  StatusOr<google::longrunning::Operation> DeleteAspectType(
      grpc::ClientContext& context, Options options,
      google::cloud::dataplex::v1::DeleteAspectTypeRequest const& request)
      override;

  StatusOr<google::cloud::dataplex::v1::ListAspectTypesResponse>
  ListAspectTypes(grpc::ClientContext& context, Options const& options,
                  google::cloud::dataplex::v1::ListAspectTypesRequest const&
                      request) override;

  StatusOr<google::cloud::dataplex::v1::AspectType> GetAspectType(
      grpc::ClientContext& context, Options const& options,
      google::cloud::dataplex::v1::GetAspectTypeRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncCreateEntryGroup(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::dataplex::v1::CreateEntryGroupRequest const& request)
      override;

  StatusOr<google::longrunning::Operation> CreateEntryGroup(
      grpc::ClientContext& context, Options options,
      google::cloud::dataplex::v1::CreateEntryGroupRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncUpdateEntryGroup(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::dataplex::v1::UpdateEntryGroupRequest const& request)
      override;

  StatusOr<google::longrunning::Operation> UpdateEntryGroup(
      grpc::ClientContext& context, Options options,
      google::cloud::dataplex::v1::UpdateEntryGroupRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncDeleteEntryGroup(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::dataplex::v1::DeleteEntryGroupRequest const& request)
      override;

  StatusOr<google::longrunning::Operation> DeleteEntryGroup(
      grpc::ClientContext& context, Options options,
      google::cloud::dataplex::v1::DeleteEntryGroupRequest const& request)
      override;

  StatusOr<google::cloud::dataplex::v1::ListEntryGroupsResponse>
  ListEntryGroups(grpc::ClientContext& context, Options const& options,
                  google::cloud::dataplex::v1::ListEntryGroupsRequest const&
                      request) override;

  StatusOr<google::cloud::dataplex::v1::EntryGroup> GetEntryGroup(
      grpc::ClientContext& context, Options const& options,
      google::cloud::dataplex::v1::GetEntryGroupRequest const& request)
      override;

  StatusOr<google::cloud::dataplex::v1::Entry> CreateEntry(
      grpc::ClientContext& context, Options const& options,
      google::cloud::dataplex::v1::CreateEntryRequest const& request) override;

  StatusOr<google::cloud::dataplex::v1::Entry> UpdateEntry(
      grpc::ClientContext& context, Options const& options,
      google::cloud::dataplex::v1::UpdateEntryRequest const& request) override;

  StatusOr<google::cloud::dataplex::v1::Entry> DeleteEntry(
      grpc::ClientContext& context, Options const& options,
      google::cloud::dataplex::v1::DeleteEntryRequest const& request) override;

  StatusOr<google::cloud::dataplex::v1::ListEntriesResponse> ListEntries(
      grpc::ClientContext& context, Options const& options,
      google::cloud::dataplex::v1::ListEntriesRequest const& request) override;

  StatusOr<google::cloud::dataplex::v1::Entry> GetEntry(
      grpc::ClientContext& context, Options const& options,
      google::cloud::dataplex::v1::GetEntryRequest const& request) override;

  StatusOr<google::cloud::dataplex::v1::Entry> LookupEntry(
      grpc::ClientContext& context, Options const& options,
      google::cloud::dataplex::v1::LookupEntryRequest const& request) override;

  StatusOr<google::cloud::dataplex::v1::SearchEntriesResponse> SearchEntries(
      grpc::ClientContext& context, Options const& options,
      google::cloud::dataplex::v1::SearchEntriesRequest const& request)
      override;

  StatusOr<google::cloud::location::ListLocationsResponse> ListLocations(
      grpc::ClientContext& context, Options const& options,
      google::cloud::location::ListLocationsRequest const& request) override;

  StatusOr<google::cloud::location::Location> GetLocation(
      grpc::ClientContext& context, Options const& options,
      google::cloud::location::GetLocationRequest const& request) override;

  StatusOr<google::iam::v1::Policy> SetIamPolicy(
      grpc::ClientContext& context, Options const& options,
      google::iam::v1::SetIamPolicyRequest const& request) override;

  StatusOr<google::iam::v1::Policy> GetIamPolicy(
      grpc::ClientContext& context, Options const& options,
      google::iam::v1::GetIamPolicyRequest const& request) override;

  StatusOr<google::iam::v1::TestIamPermissionsResponse> TestIamPermissions(
      grpc::ClientContext& context, Options const& options,
      google::iam::v1::TestIamPermissionsRequest const& request) override;

  StatusOr<google::longrunning::ListOperationsResponse> ListOperations(
      grpc::ClientContext& context, Options const& options,
      google::longrunning::ListOperationsRequest const& request) override;

  StatusOr<google::longrunning::Operation> GetOperation(
      grpc::ClientContext& context, Options const& options,
      google::longrunning::GetOperationRequest const& request) override;

  Status DeleteOperation(
      grpc::ClientContext& context, Options const& options,
      google::longrunning::DeleteOperationRequest const& request) override;

  Status CancelOperation(
      grpc::ClientContext& context, Options const& options,
      google::longrunning::CancelOperationRequest const& request) override;

  future<StatusOr<google::longrunning::Operation>> AsyncGetOperation(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::longrunning::GetOperationRequest const& request) override;

  future<Status> AsyncCancelOperation(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::longrunning::CancelOperationRequest const& request) override;

 private:
  std::shared_ptr<google::cloud::internal::GrpcAuthenticationStrategy> auth_;
  std::shared_ptr<CatalogServiceStub> child_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace dataplex_v1_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DATAPLEX_V1_INTERNAL_CATALOG_AUTH_DECORATOR_H
