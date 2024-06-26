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
// source: google/cloud/retail/v2/completion_service.proto

#include "google/cloud/retail/v2/completion_client.h"
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace retail_v2 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

CompletionServiceClient::CompletionServiceClient(
    std::shared_ptr<CompletionServiceConnection> connection, Options opts)
    : connection_(std::move(connection)),
      options_(
          internal::MergeOptions(std::move(opts), connection_->options())) {}
CompletionServiceClient::~CompletionServiceClient() = default;

StatusOr<google::cloud::retail::v2::CompleteQueryResponse>
CompletionServiceClient::CompleteQuery(
    google::cloud::retail::v2::CompleteQueryRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->CompleteQuery(request);
}

future<StatusOr<google::cloud::retail::v2::ImportCompletionDataResponse>>
CompletionServiceClient::ImportCompletionData(
    google::cloud::retail::v2::ImportCompletionDataRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->ImportCompletionData(request);
}

StatusOr<google::longrunning::Operation>
CompletionServiceClient::ImportCompletionData(
    ExperimentalTag, NoAwaitTag,
    google::cloud::retail::v2::ImportCompletionDataRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->ImportCompletionData(ExperimentalTag{}, NoAwaitTag{},
                                           request);
}

future<StatusOr<google::cloud::retail::v2::ImportCompletionDataResponse>>
CompletionServiceClient::ImportCompletionData(
    ExperimentalTag, google::longrunning::Operation const& operation,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->ImportCompletionData(ExperimentalTag{}, operation);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace retail_v2
}  // namespace cloud
}  // namespace google
