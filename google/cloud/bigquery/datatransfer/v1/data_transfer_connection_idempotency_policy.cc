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
// source: google/cloud/bigquery/datatransfer/v1/datatransfer.proto

#include "google/cloud/bigquery/datatransfer/v1/data_transfer_connection_idempotency_policy.h"
#include <memory>

namespace google {
namespace cloud {
namespace bigquery_datatransfer_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

using ::google::cloud::Idempotency;

DataTransferServiceConnectionIdempotencyPolicy::
    ~DataTransferServiceConnectionIdempotencyPolicy() = default;

std::unique_ptr<DataTransferServiceConnectionIdempotencyPolicy>
DataTransferServiceConnectionIdempotencyPolicy::clone() const {
  return std::make_unique<DataTransferServiceConnectionIdempotencyPolicy>(
      *this);
}

Idempotency DataTransferServiceConnectionIdempotencyPolicy::GetDataSource(
    google::cloud::bigquery::datatransfer::v1::GetDataSourceRequest const&) {
  return Idempotency::kIdempotent;
}

Idempotency DataTransferServiceConnectionIdempotencyPolicy::ListDataSources(
    google::cloud::bigquery::datatransfer::v1::
        ListDataSourcesRequest) {  // NOLINT
  return Idempotency::kIdempotent;
}

Idempotency
DataTransferServiceConnectionIdempotencyPolicy::CreateTransferConfig(
    google::cloud::bigquery::datatransfer::v1::
        CreateTransferConfigRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency
DataTransferServiceConnectionIdempotencyPolicy::UpdateTransferConfig(
    google::cloud::bigquery::datatransfer::v1::
        UpdateTransferConfigRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency
DataTransferServiceConnectionIdempotencyPolicy::DeleteTransferConfig(
    google::cloud::bigquery::datatransfer::v1::
        DeleteTransferConfigRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency DataTransferServiceConnectionIdempotencyPolicy::GetTransferConfig(
    google::cloud::bigquery::datatransfer::v1::
        GetTransferConfigRequest const&) {
  return Idempotency::kIdempotent;
}

Idempotency DataTransferServiceConnectionIdempotencyPolicy::ListTransferConfigs(
    google::cloud::bigquery::datatransfer::v1::
        ListTransferConfigsRequest) {  // NOLINT
  return Idempotency::kIdempotent;
}

Idempotency
DataTransferServiceConnectionIdempotencyPolicy::ScheduleTransferRuns(
    google::cloud::bigquery::datatransfer::v1::
        ScheduleTransferRunsRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency
DataTransferServiceConnectionIdempotencyPolicy::StartManualTransferRuns(
    google::cloud::bigquery::datatransfer::v1::
        StartManualTransferRunsRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency DataTransferServiceConnectionIdempotencyPolicy::GetTransferRun(
    google::cloud::bigquery::datatransfer::v1::GetTransferRunRequest const&) {
  return Idempotency::kIdempotent;
}

Idempotency DataTransferServiceConnectionIdempotencyPolicy::DeleteTransferRun(
    google::cloud::bigquery::datatransfer::v1::
        DeleteTransferRunRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency DataTransferServiceConnectionIdempotencyPolicy::ListTransferRuns(
    google::cloud::bigquery::datatransfer::v1::
        ListTransferRunsRequest) {  // NOLINT
  return Idempotency::kIdempotent;
}

Idempotency DataTransferServiceConnectionIdempotencyPolicy::ListTransferLogs(
    google::cloud::bigquery::datatransfer::v1::
        ListTransferLogsRequest) {  // NOLINT
  return Idempotency::kIdempotent;
}

Idempotency DataTransferServiceConnectionIdempotencyPolicy::CheckValidCreds(
    google::cloud::bigquery::datatransfer::v1::CheckValidCredsRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency DataTransferServiceConnectionIdempotencyPolicy::EnrollDataSources(
    google::cloud::bigquery::datatransfer::v1::
        EnrollDataSourcesRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency DataTransferServiceConnectionIdempotencyPolicy::UnenrollDataSources(
    google::cloud::bigquery::datatransfer::v1::
        UnenrollDataSourcesRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency DataTransferServiceConnectionIdempotencyPolicy::ListLocations(
    google::cloud::location::ListLocationsRequest) {  // NOLINT
  return Idempotency::kIdempotent;
}

Idempotency DataTransferServiceConnectionIdempotencyPolicy::GetLocation(
    google::cloud::location::GetLocationRequest const&) {
  return Idempotency::kIdempotent;
}

std::unique_ptr<DataTransferServiceConnectionIdempotencyPolicy>
MakeDefaultDataTransferServiceConnectionIdempotencyPolicy() {
  return std::make_unique<DataTransferServiceConnectionIdempotencyPolicy>();
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace bigquery_datatransfer_v1
}  // namespace cloud
}  // namespace google
