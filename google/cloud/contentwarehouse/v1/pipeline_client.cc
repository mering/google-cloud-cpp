// Copyright 2024 Google LLC
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
// source: google/cloud/contentwarehouse/v1/pipeline_service.proto

#include "google/cloud/contentwarehouse/v1/pipeline_client.h"
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace contentwarehouse_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

PipelineServiceClient::PipelineServiceClient(
    std::shared_ptr<PipelineServiceConnection> connection, Options opts)
    : connection_(std::move(connection)),
      options_(
          internal::MergeOptions(std::move(opts), connection_->options())) {}
PipelineServiceClient::~PipelineServiceClient() = default;

future<StatusOr<google::cloud::contentwarehouse::v1::RunPipelineResponse>>
PipelineServiceClient::RunPipeline(std::string const& name, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::contentwarehouse::v1::RunPipelineRequest request;
  request.set_name(name);
  return connection_->RunPipeline(request);
}

StatusOr<google::longrunning::Operation> PipelineServiceClient::RunPipeline(
    ExperimentalTag, NoAwaitTag, std::string const& name, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::contentwarehouse::v1::RunPipelineRequest request;
  request.set_name(name);
  return connection_->RunPipeline(ExperimentalTag{}, NoAwaitTag{}, request);
}

future<StatusOr<google::cloud::contentwarehouse::v1::RunPipelineResponse>>
PipelineServiceClient::RunPipeline(
    google::cloud::contentwarehouse::v1::RunPipelineRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->RunPipeline(request);
}

StatusOr<google::longrunning::Operation> PipelineServiceClient::RunPipeline(
    ExperimentalTag, NoAwaitTag,
    google::cloud::contentwarehouse::v1::RunPipelineRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->RunPipeline(ExperimentalTag{}, NoAwaitTag{}, request);
}

future<StatusOr<google::cloud::contentwarehouse::v1::RunPipelineResponse>>
PipelineServiceClient::RunPipeline(
    ExperimentalTag, google::longrunning::Operation const& operation,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->RunPipeline(ExperimentalTag{}, operation);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace contentwarehouse_v1
}  // namespace cloud
}  // namespace google
