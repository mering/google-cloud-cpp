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
// source: google/cloud/webrisk/v1/webrisk.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_WEBRISK_V1_INTERNAL_WEB_RISK_STUB_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_WEBRISK_V1_INTERNAL_WEB_RISK_STUB_H

#include "google/cloud/webrisk/v1/webrisk.grpc.pb.h"
#include "google/cloud/completion_queue.h"
#include "google/cloud/future.h"
#include "google/cloud/options.h"
#include "google/cloud/status_or.h"
#include "google/cloud/version.h"
#include "google/longrunning/operations.grpc.pb.h"
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace webrisk_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class WebRiskServiceStub {
 public:
  virtual ~WebRiskServiceStub() = 0;

  virtual StatusOr<google::cloud::webrisk::v1::ComputeThreatListDiffResponse>
  ComputeThreatListDiff(
      grpc::ClientContext& context, Options const& options,
      google::cloud::webrisk::v1::ComputeThreatListDiffRequest const&
          request) = 0;

  virtual StatusOr<google::cloud::webrisk::v1::SearchUrisResponse> SearchUris(
      grpc::ClientContext& context, Options const& options,
      google::cloud::webrisk::v1::SearchUrisRequest const& request) = 0;

  virtual StatusOr<google::cloud::webrisk::v1::SearchHashesResponse>
  SearchHashes(
      grpc::ClientContext& context, Options const& options,
      google::cloud::webrisk::v1::SearchHashesRequest const& request) = 0;

  virtual StatusOr<google::cloud::webrisk::v1::Submission> CreateSubmission(
      grpc::ClientContext& context, Options const& options,
      google::cloud::webrisk::v1::CreateSubmissionRequest const& request) = 0;

  virtual future<StatusOr<google::longrunning::Operation>> AsyncSubmitUri(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::webrisk::v1::SubmitUriRequest const& request) = 0;

  virtual StatusOr<google::longrunning::Operation> SubmitUri(
      grpc::ClientContext& context, Options options,
      google::cloud::webrisk::v1::SubmitUriRequest const& request) = 0;

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

class DefaultWebRiskServiceStub : public WebRiskServiceStub {
 public:
  DefaultWebRiskServiceStub(
      std::unique_ptr<google::cloud::webrisk::v1::WebRiskService::StubInterface>
          grpc_stub,
      std::unique_ptr<google::longrunning::Operations::StubInterface>
          operations_stub,
      std::unique_ptr<google::longrunning::Operations::StubInterface>
          operations)
      : grpc_stub_(std::move(grpc_stub)),
        operations_stub_(std::move(operations_stub)),
        operations_(std::move(operations)) {}

  StatusOr<google::cloud::webrisk::v1::ComputeThreatListDiffResponse>
  ComputeThreatListDiff(
      grpc::ClientContext& context, Options const& options,
      google::cloud::webrisk::v1::ComputeThreatListDiffRequest const& request)
      override;

  StatusOr<google::cloud::webrisk::v1::SearchUrisResponse> SearchUris(
      grpc::ClientContext& context, Options const& options,
      google::cloud::webrisk::v1::SearchUrisRequest const& request) override;

  StatusOr<google::cloud::webrisk::v1::SearchHashesResponse> SearchHashes(
      grpc::ClientContext& context, Options const& options,
      google::cloud::webrisk::v1::SearchHashesRequest const& request) override;

  StatusOr<google::cloud::webrisk::v1::Submission> CreateSubmission(
      grpc::ClientContext& context, Options const& options,
      google::cloud::webrisk::v1::CreateSubmissionRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncSubmitUri(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::webrisk::v1::SubmitUriRequest const& request) override;

  StatusOr<google::longrunning::Operation> SubmitUri(
      grpc::ClientContext& context, Options options,
      google::cloud::webrisk::v1::SubmitUriRequest const& request) override;

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
  std::unique_ptr<google::cloud::webrisk::v1::WebRiskService::StubInterface>
      grpc_stub_;
  std::unique_ptr<google::longrunning::Operations::StubInterface>
      operations_stub_;
  std::unique_ptr<google::longrunning::Operations::StubInterface> operations_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace webrisk_v1_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_WEBRISK_V1_INTERNAL_WEB_RISK_STUB_H
