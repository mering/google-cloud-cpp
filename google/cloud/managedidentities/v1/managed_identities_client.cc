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

#include "google/cloud/managedidentities/v1/managed_identities_client.h"
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace managedidentities_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

ManagedIdentitiesServiceClient::ManagedIdentitiesServiceClient(
    std::shared_ptr<ManagedIdentitiesServiceConnection> connection,
    Options opts)
    : connection_(std::move(connection)),
      options_(
          internal::MergeOptions(std::move(opts), connection_->options())) {}
ManagedIdentitiesServiceClient::~ManagedIdentitiesServiceClient() = default;

future<StatusOr<google::cloud::managedidentities::v1::Domain>>
ManagedIdentitiesServiceClient::CreateMicrosoftAdDomain(
    std::string const& parent, std::string const& domain_name,
    google::cloud::managedidentities::v1::Domain const& domain, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::managedidentities::v1::CreateMicrosoftAdDomainRequest request;
  request.set_parent(parent);
  request.set_domain_name(domain_name);
  *request.mutable_domain() = domain;
  return connection_->CreateMicrosoftAdDomain(request);
}

StatusOr<google::longrunning::Operation>
ManagedIdentitiesServiceClient::CreateMicrosoftAdDomain(
    ExperimentalTag, NoAwaitTag, std::string const& parent,
    std::string const& domain_name,
    google::cloud::managedidentities::v1::Domain const& domain, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::managedidentities::v1::CreateMicrosoftAdDomainRequest request;
  request.set_parent(parent);
  request.set_domain_name(domain_name);
  *request.mutable_domain() = domain;
  return connection_->CreateMicrosoftAdDomain(ExperimentalTag{}, NoAwaitTag{},
                                              request);
}

future<StatusOr<google::cloud::managedidentities::v1::Domain>>
ManagedIdentitiesServiceClient::CreateMicrosoftAdDomain(
    google::cloud::managedidentities::v1::CreateMicrosoftAdDomainRequest const&
        request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->CreateMicrosoftAdDomain(request);
}

StatusOr<google::longrunning::Operation>
ManagedIdentitiesServiceClient::CreateMicrosoftAdDomain(
    ExperimentalTag, NoAwaitTag,
    google::cloud::managedidentities::v1::CreateMicrosoftAdDomainRequest const&
        request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->CreateMicrosoftAdDomain(ExperimentalTag{}, NoAwaitTag{},
                                              request);
}

future<StatusOr<google::cloud::managedidentities::v1::Domain>>
ManagedIdentitiesServiceClient::CreateMicrosoftAdDomain(
    ExperimentalTag, google::longrunning::Operation const& operation,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->CreateMicrosoftAdDomain(ExperimentalTag{}, operation);
}

StatusOr<google::cloud::managedidentities::v1::ResetAdminPasswordResponse>
ManagedIdentitiesServiceClient::ResetAdminPassword(std::string const& name,
                                                   Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::managedidentities::v1::ResetAdminPasswordRequest request;
  request.set_name(name);
  return connection_->ResetAdminPassword(request);
}

StatusOr<google::cloud::managedidentities::v1::ResetAdminPasswordResponse>
ManagedIdentitiesServiceClient::ResetAdminPassword(
    google::cloud::managedidentities::v1::ResetAdminPasswordRequest const&
        request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->ResetAdminPassword(request);
}

StreamRange<google::cloud::managedidentities::v1::Domain>
ManagedIdentitiesServiceClient::ListDomains(std::string const& parent,
                                            Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::managedidentities::v1::ListDomainsRequest request;
  request.set_parent(parent);
  return connection_->ListDomains(request);
}

StreamRange<google::cloud::managedidentities::v1::Domain>
ManagedIdentitiesServiceClient::ListDomains(
    google::cloud::managedidentities::v1::ListDomainsRequest request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->ListDomains(std::move(request));
}

StatusOr<google::cloud::managedidentities::v1::Domain>
ManagedIdentitiesServiceClient::GetDomain(std::string const& name,
                                          Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::managedidentities::v1::GetDomainRequest request;
  request.set_name(name);
  return connection_->GetDomain(request);
}

StatusOr<google::cloud::managedidentities::v1::Domain>
ManagedIdentitiesServiceClient::GetDomain(
    google::cloud::managedidentities::v1::GetDomainRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->GetDomain(request);
}

future<StatusOr<google::cloud::managedidentities::v1::Domain>>
ManagedIdentitiesServiceClient::UpdateDomain(
    google::cloud::managedidentities::v1::Domain const& domain,
    google::protobuf::FieldMask const& update_mask, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::managedidentities::v1::UpdateDomainRequest request;
  *request.mutable_domain() = domain;
  *request.mutable_update_mask() = update_mask;
  return connection_->UpdateDomain(request);
}

StatusOr<google::longrunning::Operation>
ManagedIdentitiesServiceClient::UpdateDomain(
    ExperimentalTag, NoAwaitTag,
    google::cloud::managedidentities::v1::Domain const& domain,
    google::protobuf::FieldMask const& update_mask, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::managedidentities::v1::UpdateDomainRequest request;
  *request.mutable_domain() = domain;
  *request.mutable_update_mask() = update_mask;
  return connection_->UpdateDomain(ExperimentalTag{}, NoAwaitTag{}, request);
}

future<StatusOr<google::cloud::managedidentities::v1::Domain>>
ManagedIdentitiesServiceClient::UpdateDomain(
    google::cloud::managedidentities::v1::UpdateDomainRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->UpdateDomain(request);
}

StatusOr<google::longrunning::Operation>
ManagedIdentitiesServiceClient::UpdateDomain(
    ExperimentalTag, NoAwaitTag,
    google::cloud::managedidentities::v1::UpdateDomainRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->UpdateDomain(ExperimentalTag{}, NoAwaitTag{}, request);
}

future<StatusOr<google::cloud::managedidentities::v1::Domain>>
ManagedIdentitiesServiceClient::UpdateDomain(
    ExperimentalTag, google::longrunning::Operation const& operation,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->UpdateDomain(ExperimentalTag{}, operation);
}

future<StatusOr<google::cloud::managedidentities::v1::OpMetadata>>
ManagedIdentitiesServiceClient::DeleteDomain(std::string const& name,
                                             Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::managedidentities::v1::DeleteDomainRequest request;
  request.set_name(name);
  return connection_->DeleteDomain(request);
}

StatusOr<google::longrunning::Operation>
ManagedIdentitiesServiceClient::DeleteDomain(ExperimentalTag, NoAwaitTag,
                                             std::string const& name,
                                             Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::managedidentities::v1::DeleteDomainRequest request;
  request.set_name(name);
  return connection_->DeleteDomain(ExperimentalTag{}, NoAwaitTag{}, request);
}

future<StatusOr<google::cloud::managedidentities::v1::OpMetadata>>
ManagedIdentitiesServiceClient::DeleteDomain(
    google::cloud::managedidentities::v1::DeleteDomainRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->DeleteDomain(request);
}

StatusOr<google::longrunning::Operation>
ManagedIdentitiesServiceClient::DeleteDomain(
    ExperimentalTag, NoAwaitTag,
    google::cloud::managedidentities::v1::DeleteDomainRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->DeleteDomain(ExperimentalTag{}, NoAwaitTag{}, request);
}

future<StatusOr<google::cloud::managedidentities::v1::OpMetadata>>
ManagedIdentitiesServiceClient::DeleteDomain(
    ExperimentalTag, google::longrunning::Operation const& operation,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->DeleteDomain(ExperimentalTag{}, operation);
}

future<StatusOr<google::cloud::managedidentities::v1::Domain>>
ManagedIdentitiesServiceClient::AttachTrust(
    std::string const& name,
    google::cloud::managedidentities::v1::Trust const& trust, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::managedidentities::v1::AttachTrustRequest request;
  request.set_name(name);
  *request.mutable_trust() = trust;
  return connection_->AttachTrust(request);
}

StatusOr<google::longrunning::Operation>
ManagedIdentitiesServiceClient::AttachTrust(
    ExperimentalTag, NoAwaitTag, std::string const& name,
    google::cloud::managedidentities::v1::Trust const& trust, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::managedidentities::v1::AttachTrustRequest request;
  request.set_name(name);
  *request.mutable_trust() = trust;
  return connection_->AttachTrust(ExperimentalTag{}, NoAwaitTag{}, request);
}

future<StatusOr<google::cloud::managedidentities::v1::Domain>>
ManagedIdentitiesServiceClient::AttachTrust(
    google::cloud::managedidentities::v1::AttachTrustRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->AttachTrust(request);
}

StatusOr<google::longrunning::Operation>
ManagedIdentitiesServiceClient::AttachTrust(
    ExperimentalTag, NoAwaitTag,
    google::cloud::managedidentities::v1::AttachTrustRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->AttachTrust(ExperimentalTag{}, NoAwaitTag{}, request);
}

future<StatusOr<google::cloud::managedidentities::v1::Domain>>
ManagedIdentitiesServiceClient::AttachTrust(
    ExperimentalTag, google::longrunning::Operation const& operation,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->AttachTrust(ExperimentalTag{}, operation);
}

future<StatusOr<google::cloud::managedidentities::v1::Domain>>
ManagedIdentitiesServiceClient::ReconfigureTrust(
    std::string const& name, std::string const& target_domain_name,
    std::vector<std::string> const& target_dns_ip_addresses, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::managedidentities::v1::ReconfigureTrustRequest request;
  request.set_name(name);
  request.set_target_domain_name(target_domain_name);
  *request.mutable_target_dns_ip_addresses() = {target_dns_ip_addresses.begin(),
                                                target_dns_ip_addresses.end()};
  return connection_->ReconfigureTrust(request);
}

StatusOr<google::longrunning::Operation>
ManagedIdentitiesServiceClient::ReconfigureTrust(
    ExperimentalTag, NoAwaitTag, std::string const& name,
    std::string const& target_domain_name,
    std::vector<std::string> const& target_dns_ip_addresses, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::managedidentities::v1::ReconfigureTrustRequest request;
  request.set_name(name);
  request.set_target_domain_name(target_domain_name);
  *request.mutable_target_dns_ip_addresses() = {target_dns_ip_addresses.begin(),
                                                target_dns_ip_addresses.end()};
  return connection_->ReconfigureTrust(ExperimentalTag{}, NoAwaitTag{},
                                       request);
}

future<StatusOr<google::cloud::managedidentities::v1::Domain>>
ManagedIdentitiesServiceClient::ReconfigureTrust(
    google::cloud::managedidentities::v1::ReconfigureTrustRequest const&
        request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->ReconfigureTrust(request);
}

StatusOr<google::longrunning::Operation>
ManagedIdentitiesServiceClient::ReconfigureTrust(
    ExperimentalTag, NoAwaitTag,
    google::cloud::managedidentities::v1::ReconfigureTrustRequest const&
        request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->ReconfigureTrust(ExperimentalTag{}, NoAwaitTag{},
                                       request);
}

future<StatusOr<google::cloud::managedidentities::v1::Domain>>
ManagedIdentitiesServiceClient::ReconfigureTrust(
    ExperimentalTag, google::longrunning::Operation const& operation,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->ReconfigureTrust(ExperimentalTag{}, operation);
}

future<StatusOr<google::cloud::managedidentities::v1::Domain>>
ManagedIdentitiesServiceClient::DetachTrust(
    std::string const& name,
    google::cloud::managedidentities::v1::Trust const& trust, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::managedidentities::v1::DetachTrustRequest request;
  request.set_name(name);
  *request.mutable_trust() = trust;
  return connection_->DetachTrust(request);
}

StatusOr<google::longrunning::Operation>
ManagedIdentitiesServiceClient::DetachTrust(
    ExperimentalTag, NoAwaitTag, std::string const& name,
    google::cloud::managedidentities::v1::Trust const& trust, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::managedidentities::v1::DetachTrustRequest request;
  request.set_name(name);
  *request.mutable_trust() = trust;
  return connection_->DetachTrust(ExperimentalTag{}, NoAwaitTag{}, request);
}

future<StatusOr<google::cloud::managedidentities::v1::Domain>>
ManagedIdentitiesServiceClient::DetachTrust(
    google::cloud::managedidentities::v1::DetachTrustRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->DetachTrust(request);
}

StatusOr<google::longrunning::Operation>
ManagedIdentitiesServiceClient::DetachTrust(
    ExperimentalTag, NoAwaitTag,
    google::cloud::managedidentities::v1::DetachTrustRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->DetachTrust(ExperimentalTag{}, NoAwaitTag{}, request);
}

future<StatusOr<google::cloud::managedidentities::v1::Domain>>
ManagedIdentitiesServiceClient::DetachTrust(
    ExperimentalTag, google::longrunning::Operation const& operation,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->DetachTrust(ExperimentalTag{}, operation);
}

future<StatusOr<google::cloud::managedidentities::v1::Domain>>
ManagedIdentitiesServiceClient::ValidateTrust(
    std::string const& name,
    google::cloud::managedidentities::v1::Trust const& trust, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::managedidentities::v1::ValidateTrustRequest request;
  request.set_name(name);
  *request.mutable_trust() = trust;
  return connection_->ValidateTrust(request);
}

StatusOr<google::longrunning::Operation>
ManagedIdentitiesServiceClient::ValidateTrust(
    ExperimentalTag, NoAwaitTag, std::string const& name,
    google::cloud::managedidentities::v1::Trust const& trust, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::managedidentities::v1::ValidateTrustRequest request;
  request.set_name(name);
  *request.mutable_trust() = trust;
  return connection_->ValidateTrust(ExperimentalTag{}, NoAwaitTag{}, request);
}

future<StatusOr<google::cloud::managedidentities::v1::Domain>>
ManagedIdentitiesServiceClient::ValidateTrust(
    google::cloud::managedidentities::v1::ValidateTrustRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->ValidateTrust(request);
}

StatusOr<google::longrunning::Operation>
ManagedIdentitiesServiceClient::ValidateTrust(
    ExperimentalTag, NoAwaitTag,
    google::cloud::managedidentities::v1::ValidateTrustRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->ValidateTrust(ExperimentalTag{}, NoAwaitTag{}, request);
}

future<StatusOr<google::cloud::managedidentities::v1::Domain>>
ManagedIdentitiesServiceClient::ValidateTrust(
    ExperimentalTag, google::longrunning::Operation const& operation,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->ValidateTrust(ExperimentalTag{}, operation);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace managedidentities_v1
}  // namespace cloud
}  // namespace google
