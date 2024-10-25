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
// source: google/cloud/channel/v1/reports_service.proto

#include "google/cloud/channel/v1/internal/cloud_channel_reports_auth_decorator.h"
#include "google/cloud/channel/v1/reports_service.grpc.pb.h"
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace channel_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

CloudChannelReportsServiceAuth::CloudChannelReportsServiceAuth(
    std::shared_ptr<google::cloud::internal::GrpcAuthenticationStrategy> auth,
    std::shared_ptr<CloudChannelReportsServiceStub> child)
    : auth_(std::move(auth)), child_(std::move(child)) {}

future<StatusOr<google::longrunning::Operation>>
CloudChannelReportsServiceAuth::AsyncRunReportJob(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::channel::v1::RunReportJobRequest const& request) {
  using ReturnType = StatusOr<google::longrunning::Operation>;
  return auth_->AsyncConfigureContext(std::move(context))
      .then([cq, child = child_, options = std::move(options),
             request](future<StatusOr<std::shared_ptr<grpc::ClientContext>>>
                          f) mutable {
        auto context = f.get();
        if (!context) {
          return make_ready_future(ReturnType(std::move(context).status()));
        }
        return child->AsyncRunReportJob(cq, *std::move(context),
                                        std::move(options), request);
      });
}

StatusOr<google::longrunning::Operation>
CloudChannelReportsServiceAuth::RunReportJob(
    grpc::ClientContext& context, Options options,
    google::cloud::channel::v1::RunReportJobRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->RunReportJob(context, options, request);
}

StatusOr<google::cloud::channel::v1::FetchReportResultsResponse>
CloudChannelReportsServiceAuth::FetchReportResults(
    grpc::ClientContext& context, Options const& options,
    google::cloud::channel::v1::FetchReportResultsRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->FetchReportResults(context, options, request);
}

StatusOr<google::cloud::channel::v1::ListReportsResponse>
CloudChannelReportsServiceAuth::ListReports(
    grpc::ClientContext& context, Options const& options,
    google::cloud::channel::v1::ListReportsRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->ListReports(context, options, request);
}

StatusOr<google::longrunning::ListOperationsResponse>
CloudChannelReportsServiceAuth::ListOperations(
    grpc::ClientContext& context, Options const& options,
    google::longrunning::ListOperationsRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->ListOperations(context, options, request);
}

StatusOr<google::longrunning::Operation>
CloudChannelReportsServiceAuth::GetOperation(
    grpc::ClientContext& context, Options const& options,
    google::longrunning::GetOperationRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->GetOperation(context, options, request);
}

Status CloudChannelReportsServiceAuth::DeleteOperation(
    grpc::ClientContext& context, Options const& options,
    google::longrunning::DeleteOperationRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->DeleteOperation(context, options, request);
}

Status CloudChannelReportsServiceAuth::CancelOperation(
    grpc::ClientContext& context, Options const& options,
    google::longrunning::CancelOperationRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->CancelOperation(context, options, request);
}

future<StatusOr<google::longrunning::Operation>>
CloudChannelReportsServiceAuth::AsyncGetOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::longrunning::GetOperationRequest const& request) {
  using ReturnType = StatusOr<google::longrunning::Operation>;
  return auth_->AsyncConfigureContext(std::move(context))
      .then([cq, child = child_, options = std::move(options),
             request](future<StatusOr<std::shared_ptr<grpc::ClientContext>>>
                          f) mutable {
        auto context = f.get();
        if (!context) {
          return make_ready_future(ReturnType(std::move(context).status()));
        }
        return child->AsyncGetOperation(cq, *std::move(context),
                                        std::move(options), request);
      });
}

future<Status> CloudChannelReportsServiceAuth::AsyncCancelOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::longrunning::CancelOperationRequest const& request) {
  return auth_->AsyncConfigureContext(std::move(context))
      .then([cq, child = child_, options = std::move(options),
             request](future<StatusOr<std::shared_ptr<grpc::ClientContext>>>
                          f) mutable {
        auto context = f.get();
        if (!context) return make_ready_future(std::move(context).status());
        return child->AsyncCancelOperation(cq, *std::move(context),
                                           std::move(options), request);
      });
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace channel_v1_internal
}  // namespace cloud
}  // namespace google
