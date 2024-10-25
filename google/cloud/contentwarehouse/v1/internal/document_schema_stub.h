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
// source: google/cloud/contentwarehouse/v1/document_schema_service.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_CONTENTWAREHOUSE_V1_INTERNAL_DOCUMENT_SCHEMA_STUB_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_CONTENTWAREHOUSE_V1_INTERNAL_DOCUMENT_SCHEMA_STUB_H

#include "google/cloud/contentwarehouse/v1/document_schema_service.grpc.pb.h"
#include "google/cloud/options.h"
#include "google/cloud/status_or.h"
#include "google/cloud/version.h"
#include "google/longrunning/operations.grpc.pb.h"
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace contentwarehouse_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class DocumentSchemaServiceStub {
 public:
  virtual ~DocumentSchemaServiceStub() = 0;

  virtual StatusOr<google::cloud::contentwarehouse::v1::DocumentSchema>
  CreateDocumentSchema(
      grpc::ClientContext& context, Options const& options,
      google::cloud::contentwarehouse::v1::CreateDocumentSchemaRequest const&
          request) = 0;

  virtual StatusOr<google::cloud::contentwarehouse::v1::DocumentSchema>
  UpdateDocumentSchema(
      grpc::ClientContext& context, Options const& options,
      google::cloud::contentwarehouse::v1::UpdateDocumentSchemaRequest const&
          request) = 0;

  virtual StatusOr<google::cloud::contentwarehouse::v1::DocumentSchema>
  GetDocumentSchema(
      grpc::ClientContext& context, Options const& options,
      google::cloud::contentwarehouse::v1::GetDocumentSchemaRequest const&
          request) = 0;

  virtual Status DeleteDocumentSchema(
      grpc::ClientContext& context, Options const& options,
      google::cloud::contentwarehouse::v1::DeleteDocumentSchemaRequest const&
          request) = 0;

  virtual StatusOr<
      google::cloud::contentwarehouse::v1::ListDocumentSchemasResponse>
  ListDocumentSchemas(
      grpc::ClientContext& context, Options const& options,
      google::cloud::contentwarehouse::v1::ListDocumentSchemasRequest const&
          request) = 0;

  virtual StatusOr<google::longrunning::Operation> GetOperation(
      grpc::ClientContext& context, Options const& options,
      google::longrunning::GetOperationRequest const& request) = 0;
};

class DefaultDocumentSchemaServiceStub : public DocumentSchemaServiceStub {
 public:
  explicit DefaultDocumentSchemaServiceStub(
      std::unique_ptr<google::cloud::contentwarehouse::v1::
                          DocumentSchemaService::StubInterface>
          grpc_stub,
      std::unique_ptr<google::longrunning::Operations::StubInterface>
          operations_stub)
      : grpc_stub_(std::move(grpc_stub)),
        operations_stub_(std::move(operations_stub)) {}

  StatusOr<google::cloud::contentwarehouse::v1::DocumentSchema>
  CreateDocumentSchema(
      grpc::ClientContext& context, Options const& options,
      google::cloud::contentwarehouse::v1::CreateDocumentSchemaRequest const&
          request) override;

  StatusOr<google::cloud::contentwarehouse::v1::DocumentSchema>
  UpdateDocumentSchema(
      grpc::ClientContext& context, Options const& options,
      google::cloud::contentwarehouse::v1::UpdateDocumentSchemaRequest const&
          request) override;

  StatusOr<google::cloud::contentwarehouse::v1::DocumentSchema>
  GetDocumentSchema(
      grpc::ClientContext& context, Options const& options,
      google::cloud::contentwarehouse::v1::GetDocumentSchemaRequest const&
          request) override;

  Status DeleteDocumentSchema(
      grpc::ClientContext& context, Options const& options,
      google::cloud::contentwarehouse::v1::DeleteDocumentSchemaRequest const&
          request) override;

  StatusOr<google::cloud::contentwarehouse::v1::ListDocumentSchemasResponse>
  ListDocumentSchemas(
      grpc::ClientContext& context, Options const& options,
      google::cloud::contentwarehouse::v1::ListDocumentSchemasRequest const&
          request) override;

  StatusOr<google::longrunning::Operation> GetOperation(
      grpc::ClientContext& context, Options const& options,
      google::longrunning::GetOperationRequest const& request) override;

 private:
  std::unique_ptr<
      google::cloud::contentwarehouse::v1::DocumentSchemaService::StubInterface>
      grpc_stub_;
  std::unique_ptr<google::longrunning::Operations::StubInterface>
      operations_stub_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace contentwarehouse_v1_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_CONTENTWAREHOUSE_V1_INTERNAL_DOCUMENT_SCHEMA_STUB_H
