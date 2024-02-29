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
// source: google/spanner/v1/spanner.proto

#include "google/cloud/spanner/internal/spanner_logging_decorator.h"
#include "google/cloud/internal/log_wrapper.h"
#include "google/cloud/internal/streaming_read_rpc_logging.h"
#include "google/cloud/status_or.h"
#include <google/spanner/v1/spanner.grpc.pb.h>
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace spanner_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

SpannerLogging::SpannerLogging(std::shared_ptr<SpannerStub> child,
                               TracingOptions tracing_options,
                               std::set<std::string> const& components)
    : child_(std::move(child)),
      tracing_options_(std::move(tracing_options)),
      stream_logging_(components.find("rpc-streams") != components.end()) {}

StatusOr<google::spanner::v1::Session> SpannerLogging::CreateSession(
    grpc::ClientContext& context, Options const& options,
    google::spanner::v1::CreateSessionRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::spanner::v1::CreateSessionRequest const& request) {
        return child_->CreateSession(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::spanner::v1::BatchCreateSessionsResponse>
SpannerLogging::BatchCreateSessions(
    grpc::ClientContext& context, Options const& options,
    google::spanner::v1::BatchCreateSessionsRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::spanner::v1::BatchCreateSessionsRequest const& request) {
        return child_->BatchCreateSessions(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

Status SpannerLogging::DeleteSession(
    grpc::ClientContext& context, Options const& options,
    google::spanner::v1::DeleteSessionRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::spanner::v1::DeleteSessionRequest const& request) {
        return child_->DeleteSession(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::spanner::v1::ResultSet> SpannerLogging::ExecuteSql(
    grpc::ClientContext& context, Options const& options,
    google::spanner::v1::ExecuteSqlRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::spanner::v1::ExecuteSqlRequest const& request) {
        return child_->ExecuteSql(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

std::unique_ptr<google::cloud::internal::StreamingReadRpc<
    google::spanner::v1::PartialResultSet>>
SpannerLogging::ExecuteStreamingSql(
    std::shared_ptr<grpc::ClientContext> context, Options const& options,
    google::spanner::v1::ExecuteSqlRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](std::shared_ptr<grpc::ClientContext> context,
             Options const& options,
             google::spanner::v1::ExecuteSqlRequest const& request)
          -> std::unique_ptr<google::cloud::internal::StreamingReadRpc<
              google::spanner::v1::PartialResultSet>> {
        auto stream =
            child_->ExecuteStreamingSql(std::move(context), options, request);
        if (stream_logging_) {
          stream =
              std::make_unique<google::cloud::internal::StreamingReadRpcLogging<
                  google::spanner::v1::PartialResultSet>>(
                  std::move(stream), tracing_options_,
                  google::cloud::internal::RequestIdForLogging());
        }
        return stream;
      },
      std::move(context), options, request, __func__, tracing_options_);
}

StatusOr<google::spanner::v1::ExecuteBatchDmlResponse>
SpannerLogging::ExecuteBatchDml(
    grpc::ClientContext& context, Options const& options,
    google::spanner::v1::ExecuteBatchDmlRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::spanner::v1::ExecuteBatchDmlRequest const& request) {
        return child_->ExecuteBatchDml(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

std::unique_ptr<google::cloud::internal::StreamingReadRpc<
    google::spanner::v1::PartialResultSet>>
SpannerLogging::StreamingRead(std::shared_ptr<grpc::ClientContext> context,
                              Options const& options,
                              google::spanner::v1::ReadRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](std::shared_ptr<grpc::ClientContext> context,
             Options const& options,
             google::spanner::v1::ReadRequest const& request)
          -> std::unique_ptr<google::cloud::internal::StreamingReadRpc<
              google::spanner::v1::PartialResultSet>> {
        auto stream =
            child_->StreamingRead(std::move(context), options, request);
        if (stream_logging_) {
          stream =
              std::make_unique<google::cloud::internal::StreamingReadRpcLogging<
                  google::spanner::v1::PartialResultSet>>(
                  std::move(stream), tracing_options_,
                  google::cloud::internal::RequestIdForLogging());
        }
        return stream;
      },
      std::move(context), options, request, __func__, tracing_options_);
}

StatusOr<google::spanner::v1::Transaction> SpannerLogging::BeginTransaction(
    grpc::ClientContext& context, Options const& options,
    google::spanner::v1::BeginTransactionRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::spanner::v1::BeginTransactionRequest const& request) {
        return child_->BeginTransaction(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::spanner::v1::CommitResponse> SpannerLogging::Commit(
    grpc::ClientContext& context, Options const& options,
    google::spanner::v1::CommitRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::spanner::v1::CommitRequest const& request) {
        return child_->Commit(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

Status SpannerLogging::Rollback(
    grpc::ClientContext& context, Options const& options,
    google::spanner::v1::RollbackRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::spanner::v1::RollbackRequest const& request) {
        return child_->Rollback(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::spanner::v1::PartitionResponse> SpannerLogging::PartitionQuery(
    grpc::ClientContext& context, Options const& options,
    google::spanner::v1::PartitionQueryRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::spanner::v1::PartitionQueryRequest const& request) {
        return child_->PartitionQuery(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::spanner::v1::PartitionResponse> SpannerLogging::PartitionRead(
    grpc::ClientContext& context, Options const& options,
    google::spanner::v1::PartitionReadRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::spanner::v1::PartitionReadRequest const& request) {
        return child_->PartitionRead(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

std::unique_ptr<google::cloud::internal::StreamingReadRpc<
    google::spanner::v1::BatchWriteResponse>>
SpannerLogging::BatchWrite(
    std::shared_ptr<grpc::ClientContext> context, Options const& options,
    google::spanner::v1::BatchWriteRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](std::shared_ptr<grpc::ClientContext> context,
             Options const& options,
             google::spanner::v1::BatchWriteRequest const& request)
          -> std::unique_ptr<google::cloud::internal::StreamingReadRpc<
              google::spanner::v1::BatchWriteResponse>> {
        auto stream = child_->BatchWrite(std::move(context), options, request);
        if (stream_logging_) {
          stream =
              std::make_unique<google::cloud::internal::StreamingReadRpcLogging<
                  google::spanner::v1::BatchWriteResponse>>(
                  std::move(stream), tracing_options_,
                  google::cloud::internal::RequestIdForLogging());
        }
        return stream;
      },
      std::move(context), options, request, __func__, tracing_options_);
}

future<StatusOr<google::spanner::v1::BatchCreateSessionsResponse>>
SpannerLogging::AsyncBatchCreateSessions(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::spanner::v1::BatchCreateSessionsRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             google::cloud::internal::ImmutableOptions options,
             google::spanner::v1::BatchCreateSessionsRequest const& request) {
        return child_->AsyncBatchCreateSessions(cq, std::move(context),
                                                std::move(options), request);
      },
      cq, std::move(context), std::move(options), request, __func__,
      tracing_options_);
}

future<Status> SpannerLogging::AsyncDeleteSession(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::spanner::v1::DeleteSessionRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             google::cloud::internal::ImmutableOptions options,
             google::spanner::v1::DeleteSessionRequest const& request) {
        return child_->AsyncDeleteSession(cq, std::move(context),
                                          std::move(options), request);
      },
      cq, std::move(context), std::move(options), request, __func__,
      tracing_options_);
}

future<StatusOr<google::spanner::v1::ResultSet>>
SpannerLogging::AsyncExecuteSql(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::spanner::v1::ExecuteSqlRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             google::cloud::internal::ImmutableOptions options,
             google::spanner::v1::ExecuteSqlRequest const& request) {
        return child_->AsyncExecuteSql(cq, std::move(context),
                                       std::move(options), request);
      },
      cq, std::move(context), std::move(options), request, __func__,
      tracing_options_);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace spanner_internal
}  // namespace cloud
}  // namespace google
