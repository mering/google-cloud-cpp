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
// source: google/cloud/shell/v1/cloudshell.proto

#include "google/cloud/shell/v1/internal/cloud_shell_metadata_decorator.h"
#include "google/cloud/grpc_options.h"
#include "google/cloud/internal/absl_str_cat_quiet.h"
#include "google/cloud/internal/api_client_header.h"
#include "google/cloud/internal/url_encode.h"
#include "google/cloud/status_or.h"
#include "google/cloud/shell/v1/cloudshell.grpc.pb.h"
#include <memory>
#include <string>
#include <utility>
#include <vector>

namespace google {
namespace cloud {
namespace shell_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

CloudShellServiceMetadata::CloudShellServiceMetadata(
    std::shared_ptr<CloudShellServiceStub> child,
    std::multimap<std::string, std::string> fixed_metadata,
    std::string api_client_header)
    : child_(std::move(child)),
      fixed_metadata_(std::move(fixed_metadata)),
      api_client_header_(
          api_client_header.empty()
              ? google::cloud::internal::GeneratedLibClientHeader()
              : std::move(api_client_header)) {}

StatusOr<google::cloud::shell::v1::Environment>
CloudShellServiceMetadata::GetEnvironment(
    grpc::ClientContext& context, Options const& options,
    google::cloud::shell::v1::GetEnvironmentRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->GetEnvironment(context, options, request);
}

future<StatusOr<google::longrunning::Operation>>
CloudShellServiceMetadata::AsyncStartEnvironment(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::shell::v1::StartEnvironmentRequest const& request) {
  SetMetadata(*context, *options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->AsyncStartEnvironment(cq, std::move(context),
                                       std::move(options), request);
}

StatusOr<google::longrunning::Operation>
CloudShellServiceMetadata::StartEnvironment(
    grpc::ClientContext& context, Options options,
    google::cloud::shell::v1::StartEnvironmentRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->StartEnvironment(context, options, request);
}

future<StatusOr<google::longrunning::Operation>>
CloudShellServiceMetadata::AsyncAuthorizeEnvironment(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::shell::v1::AuthorizeEnvironmentRequest const& request) {
  SetMetadata(*context, *options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->AsyncAuthorizeEnvironment(cq, std::move(context),
                                           std::move(options), request);
}

StatusOr<google::longrunning::Operation>
CloudShellServiceMetadata::AuthorizeEnvironment(
    grpc::ClientContext& context, Options options,
    google::cloud::shell::v1::AuthorizeEnvironmentRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->AuthorizeEnvironment(context, options, request);
}

future<StatusOr<google::longrunning::Operation>>
CloudShellServiceMetadata::AsyncAddPublicKey(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::shell::v1::AddPublicKeyRequest const& request) {
  SetMetadata(
      *context, *options,
      absl::StrCat("environment=", internal::UrlEncode(request.environment())));
  return child_->AsyncAddPublicKey(cq, std::move(context), std::move(options),
                                   request);
}

StatusOr<google::longrunning::Operation>
CloudShellServiceMetadata::AddPublicKey(
    grpc::ClientContext& context, Options options,
    google::cloud::shell::v1::AddPublicKeyRequest const& request) {
  SetMetadata(
      context, options,
      absl::StrCat("environment=", internal::UrlEncode(request.environment())));
  return child_->AddPublicKey(context, options, request);
}

future<StatusOr<google::longrunning::Operation>>
CloudShellServiceMetadata::AsyncRemovePublicKey(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::shell::v1::RemovePublicKeyRequest const& request) {
  SetMetadata(
      *context, *options,
      absl::StrCat("environment=", internal::UrlEncode(request.environment())));
  return child_->AsyncRemovePublicKey(cq, std::move(context),
                                      std::move(options), request);
}

StatusOr<google::longrunning::Operation>
CloudShellServiceMetadata::RemovePublicKey(
    grpc::ClientContext& context, Options options,
    google::cloud::shell::v1::RemovePublicKeyRequest const& request) {
  SetMetadata(
      context, options,
      absl::StrCat("environment=", internal::UrlEncode(request.environment())));
  return child_->RemovePublicKey(context, options, request);
}

future<StatusOr<google::longrunning::Operation>>
CloudShellServiceMetadata::AsyncGetOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::longrunning::GetOperationRequest const& request) {
  SetMetadata(*context, *options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->AsyncGetOperation(cq, std::move(context), std::move(options),
                                   request);
}

future<Status> CloudShellServiceMetadata::AsyncCancelOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::longrunning::CancelOperationRequest const& request) {
  SetMetadata(*context, *options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->AsyncCancelOperation(cq, std::move(context),
                                      std::move(options), request);
}

void CloudShellServiceMetadata::SetMetadata(grpc::ClientContext& context,
                                            Options const& options,
                                            std::string const& request_params) {
  context.AddMetadata("x-goog-request-params", request_params);
  SetMetadata(context, options);
}

void CloudShellServiceMetadata::SetMetadata(grpc::ClientContext& context,
                                            Options const& options) {
  google::cloud::internal::SetMetadata(context, options, fixed_metadata_,
                                       api_client_header_);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace shell_v1_internal
}  // namespace cloud
}  // namespace google
