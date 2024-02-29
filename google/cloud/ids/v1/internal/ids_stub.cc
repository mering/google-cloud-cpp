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
// source: google/cloud/ids/v1/ids.proto

#include "google/cloud/ids/v1/internal/ids_stub.h"
#include "google/cloud/grpc_error_delegate.h"
#include "google/cloud/status_or.h"
#include <google/cloud/ids/v1/ids.grpc.pb.h>
#include <google/longrunning/operations.grpc.pb.h>
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace ids_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

IDSStub::~IDSStub() = default;

StatusOr<google::cloud::ids::v1::ListEndpointsResponse>
DefaultIDSStub::ListEndpoints(
    grpc::ClientContext& context, Options const&,
    google::cloud::ids::v1::ListEndpointsRequest const& request) {
  google::cloud::ids::v1::ListEndpointsResponse response;
  auto status = grpc_stub_->ListEndpoints(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::ids::v1::Endpoint> DefaultIDSStub::GetEndpoint(
    grpc::ClientContext& context, Options const&,
    google::cloud::ids::v1::GetEndpointRequest const& request) {
  google::cloud::ids::v1::Endpoint response;
  auto status = grpc_stub_->GetEndpoint(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

future<StatusOr<google::longrunning::Operation>>
DefaultIDSStub::AsyncCreateEndpoint(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions,
    google::cloud::ids::v1::CreateEndpointRequest const& request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::ids::v1::CreateEndpointRequest,
      google::longrunning::Operation>(
      cq,
      [this](grpc::ClientContext* context,
             google::cloud::ids::v1::CreateEndpointRequest const& request,
             grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncCreateEndpoint(context, request, cq);
      },
      request, std::move(context));
}

future<StatusOr<google::longrunning::Operation>>
DefaultIDSStub::AsyncDeleteEndpoint(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions,
    google::cloud::ids::v1::DeleteEndpointRequest const& request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::ids::v1::DeleteEndpointRequest,
      google::longrunning::Operation>(
      cq,
      [this](grpc::ClientContext* context,
             google::cloud::ids::v1::DeleteEndpointRequest const& request,
             grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncDeleteEndpoint(context, request, cq);
      },
      request, std::move(context));
}

future<StatusOr<google::longrunning::Operation>>
DefaultIDSStub::AsyncGetOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    // NOLINTNEXTLINE(performance-unnecessary-value-param)
    google::cloud::internal::ImmutableOptions,
    google::longrunning::GetOperationRequest const& request) {
  return internal::MakeUnaryRpcImpl<google::longrunning::GetOperationRequest,
                                    google::longrunning::Operation>(
      cq,
      [this](grpc::ClientContext* context,
             google::longrunning::GetOperationRequest const& request,
             grpc::CompletionQueue* cq) {
        return operations_->AsyncGetOperation(context, request, cq);
      },
      request, std::move(context));
}

future<Status> DefaultIDSStub::AsyncCancelOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    // NOLINTNEXTLINE(performance-unnecessary-value-param)
    google::cloud::internal::ImmutableOptions,
    google::longrunning::CancelOperationRequest const& request) {
  return internal::MakeUnaryRpcImpl<google::longrunning::CancelOperationRequest,
                                    google::protobuf::Empty>(
             cq,
             [this](grpc::ClientContext* context,
                    google::longrunning::CancelOperationRequest const& request,
                    grpc::CompletionQueue* cq) {
               return operations_->AsyncCancelOperation(context, request, cq);
             },
             request, std::move(context))
      .then([](future<StatusOr<google::protobuf::Empty>> f) {
        return f.get().status();
      });
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace ids_v1_internal
}  // namespace cloud
}  // namespace google
