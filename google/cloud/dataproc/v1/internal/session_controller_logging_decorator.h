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

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DATAPROC_V1_INTERNAL_SESSION_CONTROLLER_LOGGING_DECORATOR_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DATAPROC_V1_INTERNAL_SESSION_CONTROLLER_LOGGING_DECORATOR_H

#include "google/cloud/dataproc/v1/internal/session_controller_stub.h"
#include "google/cloud/tracing_options.h"
#include "google/cloud/version.h"
#include "google/longrunning/operations.grpc.pb.h"
#include <memory>
#include <set>
#include <string>

namespace google {
namespace cloud {
namespace dataproc_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class SessionControllerLogging : public SessionControllerStub {
 public:
  ~SessionControllerLogging() override = default;
  SessionControllerLogging(std::shared_ptr<SessionControllerStub> child,
                           TracingOptions tracing_options,
                           std::set<std::string> const& components);

  future<StatusOr<google::longrunning::Operation>> AsyncCreateSession(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::dataproc::v1::CreateSessionRequest const& request)
      override;

  StatusOr<google::longrunning::Operation> CreateSession(
      grpc::ClientContext& context, Options options,
      google::cloud::dataproc::v1::CreateSessionRequest const& request)
      override;

  StatusOr<google::cloud::dataproc::v1::Session> GetSession(
      grpc::ClientContext& context, Options const& options,
      google::cloud::dataproc::v1::GetSessionRequest const& request) override;

  StatusOr<google::cloud::dataproc::v1::ListSessionsResponse> ListSessions(
      grpc::ClientContext& context, Options const& options,
      google::cloud::dataproc::v1::ListSessionsRequest const& request) override;

  future<StatusOr<google::longrunning::Operation>> AsyncTerminateSession(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::dataproc::v1::TerminateSessionRequest const& request)
      override;

  StatusOr<google::longrunning::Operation> TerminateSession(
      grpc::ClientContext& context, Options options,
      google::cloud::dataproc::v1::TerminateSessionRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncDeleteSession(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::dataproc::v1::DeleteSessionRequest const& request)
      override;

  StatusOr<google::longrunning::Operation> DeleteSession(
      grpc::ClientContext& context, Options options,
      google::cloud::dataproc::v1::DeleteSessionRequest const& request)
      override;

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
  std::shared_ptr<SessionControllerStub> child_;
  TracingOptions tracing_options_;
};  // SessionControllerLogging

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace dataproc_v1_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DATAPROC_V1_INTERNAL_SESSION_CONTROLLER_LOGGING_DECORATOR_H
