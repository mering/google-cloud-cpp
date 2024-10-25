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
// source: google/datastore/admin/v1/datastore_admin.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DATASTORE_ADMIN_V1_DATASTORE_ADMIN_CONNECTION_IDEMPOTENCY_POLICY_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DATASTORE_ADMIN_V1_DATASTORE_ADMIN_CONNECTION_IDEMPOTENCY_POLICY_H

#include "google/cloud/idempotency.h"
#include "google/cloud/version.h"
#include "google/datastore/admin/v1/datastore_admin.grpc.pb.h"
#include "google/longrunning/operations.grpc.pb.h"
#include <memory>

namespace google {
namespace cloud {
namespace datastore_admin_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class DatastoreAdminConnectionIdempotencyPolicy {
 public:
  virtual ~DatastoreAdminConnectionIdempotencyPolicy();

  /// Create a new copy of this object.
  virtual std::unique_ptr<DatastoreAdminConnectionIdempotencyPolicy> clone()
      const;

  virtual google::cloud::Idempotency ExportEntities(
      google::datastore::admin::v1::ExportEntitiesRequest const& request);

  virtual google::cloud::Idempotency ImportEntities(
      google::datastore::admin::v1::ImportEntitiesRequest const& request);

  virtual google::cloud::Idempotency CreateIndex(
      google::datastore::admin::v1::CreateIndexRequest const& request);

  virtual google::cloud::Idempotency DeleteIndex(
      google::datastore::admin::v1::DeleteIndexRequest const& request);

  virtual google::cloud::Idempotency GetIndex(
      google::datastore::admin::v1::GetIndexRequest const& request);

  virtual google::cloud::Idempotency ListIndexes(
      google::datastore::admin::v1::ListIndexesRequest request);

  virtual google::cloud::Idempotency ListOperations(
      google::longrunning::ListOperationsRequest request);

  virtual google::cloud::Idempotency GetOperation(
      google::longrunning::GetOperationRequest const& request);

  virtual google::cloud::Idempotency DeleteOperation(
      google::longrunning::DeleteOperationRequest const& request);

  virtual google::cloud::Idempotency CancelOperation(
      google::longrunning::CancelOperationRequest const& request);
};

std::unique_ptr<DatastoreAdminConnectionIdempotencyPolicy>
MakeDefaultDatastoreAdminConnectionIdempotencyPolicy();

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace datastore_admin_v1
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DATASTORE_ADMIN_V1_DATASTORE_ADMIN_CONNECTION_IDEMPOTENCY_POLICY_H
