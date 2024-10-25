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
// source: google/cloud/pubsublite/v1/cursor.proto

#include "google/cloud/pubsublite/internal/cursor_auth_decorator.h"
#include "google/cloud/pubsublite/v1/cursor.grpc.pb.h"
#include "google/cloud/internal/async_read_write_stream_auth.h"
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace pubsublite_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

CursorServiceAuth::CursorServiceAuth(
    std::shared_ptr<google::cloud::internal::GrpcAuthenticationStrategy> auth,
    std::shared_ptr<CursorServiceStub> child)
    : auth_(std::move(auth)), child_(std::move(child)) {}

std::unique_ptr<::google::cloud::AsyncStreamingReadWriteRpc<
    google::cloud::pubsublite::v1::StreamingCommitCursorRequest,
    google::cloud::pubsublite::v1::StreamingCommitCursorResponse>>
CursorServiceAuth::AsyncStreamingCommitCursor(
    google::cloud::CompletionQueue const& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options) {
  using StreamAuth = google::cloud::internal::AsyncStreamingReadWriteRpcAuth<
      google::cloud::pubsublite::v1::StreamingCommitCursorRequest,
      google::cloud::pubsublite::v1::StreamingCommitCursorResponse>;

  auto call = [child = child_, cq, options = std::move(options)](
                  std::shared_ptr<grpc::ClientContext> ctx) {
    return child->AsyncStreamingCommitCursor(cq, std::move(ctx), options);
  };
  return std::make_unique<StreamAuth>(
      std::move(context), auth_, StreamAuth::StreamFactory(std::move(call)));
}

StatusOr<google::cloud::pubsublite::v1::CommitCursorResponse>
CursorServiceAuth::CommitCursor(
    grpc::ClientContext& context, Options const& options,
    google::cloud::pubsublite::v1::CommitCursorRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->CommitCursor(context, options, request);
}

StatusOr<google::cloud::pubsublite::v1::ListPartitionCursorsResponse>
CursorServiceAuth::ListPartitionCursors(
    grpc::ClientContext& context, Options const& options,
    google::cloud::pubsublite::v1::ListPartitionCursorsRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->ListPartitionCursors(context, options, request);
}

StatusOr<google::longrunning::ListOperationsResponse>
CursorServiceAuth::ListOperations(
    grpc::ClientContext& context, Options const& options,
    google::longrunning::ListOperationsRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->ListOperations(context, options, request);
}

StatusOr<google::longrunning::Operation> CursorServiceAuth::GetOperation(
    grpc::ClientContext& context, Options const& options,
    google::longrunning::GetOperationRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->GetOperation(context, options, request);
}

Status CursorServiceAuth::DeleteOperation(
    grpc::ClientContext& context, Options const& options,
    google::longrunning::DeleteOperationRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->DeleteOperation(context, options, request);
}

Status CursorServiceAuth::CancelOperation(
    grpc::ClientContext& context, Options const& options,
    google::longrunning::CancelOperationRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->CancelOperation(context, options, request);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace pubsublite_internal
}  // namespace cloud
}  // namespace google
