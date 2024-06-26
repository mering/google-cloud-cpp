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
// source: google/cloud/compute/snapshot_settings/v1/snapshot_settings.proto

#include "google/cloud/compute/snapshot_settings/v1/snapshot_settings_client.h"
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace compute_snapshot_settings_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

SnapshotSettingsClient::SnapshotSettingsClient(
    std::shared_ptr<SnapshotSettingsConnection> connection, Options opts)
    : connection_(std::move(connection)),
      options_(
          internal::MergeOptions(std::move(opts), connection_->options())) {}
SnapshotSettingsClient::~SnapshotSettingsClient() = default;

StatusOr<google::cloud::cpp::compute::v1::SnapshotSettings>
SnapshotSettingsClient::GetSnapshotSettings(std::string const& project,
                                            Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::cpp::compute::snapshot_settings::v1::GetSnapshotSettingsRequest
      request;
  request.set_project(project);
  return connection_->GetSnapshotSettings(request);
}

StatusOr<google::cloud::cpp::compute::v1::SnapshotSettings>
SnapshotSettingsClient::GetSnapshotSettings(
    google::cloud::cpp::compute::snapshot_settings::v1::
        GetSnapshotSettingsRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->GetSnapshotSettings(request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
SnapshotSettingsClient::PatchSnapshotSettings(
    std::string const& project, std::string const& update_mask,
    google::cloud::cpp::compute::v1::SnapshotSettings const&
        snapshot_settings_resource,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::cpp::compute::snapshot_settings::v1::
      PatchSnapshotSettingsRequest request;
  request.set_project(project);
  request.set_update_mask(update_mask);
  *request.mutable_snapshot_settings_resource() = snapshot_settings_resource;
  return connection_->PatchSnapshotSettings(request);
}

StatusOr<google::cloud::cpp::compute::v1::Operation>
SnapshotSettingsClient::PatchSnapshotSettings(
    ExperimentalTag, NoAwaitTag, std::string const& project,
    std::string const& update_mask,
    google::cloud::cpp::compute::v1::SnapshotSettings const&
        snapshot_settings_resource,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::cpp::compute::snapshot_settings::v1::
      PatchSnapshotSettingsRequest request;
  request.set_project(project);
  request.set_update_mask(update_mask);
  *request.mutable_snapshot_settings_resource() = snapshot_settings_resource;
  return connection_->PatchSnapshotSettings(ExperimentalTag{}, NoAwaitTag{},
                                            request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
SnapshotSettingsClient::PatchSnapshotSettings(
    google::cloud::cpp::compute::snapshot_settings::v1::
        PatchSnapshotSettingsRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->PatchSnapshotSettings(request);
}

StatusOr<google::cloud::cpp::compute::v1::Operation>
SnapshotSettingsClient::PatchSnapshotSettings(
    ExperimentalTag, NoAwaitTag,
    google::cloud::cpp::compute::snapshot_settings::v1::
        PatchSnapshotSettingsRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->PatchSnapshotSettings(ExperimentalTag{}, NoAwaitTag{},
                                            request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
SnapshotSettingsClient::PatchSnapshotSettings(
    ExperimentalTag,
    google::cloud::cpp::compute::v1::Operation const& operation, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->PatchSnapshotSettings(ExperimentalTag{}, operation);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_snapshot_settings_v1
}  // namespace cloud
}  // namespace google
