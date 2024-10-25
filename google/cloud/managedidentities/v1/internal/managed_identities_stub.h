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
// source: google/cloud/managedidentities/v1/managed_identities_service.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_MANAGEDIDENTITIES_V1_INTERNAL_MANAGED_IDENTITIES_STUB_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_MANAGEDIDENTITIES_V1_INTERNAL_MANAGED_IDENTITIES_STUB_H

#include "google/cloud/managedidentities/v1/managed_identities_service.grpc.pb.h"
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
namespace managedidentities_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class ManagedIdentitiesServiceStub {
 public:
  virtual ~ManagedIdentitiesServiceStub() = 0;

  virtual future<StatusOr<google::longrunning::Operation>>
  AsyncCreateMicrosoftAdDomain(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::managedidentities::v1::
          CreateMicrosoftAdDomainRequest const& request) = 0;

  virtual StatusOr<google::longrunning::Operation> CreateMicrosoftAdDomain(
      grpc::ClientContext& context, Options options,
      google::cloud::managedidentities::v1::
          CreateMicrosoftAdDomainRequest const& request) = 0;

  virtual StatusOr<
      google::cloud::managedidentities::v1::ResetAdminPasswordResponse>
  ResetAdminPassword(
      grpc::ClientContext& context, Options const& options,
      google::cloud::managedidentities::v1::ResetAdminPasswordRequest const&
          request) = 0;

  virtual StatusOr<google::cloud::managedidentities::v1::ListDomainsResponse>
  ListDomains(grpc::ClientContext& context, Options const& options,
              google::cloud::managedidentities::v1::ListDomainsRequest const&
                  request) = 0;

  virtual StatusOr<google::cloud::managedidentities::v1::Domain> GetDomain(
      grpc::ClientContext& context, Options const& options,
      google::cloud::managedidentities::v1::GetDomainRequest const&
          request) = 0;

  virtual future<StatusOr<google::longrunning::Operation>> AsyncUpdateDomain(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::managedidentities::v1::UpdateDomainRequest const&
          request) = 0;

  virtual StatusOr<google::longrunning::Operation> UpdateDomain(
      grpc::ClientContext& context, Options options,
      google::cloud::managedidentities::v1::UpdateDomainRequest const&
          request) = 0;

  virtual future<StatusOr<google::longrunning::Operation>> AsyncDeleteDomain(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::managedidentities::v1::DeleteDomainRequest const&
          request) = 0;

  virtual StatusOr<google::longrunning::Operation> DeleteDomain(
      grpc::ClientContext& context, Options options,
      google::cloud::managedidentities::v1::DeleteDomainRequest const&
          request) = 0;

  virtual future<StatusOr<google::longrunning::Operation>> AsyncAttachTrust(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::managedidentities::v1::AttachTrustRequest const&
          request) = 0;

  virtual StatusOr<google::longrunning::Operation> AttachTrust(
      grpc::ClientContext& context, Options options,
      google::cloud::managedidentities::v1::AttachTrustRequest const&
          request) = 0;

  virtual future<StatusOr<google::longrunning::Operation>>
  AsyncReconfigureTrust(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::managedidentities::v1::ReconfigureTrustRequest const&
          request) = 0;

  virtual StatusOr<google::longrunning::Operation> ReconfigureTrust(
      grpc::ClientContext& context, Options options,
      google::cloud::managedidentities::v1::ReconfigureTrustRequest const&
          request) = 0;

  virtual future<StatusOr<google::longrunning::Operation>> AsyncDetachTrust(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::managedidentities::v1::DetachTrustRequest const&
          request) = 0;

  virtual StatusOr<google::longrunning::Operation> DetachTrust(
      grpc::ClientContext& context, Options options,
      google::cloud::managedidentities::v1::DetachTrustRequest const&
          request) = 0;

  virtual future<StatusOr<google::longrunning::Operation>> AsyncValidateTrust(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::managedidentities::v1::ValidateTrustRequest const&
          request) = 0;

  virtual StatusOr<google::longrunning::Operation> ValidateTrust(
      grpc::ClientContext& context, Options options,
      google::cloud::managedidentities::v1::ValidateTrustRequest const&
          request) = 0;

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

class DefaultManagedIdentitiesServiceStub
    : public ManagedIdentitiesServiceStub {
 public:
  DefaultManagedIdentitiesServiceStub(
      std::unique_ptr<google::cloud::managedidentities::v1::
                          ManagedIdentitiesService::StubInterface>
          grpc_stub,
      std::unique_ptr<google::longrunning::Operations::StubInterface>
          operations)
      : grpc_stub_(std::move(grpc_stub)), operations_(std::move(operations)) {}

  future<StatusOr<google::longrunning::Operation>> AsyncCreateMicrosoftAdDomain(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::managedidentities::v1::
          CreateMicrosoftAdDomainRequest const& request) override;

  StatusOr<google::longrunning::Operation> CreateMicrosoftAdDomain(
      grpc::ClientContext& context, Options options,
      google::cloud::managedidentities::v1::
          CreateMicrosoftAdDomainRequest const& request) override;

  StatusOr<google::cloud::managedidentities::v1::ResetAdminPasswordResponse>
  ResetAdminPassword(
      grpc::ClientContext& context, Options const& options,
      google::cloud::managedidentities::v1::ResetAdminPasswordRequest const&
          request) override;

  StatusOr<google::cloud::managedidentities::v1::ListDomainsResponse>
  ListDomains(grpc::ClientContext& context, Options const& options,
              google::cloud::managedidentities::v1::ListDomainsRequest const&
                  request) override;

  StatusOr<google::cloud::managedidentities::v1::Domain> GetDomain(
      grpc::ClientContext& context, Options const& options,
      google::cloud::managedidentities::v1::GetDomainRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncUpdateDomain(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::managedidentities::v1::UpdateDomainRequest const& request)
      override;

  StatusOr<google::longrunning::Operation> UpdateDomain(
      grpc::ClientContext& context, Options options,
      google::cloud::managedidentities::v1::UpdateDomainRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncDeleteDomain(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::managedidentities::v1::DeleteDomainRequest const& request)
      override;

  StatusOr<google::longrunning::Operation> DeleteDomain(
      grpc::ClientContext& context, Options options,
      google::cloud::managedidentities::v1::DeleteDomainRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncAttachTrust(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::managedidentities::v1::AttachTrustRequest const& request)
      override;

  StatusOr<google::longrunning::Operation> AttachTrust(
      grpc::ClientContext& context, Options options,
      google::cloud::managedidentities::v1::AttachTrustRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncReconfigureTrust(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::managedidentities::v1::ReconfigureTrustRequest const&
          request) override;

  StatusOr<google::longrunning::Operation> ReconfigureTrust(
      grpc::ClientContext& context, Options options,
      google::cloud::managedidentities::v1::ReconfigureTrustRequest const&
          request) override;

  future<StatusOr<google::longrunning::Operation>> AsyncDetachTrust(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::managedidentities::v1::DetachTrustRequest const& request)
      override;

  StatusOr<google::longrunning::Operation> DetachTrust(
      grpc::ClientContext& context, Options options,
      google::cloud::managedidentities::v1::DetachTrustRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncValidateTrust(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::managedidentities::v1::ValidateTrustRequest const& request)
      override;

  StatusOr<google::longrunning::Operation> ValidateTrust(
      grpc::ClientContext& context, Options options,
      google::cloud::managedidentities::v1::ValidateTrustRequest const& request)
      override;

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
  std::unique_ptr<google::cloud::managedidentities::v1::
                      ManagedIdentitiesService::StubInterface>
      grpc_stub_;
  std::unique_ptr<google::longrunning::Operations::StubInterface> operations_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace managedidentities_v1_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_MANAGEDIDENTITIES_V1_INTERNAL_MANAGED_IDENTITIES_STUB_H
