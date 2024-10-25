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
// source: google/cloud/documentai/v1/document_processor_service.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DOCUMENTAI_V1_INTERNAL_DOCUMENT_PROCESSOR_STUB_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DOCUMENTAI_V1_INTERNAL_DOCUMENT_PROCESSOR_STUB_H

#include "google/cloud/documentai/v1/document_processor_service.grpc.pb.h"
#include "google/cloud/location/locations.grpc.pb.h"
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
namespace documentai_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class DocumentProcessorServiceStub {
 public:
  virtual ~DocumentProcessorServiceStub() = 0;

  virtual StatusOr<google::cloud::documentai::v1::ProcessResponse>
  ProcessDocument(
      grpc::ClientContext& context, Options const& options,
      google::cloud::documentai::v1::ProcessRequest const& request) = 0;

  virtual future<StatusOr<google::longrunning::Operation>>
  AsyncBatchProcessDocuments(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::documentai::v1::BatchProcessRequest const& request) = 0;

  virtual StatusOr<google::longrunning::Operation> BatchProcessDocuments(
      grpc::ClientContext& context, Options options,
      google::cloud::documentai::v1::BatchProcessRequest const& request) = 0;

  virtual StatusOr<google::cloud::documentai::v1::FetchProcessorTypesResponse>
  FetchProcessorTypes(
      grpc::ClientContext& context, Options const& options,
      google::cloud::documentai::v1::FetchProcessorTypesRequest const&
          request) = 0;

  virtual StatusOr<google::cloud::documentai::v1::ListProcessorTypesResponse>
  ListProcessorTypes(
      grpc::ClientContext& context, Options const& options,
      google::cloud::documentai::v1::ListProcessorTypesRequest const&
          request) = 0;

  virtual StatusOr<google::cloud::documentai::v1::ProcessorType>
  GetProcessorType(grpc::ClientContext& context, Options const& options,
                   google::cloud::documentai::v1::GetProcessorTypeRequest const&
                       request) = 0;

  virtual StatusOr<google::cloud::documentai::v1::ListProcessorsResponse>
  ListProcessors(
      grpc::ClientContext& context, Options const& options,
      google::cloud::documentai::v1::ListProcessorsRequest const& request) = 0;

  virtual StatusOr<google::cloud::documentai::v1::Processor> GetProcessor(
      grpc::ClientContext& context, Options const& options,
      google::cloud::documentai::v1::GetProcessorRequest const& request) = 0;

  virtual future<StatusOr<google::longrunning::Operation>>
  AsyncTrainProcessorVersion(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::documentai::v1::TrainProcessorVersionRequest const&
          request) = 0;

  virtual StatusOr<google::longrunning::Operation> TrainProcessorVersion(
      grpc::ClientContext& context, Options options,
      google::cloud::documentai::v1::TrainProcessorVersionRequest const&
          request) = 0;

  virtual StatusOr<google::cloud::documentai::v1::ProcessorVersion>
  GetProcessorVersion(
      grpc::ClientContext& context, Options const& options,
      google::cloud::documentai::v1::GetProcessorVersionRequest const&
          request) = 0;

  virtual StatusOr<google::cloud::documentai::v1::ListProcessorVersionsResponse>
  ListProcessorVersions(
      grpc::ClientContext& context, Options const& options,
      google::cloud::documentai::v1::ListProcessorVersionsRequest const&
          request) = 0;

  virtual future<StatusOr<google::longrunning::Operation>>
  AsyncDeleteProcessorVersion(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::documentai::v1::DeleteProcessorVersionRequest const&
          request) = 0;

  virtual StatusOr<google::longrunning::Operation> DeleteProcessorVersion(
      grpc::ClientContext& context, Options options,
      google::cloud::documentai::v1::DeleteProcessorVersionRequest const&
          request) = 0;

  virtual future<StatusOr<google::longrunning::Operation>>
  AsyncDeployProcessorVersion(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::documentai::v1::DeployProcessorVersionRequest const&
          request) = 0;

  virtual StatusOr<google::longrunning::Operation> DeployProcessorVersion(
      grpc::ClientContext& context, Options options,
      google::cloud::documentai::v1::DeployProcessorVersionRequest const&
          request) = 0;

  virtual future<StatusOr<google::longrunning::Operation>>
  AsyncUndeployProcessorVersion(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::documentai::v1::UndeployProcessorVersionRequest const&
          request) = 0;

  virtual StatusOr<google::longrunning::Operation> UndeployProcessorVersion(
      grpc::ClientContext& context, Options options,
      google::cloud::documentai::v1::UndeployProcessorVersionRequest const&
          request) = 0;

  virtual StatusOr<google::cloud::documentai::v1::Processor> CreateProcessor(
      grpc::ClientContext& context, Options const& options,
      google::cloud::documentai::v1::CreateProcessorRequest const& request) = 0;

  virtual future<StatusOr<google::longrunning::Operation>> AsyncDeleteProcessor(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::documentai::v1::DeleteProcessorRequest const& request) = 0;

  virtual StatusOr<google::longrunning::Operation> DeleteProcessor(
      grpc::ClientContext& context, Options options,
      google::cloud::documentai::v1::DeleteProcessorRequest const& request) = 0;

  virtual future<StatusOr<google::longrunning::Operation>> AsyncEnableProcessor(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::documentai::v1::EnableProcessorRequest const& request) = 0;

  virtual StatusOr<google::longrunning::Operation> EnableProcessor(
      grpc::ClientContext& context, Options options,
      google::cloud::documentai::v1::EnableProcessorRequest const& request) = 0;

  virtual future<StatusOr<google::longrunning::Operation>>
  AsyncDisableProcessor(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::documentai::v1::DisableProcessorRequest const&
          request) = 0;

  virtual StatusOr<google::longrunning::Operation> DisableProcessor(
      grpc::ClientContext& context, Options options,
      google::cloud::documentai::v1::DisableProcessorRequest const&
          request) = 0;

  virtual future<StatusOr<google::longrunning::Operation>>
  AsyncSetDefaultProcessorVersion(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::documentai::v1::SetDefaultProcessorVersionRequest const&
          request) = 0;

  virtual StatusOr<google::longrunning::Operation> SetDefaultProcessorVersion(
      grpc::ClientContext& context, Options options,
      google::cloud::documentai::v1::SetDefaultProcessorVersionRequest const&
          request) = 0;

  virtual future<StatusOr<google::longrunning::Operation>> AsyncReviewDocument(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::documentai::v1::ReviewDocumentRequest const& request) = 0;

  virtual StatusOr<google::longrunning::Operation> ReviewDocument(
      grpc::ClientContext& context, Options options,
      google::cloud::documentai::v1::ReviewDocumentRequest const& request) = 0;

  virtual future<StatusOr<google::longrunning::Operation>>
  AsyncEvaluateProcessorVersion(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::documentai::v1::EvaluateProcessorVersionRequest const&
          request) = 0;

  virtual StatusOr<google::longrunning::Operation> EvaluateProcessorVersion(
      grpc::ClientContext& context, Options options,
      google::cloud::documentai::v1::EvaluateProcessorVersionRequest const&
          request) = 0;

  virtual StatusOr<google::cloud::documentai::v1::Evaluation> GetEvaluation(
      grpc::ClientContext& context, Options const& options,
      google::cloud::documentai::v1::GetEvaluationRequest const& request) = 0;

  virtual StatusOr<google::cloud::documentai::v1::ListEvaluationsResponse>
  ListEvaluations(
      grpc::ClientContext& context, Options const& options,
      google::cloud::documentai::v1::ListEvaluationsRequest const& request) = 0;

  virtual StatusOr<google::cloud::location::ListLocationsResponse>
  ListLocations(
      grpc::ClientContext& context, Options const& options,
      google::cloud::location::ListLocationsRequest const& request) = 0;

  virtual StatusOr<google::cloud::location::Location> GetLocation(
      grpc::ClientContext& context, Options const& options,
      google::cloud::location::GetLocationRequest const& request) = 0;

  virtual StatusOr<google::longrunning::ListOperationsResponse> ListOperations(
      grpc::ClientContext& context, Options const& options,
      google::longrunning::ListOperationsRequest const& request) = 0;

  virtual StatusOr<google::longrunning::Operation> GetOperation(
      grpc::ClientContext& context, Options const& options,
      google::longrunning::GetOperationRequest const& request) = 0;

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

class DefaultDocumentProcessorServiceStub
    : public DocumentProcessorServiceStub {
 public:
  DefaultDocumentProcessorServiceStub(
      std::unique_ptr<google::cloud::documentai::v1::DocumentProcessorService::
                          StubInterface>
          grpc_stub,
      std::unique_ptr<google::longrunning::Operations::StubInterface>
          operations_stub,
      std::unique_ptr<google::cloud::location::Locations::StubInterface>
          locations_stub,
      std::unique_ptr<google::longrunning::Operations::StubInterface>
          operations)
      : grpc_stub_(std::move(grpc_stub)),
        operations_stub_(std::move(operations_stub)),
        locations_stub_(std::move(locations_stub)),
        operations_(std::move(operations)) {}

  StatusOr<google::cloud::documentai::v1::ProcessResponse> ProcessDocument(
      grpc::ClientContext& context, Options const& options,
      google::cloud::documentai::v1::ProcessRequest const& request) override;

  future<StatusOr<google::longrunning::Operation>> AsyncBatchProcessDocuments(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::documentai::v1::BatchProcessRequest const& request)
      override;

  StatusOr<google::longrunning::Operation> BatchProcessDocuments(
      grpc::ClientContext& context, Options options,
      google::cloud::documentai::v1::BatchProcessRequest const& request)
      override;

  StatusOr<google::cloud::documentai::v1::FetchProcessorTypesResponse>
  FetchProcessorTypes(
      grpc::ClientContext& context, Options const& options,
      google::cloud::documentai::v1::FetchProcessorTypesRequest const& request)
      override;

  StatusOr<google::cloud::documentai::v1::ListProcessorTypesResponse>
  ListProcessorTypes(
      grpc::ClientContext& context, Options const& options,
      google::cloud::documentai::v1::ListProcessorTypesRequest const& request)
      override;

  StatusOr<google::cloud::documentai::v1::ProcessorType> GetProcessorType(
      grpc::ClientContext& context, Options const& options,
      google::cloud::documentai::v1::GetProcessorTypeRequest const& request)
      override;

  StatusOr<google::cloud::documentai::v1::ListProcessorsResponse>
  ListProcessors(grpc::ClientContext& context, Options const& options,
                 google::cloud::documentai::v1::ListProcessorsRequest const&
                     request) override;

  StatusOr<google::cloud::documentai::v1::Processor> GetProcessor(
      grpc::ClientContext& context, Options const& options,
      google::cloud::documentai::v1::GetProcessorRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncTrainProcessorVersion(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::documentai::v1::TrainProcessorVersionRequest const&
          request) override;

  StatusOr<google::longrunning::Operation> TrainProcessorVersion(
      grpc::ClientContext& context, Options options,
      google::cloud::documentai::v1::TrainProcessorVersionRequest const&
          request) override;

  StatusOr<google::cloud::documentai::v1::ProcessorVersion> GetProcessorVersion(
      grpc::ClientContext& context, Options const& options,
      google::cloud::documentai::v1::GetProcessorVersionRequest const& request)
      override;

  StatusOr<google::cloud::documentai::v1::ListProcessorVersionsResponse>
  ListProcessorVersions(
      grpc::ClientContext& context, Options const& options,
      google::cloud::documentai::v1::ListProcessorVersionsRequest const&
          request) override;

  future<StatusOr<google::longrunning::Operation>> AsyncDeleteProcessorVersion(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::documentai::v1::DeleteProcessorVersionRequest const&
          request) override;

  StatusOr<google::longrunning::Operation> DeleteProcessorVersion(
      grpc::ClientContext& context, Options options,
      google::cloud::documentai::v1::DeleteProcessorVersionRequest const&
          request) override;

  future<StatusOr<google::longrunning::Operation>> AsyncDeployProcessorVersion(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::documentai::v1::DeployProcessorVersionRequest const&
          request) override;

  StatusOr<google::longrunning::Operation> DeployProcessorVersion(
      grpc::ClientContext& context, Options options,
      google::cloud::documentai::v1::DeployProcessorVersionRequest const&
          request) override;

  future<StatusOr<google::longrunning::Operation>>
  AsyncUndeployProcessorVersion(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::documentai::v1::UndeployProcessorVersionRequest const&
          request) override;

  StatusOr<google::longrunning::Operation> UndeployProcessorVersion(
      grpc::ClientContext& context, Options options,
      google::cloud::documentai::v1::UndeployProcessorVersionRequest const&
          request) override;

  StatusOr<google::cloud::documentai::v1::Processor> CreateProcessor(
      grpc::ClientContext& context, Options const& options,
      google::cloud::documentai::v1::CreateProcessorRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncDeleteProcessor(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::documentai::v1::DeleteProcessorRequest const& request)
      override;

  StatusOr<google::longrunning::Operation> DeleteProcessor(
      grpc::ClientContext& context, Options options,
      google::cloud::documentai::v1::DeleteProcessorRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncEnableProcessor(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::documentai::v1::EnableProcessorRequest const& request)
      override;

  StatusOr<google::longrunning::Operation> EnableProcessor(
      grpc::ClientContext& context, Options options,
      google::cloud::documentai::v1::EnableProcessorRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncDisableProcessor(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::documentai::v1::DisableProcessorRequest const& request)
      override;

  StatusOr<google::longrunning::Operation> DisableProcessor(
      grpc::ClientContext& context, Options options,
      google::cloud::documentai::v1::DisableProcessorRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>>
  AsyncSetDefaultProcessorVersion(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::documentai::v1::SetDefaultProcessorVersionRequest const&
          request) override;

  StatusOr<google::longrunning::Operation> SetDefaultProcessorVersion(
      grpc::ClientContext& context, Options options,
      google::cloud::documentai::v1::SetDefaultProcessorVersionRequest const&
          request) override;

  future<StatusOr<google::longrunning::Operation>> AsyncReviewDocument(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::documentai::v1::ReviewDocumentRequest const& request)
      override;

  StatusOr<google::longrunning::Operation> ReviewDocument(
      grpc::ClientContext& context, Options options,
      google::cloud::documentai::v1::ReviewDocumentRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>>
  AsyncEvaluateProcessorVersion(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::documentai::v1::EvaluateProcessorVersionRequest const&
          request) override;

  StatusOr<google::longrunning::Operation> EvaluateProcessorVersion(
      grpc::ClientContext& context, Options options,
      google::cloud::documentai::v1::EvaluateProcessorVersionRequest const&
          request) override;

  StatusOr<google::cloud::documentai::v1::Evaluation> GetEvaluation(
      grpc::ClientContext& context, Options const& options,
      google::cloud::documentai::v1::GetEvaluationRequest const& request)
      override;

  StatusOr<google::cloud::documentai::v1::ListEvaluationsResponse>
  ListEvaluations(grpc::ClientContext& context, Options const& options,
                  google::cloud::documentai::v1::ListEvaluationsRequest const&
                      request) override;

  StatusOr<google::cloud::location::ListLocationsResponse> ListLocations(
      grpc::ClientContext& context, Options const& options,
      google::cloud::location::ListLocationsRequest const& request) override;

  StatusOr<google::cloud::location::Location> GetLocation(
      grpc::ClientContext& context, Options const& options,
      google::cloud::location::GetLocationRequest const& request) override;

  StatusOr<google::longrunning::ListOperationsResponse> ListOperations(
      grpc::ClientContext& context, Options const& options,
      google::longrunning::ListOperationsRequest const& request) override;

  StatusOr<google::longrunning::Operation> GetOperation(
      grpc::ClientContext& context, Options const& options,
      google::longrunning::GetOperationRequest const& request) override;

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
  std::unique_ptr<
      google::cloud::documentai::v1::DocumentProcessorService::StubInterface>
      grpc_stub_;
  std::unique_ptr<google::longrunning::Operations::StubInterface>
      operations_stub_;
  std::unique_ptr<google::cloud::location::Locations::StubInterface>
      locations_stub_;
  std::unique_ptr<google::longrunning::Operations::StubInterface> operations_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace documentai_v1_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DOCUMENTAI_V1_INTERNAL_DOCUMENT_PROCESSOR_STUB_H
