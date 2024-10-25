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
// source: google/cloud/batch/v1/batch.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_BATCH_V1_INTERNAL_BATCH_METADATA_DECORATOR_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_BATCH_V1_INTERNAL_BATCH_METADATA_DECORATOR_H

#include "google/cloud/batch/v1/internal/batch_stub.h"
#include "google/cloud/options.h"
#include "google/cloud/version.h"
#include "google/longrunning/operations.grpc.pb.h"
#include <map>
#include <memory>
#include <string>

namespace google {
namespace cloud {
namespace batch_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class BatchServiceMetadata : public BatchServiceStub {
 public:
  ~BatchServiceMetadata() override = default;
  BatchServiceMetadata(std::shared_ptr<BatchServiceStub> child,
                       std::multimap<std::string, std::string> fixed_metadata,
                       std::string api_client_header = "");

  StatusOr<google::cloud::batch::v1::Job> CreateJob(
      grpc::ClientContext& context, Options const& options,
      google::cloud::batch::v1::CreateJobRequest const& request) override;

  StatusOr<google::cloud::batch::v1::Job> GetJob(
      grpc::ClientContext& context, Options const& options,
      google::cloud::batch::v1::GetJobRequest const& request) override;

  future<StatusOr<google::longrunning::Operation>> AsyncDeleteJob(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::batch::v1::DeleteJobRequest const& request) override;

  StatusOr<google::longrunning::Operation> DeleteJob(
      grpc::ClientContext& context, Options options,
      google::cloud::batch::v1::DeleteJobRequest const& request) override;

  StatusOr<google::cloud::batch::v1::ListJobsResponse> ListJobs(
      grpc::ClientContext& context, Options const& options,
      google::cloud::batch::v1::ListJobsRequest const& request) override;

  StatusOr<google::cloud::batch::v1::Task> GetTask(
      grpc::ClientContext& context, Options const& options,
      google::cloud::batch::v1::GetTaskRequest const& request) override;

  StatusOr<google::cloud::batch::v1::ListTasksResponse> ListTasks(
      grpc::ClientContext& context, Options const& options,
      google::cloud::batch::v1::ListTasksRequest const& request) override;

  StatusOr<google::cloud::location::ListLocationsResponse> ListLocations(
      grpc::ClientContext& context, Options const& options,
      google::cloud::location::ListLocationsRequest const& request) override;

  StatusOr<google::cloud::location::Location> GetLocation(
      grpc::ClientContext& context, Options const& options,
      google::cloud::location::GetLocationRequest const& request) override;

  StatusOr<google::longrunning::ListOperationsResponse> ListOperations(
      grpc::ClientContext& context, Options const& options,
      google::longrunning::ListOperationsRequest const& request) override;

  StatusOr<google::longrunning::Operation> GetOperation(
      grpc::ClientContext& context, Options const& options,
      google::longrunning::GetOperationRequest const& request) override;

  Status DeleteOperation(
      grpc::ClientContext& context, Options const& options,
      google::longrunning::DeleteOperationRequest const& request) override;

  Status CancelOperation(
      grpc::ClientContext& context, Options const& options,
      google::longrunning::CancelOperationRequest const& request) override;

  future<StatusOr<google::longrunning::Operation>> AsyncGetOperation(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::longrunning::GetOperationRequest const& request) override;

  future<Status> AsyncCancelOperation(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::longrunning::CancelOperationRequest const& request) override;

 private:
  void SetMetadata(grpc::ClientContext& context, Options const& options,
                   std::string const& request_params);
  void SetMetadata(grpc::ClientContext& context, Options const& options);

  std::shared_ptr<BatchServiceStub> child_;
  std::multimap<std::string, std::string> fixed_metadata_;
  std::string api_client_header_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace batch_v1_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_BATCH_V1_INTERNAL_BATCH_METADATA_DECORATOR_H
