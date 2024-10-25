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

#include "google/cloud/translate/v3/internal/translation_stub.h"
#include "google/cloud/translate/v3/translation_service.grpc.pb.h"
#include "google/cloud/grpc_error_delegate.h"
#include "google/cloud/status_or.h"
#include "google/longrunning/operations.grpc.pb.h"
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace translate_v3_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

TranslationServiceStub::~TranslationServiceStub() = default;

StatusOr<google::cloud::translation::v3::TranslateTextResponse>
DefaultTranslationServiceStub::TranslateText(
    grpc::ClientContext& context, Options const&,
    google::cloud::translation::v3::TranslateTextRequest const& request) {
  google::cloud::translation::v3::TranslateTextResponse response;
  auto status = grpc_stub_->TranslateText(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::translation::v3::RomanizeTextResponse>
DefaultTranslationServiceStub::RomanizeText(
    grpc::ClientContext& context, Options const&,
    google::cloud::translation::v3::RomanizeTextRequest const& request) {
  google::cloud::translation::v3::RomanizeTextResponse response;
  auto status = grpc_stub_->RomanizeText(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::translation::v3::DetectLanguageResponse>
DefaultTranslationServiceStub::DetectLanguage(
    grpc::ClientContext& context, Options const&,
    google::cloud::translation::v3::DetectLanguageRequest const& request) {
  google::cloud::translation::v3::DetectLanguageResponse response;
  auto status = grpc_stub_->DetectLanguage(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::translation::v3::SupportedLanguages>
DefaultTranslationServiceStub::GetSupportedLanguages(
    grpc::ClientContext& context, Options const&,
    google::cloud::translation::v3::GetSupportedLanguagesRequest const&
        request) {
  google::cloud::translation::v3::SupportedLanguages response;
  auto status = grpc_stub_->GetSupportedLanguages(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::translation::v3::TranslateDocumentResponse>
DefaultTranslationServiceStub::TranslateDocument(
    grpc::ClientContext& context, Options const&,
    google::cloud::translation::v3::TranslateDocumentRequest const& request) {
  google::cloud::translation::v3::TranslateDocumentResponse response;
  auto status = grpc_stub_->TranslateDocument(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

future<StatusOr<google::longrunning::Operation>>
DefaultTranslationServiceStub::AsyncBatchTranslateText(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions,
    google::cloud::translation::v3::BatchTranslateTextRequest const& request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::translation::v3::BatchTranslateTextRequest,
      google::longrunning::Operation>(
      cq,
      [this](grpc::ClientContext* context,
             google::cloud::translation::v3::BatchTranslateTextRequest const&
                 request,
             grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncBatchTranslateText(context, request, cq);
      },
      request, std::move(context));
}

StatusOr<google::longrunning::Operation>
DefaultTranslationServiceStub::BatchTranslateText(
    grpc::ClientContext& context, Options,
    google::cloud::translation::v3::BatchTranslateTextRequest const& request) {
  google::longrunning::Operation response;
  auto status = grpc_stub_->BatchTranslateText(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

future<StatusOr<google::longrunning::Operation>>
DefaultTranslationServiceStub::AsyncBatchTranslateDocument(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions,
    google::cloud::translation::v3::BatchTranslateDocumentRequest const&
        request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::translation::v3::BatchTranslateDocumentRequest,
      google::longrunning::Operation>(
      cq,
      [this](
          grpc::ClientContext* context,
          google::cloud::translation::v3::BatchTranslateDocumentRequest const&
              request,
          grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncBatchTranslateDocument(context, request, cq);
      },
      request, std::move(context));
}

StatusOr<google::longrunning::Operation>
DefaultTranslationServiceStub::BatchTranslateDocument(
    grpc::ClientContext& context, Options,
    google::cloud::translation::v3::BatchTranslateDocumentRequest const&
        request) {
  google::longrunning::Operation response;
  auto status =
      grpc_stub_->BatchTranslateDocument(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

future<StatusOr<google::longrunning::Operation>>
DefaultTranslationServiceStub::AsyncCreateGlossary(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions,
    google::cloud::translation::v3::CreateGlossaryRequest const& request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::translation::v3::CreateGlossaryRequest,
      google::longrunning::Operation>(
      cq,
      [this](
          grpc::ClientContext* context,
          google::cloud::translation::v3::CreateGlossaryRequest const& request,
          grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncCreateGlossary(context, request, cq);
      },
      request, std::move(context));
}

StatusOr<google::longrunning::Operation>
DefaultTranslationServiceStub::CreateGlossary(
    grpc::ClientContext& context, Options,
    google::cloud::translation::v3::CreateGlossaryRequest const& request) {
  google::longrunning::Operation response;
  auto status = grpc_stub_->CreateGlossary(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

future<StatusOr<google::longrunning::Operation>>
DefaultTranslationServiceStub::AsyncUpdateGlossary(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions,
    google::cloud::translation::v3::UpdateGlossaryRequest const& request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::translation::v3::UpdateGlossaryRequest,
      google::longrunning::Operation>(
      cq,
      [this](
          grpc::ClientContext* context,
          google::cloud::translation::v3::UpdateGlossaryRequest const& request,
          grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncUpdateGlossary(context, request, cq);
      },
      request, std::move(context));
}

StatusOr<google::longrunning::Operation>
DefaultTranslationServiceStub::UpdateGlossary(
    grpc::ClientContext& context, Options,
    google::cloud::translation::v3::UpdateGlossaryRequest const& request) {
  google::longrunning::Operation response;
  auto status = grpc_stub_->UpdateGlossary(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::translation::v3::ListGlossariesResponse>
DefaultTranslationServiceStub::ListGlossaries(
    grpc::ClientContext& context, Options const&,
    google::cloud::translation::v3::ListGlossariesRequest const& request) {
  google::cloud::translation::v3::ListGlossariesResponse response;
  auto status = grpc_stub_->ListGlossaries(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::translation::v3::Glossary>
DefaultTranslationServiceStub::GetGlossary(
    grpc::ClientContext& context, Options const&,
    google::cloud::translation::v3::GetGlossaryRequest const& request) {
  google::cloud::translation::v3::Glossary response;
  auto status = grpc_stub_->GetGlossary(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

future<StatusOr<google::longrunning::Operation>>
DefaultTranslationServiceStub::AsyncDeleteGlossary(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions,
    google::cloud::translation::v3::DeleteGlossaryRequest const& request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::translation::v3::DeleteGlossaryRequest,
      google::longrunning::Operation>(
      cq,
      [this](
          grpc::ClientContext* context,
          google::cloud::translation::v3::DeleteGlossaryRequest const& request,
          grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncDeleteGlossary(context, request, cq);
      },
      request, std::move(context));
}

StatusOr<google::longrunning::Operation>
DefaultTranslationServiceStub::DeleteGlossary(
    grpc::ClientContext& context, Options,
    google::cloud::translation::v3::DeleteGlossaryRequest const& request) {
  google::longrunning::Operation response;
  auto status = grpc_stub_->DeleteGlossary(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::translation::v3::GlossaryEntry>
DefaultTranslationServiceStub::GetGlossaryEntry(
    grpc::ClientContext& context, Options const&,
    google::cloud::translation::v3::GetGlossaryEntryRequest const& request) {
  google::cloud::translation::v3::GlossaryEntry response;
  auto status = grpc_stub_->GetGlossaryEntry(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::translation::v3::ListGlossaryEntriesResponse>
DefaultTranslationServiceStub::ListGlossaryEntries(
    grpc::ClientContext& context, Options const&,
    google::cloud::translation::v3::ListGlossaryEntriesRequest const& request) {
  google::cloud::translation::v3::ListGlossaryEntriesResponse response;
  auto status = grpc_stub_->ListGlossaryEntries(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::translation::v3::GlossaryEntry>
DefaultTranslationServiceStub::CreateGlossaryEntry(
    grpc::ClientContext& context, Options const&,
    google::cloud::translation::v3::CreateGlossaryEntryRequest const& request) {
  google::cloud::translation::v3::GlossaryEntry response;
  auto status = grpc_stub_->CreateGlossaryEntry(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::translation::v3::GlossaryEntry>
DefaultTranslationServiceStub::UpdateGlossaryEntry(
    grpc::ClientContext& context, Options const&,
    google::cloud::translation::v3::UpdateGlossaryEntryRequest const& request) {
  google::cloud::translation::v3::GlossaryEntry response;
  auto status = grpc_stub_->UpdateGlossaryEntry(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

Status DefaultTranslationServiceStub::DeleteGlossaryEntry(
    grpc::ClientContext& context, Options const&,
    google::cloud::translation::v3::DeleteGlossaryEntryRequest const& request) {
  google::protobuf::Empty response;
  auto status = grpc_stub_->DeleteGlossaryEntry(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return google::cloud::Status();
}

future<StatusOr<google::longrunning::Operation>>
DefaultTranslationServiceStub::AsyncCreateDataset(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions,
    google::cloud::translation::v3::CreateDatasetRequest const& request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::translation::v3::CreateDatasetRequest,
      google::longrunning::Operation>(
      cq,
      [this](
          grpc::ClientContext* context,
          google::cloud::translation::v3::CreateDatasetRequest const& request,
          grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncCreateDataset(context, request, cq);
      },
      request, std::move(context));
}

StatusOr<google::longrunning::Operation>
DefaultTranslationServiceStub::CreateDataset(
    grpc::ClientContext& context, Options,
    google::cloud::translation::v3::CreateDatasetRequest const& request) {
  google::longrunning::Operation response;
  auto status = grpc_stub_->CreateDataset(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::translation::v3::Dataset>
DefaultTranslationServiceStub::GetDataset(
    grpc::ClientContext& context, Options const&,
    google::cloud::translation::v3::GetDatasetRequest const& request) {
  google::cloud::translation::v3::Dataset response;
  auto status = grpc_stub_->GetDataset(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::translation::v3::ListDatasetsResponse>
DefaultTranslationServiceStub::ListDatasets(
    grpc::ClientContext& context, Options const&,
    google::cloud::translation::v3::ListDatasetsRequest const& request) {
  google::cloud::translation::v3::ListDatasetsResponse response;
  auto status = grpc_stub_->ListDatasets(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

future<StatusOr<google::longrunning::Operation>>
DefaultTranslationServiceStub::AsyncDeleteDataset(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions,
    google::cloud::translation::v3::DeleteDatasetRequest const& request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::translation::v3::DeleteDatasetRequest,
      google::longrunning::Operation>(
      cq,
      [this](
          grpc::ClientContext* context,
          google::cloud::translation::v3::DeleteDatasetRequest const& request,
          grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncDeleteDataset(context, request, cq);
      },
      request, std::move(context));
}

StatusOr<google::longrunning::Operation>
DefaultTranslationServiceStub::DeleteDataset(
    grpc::ClientContext& context, Options,
    google::cloud::translation::v3::DeleteDatasetRequest const& request) {
  google::longrunning::Operation response;
  auto status = grpc_stub_->DeleteDataset(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::translation::v3::AdaptiveMtDataset>
DefaultTranslationServiceStub::CreateAdaptiveMtDataset(
    grpc::ClientContext& context, Options const&,
    google::cloud::translation::v3::CreateAdaptiveMtDatasetRequest const&
        request) {
  google::cloud::translation::v3::AdaptiveMtDataset response;
  auto status =
      grpc_stub_->CreateAdaptiveMtDataset(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

Status DefaultTranslationServiceStub::DeleteAdaptiveMtDataset(
    grpc::ClientContext& context, Options const&,
    google::cloud::translation::v3::DeleteAdaptiveMtDatasetRequest const&
        request) {
  google::protobuf::Empty response;
  auto status =
      grpc_stub_->DeleteAdaptiveMtDataset(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return google::cloud::Status();
}

StatusOr<google::cloud::translation::v3::AdaptiveMtDataset>
DefaultTranslationServiceStub::GetAdaptiveMtDataset(
    grpc::ClientContext& context, Options const&,
    google::cloud::translation::v3::GetAdaptiveMtDatasetRequest const&
        request) {
  google::cloud::translation::v3::AdaptiveMtDataset response;
  auto status = grpc_stub_->GetAdaptiveMtDataset(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::translation::v3::ListAdaptiveMtDatasetsResponse>
DefaultTranslationServiceStub::ListAdaptiveMtDatasets(
    grpc::ClientContext& context, Options const&,
    google::cloud::translation::v3::ListAdaptiveMtDatasetsRequest const&
        request) {
  google::cloud::translation::v3::ListAdaptiveMtDatasetsResponse response;
  auto status =
      grpc_stub_->ListAdaptiveMtDatasets(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::translation::v3::AdaptiveMtTranslateResponse>
DefaultTranslationServiceStub::AdaptiveMtTranslate(
    grpc::ClientContext& context, Options const&,
    google::cloud::translation::v3::AdaptiveMtTranslateRequest const& request) {
  google::cloud::translation::v3::AdaptiveMtTranslateResponse response;
  auto status = grpc_stub_->AdaptiveMtTranslate(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::translation::v3::AdaptiveMtFile>
DefaultTranslationServiceStub::GetAdaptiveMtFile(
    grpc::ClientContext& context, Options const&,
    google::cloud::translation::v3::GetAdaptiveMtFileRequest const& request) {
  google::cloud::translation::v3::AdaptiveMtFile response;
  auto status = grpc_stub_->GetAdaptiveMtFile(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

Status DefaultTranslationServiceStub::DeleteAdaptiveMtFile(
    grpc::ClientContext& context, Options const&,
    google::cloud::translation::v3::DeleteAdaptiveMtFileRequest const&
        request) {
  google::protobuf::Empty response;
  auto status = grpc_stub_->DeleteAdaptiveMtFile(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return google::cloud::Status();
}

StatusOr<google::cloud::translation::v3::ImportAdaptiveMtFileResponse>
DefaultTranslationServiceStub::ImportAdaptiveMtFile(
    grpc::ClientContext& context, Options const&,
    google::cloud::translation::v3::ImportAdaptiveMtFileRequest const&
        request) {
  google::cloud::translation::v3::ImportAdaptiveMtFileResponse response;
  auto status = grpc_stub_->ImportAdaptiveMtFile(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::translation::v3::ListAdaptiveMtFilesResponse>
DefaultTranslationServiceStub::ListAdaptiveMtFiles(
    grpc::ClientContext& context, Options const&,
    google::cloud::translation::v3::ListAdaptiveMtFilesRequest const& request) {
  google::cloud::translation::v3::ListAdaptiveMtFilesResponse response;
  auto status = grpc_stub_->ListAdaptiveMtFiles(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::translation::v3::ListAdaptiveMtSentencesResponse>
DefaultTranslationServiceStub::ListAdaptiveMtSentences(
    grpc::ClientContext& context, Options const&,
    google::cloud::translation::v3::ListAdaptiveMtSentencesRequest const&
        request) {
  google::cloud::translation::v3::ListAdaptiveMtSentencesResponse response;
  auto status =
      grpc_stub_->ListAdaptiveMtSentences(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

future<StatusOr<google::longrunning::Operation>>
DefaultTranslationServiceStub::AsyncImportData(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions,
    google::cloud::translation::v3::ImportDataRequest const& request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::translation::v3::ImportDataRequest,
      google::longrunning::Operation>(
      cq,
      [this](grpc::ClientContext* context,
             google::cloud::translation::v3::ImportDataRequest const& request,
             grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncImportData(context, request, cq);
      },
      request, std::move(context));
}

StatusOr<google::longrunning::Operation>
DefaultTranslationServiceStub::ImportData(
    grpc::ClientContext& context, Options,
    google::cloud::translation::v3::ImportDataRequest const& request) {
  google::longrunning::Operation response;
  auto status = grpc_stub_->ImportData(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

future<StatusOr<google::longrunning::Operation>>
DefaultTranslationServiceStub::AsyncExportData(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions,
    google::cloud::translation::v3::ExportDataRequest const& request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::translation::v3::ExportDataRequest,
      google::longrunning::Operation>(
      cq,
      [this](grpc::ClientContext* context,
             google::cloud::translation::v3::ExportDataRequest const& request,
             grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncExportData(context, request, cq);
      },
      request, std::move(context));
}

StatusOr<google::longrunning::Operation>
DefaultTranslationServiceStub::ExportData(
    grpc::ClientContext& context, Options,
    google::cloud::translation::v3::ExportDataRequest const& request) {
  google::longrunning::Operation response;
  auto status = grpc_stub_->ExportData(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::translation::v3::ListExamplesResponse>
DefaultTranslationServiceStub::ListExamples(
    grpc::ClientContext& context, Options const&,
    google::cloud::translation::v3::ListExamplesRequest const& request) {
  google::cloud::translation::v3::ListExamplesResponse response;
  auto status = grpc_stub_->ListExamples(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

future<StatusOr<google::longrunning::Operation>>
DefaultTranslationServiceStub::AsyncCreateModel(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions,
    google::cloud::translation::v3::CreateModelRequest const& request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::translation::v3::CreateModelRequest,
      google::longrunning::Operation>(
      cq,
      [this](grpc::ClientContext* context,
             google::cloud::translation::v3::CreateModelRequest const& request,
             grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncCreateModel(context, request, cq);
      },
      request, std::move(context));
}

StatusOr<google::longrunning::Operation>
DefaultTranslationServiceStub::CreateModel(
    grpc::ClientContext& context, Options,
    google::cloud::translation::v3::CreateModelRequest const& request) {
  google::longrunning::Operation response;
  auto status = grpc_stub_->CreateModel(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::translation::v3::ListModelsResponse>
DefaultTranslationServiceStub::ListModels(
    grpc::ClientContext& context, Options const&,
    google::cloud::translation::v3::ListModelsRequest const& request) {
  google::cloud::translation::v3::ListModelsResponse response;
  auto status = grpc_stub_->ListModels(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::translation::v3::Model>
DefaultTranslationServiceStub::GetModel(
    grpc::ClientContext& context, Options const&,
    google::cloud::translation::v3::GetModelRequest const& request) {
  google::cloud::translation::v3::Model response;
  auto status = grpc_stub_->GetModel(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

future<StatusOr<google::longrunning::Operation>>
DefaultTranslationServiceStub::AsyncDeleteModel(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions,
    google::cloud::translation::v3::DeleteModelRequest const& request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::translation::v3::DeleteModelRequest,
      google::longrunning::Operation>(
      cq,
      [this](grpc::ClientContext* context,
             google::cloud::translation::v3::DeleteModelRequest const& request,
             grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncDeleteModel(context, request, cq);
      },
      request, std::move(context));
}

StatusOr<google::longrunning::Operation>
DefaultTranslationServiceStub::DeleteModel(
    grpc::ClientContext& context, Options,
    google::cloud::translation::v3::DeleteModelRequest const& request) {
  google::longrunning::Operation response;
  auto status = grpc_stub_->DeleteModel(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::location::ListLocationsResponse>
DefaultTranslationServiceStub::ListLocations(
    grpc::ClientContext& context, Options const&,
    google::cloud::location::ListLocationsRequest const& request) {
  google::cloud::location::ListLocationsResponse response;
  auto status = locations_stub_->ListLocations(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::location::Location>
DefaultTranslationServiceStub::GetLocation(
    grpc::ClientContext& context, Options const&,
    google::cloud::location::GetLocationRequest const& request) {
  google::cloud::location::Location response;
  auto status = locations_stub_->GetLocation(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::longrunning::ListOperationsResponse>
DefaultTranslationServiceStub::ListOperations(
    grpc::ClientContext& context, Options const&,
    google::longrunning::ListOperationsRequest const& request) {
  google::longrunning::ListOperationsResponse response;
  auto status = operations_stub_->ListOperations(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::longrunning::Operation>
DefaultTranslationServiceStub::GetOperation(
    grpc::ClientContext& context, Options const&,
    google::longrunning::GetOperationRequest const& request) {
  google::longrunning::Operation response;
  auto status = operations_stub_->GetOperation(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

Status DefaultTranslationServiceStub::DeleteOperation(
    grpc::ClientContext& context, Options const&,
    google::longrunning::DeleteOperationRequest const& request) {
  google::protobuf::Empty response;
  auto status = operations_stub_->DeleteOperation(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return google::cloud::Status();
}

Status DefaultTranslationServiceStub::CancelOperation(
    grpc::ClientContext& context, Options const&,
    google::longrunning::CancelOperationRequest const& request) {
  google::protobuf::Empty response;
  auto status = operations_stub_->CancelOperation(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return google::cloud::Status();
}

StatusOr<google::longrunning::Operation>
DefaultTranslationServiceStub::WaitOperation(
    grpc::ClientContext& context, Options const&,
    google::longrunning::WaitOperationRequest const& request) {
  google::longrunning::Operation response;
  auto status = operations_stub_->WaitOperation(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

future<StatusOr<google::longrunning::Operation>>
DefaultTranslationServiceStub::AsyncGetOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    // NOLINTNEXTLINE(performance-unnecessary-value-param)
    google::cloud::internal::ImmutableOptions,
    google::longrunning::GetOperationRequest const& request) {
  return internal::MakeUnaryRpcImpl<google::longrunning::GetOperationRequest,
                                    google::longrunning::Operation>(
      cq,
      [this](grpc::ClientContext* context,
             google::longrunning::GetOperationRequest const& request,
             grpc::CompletionQueue* cq) {
        return operations_->AsyncGetOperation(context, request, cq);
      },
      request, std::move(context));
}

future<Status> DefaultTranslationServiceStub::AsyncCancelOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    // NOLINTNEXTLINE(performance-unnecessary-value-param)
    google::cloud::internal::ImmutableOptions,
    google::longrunning::CancelOperationRequest const& request) {
  return internal::MakeUnaryRpcImpl<google::longrunning::CancelOperationRequest,
                                    google::protobuf::Empty>(
             cq,
             [this](grpc::ClientContext* context,
                    google::longrunning::CancelOperationRequest const& request,
                    grpc::CompletionQueue* cq) {
               return operations_->AsyncCancelOperation(context, request, cq);
             },
             request, std::move(context))
      .then([](future<StatusOr<google::protobuf::Empty>> f) {
        return f.get().status();
      });
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace translate_v3_internal
}  // namespace cloud
}  // namespace google
