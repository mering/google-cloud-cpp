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
// source: google/cloud/domains/v1/domains.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DOMAINS_V1_INTERNAL_DOMAINS_STUB_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DOMAINS_V1_INTERNAL_DOMAINS_STUB_H

#include "google/cloud/completion_queue.h"
#include "google/cloud/future.h"
#include "google/cloud/options.h"
#include "google/cloud/status_or.h"
#include "google/cloud/version.h"
#include "google/cloud/domains/v1/domains.grpc.pb.h"
#include "google/longrunning/operations.grpc.pb.h"
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace domains_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class DomainsStub {
 public:
  virtual ~DomainsStub() = 0;

  virtual StatusOr<google::cloud::domains::v1::SearchDomainsResponse>
  SearchDomains(
      grpc::ClientContext& context, Options const& options,
      google::cloud::domains::v1::SearchDomainsRequest const& request) = 0;

  virtual StatusOr<
      google::cloud::domains::v1::RetrieveRegisterParametersResponse>
  RetrieveRegisterParameters(
      grpc::ClientContext& context, Options const& options,
      google::cloud::domains::v1::RetrieveRegisterParametersRequest const&
          request) = 0;

  virtual future<StatusOr<google::longrunning::Operation>> AsyncRegisterDomain(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::domains::v1::RegisterDomainRequest const& request) = 0;

  virtual StatusOr<google::longrunning::Operation> RegisterDomain(
      grpc::ClientContext& context, Options options,
      google::cloud::domains::v1::RegisterDomainRequest const& request) = 0;

  virtual StatusOr<
      google::cloud::domains::v1::RetrieveTransferParametersResponse>
  RetrieveTransferParameters(
      grpc::ClientContext& context, Options const& options,
      google::cloud::domains::v1::RetrieveTransferParametersRequest const&
          request) = 0;

  virtual future<StatusOr<google::longrunning::Operation>> AsyncTransferDomain(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::domains::v1::TransferDomainRequest const& request) = 0;

  virtual StatusOr<google::longrunning::Operation> TransferDomain(
      grpc::ClientContext& context, Options options,
      google::cloud::domains::v1::TransferDomainRequest const& request) = 0;

  virtual StatusOr<google::cloud::domains::v1::ListRegistrationsResponse>
  ListRegistrations(
      grpc::ClientContext& context, Options const& options,
      google::cloud::domains::v1::ListRegistrationsRequest const& request) = 0;

  virtual StatusOr<google::cloud::domains::v1::Registration> GetRegistration(
      grpc::ClientContext& context, Options const& options,
      google::cloud::domains::v1::GetRegistrationRequest const& request) = 0;

  virtual future<StatusOr<google::longrunning::Operation>>
  AsyncUpdateRegistration(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::domains::v1::UpdateRegistrationRequest const& request) = 0;

  virtual StatusOr<google::longrunning::Operation> UpdateRegistration(
      grpc::ClientContext& context, Options options,
      google::cloud::domains::v1::UpdateRegistrationRequest const& request) = 0;

  virtual future<StatusOr<google::longrunning::Operation>>
  AsyncConfigureManagementSettings(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::domains::v1::ConfigureManagementSettingsRequest const&
          request) = 0;

  virtual StatusOr<google::longrunning::Operation> ConfigureManagementSettings(
      grpc::ClientContext& context, Options options,
      google::cloud::domains::v1::ConfigureManagementSettingsRequest const&
          request) = 0;

  virtual future<StatusOr<google::longrunning::Operation>>
  AsyncConfigureDnsSettings(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::domains::v1::ConfigureDnsSettingsRequest const&
          request) = 0;

  virtual StatusOr<google::longrunning::Operation> ConfigureDnsSettings(
      grpc::ClientContext& context, Options options,
      google::cloud::domains::v1::ConfigureDnsSettingsRequest const&
          request) = 0;

  virtual future<StatusOr<google::longrunning::Operation>>
  AsyncConfigureContactSettings(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::domains::v1::ConfigureContactSettingsRequest const&
          request) = 0;

  virtual StatusOr<google::longrunning::Operation> ConfigureContactSettings(
      grpc::ClientContext& context, Options options,
      google::cloud::domains::v1::ConfigureContactSettingsRequest const&
          request) = 0;

  virtual future<StatusOr<google::longrunning::Operation>>
  AsyncExportRegistration(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::domains::v1::ExportRegistrationRequest const& request) = 0;

  virtual StatusOr<google::longrunning::Operation> ExportRegistration(
      grpc::ClientContext& context, Options options,
      google::cloud::domains::v1::ExportRegistrationRequest const& request) = 0;

  virtual future<StatusOr<google::longrunning::Operation>>
  AsyncDeleteRegistration(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::domains::v1::DeleteRegistrationRequest const& request) = 0;

  virtual StatusOr<google::longrunning::Operation> DeleteRegistration(
      grpc::ClientContext& context, Options options,
      google::cloud::domains::v1::DeleteRegistrationRequest const& request) = 0;

  virtual StatusOr<google::cloud::domains::v1::AuthorizationCode>
  RetrieveAuthorizationCode(
      grpc::ClientContext& context, Options const& options,
      google::cloud::domains::v1::RetrieveAuthorizationCodeRequest const&
          request) = 0;

  virtual StatusOr<google::cloud::domains::v1::AuthorizationCode>
  ResetAuthorizationCode(
      grpc::ClientContext& context, Options const& options,
      google::cloud::domains::v1::ResetAuthorizationCodeRequest const&
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

class DefaultDomainsStub : public DomainsStub {
 public:
  DefaultDomainsStub(
      std::unique_ptr<google::cloud::domains::v1::Domains::StubInterface>
          grpc_stub,
      std::unique_ptr<google::longrunning::Operations::StubInterface>
          operations)
      : grpc_stub_(std::move(grpc_stub)), operations_(std::move(operations)) {}

  StatusOr<google::cloud::domains::v1::SearchDomainsResponse> SearchDomains(
      grpc::ClientContext& context, Options const& options,
      google::cloud::domains::v1::SearchDomainsRequest const& request) override;

  StatusOr<google::cloud::domains::v1::RetrieveRegisterParametersResponse>
  RetrieveRegisterParameters(
      grpc::ClientContext& context, Options const& options,
      google::cloud::domains::v1::RetrieveRegisterParametersRequest const&
          request) override;

  future<StatusOr<google::longrunning::Operation>> AsyncRegisterDomain(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::domains::v1::RegisterDomainRequest const& request)
      override;

  StatusOr<google::longrunning::Operation> RegisterDomain(
      grpc::ClientContext& context, Options options,
      google::cloud::domains::v1::RegisterDomainRequest const& request)
      override;

  StatusOr<google::cloud::domains::v1::RetrieveTransferParametersResponse>
  RetrieveTransferParameters(
      grpc::ClientContext& context, Options const& options,
      google::cloud::domains::v1::RetrieveTransferParametersRequest const&
          request) override;

  future<StatusOr<google::longrunning::Operation>> AsyncTransferDomain(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::domains::v1::TransferDomainRequest const& request)
      override;

  StatusOr<google::longrunning::Operation> TransferDomain(
      grpc::ClientContext& context, Options options,
      google::cloud::domains::v1::TransferDomainRequest const& request)
      override;

  StatusOr<google::cloud::domains::v1::ListRegistrationsResponse>
  ListRegistrations(grpc::ClientContext& context, Options const& options,
                    google::cloud::domains::v1::ListRegistrationsRequest const&
                        request) override;

  StatusOr<google::cloud::domains::v1::Registration> GetRegistration(
      grpc::ClientContext& context, Options const& options,
      google::cloud::domains::v1::GetRegistrationRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncUpdateRegistration(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::domains::v1::UpdateRegistrationRequest const& request)
      override;

  StatusOr<google::longrunning::Operation> UpdateRegistration(
      grpc::ClientContext& context, Options options,
      google::cloud::domains::v1::UpdateRegistrationRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>>
  AsyncConfigureManagementSettings(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::domains::v1::ConfigureManagementSettingsRequest const&
          request) override;

  StatusOr<google::longrunning::Operation> ConfigureManagementSettings(
      grpc::ClientContext& context, Options options,
      google::cloud::domains::v1::ConfigureManagementSettingsRequest const&
          request) override;

  future<StatusOr<google::longrunning::Operation>> AsyncConfigureDnsSettings(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::domains::v1::ConfigureDnsSettingsRequest const& request)
      override;

  StatusOr<google::longrunning::Operation> ConfigureDnsSettings(
      grpc::ClientContext& context, Options options,
      google::cloud::domains::v1::ConfigureDnsSettingsRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>>
  AsyncConfigureContactSettings(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::domains::v1::ConfigureContactSettingsRequest const&
          request) override;

  StatusOr<google::longrunning::Operation> ConfigureContactSettings(
      grpc::ClientContext& context, Options options,
      google::cloud::domains::v1::ConfigureContactSettingsRequest const&
          request) override;

  future<StatusOr<google::longrunning::Operation>> AsyncExportRegistration(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::domains::v1::ExportRegistrationRequest const& request)
      override;

  StatusOr<google::longrunning::Operation> ExportRegistration(
      grpc::ClientContext& context, Options options,
      google::cloud::domains::v1::ExportRegistrationRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncDeleteRegistration(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::domains::v1::DeleteRegistrationRequest const& request)
      override;

  StatusOr<google::longrunning::Operation> DeleteRegistration(
      grpc::ClientContext& context, Options options,
      google::cloud::domains::v1::DeleteRegistrationRequest const& request)
      override;

  StatusOr<google::cloud::domains::v1::AuthorizationCode>
  RetrieveAuthorizationCode(
      grpc::ClientContext& context, Options const& options,
      google::cloud::domains::v1::RetrieveAuthorizationCodeRequest const&
          request) override;

  StatusOr<google::cloud::domains::v1::AuthorizationCode>
  ResetAuthorizationCode(
      grpc::ClientContext& context, Options const& options,
      google::cloud::domains::v1::ResetAuthorizationCodeRequest const& request)
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
  std::unique_ptr<google::cloud::domains::v1::Domains::StubInterface>
      grpc_stub_;
  std::unique_ptr<google::longrunning::Operations::StubInterface> operations_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace domains_v1_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DOMAINS_V1_INTERNAL_DOMAINS_STUB_H
