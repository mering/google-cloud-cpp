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
// source: google/cloud/notebooks/v1/managed_service.proto

#include "google/cloud/notebooks/v1/internal/managed_notebook_stub.h"
#include "google/cloud/grpc_error_delegate.h"
#include "google/cloud/status_or.h"
#include <google/cloud/notebooks/v1/managed_service.grpc.pb.h>
#include <google/longrunning/operations.grpc.pb.h>
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace notebooks_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

ManagedNotebookServiceStub::~ManagedNotebookServiceStub() = default;

StatusOr<google::cloud::notebooks::v1::ListRuntimesResponse>
DefaultManagedNotebookServiceStub::ListRuntimes(
    grpc::ClientContext& context, Options const&,
    google::cloud::notebooks::v1::ListRuntimesRequest const& request) {
  google::cloud::notebooks::v1::ListRuntimesResponse response;
  auto status = grpc_stub_->ListRuntimes(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::notebooks::v1::Runtime>
DefaultManagedNotebookServiceStub::GetRuntime(
    grpc::ClientContext& context, Options const&,
    google::cloud::notebooks::v1::GetRuntimeRequest const& request) {
  google::cloud::notebooks::v1::Runtime response;
  auto status = grpc_stub_->GetRuntime(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

future<StatusOr<google::longrunning::Operation>>
DefaultManagedNotebookServiceStub::AsyncCreateRuntime(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions,
    google::cloud::notebooks::v1::CreateRuntimeRequest const& request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::notebooks::v1::CreateRuntimeRequest,
      google::longrunning::Operation>(
      cq,
      [this](grpc::ClientContext* context,
             google::cloud::notebooks::v1::CreateRuntimeRequest const& request,
             grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncCreateRuntime(context, request, cq);
      },
      request, std::move(context));
}

future<StatusOr<google::longrunning::Operation>>
DefaultManagedNotebookServiceStub::AsyncUpdateRuntime(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions,
    google::cloud::notebooks::v1::UpdateRuntimeRequest const& request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::notebooks::v1::UpdateRuntimeRequest,
      google::longrunning::Operation>(
      cq,
      [this](grpc::ClientContext* context,
             google::cloud::notebooks::v1::UpdateRuntimeRequest const& request,
             grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncUpdateRuntime(context, request, cq);
      },
      request, std::move(context));
}

future<StatusOr<google::longrunning::Operation>>
DefaultManagedNotebookServiceStub::AsyncDeleteRuntime(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions,
    google::cloud::notebooks::v1::DeleteRuntimeRequest const& request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::notebooks::v1::DeleteRuntimeRequest,
      google::longrunning::Operation>(
      cq,
      [this](grpc::ClientContext* context,
             google::cloud::notebooks::v1::DeleteRuntimeRequest const& request,
             grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncDeleteRuntime(context, request, cq);
      },
      request, std::move(context));
}

future<StatusOr<google::longrunning::Operation>>
DefaultManagedNotebookServiceStub::AsyncStartRuntime(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions,
    google::cloud::notebooks::v1::StartRuntimeRequest const& request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::notebooks::v1::StartRuntimeRequest,
      google::longrunning::Operation>(
      cq,
      [this](grpc::ClientContext* context,
             google::cloud::notebooks::v1::StartRuntimeRequest const& request,
             grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncStartRuntime(context, request, cq);
      },
      request, std::move(context));
}

future<StatusOr<google::longrunning::Operation>>
DefaultManagedNotebookServiceStub::AsyncStopRuntime(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions,
    google::cloud::notebooks::v1::StopRuntimeRequest const& request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::notebooks::v1::StopRuntimeRequest,
      google::longrunning::Operation>(
      cq,
      [this](grpc::ClientContext* context,
             google::cloud::notebooks::v1::StopRuntimeRequest const& request,
             grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncStopRuntime(context, request, cq);
      },
      request, std::move(context));
}

future<StatusOr<google::longrunning::Operation>>
DefaultManagedNotebookServiceStub::AsyncSwitchRuntime(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions,
    google::cloud::notebooks::v1::SwitchRuntimeRequest const& request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::notebooks::v1::SwitchRuntimeRequest,
      google::longrunning::Operation>(
      cq,
      [this](grpc::ClientContext* context,
             google::cloud::notebooks::v1::SwitchRuntimeRequest const& request,
             grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncSwitchRuntime(context, request, cq);
      },
      request, std::move(context));
}

future<StatusOr<google::longrunning::Operation>>
DefaultManagedNotebookServiceStub::AsyncResetRuntime(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions,
    google::cloud::notebooks::v1::ResetRuntimeRequest const& request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::notebooks::v1::ResetRuntimeRequest,
      google::longrunning::Operation>(
      cq,
      [this](grpc::ClientContext* context,
             google::cloud::notebooks::v1::ResetRuntimeRequest const& request,
             grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncResetRuntime(context, request, cq);
      },
      request, std::move(context));
}

future<StatusOr<google::longrunning::Operation>>
DefaultManagedNotebookServiceStub::AsyncUpgradeRuntime(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions,
    google::cloud::notebooks::v1::UpgradeRuntimeRequest const& request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::notebooks::v1::UpgradeRuntimeRequest,
      google::longrunning::Operation>(
      cq,
      [this](grpc::ClientContext* context,
             google::cloud::notebooks::v1::UpgradeRuntimeRequest const& request,
             grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncUpgradeRuntime(context, request, cq);
      },
      request, std::move(context));
}

future<StatusOr<google::longrunning::Operation>>
DefaultManagedNotebookServiceStub::AsyncReportRuntimeEvent(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions,
    google::cloud::notebooks::v1::ReportRuntimeEventRequest const& request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::notebooks::v1::ReportRuntimeEventRequest,
      google::longrunning::Operation>(
      cq,
      [this](grpc::ClientContext* context,
             google::cloud::notebooks::v1::ReportRuntimeEventRequest const&
                 request,
             grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncReportRuntimeEvent(context, request, cq);
      },
      request, std::move(context));
}

StatusOr<google::cloud::notebooks::v1::RefreshRuntimeTokenInternalResponse>
DefaultManagedNotebookServiceStub::RefreshRuntimeTokenInternal(
    grpc::ClientContext& context, Options const&,
    google::cloud::notebooks::v1::RefreshRuntimeTokenInternalRequest const&
        request) {
  google::cloud::notebooks::v1::RefreshRuntimeTokenInternalResponse response;
  auto status =
      grpc_stub_->RefreshRuntimeTokenInternal(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

future<StatusOr<google::longrunning::Operation>>
DefaultManagedNotebookServiceStub::AsyncDiagnoseRuntime(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions,
    google::cloud::notebooks::v1::DiagnoseRuntimeRequest const& request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::notebooks::v1::DiagnoseRuntimeRequest,
      google::longrunning::Operation>(
      cq,
      [this](
          grpc::ClientContext* context,
          google::cloud::notebooks::v1::DiagnoseRuntimeRequest const& request,
          grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncDiagnoseRuntime(context, request, cq);
      },
      request, std::move(context));
}

future<StatusOr<google::longrunning::Operation>>
DefaultManagedNotebookServiceStub::AsyncGetOperation(
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

future<Status> DefaultManagedNotebookServiceStub::AsyncCancelOperation(
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
}  // namespace notebooks_v1_internal
}  // namespace cloud
}  // namespace google
