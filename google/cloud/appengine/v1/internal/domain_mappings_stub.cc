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
// source: google/appengine/v1/appengine.proto

#include "google/cloud/appengine/v1/internal/domain_mappings_stub.h"
#include "google/cloud/grpc_error_delegate.h"
#include "google/cloud/status_or.h"
#include "google/appengine/v1/appengine.grpc.pb.h"
#include "google/longrunning/operations.grpc.pb.h"
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace appengine_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

DomainMappingsStub::~DomainMappingsStub() = default;

StatusOr<google::appengine::v1::ListDomainMappingsResponse>
DefaultDomainMappingsStub::ListDomainMappings(
    grpc::ClientContext& context, Options const&,
    google::appengine::v1::ListDomainMappingsRequest const& request) {
  google::appengine::v1::ListDomainMappingsResponse response;
  auto status = grpc_stub_->ListDomainMappings(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::appengine::v1::DomainMapping>
DefaultDomainMappingsStub::GetDomainMapping(
    grpc::ClientContext& context, Options const&,
    google::appengine::v1::GetDomainMappingRequest const& request) {
  google::appengine::v1::DomainMapping response;
  auto status = grpc_stub_->GetDomainMapping(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

future<StatusOr<google::longrunning::Operation>>
DefaultDomainMappingsStub::AsyncCreateDomainMapping(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions,
    google::appengine::v1::CreateDomainMappingRequest const& request) {
  return internal::MakeUnaryRpcImpl<
      google::appengine::v1::CreateDomainMappingRequest,
      google::longrunning::Operation>(
      cq,
      [this](grpc::ClientContext* context,
             google::appengine::v1::CreateDomainMappingRequest const& request,
             grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncCreateDomainMapping(context, request, cq);
      },
      request, std::move(context));
}

StatusOr<google::longrunning::Operation>
DefaultDomainMappingsStub::CreateDomainMapping(
    grpc::ClientContext& context, Options,
    google::appengine::v1::CreateDomainMappingRequest const& request) {
  google::longrunning::Operation response;
  auto status = grpc_stub_->CreateDomainMapping(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

future<StatusOr<google::longrunning::Operation>>
DefaultDomainMappingsStub::AsyncUpdateDomainMapping(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions,
    google::appengine::v1::UpdateDomainMappingRequest const& request) {
  return internal::MakeUnaryRpcImpl<
      google::appengine::v1::UpdateDomainMappingRequest,
      google::longrunning::Operation>(
      cq,
      [this](grpc::ClientContext* context,
             google::appengine::v1::UpdateDomainMappingRequest const& request,
             grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncUpdateDomainMapping(context, request, cq);
      },
      request, std::move(context));
}

StatusOr<google::longrunning::Operation>
DefaultDomainMappingsStub::UpdateDomainMapping(
    grpc::ClientContext& context, Options,
    google::appengine::v1::UpdateDomainMappingRequest const& request) {
  google::longrunning::Operation response;
  auto status = grpc_stub_->UpdateDomainMapping(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

future<StatusOr<google::longrunning::Operation>>
DefaultDomainMappingsStub::AsyncDeleteDomainMapping(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions,
    google::appengine::v1::DeleteDomainMappingRequest const& request) {
  return internal::MakeUnaryRpcImpl<
      google::appengine::v1::DeleteDomainMappingRequest,
      google::longrunning::Operation>(
      cq,
      [this](grpc::ClientContext* context,
             google::appengine::v1::DeleteDomainMappingRequest const& request,
             grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncDeleteDomainMapping(context, request, cq);
      },
      request, std::move(context));
}

StatusOr<google::longrunning::Operation>
DefaultDomainMappingsStub::DeleteDomainMapping(
    grpc::ClientContext& context, Options,
    google::appengine::v1::DeleteDomainMappingRequest const& request) {
  google::longrunning::Operation response;
  auto status = grpc_stub_->DeleteDomainMapping(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

future<StatusOr<google::longrunning::Operation>>
DefaultDomainMappingsStub::AsyncGetOperation(
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

future<Status> DefaultDomainMappingsStub::AsyncCancelOperation(
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
}  // namespace appengine_v1_internal
}  // namespace cloud
}  // namespace google
