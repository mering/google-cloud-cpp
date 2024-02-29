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
// source: google/cloud/dataproc/v1/workflow_templates.proto

#include "google/cloud/dataproc/v1/internal/workflow_template_stub.h"
#include "google/cloud/grpc_error_delegate.h"
#include "google/cloud/status_or.h"
#include <google/cloud/dataproc/v1/workflow_templates.grpc.pb.h>
#include <google/longrunning/operations.grpc.pb.h>
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace dataproc_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

WorkflowTemplateServiceStub::~WorkflowTemplateServiceStub() = default;

StatusOr<google::cloud::dataproc::v1::WorkflowTemplate>
DefaultWorkflowTemplateServiceStub::CreateWorkflowTemplate(
    grpc::ClientContext& context, Options const&,
    google::cloud::dataproc::v1::CreateWorkflowTemplateRequest const& request) {
  google::cloud::dataproc::v1::WorkflowTemplate response;
  auto status =
      grpc_stub_->CreateWorkflowTemplate(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::dataproc::v1::WorkflowTemplate>
DefaultWorkflowTemplateServiceStub::GetWorkflowTemplate(
    grpc::ClientContext& context, Options const&,
    google::cloud::dataproc::v1::GetWorkflowTemplateRequest const& request) {
  google::cloud::dataproc::v1::WorkflowTemplate response;
  auto status = grpc_stub_->GetWorkflowTemplate(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

future<StatusOr<google::longrunning::Operation>>
DefaultWorkflowTemplateServiceStub::AsyncInstantiateWorkflowTemplate(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions,
    google::cloud::dataproc::v1::InstantiateWorkflowTemplateRequest const&
        request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::dataproc::v1::InstantiateWorkflowTemplateRequest,
      google::longrunning::Operation>(
      cq,
      [this](
          grpc::ClientContext* context,
          google::cloud::dataproc::v1::InstantiateWorkflowTemplateRequest const&
              request,
          grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncInstantiateWorkflowTemplate(context, request,
                                                            cq);
      },
      request, std::move(context));
}

future<StatusOr<google::longrunning::Operation>>
DefaultWorkflowTemplateServiceStub::AsyncInstantiateInlineWorkflowTemplate(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions,
    google::cloud::dataproc::v1::InstantiateInlineWorkflowTemplateRequest const&
        request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::dataproc::v1::InstantiateInlineWorkflowTemplateRequest,
      google::longrunning::Operation>(
      cq,
      [this](grpc::ClientContext* context,
             google::cloud::dataproc::v1::
                 InstantiateInlineWorkflowTemplateRequest const& request,
             grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncInstantiateInlineWorkflowTemplate(context,
                                                                  request, cq);
      },
      request, std::move(context));
}

StatusOr<google::cloud::dataproc::v1::WorkflowTemplate>
DefaultWorkflowTemplateServiceStub::UpdateWorkflowTemplate(
    grpc::ClientContext& context, Options const&,
    google::cloud::dataproc::v1::UpdateWorkflowTemplateRequest const& request) {
  google::cloud::dataproc::v1::WorkflowTemplate response;
  auto status =
      grpc_stub_->UpdateWorkflowTemplate(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::dataproc::v1::ListWorkflowTemplatesResponse>
DefaultWorkflowTemplateServiceStub::ListWorkflowTemplates(
    grpc::ClientContext& context, Options const&,
    google::cloud::dataproc::v1::ListWorkflowTemplatesRequest const& request) {
  google::cloud::dataproc::v1::ListWorkflowTemplatesResponse response;
  auto status = grpc_stub_->ListWorkflowTemplates(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

Status DefaultWorkflowTemplateServiceStub::DeleteWorkflowTemplate(
    grpc::ClientContext& context, Options const&,
    google::cloud::dataproc::v1::DeleteWorkflowTemplateRequest const& request) {
  google::protobuf::Empty response;
  auto status =
      grpc_stub_->DeleteWorkflowTemplate(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return google::cloud::Status();
}

future<StatusOr<google::longrunning::Operation>>
DefaultWorkflowTemplateServiceStub::AsyncGetOperation(
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

future<Status> DefaultWorkflowTemplateServiceStub::AsyncCancelOperation(
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
}  // namespace dataproc_v1_internal
}  // namespace cloud
}  // namespace google
