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

#include "google/cloud/translate/v3/internal/translation_metadata_decorator.h"
#include "google/cloud/grpc_options.h"
#include "google/cloud/internal/absl_str_cat_quiet.h"
#include "google/cloud/internal/api_client_header.h"
#include "google/cloud/internal/url_encode.h"
#include "google/cloud/status_or.h"
#include <google/cloud/translate/v3/translation_service.grpc.pb.h>
#include <memory>
#include <string>
#include <utility>
#include <vector>

namespace google {
namespace cloud {
namespace translate_v3_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

TranslationServiceMetadata::TranslationServiceMetadata(
    std::shared_ptr<TranslationServiceStub> child,
    std::multimap<std::string, std::string> fixed_metadata,
    std::string api_client_header)
    : child_(std::move(child)),
      fixed_metadata_(std::move(fixed_metadata)),
      api_client_header_(
          api_client_header.empty()
              ? google::cloud::internal::GeneratedLibClientHeader()
              : std::move(api_client_header)) {}

StatusOr<google::cloud::translation::v3::TranslateTextResponse>
TranslationServiceMetadata::TranslateText(
    grpc::ClientContext& context, Options const& options,
    google::cloud::translation::v3::TranslateTextRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->TranslateText(context, options, request);
}

StatusOr<google::cloud::translation::v3::RomanizeTextResponse>
TranslationServiceMetadata::RomanizeText(
    grpc::ClientContext& context, Options const& options,
    google::cloud::translation::v3::RomanizeTextRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->RomanizeText(context, options, request);
}

StatusOr<google::cloud::translation::v3::DetectLanguageResponse>
TranslationServiceMetadata::DetectLanguage(
    grpc::ClientContext& context, Options const& options,
    google::cloud::translation::v3::DetectLanguageRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->DetectLanguage(context, options, request);
}

StatusOr<google::cloud::translation::v3::SupportedLanguages>
TranslationServiceMetadata::GetSupportedLanguages(
    grpc::ClientContext& context, Options const& options,
    google::cloud::translation::v3::GetSupportedLanguagesRequest const&
        request) {
  SetMetadata(context, options,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->GetSupportedLanguages(context, options, request);
}

StatusOr<google::cloud::translation::v3::TranslateDocumentResponse>
TranslationServiceMetadata::TranslateDocument(
    grpc::ClientContext& context, Options const& options,
    google::cloud::translation::v3::TranslateDocumentRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->TranslateDocument(context, options, request);
}

future<StatusOr<google::longrunning::Operation>>
TranslationServiceMetadata::AsyncBatchTranslateText(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::translation::v3::BatchTranslateTextRequest const& request) {
  SetMetadata(*context, *options,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->AsyncBatchTranslateText(cq, std::move(context),
                                         std::move(options), request);
}

StatusOr<google::longrunning::Operation>
TranslationServiceMetadata::BatchTranslateText(
    grpc::ClientContext& context, Options options,
    google::cloud::translation::v3::BatchTranslateTextRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->BatchTranslateText(context, options, request);
}

future<StatusOr<google::longrunning::Operation>>
TranslationServiceMetadata::AsyncBatchTranslateDocument(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::translation::v3::BatchTranslateDocumentRequest const&
        request) {
  SetMetadata(*context, *options,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->AsyncBatchTranslateDocument(cq, std::move(context),
                                             std::move(options), request);
}

StatusOr<google::longrunning::Operation>
TranslationServiceMetadata::BatchTranslateDocument(
    grpc::ClientContext& context, Options options,
    google::cloud::translation::v3::BatchTranslateDocumentRequest const&
        request) {
  SetMetadata(context, options,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->BatchTranslateDocument(context, options, request);
}

future<StatusOr<google::longrunning::Operation>>
TranslationServiceMetadata::AsyncCreateGlossary(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::translation::v3::CreateGlossaryRequest const& request) {
  SetMetadata(*context, *options,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->AsyncCreateGlossary(cq, std::move(context), std::move(options),
                                     request);
}

StatusOr<google::longrunning::Operation>
TranslationServiceMetadata::CreateGlossary(
    grpc::ClientContext& context, Options options,
    google::cloud::translation::v3::CreateGlossaryRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->CreateGlossary(context, options, request);
}

future<StatusOr<google::longrunning::Operation>>
TranslationServiceMetadata::AsyncUpdateGlossary(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::translation::v3::UpdateGlossaryRequest const& request) {
  SetMetadata(*context, *options,
              absl::StrCat("glossary.name=",
                           internal::UrlEncode(request.glossary().name())));
  return child_->AsyncUpdateGlossary(cq, std::move(context), std::move(options),
                                     request);
}

StatusOr<google::longrunning::Operation>
TranslationServiceMetadata::UpdateGlossary(
    grpc::ClientContext& context, Options options,
    google::cloud::translation::v3::UpdateGlossaryRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("glossary.name=",
                           internal::UrlEncode(request.glossary().name())));
  return child_->UpdateGlossary(context, options, request);
}

StatusOr<google::cloud::translation::v3::ListGlossariesResponse>
TranslationServiceMetadata::ListGlossaries(
    grpc::ClientContext& context, Options const& options,
    google::cloud::translation::v3::ListGlossariesRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->ListGlossaries(context, options, request);
}

StatusOr<google::cloud::translation::v3::Glossary>
TranslationServiceMetadata::GetGlossary(
    grpc::ClientContext& context, Options const& options,
    google::cloud::translation::v3::GetGlossaryRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->GetGlossary(context, options, request);
}

future<StatusOr<google::longrunning::Operation>>
TranslationServiceMetadata::AsyncDeleteGlossary(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::translation::v3::DeleteGlossaryRequest const& request) {
  SetMetadata(*context, *options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->AsyncDeleteGlossary(cq, std::move(context), std::move(options),
                                     request);
}

StatusOr<google::longrunning::Operation>
TranslationServiceMetadata::DeleteGlossary(
    grpc::ClientContext& context, Options options,
    google::cloud::translation::v3::DeleteGlossaryRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->DeleteGlossary(context, options, request);
}

StatusOr<google::cloud::translation::v3::GlossaryEntry>
TranslationServiceMetadata::GetGlossaryEntry(
    grpc::ClientContext& context, Options const& options,
    google::cloud::translation::v3::GetGlossaryEntryRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->GetGlossaryEntry(context, options, request);
}

StatusOr<google::cloud::translation::v3::ListGlossaryEntriesResponse>
TranslationServiceMetadata::ListGlossaryEntries(
    grpc::ClientContext& context, Options const& options,
    google::cloud::translation::v3::ListGlossaryEntriesRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->ListGlossaryEntries(context, options, request);
}

StatusOr<google::cloud::translation::v3::GlossaryEntry>
TranslationServiceMetadata::CreateGlossaryEntry(
    grpc::ClientContext& context, Options const& options,
    google::cloud::translation::v3::CreateGlossaryEntryRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->CreateGlossaryEntry(context, options, request);
}

StatusOr<google::cloud::translation::v3::GlossaryEntry>
TranslationServiceMetadata::UpdateGlossaryEntry(
    grpc::ClientContext& context, Options const& options,
    google::cloud::translation::v3::UpdateGlossaryEntryRequest const& request) {
  SetMetadata(
      context, options,
      absl::StrCat("glossary_entry.name=",
                   internal::UrlEncode(request.glossary_entry().name())));
  return child_->UpdateGlossaryEntry(context, options, request);
}

Status TranslationServiceMetadata::DeleteGlossaryEntry(
    grpc::ClientContext& context, Options const& options,
    google::cloud::translation::v3::DeleteGlossaryEntryRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->DeleteGlossaryEntry(context, options, request);
}

future<StatusOr<google::longrunning::Operation>>
TranslationServiceMetadata::AsyncCreateDataset(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::translation::v3::CreateDatasetRequest const& request) {
  SetMetadata(*context, *options,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->AsyncCreateDataset(cq, std::move(context), std::move(options),
                                    request);
}

StatusOr<google::longrunning::Operation>
TranslationServiceMetadata::CreateDataset(
    grpc::ClientContext& context, Options options,
    google::cloud::translation::v3::CreateDatasetRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->CreateDataset(context, options, request);
}

StatusOr<google::cloud::translation::v3::Dataset>
TranslationServiceMetadata::GetDataset(
    grpc::ClientContext& context, Options const& options,
    google::cloud::translation::v3::GetDatasetRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->GetDataset(context, options, request);
}

StatusOr<google::cloud::translation::v3::ListDatasetsResponse>
TranslationServiceMetadata::ListDatasets(
    grpc::ClientContext& context, Options const& options,
    google::cloud::translation::v3::ListDatasetsRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->ListDatasets(context, options, request);
}

future<StatusOr<google::longrunning::Operation>>
TranslationServiceMetadata::AsyncDeleteDataset(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::translation::v3::DeleteDatasetRequest const& request) {
  SetMetadata(*context, *options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->AsyncDeleteDataset(cq, std::move(context), std::move(options),
                                    request);
}

StatusOr<google::longrunning::Operation>
TranslationServiceMetadata::DeleteDataset(
    grpc::ClientContext& context, Options options,
    google::cloud::translation::v3::DeleteDatasetRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->DeleteDataset(context, options, request);
}

StatusOr<google::cloud::translation::v3::AdaptiveMtDataset>
TranslationServiceMetadata::CreateAdaptiveMtDataset(
    grpc::ClientContext& context, Options const& options,
    google::cloud::translation::v3::CreateAdaptiveMtDatasetRequest const&
        request) {
  SetMetadata(context, options,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->CreateAdaptiveMtDataset(context, options, request);
}

Status TranslationServiceMetadata::DeleteAdaptiveMtDataset(
    grpc::ClientContext& context, Options const& options,
    google::cloud::translation::v3::DeleteAdaptiveMtDatasetRequest const&
        request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->DeleteAdaptiveMtDataset(context, options, request);
}

StatusOr<google::cloud::translation::v3::AdaptiveMtDataset>
TranslationServiceMetadata::GetAdaptiveMtDataset(
    grpc::ClientContext& context, Options const& options,
    google::cloud::translation::v3::GetAdaptiveMtDatasetRequest const&
        request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->GetAdaptiveMtDataset(context, options, request);
}

StatusOr<google::cloud::translation::v3::ListAdaptiveMtDatasetsResponse>
TranslationServiceMetadata::ListAdaptiveMtDatasets(
    grpc::ClientContext& context, Options const& options,
    google::cloud::translation::v3::ListAdaptiveMtDatasetsRequest const&
        request) {
  SetMetadata(context, options,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->ListAdaptiveMtDatasets(context, options, request);
}

StatusOr<google::cloud::translation::v3::AdaptiveMtTranslateResponse>
TranslationServiceMetadata::AdaptiveMtTranslate(
    grpc::ClientContext& context, Options const& options,
    google::cloud::translation::v3::AdaptiveMtTranslateRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->AdaptiveMtTranslate(context, options, request);
}

StatusOr<google::cloud::translation::v3::AdaptiveMtFile>
TranslationServiceMetadata::GetAdaptiveMtFile(
    grpc::ClientContext& context, Options const& options,
    google::cloud::translation::v3::GetAdaptiveMtFileRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->GetAdaptiveMtFile(context, options, request);
}

Status TranslationServiceMetadata::DeleteAdaptiveMtFile(
    grpc::ClientContext& context, Options const& options,
    google::cloud::translation::v3::DeleteAdaptiveMtFileRequest const&
        request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->DeleteAdaptiveMtFile(context, options, request);
}

StatusOr<google::cloud::translation::v3::ImportAdaptiveMtFileResponse>
TranslationServiceMetadata::ImportAdaptiveMtFile(
    grpc::ClientContext& context, Options const& options,
    google::cloud::translation::v3::ImportAdaptiveMtFileRequest const&
        request) {
  SetMetadata(context, options,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->ImportAdaptiveMtFile(context, options, request);
}

StatusOr<google::cloud::translation::v3::ListAdaptiveMtFilesResponse>
TranslationServiceMetadata::ListAdaptiveMtFiles(
    grpc::ClientContext& context, Options const& options,
    google::cloud::translation::v3::ListAdaptiveMtFilesRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->ListAdaptiveMtFiles(context, options, request);
}

StatusOr<google::cloud::translation::v3::ListAdaptiveMtSentencesResponse>
TranslationServiceMetadata::ListAdaptiveMtSentences(
    grpc::ClientContext& context, Options const& options,
    google::cloud::translation::v3::ListAdaptiveMtSentencesRequest const&
        request) {
  SetMetadata(context, options,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->ListAdaptiveMtSentences(context, options, request);
}

future<StatusOr<google::longrunning::Operation>>
TranslationServiceMetadata::AsyncImportData(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::translation::v3::ImportDataRequest const& request) {
  SetMetadata(*context, *options,
              absl::StrCat("dataset=", internal::UrlEncode(request.dataset())));
  return child_->AsyncImportData(cq, std::move(context), std::move(options),
                                 request);
}

StatusOr<google::longrunning::Operation> TranslationServiceMetadata::ImportData(
    grpc::ClientContext& context, Options options,
    google::cloud::translation::v3::ImportDataRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("dataset=", internal::UrlEncode(request.dataset())));
  return child_->ImportData(context, options, request);
}

future<StatusOr<google::longrunning::Operation>>
TranslationServiceMetadata::AsyncExportData(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::translation::v3::ExportDataRequest const& request) {
  SetMetadata(*context, *options,
              absl::StrCat("dataset=", internal::UrlEncode(request.dataset())));
  return child_->AsyncExportData(cq, std::move(context), std::move(options),
                                 request);
}

StatusOr<google::longrunning::Operation> TranslationServiceMetadata::ExportData(
    grpc::ClientContext& context, Options options,
    google::cloud::translation::v3::ExportDataRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("dataset=", internal::UrlEncode(request.dataset())));
  return child_->ExportData(context, options, request);
}

StatusOr<google::cloud::translation::v3::ListExamplesResponse>
TranslationServiceMetadata::ListExamples(
    grpc::ClientContext& context, Options const& options,
    google::cloud::translation::v3::ListExamplesRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->ListExamples(context, options, request);
}

future<StatusOr<google::longrunning::Operation>>
TranslationServiceMetadata::AsyncCreateModel(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::translation::v3::CreateModelRequest const& request) {
  SetMetadata(*context, *options,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->AsyncCreateModel(cq, std::move(context), std::move(options),
                                  request);
}

StatusOr<google::longrunning::Operation>
TranslationServiceMetadata::CreateModel(
    grpc::ClientContext& context, Options options,
    google::cloud::translation::v3::CreateModelRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->CreateModel(context, options, request);
}

StatusOr<google::cloud::translation::v3::ListModelsResponse>
TranslationServiceMetadata::ListModels(
    grpc::ClientContext& context, Options const& options,
    google::cloud::translation::v3::ListModelsRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->ListModels(context, options, request);
}

StatusOr<google::cloud::translation::v3::Model>
TranslationServiceMetadata::GetModel(
    grpc::ClientContext& context, Options const& options,
    google::cloud::translation::v3::GetModelRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->GetModel(context, options, request);
}

future<StatusOr<google::longrunning::Operation>>
TranslationServiceMetadata::AsyncDeleteModel(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::translation::v3::DeleteModelRequest const& request) {
  SetMetadata(*context, *options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->AsyncDeleteModel(cq, std::move(context), std::move(options),
                                  request);
}

StatusOr<google::longrunning::Operation>
TranslationServiceMetadata::DeleteModel(
    grpc::ClientContext& context, Options options,
    google::cloud::translation::v3::DeleteModelRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->DeleteModel(context, options, request);
}

future<StatusOr<google::longrunning::Operation>>
TranslationServiceMetadata::AsyncGetOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::longrunning::GetOperationRequest const& request) {
  SetMetadata(*context, *options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->AsyncGetOperation(cq, std::move(context), std::move(options),
                                   request);
}

future<Status> TranslationServiceMetadata::AsyncCancelOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::longrunning::CancelOperationRequest const& request) {
  SetMetadata(*context, *options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->AsyncCancelOperation(cq, std::move(context),
                                      std::move(options), request);
}

void TranslationServiceMetadata::SetMetadata(
    grpc::ClientContext& context, Options const& options,
    std::string const& request_params) {
  context.AddMetadata("x-goog-request-params", request_params);
  SetMetadata(context, options);
}

void TranslationServiceMetadata::SetMetadata(grpc::ClientContext& context,
                                             Options const& options) {
  google::cloud::internal::SetMetadata(context, options, fixed_metadata_,
                                       api_client_header_);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace translate_v3_internal
}  // namespace cloud
}  // namespace google
