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
// source: google/cloud/discoveryengine/v1/completion_service.proto

#include "google/cloud/discoveryengine/v1/internal/completion_stub.h"
#include "google/cloud/grpc_error_delegate.h"
#include "google/cloud/status_or.h"
#include "google/cloud/discoveryengine/v1/completion_service.grpc.pb.h"
#include "google/longrunning/operations.grpc.pb.h"
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace discoveryengine_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

CompletionServiceStub::~CompletionServiceStub() = default;

StatusOr<google::cloud::discoveryengine::v1::CompleteQueryResponse>
DefaultCompletionServiceStub::CompleteQuery(
    grpc::ClientContext& context, Options const&,
    google::cloud::discoveryengine::v1::CompleteQueryRequest const& request) {
  google::cloud::discoveryengine::v1::CompleteQueryResponse response;
  auto status = grpc_stub_->CompleteQuery(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

future<StatusOr<google::longrunning::Operation>>
DefaultCompletionServiceStub::AsyncImportSuggestionDenyListEntries(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions,
    google::cloud::discoveryengine::v1::
        ImportSuggestionDenyListEntriesRequest const& request) {
  return internal::MakeUnaryRpcImpl<google::cloud::discoveryengine::v1::
                                        ImportSuggestionDenyListEntriesRequest,
                                    google::longrunning::Operation>(
      cq,
      [this](grpc::ClientContext* context,
             google::cloud::discoveryengine::v1::
                 ImportSuggestionDenyListEntriesRequest const& request,
             grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncImportSuggestionDenyListEntries(context,
                                                                request, cq);
      },
      request, std::move(context));
}

StatusOr<google::longrunning::Operation>
DefaultCompletionServiceStub::ImportSuggestionDenyListEntries(
    grpc::ClientContext& context, Options,
    google::cloud::discoveryengine::v1::
        ImportSuggestionDenyListEntriesRequest const& request) {
  google::longrunning::Operation response;
  auto status =
      grpc_stub_->ImportSuggestionDenyListEntries(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

future<StatusOr<google::longrunning::Operation>>
DefaultCompletionServiceStub::AsyncPurgeSuggestionDenyListEntries(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions,
    google::cloud::discoveryengine::v1::
        PurgeSuggestionDenyListEntriesRequest const& request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::discoveryengine::v1::PurgeSuggestionDenyListEntriesRequest,
      google::longrunning::Operation>(
      cq,
      [this](grpc::ClientContext* context,
             google::cloud::discoveryengine::v1::
                 PurgeSuggestionDenyListEntriesRequest const& request,
             grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncPurgeSuggestionDenyListEntries(context, request,
                                                               cq);
      },
      request, std::move(context));
}

StatusOr<google::longrunning::Operation>
DefaultCompletionServiceStub::PurgeSuggestionDenyListEntries(
    grpc::ClientContext& context, Options,
    google::cloud::discoveryengine::v1::
        PurgeSuggestionDenyListEntriesRequest const& request) {
  google::longrunning::Operation response;
  auto status =
      grpc_stub_->PurgeSuggestionDenyListEntries(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

future<StatusOr<google::longrunning::Operation>>
DefaultCompletionServiceStub::AsyncImportCompletionSuggestions(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions,
    google::cloud::discoveryengine::v1::
        ImportCompletionSuggestionsRequest const& request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::discoveryengine::v1::ImportCompletionSuggestionsRequest,
      google::longrunning::Operation>(
      cq,
      [this](grpc::ClientContext* context,
             google::cloud::discoveryengine::v1::
                 ImportCompletionSuggestionsRequest const& request,
             grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncImportCompletionSuggestions(context, request,
                                                            cq);
      },
      request, std::move(context));
}

StatusOr<google::longrunning::Operation>
DefaultCompletionServiceStub::ImportCompletionSuggestions(
    grpc::ClientContext& context, Options,
    google::cloud::discoveryengine::v1::
        ImportCompletionSuggestionsRequest const& request) {
  google::longrunning::Operation response;
  auto status =
      grpc_stub_->ImportCompletionSuggestions(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

future<StatusOr<google::longrunning::Operation>>
DefaultCompletionServiceStub::AsyncPurgeCompletionSuggestions(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions,
    google::cloud::discoveryengine::v1::PurgeCompletionSuggestionsRequest const&
        request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::discoveryengine::v1::PurgeCompletionSuggestionsRequest,
      google::longrunning::Operation>(
      cq,
      [this](grpc::ClientContext* context,
             google::cloud::discoveryengine::v1::
                 PurgeCompletionSuggestionsRequest const& request,
             grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncPurgeCompletionSuggestions(context, request,
                                                           cq);
      },
      request, std::move(context));
}

StatusOr<google::longrunning::Operation>
DefaultCompletionServiceStub::PurgeCompletionSuggestions(
    grpc::ClientContext& context, Options,
    google::cloud::discoveryengine::v1::PurgeCompletionSuggestionsRequest const&
        request) {
  google::longrunning::Operation response;
  auto status =
      grpc_stub_->PurgeCompletionSuggestions(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::longrunning::ListOperationsResponse>
DefaultCompletionServiceStub::ListOperations(
    grpc::ClientContext& context, Options const&,
    google::longrunning::ListOperationsRequest const& request) {
  google::longrunning::ListOperationsResponse response;
  auto status = operations_stub_->ListOperations(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::longrunning::Operation>
DefaultCompletionServiceStub::GetOperation(
    grpc::ClientContext& context, Options const&,
    google::longrunning::GetOperationRequest const& request) {
  google::longrunning::Operation response;
  auto status = operations_stub_->GetOperation(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

Status DefaultCompletionServiceStub::CancelOperation(
    grpc::ClientContext& context, Options const&,
    google::longrunning::CancelOperationRequest const& request) {
  google::protobuf::Empty response;
  auto status = operations_stub_->CancelOperation(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return google::cloud::Status();
}

future<StatusOr<google::longrunning::Operation>>
DefaultCompletionServiceStub::AsyncGetOperation(
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

future<Status> DefaultCompletionServiceStub::AsyncCancelOperation(
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
}  // namespace discoveryengine_v1_internal
}  // namespace cloud
}  // namespace google
