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
// source: google/cloud/scheduler/v1/cloudscheduler.proto

#include "google/cloud/scheduler/v1/internal/cloud_scheduler_auth_decorator.h"
#include <google/cloud/scheduler/v1/cloudscheduler.grpc.pb.h>
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace scheduler_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

CloudSchedulerAuth::CloudSchedulerAuth(
    std::shared_ptr<google::cloud::internal::GrpcAuthenticationStrategy> auth,
    std::shared_ptr<CloudSchedulerStub> child)
    : auth_(std::move(auth)), child_(std::move(child)) {}

StatusOr<google::cloud::scheduler::v1::ListJobsResponse>
CloudSchedulerAuth::ListJobs(
    grpc::ClientContext& context, Options const& options,
    google::cloud::scheduler::v1::ListJobsRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->ListJobs(context, options, request);
}

StatusOr<google::cloud::scheduler::v1::Job> CloudSchedulerAuth::GetJob(
    grpc::ClientContext& context, Options const& options,
    google::cloud::scheduler::v1::GetJobRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->GetJob(context, options, request);
}

StatusOr<google::cloud::scheduler::v1::Job> CloudSchedulerAuth::CreateJob(
    grpc::ClientContext& context, Options const& options,
    google::cloud::scheduler::v1::CreateJobRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->CreateJob(context, options, request);
}

StatusOr<google::cloud::scheduler::v1::Job> CloudSchedulerAuth::UpdateJob(
    grpc::ClientContext& context, Options const& options,
    google::cloud::scheduler::v1::UpdateJobRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->UpdateJob(context, options, request);
}

Status CloudSchedulerAuth::DeleteJob(
    grpc::ClientContext& context, Options const& options,
    google::cloud::scheduler::v1::DeleteJobRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->DeleteJob(context, options, request);
}

StatusOr<google::cloud::scheduler::v1::Job> CloudSchedulerAuth::PauseJob(
    grpc::ClientContext& context, Options const& options,
    google::cloud::scheduler::v1::PauseJobRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->PauseJob(context, options, request);
}

StatusOr<google::cloud::scheduler::v1::Job> CloudSchedulerAuth::ResumeJob(
    grpc::ClientContext& context, Options const& options,
    google::cloud::scheduler::v1::ResumeJobRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->ResumeJob(context, options, request);
}

StatusOr<google::cloud::scheduler::v1::Job> CloudSchedulerAuth::RunJob(
    grpc::ClientContext& context, Options const& options,
    google::cloud::scheduler::v1::RunJobRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->RunJob(context, options, request);
}

StatusOr<google::cloud::location::ListLocationsResponse>
CloudSchedulerAuth::ListLocations(
    grpc::ClientContext& context, Options const& options,
    google::cloud::location::ListLocationsRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->ListLocations(context, options, request);
}

StatusOr<google::cloud::location::Location> CloudSchedulerAuth::GetLocation(
    grpc::ClientContext& context, Options const& options,
    google::cloud::location::GetLocationRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->GetLocation(context, options, request);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace scheduler_v1_internal
}  // namespace cloud
}  // namespace google
