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

#include "google/cloud/talent/v4/job_client.h"
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace talent_v4 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

JobServiceClient::JobServiceClient(
    std::shared_ptr<JobServiceConnection> connection, Options opts)
    : connection_(std::move(connection)),
      options_(
          internal::MergeOptions(std::move(opts), connection_->options())) {}
JobServiceClient::~JobServiceClient() = default;

StatusOr<google::cloud::talent::v4::Job> JobServiceClient::CreateJob(
    std::string const& parent, google::cloud::talent::v4::Job const& job,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::talent::v4::CreateJobRequest request;
  request.set_parent(parent);
  *request.mutable_job() = job;
  return connection_->CreateJob(request);
}

StatusOr<google::cloud::talent::v4::Job> JobServiceClient::CreateJob(
    google::cloud::talent::v4::CreateJobRequest const& request, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->CreateJob(request);
}

future<StatusOr<google::cloud::talent::v4::BatchCreateJobsResponse>>
JobServiceClient::BatchCreateJobs(
    std::string const& parent,
    std::vector<google::cloud::talent::v4::Job> const& jobs, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::talent::v4::BatchCreateJobsRequest request;
  request.set_parent(parent);
  *request.mutable_jobs() = {jobs.begin(), jobs.end()};
  return connection_->BatchCreateJobs(request);
}

StatusOr<google::longrunning::Operation> JobServiceClient::BatchCreateJobs(
    ExperimentalTag, NoAwaitTag, std::string const& parent,
    std::vector<google::cloud::talent::v4::Job> const& jobs, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::talent::v4::BatchCreateJobsRequest request;
  request.set_parent(parent);
  *request.mutable_jobs() = {jobs.begin(), jobs.end()};
  return connection_->BatchCreateJobs(ExperimentalTag{}, NoAwaitTag{}, request);
}

future<StatusOr<google::cloud::talent::v4::BatchCreateJobsResponse>>
JobServiceClient::BatchCreateJobs(
    google::cloud::talent::v4::BatchCreateJobsRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->BatchCreateJobs(request);
}

StatusOr<google::longrunning::Operation> JobServiceClient::BatchCreateJobs(
    ExperimentalTag, NoAwaitTag,
    google::cloud::talent::v4::BatchCreateJobsRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->BatchCreateJobs(ExperimentalTag{}, NoAwaitTag{}, request);
}

future<StatusOr<google::cloud::talent::v4::BatchCreateJobsResponse>>
JobServiceClient::BatchCreateJobs(
    ExperimentalTag, google::longrunning::Operation const& operation,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->BatchCreateJobs(ExperimentalTag{}, operation);
}

StatusOr<google::cloud::talent::v4::Job> JobServiceClient::GetJob(
    std::string const& name, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::talent::v4::GetJobRequest request;
  request.set_name(name);
  return connection_->GetJob(request);
}

StatusOr<google::cloud::talent::v4::Job> JobServiceClient::GetJob(
    google::cloud::talent::v4::GetJobRequest const& request, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->GetJob(request);
}

StatusOr<google::cloud::talent::v4::Job> JobServiceClient::UpdateJob(
    google::cloud::talent::v4::Job const& job,
    google::protobuf::FieldMask const& update_mask, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::talent::v4::UpdateJobRequest request;
  *request.mutable_job() = job;
  *request.mutable_update_mask() = update_mask;
  return connection_->UpdateJob(request);
}

StatusOr<google::cloud::talent::v4::Job> JobServiceClient::UpdateJob(
    google::cloud::talent::v4::UpdateJobRequest const& request, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->UpdateJob(request);
}

future<StatusOr<google::cloud::talent::v4::BatchUpdateJobsResponse>>
JobServiceClient::BatchUpdateJobs(
    std::string const& parent,
    std::vector<google::cloud::talent::v4::Job> const& jobs, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::talent::v4::BatchUpdateJobsRequest request;
  request.set_parent(parent);
  *request.mutable_jobs() = {jobs.begin(), jobs.end()};
  return connection_->BatchUpdateJobs(request);
}

StatusOr<google::longrunning::Operation> JobServiceClient::BatchUpdateJobs(
    ExperimentalTag, NoAwaitTag, std::string const& parent,
    std::vector<google::cloud::talent::v4::Job> const& jobs, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::talent::v4::BatchUpdateJobsRequest request;
  request.set_parent(parent);
  *request.mutable_jobs() = {jobs.begin(), jobs.end()};
  return connection_->BatchUpdateJobs(ExperimentalTag{}, NoAwaitTag{}, request);
}

future<StatusOr<google::cloud::talent::v4::BatchUpdateJobsResponse>>
JobServiceClient::BatchUpdateJobs(
    google::cloud::talent::v4::BatchUpdateJobsRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->BatchUpdateJobs(request);
}

StatusOr<google::longrunning::Operation> JobServiceClient::BatchUpdateJobs(
    ExperimentalTag, NoAwaitTag,
    google::cloud::talent::v4::BatchUpdateJobsRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->BatchUpdateJobs(ExperimentalTag{}, NoAwaitTag{}, request);
}

future<StatusOr<google::cloud::talent::v4::BatchUpdateJobsResponse>>
JobServiceClient::BatchUpdateJobs(
    ExperimentalTag, google::longrunning::Operation const& operation,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->BatchUpdateJobs(ExperimentalTag{}, operation);
}

Status JobServiceClient::DeleteJob(std::string const& name, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::talent::v4::DeleteJobRequest request;
  request.set_name(name);
  return connection_->DeleteJob(request);
}

Status JobServiceClient::DeleteJob(
    google::cloud::talent::v4::DeleteJobRequest const& request, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->DeleteJob(request);
}

future<StatusOr<google::cloud::talent::v4::BatchDeleteJobsResponse>>
JobServiceClient::BatchDeleteJobs(std::string const& parent,
                                  std::vector<std::string> const& names,
                                  Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::talent::v4::BatchDeleteJobsRequest request;
  request.set_parent(parent);
  *request.mutable_names() = {names.begin(), names.end()};
  return connection_->BatchDeleteJobs(request);
}

StatusOr<google::longrunning::Operation> JobServiceClient::BatchDeleteJobs(
    ExperimentalTag, NoAwaitTag, std::string const& parent,
    std::vector<std::string> const& names, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::talent::v4::BatchDeleteJobsRequest request;
  request.set_parent(parent);
  *request.mutable_names() = {names.begin(), names.end()};
  return connection_->BatchDeleteJobs(ExperimentalTag{}, NoAwaitTag{}, request);
}

future<StatusOr<google::cloud::talent::v4::BatchDeleteJobsResponse>>
JobServiceClient::BatchDeleteJobs(
    google::cloud::talent::v4::BatchDeleteJobsRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->BatchDeleteJobs(request);
}

StatusOr<google::longrunning::Operation> JobServiceClient::BatchDeleteJobs(
    ExperimentalTag, NoAwaitTag,
    google::cloud::talent::v4::BatchDeleteJobsRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->BatchDeleteJobs(ExperimentalTag{}, NoAwaitTag{}, request);
}

future<StatusOr<google::cloud::talent::v4::BatchDeleteJobsResponse>>
JobServiceClient::BatchDeleteJobs(
    ExperimentalTag, google::longrunning::Operation const& operation,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->BatchDeleteJobs(ExperimentalTag{}, operation);
}

StreamRange<google::cloud::talent::v4::Job> JobServiceClient::ListJobs(
    std::string const& parent, std::string const& filter, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::talent::v4::ListJobsRequest request;
  request.set_parent(parent);
  request.set_filter(filter);
  return connection_->ListJobs(request);
}

StreamRange<google::cloud::talent::v4::Job> JobServiceClient::ListJobs(
    google::cloud::talent::v4::ListJobsRequest request, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->ListJobs(std::move(request));
}

StatusOr<google::cloud::talent::v4::SearchJobsResponse>
JobServiceClient::SearchJobs(
    google::cloud::talent::v4::SearchJobsRequest const& request, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->SearchJobs(request);
}

StatusOr<google::cloud::talent::v4::SearchJobsResponse>
JobServiceClient::SearchJobsForAlert(
    google::cloud::talent::v4::SearchJobsRequest const& request, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->SearchJobsForAlert(request);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace talent_v4
}  // namespace cloud
}  // namespace google
