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

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_BATCH_V1_BATCH_CONNECTION_IDEMPOTENCY_POLICY_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_BATCH_V1_BATCH_CONNECTION_IDEMPOTENCY_POLICY_H

#include "google/cloud/idempotency.h"
#include "google/cloud/version.h"
#include "google/cloud/batch/v1/batch.grpc.pb.h"
#include "google/cloud/location/locations.grpc.pb.h"
#include "google/longrunning/operations.grpc.pb.h"
#include <memory>

namespace google {
namespace cloud {
namespace batch_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class BatchServiceConnectionIdempotencyPolicy {
 public:
  virtual ~BatchServiceConnectionIdempotencyPolicy();

  /// Create a new copy of this object.
  virtual std::unique_ptr<BatchServiceConnectionIdempotencyPolicy> clone()
      const;

  virtual google::cloud::Idempotency CreateJob(
      google::cloud::batch::v1::CreateJobRequest const& request);

  virtual google::cloud::Idempotency GetJob(
      google::cloud::batch::v1::GetJobRequest const& request);

  virtual google::cloud::Idempotency DeleteJob(
      google::cloud::batch::v1::DeleteJobRequest const& request);

  virtual google::cloud::Idempotency ListJobs(
      google::cloud::batch::v1::ListJobsRequest request);

  virtual google::cloud::Idempotency GetTask(
      google::cloud::batch::v1::GetTaskRequest const& request);

  virtual google::cloud::Idempotency ListTasks(
      google::cloud::batch::v1::ListTasksRequest request);

  virtual google::cloud::Idempotency ListLocations(
      google::cloud::location::ListLocationsRequest request);

  virtual google::cloud::Idempotency GetLocation(
      google::cloud::location::GetLocationRequest const& request);

  virtual google::cloud::Idempotency ListOperations(
      google::longrunning::ListOperationsRequest request);

  virtual google::cloud::Idempotency GetOperation(
      google::longrunning::GetOperationRequest const& request);

  virtual google::cloud::Idempotency DeleteOperation(
      google::longrunning::DeleteOperationRequest const& request);

  virtual google::cloud::Idempotency CancelOperation(
      google::longrunning::CancelOperationRequest const& request);
};

std::unique_ptr<BatchServiceConnectionIdempotencyPolicy>
MakeDefaultBatchServiceConnectionIdempotencyPolicy();

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace batch_v1
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_BATCH_V1_BATCH_CONNECTION_IDEMPOTENCY_POLICY_H
