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
// source: google/cloud/assuredworkloads/v1/assuredworkloads.proto

#include "google/cloud/assuredworkloads/v1/internal/assured_workloads_logging_decorator.h"
#include "google/cloud/assuredworkloads/v1/assuredworkloads.grpc.pb.h"
#include "google/cloud/internal/log_wrapper.h"
#include "google/cloud/status_or.h"
#include <memory>
#include <set>
#include <string>
#include <utility>

namespace google {
namespace cloud {
namespace assuredworkloads_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

AssuredWorkloadsServiceLogging::AssuredWorkloadsServiceLogging(
    std::shared_ptr<AssuredWorkloadsServiceStub> child,
    TracingOptions tracing_options, std::set<std::string> const&)
    : child_(std::move(child)), tracing_options_(std::move(tracing_options)) {}

future<StatusOr<google::longrunning::Operation>>
AssuredWorkloadsServiceLogging::AsyncCreateWorkload(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::assuredworkloads::v1::CreateWorkloadRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             google::cloud::internal::ImmutableOptions options,
             google::cloud::assuredworkloads::v1::CreateWorkloadRequest const&
                 request) {
        return child_->AsyncCreateWorkload(cq, std::move(context),
                                           std::move(options), request);
      },
      cq, std::move(context), std::move(options), request, __func__,
      tracing_options_);
}

StatusOr<google::longrunning::Operation>
AssuredWorkloadsServiceLogging::CreateWorkload(
    grpc::ClientContext& context, Options options,
    google::cloud::assuredworkloads::v1::CreateWorkloadRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::assuredworkloads::v1::CreateWorkloadRequest const&
                 request) {
        return child_->CreateWorkload(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::assuredworkloads::v1::Workload>
AssuredWorkloadsServiceLogging::UpdateWorkload(
    grpc::ClientContext& context, Options const& options,
    google::cloud::assuredworkloads::v1::UpdateWorkloadRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::assuredworkloads::v1::UpdateWorkloadRequest const&
                 request) {
        return child_->UpdateWorkload(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::assuredworkloads::v1::RestrictAllowedResourcesResponse>
AssuredWorkloadsServiceLogging::RestrictAllowedResources(
    grpc::ClientContext& context, Options const& options,
    google::cloud::assuredworkloads::v1::RestrictAllowedResourcesRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::assuredworkloads::v1::
                 RestrictAllowedResourcesRequest const& request) {
        return child_->RestrictAllowedResources(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

Status AssuredWorkloadsServiceLogging::DeleteWorkload(
    grpc::ClientContext& context, Options const& options,
    google::cloud::assuredworkloads::v1::DeleteWorkloadRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::assuredworkloads::v1::DeleteWorkloadRequest const&
                 request) {
        return child_->DeleteWorkload(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::assuredworkloads::v1::Workload>
AssuredWorkloadsServiceLogging::GetWorkload(
    grpc::ClientContext& context, Options const& options,
    google::cloud::assuredworkloads::v1::GetWorkloadRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::assuredworkloads::v1::GetWorkloadRequest const&
                 request) {
        return child_->GetWorkload(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::assuredworkloads::v1::ListWorkloadsResponse>
AssuredWorkloadsServiceLogging::ListWorkloads(
    grpc::ClientContext& context, Options const& options,
    google::cloud::assuredworkloads::v1::ListWorkloadsRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::assuredworkloads::v1::ListWorkloadsRequest const&
                 request) {
        return child_->ListWorkloads(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::assuredworkloads::v1::ListViolationsResponse>
AssuredWorkloadsServiceLogging::ListViolations(
    grpc::ClientContext& context, Options const& options,
    google::cloud::assuredworkloads::v1::ListViolationsRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::assuredworkloads::v1::ListViolationsRequest const&
                 request) {
        return child_->ListViolations(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::assuredworkloads::v1::Violation>
AssuredWorkloadsServiceLogging::GetViolation(
    grpc::ClientContext& context, Options const& options,
    google::cloud::assuredworkloads::v1::GetViolationRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::assuredworkloads::v1::GetViolationRequest const&
                 request) {
        return child_->GetViolation(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::assuredworkloads::v1::AcknowledgeViolationResponse>
AssuredWorkloadsServiceLogging::AcknowledgeViolation(
    grpc::ClientContext& context, Options const& options,
    google::cloud::assuredworkloads::v1::AcknowledgeViolationRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::assuredworkloads::v1::
                 AcknowledgeViolationRequest const& request) {
        return child_->AcknowledgeViolation(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::longrunning::ListOperationsResponse>
AssuredWorkloadsServiceLogging::ListOperations(
    grpc::ClientContext& context, Options const& options,
    google::longrunning::ListOperationsRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::longrunning::ListOperationsRequest const& request) {
        return child_->ListOperations(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::longrunning::Operation>
AssuredWorkloadsServiceLogging::GetOperation(
    grpc::ClientContext& context, Options const& options,
    google::longrunning::GetOperationRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::longrunning::GetOperationRequest const& request) {
        return child_->GetOperation(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
AssuredWorkloadsServiceLogging::AsyncGetOperation(
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

future<Status> AssuredWorkloadsServiceLogging::AsyncCancelOperation(
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
}  // namespace assuredworkloads_v1_internal
}  // namespace cloud
}  // namespace google
