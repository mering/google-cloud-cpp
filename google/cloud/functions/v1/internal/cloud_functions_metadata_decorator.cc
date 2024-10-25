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
// source: google/cloud/functions/v1/functions.proto

#include "google/cloud/functions/v1/internal/cloud_functions_metadata_decorator.h"
#include "google/cloud/functions/v1/functions.grpc.pb.h"
#include "google/cloud/grpc_options.h"
#include "google/cloud/internal/absl_str_cat_quiet.h"
#include "google/cloud/internal/api_client_header.h"
#include "google/cloud/internal/url_encode.h"
#include "google/cloud/status_or.h"
#include <memory>
#include <string>
#include <utility>
#include <vector>

namespace google {
namespace cloud {
namespace functions_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

CloudFunctionsServiceMetadata::CloudFunctionsServiceMetadata(
    std::shared_ptr<CloudFunctionsServiceStub> child,
    std::multimap<std::string, std::string> fixed_metadata,
    std::string api_client_header)
    : child_(std::move(child)),
      fixed_metadata_(std::move(fixed_metadata)),
      api_client_header_(
          api_client_header.empty()
              ? google::cloud::internal::GeneratedLibClientHeader()
              : std::move(api_client_header)) {}

StatusOr<google::cloud::functions::v1::ListFunctionsResponse>
CloudFunctionsServiceMetadata::ListFunctions(
    grpc::ClientContext& context, Options const& options,
    google::cloud::functions::v1::ListFunctionsRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->ListFunctions(context, options, request);
}

StatusOr<google::cloud::functions::v1::CloudFunction>
CloudFunctionsServiceMetadata::GetFunction(
    grpc::ClientContext& context, Options const& options,
    google::cloud::functions::v1::GetFunctionRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->GetFunction(context, options, request);
}

future<StatusOr<google::longrunning::Operation>>
CloudFunctionsServiceMetadata::AsyncCreateFunction(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::functions::v1::CreateFunctionRequest const& request) {
  SetMetadata(
      *context, *options,
      absl::StrCat("location=", internal::UrlEncode(request.location())));
  return child_->AsyncCreateFunction(cq, std::move(context), std::move(options),
                                     request);
}

StatusOr<google::longrunning::Operation>
CloudFunctionsServiceMetadata::CreateFunction(
    grpc::ClientContext& context, Options options,
    google::cloud::functions::v1::CreateFunctionRequest const& request) {
  SetMetadata(
      context, options,
      absl::StrCat("location=", internal::UrlEncode(request.location())));
  return child_->CreateFunction(context, options, request);
}

future<StatusOr<google::longrunning::Operation>>
CloudFunctionsServiceMetadata::AsyncUpdateFunction(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::functions::v1::UpdateFunctionRequest const& request) {
  SetMetadata(*context, *options,
              absl::StrCat("function.name=",
                           internal::UrlEncode(request.function().name())));
  return child_->AsyncUpdateFunction(cq, std::move(context), std::move(options),
                                     request);
}

StatusOr<google::longrunning::Operation>
CloudFunctionsServiceMetadata::UpdateFunction(
    grpc::ClientContext& context, Options options,
    google::cloud::functions::v1::UpdateFunctionRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("function.name=",
                           internal::UrlEncode(request.function().name())));
  return child_->UpdateFunction(context, options, request);
}

future<StatusOr<google::longrunning::Operation>>
CloudFunctionsServiceMetadata::AsyncDeleteFunction(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::functions::v1::DeleteFunctionRequest const& request) {
  SetMetadata(*context, *options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->AsyncDeleteFunction(cq, std::move(context), std::move(options),
                                     request);
}

StatusOr<google::longrunning::Operation>
CloudFunctionsServiceMetadata::DeleteFunction(
    grpc::ClientContext& context, Options options,
    google::cloud::functions::v1::DeleteFunctionRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->DeleteFunction(context, options, request);
}

StatusOr<google::cloud::functions::v1::CallFunctionResponse>
CloudFunctionsServiceMetadata::CallFunction(
    grpc::ClientContext& context, Options const& options,
    google::cloud::functions::v1::CallFunctionRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->CallFunction(context, options, request);
}

StatusOr<google::cloud::functions::v1::GenerateUploadUrlResponse>
CloudFunctionsServiceMetadata::GenerateUploadUrl(
    grpc::ClientContext& context, Options const& options,
    google::cloud::functions::v1::GenerateUploadUrlRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->GenerateUploadUrl(context, options, request);
}

StatusOr<google::cloud::functions::v1::GenerateDownloadUrlResponse>
CloudFunctionsServiceMetadata::GenerateDownloadUrl(
    grpc::ClientContext& context, Options const& options,
    google::cloud::functions::v1::GenerateDownloadUrlRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->GenerateDownloadUrl(context, options, request);
}

StatusOr<google::iam::v1::Policy> CloudFunctionsServiceMetadata::SetIamPolicy(
    grpc::ClientContext& context, Options const& options,
    google::iam::v1::SetIamPolicyRequest const& request) {
  SetMetadata(
      context, options,
      absl::StrCat("resource=", internal::UrlEncode(request.resource())));
  return child_->SetIamPolicy(context, options, request);
}

StatusOr<google::iam::v1::Policy> CloudFunctionsServiceMetadata::GetIamPolicy(
    grpc::ClientContext& context, Options const& options,
    google::iam::v1::GetIamPolicyRequest const& request) {
  SetMetadata(
      context, options,
      absl::StrCat("resource=", internal::UrlEncode(request.resource())));
  return child_->GetIamPolicy(context, options, request);
}

StatusOr<google::iam::v1::TestIamPermissionsResponse>
CloudFunctionsServiceMetadata::TestIamPermissions(
    grpc::ClientContext& context, Options const& options,
    google::iam::v1::TestIamPermissionsRequest const& request) {
  SetMetadata(
      context, options,
      absl::StrCat("resource=", internal::UrlEncode(request.resource())));
  return child_->TestIamPermissions(context, options, request);
}

StatusOr<google::cloud::location::ListLocationsResponse>
CloudFunctionsServiceMetadata::ListLocations(
    grpc::ClientContext& context, Options const& options,
    google::cloud::location::ListLocationsRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->ListLocations(context, options, request);
}

StatusOr<google::longrunning::ListOperationsResponse>
CloudFunctionsServiceMetadata::ListOperations(
    grpc::ClientContext& context, Options const& options,
    google::longrunning::ListOperationsRequest const& request) {
  SetMetadata(context, options, absl::StrCat());
  return child_->ListOperations(context, options, request);
}

StatusOr<google::longrunning::Operation>
CloudFunctionsServiceMetadata::GetOperation(
    grpc::ClientContext& context, Options const& options,
    google::longrunning::GetOperationRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->GetOperation(context, options, request);
}

future<StatusOr<google::longrunning::Operation>>
CloudFunctionsServiceMetadata::AsyncGetOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::longrunning::GetOperationRequest const& request) {
  SetMetadata(*context, *options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->AsyncGetOperation(cq, std::move(context), std::move(options),
                                   request);
}

future<Status> CloudFunctionsServiceMetadata::AsyncCancelOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::longrunning::CancelOperationRequest const& request) {
  SetMetadata(*context, *options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->AsyncCancelOperation(cq, std::move(context),
                                      std::move(options), request);
}

void CloudFunctionsServiceMetadata::SetMetadata(
    grpc::ClientContext& context, Options const& options,
    std::string const& request_params) {
  context.AddMetadata("x-goog-request-params", request_params);
  SetMetadata(context, options);
}

void CloudFunctionsServiceMetadata::SetMetadata(grpc::ClientContext& context,
                                                Options const& options) {
  google::cloud::internal::SetMetadata(context, options, fixed_metadata_,
                                       api_client_header_);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace functions_v1_internal
}  // namespace cloud
}  // namespace google
