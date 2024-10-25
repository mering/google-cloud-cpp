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
// source: google/storagetransfer/v1/transfer.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_STORAGETRANSFER_V1_STORAGE_TRANSFER_CONNECTION_IDEMPOTENCY_POLICY_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_STORAGETRANSFER_V1_STORAGE_TRANSFER_CONNECTION_IDEMPOTENCY_POLICY_H

#include "google/cloud/idempotency.h"
#include "google/cloud/version.h"
#include "google/longrunning/operations.grpc.pb.h"
#include "google/storagetransfer/v1/transfer.grpc.pb.h"
#include <memory>

namespace google {
namespace cloud {
namespace storagetransfer_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class StorageTransferServiceConnectionIdempotencyPolicy {
 public:
  virtual ~StorageTransferServiceConnectionIdempotencyPolicy();

  /// Create a new copy of this object.
  virtual std::unique_ptr<StorageTransferServiceConnectionIdempotencyPolicy>
  clone() const;

  virtual google::cloud::Idempotency GetGoogleServiceAccount(
      google::storagetransfer::v1::GetGoogleServiceAccountRequest const&
          request);

  virtual google::cloud::Idempotency CreateTransferJob(
      google::storagetransfer::v1::CreateTransferJobRequest const& request);

  virtual google::cloud::Idempotency UpdateTransferJob(
      google::storagetransfer::v1::UpdateTransferJobRequest const& request);

  virtual google::cloud::Idempotency GetTransferJob(
      google::storagetransfer::v1::GetTransferJobRequest const& request);

  virtual google::cloud::Idempotency ListTransferJobs(
      google::storagetransfer::v1::ListTransferJobsRequest request);

  virtual google::cloud::Idempotency PauseTransferOperation(
      google::storagetransfer::v1::PauseTransferOperationRequest const&
          request);

  virtual google::cloud::Idempotency ResumeTransferOperation(
      google::storagetransfer::v1::ResumeTransferOperationRequest const&
          request);

  virtual google::cloud::Idempotency RunTransferJob(
      google::storagetransfer::v1::RunTransferJobRequest const& request);

  virtual google::cloud::Idempotency DeleteTransferJob(
      google::storagetransfer::v1::DeleteTransferJobRequest const& request);

  virtual google::cloud::Idempotency CreateAgentPool(
      google::storagetransfer::v1::CreateAgentPoolRequest const& request);

  virtual google::cloud::Idempotency UpdateAgentPool(
      google::storagetransfer::v1::UpdateAgentPoolRequest const& request);

  virtual google::cloud::Idempotency GetAgentPool(
      google::storagetransfer::v1::GetAgentPoolRequest const& request);

  virtual google::cloud::Idempotency ListAgentPools(
      google::storagetransfer::v1::ListAgentPoolsRequest request);

  virtual google::cloud::Idempotency DeleteAgentPool(
      google::storagetransfer::v1::DeleteAgentPoolRequest const& request);

  virtual google::cloud::Idempotency ListOperations(
      google::longrunning::ListOperationsRequest request);

  virtual google::cloud::Idempotency GetOperation(
      google::longrunning::GetOperationRequest const& request);

  virtual google::cloud::Idempotency CancelOperation(
      google::longrunning::CancelOperationRequest const& request);
};

std::unique_ptr<StorageTransferServiceConnectionIdempotencyPolicy>
MakeDefaultStorageTransferServiceConnectionIdempotencyPolicy();

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace storagetransfer_v1
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_STORAGETRANSFER_V1_STORAGE_TRANSFER_CONNECTION_IDEMPOTENCY_POLICY_H
