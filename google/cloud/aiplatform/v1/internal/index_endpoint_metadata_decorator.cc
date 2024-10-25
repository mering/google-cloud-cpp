// Copyright 2023 Google LLC
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
// source: google/cloud/aiplatform/v1/index_endpoint_service.proto

#include "google/cloud/aiplatform/v1/internal/index_endpoint_metadata_decorator.h"
#include "google/cloud/grpc_options.h"
#include "google/cloud/internal/absl_str_cat_quiet.h"
#include "google/cloud/internal/api_client_header.h"
#include "google/cloud/internal/url_encode.h"
#include "google/cloud/status_or.h"
#include "google/cloud/aiplatform/v1/index_endpoint_service.grpc.pb.h"
#include <memory>
#include <string>
#include <utility>
#include <vector>

namespace google {
namespace cloud {
namespace aiplatform_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

IndexEndpointServiceMetadata::IndexEndpointServiceMetadata(
    std::shared_ptr<IndexEndpointServiceStub> child,
    std::multimap<std::string, std::string> fixed_metadata,
    std::string api_client_header)
    : child_(std::move(child)),
      fixed_metadata_(std::move(fixed_metadata)),
      api_client_header_(
          api_client_header.empty()
              ? google::cloud::internal::GeneratedLibClientHeader()
              : std::move(api_client_header)) {}

future<StatusOr<google::longrunning::Operation>>
IndexEndpointServiceMetadata::AsyncCreateIndexEndpoint(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::aiplatform::v1::CreateIndexEndpointRequest const& request) {
  SetMetadata(*context, *options,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->AsyncCreateIndexEndpoint(cq, std::move(context),
                                          std::move(options), request);
}

StatusOr<google::longrunning::Operation>
IndexEndpointServiceMetadata::CreateIndexEndpoint(
    grpc::ClientContext& context, Options options,
    google::cloud::aiplatform::v1::CreateIndexEndpointRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->CreateIndexEndpoint(context, options, request);
}

StatusOr<google::cloud::aiplatform::v1::IndexEndpoint>
IndexEndpointServiceMetadata::GetIndexEndpoint(
    grpc::ClientContext& context, Options const& options,
    google::cloud::aiplatform::v1::GetIndexEndpointRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->GetIndexEndpoint(context, options, request);
}

StatusOr<google::cloud::aiplatform::v1::ListIndexEndpointsResponse>
IndexEndpointServiceMetadata::ListIndexEndpoints(
    grpc::ClientContext& context, Options const& options,
    google::cloud::aiplatform::v1::ListIndexEndpointsRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->ListIndexEndpoints(context, options, request);
}

StatusOr<google::cloud::aiplatform::v1::IndexEndpoint>
IndexEndpointServiceMetadata::UpdateIndexEndpoint(
    grpc::ClientContext& context, Options const& options,
    google::cloud::aiplatform::v1::UpdateIndexEndpointRequest const& request) {
  SetMetadata(
      context, options,
      absl::StrCat("index_endpoint.name=",
                   internal::UrlEncode(request.index_endpoint().name())));
  return child_->UpdateIndexEndpoint(context, options, request);
}

future<StatusOr<google::longrunning::Operation>>
IndexEndpointServiceMetadata::AsyncDeleteIndexEndpoint(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::aiplatform::v1::DeleteIndexEndpointRequest const& request) {
  SetMetadata(*context, *options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->AsyncDeleteIndexEndpoint(cq, std::move(context),
                                          std::move(options), request);
}

StatusOr<google::longrunning::Operation>
IndexEndpointServiceMetadata::DeleteIndexEndpoint(
    grpc::ClientContext& context, Options options,
    google::cloud::aiplatform::v1::DeleteIndexEndpointRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->DeleteIndexEndpoint(context, options, request);
}

future<StatusOr<google::longrunning::Operation>>
IndexEndpointServiceMetadata::AsyncDeployIndex(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::aiplatform::v1::DeployIndexRequest const& request) {
  SetMetadata(*context, *options,
              absl::StrCat("index_endpoint=",
                           internal::UrlEncode(request.index_endpoint())));
  return child_->AsyncDeployIndex(cq, std::move(context), std::move(options),
                                  request);
}

StatusOr<google::longrunning::Operation>
IndexEndpointServiceMetadata::DeployIndex(
    grpc::ClientContext& context, Options options,
    google::cloud::aiplatform::v1::DeployIndexRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("index_endpoint=",
                           internal::UrlEncode(request.index_endpoint())));
  return child_->DeployIndex(context, options, request);
}

future<StatusOr<google::longrunning::Operation>>
IndexEndpointServiceMetadata::AsyncUndeployIndex(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::aiplatform::v1::UndeployIndexRequest const& request) {
  SetMetadata(*context, *options,
              absl::StrCat("index_endpoint=",
                           internal::UrlEncode(request.index_endpoint())));
  return child_->AsyncUndeployIndex(cq, std::move(context), std::move(options),
                                    request);
}

StatusOr<google::longrunning::Operation>
IndexEndpointServiceMetadata::UndeployIndex(
    grpc::ClientContext& context, Options options,
    google::cloud::aiplatform::v1::UndeployIndexRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("index_endpoint=",
                           internal::UrlEncode(request.index_endpoint())));
  return child_->UndeployIndex(context, options, request);
}

future<StatusOr<google::longrunning::Operation>>
IndexEndpointServiceMetadata::AsyncMutateDeployedIndex(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::aiplatform::v1::MutateDeployedIndexRequest const& request) {
  SetMetadata(*context, *options,
              absl::StrCat("index_endpoint=",
                           internal::UrlEncode(request.index_endpoint())));
  return child_->AsyncMutateDeployedIndex(cq, std::move(context),
                                          std::move(options), request);
}

StatusOr<google::longrunning::Operation>
IndexEndpointServiceMetadata::MutateDeployedIndex(
    grpc::ClientContext& context, Options options,
    google::cloud::aiplatform::v1::MutateDeployedIndexRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("index_endpoint=",
                           internal::UrlEncode(request.index_endpoint())));
  return child_->MutateDeployedIndex(context, options, request);
}

StatusOr<google::cloud::location::ListLocationsResponse>
IndexEndpointServiceMetadata::ListLocations(
    grpc::ClientContext& context, Options const& options,
    google::cloud::location::ListLocationsRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->ListLocations(context, options, request);
}

StatusOr<google::cloud::location::Location>
IndexEndpointServiceMetadata::GetLocation(
    grpc::ClientContext& context, Options const& options,
    google::cloud::location::GetLocationRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->GetLocation(context, options, request);
}

StatusOr<google::iam::v1::Policy> IndexEndpointServiceMetadata::SetIamPolicy(
    grpc::ClientContext& context, Options const& options,
    google::iam::v1::SetIamPolicyRequest const& request) {
  SetMetadata(
      context, options,
      absl::StrCat("resource=", internal::UrlEncode(request.resource())));
  return child_->SetIamPolicy(context, options, request);
}

StatusOr<google::iam::v1::Policy> IndexEndpointServiceMetadata::GetIamPolicy(
    grpc::ClientContext& context, Options const& options,
    google::iam::v1::GetIamPolicyRequest const& request) {
  SetMetadata(
      context, options,
      absl::StrCat("resource=", internal::UrlEncode(request.resource())));
  return child_->GetIamPolicy(context, options, request);
}

StatusOr<google::iam::v1::TestIamPermissionsResponse>
IndexEndpointServiceMetadata::TestIamPermissions(
    grpc::ClientContext& context, Options const& options,
    google::iam::v1::TestIamPermissionsRequest const& request) {
  SetMetadata(
      context, options,
      absl::StrCat("resource=", internal::UrlEncode(request.resource())));
  return child_->TestIamPermissions(context, options, request);
}

StatusOr<google::longrunning::ListOperationsResponse>
IndexEndpointServiceMetadata::ListOperations(
    grpc::ClientContext& context, Options const& options,
    google::longrunning::ListOperationsRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->ListOperations(context, options, request);
}

StatusOr<google::longrunning::Operation>
IndexEndpointServiceMetadata::GetOperation(
    grpc::ClientContext& context, Options const& options,
    google::longrunning::GetOperationRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->GetOperation(context, options, request);
}

Status IndexEndpointServiceMetadata::DeleteOperation(
    grpc::ClientContext& context, Options const& options,
    google::longrunning::DeleteOperationRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->DeleteOperation(context, options, request);
}

Status IndexEndpointServiceMetadata::CancelOperation(
    grpc::ClientContext& context, Options const& options,
    google::longrunning::CancelOperationRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->CancelOperation(context, options, request);
}

StatusOr<google::longrunning::Operation>
IndexEndpointServiceMetadata::WaitOperation(
    grpc::ClientContext& context, Options const& options,
    google::longrunning::WaitOperationRequest const& request) {
  SetMetadata(context, options);
  return child_->WaitOperation(context, options, request);
}

future<StatusOr<google::longrunning::Operation>>
IndexEndpointServiceMetadata::AsyncGetOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::longrunning::GetOperationRequest const& request) {
  SetMetadata(*context, *options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->AsyncGetOperation(cq, std::move(context), std::move(options),
                                   request);
}

future<Status> IndexEndpointServiceMetadata::AsyncCancelOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::longrunning::CancelOperationRequest const& request) {
  SetMetadata(*context, *options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->AsyncCancelOperation(cq, std::move(context),
                                      std::move(options), request);
}

void IndexEndpointServiceMetadata::SetMetadata(
    grpc::ClientContext& context, Options const& options,
    std::string const& request_params) {
  context.AddMetadata("x-goog-request-params", request_params);
  SetMetadata(context, options);
}

void IndexEndpointServiceMetadata::SetMetadata(grpc::ClientContext& context,
                                               Options const& options) {
  google::cloud::internal::SetMetadata(context, options, fixed_metadata_,
                                       api_client_header_);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace aiplatform_v1_internal
}  // namespace cloud
}  // namespace google
