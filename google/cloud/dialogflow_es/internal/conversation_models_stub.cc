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
// source: google/cloud/dialogflow/v2/conversation_model.proto

#include "google/cloud/dialogflow_es/internal/conversation_models_stub.h"
#include "google/cloud/grpc_error_delegate.h"
#include "google/cloud/status_or.h"
#include "google/cloud/dialogflow/v2/conversation_model.grpc.pb.h"
#include "google/longrunning/operations.grpc.pb.h"
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace dialogflow_es_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

ConversationModelsStub::~ConversationModelsStub() = default;

future<StatusOr<google::longrunning::Operation>>
DefaultConversationModelsStub::AsyncCreateConversationModel(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions,
    google::cloud::dialogflow::v2::CreateConversationModelRequest const&
        request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::dialogflow::v2::CreateConversationModelRequest,
      google::longrunning::Operation>(
      cq,
      [this](
          grpc::ClientContext* context,
          google::cloud::dialogflow::v2::CreateConversationModelRequest const&
              request,
          grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncCreateConversationModel(context, request, cq);
      },
      request, std::move(context));
}

StatusOr<google::longrunning::Operation>
DefaultConversationModelsStub::CreateConversationModel(
    grpc::ClientContext& context, Options,
    google::cloud::dialogflow::v2::CreateConversationModelRequest const&
        request) {
  google::longrunning::Operation response;
  auto status =
      grpc_stub_->CreateConversationModel(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::dialogflow::v2::ConversationModel>
DefaultConversationModelsStub::GetConversationModel(
    grpc::ClientContext& context, Options const&,
    google::cloud::dialogflow::v2::GetConversationModelRequest const& request) {
  google::cloud::dialogflow::v2::ConversationModel response;
  auto status = grpc_stub_->GetConversationModel(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::dialogflow::v2::ListConversationModelsResponse>
DefaultConversationModelsStub::ListConversationModels(
    grpc::ClientContext& context, Options const&,
    google::cloud::dialogflow::v2::ListConversationModelsRequest const&
        request) {
  google::cloud::dialogflow::v2::ListConversationModelsResponse response;
  auto status =
      grpc_stub_->ListConversationModels(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

future<StatusOr<google::longrunning::Operation>>
DefaultConversationModelsStub::AsyncDeleteConversationModel(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions,
    google::cloud::dialogflow::v2::DeleteConversationModelRequest const&
        request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::dialogflow::v2::DeleteConversationModelRequest,
      google::longrunning::Operation>(
      cq,
      [this](
          grpc::ClientContext* context,
          google::cloud::dialogflow::v2::DeleteConversationModelRequest const&
              request,
          grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncDeleteConversationModel(context, request, cq);
      },
      request, std::move(context));
}

StatusOr<google::longrunning::Operation>
DefaultConversationModelsStub::DeleteConversationModel(
    grpc::ClientContext& context, Options,
    google::cloud::dialogflow::v2::DeleteConversationModelRequest const&
        request) {
  google::longrunning::Operation response;
  auto status =
      grpc_stub_->DeleteConversationModel(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

future<StatusOr<google::longrunning::Operation>>
DefaultConversationModelsStub::AsyncDeployConversationModel(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions,
    google::cloud::dialogflow::v2::DeployConversationModelRequest const&
        request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::dialogflow::v2::DeployConversationModelRequest,
      google::longrunning::Operation>(
      cq,
      [this](
          grpc::ClientContext* context,
          google::cloud::dialogflow::v2::DeployConversationModelRequest const&
              request,
          grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncDeployConversationModel(context, request, cq);
      },
      request, std::move(context));
}

StatusOr<google::longrunning::Operation>
DefaultConversationModelsStub::DeployConversationModel(
    grpc::ClientContext& context, Options,
    google::cloud::dialogflow::v2::DeployConversationModelRequest const&
        request) {
  google::longrunning::Operation response;
  auto status =
      grpc_stub_->DeployConversationModel(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

future<StatusOr<google::longrunning::Operation>>
DefaultConversationModelsStub::AsyncUndeployConversationModel(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions,
    google::cloud::dialogflow::v2::UndeployConversationModelRequest const&
        request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::dialogflow::v2::UndeployConversationModelRequest,
      google::longrunning::Operation>(
      cq,
      [this](
          grpc::ClientContext* context,
          google::cloud::dialogflow::v2::UndeployConversationModelRequest const&
              request,
          grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncUndeployConversationModel(context, request, cq);
      },
      request, std::move(context));
}

StatusOr<google::longrunning::Operation>
DefaultConversationModelsStub::UndeployConversationModel(
    grpc::ClientContext& context, Options,
    google::cloud::dialogflow::v2::UndeployConversationModelRequest const&
        request) {
  google::longrunning::Operation response;
  auto status =
      grpc_stub_->UndeployConversationModel(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::dialogflow::v2::ConversationModelEvaluation>
DefaultConversationModelsStub::GetConversationModelEvaluation(
    grpc::ClientContext& context, Options const&,
    google::cloud::dialogflow::v2::GetConversationModelEvaluationRequest const&
        request) {
  google::cloud::dialogflow::v2::ConversationModelEvaluation response;
  auto status =
      grpc_stub_->GetConversationModelEvaluation(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<
    google::cloud::dialogflow::v2::ListConversationModelEvaluationsResponse>
DefaultConversationModelsStub::ListConversationModelEvaluations(
    grpc::ClientContext& context, Options const&,
    google::cloud::dialogflow::v2::
        ListConversationModelEvaluationsRequest const& request) {
  google::cloud::dialogflow::v2::ListConversationModelEvaluationsResponse
      response;
  auto status = grpc_stub_->ListConversationModelEvaluations(&context, request,
                                                             &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

future<StatusOr<google::longrunning::Operation>>
DefaultConversationModelsStub::AsyncCreateConversationModelEvaluation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions,
    google::cloud::dialogflow::v2::
        CreateConversationModelEvaluationRequest const& request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::dialogflow::v2::CreateConversationModelEvaluationRequest,
      google::longrunning::Operation>(
      cq,
      [this](grpc::ClientContext* context,
             google::cloud::dialogflow::v2::
                 CreateConversationModelEvaluationRequest const& request,
             grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncCreateConversationModelEvaluation(context,
                                                                  request, cq);
      },
      request, std::move(context));
}

StatusOr<google::longrunning::Operation>
DefaultConversationModelsStub::CreateConversationModelEvaluation(
    grpc::ClientContext& context, Options,
    google::cloud::dialogflow::v2::
        CreateConversationModelEvaluationRequest const& request) {
  google::longrunning::Operation response;
  auto status = grpc_stub_->CreateConversationModelEvaluation(&context, request,
                                                              &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::location::ListLocationsResponse>
DefaultConversationModelsStub::ListLocations(
    grpc::ClientContext& context, Options const&,
    google::cloud::location::ListLocationsRequest const& request) {
  google::cloud::location::ListLocationsResponse response;
  auto status = locations_stub_->ListLocations(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::location::Location>
DefaultConversationModelsStub::GetLocation(
    grpc::ClientContext& context, Options const&,
    google::cloud::location::GetLocationRequest const& request) {
  google::cloud::location::Location response;
  auto status = locations_stub_->GetLocation(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::longrunning::ListOperationsResponse>
DefaultConversationModelsStub::ListOperations(
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
DefaultConversationModelsStub::GetOperation(
    grpc::ClientContext& context, Options const&,
    google::longrunning::GetOperationRequest const& request) {
  google::longrunning::Operation response;
  auto status = operations_stub_->GetOperation(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

Status DefaultConversationModelsStub::CancelOperation(
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
DefaultConversationModelsStub::AsyncGetOperation(
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

future<Status> DefaultConversationModelsStub::AsyncCancelOperation(
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
}  // namespace dialogflow_es_internal
}  // namespace cloud
}  // namespace google
