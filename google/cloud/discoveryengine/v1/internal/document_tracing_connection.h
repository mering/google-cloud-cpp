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
// source: google/cloud/discoveryengine/v1/document_service.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DISCOVERYENGINE_V1_INTERNAL_DOCUMENT_TRACING_CONNECTION_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DISCOVERYENGINE_V1_INTERNAL_DOCUMENT_TRACING_CONNECTION_H

#include "google/cloud/discoveryengine/v1/document_connection.h"
#include "google/cloud/version.h"
#include <memory>

namespace google {
namespace cloud {
namespace discoveryengine_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

class DocumentServiceTracingConnection
    : public discoveryengine_v1::DocumentServiceConnection {
 public:
  ~DocumentServiceTracingConnection() override = default;

  explicit DocumentServiceTracingConnection(
      std::shared_ptr<discoveryengine_v1::DocumentServiceConnection> child);

  Options options() override { return child_->options(); }

  StatusOr<google::cloud::discoveryengine::v1::Document> GetDocument(
      google::cloud::discoveryengine::v1::GetDocumentRequest const& request)
      override;

  StreamRange<google::cloud::discoveryengine::v1::Document> ListDocuments(
      google::cloud::discoveryengine::v1::ListDocumentsRequest request)
      override;

  StatusOr<google::cloud::discoveryengine::v1::Document> CreateDocument(
      google::cloud::discoveryengine::v1::CreateDocumentRequest const& request)
      override;

  StatusOr<google::cloud::discoveryengine::v1::Document> UpdateDocument(
      google::cloud::discoveryengine::v1::UpdateDocumentRequest const& request)
      override;

  Status DeleteDocument(
      google::cloud::discoveryengine::v1::DeleteDocumentRequest const& request)
      override;

  future<StatusOr<google::cloud::discoveryengine::v1::ImportDocumentsResponse>>
  ImportDocuments(
      google::cloud::discoveryengine::v1::ImportDocumentsRequest const& request)
      override;

  StatusOr<google::longrunning::Operation> ImportDocuments(
      NoAwaitTag,
      google::cloud::discoveryengine::v1::ImportDocumentsRequest const& request)
      override;

  future<StatusOr<google::cloud::discoveryengine::v1::ImportDocumentsResponse>>
  ImportDocuments(google::longrunning::Operation const& operation) override;

  future<StatusOr<google::cloud::discoveryengine::v1::PurgeDocumentsResponse>>
  PurgeDocuments(
      google::cloud::discoveryengine::v1::PurgeDocumentsRequest const& request)
      override;

  StatusOr<google::longrunning::Operation> PurgeDocuments(
      NoAwaitTag,
      google::cloud::discoveryengine::v1::PurgeDocumentsRequest const& request)
      override;

  future<StatusOr<google::cloud::discoveryengine::v1::PurgeDocumentsResponse>>
  PurgeDocuments(google::longrunning::Operation const& operation) override;

  StatusOr<
      google::cloud::discoveryengine::v1::BatchGetDocumentsMetadataResponse>
  BatchGetDocumentsMetadata(
      google::cloud::discoveryengine::v1::
          BatchGetDocumentsMetadataRequest const& request) override;

  StreamRange<google::longrunning::Operation> ListOperations(
      google::longrunning::ListOperationsRequest request) override;

  StatusOr<google::longrunning::Operation> GetOperation(
      google::longrunning::GetOperationRequest const& request) override;

  Status CancelOperation(
      google::longrunning::CancelOperationRequest const& request) override;

 private:
  std::shared_ptr<discoveryengine_v1::DocumentServiceConnection> child_;
};

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

/**
 * Conditionally applies the tracing decorator to the given connection.
 *
 * The connection is only decorated if tracing is enabled (as determined by the
 * connection's options).
 */
std::shared_ptr<discoveryengine_v1::DocumentServiceConnection>
MakeDocumentServiceTracingConnection(
    std::shared_ptr<discoveryengine_v1::DocumentServiceConnection> conn);

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace discoveryengine_v1_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DISCOVERYENGINE_V1_INTERNAL_DOCUMENT_TRACING_CONNECTION_H
