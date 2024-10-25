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

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_PUBLIC_ADVERTISED_PREFIXES_V1_INTERNAL_PUBLIC_ADVERTISED_PREFIXES_REST_STUB_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_PUBLIC_ADVERTISED_PREFIXES_V1_INTERNAL_PUBLIC_ADVERTISED_PREFIXES_REST_STUB_H

#include "google/cloud/compute/global_operations/v1/global_operations.pb.h"
#include "google/cloud/compute/public_advertised_prefixes/v1/public_advertised_prefixes.pb.h"
#include "google/cloud/completion_queue.h"
#include "google/cloud/internal/rest_client.h"
#include "google/cloud/internal/rest_context.h"
#include "google/cloud/status_or.h"
#include "google/cloud/version.h"
#include <memory>

namespace google {
namespace cloud {
namespace compute_public_advertised_prefixes_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class PublicAdvertisedPrefixesRestStub {
 public:
  virtual ~PublicAdvertisedPrefixesRestStub() = default;

  virtual future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  AsyncAnnounce(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<google::cloud::rest_internal::RestContext> rest_context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::cpp::compute::public_advertised_prefixes::v1::
          AnnounceRequest const& request) = 0;

  virtual StatusOr<google::cloud::cpp::compute::v1::Operation> Announce(
      google::cloud::rest_internal::RestContext& rest_context,
      Options const& options,
      google::cloud::cpp::compute::public_advertised_prefixes::v1::
          AnnounceRequest const& request) = 0;

  virtual future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  AsyncDeletePublicAdvertisedPrefix(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<google::cloud::rest_internal::RestContext> rest_context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::cpp::compute::public_advertised_prefixes::v1::
          DeletePublicAdvertisedPrefixRequest const& request) = 0;

  virtual StatusOr<google::cloud::cpp::compute::v1::Operation>
  DeletePublicAdvertisedPrefix(
      google::cloud::rest_internal::RestContext& rest_context,
      Options const& options,
      google::cloud::cpp::compute::public_advertised_prefixes::v1::
          DeletePublicAdvertisedPrefixRequest const& request) = 0;

  virtual StatusOr<google::cloud::cpp::compute::v1::PublicAdvertisedPrefix>
  GetPublicAdvertisedPrefix(
      google::cloud::rest_internal::RestContext& rest_context,
      Options const& options,
      google::cloud::cpp::compute::public_advertised_prefixes::v1::
          GetPublicAdvertisedPrefixRequest const& request) = 0;

  virtual future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  AsyncInsertPublicAdvertisedPrefix(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<google::cloud::rest_internal::RestContext> rest_context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::cpp::compute::public_advertised_prefixes::v1::
          InsertPublicAdvertisedPrefixRequest const& request) = 0;

  virtual StatusOr<google::cloud::cpp::compute::v1::Operation>
  InsertPublicAdvertisedPrefix(
      google::cloud::rest_internal::RestContext& rest_context,
      Options const& options,
      google::cloud::cpp::compute::public_advertised_prefixes::v1::
          InsertPublicAdvertisedPrefixRequest const& request) = 0;

  virtual StatusOr<google::cloud::cpp::compute::v1::PublicAdvertisedPrefixList>
  ListPublicAdvertisedPrefixes(
      google::cloud::rest_internal::RestContext& rest_context,
      Options const& options,
      google::cloud::cpp::compute::public_advertised_prefixes::v1::
          ListPublicAdvertisedPrefixesRequest const& request) = 0;

  virtual future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  AsyncPatchPublicAdvertisedPrefix(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<google::cloud::rest_internal::RestContext> rest_context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::cpp::compute::public_advertised_prefixes::v1::
          PatchPublicAdvertisedPrefixRequest const& request) = 0;

  virtual StatusOr<google::cloud::cpp::compute::v1::Operation>
  PatchPublicAdvertisedPrefix(
      google::cloud::rest_internal::RestContext& rest_context,
      Options const& options,
      google::cloud::cpp::compute::public_advertised_prefixes::v1::
          PatchPublicAdvertisedPrefixRequest const& request) = 0;

  virtual future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  AsyncWithdraw(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<google::cloud::rest_internal::RestContext> rest_context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::cpp::compute::public_advertised_prefixes::v1::
          WithdrawRequest const& request) = 0;

  virtual StatusOr<google::cloud::cpp::compute::v1::Operation> Withdraw(
      google::cloud::rest_internal::RestContext& rest_context,
      Options const& options,
      google::cloud::cpp::compute::public_advertised_prefixes::v1::
          WithdrawRequest const& request) = 0;

  virtual future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  AsyncGetOperation(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<google::cloud::rest_internal::RestContext> rest_context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::cpp::compute::global_operations::v1::
          GetOperationRequest const& request) = 0;

  virtual future<Status> AsyncCancelOperation(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<google::cloud::rest_internal::RestContext> rest_context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::cpp::compute::global_operations::v1::
          DeleteOperationRequest const& request) = 0;
};

class DefaultPublicAdvertisedPrefixesRestStub
    : public PublicAdvertisedPrefixesRestStub {
 public:
  ~DefaultPublicAdvertisedPrefixesRestStub() override = default;

  explicit DefaultPublicAdvertisedPrefixesRestStub(Options options);
  DefaultPublicAdvertisedPrefixesRestStub(
      std::shared_ptr<rest_internal::RestClient> service,
      std::shared_ptr<rest_internal::RestClient> operations, Options options);

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>> AsyncAnnounce(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<google::cloud::rest_internal::RestContext> rest_context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::cpp::compute::public_advertised_prefixes::v1::
          AnnounceRequest const& request) override;

  StatusOr<google::cloud::cpp::compute::v1::Operation> Announce(
      google::cloud::rest_internal::RestContext& rest_context,
      Options const& options,
      google::cloud::cpp::compute::public_advertised_prefixes::v1::
          AnnounceRequest const& request) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  AsyncDeletePublicAdvertisedPrefix(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<google::cloud::rest_internal::RestContext> rest_context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::cpp::compute::public_advertised_prefixes::v1::
          DeletePublicAdvertisedPrefixRequest const& request) override;

  StatusOr<google::cloud::cpp::compute::v1::Operation>
  DeletePublicAdvertisedPrefix(
      google::cloud::rest_internal::RestContext& rest_context,
      Options const& options,
      google::cloud::cpp::compute::public_advertised_prefixes::v1::
          DeletePublicAdvertisedPrefixRequest const& request) override;

  StatusOr<google::cloud::cpp::compute::v1::PublicAdvertisedPrefix>
  GetPublicAdvertisedPrefix(
      google::cloud::rest_internal::RestContext& rest_context,
      Options const& options,
      google::cloud::cpp::compute::public_advertised_prefixes::v1::
          GetPublicAdvertisedPrefixRequest const& request) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  AsyncInsertPublicAdvertisedPrefix(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<google::cloud::rest_internal::RestContext> rest_context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::cpp::compute::public_advertised_prefixes::v1::
          InsertPublicAdvertisedPrefixRequest const& request) override;

  StatusOr<google::cloud::cpp::compute::v1::Operation>
  InsertPublicAdvertisedPrefix(
      google::cloud::rest_internal::RestContext& rest_context,
      Options const& options,
      google::cloud::cpp::compute::public_advertised_prefixes::v1::
          InsertPublicAdvertisedPrefixRequest const& request) override;

  StatusOr<google::cloud::cpp::compute::v1::PublicAdvertisedPrefixList>
  ListPublicAdvertisedPrefixes(
      google::cloud::rest_internal::RestContext& rest_context,
      Options const& options,
      google::cloud::cpp::compute::public_advertised_prefixes::v1::
          ListPublicAdvertisedPrefixesRequest const& request) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  AsyncPatchPublicAdvertisedPrefix(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<google::cloud::rest_internal::RestContext> rest_context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::cpp::compute::public_advertised_prefixes::v1::
          PatchPublicAdvertisedPrefixRequest const& request) override;

  StatusOr<google::cloud::cpp::compute::v1::Operation>
  PatchPublicAdvertisedPrefix(
      google::cloud::rest_internal::RestContext& rest_context,
      Options const& options,
      google::cloud::cpp::compute::public_advertised_prefixes::v1::
          PatchPublicAdvertisedPrefixRequest const& request) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>> AsyncWithdraw(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<google::cloud::rest_internal::RestContext> rest_context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::cpp::compute::public_advertised_prefixes::v1::
          WithdrawRequest const& request) override;

  StatusOr<google::cloud::cpp::compute::v1::Operation> Withdraw(
      google::cloud::rest_internal::RestContext& rest_context,
      Options const& options,
      google::cloud::cpp::compute::public_advertised_prefixes::v1::
          WithdrawRequest const& request) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  AsyncGetOperation(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<google::cloud::rest_internal::RestContext> rest_context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::cpp::compute::global_operations::v1::
          GetOperationRequest const& request) override;

  future<Status> AsyncCancelOperation(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<google::cloud::rest_internal::RestContext> rest_context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::cpp::compute::global_operations::v1::
          DeleteOperationRequest const& request) override;

 private:
  std::shared_ptr<rest_internal::RestClient> service_;
  std::shared_ptr<rest_internal::RestClient> operations_;
  Options options_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_public_advertised_prefixes_v1_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_PUBLIC_ADVERTISED_PREFIXES_V1_INTERNAL_PUBLIC_ADVERTISED_PREFIXES_REST_STUB_H
