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
// source: google/cloud/dataproc/v1/jobs.proto

#include "google/cloud/dataproc/v1/internal/job_controller_metadata_decorator.h"
#include "google/cloud/grpc_options.h"
#include "google/cloud/internal/absl_str_cat_quiet.h"
#include "google/cloud/internal/api_client_header.h"
#include "google/cloud/internal/url_encode.h"
#include "google/cloud/status_or.h"
#include "google/cloud/dataproc/v1/jobs.grpc.pb.h"
#include <memory>
#include <string>
#include <utility>
#include <vector>

namespace google {
namespace cloud {
namespace dataproc_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

JobControllerMetadata::JobControllerMetadata(
    std::shared_ptr<JobControllerStub> child,
    std::multimap<std::string, std::string> fixed_metadata,
    std::string api_client_header)
    : child_(std::move(child)),
      fixed_metadata_(std::move(fixed_metadata)),
      api_client_header_(
          api_client_header.empty()
              ? google::cloud::internal::GeneratedLibClientHeader()
              : std::move(api_client_header)) {}

StatusOr<google::cloud::dataproc::v1::Job> JobControllerMetadata::SubmitJob(
    grpc::ClientContext& context, Options const& options,
    google::cloud::dataproc::v1::SubmitJobRequest const& request) {
  SetMetadata(
      context, options,
      absl::StrCat("project_id=", internal::UrlEncode(request.project_id()),
                   "&", "region=", internal::UrlEncode(request.region())));
  return child_->SubmitJob(context, options, request);
}

future<StatusOr<google::longrunning::Operation>>
JobControllerMetadata::AsyncSubmitJobAsOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::dataproc::v1::SubmitJobRequest const& request) {
  SetMetadata(
      *context, *options,
      absl::StrCat("project_id=", internal::UrlEncode(request.project_id()),
                   "&", "region=", internal::UrlEncode(request.region())));
  return child_->AsyncSubmitJobAsOperation(cq, std::move(context),
                                           std::move(options), request);
}

StatusOr<google::longrunning::Operation>
JobControllerMetadata::SubmitJobAsOperation(
    grpc::ClientContext& context, Options options,
    google::cloud::dataproc::v1::SubmitJobRequest const& request) {
  SetMetadata(
      context, options,
      absl::StrCat("project_id=", internal::UrlEncode(request.project_id()),
                   "&", "region=", internal::UrlEncode(request.region())));
  return child_->SubmitJobAsOperation(context, options, request);
}

StatusOr<google::cloud::dataproc::v1::Job> JobControllerMetadata::GetJob(
    grpc::ClientContext& context, Options const& options,
    google::cloud::dataproc::v1::GetJobRequest const& request) {
  SetMetadata(
      context, options,
      absl::StrCat("project_id=", internal::UrlEncode(request.project_id()),
                   "&", "region=", internal::UrlEncode(request.region()), "&",
                   "job_id=", internal::UrlEncode(request.job_id())));
  return child_->GetJob(context, options, request);
}

StatusOr<google::cloud::dataproc::v1::ListJobsResponse>
JobControllerMetadata::ListJobs(
    grpc::ClientContext& context, Options const& options,
    google::cloud::dataproc::v1::ListJobsRequest const& request) {
  SetMetadata(
      context, options,
      absl::StrCat("project_id=", internal::UrlEncode(request.project_id()),
                   "&", "region=", internal::UrlEncode(request.region())));
  return child_->ListJobs(context, options, request);
}

StatusOr<google::cloud::dataproc::v1::Job> JobControllerMetadata::UpdateJob(
    grpc::ClientContext& context, Options const& options,
    google::cloud::dataproc::v1::UpdateJobRequest const& request) {
  SetMetadata(
      context, options,
      absl::StrCat("project_id=", internal::UrlEncode(request.project_id()),
                   "&", "region=", internal::UrlEncode(request.region()), "&",
                   "job_id=", internal::UrlEncode(request.job_id())));
  return child_->UpdateJob(context, options, request);
}

StatusOr<google::cloud::dataproc::v1::Job> JobControllerMetadata::CancelJob(
    grpc::ClientContext& context, Options const& options,
    google::cloud::dataproc::v1::CancelJobRequest const& request) {
  SetMetadata(
      context, options,
      absl::StrCat("project_id=", internal::UrlEncode(request.project_id()),
                   "&", "region=", internal::UrlEncode(request.region()), "&",
                   "job_id=", internal::UrlEncode(request.job_id())));
  return child_->CancelJob(context, options, request);
}

Status JobControllerMetadata::DeleteJob(
    grpc::ClientContext& context, Options const& options,
    google::cloud::dataproc::v1::DeleteJobRequest const& request) {
  SetMetadata(
      context, options,
      absl::StrCat("project_id=", internal::UrlEncode(request.project_id()),
                   "&", "region=", internal::UrlEncode(request.region()), "&",
                   "job_id=", internal::UrlEncode(request.job_id())));
  return child_->DeleteJob(context, options, request);
}

StatusOr<google::iam::v1::Policy> JobControllerMetadata::SetIamPolicy(
    grpc::ClientContext& context, Options const& options,
    google::iam::v1::SetIamPolicyRequest const& request) {
  SetMetadata(
      context, options,
      absl::StrCat("resource=", internal::UrlEncode(request.resource())));
  return child_->SetIamPolicy(context, options, request);
}

StatusOr<google::iam::v1::Policy> JobControllerMetadata::GetIamPolicy(
    grpc::ClientContext& context, Options const& options,
    google::iam::v1::GetIamPolicyRequest const& request) {
  SetMetadata(
      context, options,
      absl::StrCat("resource=", internal::UrlEncode(request.resource())));
  return child_->GetIamPolicy(context, options, request);
}

StatusOr<google::iam::v1::TestIamPermissionsResponse>
JobControllerMetadata::TestIamPermissions(
    grpc::ClientContext& context, Options const& options,
    google::iam::v1::TestIamPermissionsRequest const& request) {
  SetMetadata(
      context, options,
      absl::StrCat("resource=", internal::UrlEncode(request.resource())));
  return child_->TestIamPermissions(context, options, request);
}

StatusOr<google::longrunning::ListOperationsResponse>
JobControllerMetadata::ListOperations(
    grpc::ClientContext& context, Options const& options,
    google::longrunning::ListOperationsRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->ListOperations(context, options, request);
}

StatusOr<google::longrunning::Operation> JobControllerMetadata::GetOperation(
    grpc::ClientContext& context, Options const& options,
    google::longrunning::GetOperationRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->GetOperation(context, options, request);
}

Status JobControllerMetadata::DeleteOperation(
    grpc::ClientContext& context, Options const& options,
    google::longrunning::DeleteOperationRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->DeleteOperation(context, options, request);
}

Status JobControllerMetadata::CancelOperation(
    grpc::ClientContext& context, Options const& options,
    google::longrunning::CancelOperationRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->CancelOperation(context, options, request);
}

future<StatusOr<google::longrunning::Operation>>
JobControllerMetadata::AsyncGetOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::longrunning::GetOperationRequest const& request) {
  SetMetadata(*context, *options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->AsyncGetOperation(cq, std::move(context), std::move(options),
                                   request);
}

future<Status> JobControllerMetadata::AsyncCancelOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::longrunning::CancelOperationRequest const& request) {
  SetMetadata(*context, *options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->AsyncCancelOperation(cq, std::move(context),
                                      std::move(options), request);
}

void JobControllerMetadata::SetMetadata(grpc::ClientContext& context,
                                        Options const& options,
                                        std::string const& request_params) {
  context.AddMetadata("x-goog-request-params", request_params);
  SetMetadata(context, options);
}

void JobControllerMetadata::SetMetadata(grpc::ClientContext& context,
                                        Options const& options) {
  google::cloud::internal::SetMetadata(context, options, fixed_metadata_,
                                       api_client_header_);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace dataproc_v1_internal
}  // namespace cloud
}  // namespace google
