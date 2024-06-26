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

#include "google/cloud/storagetransfer/v1/storage_transfer_client.h"
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace storagetransfer_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

StorageTransferServiceClient::StorageTransferServiceClient(
    std::shared_ptr<StorageTransferServiceConnection> connection, Options opts)
    : connection_(std::move(connection)),
      options_(
          internal::MergeOptions(std::move(opts), connection_->options())) {}
StorageTransferServiceClient::~StorageTransferServiceClient() = default;

StatusOr<google::storagetransfer::v1::GoogleServiceAccount>
StorageTransferServiceClient::GetGoogleServiceAccount(
    google::storagetransfer::v1::GetGoogleServiceAccountRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->GetGoogleServiceAccount(request);
}

StatusOr<google::storagetransfer::v1::TransferJob>
StorageTransferServiceClient::CreateTransferJob(
    google::storagetransfer::v1::CreateTransferJobRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->CreateTransferJob(request);
}

StatusOr<google::storagetransfer::v1::TransferJob>
StorageTransferServiceClient::UpdateTransferJob(
    google::storagetransfer::v1::UpdateTransferJobRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->UpdateTransferJob(request);
}

StatusOr<google::storagetransfer::v1::TransferJob>
StorageTransferServiceClient::GetTransferJob(
    google::storagetransfer::v1::GetTransferJobRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->GetTransferJob(request);
}

StreamRange<google::storagetransfer::v1::TransferJob>
StorageTransferServiceClient::ListTransferJobs(
    google::storagetransfer::v1::ListTransferJobsRequest request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->ListTransferJobs(std::move(request));
}

Status StorageTransferServiceClient::PauseTransferOperation(
    google::storagetransfer::v1::PauseTransferOperationRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->PauseTransferOperation(request);
}

Status StorageTransferServiceClient::ResumeTransferOperation(
    google::storagetransfer::v1::ResumeTransferOperationRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->ResumeTransferOperation(request);
}

future<StatusOr<google::storagetransfer::v1::TransferOperation>>
StorageTransferServiceClient::RunTransferJob(
    google::storagetransfer::v1::RunTransferJobRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->RunTransferJob(request);
}

StatusOr<google::longrunning::Operation>
StorageTransferServiceClient::RunTransferJob(
    ExperimentalTag, NoAwaitTag,
    google::storagetransfer::v1::RunTransferJobRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->RunTransferJob(ExperimentalTag{}, NoAwaitTag{}, request);
}

future<StatusOr<google::storagetransfer::v1::TransferOperation>>
StorageTransferServiceClient::RunTransferJob(
    ExperimentalTag, google::longrunning::Operation const& operation,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->RunTransferJob(ExperimentalTag{}, operation);
}

Status StorageTransferServiceClient::DeleteTransferJob(
    google::storagetransfer::v1::DeleteTransferJobRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->DeleteTransferJob(request);
}

StatusOr<google::storagetransfer::v1::AgentPool>
StorageTransferServiceClient::CreateAgentPool(
    std::string const& project_id,
    google::storagetransfer::v1::AgentPool const& agent_pool,
    std::string const& agent_pool_id, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::storagetransfer::v1::CreateAgentPoolRequest request;
  request.set_project_id(project_id);
  *request.mutable_agent_pool() = agent_pool;
  request.set_agent_pool_id(agent_pool_id);
  return connection_->CreateAgentPool(request);
}

StatusOr<google::storagetransfer::v1::AgentPool>
StorageTransferServiceClient::CreateAgentPool(
    google::storagetransfer::v1::CreateAgentPoolRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->CreateAgentPool(request);
}

StatusOr<google::storagetransfer::v1::AgentPool>
StorageTransferServiceClient::UpdateAgentPool(
    google::storagetransfer::v1::AgentPool const& agent_pool,
    google::protobuf::FieldMask const& update_mask, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::storagetransfer::v1::UpdateAgentPoolRequest request;
  *request.mutable_agent_pool() = agent_pool;
  *request.mutable_update_mask() = update_mask;
  return connection_->UpdateAgentPool(request);
}

StatusOr<google::storagetransfer::v1::AgentPool>
StorageTransferServiceClient::UpdateAgentPool(
    google::storagetransfer::v1::UpdateAgentPoolRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->UpdateAgentPool(request);
}

StatusOr<google::storagetransfer::v1::AgentPool>
StorageTransferServiceClient::GetAgentPool(std::string const& name,
                                           Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::storagetransfer::v1::GetAgentPoolRequest request;
  request.set_name(name);
  return connection_->GetAgentPool(request);
}

StatusOr<google::storagetransfer::v1::AgentPool>
StorageTransferServiceClient::GetAgentPool(
    google::storagetransfer::v1::GetAgentPoolRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->GetAgentPool(request);
}

StreamRange<google::storagetransfer::v1::AgentPool>
StorageTransferServiceClient::ListAgentPools(std::string const& project_id,
                                             Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::storagetransfer::v1::ListAgentPoolsRequest request;
  request.set_project_id(project_id);
  return connection_->ListAgentPools(request);
}

StreamRange<google::storagetransfer::v1::AgentPool>
StorageTransferServiceClient::ListAgentPools(
    google::storagetransfer::v1::ListAgentPoolsRequest request, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->ListAgentPools(std::move(request));
}

Status StorageTransferServiceClient::DeleteAgentPool(std::string const& name,
                                                     Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::storagetransfer::v1::DeleteAgentPoolRequest request;
  request.set_name(name);
  return connection_->DeleteAgentPool(request);
}

Status StorageTransferServiceClient::DeleteAgentPool(
    google::storagetransfer::v1::DeleteAgentPoolRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->DeleteAgentPool(request);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace storagetransfer_v1
}  // namespace cloud
}  // namespace google
