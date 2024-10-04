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

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_STORAGETRANSFER_V1_INTERNAL_STORAGE_TRANSFER_TRACING_CONNECTION_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_STORAGETRANSFER_V1_INTERNAL_STORAGE_TRANSFER_TRACING_CONNECTION_H

#include "google/cloud/storagetransfer/v1/storage_transfer_connection.h"
#include "google/cloud/version.h"
#include <memory>

namespace google {
namespace cloud {
namespace storagetransfer_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

class StorageTransferServiceTracingConnection
    : public storagetransfer_v1::StorageTransferServiceConnection {
 public:
  ~StorageTransferServiceTracingConnection() override = default;

  explicit StorageTransferServiceTracingConnection(
      std::shared_ptr<storagetransfer_v1::StorageTransferServiceConnection>
          child);

  Options options() override { return child_->options(); }

  StatusOr<google::storagetransfer::v1::GoogleServiceAccount>
  GetGoogleServiceAccount(
      google::storagetransfer::v1::GetGoogleServiceAccountRequest const&
          request) override;

  StatusOr<google::storagetransfer::v1::TransferJob> CreateTransferJob(
      google::storagetransfer::v1::CreateTransferJobRequest const& request)
      override;

  StatusOr<google::storagetransfer::v1::TransferJob> UpdateTransferJob(
      google::storagetransfer::v1::UpdateTransferJobRequest const& request)
      override;

  StatusOr<google::storagetransfer::v1::TransferJob> GetTransferJob(
      google::storagetransfer::v1::GetTransferJobRequest const& request)
      override;

  StreamRange<google::storagetransfer::v1::TransferJob> ListTransferJobs(
      google::storagetransfer::v1::ListTransferJobsRequest request) override;

  Status PauseTransferOperation(
      google::storagetransfer::v1::PauseTransferOperationRequest const& request)
      override;

  Status ResumeTransferOperation(
      google::storagetransfer::v1::ResumeTransferOperationRequest const&
          request) override;

  future<StatusOr<google::storagetransfer::v1::TransferOperation>>
  RunTransferJob(google::storagetransfer::v1::RunTransferJobRequest const&
                     request) override;

  StatusOr<google::longrunning::Operation> RunTransferJob(
      NoAwaitTag,
      google::storagetransfer::v1::RunTransferJobRequest const& request)
      override;

  future<StatusOr<google::storagetransfer::v1::TransferOperation>>
  RunTransferJob(google::longrunning::Operation const& operation) override;

  Status DeleteTransferJob(
      google::storagetransfer::v1::DeleteTransferJobRequest const& request)
      override;

  StatusOr<google::storagetransfer::v1::AgentPool> CreateAgentPool(
      google::storagetransfer::v1::CreateAgentPoolRequest const& request)
      override;

  StatusOr<google::storagetransfer::v1::AgentPool> UpdateAgentPool(
      google::storagetransfer::v1::UpdateAgentPoolRequest const& request)
      override;

  StatusOr<google::storagetransfer::v1::AgentPool> GetAgentPool(
      google::storagetransfer::v1::GetAgentPoolRequest const& request) override;

  StreamRange<google::storagetransfer::v1::AgentPool> ListAgentPools(
      google::storagetransfer::v1::ListAgentPoolsRequest request) override;

  Status DeleteAgentPool(
      google::storagetransfer::v1::DeleteAgentPoolRequest const& request)
      override;

  StreamRange<google::longrunning::Operation> ListOperations(
      google::longrunning::ListOperationsRequest request) override;

  StatusOr<google::longrunning::Operation> GetOperation(
      google::longrunning::GetOperationRequest const& request) override;

  Status CancelOperation(
      google::longrunning::CancelOperationRequest const& request) override;

 private:
  std::shared_ptr<storagetransfer_v1::StorageTransferServiceConnection> child_;
};

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

/**
 * Conditionally applies the tracing decorator to the given connection.
 *
 * The connection is only decorated if tracing is enabled (as determined by the
 * connection's options).
 */
std::shared_ptr<storagetransfer_v1::StorageTransferServiceConnection>
MakeStorageTransferServiceTracingConnection(
    std::shared_ptr<storagetransfer_v1::StorageTransferServiceConnection> conn);

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace storagetransfer_v1_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_STORAGETRANSFER_V1_INTERNAL_STORAGE_TRANSFER_TRACING_CONNECTION_H
