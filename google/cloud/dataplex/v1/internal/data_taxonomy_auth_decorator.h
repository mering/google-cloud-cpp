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
// source: google/cloud/dataplex/v1/data_taxonomy.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DATAPLEX_V1_INTERNAL_DATA_TAXONOMY_AUTH_DECORATOR_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DATAPLEX_V1_INTERNAL_DATA_TAXONOMY_AUTH_DECORATOR_H

#include "google/cloud/dataplex/v1/internal/data_taxonomy_stub.h"
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

class DataTaxonomyServiceAuth : public DataTaxonomyServiceStub {
 public:
  ~DataTaxonomyServiceAuth() override = default;
  DataTaxonomyServiceAuth(
      std::shared_ptr<google::cloud::internal::GrpcAuthenticationStrategy> auth,
      std::shared_ptr<DataTaxonomyServiceStub> child);

  future<StatusOr<google::longrunning::Operation>> AsyncCreateDataTaxonomy(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::dataplex::v1::CreateDataTaxonomyRequest const& request)
      override;

  StatusOr<google::longrunning::Operation> CreateDataTaxonomy(
      grpc::ClientContext& context, Options options,
      google::cloud::dataplex::v1::CreateDataTaxonomyRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncUpdateDataTaxonomy(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::dataplex::v1::UpdateDataTaxonomyRequest const& request)
      override;

  StatusOr<google::longrunning::Operation> UpdateDataTaxonomy(
      grpc::ClientContext& context, Options options,
      google::cloud::dataplex::v1::UpdateDataTaxonomyRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncDeleteDataTaxonomy(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::dataplex::v1::DeleteDataTaxonomyRequest const& request)
      override;

  StatusOr<google::longrunning::Operation> DeleteDataTaxonomy(
      grpc::ClientContext& context, Options options,
      google::cloud::dataplex::v1::DeleteDataTaxonomyRequest const& request)
      override;

  StatusOr<google::cloud::dataplex::v1::ListDataTaxonomiesResponse>
  ListDataTaxonomies(
      grpc::ClientContext& context, Options const& options,
      google::cloud::dataplex::v1::ListDataTaxonomiesRequest const& request)
      override;

  StatusOr<google::cloud::dataplex::v1::DataTaxonomy> GetDataTaxonomy(
      grpc::ClientContext& context, Options const& options,
      google::cloud::dataplex::v1::GetDataTaxonomyRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>>
  AsyncCreateDataAttributeBinding(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::dataplex::v1::CreateDataAttributeBindingRequest const&
          request) override;

  StatusOr<google::longrunning::Operation> CreateDataAttributeBinding(
      grpc::ClientContext& context, Options options,
      google::cloud::dataplex::v1::CreateDataAttributeBindingRequest const&
          request) override;

  future<StatusOr<google::longrunning::Operation>>
  AsyncUpdateDataAttributeBinding(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::dataplex::v1::UpdateDataAttributeBindingRequest const&
          request) override;

  StatusOr<google::longrunning::Operation> UpdateDataAttributeBinding(
      grpc::ClientContext& context, Options options,
      google::cloud::dataplex::v1::UpdateDataAttributeBindingRequest const&
          request) override;

  future<StatusOr<google::longrunning::Operation>>
  AsyncDeleteDataAttributeBinding(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::dataplex::v1::DeleteDataAttributeBindingRequest const&
          request) override;

  StatusOr<google::longrunning::Operation> DeleteDataAttributeBinding(
      grpc::ClientContext& context, Options options,
      google::cloud::dataplex::v1::DeleteDataAttributeBindingRequest const&
          request) override;

  StatusOr<google::cloud::dataplex::v1::ListDataAttributeBindingsResponse>
  ListDataAttributeBindings(
      grpc::ClientContext& context, Options const& options,
      google::cloud::dataplex::v1::ListDataAttributeBindingsRequest const&
          request) override;

  StatusOr<google::cloud::dataplex::v1::DataAttributeBinding>
  GetDataAttributeBinding(
      grpc::ClientContext& context, Options const& options,
      google::cloud::dataplex::v1::GetDataAttributeBindingRequest const&
          request) override;

  future<StatusOr<google::longrunning::Operation>> AsyncCreateDataAttribute(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::dataplex::v1::CreateDataAttributeRequest const& request)
      override;

  StatusOr<google::longrunning::Operation> CreateDataAttribute(
      grpc::ClientContext& context, Options options,
      google::cloud::dataplex::v1::CreateDataAttributeRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncUpdateDataAttribute(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::dataplex::v1::UpdateDataAttributeRequest const& request)
      override;

  StatusOr<google::longrunning::Operation> UpdateDataAttribute(
      grpc::ClientContext& context, Options options,
      google::cloud::dataplex::v1::UpdateDataAttributeRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncDeleteDataAttribute(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::dataplex::v1::DeleteDataAttributeRequest const& request)
      override;

  StatusOr<google::longrunning::Operation> DeleteDataAttribute(
      grpc::ClientContext& context, Options options,
      google::cloud::dataplex::v1::DeleteDataAttributeRequest const& request)
      override;

  StatusOr<google::cloud::dataplex::v1::ListDataAttributesResponse>
  ListDataAttributes(
      grpc::ClientContext& context, Options const& options,
      google::cloud::dataplex::v1::ListDataAttributesRequest const& request)
      override;

  StatusOr<google::cloud::dataplex::v1::DataAttribute> GetDataAttribute(
      grpc::ClientContext& context, Options const& options,
      google::cloud::dataplex::v1::GetDataAttributeRequest const& request)
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
  std::shared_ptr<DataTaxonomyServiceStub> child_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace dataplex_v1_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DATAPLEX_V1_INTERNAL_DATA_TAXONOMY_AUTH_DECORATOR_H
