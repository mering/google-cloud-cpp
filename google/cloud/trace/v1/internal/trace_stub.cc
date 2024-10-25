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
// source: google/devtools/cloudtrace/v1/trace.proto

#include "google/cloud/trace/v1/internal/trace_stub.h"
#include "google/cloud/grpc_error_delegate.h"
#include "google/cloud/status_or.h"
#include "google/devtools/cloudtrace/v1/trace.grpc.pb.h"
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace trace_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

TraceServiceStub::~TraceServiceStub() = default;

StatusOr<google::devtools::cloudtrace::v1::ListTracesResponse>
DefaultTraceServiceStub::ListTraces(
    grpc::ClientContext& context, Options const&,
    google::devtools::cloudtrace::v1::ListTracesRequest const& request) {
  google::devtools::cloudtrace::v1::ListTracesResponse response;
  auto status = grpc_stub_->ListTraces(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::devtools::cloudtrace::v1::Trace>
DefaultTraceServiceStub::GetTrace(
    grpc::ClientContext& context, Options const&,
    google::devtools::cloudtrace::v1::GetTraceRequest const& request) {
  google::devtools::cloudtrace::v1::Trace response;
  auto status = grpc_stub_->GetTrace(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

Status DefaultTraceServiceStub::PatchTraces(
    grpc::ClientContext& context, Options const&,
    google::devtools::cloudtrace::v1::PatchTracesRequest const& request) {
  google::protobuf::Empty response;
  auto status = grpc_stub_->PatchTraces(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return google::cloud::Status();
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace trace_v1_internal
}  // namespace cloud
}  // namespace google
