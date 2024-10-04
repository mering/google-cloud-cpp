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
// source: google/cloud/talent/v4/job_service.proto

#include "google/cloud/talent/v4/job_connection.h"
#include "google/cloud/talent/v4/internal/job_connection_impl.h"
#include "google/cloud/talent/v4/internal/job_option_defaults.h"
#include "google/cloud/talent/v4/internal/job_stub_factory.h"
#include "google/cloud/talent/v4/internal/job_tracing_connection.h"
#include "google/cloud/talent/v4/job_options.h"
#include "google/cloud/background_threads.h"
#include "google/cloud/common_options.h"
#include "google/cloud/credentials.h"
#include "google/cloud/grpc_options.h"
#include "google/cloud/internal/pagination_range.h"
#include "google/cloud/internal/unified_grpc_credentials.h"
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace talent_v4 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

JobServiceConnection::~JobServiceConnection() = default;

StatusOr<google::cloud::talent::v4::Job> JobServiceConnection::CreateJob(
    google::cloud::talent::v4::CreateJobRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

future<StatusOr<google::cloud::talent::v4::BatchCreateJobsResponse>>
JobServiceConnection::BatchCreateJobs(
    google::cloud::talent::v4::BatchCreateJobsRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::talent::v4::BatchCreateJobsResponse>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

StatusOr<google::longrunning::Operation> JobServiceConnection::BatchCreateJobs(
    NoAwaitTag, google::cloud::talent::v4::BatchCreateJobsRequest const&) {
  return StatusOr<google::longrunning::Operation>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::talent::v4::BatchCreateJobsResponse>>
JobServiceConnection::BatchCreateJobs(google::longrunning::Operation const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::talent::v4::BatchCreateJobsResponse>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

StatusOr<google::cloud::talent::v4::Job> JobServiceConnection::GetJob(
    google::cloud::talent::v4::GetJobRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::cloud::talent::v4::Job> JobServiceConnection::UpdateJob(
    google::cloud::talent::v4::UpdateJobRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

future<StatusOr<google::cloud::talent::v4::BatchUpdateJobsResponse>>
JobServiceConnection::BatchUpdateJobs(
    google::cloud::talent::v4::BatchUpdateJobsRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::talent::v4::BatchUpdateJobsResponse>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

StatusOr<google::longrunning::Operation> JobServiceConnection::BatchUpdateJobs(
    NoAwaitTag, google::cloud::talent::v4::BatchUpdateJobsRequest const&) {
  return StatusOr<google::longrunning::Operation>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::talent::v4::BatchUpdateJobsResponse>>
JobServiceConnection::BatchUpdateJobs(google::longrunning::Operation const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::talent::v4::BatchUpdateJobsResponse>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

Status JobServiceConnection::DeleteJob(
    google::cloud::talent::v4::DeleteJobRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

future<StatusOr<google::cloud::talent::v4::BatchDeleteJobsResponse>>
JobServiceConnection::BatchDeleteJobs(
    google::cloud::talent::v4::BatchDeleteJobsRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::talent::v4::BatchDeleteJobsResponse>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

StatusOr<google::longrunning::Operation> JobServiceConnection::BatchDeleteJobs(
    NoAwaitTag, google::cloud::talent::v4::BatchDeleteJobsRequest const&) {
  return StatusOr<google::longrunning::Operation>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::talent::v4::BatchDeleteJobsResponse>>
JobServiceConnection::BatchDeleteJobs(google::longrunning::Operation const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::talent::v4::BatchDeleteJobsResponse>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

StreamRange<google::cloud::talent::v4::Job> JobServiceConnection::ListJobs(
    google::cloud::talent::v4::
        ListJobsRequest) {  // NOLINT(performance-unnecessary-value-param)
  return google::cloud::internal::MakeUnimplementedPaginationRange<
      StreamRange<google::cloud::talent::v4::Job>>();
}

StatusOr<google::cloud::talent::v4::SearchJobsResponse>
JobServiceConnection::SearchJobs(
    google::cloud::talent::v4::SearchJobsRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::cloud::talent::v4::SearchJobsResponse>
JobServiceConnection::SearchJobsForAlert(
    google::cloud::talent::v4::SearchJobsRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::longrunning::Operation> JobServiceConnection::GetOperation(
    google::longrunning::GetOperationRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

std::shared_ptr<JobServiceConnection> MakeJobServiceConnection(
    Options options) {
  internal::CheckExpectedOptions<CommonOptionList, GrpcOptionList,
                                 UnifiedCredentialsOptionList,
                                 JobServicePolicyOptionList>(options, __func__);
  options = talent_v4_internal::JobServiceDefaultOptions(std::move(options));
  auto background = internal::MakeBackgroundThreadsFactory(options)();
  auto auth = internal::CreateAuthenticationStrategy(background->cq(), options);
  auto stub =
      talent_v4_internal::CreateDefaultJobServiceStub(std::move(auth), options);
  return talent_v4_internal::MakeJobServiceTracingConnection(
      std::make_shared<talent_v4_internal::JobServiceConnectionImpl>(
          std::move(background), std::move(stub), std::move(options)));
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace talent_v4
}  // namespace cloud
}  // namespace google
