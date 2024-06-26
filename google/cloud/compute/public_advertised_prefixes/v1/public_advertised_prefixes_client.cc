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
// google/cloud/compute/public_advertised_prefixes/v1/public_advertised_prefixes.proto

#include "google/cloud/compute/public_advertised_prefixes/v1/public_advertised_prefixes_client.h"
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace compute_public_advertised_prefixes_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

PublicAdvertisedPrefixesClient::PublicAdvertisedPrefixesClient(
    std::shared_ptr<PublicAdvertisedPrefixesConnection> connection,
    Options opts)
    : connection_(std::move(connection)),
      options_(
          internal::MergeOptions(std::move(opts), connection_->options())) {}
PublicAdvertisedPrefixesClient::~PublicAdvertisedPrefixesClient() = default;

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
PublicAdvertisedPrefixesClient::Announce(
    std::string const& project, std::string const& public_advertised_prefix,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::cpp::compute::public_advertised_prefixes::v1::AnnounceRequest
      request;
  request.set_project(project);
  request.set_public_advertised_prefix(public_advertised_prefix);
  return connection_->Announce(request);
}

StatusOr<google::cloud::cpp::compute::v1::Operation>
PublicAdvertisedPrefixesClient::Announce(
    ExperimentalTag, NoAwaitTag, std::string const& project,
    std::string const& public_advertised_prefix, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::cpp::compute::public_advertised_prefixes::v1::AnnounceRequest
      request;
  request.set_project(project);
  request.set_public_advertised_prefix(public_advertised_prefix);
  return connection_->Announce(ExperimentalTag{}, NoAwaitTag{}, request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
PublicAdvertisedPrefixesClient::Announce(
    google::cloud::cpp::compute::public_advertised_prefixes::v1::
        AnnounceRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->Announce(request);
}

StatusOr<google::cloud::cpp::compute::v1::Operation>
PublicAdvertisedPrefixesClient::Announce(
    ExperimentalTag, NoAwaitTag,
    google::cloud::cpp::compute::public_advertised_prefixes::v1::
        AnnounceRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->Announce(ExperimentalTag{}, NoAwaitTag{}, request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
PublicAdvertisedPrefixesClient::Announce(
    ExperimentalTag,
    google::cloud::cpp::compute::v1::Operation const& operation, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->Announce(ExperimentalTag{}, operation);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
PublicAdvertisedPrefixesClient::DeletePublicAdvertisedPrefix(
    std::string const& project, std::string const& public_advertised_prefix,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::cpp::compute::public_advertised_prefixes::v1::
      DeletePublicAdvertisedPrefixRequest request;
  request.set_project(project);
  request.set_public_advertised_prefix(public_advertised_prefix);
  return connection_->DeletePublicAdvertisedPrefix(request);
}

StatusOr<google::cloud::cpp::compute::v1::Operation>
PublicAdvertisedPrefixesClient::DeletePublicAdvertisedPrefix(
    ExperimentalTag, NoAwaitTag, std::string const& project,
    std::string const& public_advertised_prefix, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::cpp::compute::public_advertised_prefixes::v1::
      DeletePublicAdvertisedPrefixRequest request;
  request.set_project(project);
  request.set_public_advertised_prefix(public_advertised_prefix);
  return connection_->DeletePublicAdvertisedPrefix(ExperimentalTag{},
                                                   NoAwaitTag{}, request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
PublicAdvertisedPrefixesClient::DeletePublicAdvertisedPrefix(
    google::cloud::cpp::compute::public_advertised_prefixes::v1::
        DeletePublicAdvertisedPrefixRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->DeletePublicAdvertisedPrefix(request);
}

StatusOr<google::cloud::cpp::compute::v1::Operation>
PublicAdvertisedPrefixesClient::DeletePublicAdvertisedPrefix(
    ExperimentalTag, NoAwaitTag,
    google::cloud::cpp::compute::public_advertised_prefixes::v1::
        DeletePublicAdvertisedPrefixRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->DeletePublicAdvertisedPrefix(ExperimentalTag{},
                                                   NoAwaitTag{}, request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
PublicAdvertisedPrefixesClient::DeletePublicAdvertisedPrefix(
    ExperimentalTag,
    google::cloud::cpp::compute::v1::Operation const& operation, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->DeletePublicAdvertisedPrefix(ExperimentalTag{},
                                                   operation);
}

StatusOr<google::cloud::cpp::compute::v1::PublicAdvertisedPrefix>
PublicAdvertisedPrefixesClient::GetPublicAdvertisedPrefix(
    std::string const& project, std::string const& public_advertised_prefix,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::cpp::compute::public_advertised_prefixes::v1::
      GetPublicAdvertisedPrefixRequest request;
  request.set_project(project);
  request.set_public_advertised_prefix(public_advertised_prefix);
  return connection_->GetPublicAdvertisedPrefix(request);
}

StatusOr<google::cloud::cpp::compute::v1::PublicAdvertisedPrefix>
PublicAdvertisedPrefixesClient::GetPublicAdvertisedPrefix(
    google::cloud::cpp::compute::public_advertised_prefixes::v1::
        GetPublicAdvertisedPrefixRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->GetPublicAdvertisedPrefix(request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
PublicAdvertisedPrefixesClient::InsertPublicAdvertisedPrefix(
    std::string const& project,
    google::cloud::cpp::compute::v1::PublicAdvertisedPrefix const&
        public_advertised_prefix_resource,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::cpp::compute::public_advertised_prefixes::v1::
      InsertPublicAdvertisedPrefixRequest request;
  request.set_project(project);
  *request.mutable_public_advertised_prefix_resource() =
      public_advertised_prefix_resource;
  return connection_->InsertPublicAdvertisedPrefix(request);
}

StatusOr<google::cloud::cpp::compute::v1::Operation>
PublicAdvertisedPrefixesClient::InsertPublicAdvertisedPrefix(
    ExperimentalTag, NoAwaitTag, std::string const& project,
    google::cloud::cpp::compute::v1::PublicAdvertisedPrefix const&
        public_advertised_prefix_resource,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::cpp::compute::public_advertised_prefixes::v1::
      InsertPublicAdvertisedPrefixRequest request;
  request.set_project(project);
  *request.mutable_public_advertised_prefix_resource() =
      public_advertised_prefix_resource;
  return connection_->InsertPublicAdvertisedPrefix(ExperimentalTag{},
                                                   NoAwaitTag{}, request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
PublicAdvertisedPrefixesClient::InsertPublicAdvertisedPrefix(
    google::cloud::cpp::compute::public_advertised_prefixes::v1::
        InsertPublicAdvertisedPrefixRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->InsertPublicAdvertisedPrefix(request);
}

StatusOr<google::cloud::cpp::compute::v1::Operation>
PublicAdvertisedPrefixesClient::InsertPublicAdvertisedPrefix(
    ExperimentalTag, NoAwaitTag,
    google::cloud::cpp::compute::public_advertised_prefixes::v1::
        InsertPublicAdvertisedPrefixRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->InsertPublicAdvertisedPrefix(ExperimentalTag{},
                                                   NoAwaitTag{}, request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
PublicAdvertisedPrefixesClient::InsertPublicAdvertisedPrefix(
    ExperimentalTag,
    google::cloud::cpp::compute::v1::Operation const& operation, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->InsertPublicAdvertisedPrefix(ExperimentalTag{},
                                                   operation);
}

StreamRange<google::cloud::cpp::compute::v1::PublicAdvertisedPrefix>
PublicAdvertisedPrefixesClient::ListPublicAdvertisedPrefixes(
    std::string const& project, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::cpp::compute::public_advertised_prefixes::v1::
      ListPublicAdvertisedPrefixesRequest request;
  request.set_project(project);
  return connection_->ListPublicAdvertisedPrefixes(request);
}

StreamRange<google::cloud::cpp::compute::v1::PublicAdvertisedPrefix>
PublicAdvertisedPrefixesClient::ListPublicAdvertisedPrefixes(
    google::cloud::cpp::compute::public_advertised_prefixes::v1::
        ListPublicAdvertisedPrefixesRequest request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->ListPublicAdvertisedPrefixes(std::move(request));
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
PublicAdvertisedPrefixesClient::PatchPublicAdvertisedPrefix(
    std::string const& project, std::string const& public_advertised_prefix,
    google::cloud::cpp::compute::v1::PublicAdvertisedPrefix const&
        public_advertised_prefix_resource,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::cpp::compute::public_advertised_prefixes::v1::
      PatchPublicAdvertisedPrefixRequest request;
  request.set_project(project);
  request.set_public_advertised_prefix(public_advertised_prefix);
  *request.mutable_public_advertised_prefix_resource() =
      public_advertised_prefix_resource;
  return connection_->PatchPublicAdvertisedPrefix(request);
}

StatusOr<google::cloud::cpp::compute::v1::Operation>
PublicAdvertisedPrefixesClient::PatchPublicAdvertisedPrefix(
    ExperimentalTag, NoAwaitTag, std::string const& project,
    std::string const& public_advertised_prefix,
    google::cloud::cpp::compute::v1::PublicAdvertisedPrefix const&
        public_advertised_prefix_resource,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::cpp::compute::public_advertised_prefixes::v1::
      PatchPublicAdvertisedPrefixRequest request;
  request.set_project(project);
  request.set_public_advertised_prefix(public_advertised_prefix);
  *request.mutable_public_advertised_prefix_resource() =
      public_advertised_prefix_resource;
  return connection_->PatchPublicAdvertisedPrefix(ExperimentalTag{},
                                                  NoAwaitTag{}, request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
PublicAdvertisedPrefixesClient::PatchPublicAdvertisedPrefix(
    google::cloud::cpp::compute::public_advertised_prefixes::v1::
        PatchPublicAdvertisedPrefixRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->PatchPublicAdvertisedPrefix(request);
}

StatusOr<google::cloud::cpp::compute::v1::Operation>
PublicAdvertisedPrefixesClient::PatchPublicAdvertisedPrefix(
    ExperimentalTag, NoAwaitTag,
    google::cloud::cpp::compute::public_advertised_prefixes::v1::
        PatchPublicAdvertisedPrefixRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->PatchPublicAdvertisedPrefix(ExperimentalTag{},
                                                  NoAwaitTag{}, request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
PublicAdvertisedPrefixesClient::PatchPublicAdvertisedPrefix(
    ExperimentalTag,
    google::cloud::cpp::compute::v1::Operation const& operation, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->PatchPublicAdvertisedPrefix(ExperimentalTag{}, operation);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
PublicAdvertisedPrefixesClient::Withdraw(
    std::string const& project, std::string const& public_advertised_prefix,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::cpp::compute::public_advertised_prefixes::v1::WithdrawRequest
      request;
  request.set_project(project);
  request.set_public_advertised_prefix(public_advertised_prefix);
  return connection_->Withdraw(request);
}

StatusOr<google::cloud::cpp::compute::v1::Operation>
PublicAdvertisedPrefixesClient::Withdraw(
    ExperimentalTag, NoAwaitTag, std::string const& project,
    std::string const& public_advertised_prefix, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::cpp::compute::public_advertised_prefixes::v1::WithdrawRequest
      request;
  request.set_project(project);
  request.set_public_advertised_prefix(public_advertised_prefix);
  return connection_->Withdraw(ExperimentalTag{}, NoAwaitTag{}, request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
PublicAdvertisedPrefixesClient::Withdraw(
    google::cloud::cpp::compute::public_advertised_prefixes::v1::
        WithdrawRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->Withdraw(request);
}

StatusOr<google::cloud::cpp::compute::v1::Operation>
PublicAdvertisedPrefixesClient::Withdraw(
    ExperimentalTag, NoAwaitTag,
    google::cloud::cpp::compute::public_advertised_prefixes::v1::
        WithdrawRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->Withdraw(ExperimentalTag{}, NoAwaitTag{}, request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
PublicAdvertisedPrefixesClient::Withdraw(
    ExperimentalTag,
    google::cloud::cpp::compute::v1::Operation const& operation, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->Withdraw(ExperimentalTag{}, operation);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_public_advertised_prefixes_v1
}  // namespace cloud
}  // namespace google
