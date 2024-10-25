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

#include "google/cloud/contentwarehouse/v1/internal/document_logging_decorator.h"
#include "google/cloud/contentwarehouse/v1/document_service.grpc.pb.h"
#include "google/cloud/internal/log_wrapper.h"
#include "google/cloud/status_or.h"
#include <memory>
#include <set>
#include <string>
#include <utility>

namespace google {
namespace cloud {
namespace contentwarehouse_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

DocumentServiceLogging::DocumentServiceLogging(
    std::shared_ptr<DocumentServiceStub> child, TracingOptions tracing_options,
    std::set<std::string> const&)
    : child_(std::move(child)), tracing_options_(std::move(tracing_options)) {}

StatusOr<google::cloud::contentwarehouse::v1::CreateDocumentResponse>
DocumentServiceLogging::CreateDocument(
    grpc::ClientContext& context, Options const& options,
    google::cloud::contentwarehouse::v1::CreateDocumentRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::contentwarehouse::v1::CreateDocumentRequest const&
                 request) {
        return child_->CreateDocument(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::contentwarehouse::v1::Document>
DocumentServiceLogging::GetDocument(
    grpc::ClientContext& context, Options const& options,
    google::cloud::contentwarehouse::v1::GetDocumentRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::contentwarehouse::v1::GetDocumentRequest const&
                 request) {
        return child_->GetDocument(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::contentwarehouse::v1::UpdateDocumentResponse>
DocumentServiceLogging::UpdateDocument(
    grpc::ClientContext& context, Options const& options,
    google::cloud::contentwarehouse::v1::UpdateDocumentRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::contentwarehouse::v1::UpdateDocumentRequest const&
                 request) {
        return child_->UpdateDocument(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

Status DocumentServiceLogging::DeleteDocument(
    grpc::ClientContext& context, Options const& options,
    google::cloud::contentwarehouse::v1::DeleteDocumentRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::contentwarehouse::v1::DeleteDocumentRequest const&
                 request) {
        return child_->DeleteDocument(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::contentwarehouse::v1::SearchDocumentsResponse>
DocumentServiceLogging::SearchDocuments(
    grpc::ClientContext& context, Options const& options,
    google::cloud::contentwarehouse::v1::SearchDocumentsRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::contentwarehouse::v1::SearchDocumentsRequest const&
                 request) {
        return child_->SearchDocuments(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::contentwarehouse::v1::Document>
DocumentServiceLogging::LockDocument(
    grpc::ClientContext& context, Options const& options,
    google::cloud::contentwarehouse::v1::LockDocumentRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::contentwarehouse::v1::LockDocumentRequest const&
                 request) {
        return child_->LockDocument(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::contentwarehouse::v1::FetchAclResponse>
DocumentServiceLogging::FetchAcl(
    grpc::ClientContext& context, Options const& options,
    google::cloud::contentwarehouse::v1::FetchAclRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](
          grpc::ClientContext& context, Options const& options,
          google::cloud::contentwarehouse::v1::FetchAclRequest const& request) {
        return child_->FetchAcl(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::contentwarehouse::v1::SetAclResponse>
DocumentServiceLogging::SetAcl(
    grpc::ClientContext& context, Options const& options,
    google::cloud::contentwarehouse::v1::SetAclRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](
          grpc::ClientContext& context, Options const& options,
          google::cloud::contentwarehouse::v1::SetAclRequest const& request) {
        return child_->SetAcl(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::longrunning::Operation> DocumentServiceLogging::GetOperation(
    grpc::ClientContext& context, Options const& options,
    google::longrunning::GetOperationRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::longrunning::GetOperationRequest const& request) {
        return child_->GetOperation(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace contentwarehouse_v1_internal
}  // namespace cloud
}  // namespace google
