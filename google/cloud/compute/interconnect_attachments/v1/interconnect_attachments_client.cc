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
// source:
// google/cloud/compute/interconnect_attachments/v1/interconnect_attachments.proto

#include "google/cloud/compute/interconnect_attachments/v1/interconnect_attachments_client.h"
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace compute_interconnect_attachments_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

InterconnectAttachmentsClient::InterconnectAttachmentsClient(
    std::shared_ptr<InterconnectAttachmentsConnection> connection, Options opts)
    : connection_(std::move(connection)),
      options_(
          internal::MergeOptions(std::move(opts), connection_->options())) {}
InterconnectAttachmentsClient::~InterconnectAttachmentsClient() = default;

StreamRange<std::pair<std::string, google::cloud::cpp::compute::v1::
                                       InterconnectAttachmentsScopedList>>
InterconnectAttachmentsClient::AggregatedListInterconnectAttachments(
    std::string const& project, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::cpp::compute::interconnect_attachments::v1::
      AggregatedListInterconnectAttachmentsRequest request;
  request.set_project(project);
  return connection_->AggregatedListInterconnectAttachments(request);
}

StreamRange<std::pair<std::string, google::cloud::cpp::compute::v1::
                                       InterconnectAttachmentsScopedList>>
InterconnectAttachmentsClient::AggregatedListInterconnectAttachments(
    google::cloud::cpp::compute::interconnect_attachments::v1::
        AggregatedListInterconnectAttachmentsRequest request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->AggregatedListInterconnectAttachments(std::move(request));
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
InterconnectAttachmentsClient::DeleteInterconnectAttachment(
    std::string const& project, std::string const& region,
    std::string const& interconnect_attachment, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::cpp::compute::interconnect_attachments::v1::
      DeleteInterconnectAttachmentRequest request;
  request.set_project(project);
  request.set_region(region);
  request.set_interconnect_attachment(interconnect_attachment);
  return connection_->DeleteInterconnectAttachment(request);
}

StatusOr<google::cloud::cpp::compute::v1::Operation>
InterconnectAttachmentsClient::DeleteInterconnectAttachment(
    ExperimentalTag, NoAwaitTag, std::string const& project,
    std::string const& region, std::string const& interconnect_attachment,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::cpp::compute::interconnect_attachments::v1::
      DeleteInterconnectAttachmentRequest request;
  request.set_project(project);
  request.set_region(region);
  request.set_interconnect_attachment(interconnect_attachment);
  return connection_->DeleteInterconnectAttachment(ExperimentalTag{},
                                                   NoAwaitTag{}, request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
InterconnectAttachmentsClient::DeleteInterconnectAttachment(
    google::cloud::cpp::compute::interconnect_attachments::v1::
        DeleteInterconnectAttachmentRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->DeleteInterconnectAttachment(request);
}

StatusOr<google::cloud::cpp::compute::v1::Operation>
InterconnectAttachmentsClient::DeleteInterconnectAttachment(
    ExperimentalTag, NoAwaitTag,
    google::cloud::cpp::compute::interconnect_attachments::v1::
        DeleteInterconnectAttachmentRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->DeleteInterconnectAttachment(ExperimentalTag{},
                                                   NoAwaitTag{}, request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
InterconnectAttachmentsClient::DeleteInterconnectAttachment(
    ExperimentalTag,
    google::cloud::cpp::compute::v1::Operation const& operation, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->DeleteInterconnectAttachment(ExperimentalTag{},
                                                   operation);
}

StatusOr<google::cloud::cpp::compute::v1::InterconnectAttachment>
InterconnectAttachmentsClient::GetInterconnectAttachment(
    std::string const& project, std::string const& region,
    std::string const& interconnect_attachment, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::cpp::compute::interconnect_attachments::v1::
      GetInterconnectAttachmentRequest request;
  request.set_project(project);
  request.set_region(region);
  request.set_interconnect_attachment(interconnect_attachment);
  return connection_->GetInterconnectAttachment(request);
}

StatusOr<google::cloud::cpp::compute::v1::InterconnectAttachment>
InterconnectAttachmentsClient::GetInterconnectAttachment(
    google::cloud::cpp::compute::interconnect_attachments::v1::
        GetInterconnectAttachmentRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->GetInterconnectAttachment(request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
InterconnectAttachmentsClient::InsertInterconnectAttachment(
    std::string const& project, std::string const& region,
    google::cloud::cpp::compute::v1::InterconnectAttachment const&
        interconnect_attachment_resource,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::cpp::compute::interconnect_attachments::v1::
      InsertInterconnectAttachmentRequest request;
  request.set_project(project);
  request.set_region(region);
  *request.mutable_interconnect_attachment_resource() =
      interconnect_attachment_resource;
  return connection_->InsertInterconnectAttachment(request);
}

StatusOr<google::cloud::cpp::compute::v1::Operation>
InterconnectAttachmentsClient::InsertInterconnectAttachment(
    ExperimentalTag, NoAwaitTag, std::string const& project,
    std::string const& region,
    google::cloud::cpp::compute::v1::InterconnectAttachment const&
        interconnect_attachment_resource,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::cpp::compute::interconnect_attachments::v1::
      InsertInterconnectAttachmentRequest request;
  request.set_project(project);
  request.set_region(region);
  *request.mutable_interconnect_attachment_resource() =
      interconnect_attachment_resource;
  return connection_->InsertInterconnectAttachment(ExperimentalTag{},
                                                   NoAwaitTag{}, request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
InterconnectAttachmentsClient::InsertInterconnectAttachment(
    google::cloud::cpp::compute::interconnect_attachments::v1::
        InsertInterconnectAttachmentRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->InsertInterconnectAttachment(request);
}

StatusOr<google::cloud::cpp::compute::v1::Operation>
InterconnectAttachmentsClient::InsertInterconnectAttachment(
    ExperimentalTag, NoAwaitTag,
    google::cloud::cpp::compute::interconnect_attachments::v1::
        InsertInterconnectAttachmentRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->InsertInterconnectAttachment(ExperimentalTag{},
                                                   NoAwaitTag{}, request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
InterconnectAttachmentsClient::InsertInterconnectAttachment(
    ExperimentalTag,
    google::cloud::cpp::compute::v1::Operation const& operation, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->InsertInterconnectAttachment(ExperimentalTag{},
                                                   operation);
}

StreamRange<google::cloud::cpp::compute::v1::InterconnectAttachment>
InterconnectAttachmentsClient::ListInterconnectAttachments(
    std::string const& project, std::string const& region, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::cpp::compute::interconnect_attachments::v1::
      ListInterconnectAttachmentsRequest request;
  request.set_project(project);
  request.set_region(region);
  return connection_->ListInterconnectAttachments(request);
}

StreamRange<google::cloud::cpp::compute::v1::InterconnectAttachment>
InterconnectAttachmentsClient::ListInterconnectAttachments(
    google::cloud::cpp::compute::interconnect_attachments::v1::
        ListInterconnectAttachmentsRequest request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->ListInterconnectAttachments(std::move(request));
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
InterconnectAttachmentsClient::PatchInterconnectAttachment(
    std::string const& project, std::string const& region,
    std::string const& interconnect_attachment,
    google::cloud::cpp::compute::v1::InterconnectAttachment const&
        interconnect_attachment_resource,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::cpp::compute::interconnect_attachments::v1::
      PatchInterconnectAttachmentRequest request;
  request.set_project(project);
  request.set_region(region);
  request.set_interconnect_attachment(interconnect_attachment);
  *request.mutable_interconnect_attachment_resource() =
      interconnect_attachment_resource;
  return connection_->PatchInterconnectAttachment(request);
}

StatusOr<google::cloud::cpp::compute::v1::Operation>
InterconnectAttachmentsClient::PatchInterconnectAttachment(
    ExperimentalTag, NoAwaitTag, std::string const& project,
    std::string const& region, std::string const& interconnect_attachment,
    google::cloud::cpp::compute::v1::InterconnectAttachment const&
        interconnect_attachment_resource,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::cpp::compute::interconnect_attachments::v1::
      PatchInterconnectAttachmentRequest request;
  request.set_project(project);
  request.set_region(region);
  request.set_interconnect_attachment(interconnect_attachment);
  *request.mutable_interconnect_attachment_resource() =
      interconnect_attachment_resource;
  return connection_->PatchInterconnectAttachment(ExperimentalTag{},
                                                  NoAwaitTag{}, request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
InterconnectAttachmentsClient::PatchInterconnectAttachment(
    google::cloud::cpp::compute::interconnect_attachments::v1::
        PatchInterconnectAttachmentRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->PatchInterconnectAttachment(request);
}

StatusOr<google::cloud::cpp::compute::v1::Operation>
InterconnectAttachmentsClient::PatchInterconnectAttachment(
    ExperimentalTag, NoAwaitTag,
    google::cloud::cpp::compute::interconnect_attachments::v1::
        PatchInterconnectAttachmentRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->PatchInterconnectAttachment(ExperimentalTag{},
                                                  NoAwaitTag{}, request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
InterconnectAttachmentsClient::PatchInterconnectAttachment(
    ExperimentalTag,
    google::cloud::cpp::compute::v1::Operation const& operation, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->PatchInterconnectAttachment(ExperimentalTag{}, operation);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
InterconnectAttachmentsClient::SetLabels(
    std::string const& project, std::string const& region,
    std::string const& resource,
    google::cloud::cpp::compute::v1::RegionSetLabelsRequest const&
        region_set_labels_request_resource,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::cpp::compute::interconnect_attachments::v1::SetLabelsRequest
      request;
  request.set_project(project);
  request.set_region(region);
  request.set_resource(resource);
  *request.mutable_region_set_labels_request_resource() =
      region_set_labels_request_resource;
  return connection_->SetLabels(request);
}

StatusOr<google::cloud::cpp::compute::v1::Operation>
InterconnectAttachmentsClient::SetLabels(
    ExperimentalTag, NoAwaitTag, std::string const& project,
    std::string const& region, std::string const& resource,
    google::cloud::cpp::compute::v1::RegionSetLabelsRequest const&
        region_set_labels_request_resource,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::cpp::compute::interconnect_attachments::v1::SetLabelsRequest
      request;
  request.set_project(project);
  request.set_region(region);
  request.set_resource(resource);
  *request.mutable_region_set_labels_request_resource() =
      region_set_labels_request_resource;
  return connection_->SetLabels(ExperimentalTag{}, NoAwaitTag{}, request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
InterconnectAttachmentsClient::SetLabels(
    google::cloud::cpp::compute::interconnect_attachments::v1::
        SetLabelsRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->SetLabels(request);
}

StatusOr<google::cloud::cpp::compute::v1::Operation>
InterconnectAttachmentsClient::SetLabels(
    ExperimentalTag, NoAwaitTag,
    google::cloud::cpp::compute::interconnect_attachments::v1::
        SetLabelsRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->SetLabels(ExperimentalTag{}, NoAwaitTag{}, request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
InterconnectAttachmentsClient::SetLabels(
    ExperimentalTag,
    google::cloud::cpp::compute::v1::Operation const& operation, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->SetLabels(ExperimentalTag{}, operation);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_interconnect_attachments_v1
}  // namespace cloud
}  // namespace google
