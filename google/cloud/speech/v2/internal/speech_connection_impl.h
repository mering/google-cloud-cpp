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
// source: google/cloud/speech/v2/cloud_speech.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_SPEECH_V2_INTERNAL_SPEECH_CONNECTION_IMPL_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_SPEECH_V2_INTERNAL_SPEECH_CONNECTION_IMPL_H

#include "google/cloud/speech/v2/internal/speech_retry_traits.h"
#include "google/cloud/speech/v2/internal/speech_stub.h"
#include "google/cloud/speech/v2/speech_connection.h"
#include "google/cloud/speech/v2/speech_connection_idempotency_policy.h"
#include "google/cloud/speech/v2/speech_options.h"
#include "google/cloud/async_streaming_read_write_rpc.h"
#include "google/cloud/background_threads.h"
#include "google/cloud/backoff_policy.h"
#include "google/cloud/future.h"
#include "google/cloud/options.h"
#include "google/cloud/polling_policy.h"
#include "google/cloud/status_or.h"
#include "google/cloud/stream_range.h"
#include "google/cloud/version.h"
#include "google/longrunning/operations.grpc.pb.h"
#include <memory>

namespace google {
namespace cloud {
namespace speech_v2_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class SpeechConnectionImpl : public speech_v2::SpeechConnection {
 public:
  ~SpeechConnectionImpl() override = default;

  SpeechConnectionImpl(
      std::unique_ptr<google::cloud::BackgroundThreads> background,
      std::shared_ptr<speech_v2_internal::SpeechStub> stub, Options options);

  Options options() override { return options_; }

  future<StatusOr<google::cloud::speech::v2::Recognizer>> CreateRecognizer(
      google::cloud::speech::v2::CreateRecognizerRequest const& request)
      override;

  StatusOr<google::longrunning::Operation> CreateRecognizer(
      NoAwaitTag,
      google::cloud::speech::v2::CreateRecognizerRequest const& request)
      override;

  future<StatusOr<google::cloud::speech::v2::Recognizer>> CreateRecognizer(
      google::longrunning::Operation const& operation) override;

  StreamRange<google::cloud::speech::v2::Recognizer> ListRecognizers(
      google::cloud::speech::v2::ListRecognizersRequest request) override;

  StatusOr<google::cloud::speech::v2::Recognizer> GetRecognizer(
      google::cloud::speech::v2::GetRecognizerRequest const& request) override;

  future<StatusOr<google::cloud::speech::v2::Recognizer>> UpdateRecognizer(
      google::cloud::speech::v2::UpdateRecognizerRequest const& request)
      override;

  StatusOr<google::longrunning::Operation> UpdateRecognizer(
      NoAwaitTag,
      google::cloud::speech::v2::UpdateRecognizerRequest const& request)
      override;

  future<StatusOr<google::cloud::speech::v2::Recognizer>> UpdateRecognizer(
      google::longrunning::Operation const& operation) override;

  future<StatusOr<google::cloud::speech::v2::Recognizer>> DeleteRecognizer(
      google::cloud::speech::v2::DeleteRecognizerRequest const& request)
      override;

  StatusOr<google::longrunning::Operation> DeleteRecognizer(
      NoAwaitTag,
      google::cloud::speech::v2::DeleteRecognizerRequest const& request)
      override;

  future<StatusOr<google::cloud::speech::v2::Recognizer>> DeleteRecognizer(
      google::longrunning::Operation const& operation) override;

  future<StatusOr<google::cloud::speech::v2::Recognizer>> UndeleteRecognizer(
      google::cloud::speech::v2::UndeleteRecognizerRequest const& request)
      override;

  StatusOr<google::longrunning::Operation> UndeleteRecognizer(
      NoAwaitTag,
      google::cloud::speech::v2::UndeleteRecognizerRequest const& request)
      override;

  future<StatusOr<google::cloud::speech::v2::Recognizer>> UndeleteRecognizer(
      google::longrunning::Operation const& operation) override;

  StatusOr<google::cloud::speech::v2::RecognizeResponse> Recognize(
      google::cloud::speech::v2::RecognizeRequest const& request) override;

  std::unique_ptr<::google::cloud::AsyncStreamingReadWriteRpc<
      google::cloud::speech::v2::StreamingRecognizeRequest,
      google::cloud::speech::v2::StreamingRecognizeResponse>>
  AsyncStreamingRecognize() override;

  future<StatusOr<google::cloud::speech::v2::BatchRecognizeResponse>>
  BatchRecognize(
      google::cloud::speech::v2::BatchRecognizeRequest const& request) override;

  StatusOr<google::longrunning::Operation> BatchRecognize(
      NoAwaitTag,
      google::cloud::speech::v2::BatchRecognizeRequest const& request) override;

  future<StatusOr<google::cloud::speech::v2::BatchRecognizeResponse>>
  BatchRecognize(google::longrunning::Operation const& operation) override;

  StatusOr<google::cloud::speech::v2::Config> GetConfig(
      google::cloud::speech::v2::GetConfigRequest const& request) override;

  StatusOr<google::cloud::speech::v2::Config> UpdateConfig(
      google::cloud::speech::v2::UpdateConfigRequest const& request) override;

  future<StatusOr<google::cloud::speech::v2::CustomClass>> CreateCustomClass(
      google::cloud::speech::v2::CreateCustomClassRequest const& request)
      override;

  StatusOr<google::longrunning::Operation> CreateCustomClass(
      NoAwaitTag,
      google::cloud::speech::v2::CreateCustomClassRequest const& request)
      override;

  future<StatusOr<google::cloud::speech::v2::CustomClass>> CreateCustomClass(
      google::longrunning::Operation const& operation) override;

  StreamRange<google::cloud::speech::v2::CustomClass> ListCustomClasses(
      google::cloud::speech::v2::ListCustomClassesRequest request) override;

  StatusOr<google::cloud::speech::v2::CustomClass> GetCustomClass(
      google::cloud::speech::v2::GetCustomClassRequest const& request) override;

  future<StatusOr<google::cloud::speech::v2::CustomClass>> UpdateCustomClass(
      google::cloud::speech::v2::UpdateCustomClassRequest const& request)
      override;

  StatusOr<google::longrunning::Operation> UpdateCustomClass(
      NoAwaitTag,
      google::cloud::speech::v2::UpdateCustomClassRequest const& request)
      override;

  future<StatusOr<google::cloud::speech::v2::CustomClass>> UpdateCustomClass(
      google::longrunning::Operation const& operation) override;

  future<StatusOr<google::cloud::speech::v2::CustomClass>> DeleteCustomClass(
      google::cloud::speech::v2::DeleteCustomClassRequest const& request)
      override;

  StatusOr<google::longrunning::Operation> DeleteCustomClass(
      NoAwaitTag,
      google::cloud::speech::v2::DeleteCustomClassRequest const& request)
      override;

  future<StatusOr<google::cloud::speech::v2::CustomClass>> DeleteCustomClass(
      google::longrunning::Operation const& operation) override;

  future<StatusOr<google::cloud::speech::v2::CustomClass>> UndeleteCustomClass(
      google::cloud::speech::v2::UndeleteCustomClassRequest const& request)
      override;

  StatusOr<google::longrunning::Operation> UndeleteCustomClass(
      NoAwaitTag,
      google::cloud::speech::v2::UndeleteCustomClassRequest const& request)
      override;

  future<StatusOr<google::cloud::speech::v2::CustomClass>> UndeleteCustomClass(
      google::longrunning::Operation const& operation) override;

  future<StatusOr<google::cloud::speech::v2::PhraseSet>> CreatePhraseSet(
      google::cloud::speech::v2::CreatePhraseSetRequest const& request)
      override;

  StatusOr<google::longrunning::Operation> CreatePhraseSet(
      NoAwaitTag,
      google::cloud::speech::v2::CreatePhraseSetRequest const& request)
      override;

  future<StatusOr<google::cloud::speech::v2::PhraseSet>> CreatePhraseSet(
      google::longrunning::Operation const& operation) override;

  StreamRange<google::cloud::speech::v2::PhraseSet> ListPhraseSets(
      google::cloud::speech::v2::ListPhraseSetsRequest request) override;

  StatusOr<google::cloud::speech::v2::PhraseSet> GetPhraseSet(
      google::cloud::speech::v2::GetPhraseSetRequest const& request) override;

  future<StatusOr<google::cloud::speech::v2::PhraseSet>> UpdatePhraseSet(
      google::cloud::speech::v2::UpdatePhraseSetRequest const& request)
      override;

  StatusOr<google::longrunning::Operation> UpdatePhraseSet(
      NoAwaitTag,
      google::cloud::speech::v2::UpdatePhraseSetRequest const& request)
      override;

  future<StatusOr<google::cloud::speech::v2::PhraseSet>> UpdatePhraseSet(
      google::longrunning::Operation const& operation) override;

  future<StatusOr<google::cloud::speech::v2::PhraseSet>> DeletePhraseSet(
      google::cloud::speech::v2::DeletePhraseSetRequest const& request)
      override;

  StatusOr<google::longrunning::Operation> DeletePhraseSet(
      NoAwaitTag,
      google::cloud::speech::v2::DeletePhraseSetRequest const& request)
      override;

  future<StatusOr<google::cloud::speech::v2::PhraseSet>> DeletePhraseSet(
      google::longrunning::Operation const& operation) override;

  future<StatusOr<google::cloud::speech::v2::PhraseSet>> UndeletePhraseSet(
      google::cloud::speech::v2::UndeletePhraseSetRequest const& request)
      override;

  StatusOr<google::longrunning::Operation> UndeletePhraseSet(
      NoAwaitTag,
      google::cloud::speech::v2::UndeletePhraseSetRequest const& request)
      override;

  future<StatusOr<google::cloud::speech::v2::PhraseSet>> UndeletePhraseSet(
      google::longrunning::Operation const& operation) override;

  StreamRange<google::cloud::location::Location> ListLocations(
      google::cloud::location::ListLocationsRequest request) override;

  StatusOr<google::cloud::location::Location> GetLocation(
      google::cloud::location::GetLocationRequest const& request) override;

  StreamRange<google::longrunning::Operation> ListOperations(
      google::longrunning::ListOperationsRequest request) override;

  StatusOr<google::longrunning::Operation> GetOperation(
      google::longrunning::GetOperationRequest const& request) override;

  Status DeleteOperation(
      google::longrunning::DeleteOperationRequest const& request) override;

  Status CancelOperation(
      google::longrunning::CancelOperationRequest const& request) override;

 private:
  std::unique_ptr<google::cloud::BackgroundThreads> background_;
  std::shared_ptr<speech_v2_internal::SpeechStub> stub_;
  Options options_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace speech_v2_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_SPEECH_V2_INTERNAL_SPEECH_CONNECTION_IMPL_H
