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
// source: google/cloud/dialogflow/v2/agent.proto

#include "google/cloud/dialogflow_es/internal/agents_logging_decorator.h"
#include "google/cloud/internal/log_wrapper.h"
#include "google/cloud/status_or.h"
#include "google/cloud/dialogflow/v2/agent.grpc.pb.h"
#include <memory>
#include <set>
#include <string>
#include <utility>

namespace google {
namespace cloud {
namespace dialogflow_es_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

AgentsLogging::AgentsLogging(std::shared_ptr<AgentsStub> child,
                             TracingOptions tracing_options,
                             std::set<std::string> const&)
    : child_(std::move(child)), tracing_options_(std::move(tracing_options)) {}

StatusOr<google::cloud::dialogflow::v2::Agent> AgentsLogging::GetAgent(
    grpc::ClientContext& context, Options const& options,
    google::cloud::dialogflow::v2::GetAgentRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::dialogflow::v2::GetAgentRequest const& request) {
        return child_->GetAgent(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::dialogflow::v2::Agent> AgentsLogging::SetAgent(
    grpc::ClientContext& context, Options const& options,
    google::cloud::dialogflow::v2::SetAgentRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::dialogflow::v2::SetAgentRequest const& request) {
        return child_->SetAgent(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

Status AgentsLogging::DeleteAgent(
    grpc::ClientContext& context, Options const& options,
    google::cloud::dialogflow::v2::DeleteAgentRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::dialogflow::v2::DeleteAgentRequest const& request) {
        return child_->DeleteAgent(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::dialogflow::v2::SearchAgentsResponse>
AgentsLogging::SearchAgents(
    grpc::ClientContext& context, Options const& options,
    google::cloud::dialogflow::v2::SearchAgentsRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](
          grpc::ClientContext& context, Options const& options,
          google::cloud::dialogflow::v2::SearchAgentsRequest const& request) {
        return child_->SearchAgents(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>> AgentsLogging::AsyncTrainAgent(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::dialogflow::v2::TrainAgentRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             google::cloud::internal::ImmutableOptions options,
             google::cloud::dialogflow::v2::TrainAgentRequest const& request) {
        return child_->AsyncTrainAgent(cq, std::move(context),
                                       std::move(options), request);
      },
      cq, std::move(context), std::move(options), request, __func__,
      tracing_options_);
}

StatusOr<google::longrunning::Operation> AgentsLogging::TrainAgent(
    grpc::ClientContext& context, Options options,
    google::cloud::dialogflow::v2::TrainAgentRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::dialogflow::v2::TrainAgentRequest const& request) {
        return child_->TrainAgent(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
AgentsLogging::AsyncExportAgent(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::dialogflow::v2::ExportAgentRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             google::cloud::internal::ImmutableOptions options,
             google::cloud::dialogflow::v2::ExportAgentRequest const& request) {
        return child_->AsyncExportAgent(cq, std::move(context),
                                        std::move(options), request);
      },
      cq, std::move(context), std::move(options), request, __func__,
      tracing_options_);
}

StatusOr<google::longrunning::Operation> AgentsLogging::ExportAgent(
    grpc::ClientContext& context, Options options,
    google::cloud::dialogflow::v2::ExportAgentRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::dialogflow::v2::ExportAgentRequest const& request) {
        return child_->ExportAgent(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
AgentsLogging::AsyncImportAgent(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::dialogflow::v2::ImportAgentRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             google::cloud::internal::ImmutableOptions options,
             google::cloud::dialogflow::v2::ImportAgentRequest const& request) {
        return child_->AsyncImportAgent(cq, std::move(context),
                                        std::move(options), request);
      },
      cq, std::move(context), std::move(options), request, __func__,
      tracing_options_);
}

StatusOr<google::longrunning::Operation> AgentsLogging::ImportAgent(
    grpc::ClientContext& context, Options options,
    google::cloud::dialogflow::v2::ImportAgentRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::dialogflow::v2::ImportAgentRequest const& request) {
        return child_->ImportAgent(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
AgentsLogging::AsyncRestoreAgent(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::dialogflow::v2::RestoreAgentRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](
          google::cloud::CompletionQueue& cq,
          std::shared_ptr<grpc::ClientContext> context,
          google::cloud::internal::ImmutableOptions options,
          google::cloud::dialogflow::v2::RestoreAgentRequest const& request) {
        return child_->AsyncRestoreAgent(cq, std::move(context),
                                         std::move(options), request);
      },
      cq, std::move(context), std::move(options), request, __func__,
      tracing_options_);
}

StatusOr<google::longrunning::Operation> AgentsLogging::RestoreAgent(
    grpc::ClientContext& context, Options options,
    google::cloud::dialogflow::v2::RestoreAgentRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](
          grpc::ClientContext& context, Options const& options,
          google::cloud::dialogflow::v2::RestoreAgentRequest const& request) {
        return child_->RestoreAgent(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::dialogflow::v2::ValidationResult>
AgentsLogging::GetValidationResult(
    grpc::ClientContext& context, Options const& options,
    google::cloud::dialogflow::v2::GetValidationResultRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::dialogflow::v2::GetValidationResultRequest const&
                 request) {
        return child_->GetValidationResult(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::location::ListLocationsResponse>
AgentsLogging::ListLocations(
    grpc::ClientContext& context, Options const& options,
    google::cloud::location::ListLocationsRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::location::ListLocationsRequest const& request) {
        return child_->ListLocations(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::location::Location> AgentsLogging::GetLocation(
    grpc::ClientContext& context, Options const& options,
    google::cloud::location::GetLocationRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::location::GetLocationRequest const& request) {
        return child_->GetLocation(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::longrunning::ListOperationsResponse>
AgentsLogging::ListOperations(
    grpc::ClientContext& context, Options const& options,
    google::longrunning::ListOperationsRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::longrunning::ListOperationsRequest const& request) {
        return child_->ListOperations(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::longrunning::Operation> AgentsLogging::GetOperation(
    grpc::ClientContext& context, Options const& options,
    google::longrunning::GetOperationRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::longrunning::GetOperationRequest const& request) {
        return child_->GetOperation(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

Status AgentsLogging::CancelOperation(
    grpc::ClientContext& context, Options const& options,
    google::longrunning::CancelOperationRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::longrunning::CancelOperationRequest const& request) {
        return child_->CancelOperation(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
AgentsLogging::AsyncGetOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::longrunning::GetOperationRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             google::cloud::internal::ImmutableOptions options,
             google::longrunning::GetOperationRequest const& request) {
        return child_->AsyncGetOperation(cq, std::move(context),
                                         std::move(options), request);
      },
      cq, std::move(context), std::move(options), request, __func__,
      tracing_options_);
}

future<Status> AgentsLogging::AsyncCancelOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::longrunning::CancelOperationRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             google::cloud::internal::ImmutableOptions options,
             google::longrunning::CancelOperationRequest const& request) {
        return child_->AsyncCancelOperation(cq, std::move(context),
                                            std::move(options), request);
      },
      cq, std::move(context), std::move(options), request, __func__,
      tracing_options_);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace dialogflow_es_internal
}  // namespace cloud
}  // namespace google
