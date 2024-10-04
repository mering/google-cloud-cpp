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
// source: google/cloud/translate/v3/translation_service.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_TRANSLATE_V3_INTERNAL_TRANSLATION_METADATA_DECORATOR_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_TRANSLATE_V3_INTERNAL_TRANSLATION_METADATA_DECORATOR_H

#include "google/cloud/translate/v3/internal/translation_stub.h"
#include "google/cloud/options.h"
#include "google/cloud/version.h"
#include <google/longrunning/operations.grpc.pb.h>
#include <map>
#include <memory>
#include <string>

namespace google {
namespace cloud {
namespace translate_v3_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class TranslationServiceMetadata : public TranslationServiceStub {
 public:
  ~TranslationServiceMetadata() override = default;
  TranslationServiceMetadata(
      std::shared_ptr<TranslationServiceStub> child,
      std::multimap<std::string, std::string> fixed_metadata,
      std::string api_client_header = "");

  StatusOr<google::cloud::translation::v3::TranslateTextResponse> TranslateText(
      grpc::ClientContext& context, Options const& options,
      google::cloud::translation::v3::TranslateTextRequest const& request)
      override;

  StatusOr<google::cloud::translation::v3::RomanizeTextResponse> RomanizeText(
      grpc::ClientContext& context, Options const& options,
      google::cloud::translation::v3::RomanizeTextRequest const& request)
      override;

  StatusOr<google::cloud::translation::v3::DetectLanguageResponse>
  DetectLanguage(grpc::ClientContext& context, Options const& options,
                 google::cloud::translation::v3::DetectLanguageRequest const&
                     request) override;

  StatusOr<google::cloud::translation::v3::SupportedLanguages>
  GetSupportedLanguages(
      grpc::ClientContext& context, Options const& options,
      google::cloud::translation::v3::GetSupportedLanguagesRequest const&
          request) override;

  StatusOr<google::cloud::translation::v3::TranslateDocumentResponse>
  TranslateDocument(
      grpc::ClientContext& context, Options const& options,
      google::cloud::translation::v3::TranslateDocumentRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncBatchTranslateText(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::translation::v3::BatchTranslateTextRequest const& request)
      override;

  StatusOr<google::longrunning::Operation> BatchTranslateText(
      grpc::ClientContext& context, Options options,
      google::cloud::translation::v3::BatchTranslateTextRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncBatchTranslateDocument(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::translation::v3::BatchTranslateDocumentRequest const&
          request) override;

  StatusOr<google::longrunning::Operation> BatchTranslateDocument(
      grpc::ClientContext& context, Options options,
      google::cloud::translation::v3::BatchTranslateDocumentRequest const&
          request) override;

  future<StatusOr<google::longrunning::Operation>> AsyncCreateGlossary(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::translation::v3::CreateGlossaryRequest const& request)
      override;

  StatusOr<google::longrunning::Operation> CreateGlossary(
      grpc::ClientContext& context, Options options,
      google::cloud::translation::v3::CreateGlossaryRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncUpdateGlossary(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::translation::v3::UpdateGlossaryRequest const& request)
      override;

  StatusOr<google::longrunning::Operation> UpdateGlossary(
      grpc::ClientContext& context, Options options,
      google::cloud::translation::v3::UpdateGlossaryRequest const& request)
      override;

  StatusOr<google::cloud::translation::v3::ListGlossariesResponse>
  ListGlossaries(grpc::ClientContext& context, Options const& options,
                 google::cloud::translation::v3::ListGlossariesRequest const&
                     request) override;

  StatusOr<google::cloud::translation::v3::Glossary> GetGlossary(
      grpc::ClientContext& context, Options const& options,
      google::cloud::translation::v3::GetGlossaryRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncDeleteGlossary(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::translation::v3::DeleteGlossaryRequest const& request)
      override;

  StatusOr<google::longrunning::Operation> DeleteGlossary(
      grpc::ClientContext& context, Options options,
      google::cloud::translation::v3::DeleteGlossaryRequest const& request)
      override;

  StatusOr<google::cloud::translation::v3::GlossaryEntry> GetGlossaryEntry(
      grpc::ClientContext& context, Options const& options,
      google::cloud::translation::v3::GetGlossaryEntryRequest const& request)
      override;

  StatusOr<google::cloud::translation::v3::ListGlossaryEntriesResponse>
  ListGlossaryEntries(
      grpc::ClientContext& context, Options const& options,
      google::cloud::translation::v3::ListGlossaryEntriesRequest const& request)
      override;

  StatusOr<google::cloud::translation::v3::GlossaryEntry> CreateGlossaryEntry(
      grpc::ClientContext& context, Options const& options,
      google::cloud::translation::v3::CreateGlossaryEntryRequest const& request)
      override;

  StatusOr<google::cloud::translation::v3::GlossaryEntry> UpdateGlossaryEntry(
      grpc::ClientContext& context, Options const& options,
      google::cloud::translation::v3::UpdateGlossaryEntryRequest const& request)
      override;

  Status DeleteGlossaryEntry(
      grpc::ClientContext& context, Options const& options,
      google::cloud::translation::v3::DeleteGlossaryEntryRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncCreateDataset(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::translation::v3::CreateDatasetRequest const& request)
      override;

  StatusOr<google::longrunning::Operation> CreateDataset(
      grpc::ClientContext& context, Options options,
      google::cloud::translation::v3::CreateDatasetRequest const& request)
      override;

  StatusOr<google::cloud::translation::v3::Dataset> GetDataset(
      grpc::ClientContext& context, Options const& options,
      google::cloud::translation::v3::GetDatasetRequest const& request)
      override;

  StatusOr<google::cloud::translation::v3::ListDatasetsResponse> ListDatasets(
      grpc::ClientContext& context, Options const& options,
      google::cloud::translation::v3::ListDatasetsRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncDeleteDataset(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::translation::v3::DeleteDatasetRequest const& request)
      override;

  StatusOr<google::longrunning::Operation> DeleteDataset(
      grpc::ClientContext& context, Options options,
      google::cloud::translation::v3::DeleteDatasetRequest const& request)
      override;

  StatusOr<google::cloud::translation::v3::AdaptiveMtDataset>
  CreateAdaptiveMtDataset(
      grpc::ClientContext& context, Options const& options,
      google::cloud::translation::v3::CreateAdaptiveMtDatasetRequest const&
          request) override;

  Status DeleteAdaptiveMtDataset(
      grpc::ClientContext& context, Options const& options,
      google::cloud::translation::v3::DeleteAdaptiveMtDatasetRequest const&
          request) override;

  StatusOr<google::cloud::translation::v3::AdaptiveMtDataset>
  GetAdaptiveMtDataset(
      grpc::ClientContext& context, Options const& options,
      google::cloud::translation::v3::GetAdaptiveMtDatasetRequest const&
          request) override;

  StatusOr<google::cloud::translation::v3::ListAdaptiveMtDatasetsResponse>
  ListAdaptiveMtDatasets(
      grpc::ClientContext& context, Options const& options,
      google::cloud::translation::v3::ListAdaptiveMtDatasetsRequest const&
          request) override;

  StatusOr<google::cloud::translation::v3::AdaptiveMtTranslateResponse>
  AdaptiveMtTranslate(
      grpc::ClientContext& context, Options const& options,
      google::cloud::translation::v3::AdaptiveMtTranslateRequest const& request)
      override;

  StatusOr<google::cloud::translation::v3::AdaptiveMtFile> GetAdaptiveMtFile(
      grpc::ClientContext& context, Options const& options,
      google::cloud::translation::v3::GetAdaptiveMtFileRequest const& request)
      override;

  Status DeleteAdaptiveMtFile(
      grpc::ClientContext& context, Options const& options,
      google::cloud::translation::v3::DeleteAdaptiveMtFileRequest const&
          request) override;

  StatusOr<google::cloud::translation::v3::ImportAdaptiveMtFileResponse>
  ImportAdaptiveMtFile(
      grpc::ClientContext& context, Options const& options,
      google::cloud::translation::v3::ImportAdaptiveMtFileRequest const&
          request) override;

  StatusOr<google::cloud::translation::v3::ListAdaptiveMtFilesResponse>
  ListAdaptiveMtFiles(
      grpc::ClientContext& context, Options const& options,
      google::cloud::translation::v3::ListAdaptiveMtFilesRequest const& request)
      override;

  StatusOr<google::cloud::translation::v3::ListAdaptiveMtSentencesResponse>
  ListAdaptiveMtSentences(
      grpc::ClientContext& context, Options const& options,
      google::cloud::translation::v3::ListAdaptiveMtSentencesRequest const&
          request) override;

  future<StatusOr<google::longrunning::Operation>> AsyncImportData(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::translation::v3::ImportDataRequest const& request)
      override;

  StatusOr<google::longrunning::Operation> ImportData(
      grpc::ClientContext& context, Options options,
      google::cloud::translation::v3::ImportDataRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncExportData(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::translation::v3::ExportDataRequest const& request)
      override;

  StatusOr<google::longrunning::Operation> ExportData(
      grpc::ClientContext& context, Options options,
      google::cloud::translation::v3::ExportDataRequest const& request)
      override;

  StatusOr<google::cloud::translation::v3::ListExamplesResponse> ListExamples(
      grpc::ClientContext& context, Options const& options,
      google::cloud::translation::v3::ListExamplesRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncCreateModel(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::translation::v3::CreateModelRequest const& request)
      override;

  StatusOr<google::longrunning::Operation> CreateModel(
      grpc::ClientContext& context, Options options,
      google::cloud::translation::v3::CreateModelRequest const& request)
      override;

  StatusOr<google::cloud::translation::v3::ListModelsResponse> ListModels(
      grpc::ClientContext& context, Options const& options,
      google::cloud::translation::v3::ListModelsRequest const& request)
      override;

  StatusOr<google::cloud::translation::v3::Model> GetModel(
      grpc::ClientContext& context, Options const& options,
      google::cloud::translation::v3::GetModelRequest const& request) override;

  future<StatusOr<google::longrunning::Operation>> AsyncDeleteModel(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::translation::v3::DeleteModelRequest const& request)
      override;

  StatusOr<google::longrunning::Operation> DeleteModel(
      grpc::ClientContext& context, Options options,
      google::cloud::translation::v3::DeleteModelRequest const& request)
      override;

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

  Status DeleteOperation(
      grpc::ClientContext& context, Options const& options,
      google::longrunning::DeleteOperationRequest const& request) override;

  Status CancelOperation(
      grpc::ClientContext& context, Options const& options,
      google::longrunning::CancelOperationRequest const& request) override;

  StatusOr<google::longrunning::Operation> WaitOperation(
      grpc::ClientContext& context, Options const& options,
      google::longrunning::WaitOperationRequest const& request) override;

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
  void SetMetadata(grpc::ClientContext& context, Options const& options,
                   std::string const& request_params);
  void SetMetadata(grpc::ClientContext& context, Options const& options);

  std::shared_ptr<TranslationServiceStub> child_;
  std::multimap<std::string, std::string> fixed_metadata_;
  std::string api_client_header_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace translate_v3_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_TRANSLATE_V3_INTERNAL_TRANSLATION_METADATA_DECORATOR_H
