// Copyright 2023 Google LLC
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
// source: google/cloud/compute/autoscalers/v1/autoscalers.proto

#include "google/cloud/compute/autoscalers/v1/autoscalers_client.h"
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace compute_autoscalers_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

AutoscalersClient::AutoscalersClient(
    std::shared_ptr<AutoscalersConnection> connection, Options opts)
    : connection_(std::move(connection)),
      options_(
          internal::MergeOptions(std::move(opts), connection_->options())) {}
AutoscalersClient::~AutoscalersClient() = default;

StreamRange<std::pair<std::string,
                      google::cloud::cpp::compute::v1::AutoscalersScopedList>>
AutoscalersClient::AggregatedListAutoscalers(std::string const& project,
                                             Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::cpp::compute::autoscalers::v1::AggregatedListAutoscalersRequest
      request;
  request.set_project(project);
  return connection_->AggregatedListAutoscalers(request);
}

StreamRange<std::pair<std::string,
                      google::cloud::cpp::compute::v1::AutoscalersScopedList>>
AutoscalersClient::AggregatedListAutoscalers(
    google::cloud::cpp::compute::autoscalers::v1::
        AggregatedListAutoscalersRequest request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->AggregatedListAutoscalers(std::move(request));
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
AutoscalersClient::DeleteAutoscaler(std::string const& project,
                                    std::string const& zone,
                                    std::string const& autoscaler,
                                    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::cpp::compute::autoscalers::v1::DeleteAutoscalerRequest request;
  request.set_project(project);
  request.set_zone(zone);
  request.set_autoscaler(autoscaler);
  return connection_->DeleteAutoscaler(request);
}

StatusOr<google::cloud::cpp::compute::v1::Operation>
AutoscalersClient::DeleteAutoscaler(ExperimentalTag, NoAwaitTag,
                                    std::string const& project,
                                    std::string const& zone,
                                    std::string const& autoscaler,
                                    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::cpp::compute::autoscalers::v1::DeleteAutoscalerRequest request;
  request.set_project(project);
  request.set_zone(zone);
  request.set_autoscaler(autoscaler);
  return connection_->DeleteAutoscaler(ExperimentalTag{}, NoAwaitTag{},
                                       request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
AutoscalersClient::DeleteAutoscaler(
    google::cloud::cpp::compute::autoscalers::v1::DeleteAutoscalerRequest const&
        request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->DeleteAutoscaler(request);
}

StatusOr<google::cloud::cpp::compute::v1::Operation>
AutoscalersClient::DeleteAutoscaler(
    ExperimentalTag, NoAwaitTag,
    google::cloud::cpp::compute::autoscalers::v1::DeleteAutoscalerRequest const&
        request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->DeleteAutoscaler(ExperimentalTag{}, NoAwaitTag{},
                                       request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
AutoscalersClient::DeleteAutoscaler(
    ExperimentalTag,
    google::cloud::cpp::compute::v1::Operation const& operation, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->DeleteAutoscaler(ExperimentalTag{}, operation);
}

StatusOr<google::cloud::cpp::compute::v1::Autoscaler>
AutoscalersClient::GetAutoscaler(std::string const& project,
                                 std::string const& zone,
                                 std::string const& autoscaler, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::cpp::compute::autoscalers::v1::GetAutoscalerRequest request;
  request.set_project(project);
  request.set_zone(zone);
  request.set_autoscaler(autoscaler);
  return connection_->GetAutoscaler(request);
}

StatusOr<google::cloud::cpp::compute::v1::Autoscaler>
AutoscalersClient::GetAutoscaler(
    google::cloud::cpp::compute::autoscalers::v1::GetAutoscalerRequest const&
        request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->GetAutoscaler(request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
AutoscalersClient::InsertAutoscaler(
    std::string const& project, std::string const& zone,
    google::cloud::cpp::compute::v1::Autoscaler const& autoscaler_resource,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::cpp::compute::autoscalers::v1::InsertAutoscalerRequest request;
  request.set_project(project);
  request.set_zone(zone);
  *request.mutable_autoscaler_resource() = autoscaler_resource;
  return connection_->InsertAutoscaler(request);
}

StatusOr<google::cloud::cpp::compute::v1::Operation>
AutoscalersClient::InsertAutoscaler(
    ExperimentalTag, NoAwaitTag, std::string const& project,
    std::string const& zone,
    google::cloud::cpp::compute::v1::Autoscaler const& autoscaler_resource,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::cpp::compute::autoscalers::v1::InsertAutoscalerRequest request;
  request.set_project(project);
  request.set_zone(zone);
  *request.mutable_autoscaler_resource() = autoscaler_resource;
  return connection_->InsertAutoscaler(ExperimentalTag{}, NoAwaitTag{},
                                       request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
AutoscalersClient::InsertAutoscaler(
    google::cloud::cpp::compute::autoscalers::v1::InsertAutoscalerRequest const&
        request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->InsertAutoscaler(request);
}

StatusOr<google::cloud::cpp::compute::v1::Operation>
AutoscalersClient::InsertAutoscaler(
    ExperimentalTag, NoAwaitTag,
    google::cloud::cpp::compute::autoscalers::v1::InsertAutoscalerRequest const&
        request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->InsertAutoscaler(ExperimentalTag{}, NoAwaitTag{},
                                       request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
AutoscalersClient::InsertAutoscaler(
    ExperimentalTag,
    google::cloud::cpp::compute::v1::Operation const& operation, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->InsertAutoscaler(ExperimentalTag{}, operation);
}

StreamRange<google::cloud::cpp::compute::v1::Autoscaler>
AutoscalersClient::ListAutoscalers(std::string const& project,
                                   std::string const& zone, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::cpp::compute::autoscalers::v1::ListAutoscalersRequest request;
  request.set_project(project);
  request.set_zone(zone);
  return connection_->ListAutoscalers(request);
}

StreamRange<google::cloud::cpp::compute::v1::Autoscaler>
AutoscalersClient::ListAutoscalers(
    google::cloud::cpp::compute::autoscalers::v1::ListAutoscalersRequest
        request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->ListAutoscalers(std::move(request));
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
AutoscalersClient::PatchAutoscaler(
    std::string const& project, std::string const& zone,
    google::cloud::cpp::compute::v1::Autoscaler const& autoscaler_resource,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::cpp::compute::autoscalers::v1::PatchAutoscalerRequest request;
  request.set_project(project);
  request.set_zone(zone);
  *request.mutable_autoscaler_resource() = autoscaler_resource;
  return connection_->PatchAutoscaler(request);
}

StatusOr<google::cloud::cpp::compute::v1::Operation>
AutoscalersClient::PatchAutoscaler(
    ExperimentalTag, NoAwaitTag, std::string const& project,
    std::string const& zone,
    google::cloud::cpp::compute::v1::Autoscaler const& autoscaler_resource,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::cpp::compute::autoscalers::v1::PatchAutoscalerRequest request;
  request.set_project(project);
  request.set_zone(zone);
  *request.mutable_autoscaler_resource() = autoscaler_resource;
  return connection_->PatchAutoscaler(ExperimentalTag{}, NoAwaitTag{}, request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
AutoscalersClient::PatchAutoscaler(
    google::cloud::cpp::compute::autoscalers::v1::PatchAutoscalerRequest const&
        request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->PatchAutoscaler(request);
}

StatusOr<google::cloud::cpp::compute::v1::Operation>
AutoscalersClient::PatchAutoscaler(
    ExperimentalTag, NoAwaitTag,
    google::cloud::cpp::compute::autoscalers::v1::PatchAutoscalerRequest const&
        request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->PatchAutoscaler(ExperimentalTag{}, NoAwaitTag{}, request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
AutoscalersClient::PatchAutoscaler(
    ExperimentalTag,
    google::cloud::cpp::compute::v1::Operation const& operation, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->PatchAutoscaler(ExperimentalTag{}, operation);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
AutoscalersClient::UpdateAutoscaler(
    std::string const& project, std::string const& zone,
    google::cloud::cpp::compute::v1::Autoscaler const& autoscaler_resource,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::cpp::compute::autoscalers::v1::UpdateAutoscalerRequest request;
  request.set_project(project);
  request.set_zone(zone);
  *request.mutable_autoscaler_resource() = autoscaler_resource;
  return connection_->UpdateAutoscaler(request);
}

StatusOr<google::cloud::cpp::compute::v1::Operation>
AutoscalersClient::UpdateAutoscaler(
    ExperimentalTag, NoAwaitTag, std::string const& project,
    std::string const& zone,
    google::cloud::cpp::compute::v1::Autoscaler const& autoscaler_resource,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::cpp::compute::autoscalers::v1::UpdateAutoscalerRequest request;
  request.set_project(project);
  request.set_zone(zone);
  *request.mutable_autoscaler_resource() = autoscaler_resource;
  return connection_->UpdateAutoscaler(ExperimentalTag{}, NoAwaitTag{},
                                       request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
AutoscalersClient::UpdateAutoscaler(
    google::cloud::cpp::compute::autoscalers::v1::UpdateAutoscalerRequest const&
        request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->UpdateAutoscaler(request);
}

StatusOr<google::cloud::cpp::compute::v1::Operation>
AutoscalersClient::UpdateAutoscaler(
    ExperimentalTag, NoAwaitTag,
    google::cloud::cpp::compute::autoscalers::v1::UpdateAutoscalerRequest const&
        request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->UpdateAutoscaler(ExperimentalTag{}, NoAwaitTag{},
                                       request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
AutoscalersClient::UpdateAutoscaler(
    ExperimentalTag,
    google::cloud::cpp::compute::v1::Operation const& operation, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->UpdateAutoscaler(ExperimentalTag{}, operation);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_autoscalers_v1
}  // namespace cloud
}  // namespace google
