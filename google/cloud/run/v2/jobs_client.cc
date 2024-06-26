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
// source: google/cloud/run/v2/job.proto

#include "google/cloud/run/v2/jobs_client.h"
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace run_v2 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

JobsClient::JobsClient(std::shared_ptr<JobsConnection> connection, Options opts)
    : connection_(std::move(connection)),
      options_(
          internal::MergeOptions(std::move(opts), connection_->options())) {}
JobsClient::~JobsClient() = default;

future<StatusOr<google::cloud::run::v2::Job>> JobsClient::CreateJob(
    std::string const& parent, google::cloud::run::v2::Job const& job,
    std::string const& job_id, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::run::v2::CreateJobRequest request;
  request.set_parent(parent);
  *request.mutable_job() = job;
  request.set_job_id(job_id);
  return connection_->CreateJob(request);
}

StatusOr<google::longrunning::Operation> JobsClient::CreateJob(
    ExperimentalTag, NoAwaitTag, std::string const& parent,
    google::cloud::run::v2::Job const& job, std::string const& job_id,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::run::v2::CreateJobRequest request;
  request.set_parent(parent);
  *request.mutable_job() = job;
  request.set_job_id(job_id);
  return connection_->CreateJob(ExperimentalTag{}, NoAwaitTag{}, request);
}

future<StatusOr<google::cloud::run::v2::Job>> JobsClient::CreateJob(
    google::cloud::run::v2::CreateJobRequest const& request, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->CreateJob(request);
}

StatusOr<google::longrunning::Operation> JobsClient::CreateJob(
    ExperimentalTag, NoAwaitTag,
    google::cloud::run::v2::CreateJobRequest const& request, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->CreateJob(ExperimentalTag{}, NoAwaitTag{}, request);
}

future<StatusOr<google::cloud::run::v2::Job>> JobsClient::CreateJob(
    ExperimentalTag, google::longrunning::Operation const& operation,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->CreateJob(ExperimentalTag{}, operation);
}

StatusOr<google::cloud::run::v2::Job> JobsClient::GetJob(
    std::string const& name, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::run::v2::GetJobRequest request;
  request.set_name(name);
  return connection_->GetJob(request);
}

StatusOr<google::cloud::run::v2::Job> JobsClient::GetJob(
    google::cloud::run::v2::GetJobRequest const& request, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->GetJob(request);
}

StreamRange<google::cloud::run::v2::Job> JobsClient::ListJobs(
    std::string const& parent, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::run::v2::ListJobsRequest request;
  request.set_parent(parent);
  return connection_->ListJobs(request);
}

StreamRange<google::cloud::run::v2::Job> JobsClient::ListJobs(
    google::cloud::run::v2::ListJobsRequest request, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->ListJobs(std::move(request));
}

future<StatusOr<google::cloud::run::v2::Job>> JobsClient::UpdateJob(
    google::cloud::run::v2::Job const& job, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::run::v2::UpdateJobRequest request;
  *request.mutable_job() = job;
  return connection_->UpdateJob(request);
}

StatusOr<google::longrunning::Operation> JobsClient::UpdateJob(
    ExperimentalTag, NoAwaitTag, google::cloud::run::v2::Job const& job,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::run::v2::UpdateJobRequest request;
  *request.mutable_job() = job;
  return connection_->UpdateJob(ExperimentalTag{}, NoAwaitTag{}, request);
}

future<StatusOr<google::cloud::run::v2::Job>> JobsClient::UpdateJob(
    google::cloud::run::v2::UpdateJobRequest const& request, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->UpdateJob(request);
}

StatusOr<google::longrunning::Operation> JobsClient::UpdateJob(
    ExperimentalTag, NoAwaitTag,
    google::cloud::run::v2::UpdateJobRequest const& request, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->UpdateJob(ExperimentalTag{}, NoAwaitTag{}, request);
}

future<StatusOr<google::cloud::run::v2::Job>> JobsClient::UpdateJob(
    ExperimentalTag, google::longrunning::Operation const& operation,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->UpdateJob(ExperimentalTag{}, operation);
}

future<StatusOr<google::cloud::run::v2::Job>> JobsClient::DeleteJob(
    std::string const& name, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::run::v2::DeleteJobRequest request;
  request.set_name(name);
  return connection_->DeleteJob(request);
}

StatusOr<google::longrunning::Operation> JobsClient::DeleteJob(
    ExperimentalTag, NoAwaitTag, std::string const& name, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::run::v2::DeleteJobRequest request;
  request.set_name(name);
  return connection_->DeleteJob(ExperimentalTag{}, NoAwaitTag{}, request);
}

future<StatusOr<google::cloud::run::v2::Job>> JobsClient::DeleteJob(
    google::cloud::run::v2::DeleteJobRequest const& request, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->DeleteJob(request);
}

StatusOr<google::longrunning::Operation> JobsClient::DeleteJob(
    ExperimentalTag, NoAwaitTag,
    google::cloud::run::v2::DeleteJobRequest const& request, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->DeleteJob(ExperimentalTag{}, NoAwaitTag{}, request);
}

future<StatusOr<google::cloud::run::v2::Job>> JobsClient::DeleteJob(
    ExperimentalTag, google::longrunning::Operation const& operation,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->DeleteJob(ExperimentalTag{}, operation);
}

future<StatusOr<google::cloud::run::v2::Execution>> JobsClient::RunJob(
    std::string const& name, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::run::v2::RunJobRequest request;
  request.set_name(name);
  return connection_->RunJob(request);
}

StatusOr<google::longrunning::Operation> JobsClient::RunJob(
    ExperimentalTag, NoAwaitTag, std::string const& name, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::run::v2::RunJobRequest request;
  request.set_name(name);
  return connection_->RunJob(ExperimentalTag{}, NoAwaitTag{}, request);
}

future<StatusOr<google::cloud::run::v2::Execution>> JobsClient::RunJob(
    google::cloud::run::v2::RunJobRequest const& request, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->RunJob(request);
}

StatusOr<google::longrunning::Operation> JobsClient::RunJob(
    ExperimentalTag, NoAwaitTag,
    google::cloud::run::v2::RunJobRequest const& request, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->RunJob(ExperimentalTag{}, NoAwaitTag{}, request);
}

future<StatusOr<google::cloud::run::v2::Execution>> JobsClient::RunJob(
    ExperimentalTag, google::longrunning::Operation const& operation,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->RunJob(ExperimentalTag{}, operation);
}

StatusOr<google::iam::v1::Policy> JobsClient::GetIamPolicy(
    google::iam::v1::GetIamPolicyRequest const& request, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->GetIamPolicy(request);
}

StatusOr<google::iam::v1::Policy> JobsClient::SetIamPolicy(
    google::iam::v1::SetIamPolicyRequest const& request, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->SetIamPolicy(request);
}

StatusOr<google::iam::v1::TestIamPermissionsResponse>
JobsClient::TestIamPermissions(
    google::iam::v1::TestIamPermissionsRequest const& request, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->TestIamPermissions(request);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace run_v2
}  // namespace cloud
}  // namespace google
