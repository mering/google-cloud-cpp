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

#include "google/cloud/translate/v3/internal/translation_logging_decorator.h"
#include "google/cloud/translate/v3/translation_service.grpc.pb.h"
#include "google/cloud/internal/log_wrapper.h"
#include "google/cloud/status_or.h"
#include <memory>
#include <set>
#include <string>
#include <utility>

namespace google {
namespace cloud {
namespace translate_v3_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

TranslationServiceLogging::TranslationServiceLogging(
    std::shared_ptr<TranslationServiceStub> child,
    TracingOptions tracing_options, std::set<std::string> const&)
    : child_(std::move(child)), tracing_options_(std::move(tracing_options)) {}

StatusOr<google::cloud::translation::v3::TranslateTextResponse>
TranslationServiceLogging::TranslateText(
    grpc::ClientContext& context, Options const& options,
    google::cloud::translation::v3::TranslateTextRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](
          grpc::ClientContext& context, Options const& options,
          google::cloud::translation::v3::TranslateTextRequest const& request) {
        return child_->TranslateText(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::translation::v3::RomanizeTextResponse>
TranslationServiceLogging::RomanizeText(
    grpc::ClientContext& context, Options const& options,
    google::cloud::translation::v3::RomanizeTextRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](
          grpc::ClientContext& context, Options const& options,
          google::cloud::translation::v3::RomanizeTextRequest const& request) {
        return child_->RomanizeText(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::translation::v3::DetectLanguageResponse>
TranslationServiceLogging::DetectLanguage(
    grpc::ClientContext& context, Options const& options,
    google::cloud::translation::v3::DetectLanguageRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::translation::v3::DetectLanguageRequest const&
                 request) {
        return child_->DetectLanguage(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::translation::v3::SupportedLanguages>
TranslationServiceLogging::GetSupportedLanguages(
    grpc::ClientContext& context, Options const& options,
    google::cloud::translation::v3::GetSupportedLanguagesRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::translation::v3::GetSupportedLanguagesRequest const&
                 request) {
        return child_->GetSupportedLanguages(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::translation::v3::TranslateDocumentResponse>
TranslationServiceLogging::TranslateDocument(
    grpc::ClientContext& context, Options const& options,
    google::cloud::translation::v3::TranslateDocumentRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::translation::v3::TranslateDocumentRequest const&
                 request) {
        return child_->TranslateDocument(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
TranslationServiceLogging::AsyncBatchTranslateText(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::translation::v3::BatchTranslateTextRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             google::cloud::internal::ImmutableOptions options,
             google::cloud::translation::v3::BatchTranslateTextRequest const&
                 request) {
        return child_->AsyncBatchTranslateText(cq, std::move(context),
                                               std::move(options), request);
      },
      cq, std::move(context), std::move(options), request, __func__,
      tracing_options_);
}

StatusOr<google::longrunning::Operation>
TranslationServiceLogging::BatchTranslateText(
    grpc::ClientContext& context, Options options,
    google::cloud::translation::v3::BatchTranslateTextRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::translation::v3::BatchTranslateTextRequest const&
                 request) {
        return child_->BatchTranslateText(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
TranslationServiceLogging::AsyncBatchTranslateDocument(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::translation::v3::BatchTranslateDocumentRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](
          google::cloud::CompletionQueue& cq,
          std::shared_ptr<grpc::ClientContext> context,
          google::cloud::internal::ImmutableOptions options,
          google::cloud::translation::v3::BatchTranslateDocumentRequest const&
              request) {
        return child_->AsyncBatchTranslateDocument(cq, std::move(context),
                                                   std::move(options), request);
      },
      cq, std::move(context), std::move(options), request, __func__,
      tracing_options_);
}

StatusOr<google::longrunning::Operation>
TranslationServiceLogging::BatchTranslateDocument(
    grpc::ClientContext& context, Options options,
    google::cloud::translation::v3::BatchTranslateDocumentRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](
          grpc::ClientContext& context, Options const& options,
          google::cloud::translation::v3::BatchTranslateDocumentRequest const&
              request) {
        return child_->BatchTranslateDocument(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
TranslationServiceLogging::AsyncCreateGlossary(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::translation::v3::CreateGlossaryRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             google::cloud::internal::ImmutableOptions options,
             google::cloud::translation::v3::CreateGlossaryRequest const&
                 request) {
        return child_->AsyncCreateGlossary(cq, std::move(context),
                                           std::move(options), request);
      },
      cq, std::move(context), std::move(options), request, __func__,
      tracing_options_);
}

StatusOr<google::longrunning::Operation>
TranslationServiceLogging::CreateGlossary(
    grpc::ClientContext& context, Options options,
    google::cloud::translation::v3::CreateGlossaryRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::translation::v3::CreateGlossaryRequest const&
                 request) {
        return child_->CreateGlossary(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
TranslationServiceLogging::AsyncUpdateGlossary(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::translation::v3::UpdateGlossaryRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             google::cloud::internal::ImmutableOptions options,
             google::cloud::translation::v3::UpdateGlossaryRequest const&
                 request) {
        return child_->AsyncUpdateGlossary(cq, std::move(context),
                                           std::move(options), request);
      },
      cq, std::move(context), std::move(options), request, __func__,
      tracing_options_);
}

StatusOr<google::longrunning::Operation>
TranslationServiceLogging::UpdateGlossary(
    grpc::ClientContext& context, Options options,
    google::cloud::translation::v3::UpdateGlossaryRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::translation::v3::UpdateGlossaryRequest const&
                 request) {
        return child_->UpdateGlossary(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::translation::v3::ListGlossariesResponse>
TranslationServiceLogging::ListGlossaries(
    grpc::ClientContext& context, Options const& options,
    google::cloud::translation::v3::ListGlossariesRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::translation::v3::ListGlossariesRequest const&
                 request) {
        return child_->ListGlossaries(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::translation::v3::Glossary>
TranslationServiceLogging::GetGlossary(
    grpc::ClientContext& context, Options const& options,
    google::cloud::translation::v3::GetGlossaryRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](
          grpc::ClientContext& context, Options const& options,
          google::cloud::translation::v3::GetGlossaryRequest const& request) {
        return child_->GetGlossary(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
TranslationServiceLogging::AsyncDeleteGlossary(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::translation::v3::DeleteGlossaryRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             google::cloud::internal::ImmutableOptions options,
             google::cloud::translation::v3::DeleteGlossaryRequest const&
                 request) {
        return child_->AsyncDeleteGlossary(cq, std::move(context),
                                           std::move(options), request);
      },
      cq, std::move(context), std::move(options), request, __func__,
      tracing_options_);
}

StatusOr<google::longrunning::Operation>
TranslationServiceLogging::DeleteGlossary(
    grpc::ClientContext& context, Options options,
    google::cloud::translation::v3::DeleteGlossaryRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::translation::v3::DeleteGlossaryRequest const&
                 request) {
        return child_->DeleteGlossary(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::translation::v3::GlossaryEntry>
TranslationServiceLogging::GetGlossaryEntry(
    grpc::ClientContext& context, Options const& options,
    google::cloud::translation::v3::GetGlossaryEntryRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::translation::v3::GetGlossaryEntryRequest const&
                 request) {
        return child_->GetGlossaryEntry(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::translation::v3::ListGlossaryEntriesResponse>
TranslationServiceLogging::ListGlossaryEntries(
    grpc::ClientContext& context, Options const& options,
    google::cloud::translation::v3::ListGlossaryEntriesRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::translation::v3::ListGlossaryEntriesRequest const&
                 request) {
        return child_->ListGlossaryEntries(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::translation::v3::GlossaryEntry>
TranslationServiceLogging::CreateGlossaryEntry(
    grpc::ClientContext& context, Options const& options,
    google::cloud::translation::v3::CreateGlossaryEntryRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::translation::v3::CreateGlossaryEntryRequest const&
                 request) {
        return child_->CreateGlossaryEntry(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::translation::v3::GlossaryEntry>
TranslationServiceLogging::UpdateGlossaryEntry(
    grpc::ClientContext& context, Options const& options,
    google::cloud::translation::v3::UpdateGlossaryEntryRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::translation::v3::UpdateGlossaryEntryRequest const&
                 request) {
        return child_->UpdateGlossaryEntry(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

Status TranslationServiceLogging::DeleteGlossaryEntry(
    grpc::ClientContext& context, Options const& options,
    google::cloud::translation::v3::DeleteGlossaryEntryRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::translation::v3::DeleteGlossaryEntryRequest const&
                 request) {
        return child_->DeleteGlossaryEntry(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
TranslationServiceLogging::AsyncCreateDataset(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::translation::v3::CreateDatasetRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](
          google::cloud::CompletionQueue& cq,
          std::shared_ptr<grpc::ClientContext> context,
          google::cloud::internal::ImmutableOptions options,
          google::cloud::translation::v3::CreateDatasetRequest const& request) {
        return child_->AsyncCreateDataset(cq, std::move(context),
                                          std::move(options), request);
      },
      cq, std::move(context), std::move(options), request, __func__,
      tracing_options_);
}

StatusOr<google::longrunning::Operation>
TranslationServiceLogging::CreateDataset(
    grpc::ClientContext& context, Options options,
    google::cloud::translation::v3::CreateDatasetRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](
          grpc::ClientContext& context, Options const& options,
          google::cloud::translation::v3::CreateDatasetRequest const& request) {
        return child_->CreateDataset(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::translation::v3::Dataset>
TranslationServiceLogging::GetDataset(
    grpc::ClientContext& context, Options const& options,
    google::cloud::translation::v3::GetDatasetRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::translation::v3::GetDatasetRequest const& request) {
        return child_->GetDataset(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::translation::v3::ListDatasetsResponse>
TranslationServiceLogging::ListDatasets(
    grpc::ClientContext& context, Options const& options,
    google::cloud::translation::v3::ListDatasetsRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](
          grpc::ClientContext& context, Options const& options,
          google::cloud::translation::v3::ListDatasetsRequest const& request) {
        return child_->ListDatasets(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
TranslationServiceLogging::AsyncDeleteDataset(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::translation::v3::DeleteDatasetRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](
          google::cloud::CompletionQueue& cq,
          std::shared_ptr<grpc::ClientContext> context,
          google::cloud::internal::ImmutableOptions options,
          google::cloud::translation::v3::DeleteDatasetRequest const& request) {
        return child_->AsyncDeleteDataset(cq, std::move(context),
                                          std::move(options), request);
      },
      cq, std::move(context), std::move(options), request, __func__,
      tracing_options_);
}

StatusOr<google::longrunning::Operation>
TranslationServiceLogging::DeleteDataset(
    grpc::ClientContext& context, Options options,
    google::cloud::translation::v3::DeleteDatasetRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](
          grpc::ClientContext& context, Options const& options,
          google::cloud::translation::v3::DeleteDatasetRequest const& request) {
        return child_->DeleteDataset(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::translation::v3::AdaptiveMtDataset>
TranslationServiceLogging::CreateAdaptiveMtDataset(
    grpc::ClientContext& context, Options const& options,
    google::cloud::translation::v3::CreateAdaptiveMtDatasetRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](
          grpc::ClientContext& context, Options const& options,
          google::cloud::translation::v3::CreateAdaptiveMtDatasetRequest const&
              request) {
        return child_->CreateAdaptiveMtDataset(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

Status TranslationServiceLogging::DeleteAdaptiveMtDataset(
    grpc::ClientContext& context, Options const& options,
    google::cloud::translation::v3::DeleteAdaptiveMtDatasetRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](
          grpc::ClientContext& context, Options const& options,
          google::cloud::translation::v3::DeleteAdaptiveMtDatasetRequest const&
              request) {
        return child_->DeleteAdaptiveMtDataset(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::translation::v3::AdaptiveMtDataset>
TranslationServiceLogging::GetAdaptiveMtDataset(
    grpc::ClientContext& context, Options const& options,
    google::cloud::translation::v3::GetAdaptiveMtDatasetRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::translation::v3::GetAdaptiveMtDatasetRequest const&
                 request) {
        return child_->GetAdaptiveMtDataset(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::translation::v3::ListAdaptiveMtDatasetsResponse>
TranslationServiceLogging::ListAdaptiveMtDatasets(
    grpc::ClientContext& context, Options const& options,
    google::cloud::translation::v3::ListAdaptiveMtDatasetsRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](
          grpc::ClientContext& context, Options const& options,
          google::cloud::translation::v3::ListAdaptiveMtDatasetsRequest const&
              request) {
        return child_->ListAdaptiveMtDatasets(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::translation::v3::AdaptiveMtTranslateResponse>
TranslationServiceLogging::AdaptiveMtTranslate(
    grpc::ClientContext& context, Options const& options,
    google::cloud::translation::v3::AdaptiveMtTranslateRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::translation::v3::AdaptiveMtTranslateRequest const&
                 request) {
        return child_->AdaptiveMtTranslate(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::translation::v3::AdaptiveMtFile>
TranslationServiceLogging::GetAdaptiveMtFile(
    grpc::ClientContext& context, Options const& options,
    google::cloud::translation::v3::GetAdaptiveMtFileRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::translation::v3::GetAdaptiveMtFileRequest const&
                 request) {
        return child_->GetAdaptiveMtFile(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

Status TranslationServiceLogging::DeleteAdaptiveMtFile(
    grpc::ClientContext& context, Options const& options,
    google::cloud::translation::v3::DeleteAdaptiveMtFileRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::translation::v3::DeleteAdaptiveMtFileRequest const&
                 request) {
        return child_->DeleteAdaptiveMtFile(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::translation::v3::ImportAdaptiveMtFileResponse>
TranslationServiceLogging::ImportAdaptiveMtFile(
    grpc::ClientContext& context, Options const& options,
    google::cloud::translation::v3::ImportAdaptiveMtFileRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::translation::v3::ImportAdaptiveMtFileRequest const&
                 request) {
        return child_->ImportAdaptiveMtFile(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::translation::v3::ListAdaptiveMtFilesResponse>
TranslationServiceLogging::ListAdaptiveMtFiles(
    grpc::ClientContext& context, Options const& options,
    google::cloud::translation::v3::ListAdaptiveMtFilesRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::translation::v3::ListAdaptiveMtFilesRequest const&
                 request) {
        return child_->ListAdaptiveMtFiles(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::translation::v3::ListAdaptiveMtSentencesResponse>
TranslationServiceLogging::ListAdaptiveMtSentences(
    grpc::ClientContext& context, Options const& options,
    google::cloud::translation::v3::ListAdaptiveMtSentencesRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](
          grpc::ClientContext& context, Options const& options,
          google::cloud::translation::v3::ListAdaptiveMtSentencesRequest const&
              request) {
        return child_->ListAdaptiveMtSentences(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
TranslationServiceLogging::AsyncImportData(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::translation::v3::ImportDataRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             google::cloud::internal::ImmutableOptions options,
             google::cloud::translation::v3::ImportDataRequest const& request) {
        return child_->AsyncImportData(cq, std::move(context),
                                       std::move(options), request);
      },
      cq, std::move(context), std::move(options), request, __func__,
      tracing_options_);
}

StatusOr<google::longrunning::Operation> TranslationServiceLogging::ImportData(
    grpc::ClientContext& context, Options options,
    google::cloud::translation::v3::ImportDataRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::translation::v3::ImportDataRequest const& request) {
        return child_->ImportData(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
TranslationServiceLogging::AsyncExportData(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::translation::v3::ExportDataRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             google::cloud::internal::ImmutableOptions options,
             google::cloud::translation::v3::ExportDataRequest const& request) {
        return child_->AsyncExportData(cq, std::move(context),
                                       std::move(options), request);
      },
      cq, std::move(context), std::move(options), request, __func__,
      tracing_options_);
}

StatusOr<google::longrunning::Operation> TranslationServiceLogging::ExportData(
    grpc::ClientContext& context, Options options,
    google::cloud::translation::v3::ExportDataRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::translation::v3::ExportDataRequest const& request) {
        return child_->ExportData(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::translation::v3::ListExamplesResponse>
TranslationServiceLogging::ListExamples(
    grpc::ClientContext& context, Options const& options,
    google::cloud::translation::v3::ListExamplesRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](
          grpc::ClientContext& context, Options const& options,
          google::cloud::translation::v3::ListExamplesRequest const& request) {
        return child_->ListExamples(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
TranslationServiceLogging::AsyncCreateModel(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::translation::v3::CreateModelRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](
          google::cloud::CompletionQueue& cq,
          std::shared_ptr<grpc::ClientContext> context,
          google::cloud::internal::ImmutableOptions options,
          google::cloud::translation::v3::CreateModelRequest const& request) {
        return child_->AsyncCreateModel(cq, std::move(context),
                                        std::move(options), request);
      },
      cq, std::move(context), std::move(options), request, __func__,
      tracing_options_);
}

StatusOr<google::longrunning::Operation> TranslationServiceLogging::CreateModel(
    grpc::ClientContext& context, Options options,
    google::cloud::translation::v3::CreateModelRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](
          grpc::ClientContext& context, Options const& options,
          google::cloud::translation::v3::CreateModelRequest const& request) {
        return child_->CreateModel(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::translation::v3::ListModelsResponse>
TranslationServiceLogging::ListModels(
    grpc::ClientContext& context, Options const& options,
    google::cloud::translation::v3::ListModelsRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::translation::v3::ListModelsRequest const& request) {
        return child_->ListModels(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::translation::v3::Model>
TranslationServiceLogging::GetModel(
    grpc::ClientContext& context, Options const& options,
    google::cloud::translation::v3::GetModelRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::translation::v3::GetModelRequest const& request) {
        return child_->GetModel(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
TranslationServiceLogging::AsyncDeleteModel(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::translation::v3::DeleteModelRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](
          google::cloud::CompletionQueue& cq,
          std::shared_ptr<grpc::ClientContext> context,
          google::cloud::internal::ImmutableOptions options,
          google::cloud::translation::v3::DeleteModelRequest const& request) {
        return child_->AsyncDeleteModel(cq, std::move(context),
                                        std::move(options), request);
      },
      cq, std::move(context), std::move(options), request, __func__,
      tracing_options_);
}

StatusOr<google::longrunning::Operation> TranslationServiceLogging::DeleteModel(
    grpc::ClientContext& context, Options options,
    google::cloud::translation::v3::DeleteModelRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](
          grpc::ClientContext& context, Options const& options,
          google::cloud::translation::v3::DeleteModelRequest const& request) {
        return child_->DeleteModel(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::location::ListLocationsResponse>
TranslationServiceLogging::ListLocations(
    grpc::ClientContext& context, Options const& options,
    google::cloud::location::ListLocationsRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::location::ListLocationsRequest const& request) {
        return child_->ListLocations(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::location::Location>
TranslationServiceLogging::GetLocation(
    grpc::ClientContext& context, Options const& options,
    google::cloud::location::GetLocationRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::location::GetLocationRequest const& request) {
        return child_->GetLocation(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::longrunning::ListOperationsResponse>
TranslationServiceLogging::ListOperations(
    grpc::ClientContext& context, Options const& options,
    google::longrunning::ListOperationsRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::longrunning::ListOperationsRequest const& request) {
        return child_->ListOperations(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::longrunning::Operation>
TranslationServiceLogging::GetOperation(
    grpc::ClientContext& context, Options const& options,
    google::longrunning::GetOperationRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::longrunning::GetOperationRequest const& request) {
        return child_->GetOperation(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

Status TranslationServiceLogging::DeleteOperation(
    grpc::ClientContext& context, Options const& options,
    google::longrunning::DeleteOperationRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::longrunning::DeleteOperationRequest const& request) {
        return child_->DeleteOperation(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

Status TranslationServiceLogging::CancelOperation(
    grpc::ClientContext& context, Options const& options,
    google::longrunning::CancelOperationRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::longrunning::CancelOperationRequest const& request) {
        return child_->CancelOperation(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::longrunning::Operation>
TranslationServiceLogging::WaitOperation(
    grpc::ClientContext& context, Options const& options,
    google::longrunning::WaitOperationRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::longrunning::WaitOperationRequest const& request) {
        return child_->WaitOperation(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
TranslationServiceLogging::AsyncGetOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::longrunning::GetOperationRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             google::cloud::internal::ImmutableOptions options,
             google::longrunning::GetOperationRequest const& request) {
        return child_->AsyncGetOperation(cq, std::move(context),
                                         std::move(options), request);
      },
      cq, std::move(context), std::move(options), request, __func__,
      tracing_options_);
}

future<Status> TranslationServiceLogging::AsyncCancelOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::longrunning::CancelOperationRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             google::cloud::internal::ImmutableOptions options,
             google::longrunning::CancelOperationRequest const& request) {
        return child_->AsyncCancelOperation(cq, std::move(context),
                                            std::move(options), request);
      },
      cq, std::move(context), std::move(options), request, __func__,
      tracing_options_);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace translate_v3_internal
}  // namespace cloud
}  // namespace google
