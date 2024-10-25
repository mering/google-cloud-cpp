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

#include "google/cloud/speech/v2/internal/speech_auth_decorator.h"
#include "google/cloud/speech/v2/cloud_speech.grpc.pb.h"
#include "google/cloud/internal/async_read_write_stream_auth.h"
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace speech_v2_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

SpeechAuth::SpeechAuth(
    std::shared_ptr<google::cloud::internal::GrpcAuthenticationStrategy> auth,
    std::shared_ptr<SpeechStub> child)
    : auth_(std::move(auth)), child_(std::move(child)) {}

future<StatusOr<google::longrunning::Operation>>
SpeechAuth::AsyncCreateRecognizer(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::speech::v2::CreateRecognizerRequest const& request) {
  using ReturnType = StatusOr<google::longrunning::Operation>;
  return auth_->AsyncConfigureContext(std::move(context))
      .then([cq, child = child_, options = std::move(options),
             request](future<StatusOr<std::shared_ptr<grpc::ClientContext>>>
                          f) mutable {
        auto context = f.get();
        if (!context) {
          return make_ready_future(ReturnType(std::move(context).status()));
        }
        return child->AsyncCreateRecognizer(cq, *std::move(context),
                                            std::move(options), request);
      });
}

StatusOr<google::longrunning::Operation> SpeechAuth::CreateRecognizer(
    grpc::ClientContext& context, Options options,
    google::cloud::speech::v2::CreateRecognizerRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->CreateRecognizer(context, options, request);
}

StatusOr<google::cloud::speech::v2::ListRecognizersResponse>
SpeechAuth::ListRecognizers(
    grpc::ClientContext& context, Options const& options,
    google::cloud::speech::v2::ListRecognizersRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->ListRecognizers(context, options, request);
}

StatusOr<google::cloud::speech::v2::Recognizer> SpeechAuth::GetRecognizer(
    grpc::ClientContext& context, Options const& options,
    google::cloud::speech::v2::GetRecognizerRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->GetRecognizer(context, options, request);
}

future<StatusOr<google::longrunning::Operation>>
SpeechAuth::AsyncUpdateRecognizer(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::speech::v2::UpdateRecognizerRequest const& request) {
  using ReturnType = StatusOr<google::longrunning::Operation>;
  return auth_->AsyncConfigureContext(std::move(context))
      .then([cq, child = child_, options = std::move(options),
             request](future<StatusOr<std::shared_ptr<grpc::ClientContext>>>
                          f) mutable {
        auto context = f.get();
        if (!context) {
          return make_ready_future(ReturnType(std::move(context).status()));
        }
        return child->AsyncUpdateRecognizer(cq, *std::move(context),
                                            std::move(options), request);
      });
}

StatusOr<google::longrunning::Operation> SpeechAuth::UpdateRecognizer(
    grpc::ClientContext& context, Options options,
    google::cloud::speech::v2::UpdateRecognizerRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->UpdateRecognizer(context, options, request);
}

future<StatusOr<google::longrunning::Operation>>
SpeechAuth::AsyncDeleteRecognizer(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::speech::v2::DeleteRecognizerRequest const& request) {
  using ReturnType = StatusOr<google::longrunning::Operation>;
  return auth_->AsyncConfigureContext(std::move(context))
      .then([cq, child = child_, options = std::move(options),
             request](future<StatusOr<std::shared_ptr<grpc::ClientContext>>>
                          f) mutable {
        auto context = f.get();
        if (!context) {
          return make_ready_future(ReturnType(std::move(context).status()));
        }
        return child->AsyncDeleteRecognizer(cq, *std::move(context),
                                            std::move(options), request);
      });
}

StatusOr<google::longrunning::Operation> SpeechAuth::DeleteRecognizer(
    grpc::ClientContext& context, Options options,
    google::cloud::speech::v2::DeleteRecognizerRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->DeleteRecognizer(context, options, request);
}

future<StatusOr<google::longrunning::Operation>>
SpeechAuth::AsyncUndeleteRecognizer(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::speech::v2::UndeleteRecognizerRequest const& request) {
  using ReturnType = StatusOr<google::longrunning::Operation>;
  return auth_->AsyncConfigureContext(std::move(context))
      .then([cq, child = child_, options = std::move(options),
             request](future<StatusOr<std::shared_ptr<grpc::ClientContext>>>
                          f) mutable {
        auto context = f.get();
        if (!context) {
          return make_ready_future(ReturnType(std::move(context).status()));
        }
        return child->AsyncUndeleteRecognizer(cq, *std::move(context),
                                              std::move(options), request);
      });
}

StatusOr<google::longrunning::Operation> SpeechAuth::UndeleteRecognizer(
    grpc::ClientContext& context, Options options,
    google::cloud::speech::v2::UndeleteRecognizerRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->UndeleteRecognizer(context, options, request);
}

StatusOr<google::cloud::speech::v2::RecognizeResponse> SpeechAuth::Recognize(
    grpc::ClientContext& context, Options const& options,
    google::cloud::speech::v2::RecognizeRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->Recognize(context, options, request);
}

std::unique_ptr<::google::cloud::AsyncStreamingReadWriteRpc<
    google::cloud::speech::v2::StreamingRecognizeRequest,
    google::cloud::speech::v2::StreamingRecognizeResponse>>
SpeechAuth::AsyncStreamingRecognize(
    google::cloud::CompletionQueue const& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options) {
  using StreamAuth = google::cloud::internal::AsyncStreamingReadWriteRpcAuth<
      google::cloud::speech::v2::StreamingRecognizeRequest,
      google::cloud::speech::v2::StreamingRecognizeResponse>;

  auto call = [child = child_, cq, options = std::move(options)](
                  std::shared_ptr<grpc::ClientContext> ctx) {
    return child->AsyncStreamingRecognize(cq, std::move(ctx), options);
  };
  return std::make_unique<StreamAuth>(
      std::move(context), auth_, StreamAuth::StreamFactory(std::move(call)));
}

future<StatusOr<google::longrunning::Operation>>
SpeechAuth::AsyncBatchRecognize(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::speech::v2::BatchRecognizeRequest const& request) {
  using ReturnType = StatusOr<google::longrunning::Operation>;
  return auth_->AsyncConfigureContext(std::move(context))
      .then([cq, child = child_, options = std::move(options),
             request](future<StatusOr<std::shared_ptr<grpc::ClientContext>>>
                          f) mutable {
        auto context = f.get();
        if (!context) {
          return make_ready_future(ReturnType(std::move(context).status()));
        }
        return child->AsyncBatchRecognize(cq, *std::move(context),
                                          std::move(options), request);
      });
}

StatusOr<google::longrunning::Operation> SpeechAuth::BatchRecognize(
    grpc::ClientContext& context, Options options,
    google::cloud::speech::v2::BatchRecognizeRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->BatchRecognize(context, options, request);
}

StatusOr<google::cloud::speech::v2::Config> SpeechAuth::GetConfig(
    grpc::ClientContext& context, Options const& options,
    google::cloud::speech::v2::GetConfigRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->GetConfig(context, options, request);
}

StatusOr<google::cloud::speech::v2::Config> SpeechAuth::UpdateConfig(
    grpc::ClientContext& context, Options const& options,
    google::cloud::speech::v2::UpdateConfigRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->UpdateConfig(context, options, request);
}

future<StatusOr<google::longrunning::Operation>>
SpeechAuth::AsyncCreateCustomClass(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::speech::v2::CreateCustomClassRequest const& request) {
  using ReturnType = StatusOr<google::longrunning::Operation>;
  return auth_->AsyncConfigureContext(std::move(context))
      .then([cq, child = child_, options = std::move(options),
             request](future<StatusOr<std::shared_ptr<grpc::ClientContext>>>
                          f) mutable {
        auto context = f.get();
        if (!context) {
          return make_ready_future(ReturnType(std::move(context).status()));
        }
        return child->AsyncCreateCustomClass(cq, *std::move(context),
                                             std::move(options), request);
      });
}

StatusOr<google::longrunning::Operation> SpeechAuth::CreateCustomClass(
    grpc::ClientContext& context, Options options,
    google::cloud::speech::v2::CreateCustomClassRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->CreateCustomClass(context, options, request);
}

StatusOr<google::cloud::speech::v2::ListCustomClassesResponse>
SpeechAuth::ListCustomClasses(
    grpc::ClientContext& context, Options const& options,
    google::cloud::speech::v2::ListCustomClassesRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->ListCustomClasses(context, options, request);
}

StatusOr<google::cloud::speech::v2::CustomClass> SpeechAuth::GetCustomClass(
    grpc::ClientContext& context, Options const& options,
    google::cloud::speech::v2::GetCustomClassRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->GetCustomClass(context, options, request);
}

future<StatusOr<google::longrunning::Operation>>
SpeechAuth::AsyncUpdateCustomClass(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::speech::v2::UpdateCustomClassRequest const& request) {
  using ReturnType = StatusOr<google::longrunning::Operation>;
  return auth_->AsyncConfigureContext(std::move(context))
      .then([cq, child = child_, options = std::move(options),
             request](future<StatusOr<std::shared_ptr<grpc::ClientContext>>>
                          f) mutable {
        auto context = f.get();
        if (!context) {
          return make_ready_future(ReturnType(std::move(context).status()));
        }
        return child->AsyncUpdateCustomClass(cq, *std::move(context),
                                             std::move(options), request);
      });
}

StatusOr<google::longrunning::Operation> SpeechAuth::UpdateCustomClass(
    grpc::ClientContext& context, Options options,
    google::cloud::speech::v2::UpdateCustomClassRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->UpdateCustomClass(context, options, request);
}

future<StatusOr<google::longrunning::Operation>>
SpeechAuth::AsyncDeleteCustomClass(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::speech::v2::DeleteCustomClassRequest const& request) {
  using ReturnType = StatusOr<google::longrunning::Operation>;
  return auth_->AsyncConfigureContext(std::move(context))
      .then([cq, child = child_, options = std::move(options),
             request](future<StatusOr<std::shared_ptr<grpc::ClientContext>>>
                          f) mutable {
        auto context = f.get();
        if (!context) {
          return make_ready_future(ReturnType(std::move(context).status()));
        }
        return child->AsyncDeleteCustomClass(cq, *std::move(context),
                                             std::move(options), request);
      });
}

StatusOr<google::longrunning::Operation> SpeechAuth::DeleteCustomClass(
    grpc::ClientContext& context, Options options,
    google::cloud::speech::v2::DeleteCustomClassRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->DeleteCustomClass(context, options, request);
}

future<StatusOr<google::longrunning::Operation>>
SpeechAuth::AsyncUndeleteCustomClass(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::speech::v2::UndeleteCustomClassRequest const& request) {
  using ReturnType = StatusOr<google::longrunning::Operation>;
  return auth_->AsyncConfigureContext(std::move(context))
      .then([cq, child = child_, options = std::move(options),
             request](future<StatusOr<std::shared_ptr<grpc::ClientContext>>>
                          f) mutable {
        auto context = f.get();
        if (!context) {
          return make_ready_future(ReturnType(std::move(context).status()));
        }
        return child->AsyncUndeleteCustomClass(cq, *std::move(context),
                                               std::move(options), request);
      });
}

StatusOr<google::longrunning::Operation> SpeechAuth::UndeleteCustomClass(
    grpc::ClientContext& context, Options options,
    google::cloud::speech::v2::UndeleteCustomClassRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->UndeleteCustomClass(context, options, request);
}

future<StatusOr<google::longrunning::Operation>>
SpeechAuth::AsyncCreatePhraseSet(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::speech::v2::CreatePhraseSetRequest const& request) {
  using ReturnType = StatusOr<google::longrunning::Operation>;
  return auth_->AsyncConfigureContext(std::move(context))
      .then([cq, child = child_, options = std::move(options),
             request](future<StatusOr<std::shared_ptr<grpc::ClientContext>>>
                          f) mutable {
        auto context = f.get();
        if (!context) {
          return make_ready_future(ReturnType(std::move(context).status()));
        }
        return child->AsyncCreatePhraseSet(cq, *std::move(context),
                                           std::move(options), request);
      });
}

StatusOr<google::longrunning::Operation> SpeechAuth::CreatePhraseSet(
    grpc::ClientContext& context, Options options,
    google::cloud::speech::v2::CreatePhraseSetRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->CreatePhraseSet(context, options, request);
}

StatusOr<google::cloud::speech::v2::ListPhraseSetsResponse>
SpeechAuth::ListPhraseSets(
    grpc::ClientContext& context, Options const& options,
    google::cloud::speech::v2::ListPhraseSetsRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->ListPhraseSets(context, options, request);
}

StatusOr<google::cloud::speech::v2::PhraseSet> SpeechAuth::GetPhraseSet(
    grpc::ClientContext& context, Options const& options,
    google::cloud::speech::v2::GetPhraseSetRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->GetPhraseSet(context, options, request);
}

future<StatusOr<google::longrunning::Operation>>
SpeechAuth::AsyncUpdatePhraseSet(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::speech::v2::UpdatePhraseSetRequest const& request) {
  using ReturnType = StatusOr<google::longrunning::Operation>;
  return auth_->AsyncConfigureContext(std::move(context))
      .then([cq, child = child_, options = std::move(options),
             request](future<StatusOr<std::shared_ptr<grpc::ClientContext>>>
                          f) mutable {
        auto context = f.get();
        if (!context) {
          return make_ready_future(ReturnType(std::move(context).status()));
        }
        return child->AsyncUpdatePhraseSet(cq, *std::move(context),
                                           std::move(options), request);
      });
}

StatusOr<google::longrunning::Operation> SpeechAuth::UpdatePhraseSet(
    grpc::ClientContext& context, Options options,
    google::cloud::speech::v2::UpdatePhraseSetRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->UpdatePhraseSet(context, options, request);
}

future<StatusOr<google::longrunning::Operation>>
SpeechAuth::AsyncDeletePhraseSet(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::speech::v2::DeletePhraseSetRequest const& request) {
  using ReturnType = StatusOr<google::longrunning::Operation>;
  return auth_->AsyncConfigureContext(std::move(context))
      .then([cq, child = child_, options = std::move(options),
             request](future<StatusOr<std::shared_ptr<grpc::ClientContext>>>
                          f) mutable {
        auto context = f.get();
        if (!context) {
          return make_ready_future(ReturnType(std::move(context).status()));
        }
        return child->AsyncDeletePhraseSet(cq, *std::move(context),
                                           std::move(options), request);
      });
}

StatusOr<google::longrunning::Operation> SpeechAuth::DeletePhraseSet(
    grpc::ClientContext& context, Options options,
    google::cloud::speech::v2::DeletePhraseSetRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->DeletePhraseSet(context, options, request);
}

future<StatusOr<google::longrunning::Operation>>
SpeechAuth::AsyncUndeletePhraseSet(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::speech::v2::UndeletePhraseSetRequest const& request) {
  using ReturnType = StatusOr<google::longrunning::Operation>;
  return auth_->AsyncConfigureContext(std::move(context))
      .then([cq, child = child_, options = std::move(options),
             request](future<StatusOr<std::shared_ptr<grpc::ClientContext>>>
                          f) mutable {
        auto context = f.get();
        if (!context) {
          return make_ready_future(ReturnType(std::move(context).status()));
        }
        return child->AsyncUndeletePhraseSet(cq, *std::move(context),
                                             std::move(options), request);
      });
}

StatusOr<google::longrunning::Operation> SpeechAuth::UndeletePhraseSet(
    grpc::ClientContext& context, Options options,
    google::cloud::speech::v2::UndeletePhraseSetRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->UndeletePhraseSet(context, options, request);
}

StatusOr<google::cloud::location::ListLocationsResponse>
SpeechAuth::ListLocations(
    grpc::ClientContext& context, Options const& options,
    google::cloud::location::ListLocationsRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->ListLocations(context, options, request);
}

StatusOr<google::cloud::location::Location> SpeechAuth::GetLocation(
    grpc::ClientContext& context, Options const& options,
    google::cloud::location::GetLocationRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->GetLocation(context, options, request);
}

StatusOr<google::longrunning::ListOperationsResponse>
SpeechAuth::ListOperations(
    grpc::ClientContext& context, Options const& options,
    google::longrunning::ListOperationsRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->ListOperations(context, options, request);
}

StatusOr<google::longrunning::Operation> SpeechAuth::GetOperation(
    grpc::ClientContext& context, Options const& options,
    google::longrunning::GetOperationRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->GetOperation(context, options, request);
}

Status SpeechAuth::DeleteOperation(
    grpc::ClientContext& context, Options const& options,
    google::longrunning::DeleteOperationRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->DeleteOperation(context, options, request);
}

Status SpeechAuth::CancelOperation(
    grpc::ClientContext& context, Options const& options,
    google::longrunning::CancelOperationRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->CancelOperation(context, options, request);
}

future<StatusOr<google::longrunning::Operation>> SpeechAuth::AsyncGetOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::longrunning::GetOperationRequest const& request) {
  using ReturnType = StatusOr<google::longrunning::Operation>;
  return auth_->AsyncConfigureContext(std::move(context))
      .then([cq, child = child_, options = std::move(options),
             request](future<StatusOr<std::shared_ptr<grpc::ClientContext>>>
                          f) mutable {
        auto context = f.get();
        if (!context) {
          return make_ready_future(ReturnType(std::move(context).status()));
        }
        return child->AsyncGetOperation(cq, *std::move(context),
                                        std::move(options), request);
      });
}

future<Status> SpeechAuth::AsyncCancelOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::longrunning::CancelOperationRequest const& request) {
  return auth_->AsyncConfigureContext(std::move(context))
      .then([cq, child = child_, options = std::move(options),
             request](future<StatusOr<std::shared_ptr<grpc::ClientContext>>>
                          f) mutable {
        auto context = f.get();
        if (!context) return make_ready_future(std::move(context).status());
        return child->AsyncCancelOperation(cq, *std::move(context),
                                           std::move(options), request);
      });
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace speech_v2_internal
}  // namespace cloud
}  // namespace google
