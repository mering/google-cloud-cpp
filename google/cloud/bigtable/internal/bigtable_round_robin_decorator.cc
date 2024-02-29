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

#include "google/cloud/bigtable/internal/bigtable_round_robin_decorator.h"

namespace google {
namespace cloud {
namespace bigtable_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

BigtableRoundRobin::BigtableRoundRobin(
    std::vector<std::shared_ptr<BigtableStub>> children)
    : children_(std::move(children)) {}

std::unique_ptr<google::cloud::internal::StreamingReadRpc<
    google::bigtable::v2::ReadRowsResponse>>
BigtableRoundRobin::ReadRows(
    std::shared_ptr<grpc::ClientContext> context, Options const& options,
    google::bigtable::v2::ReadRowsRequest const& request) {
  return Child()->ReadRows(std::move(context), options, request);
}

std::unique_ptr<google::cloud::internal::StreamingReadRpc<
    google::bigtable::v2::SampleRowKeysResponse>>
BigtableRoundRobin::SampleRowKeys(
    std::shared_ptr<grpc::ClientContext> context, Options const& options,
    google::bigtable::v2::SampleRowKeysRequest const& request) {
  return Child()->SampleRowKeys(std::move(context), options, request);
}

StatusOr<google::bigtable::v2::MutateRowResponse> BigtableRoundRobin::MutateRow(
    grpc::ClientContext& context, Options const& options,
    google::bigtable::v2::MutateRowRequest const& request) {
  return Child()->MutateRow(context, options, request);
}

std::unique_ptr<google::cloud::internal::StreamingReadRpc<
    google::bigtable::v2::MutateRowsResponse>>
BigtableRoundRobin::MutateRows(
    std::shared_ptr<grpc::ClientContext> context, Options const& options,
    google::bigtable::v2::MutateRowsRequest const& request) {
  return Child()->MutateRows(std::move(context), options, request);
}

StatusOr<google::bigtable::v2::CheckAndMutateRowResponse>
BigtableRoundRobin::CheckAndMutateRow(
    grpc::ClientContext& context, Options const& options,
    google::bigtable::v2::CheckAndMutateRowRequest const& request) {
  return Child()->CheckAndMutateRow(context, options, request);
}

StatusOr<google::bigtable::v2::PingAndWarmResponse>
BigtableRoundRobin::PingAndWarm(
    grpc::ClientContext& context, Options const& options,
    google::bigtable::v2::PingAndWarmRequest const& request) {
  return Child()->PingAndWarm(context, options, request);
}

StatusOr<google::bigtable::v2::ReadModifyWriteRowResponse>
BigtableRoundRobin::ReadModifyWriteRow(
    grpc::ClientContext& context, Options const& options,
    google::bigtable::v2::ReadModifyWriteRowRequest const& request) {
  return Child()->ReadModifyWriteRow(context, options, request);
}

std::unique_ptr<google::cloud::internal::AsyncStreamingReadRpc<
    google::bigtable::v2::ReadRowsResponse>>
BigtableRoundRobin::AsyncReadRows(
    google::cloud::CompletionQueue const& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::bigtable::v2::ReadRowsRequest const& request) {
  return Child()->AsyncReadRows(cq, std::move(context), std::move(options),
                                request);
}

std::unique_ptr<google::cloud::internal::AsyncStreamingReadRpc<
    google::bigtable::v2::SampleRowKeysResponse>>
BigtableRoundRobin::AsyncSampleRowKeys(
    google::cloud::CompletionQueue const& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::bigtable::v2::SampleRowKeysRequest const& request) {
  return Child()->AsyncSampleRowKeys(cq, std::move(context), std::move(options),
                                     request);
}

future<StatusOr<google::bigtable::v2::MutateRowResponse>>
BigtableRoundRobin::AsyncMutateRow(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::bigtable::v2::MutateRowRequest const& request) {
  return Child()->AsyncMutateRow(cq, std::move(context), std::move(options),
                                 request);
}

std::unique_ptr<google::cloud::internal::AsyncStreamingReadRpc<
    google::bigtable::v2::MutateRowsResponse>>
BigtableRoundRobin::AsyncMutateRows(
    google::cloud::CompletionQueue const& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::bigtable::v2::MutateRowsRequest const& request) {
  return Child()->AsyncMutateRows(cq, std::move(context), std::move(options),
                                  request);
}

future<StatusOr<google::bigtable::v2::CheckAndMutateRowResponse>>
BigtableRoundRobin::AsyncCheckAndMutateRow(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::bigtable::v2::CheckAndMutateRowRequest const& request) {
  return Child()->AsyncCheckAndMutateRow(cq, std::move(context),
                                         std::move(options), request);
}

future<StatusOr<google::bigtable::v2::ReadModifyWriteRowResponse>>
BigtableRoundRobin::AsyncReadModifyWriteRow(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::bigtable::v2::ReadModifyWriteRowRequest const& request) {
  return Child()->AsyncReadModifyWriteRow(cq, std::move(context),
                                          std::move(options), request);
}

std::shared_ptr<BigtableStub> BigtableRoundRobin::Child() {
  std::unique_lock<std::mutex> lk(mu_);
  auto const current = current_;
  if (++current_ == children_.size()) current_ = 0;
  lk.unlock();
  return children_[current];
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace bigtable_internal
}  // namespace cloud
}  // namespace google
