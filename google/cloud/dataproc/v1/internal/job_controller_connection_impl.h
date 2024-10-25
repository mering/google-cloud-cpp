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

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DATAPROC_V1_INTERNAL_JOB_CONTROLLER_CONNECTION_IMPL_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DATAPROC_V1_INTERNAL_JOB_CONTROLLER_CONNECTION_IMPL_H

#include "google/cloud/dataproc/v1/internal/job_controller_retry_traits.h"
#include "google/cloud/dataproc/v1/internal/job_controller_stub.h"
#include "google/cloud/dataproc/v1/job_controller_connection.h"
#include "google/cloud/dataproc/v1/job_controller_connection_idempotency_policy.h"
#include "google/cloud/dataproc/v1/job_controller_options.h"
#include "google/cloud/background_threads.h"
#include "google/cloud/backoff_policy.h"
#include "google/cloud/future.h"
#include "google/cloud/options.h"
#include "google/cloud/polling_policy.h"
#include "google/cloud/status_or.h"
#include "google/cloud/stream_range.h"
#include "google/cloud/version.h"
#include "google/longrunning/operations.grpc.pb.h"
#include <memory>

namespace google {
namespace cloud {
namespace dataproc_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class JobControllerConnectionImpl
    : public dataproc_v1::JobControllerConnection {
 public:
  ~JobControllerConnectionImpl() override = default;

  JobControllerConnectionImpl(
      std::unique_ptr<google::cloud::BackgroundThreads> background,
      std::shared_ptr<dataproc_v1_internal::JobControllerStub> stub,
      Options options);

  Options options() override { return options_; }

  StatusOr<google::cloud::dataproc::v1::Job> SubmitJob(
      google::cloud::dataproc::v1::SubmitJobRequest const& request) override;

  future<StatusOr<google::cloud::dataproc::v1::Job>> SubmitJobAsOperation(
      google::cloud::dataproc::v1::SubmitJobRequest const& request) override;

  StatusOr<google::longrunning::Operation> SubmitJobAsOperation(
      NoAwaitTag,
      google::cloud::dataproc::v1::SubmitJobRequest const& request) override;

  future<StatusOr<google::cloud::dataproc::v1::Job>> SubmitJobAsOperation(
      google::longrunning::Operation const& operation) override;

  StatusOr<google::cloud::dataproc::v1::Job> GetJob(
      google::cloud::dataproc::v1::GetJobRequest const& request) override;

  StreamRange<google::cloud::dataproc::v1::Job> ListJobs(
      google::cloud::dataproc::v1::ListJobsRequest request) override;

  StatusOr<google::cloud::dataproc::v1::Job> UpdateJob(
      google::cloud::dataproc::v1::UpdateJobRequest const& request) override;

  StatusOr<google::cloud::dataproc::v1::Job> CancelJob(
      google::cloud::dataproc::v1::CancelJobRequest const& request) override;

  Status DeleteJob(
      google::cloud::dataproc::v1::DeleteJobRequest const& request) override;

  StatusOr<google::iam::v1::Policy> SetIamPolicy(
      google::iam::v1::SetIamPolicyRequest const& request) override;

  StatusOr<google::iam::v1::Policy> GetIamPolicy(
      google::iam::v1::GetIamPolicyRequest const& request) override;

  StatusOr<google::iam::v1::TestIamPermissionsResponse> TestIamPermissions(
      google::iam::v1::TestIamPermissionsRequest const& request) override;

  StreamRange<google::longrunning::Operation> ListOperations(
      google::longrunning::ListOperationsRequest request) override;

  StatusOr<google::longrunning::Operation> GetOperation(
      google::longrunning::GetOperationRequest const& request) override;

  Status DeleteOperation(
      google::longrunning::DeleteOperationRequest const& request) override;

  Status CancelOperation(
      google::longrunning::CancelOperationRequest const& request) override;

 private:
  std::unique_ptr<google::cloud::BackgroundThreads> background_;
  std::shared_ptr<dataproc_v1_internal::JobControllerStub> stub_;
  Options options_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace dataproc_v1_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DATAPROC_V1_INTERNAL_JOB_CONTROLLER_CONNECTION_IMPL_H
