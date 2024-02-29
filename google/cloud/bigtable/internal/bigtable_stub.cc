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
// source: google/bigtable/v2/bigtable.proto

#include "google/cloud/bigtable/internal/bigtable_stub.h"
#include "google/cloud/grpc_error_delegate.h"
#include "google/cloud/internal/async_streaming_read_rpc_impl.h"
#include "google/cloud/status_or.h"
#include <google/bigtable/v2/bigtable.grpc.pb.h>
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace bigtable_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

BigtableStub::~BigtableStub() = default;

std::unique_ptr<google::cloud::internal::StreamingReadRpc<
    google::bigtable::v2::ReadRowsResponse>>
DefaultBigtableStub::ReadRows(
    std::shared_ptr<grpc::ClientContext> context, Options const&,
    google::bigtable::v2::ReadRowsRequest const& request) {
  auto stream = grpc_stub_->ReadRows(context.get(), request);
  return std::make_unique<google::cloud::internal::StreamingReadRpcImpl<
      google::bigtable::v2::ReadRowsResponse>>(std::move(context),
                                               std::move(stream));
}

std::unique_ptr<google::cloud::internal::StreamingReadRpc<
    google::bigtable::v2::SampleRowKeysResponse>>
DefaultBigtableStub::SampleRowKeys(
    std::shared_ptr<grpc::ClientContext> context, Options const&,
    google::bigtable::v2::SampleRowKeysRequest const& request) {
  auto stream = grpc_stub_->SampleRowKeys(context.get(), request);
  return std::make_unique<google::cloud::internal::StreamingReadRpcImpl<
      google::bigtable::v2::SampleRowKeysResponse>>(std::move(context),
                                                    std::move(stream));
}

StatusOr<google::bigtable::v2::MutateRowResponse>
DefaultBigtableStub::MutateRow(
    grpc::ClientContext& context, Options const&,
    google::bigtable::v2::MutateRowRequest const& request) {
  google::bigtable::v2::MutateRowResponse response;
  auto status = grpc_stub_->MutateRow(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

std::unique_ptr<google::cloud::internal::StreamingReadRpc<
    google::bigtable::v2::MutateRowsResponse>>
DefaultBigtableStub::MutateRows(
    std::shared_ptr<grpc::ClientContext> context, Options const&,
    google::bigtable::v2::MutateRowsRequest const& request) {
  auto stream = grpc_stub_->MutateRows(context.get(), request);
  return std::make_unique<google::cloud::internal::StreamingReadRpcImpl<
      google::bigtable::v2::MutateRowsResponse>>(std::move(context),
                                                 std::move(stream));
}

StatusOr<google::bigtable::v2::CheckAndMutateRowResponse>
DefaultBigtableStub::CheckAndMutateRow(
    grpc::ClientContext& context, Options const&,
    google::bigtable::v2::CheckAndMutateRowRequest const& request) {
  google::bigtable::v2::CheckAndMutateRowResponse response;
  auto status = grpc_stub_->CheckAndMutateRow(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::bigtable::v2::PingAndWarmResponse>
DefaultBigtableStub::PingAndWarm(
    grpc::ClientContext& context, Options const&,
    google::bigtable::v2::PingAndWarmRequest const& request) {
  google::bigtable::v2::PingAndWarmResponse response;
  auto status = grpc_stub_->PingAndWarm(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::bigtable::v2::ReadModifyWriteRowResponse>
DefaultBigtableStub::ReadModifyWriteRow(
    grpc::ClientContext& context, Options const&,
    google::bigtable::v2::ReadModifyWriteRowRequest const& request) {
  google::bigtable::v2::ReadModifyWriteRowResponse response;
  auto status = grpc_stub_->ReadModifyWriteRow(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

std::unique_ptr<::google::cloud::internal::AsyncStreamingReadRpc<
    google::bigtable::v2::ReadRowsResponse>>
DefaultBigtableStub::AsyncReadRows(
    google::cloud::CompletionQueue const& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::bigtable::v2::ReadRowsRequest const& request) {
  return google::cloud::internal::MakeStreamingReadRpc<
      google::bigtable::v2::ReadRowsRequest,
      google::bigtable::v2::ReadRowsResponse>(
      cq, std::move(context), std::move(options), request,
      [this](grpc::ClientContext* context,
             google::bigtable::v2::ReadRowsRequest const& request,
             grpc::CompletionQueue* cq) {
        return grpc_stub_->PrepareAsyncReadRows(context, request, cq);
      });
}

std::unique_ptr<::google::cloud::internal::AsyncStreamingReadRpc<
    google::bigtable::v2::SampleRowKeysResponse>>
DefaultBigtableStub::AsyncSampleRowKeys(
    google::cloud::CompletionQueue const& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::bigtable::v2::SampleRowKeysRequest const& request) {
  return google::cloud::internal::MakeStreamingReadRpc<
      google::bigtable::v2::SampleRowKeysRequest,
      google::bigtable::v2::SampleRowKeysResponse>(
      cq, std::move(context), std::move(options), request,
      [this](grpc::ClientContext* context,
             google::bigtable::v2::SampleRowKeysRequest const& request,
             grpc::CompletionQueue* cq) {
        return grpc_stub_->PrepareAsyncSampleRowKeys(context, request, cq);
      });
}

future<StatusOr<google::bigtable::v2::MutateRowResponse>>
DefaultBigtableStub::AsyncMutateRow(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    // NOLINTNEXTLINE(performance-unnecessary-value-param)
    google::cloud::internal::ImmutableOptions,
    google::bigtable::v2::MutateRowRequest const& request) {
  return internal::MakeUnaryRpcImpl<google::bigtable::v2::MutateRowRequest,
                                    google::bigtable::v2::MutateRowResponse>(
      cq,
      [this](grpc::ClientContext* context,
             google::bigtable::v2::MutateRowRequest const& request,
             grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncMutateRow(context, request, cq);
      },
      request, std::move(context));
}

std::unique_ptr<::google::cloud::internal::AsyncStreamingReadRpc<
    google::bigtable::v2::MutateRowsResponse>>
DefaultBigtableStub::AsyncMutateRows(
    google::cloud::CompletionQueue const& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::bigtable::v2::MutateRowsRequest const& request) {
  return google::cloud::internal::MakeStreamingReadRpc<
      google::bigtable::v2::MutateRowsRequest,
      google::bigtable::v2::MutateRowsResponse>(
      cq, std::move(context), std::move(options), request,
      [this](grpc::ClientContext* context,
             google::bigtable::v2::MutateRowsRequest const& request,
             grpc::CompletionQueue* cq) {
        return grpc_stub_->PrepareAsyncMutateRows(context, request, cq);
      });
}

future<StatusOr<google::bigtable::v2::CheckAndMutateRowResponse>>
DefaultBigtableStub::AsyncCheckAndMutateRow(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    // NOLINTNEXTLINE(performance-unnecessary-value-param)
    google::cloud::internal::ImmutableOptions,
    google::bigtable::v2::CheckAndMutateRowRequest const& request) {
  return internal::MakeUnaryRpcImpl<
      google::bigtable::v2::CheckAndMutateRowRequest,
      google::bigtable::v2::CheckAndMutateRowResponse>(
      cq,
      [this](grpc::ClientContext* context,
             google::bigtable::v2::CheckAndMutateRowRequest const& request,
             grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncCheckAndMutateRow(context, request, cq);
      },
      request, std::move(context));
}

future<StatusOr<google::bigtable::v2::ReadModifyWriteRowResponse>>
DefaultBigtableStub::AsyncReadModifyWriteRow(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    // NOLINTNEXTLINE(performance-unnecessary-value-param)
    google::cloud::internal::ImmutableOptions,
    google::bigtable::v2::ReadModifyWriteRowRequest const& request) {
  return internal::MakeUnaryRpcImpl<
      google::bigtable::v2::ReadModifyWriteRowRequest,
      google::bigtable::v2::ReadModifyWriteRowResponse>(
      cq,
      [this](grpc::ClientContext* context,
             google::bigtable::v2::ReadModifyWriteRowRequest const& request,
             grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncReadModifyWriteRow(context, request, cq);
      },
      request, std::move(context));
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace bigtable_internal
}  // namespace cloud
}  // namespace google
