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

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_TRANSLATE_V3_TRANSLATION_CONNECTION_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_TRANSLATE_V3_TRANSLATION_CONNECTION_H

#include "google/cloud/translate/v3/internal/translation_retry_traits.h"
#include "google/cloud/translate/v3/translation_connection_idempotency_policy.h"
#include "google/cloud/backoff_policy.h"
#include "google/cloud/future.h"
#include "google/cloud/internal/retry_policy_impl.h"
#include "google/cloud/no_await_tag.h"
#include "google/cloud/options.h"
#include "google/cloud/polling_policy.h"
#include "google/cloud/status_or.h"
#include "google/cloud/stream_range.h"
#include "google/cloud/version.h"
#include <google/cloud/translate/v3/translation_service.pb.h>
#include <google/longrunning/operations.grpc.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace translate_v3 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

/// The retry policy for `TranslationServiceConnection`.
class TranslationServiceRetryPolicy : public ::google::cloud::RetryPolicy {
 public:
  /// Creates a new instance of the policy, reset to the initial state.
  virtual std::unique_ptr<TranslationServiceRetryPolicy> clone() const = 0;
};

/**
 * A retry policy for `TranslationServiceConnection` based on counting errors.
 *
 * This policy stops retrying if:
 * - An RPC returns a non-transient error.
 * - More than a prescribed number of transient failures is detected.
 *
 * In this class the following status codes are treated as transient errors:
 * - [`kUnavailable`](@ref google::cloud::StatusCode)
 */
class TranslationServiceLimitedErrorCountRetryPolicy
    : public TranslationServiceRetryPolicy {
 public:
  /**
   * Create an instance that tolerates up to @p maximum_failures transient
   * errors.
   *
   * @note Disable the retry loop by providing an instance of this policy with
   *     @p maximum_failures == 0.
   */
  explicit TranslationServiceLimitedErrorCountRetryPolicy(int maximum_failures)
      : impl_(maximum_failures) {}

  TranslationServiceLimitedErrorCountRetryPolicy(
      TranslationServiceLimitedErrorCountRetryPolicy&& rhs) noexcept
      : TranslationServiceLimitedErrorCountRetryPolicy(rhs.maximum_failures()) {
  }
  TranslationServiceLimitedErrorCountRetryPolicy(
      TranslationServiceLimitedErrorCountRetryPolicy const& rhs) noexcept
      : TranslationServiceLimitedErrorCountRetryPolicy(rhs.maximum_failures()) {
  }

  int maximum_failures() const { return impl_.maximum_failures(); }

  bool OnFailure(Status const& status) override {
    return impl_.OnFailure(status);
  }
  bool IsExhausted() const override { return impl_.IsExhausted(); }
  bool IsPermanentFailure(Status const& status) const override {
    return impl_.IsPermanentFailure(status);
  }
  std::unique_ptr<TranslationServiceRetryPolicy> clone() const override {
    return std::make_unique<TranslationServiceLimitedErrorCountRetryPolicy>(
        maximum_failures());
  }

  // This is provided only for backwards compatibility.
  using BaseType = TranslationServiceRetryPolicy;

 private:
  google::cloud::internal::LimitedErrorCountRetryPolicy<
      translate_v3_internal::TranslationServiceRetryTraits>
      impl_;
};

/**
 * A retry policy for `TranslationServiceConnection` based on elapsed time.
 *
 * This policy stops retrying if:
 * - An RPC returns a non-transient error.
 * - The elapsed time in the retry loop exceeds a prescribed duration.
 *
 * In this class the following status codes are treated as transient errors:
 * - [`kUnavailable`](@ref google::cloud::StatusCode)
 */
class TranslationServiceLimitedTimeRetryPolicy
    : public TranslationServiceRetryPolicy {
 public:
  /**
   * Constructor given a `std::chrono::duration<>` object.
   *
   * @tparam DurationRep a placeholder to match the `Rep` tparam for @p
   *     duration's type. The semantics of this template parameter are
   *     documented in `std::chrono::duration<>`. In brief, the underlying
   *     arithmetic type used to store the number of ticks. For our purposes it
   *     is simply a formal parameter.
   * @tparam DurationPeriod a placeholder to match the `Period` tparam for @p
   *     duration's type. The semantics of this template parameter are
   *     documented in `std::chrono::duration<>`. In brief, the length of the
   *     tick in seconds, expressed as a `std::ratio<>`. For our purposes it is
   *     simply a formal parameter.
   * @param maximum_duration the maximum time allowed before the policy expires.
   *     While the application can express this time in any units they desire,
   *     the class truncates to milliseconds.
   *
   * @see https://en.cppreference.com/w/cpp/chrono/duration for more information
   *     about `std::chrono::duration`.
   */
  template <typename DurationRep, typename DurationPeriod>
  explicit TranslationServiceLimitedTimeRetryPolicy(
      std::chrono::duration<DurationRep, DurationPeriod> maximum_duration)
      : impl_(maximum_duration) {}

  TranslationServiceLimitedTimeRetryPolicy(
      TranslationServiceLimitedTimeRetryPolicy&& rhs) noexcept
      : TranslationServiceLimitedTimeRetryPolicy(rhs.maximum_duration()) {}
  TranslationServiceLimitedTimeRetryPolicy(
      TranslationServiceLimitedTimeRetryPolicy const& rhs) noexcept
      : TranslationServiceLimitedTimeRetryPolicy(rhs.maximum_duration()) {}

  std::chrono::milliseconds maximum_duration() const {
    return impl_.maximum_duration();
  }

  bool OnFailure(Status const& status) override {
    return impl_.OnFailure(status);
  }
  bool IsExhausted() const override { return impl_.IsExhausted(); }
  bool IsPermanentFailure(Status const& status) const override {
    return impl_.IsPermanentFailure(status);
  }
  std::unique_ptr<TranslationServiceRetryPolicy> clone() const override {
    return std::make_unique<TranslationServiceLimitedTimeRetryPolicy>(
        maximum_duration());
  }

  // This is provided only for backwards compatibility.
  using BaseType = TranslationServiceRetryPolicy;

 private:
  google::cloud::internal::LimitedTimeRetryPolicy<
      translate_v3_internal::TranslationServiceRetryTraits>
      impl_;
};

/**
 * The `TranslationServiceConnection` object for `TranslationServiceClient`.
 *
 * This interface defines virtual methods for each of the user-facing overload
 * sets in `TranslationServiceClient`. This allows users to inject custom
 * behavior (e.g., with a Google Mock object) when writing tests that use
 * objects of type `TranslationServiceClient`.
 *
 * To create a concrete instance, see `MakeTranslationServiceConnection()`.
 *
 * For mocking, see `translate_v3_mocks::MockTranslationServiceConnection`.
 */
class TranslationServiceConnection {
 public:
  virtual ~TranslationServiceConnection() = 0;

  virtual Options options() { return Options{}; }

  virtual StatusOr<google::cloud::translation::v3::TranslateTextResponse>
  TranslateText(
      google::cloud::translation::v3::TranslateTextRequest const& request);

  virtual StatusOr<google::cloud::translation::v3::RomanizeTextResponse>
  RomanizeText(
      google::cloud::translation::v3::RomanizeTextRequest const& request);

  virtual StatusOr<google::cloud::translation::v3::DetectLanguageResponse>
  DetectLanguage(
      google::cloud::translation::v3::DetectLanguageRequest const& request);

  virtual StatusOr<google::cloud::translation::v3::SupportedLanguages>
  GetSupportedLanguages(
      google::cloud::translation::v3::GetSupportedLanguagesRequest const&
          request);

  virtual StatusOr<google::cloud::translation::v3::TranslateDocumentResponse>
  TranslateDocument(
      google::cloud::translation::v3::TranslateDocumentRequest const& request);

  virtual future<
      StatusOr<google::cloud::translation::v3::BatchTranslateResponse>>
  BatchTranslateText(
      google::cloud::translation::v3::BatchTranslateTextRequest const& request);

  virtual StatusOr<google::longrunning::Operation> BatchTranslateText(
      NoAwaitTag,
      google::cloud::translation::v3::BatchTranslateTextRequest const& request);

  virtual future<
      StatusOr<google::cloud::translation::v3::BatchTranslateResponse>>
  BatchTranslateText(google::longrunning::Operation const& operation);

  virtual future<
      StatusOr<google::cloud::translation::v3::BatchTranslateDocumentResponse>>
  BatchTranslateDocument(
      google::cloud::translation::v3::BatchTranslateDocumentRequest const&
          request);

  virtual StatusOr<google::longrunning::Operation> BatchTranslateDocument(
      NoAwaitTag,
      google::cloud::translation::v3::BatchTranslateDocumentRequest const&
          request);

  virtual future<
      StatusOr<google::cloud::translation::v3::BatchTranslateDocumentResponse>>
  BatchTranslateDocument(google::longrunning::Operation const& operation);

  virtual future<StatusOr<google::cloud::translation::v3::Glossary>>
  CreateGlossary(
      google::cloud::translation::v3::CreateGlossaryRequest const& request);

  virtual StatusOr<google::longrunning::Operation> CreateGlossary(
      NoAwaitTag,
      google::cloud::translation::v3::CreateGlossaryRequest const& request);

  virtual future<StatusOr<google::cloud::translation::v3::Glossary>>
  CreateGlossary(google::longrunning::Operation const& operation);

  virtual future<StatusOr<google::cloud::translation::v3::Glossary>>
  UpdateGlossary(
      google::cloud::translation::v3::UpdateGlossaryRequest const& request);

  virtual StatusOr<google::longrunning::Operation> UpdateGlossary(
      NoAwaitTag,
      google::cloud::translation::v3::UpdateGlossaryRequest const& request);

  virtual future<StatusOr<google::cloud::translation::v3::Glossary>>
  UpdateGlossary(google::longrunning::Operation const& operation);

  virtual StreamRange<google::cloud::translation::v3::Glossary> ListGlossaries(
      google::cloud::translation::v3::ListGlossariesRequest request);

  virtual StatusOr<google::cloud::translation::v3::Glossary> GetGlossary(
      google::cloud::translation::v3::GetGlossaryRequest const& request);

  virtual future<
      StatusOr<google::cloud::translation::v3::DeleteGlossaryResponse>>
  DeleteGlossary(
      google::cloud::translation::v3::DeleteGlossaryRequest const& request);

  virtual StatusOr<google::longrunning::Operation> DeleteGlossary(
      NoAwaitTag,
      google::cloud::translation::v3::DeleteGlossaryRequest const& request);

  virtual future<
      StatusOr<google::cloud::translation::v3::DeleteGlossaryResponse>>
  DeleteGlossary(google::longrunning::Operation const& operation);

  virtual StatusOr<google::cloud::translation::v3::GlossaryEntry>
  GetGlossaryEntry(
      google::cloud::translation::v3::GetGlossaryEntryRequest const& request);

  virtual StreamRange<google::cloud::translation::v3::GlossaryEntry>
  ListGlossaryEntries(
      google::cloud::translation::v3::ListGlossaryEntriesRequest request);

  virtual StatusOr<google::cloud::translation::v3::GlossaryEntry>
  CreateGlossaryEntry(
      google::cloud::translation::v3::CreateGlossaryEntryRequest const&
          request);

  virtual StatusOr<google::cloud::translation::v3::GlossaryEntry>
  UpdateGlossaryEntry(
      google::cloud::translation::v3::UpdateGlossaryEntryRequest const&
          request);

  virtual Status DeleteGlossaryEntry(
      google::cloud::translation::v3::DeleteGlossaryEntryRequest const&
          request);

  virtual future<StatusOr<google::cloud::translation::v3::Dataset>>
  CreateDataset(
      google::cloud::translation::v3::CreateDatasetRequest const& request);

  virtual StatusOr<google::longrunning::Operation> CreateDataset(
      NoAwaitTag,
      google::cloud::translation::v3::CreateDatasetRequest const& request);

  virtual future<StatusOr<google::cloud::translation::v3::Dataset>>
  CreateDataset(google::longrunning::Operation const& operation);

  virtual StatusOr<google::cloud::translation::v3::Dataset> GetDataset(
      google::cloud::translation::v3::GetDatasetRequest const& request);

  virtual StreamRange<google::cloud::translation::v3::Dataset> ListDatasets(
      google::cloud::translation::v3::ListDatasetsRequest request);

  virtual future<
      StatusOr<google::cloud::translation::v3::DeleteDatasetMetadata>>
  DeleteDataset(
      google::cloud::translation::v3::DeleteDatasetRequest const& request);

  virtual StatusOr<google::longrunning::Operation> DeleteDataset(
      NoAwaitTag,
      google::cloud::translation::v3::DeleteDatasetRequest const& request);

  virtual future<
      StatusOr<google::cloud::translation::v3::DeleteDatasetMetadata>>
  DeleteDataset(google::longrunning::Operation const& operation);

  virtual StatusOr<google::cloud::translation::v3::AdaptiveMtDataset>
  CreateAdaptiveMtDataset(
      google::cloud::translation::v3::CreateAdaptiveMtDatasetRequest const&
          request);

  virtual Status DeleteAdaptiveMtDataset(
      google::cloud::translation::v3::DeleteAdaptiveMtDatasetRequest const&
          request);

  virtual StatusOr<google::cloud::translation::v3::AdaptiveMtDataset>
  GetAdaptiveMtDataset(
      google::cloud::translation::v3::GetAdaptiveMtDatasetRequest const&
          request);

  virtual StreamRange<google::cloud::translation::v3::AdaptiveMtDataset>
  ListAdaptiveMtDatasets(
      google::cloud::translation::v3::ListAdaptiveMtDatasetsRequest request);

  virtual StatusOr<google::cloud::translation::v3::AdaptiveMtTranslateResponse>
  AdaptiveMtTranslate(
      google::cloud::translation::v3::AdaptiveMtTranslateRequest const&
          request);

  virtual StatusOr<google::cloud::translation::v3::AdaptiveMtFile>
  GetAdaptiveMtFile(
      google::cloud::translation::v3::GetAdaptiveMtFileRequest const& request);

  virtual Status DeleteAdaptiveMtFile(
      google::cloud::translation::v3::DeleteAdaptiveMtFileRequest const&
          request);

  virtual StatusOr<google::cloud::translation::v3::ImportAdaptiveMtFileResponse>
  ImportAdaptiveMtFile(
      google::cloud::translation::v3::ImportAdaptiveMtFileRequest const&
          request);

  virtual StreamRange<google::cloud::translation::v3::AdaptiveMtFile>
  ListAdaptiveMtFiles(
      google::cloud::translation::v3::ListAdaptiveMtFilesRequest request);

  virtual StreamRange<google::cloud::translation::v3::AdaptiveMtSentence>
  ListAdaptiveMtSentences(
      google::cloud::translation::v3::ListAdaptiveMtSentencesRequest request);

  virtual future<StatusOr<google::cloud::translation::v3::ImportDataMetadata>>
  ImportData(google::cloud::translation::v3::ImportDataRequest const& request);

  virtual StatusOr<google::longrunning::Operation> ImportData(
      NoAwaitTag,
      google::cloud::translation::v3::ImportDataRequest const& request);

  virtual future<StatusOr<google::cloud::translation::v3::ImportDataMetadata>>
  ImportData(google::longrunning::Operation const& operation);

  virtual future<StatusOr<google::cloud::translation::v3::ExportDataMetadata>>
  ExportData(google::cloud::translation::v3::ExportDataRequest const& request);

  virtual StatusOr<google::longrunning::Operation> ExportData(
      NoAwaitTag,
      google::cloud::translation::v3::ExportDataRequest const& request);

  virtual future<StatusOr<google::cloud::translation::v3::ExportDataMetadata>>
  ExportData(google::longrunning::Operation const& operation);

  virtual StreamRange<google::cloud::translation::v3::Example> ListExamples(
      google::cloud::translation::v3::ListExamplesRequest request);

  virtual future<StatusOr<google::cloud::translation::v3::Model>> CreateModel(
      google::cloud::translation::v3::CreateModelRequest const& request);

  virtual StatusOr<google::longrunning::Operation> CreateModel(
      NoAwaitTag,
      google::cloud::translation::v3::CreateModelRequest const& request);

  virtual future<StatusOr<google::cloud::translation::v3::Model>> CreateModel(
      google::longrunning::Operation const& operation);

  virtual StreamRange<google::cloud::translation::v3::Model> ListModels(
      google::cloud::translation::v3::ListModelsRequest request);

  virtual StatusOr<google::cloud::translation::v3::Model> GetModel(
      google::cloud::translation::v3::GetModelRequest const& request);

  virtual future<StatusOr<google::cloud::translation::v3::DeleteModelMetadata>>
  DeleteModel(
      google::cloud::translation::v3::DeleteModelRequest const& request);

  virtual StatusOr<google::longrunning::Operation> DeleteModel(
      NoAwaitTag,
      google::cloud::translation::v3::DeleteModelRequest const& request);

  virtual future<StatusOr<google::cloud::translation::v3::DeleteModelMetadata>>
  DeleteModel(google::longrunning::Operation const& operation);
};

/**
 * A factory function to construct an object of type
 * `TranslationServiceConnection`.
 *
 * The returned connection object should not be used directly; instead it
 * should be passed as an argument to the constructor of
 * TranslationServiceClient.
 *
 * The optional @p options argument may be used to configure aspects of the
 * returned `TranslationServiceConnection`. Expected options are any of the
 * types in the following option lists:
 *
 * - `google::cloud::CommonOptionList`
 * - `google::cloud::GrpcOptionList`
 * - `google::cloud::UnifiedCredentialsOptionList`
 * - `google::cloud::translate_v3::TranslationServicePolicyOptionList`
 *
 * @note Unexpected options will be ignored. To log unexpected options instead,
 *     set `GOOGLE_CLOUD_CPP_ENABLE_CLOG=yes` in the environment.
 *
 * @param options (optional) Configure the `TranslationServiceConnection`
 * created by this function.
 */
std::shared_ptr<TranslationServiceConnection> MakeTranslationServiceConnection(
    Options options = {});

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace translate_v3
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_TRANSLATE_V3_TRANSLATION_CONNECTION_H
