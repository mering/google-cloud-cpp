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

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DATASTORE_ADMIN_V1_INTERNAL_DATASTORE_ADMIN_STUB_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DATASTORE_ADMIN_V1_INTERNAL_DATASTORE_ADMIN_STUB_H

#include "google/cloud/completion_queue.h"
#include "google/cloud/future.h"
#include "google/cloud/options.h"
#include "google/cloud/status_or.h"
#include "google/cloud/version.h"
#include <google/datastore/admin/v1/datastore_admin.grpc.pb.h>
#include <google/longrunning/operations.grpc.pb.h>
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace datastore_admin_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class DatastoreAdminStub {
 public:
  virtual ~DatastoreAdminStub() = 0;

  virtual future<StatusOr<google::longrunning::Operation>> AsyncExportEntities(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::datastore::admin::v1::ExportEntitiesRequest const& request) = 0;

  virtual StatusOr<google::longrunning::Operation> ExportEntities(
      grpc::ClientContext& context, Options options,
      google::datastore::admin::v1::ExportEntitiesRequest const& request) = 0;

  virtual future<StatusOr<google::longrunning::Operation>> AsyncImportEntities(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::datastore::admin::v1::ImportEntitiesRequest const& request) = 0;

  virtual StatusOr<google::longrunning::Operation> ImportEntities(
      grpc::ClientContext& context, Options options,
      google::datastore::admin::v1::ImportEntitiesRequest const& request) = 0;

  virtual future<StatusOr<google::longrunning::Operation>> AsyncCreateIndex(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::datastore::admin::v1::CreateIndexRequest const& request) = 0;

  virtual StatusOr<google::longrunning::Operation> CreateIndex(
      grpc::ClientContext& context, Options options,
      google::datastore::admin::v1::CreateIndexRequest const& request) = 0;

  virtual future<StatusOr<google::longrunning::Operation>> AsyncDeleteIndex(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::datastore::admin::v1::DeleteIndexRequest const& request) = 0;

  virtual StatusOr<google::longrunning::Operation> DeleteIndex(
      grpc::ClientContext& context, Options options,
      google::datastore::admin::v1::DeleteIndexRequest const& request) = 0;

  virtual StatusOr<google::datastore::admin::v1::Index> GetIndex(
      grpc::ClientContext& context, Options const& options,
      google::datastore::admin::v1::GetIndexRequest const& request) = 0;

  virtual StatusOr<google::datastore::admin::v1::ListIndexesResponse>
  ListIndexes(
      grpc::ClientContext& context, Options const& options,
      google::datastore::admin::v1::ListIndexesRequest const& request) = 0;

  virtual StatusOr<google::longrunning::ListOperationsResponse> ListOperations(
      grpc::ClientContext& context, Options const& options,
      google::longrunning::ListOperationsRequest const& request) = 0;

  virtual StatusOr<google::longrunning::Operation> GetOperation(
      grpc::ClientContext& context, Options const& options,
      google::longrunning::GetOperationRequest const& request) = 0;

  virtual Status DeleteOperation(
      grpc::ClientContext& context, Options const& options,
      google::longrunning::DeleteOperationRequest const& request) = 0;

  virtual Status CancelOperation(
      grpc::ClientContext& context, Options const& options,
      google::longrunning::CancelOperationRequest const& request) = 0;

  virtual future<StatusOr<google::longrunning::Operation>> AsyncGetOperation(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::longrunning::GetOperationRequest const& request) = 0;

  virtual future<Status> AsyncCancelOperation(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::longrunning::CancelOperationRequest const& request) = 0;
};

class DefaultDatastoreAdminStub : public DatastoreAdminStub {
 public:
  DefaultDatastoreAdminStub(
      std::unique_ptr<
          google::datastore::admin::v1::DatastoreAdmin::StubInterface>
          grpc_stub,
      std::unique_ptr<google::longrunning::Operations::StubInterface>
          operations_stub,
      std::unique_ptr<google::longrunning::Operations::StubInterface>
          operations)
      : grpc_stub_(std::move(grpc_stub)),
        operations_stub_(std::move(operations_stub)),
        operations_(std::move(operations)) {}

  future<StatusOr<google::longrunning::Operation>> AsyncExportEntities(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::datastore::admin::v1::ExportEntitiesRequest const& request)
      override;

  StatusOr<google::longrunning::Operation> ExportEntities(
      grpc::ClientContext& context, Options options,
      google::datastore::admin::v1::ExportEntitiesRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncImportEntities(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::datastore::admin::v1::ImportEntitiesRequest const& request)
      override;

  StatusOr<google::longrunning::Operation> ImportEntities(
      grpc::ClientContext& context, Options options,
      google::datastore::admin::v1::ImportEntitiesRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncCreateIndex(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::datastore::admin::v1::CreateIndexRequest const& request) override;

  StatusOr<google::longrunning::Operation> CreateIndex(
      grpc::ClientContext& context, Options options,
      google::datastore::admin::v1::CreateIndexRequest const& request) override;

  future<StatusOr<google::longrunning::Operation>> AsyncDeleteIndex(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::datastore::admin::v1::DeleteIndexRequest const& request) override;

  StatusOr<google::longrunning::Operation> DeleteIndex(
      grpc::ClientContext& context, Options options,
      google::datastore::admin::v1::DeleteIndexRequest const& request) override;

  StatusOr<google::datastore::admin::v1::Index> GetIndex(
      grpc::ClientContext& context, Options const& options,
      google::datastore::admin::v1::GetIndexRequest const& request) override;

  StatusOr<google::datastore::admin::v1::ListIndexesResponse> ListIndexes(
      grpc::ClientContext& context, Options const& options,
      google::datastore::admin::v1::ListIndexesRequest const& request) override;

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
  std::unique_ptr<google::datastore::admin::v1::DatastoreAdmin::StubInterface>
      grpc_stub_;
  std::unique_ptr<google::longrunning::Operations::StubInterface>
      operations_stub_;
  std::unique_ptr<google::longrunning::Operations::StubInterface> operations_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace datastore_admin_v1_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DATASTORE_ADMIN_V1_INTERNAL_DATASTORE_ADMIN_STUB_H
