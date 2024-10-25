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
// source: google/cloud/contentwarehouse/v1/document_service.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_CONTENTWAREHOUSE_V1_DOCUMENT_CONNECTION_IDEMPOTENCY_POLICY_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_CONTENTWAREHOUSE_V1_DOCUMENT_CONNECTION_IDEMPOTENCY_POLICY_H

#include "google/cloud/contentwarehouse/v1/document_service.grpc.pb.h"
#include "google/cloud/idempotency.h"
#include "google/cloud/version.h"
#include "google/longrunning/operations.grpc.pb.h"
#include <memory>

namespace google {
namespace cloud {
namespace contentwarehouse_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class DocumentServiceConnectionIdempotencyPolicy {
 public:
  virtual ~DocumentServiceConnectionIdempotencyPolicy();

  /// Create a new copy of this object.
  virtual std::unique_ptr<DocumentServiceConnectionIdempotencyPolicy> clone()
      const;

  virtual google::cloud::Idempotency CreateDocument(
      google::cloud::contentwarehouse::v1::CreateDocumentRequest const&
          request);

  virtual google::cloud::Idempotency GetDocument(
      google::cloud::contentwarehouse::v1::GetDocumentRequest const& request);

  virtual google::cloud::Idempotency UpdateDocument(
      google::cloud::contentwarehouse::v1::UpdateDocumentRequest const&
          request);

  virtual google::cloud::Idempotency DeleteDocument(
      google::cloud::contentwarehouse::v1::DeleteDocumentRequest const&
          request);

  virtual google::cloud::Idempotency SearchDocuments(
      google::cloud::contentwarehouse::v1::SearchDocumentsRequest request);

  virtual google::cloud::Idempotency LockDocument(
      google::cloud::contentwarehouse::v1::LockDocumentRequest const& request);

  virtual google::cloud::Idempotency FetchAcl(
      google::cloud::contentwarehouse::v1::FetchAclRequest const& request);

  virtual google::cloud::Idempotency SetAcl(
      google::cloud::contentwarehouse::v1::SetAclRequest const& request);

  virtual google::cloud::Idempotency GetOperation(
      google::longrunning::GetOperationRequest const& request);
};

std::unique_ptr<DocumentServiceConnectionIdempotencyPolicy>
MakeDefaultDocumentServiceConnectionIdempotencyPolicy();

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace contentwarehouse_v1
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_CONTENTWAREHOUSE_V1_DOCUMENT_CONNECTION_IDEMPOTENCY_POLICY_H
