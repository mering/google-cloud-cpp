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

#include "google/cloud/scheduler/v1/internal/cloud_scheduler_stub.h"
#include "google/cloud/scheduler/v1/cloudscheduler.grpc.pb.h"
#include "google/cloud/grpc_error_delegate.h"
#include "google/cloud/status_or.h"
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace scheduler_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

CloudSchedulerStub::~CloudSchedulerStub() = default;

StatusOr<google::cloud::scheduler::v1::ListJobsResponse>
DefaultCloudSchedulerStub::ListJobs(
    grpc::ClientContext& context, Options const&,
    google::cloud::scheduler::v1::ListJobsRequest const& request) {
  google::cloud::scheduler::v1::ListJobsResponse response;
  auto status = grpc_stub_->ListJobs(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::scheduler::v1::Job> DefaultCloudSchedulerStub::GetJob(
    grpc::ClientContext& context, Options const&,
    google::cloud::scheduler::v1::GetJobRequest const& request) {
  google::cloud::scheduler::v1::Job response;
  auto status = grpc_stub_->GetJob(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::scheduler::v1::Job>
DefaultCloudSchedulerStub::CreateJob(
    grpc::ClientContext& context, Options const&,
    google::cloud::scheduler::v1::CreateJobRequest const& request) {
  google::cloud::scheduler::v1::Job response;
  auto status = grpc_stub_->CreateJob(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::scheduler::v1::Job>
DefaultCloudSchedulerStub::UpdateJob(
    grpc::ClientContext& context, Options const&,
    google::cloud::scheduler::v1::UpdateJobRequest const& request) {
  google::cloud::scheduler::v1::Job response;
  auto status = grpc_stub_->UpdateJob(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

Status DefaultCloudSchedulerStub::DeleteJob(
    grpc::ClientContext& context, Options const&,
    google::cloud::scheduler::v1::DeleteJobRequest const& request) {
  google::protobuf::Empty response;
  auto status = grpc_stub_->DeleteJob(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return google::cloud::Status();
}

StatusOr<google::cloud::scheduler::v1::Job> DefaultCloudSchedulerStub::PauseJob(
    grpc::ClientContext& context, Options const&,
    google::cloud::scheduler::v1::PauseJobRequest const& request) {
  google::cloud::scheduler::v1::Job response;
  auto status = grpc_stub_->PauseJob(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::scheduler::v1::Job>
DefaultCloudSchedulerStub::ResumeJob(
    grpc::ClientContext& context, Options const&,
    google::cloud::scheduler::v1::ResumeJobRequest const& request) {
  google::cloud::scheduler::v1::Job response;
  auto status = grpc_stub_->ResumeJob(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::scheduler::v1::Job> DefaultCloudSchedulerStub::RunJob(
    grpc::ClientContext& context, Options const&,
    google::cloud::scheduler::v1::RunJobRequest const& request) {
  google::cloud::scheduler::v1::Job response;
  auto status = grpc_stub_->RunJob(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::location::ListLocationsResponse>
DefaultCloudSchedulerStub::ListLocations(
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
DefaultCloudSchedulerStub::GetLocation(
    grpc::ClientContext& context, Options const&,
    google::cloud::location::GetLocationRequest const& request) {
  google::cloud::location::Location response;
  auto status = locations_stub_->GetLocation(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace scheduler_v1_internal
}  // namespace cloud
}  // namespace google
