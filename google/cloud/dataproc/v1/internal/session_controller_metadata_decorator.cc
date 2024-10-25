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
// source: google/cloud/dataproc/v1/sessions.proto

#include "google/cloud/dataproc/v1/internal/session_controller_metadata_decorator.h"
#include "google/cloud/grpc_options.h"
#include "google/cloud/internal/absl_str_cat_quiet.h"
#include "google/cloud/internal/api_client_header.h"
#include "google/cloud/internal/url_encode.h"
#include "google/cloud/status_or.h"
#include "google/cloud/dataproc/v1/sessions.grpc.pb.h"
#include <memory>
#include <string>
#include <utility>
#include <vector>

namespace google {
namespace cloud {
namespace dataproc_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

SessionControllerMetadata::SessionControllerMetadata(
    std::shared_ptr<SessionControllerStub> child,
    std::multimap<std::string, std::string> fixed_metadata,
    std::string api_client_header)
    : child_(std::move(child)),
      fixed_metadata_(std::move(fixed_metadata)),
      api_client_header_(
          api_client_header.empty()
              ? google::cloud::internal::GeneratedLibClientHeader()
              : std::move(api_client_header)) {}

future<StatusOr<google::longrunning::Operation>>
SessionControllerMetadata::AsyncCreateSession(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::dataproc::v1::CreateSessionRequest const& request) {
  SetMetadata(*context, *options,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->AsyncCreateSession(cq, std::move(context), std::move(options),
                                    request);
}

StatusOr<google::longrunning::Operation>
SessionControllerMetadata::CreateSession(
    grpc::ClientContext& context, Options options,
    google::cloud::dataproc::v1::CreateSessionRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->CreateSession(context, options, request);
}

StatusOr<google::cloud::dataproc::v1::Session>
SessionControllerMetadata::GetSession(
    grpc::ClientContext& context, Options const& options,
    google::cloud::dataproc::v1::GetSessionRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->GetSession(context, options, request);
}

StatusOr<google::cloud::dataproc::v1::ListSessionsResponse>
SessionControllerMetadata::ListSessions(
    grpc::ClientContext& context, Options const& options,
    google::cloud::dataproc::v1::ListSessionsRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->ListSessions(context, options, request);
}

future<StatusOr<google::longrunning::Operation>>
SessionControllerMetadata::AsyncTerminateSession(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::dataproc::v1::TerminateSessionRequest const& request) {
  SetMetadata(*context, *options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->AsyncTerminateSession(cq, std::move(context),
                                       std::move(options), request);
}

StatusOr<google::longrunning::Operation>
SessionControllerMetadata::TerminateSession(
    grpc::ClientContext& context, Options options,
    google::cloud::dataproc::v1::TerminateSessionRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->TerminateSession(context, options, request);
}

future<StatusOr<google::longrunning::Operation>>
SessionControllerMetadata::AsyncDeleteSession(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::dataproc::v1::DeleteSessionRequest const& request) {
  SetMetadata(*context, *options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->AsyncDeleteSession(cq, std::move(context), std::move(options),
                                    request);
}

StatusOr<google::longrunning::Operation>
SessionControllerMetadata::DeleteSession(
    grpc::ClientContext& context, Options options,
    google::cloud::dataproc::v1::DeleteSessionRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->DeleteSession(context, options, request);
}

StatusOr<google::iam::v1::Policy> SessionControllerMetadata::SetIamPolicy(
    grpc::ClientContext& context, Options const& options,
    google::iam::v1::SetIamPolicyRequest const& request) {
  SetMetadata(
      context, options,
      absl::StrCat("resource=", internal::UrlEncode(request.resource())));
  return child_->SetIamPolicy(context, options, request);
}

StatusOr<google::iam::v1::Policy> SessionControllerMetadata::GetIamPolicy(
    grpc::ClientContext& context, Options const& options,
    google::iam::v1::GetIamPolicyRequest const& request) {
  SetMetadata(
      context, options,
      absl::StrCat("resource=", internal::UrlEncode(request.resource())));
  return child_->GetIamPolicy(context, options, request);
}

StatusOr<google::iam::v1::TestIamPermissionsResponse>
SessionControllerMetadata::TestIamPermissions(
    grpc::ClientContext& context, Options const& options,
    google::iam::v1::TestIamPermissionsRequest const& request) {
  SetMetadata(
      context, options,
      absl::StrCat("resource=", internal::UrlEncode(request.resource())));
  return child_->TestIamPermissions(context, options, request);
}

StatusOr<google::longrunning::ListOperationsResponse>
SessionControllerMetadata::ListOperations(
    grpc::ClientContext& context, Options const& options,
    google::longrunning::ListOperationsRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->ListOperations(context, options, request);
}

StatusOr<google::longrunning::Operation>
SessionControllerMetadata::GetOperation(
    grpc::ClientContext& context, Options const& options,
    google::longrunning::GetOperationRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->GetOperation(context, options, request);
}

Status SessionControllerMetadata::DeleteOperation(
    grpc::ClientContext& context, Options const& options,
    google::longrunning::DeleteOperationRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->DeleteOperation(context, options, request);
}

Status SessionControllerMetadata::CancelOperation(
    grpc::ClientContext& context, Options const& options,
    google::longrunning::CancelOperationRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->CancelOperation(context, options, request);
}

future<StatusOr<google::longrunning::Operation>>
SessionControllerMetadata::AsyncGetOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::longrunning::GetOperationRequest const& request) {
  SetMetadata(*context, *options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->AsyncGetOperation(cq, std::move(context), std::move(options),
                                   request);
}

future<Status> SessionControllerMetadata::AsyncCancelOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::longrunning::CancelOperationRequest const& request) {
  SetMetadata(*context, *options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->AsyncCancelOperation(cq, std::move(context),
                                      std::move(options), request);
}

void SessionControllerMetadata::SetMetadata(grpc::ClientContext& context,
                                            Options const& options,
                                            std::string const& request_params) {
  context.AddMetadata("x-goog-request-params", request_params);
  SetMetadata(context, options);
}

void SessionControllerMetadata::SetMetadata(grpc::ClientContext& context,
                                            Options const& options) {
  google::cloud::internal::SetMetadata(context, options, fixed_metadata_,
                                       api_client_header_);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace dataproc_v1_internal
}  // namespace cloud
}  // namespace google
