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
// source: google/cloud/automl/v1/prediction_service.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_AUTOML_V1_INTERNAL_PREDICTION_STUB_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_AUTOML_V1_INTERNAL_PREDICTION_STUB_H

#include "google/cloud/automl/v1/operations.pb.h"
#include "google/cloud/automl/v1/prediction_service.grpc.pb.h"
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
namespace automl_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class PredictionServiceStub {
 public:
  virtual ~PredictionServiceStub() = 0;

  virtual StatusOr<google::cloud::automl::v1::PredictResponse> Predict(
      grpc::ClientContext& context, Options const& options,
      google::cloud::automl::v1::PredictRequest const& request) = 0;

  virtual future<StatusOr<google::longrunning::Operation>> AsyncBatchPredict(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::automl::v1::BatchPredictRequest const& request) = 0;

  virtual StatusOr<google::longrunning::Operation> BatchPredict(
      grpc::ClientContext& context, Options options,
      google::cloud::automl::v1::BatchPredictRequest const& request) = 0;

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

class DefaultPredictionServiceStub : public PredictionServiceStub {
 public:
  DefaultPredictionServiceStub(
      std::unique_ptr<
          google::cloud::automl::v1::PredictionService::StubInterface>
          grpc_stub,
      std::unique_ptr<google::longrunning::Operations::StubInterface>
          operations)
      : grpc_stub_(std::move(grpc_stub)), operations_(std::move(operations)) {}

  StatusOr<google::cloud::automl::v1::PredictResponse> Predict(
      grpc::ClientContext& context, Options const& options,
      google::cloud::automl::v1::PredictRequest const& request) override;

  future<StatusOr<google::longrunning::Operation>> AsyncBatchPredict(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::automl::v1::BatchPredictRequest const& request) override;

  StatusOr<google::longrunning::Operation> BatchPredict(
      grpc::ClientContext& context, Options options,
      google::cloud::automl::v1::BatchPredictRequest const& request) override;

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
  std::unique_ptr<google::cloud::automl::v1::PredictionService::StubInterface>
      grpc_stub_;
  std::unique_ptr<google::longrunning::Operations::StubInterface> operations_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace automl_v1_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_AUTOML_V1_INTERNAL_PREDICTION_STUB_H
