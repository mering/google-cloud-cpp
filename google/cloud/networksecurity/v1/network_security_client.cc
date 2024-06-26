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
// source: google/cloud/networksecurity/v1/network_security.proto

#include "google/cloud/networksecurity/v1/network_security_client.h"
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace networksecurity_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

NetworkSecurityClient::NetworkSecurityClient(
    std::shared_ptr<NetworkSecurityConnection> connection, Options opts)
    : connection_(std::move(connection)),
      options_(
          internal::MergeOptions(std::move(opts), connection_->options())) {}
NetworkSecurityClient::~NetworkSecurityClient() = default;

StreamRange<google::cloud::networksecurity::v1::AuthorizationPolicy>
NetworkSecurityClient::ListAuthorizationPolicies(std::string const& parent,
                                                 Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::networksecurity::v1::ListAuthorizationPoliciesRequest request;
  request.set_parent(parent);
  return connection_->ListAuthorizationPolicies(request);
}

StreamRange<google::cloud::networksecurity::v1::AuthorizationPolicy>
NetworkSecurityClient::ListAuthorizationPolicies(
    google::cloud::networksecurity::v1::ListAuthorizationPoliciesRequest
        request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->ListAuthorizationPolicies(std::move(request));
}

StatusOr<google::cloud::networksecurity::v1::AuthorizationPolicy>
NetworkSecurityClient::GetAuthorizationPolicy(std::string const& name,
                                              Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::networksecurity::v1::GetAuthorizationPolicyRequest request;
  request.set_name(name);
  return connection_->GetAuthorizationPolicy(request);
}

StatusOr<google::cloud::networksecurity::v1::AuthorizationPolicy>
NetworkSecurityClient::GetAuthorizationPolicy(
    google::cloud::networksecurity::v1::GetAuthorizationPolicyRequest const&
        request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->GetAuthorizationPolicy(request);
}

future<StatusOr<google::cloud::networksecurity::v1::AuthorizationPolicy>>
NetworkSecurityClient::CreateAuthorizationPolicy(
    std::string const& parent,
    google::cloud::networksecurity::v1::AuthorizationPolicy const&
        authorization_policy,
    std::string const& authorization_policy_id, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::networksecurity::v1::CreateAuthorizationPolicyRequest request;
  request.set_parent(parent);
  *request.mutable_authorization_policy() = authorization_policy;
  request.set_authorization_policy_id(authorization_policy_id);
  return connection_->CreateAuthorizationPolicy(request);
}

StatusOr<google::longrunning::Operation>
NetworkSecurityClient::CreateAuthorizationPolicy(
    ExperimentalTag, NoAwaitTag, std::string const& parent,
    google::cloud::networksecurity::v1::AuthorizationPolicy const&
        authorization_policy,
    std::string const& authorization_policy_id, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::networksecurity::v1::CreateAuthorizationPolicyRequest request;
  request.set_parent(parent);
  *request.mutable_authorization_policy() = authorization_policy;
  request.set_authorization_policy_id(authorization_policy_id);
  return connection_->CreateAuthorizationPolicy(ExperimentalTag{}, NoAwaitTag{},
                                                request);
}

future<StatusOr<google::cloud::networksecurity::v1::AuthorizationPolicy>>
NetworkSecurityClient::CreateAuthorizationPolicy(
    google::cloud::networksecurity::v1::CreateAuthorizationPolicyRequest const&
        request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->CreateAuthorizationPolicy(request);
}

StatusOr<google::longrunning::Operation>
NetworkSecurityClient::CreateAuthorizationPolicy(
    ExperimentalTag, NoAwaitTag,
    google::cloud::networksecurity::v1::CreateAuthorizationPolicyRequest const&
        request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->CreateAuthorizationPolicy(ExperimentalTag{}, NoAwaitTag{},
                                                request);
}

future<StatusOr<google::cloud::networksecurity::v1::AuthorizationPolicy>>
NetworkSecurityClient::CreateAuthorizationPolicy(
    ExperimentalTag, google::longrunning::Operation const& operation,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->CreateAuthorizationPolicy(ExperimentalTag{}, operation);
}

future<StatusOr<google::cloud::networksecurity::v1::AuthorizationPolicy>>
NetworkSecurityClient::UpdateAuthorizationPolicy(
    google::cloud::networksecurity::v1::AuthorizationPolicy const&
        authorization_policy,
    google::protobuf::FieldMask const& update_mask, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::networksecurity::v1::UpdateAuthorizationPolicyRequest request;
  *request.mutable_authorization_policy() = authorization_policy;
  *request.mutable_update_mask() = update_mask;
  return connection_->UpdateAuthorizationPolicy(request);
}

StatusOr<google::longrunning::Operation>
NetworkSecurityClient::UpdateAuthorizationPolicy(
    ExperimentalTag, NoAwaitTag,
    google::cloud::networksecurity::v1::AuthorizationPolicy const&
        authorization_policy,
    google::protobuf::FieldMask const& update_mask, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::networksecurity::v1::UpdateAuthorizationPolicyRequest request;
  *request.mutable_authorization_policy() = authorization_policy;
  *request.mutable_update_mask() = update_mask;
  return connection_->UpdateAuthorizationPolicy(ExperimentalTag{}, NoAwaitTag{},
                                                request);
}

future<StatusOr<google::cloud::networksecurity::v1::AuthorizationPolicy>>
NetworkSecurityClient::UpdateAuthorizationPolicy(
    google::cloud::networksecurity::v1::UpdateAuthorizationPolicyRequest const&
        request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->UpdateAuthorizationPolicy(request);
}

StatusOr<google::longrunning::Operation>
NetworkSecurityClient::UpdateAuthorizationPolicy(
    ExperimentalTag, NoAwaitTag,
    google::cloud::networksecurity::v1::UpdateAuthorizationPolicyRequest const&
        request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->UpdateAuthorizationPolicy(ExperimentalTag{}, NoAwaitTag{},
                                                request);
}

future<StatusOr<google::cloud::networksecurity::v1::AuthorizationPolicy>>
NetworkSecurityClient::UpdateAuthorizationPolicy(
    ExperimentalTag, google::longrunning::Operation const& operation,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->UpdateAuthorizationPolicy(ExperimentalTag{}, operation);
}

future<StatusOr<google::cloud::networksecurity::v1::OperationMetadata>>
NetworkSecurityClient::DeleteAuthorizationPolicy(std::string const& name,
                                                 Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::networksecurity::v1::DeleteAuthorizationPolicyRequest request;
  request.set_name(name);
  return connection_->DeleteAuthorizationPolicy(request);
}

StatusOr<google::longrunning::Operation>
NetworkSecurityClient::DeleteAuthorizationPolicy(ExperimentalTag, NoAwaitTag,
                                                 std::string const& name,
                                                 Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::networksecurity::v1::DeleteAuthorizationPolicyRequest request;
  request.set_name(name);
  return connection_->DeleteAuthorizationPolicy(ExperimentalTag{}, NoAwaitTag{},
                                                request);
}

future<StatusOr<google::cloud::networksecurity::v1::OperationMetadata>>
NetworkSecurityClient::DeleteAuthorizationPolicy(
    google::cloud::networksecurity::v1::DeleteAuthorizationPolicyRequest const&
        request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->DeleteAuthorizationPolicy(request);
}

StatusOr<google::longrunning::Operation>
NetworkSecurityClient::DeleteAuthorizationPolicy(
    ExperimentalTag, NoAwaitTag,
    google::cloud::networksecurity::v1::DeleteAuthorizationPolicyRequest const&
        request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->DeleteAuthorizationPolicy(ExperimentalTag{}, NoAwaitTag{},
                                                request);
}

future<StatusOr<google::cloud::networksecurity::v1::OperationMetadata>>
NetworkSecurityClient::DeleteAuthorizationPolicy(
    ExperimentalTag, google::longrunning::Operation const& operation,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->DeleteAuthorizationPolicy(ExperimentalTag{}, operation);
}

StreamRange<google::cloud::networksecurity::v1::ServerTlsPolicy>
NetworkSecurityClient::ListServerTlsPolicies(std::string const& parent,
                                             Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::networksecurity::v1::ListServerTlsPoliciesRequest request;
  request.set_parent(parent);
  return connection_->ListServerTlsPolicies(request);
}

StreamRange<google::cloud::networksecurity::v1::ServerTlsPolicy>
NetworkSecurityClient::ListServerTlsPolicies(
    google::cloud::networksecurity::v1::ListServerTlsPoliciesRequest request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->ListServerTlsPolicies(std::move(request));
}

StatusOr<google::cloud::networksecurity::v1::ServerTlsPolicy>
NetworkSecurityClient::GetServerTlsPolicy(std::string const& name,
                                          Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::networksecurity::v1::GetServerTlsPolicyRequest request;
  request.set_name(name);
  return connection_->GetServerTlsPolicy(request);
}

StatusOr<google::cloud::networksecurity::v1::ServerTlsPolicy>
NetworkSecurityClient::GetServerTlsPolicy(
    google::cloud::networksecurity::v1::GetServerTlsPolicyRequest const&
        request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->GetServerTlsPolicy(request);
}

future<StatusOr<google::cloud::networksecurity::v1::ServerTlsPolicy>>
NetworkSecurityClient::CreateServerTlsPolicy(
    std::string const& parent,
    google::cloud::networksecurity::v1::ServerTlsPolicy const&
        server_tls_policy,
    std::string const& server_tls_policy_id, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::networksecurity::v1::CreateServerTlsPolicyRequest request;
  request.set_parent(parent);
  *request.mutable_server_tls_policy() = server_tls_policy;
  request.set_server_tls_policy_id(server_tls_policy_id);
  return connection_->CreateServerTlsPolicy(request);
}

StatusOr<google::longrunning::Operation>
NetworkSecurityClient::CreateServerTlsPolicy(
    ExperimentalTag, NoAwaitTag, std::string const& parent,
    google::cloud::networksecurity::v1::ServerTlsPolicy const&
        server_tls_policy,
    std::string const& server_tls_policy_id, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::networksecurity::v1::CreateServerTlsPolicyRequest request;
  request.set_parent(parent);
  *request.mutable_server_tls_policy() = server_tls_policy;
  request.set_server_tls_policy_id(server_tls_policy_id);
  return connection_->CreateServerTlsPolicy(ExperimentalTag{}, NoAwaitTag{},
                                            request);
}

future<StatusOr<google::cloud::networksecurity::v1::ServerTlsPolicy>>
NetworkSecurityClient::CreateServerTlsPolicy(
    google::cloud::networksecurity::v1::CreateServerTlsPolicyRequest const&
        request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->CreateServerTlsPolicy(request);
}

StatusOr<google::longrunning::Operation>
NetworkSecurityClient::CreateServerTlsPolicy(
    ExperimentalTag, NoAwaitTag,
    google::cloud::networksecurity::v1::CreateServerTlsPolicyRequest const&
        request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->CreateServerTlsPolicy(ExperimentalTag{}, NoAwaitTag{},
                                            request);
}

future<StatusOr<google::cloud::networksecurity::v1::ServerTlsPolicy>>
NetworkSecurityClient::CreateServerTlsPolicy(
    ExperimentalTag, google::longrunning::Operation const& operation,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->CreateServerTlsPolicy(ExperimentalTag{}, operation);
}

future<StatusOr<google::cloud::networksecurity::v1::ServerTlsPolicy>>
NetworkSecurityClient::UpdateServerTlsPolicy(
    google::cloud::networksecurity::v1::ServerTlsPolicy const&
        server_tls_policy,
    google::protobuf::FieldMask const& update_mask, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::networksecurity::v1::UpdateServerTlsPolicyRequest request;
  *request.mutable_server_tls_policy() = server_tls_policy;
  *request.mutable_update_mask() = update_mask;
  return connection_->UpdateServerTlsPolicy(request);
}

StatusOr<google::longrunning::Operation>
NetworkSecurityClient::UpdateServerTlsPolicy(
    ExperimentalTag, NoAwaitTag,
    google::cloud::networksecurity::v1::ServerTlsPolicy const&
        server_tls_policy,
    google::protobuf::FieldMask const& update_mask, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::networksecurity::v1::UpdateServerTlsPolicyRequest request;
  *request.mutable_server_tls_policy() = server_tls_policy;
  *request.mutable_update_mask() = update_mask;
  return connection_->UpdateServerTlsPolicy(ExperimentalTag{}, NoAwaitTag{},
                                            request);
}

future<StatusOr<google::cloud::networksecurity::v1::ServerTlsPolicy>>
NetworkSecurityClient::UpdateServerTlsPolicy(
    google::cloud::networksecurity::v1::UpdateServerTlsPolicyRequest const&
        request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->UpdateServerTlsPolicy(request);
}

StatusOr<google::longrunning::Operation>
NetworkSecurityClient::UpdateServerTlsPolicy(
    ExperimentalTag, NoAwaitTag,
    google::cloud::networksecurity::v1::UpdateServerTlsPolicyRequest const&
        request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->UpdateServerTlsPolicy(ExperimentalTag{}, NoAwaitTag{},
                                            request);
}

future<StatusOr<google::cloud::networksecurity::v1::ServerTlsPolicy>>
NetworkSecurityClient::UpdateServerTlsPolicy(
    ExperimentalTag, google::longrunning::Operation const& operation,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->UpdateServerTlsPolicy(ExperimentalTag{}, operation);
}

future<StatusOr<google::cloud::networksecurity::v1::OperationMetadata>>
NetworkSecurityClient::DeleteServerTlsPolicy(std::string const& name,
                                             Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::networksecurity::v1::DeleteServerTlsPolicyRequest request;
  request.set_name(name);
  return connection_->DeleteServerTlsPolicy(request);
}

StatusOr<google::longrunning::Operation>
NetworkSecurityClient::DeleteServerTlsPolicy(ExperimentalTag, NoAwaitTag,
                                             std::string const& name,
                                             Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::networksecurity::v1::DeleteServerTlsPolicyRequest request;
  request.set_name(name);
  return connection_->DeleteServerTlsPolicy(ExperimentalTag{}, NoAwaitTag{},
                                            request);
}

future<StatusOr<google::cloud::networksecurity::v1::OperationMetadata>>
NetworkSecurityClient::DeleteServerTlsPolicy(
    google::cloud::networksecurity::v1::DeleteServerTlsPolicyRequest const&
        request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->DeleteServerTlsPolicy(request);
}

StatusOr<google::longrunning::Operation>
NetworkSecurityClient::DeleteServerTlsPolicy(
    ExperimentalTag, NoAwaitTag,
    google::cloud::networksecurity::v1::DeleteServerTlsPolicyRequest const&
        request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->DeleteServerTlsPolicy(ExperimentalTag{}, NoAwaitTag{},
                                            request);
}

future<StatusOr<google::cloud::networksecurity::v1::OperationMetadata>>
NetworkSecurityClient::DeleteServerTlsPolicy(
    ExperimentalTag, google::longrunning::Operation const& operation,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->DeleteServerTlsPolicy(ExperimentalTag{}, operation);
}

StreamRange<google::cloud::networksecurity::v1::ClientTlsPolicy>
NetworkSecurityClient::ListClientTlsPolicies(std::string const& parent,
                                             Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::networksecurity::v1::ListClientTlsPoliciesRequest request;
  request.set_parent(parent);
  return connection_->ListClientTlsPolicies(request);
}

StreamRange<google::cloud::networksecurity::v1::ClientTlsPolicy>
NetworkSecurityClient::ListClientTlsPolicies(
    google::cloud::networksecurity::v1::ListClientTlsPoliciesRequest request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->ListClientTlsPolicies(std::move(request));
}

StatusOr<google::cloud::networksecurity::v1::ClientTlsPolicy>
NetworkSecurityClient::GetClientTlsPolicy(std::string const& name,
                                          Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::networksecurity::v1::GetClientTlsPolicyRequest request;
  request.set_name(name);
  return connection_->GetClientTlsPolicy(request);
}

StatusOr<google::cloud::networksecurity::v1::ClientTlsPolicy>
NetworkSecurityClient::GetClientTlsPolicy(
    google::cloud::networksecurity::v1::GetClientTlsPolicyRequest const&
        request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->GetClientTlsPolicy(request);
}

future<StatusOr<google::cloud::networksecurity::v1::ClientTlsPolicy>>
NetworkSecurityClient::CreateClientTlsPolicy(
    std::string const& parent,
    google::cloud::networksecurity::v1::ClientTlsPolicy const&
        client_tls_policy,
    std::string const& client_tls_policy_id, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::networksecurity::v1::CreateClientTlsPolicyRequest request;
  request.set_parent(parent);
  *request.mutable_client_tls_policy() = client_tls_policy;
  request.set_client_tls_policy_id(client_tls_policy_id);
  return connection_->CreateClientTlsPolicy(request);
}

StatusOr<google::longrunning::Operation>
NetworkSecurityClient::CreateClientTlsPolicy(
    ExperimentalTag, NoAwaitTag, std::string const& parent,
    google::cloud::networksecurity::v1::ClientTlsPolicy const&
        client_tls_policy,
    std::string const& client_tls_policy_id, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::networksecurity::v1::CreateClientTlsPolicyRequest request;
  request.set_parent(parent);
  *request.mutable_client_tls_policy() = client_tls_policy;
  request.set_client_tls_policy_id(client_tls_policy_id);
  return connection_->CreateClientTlsPolicy(ExperimentalTag{}, NoAwaitTag{},
                                            request);
}

future<StatusOr<google::cloud::networksecurity::v1::ClientTlsPolicy>>
NetworkSecurityClient::CreateClientTlsPolicy(
    google::cloud::networksecurity::v1::CreateClientTlsPolicyRequest const&
        request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->CreateClientTlsPolicy(request);
}

StatusOr<google::longrunning::Operation>
NetworkSecurityClient::CreateClientTlsPolicy(
    ExperimentalTag, NoAwaitTag,
    google::cloud::networksecurity::v1::CreateClientTlsPolicyRequest const&
        request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->CreateClientTlsPolicy(ExperimentalTag{}, NoAwaitTag{},
                                            request);
}

future<StatusOr<google::cloud::networksecurity::v1::ClientTlsPolicy>>
NetworkSecurityClient::CreateClientTlsPolicy(
    ExperimentalTag, google::longrunning::Operation const& operation,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->CreateClientTlsPolicy(ExperimentalTag{}, operation);
}

future<StatusOr<google::cloud::networksecurity::v1::ClientTlsPolicy>>
NetworkSecurityClient::UpdateClientTlsPolicy(
    google::cloud::networksecurity::v1::ClientTlsPolicy const&
        client_tls_policy,
    google::protobuf::FieldMask const& update_mask, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::networksecurity::v1::UpdateClientTlsPolicyRequest request;
  *request.mutable_client_tls_policy() = client_tls_policy;
  *request.mutable_update_mask() = update_mask;
  return connection_->UpdateClientTlsPolicy(request);
}

StatusOr<google::longrunning::Operation>
NetworkSecurityClient::UpdateClientTlsPolicy(
    ExperimentalTag, NoAwaitTag,
    google::cloud::networksecurity::v1::ClientTlsPolicy const&
        client_tls_policy,
    google::protobuf::FieldMask const& update_mask, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::networksecurity::v1::UpdateClientTlsPolicyRequest request;
  *request.mutable_client_tls_policy() = client_tls_policy;
  *request.mutable_update_mask() = update_mask;
  return connection_->UpdateClientTlsPolicy(ExperimentalTag{}, NoAwaitTag{},
                                            request);
}

future<StatusOr<google::cloud::networksecurity::v1::ClientTlsPolicy>>
NetworkSecurityClient::UpdateClientTlsPolicy(
    google::cloud::networksecurity::v1::UpdateClientTlsPolicyRequest const&
        request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->UpdateClientTlsPolicy(request);
}

StatusOr<google::longrunning::Operation>
NetworkSecurityClient::UpdateClientTlsPolicy(
    ExperimentalTag, NoAwaitTag,
    google::cloud::networksecurity::v1::UpdateClientTlsPolicyRequest const&
        request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->UpdateClientTlsPolicy(ExperimentalTag{}, NoAwaitTag{},
                                            request);
}

future<StatusOr<google::cloud::networksecurity::v1::ClientTlsPolicy>>
NetworkSecurityClient::UpdateClientTlsPolicy(
    ExperimentalTag, google::longrunning::Operation const& operation,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->UpdateClientTlsPolicy(ExperimentalTag{}, operation);
}

future<StatusOr<google::cloud::networksecurity::v1::OperationMetadata>>
NetworkSecurityClient::DeleteClientTlsPolicy(std::string const& name,
                                             Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::networksecurity::v1::DeleteClientTlsPolicyRequest request;
  request.set_name(name);
  return connection_->DeleteClientTlsPolicy(request);
}

StatusOr<google::longrunning::Operation>
NetworkSecurityClient::DeleteClientTlsPolicy(ExperimentalTag, NoAwaitTag,
                                             std::string const& name,
                                             Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::networksecurity::v1::DeleteClientTlsPolicyRequest request;
  request.set_name(name);
  return connection_->DeleteClientTlsPolicy(ExperimentalTag{}, NoAwaitTag{},
                                            request);
}

future<StatusOr<google::cloud::networksecurity::v1::OperationMetadata>>
NetworkSecurityClient::DeleteClientTlsPolicy(
    google::cloud::networksecurity::v1::DeleteClientTlsPolicyRequest const&
        request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->DeleteClientTlsPolicy(request);
}

StatusOr<google::longrunning::Operation>
NetworkSecurityClient::DeleteClientTlsPolicy(
    ExperimentalTag, NoAwaitTag,
    google::cloud::networksecurity::v1::DeleteClientTlsPolicyRequest const&
        request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->DeleteClientTlsPolicy(ExperimentalTag{}, NoAwaitTag{},
                                            request);
}

future<StatusOr<google::cloud::networksecurity::v1::OperationMetadata>>
NetworkSecurityClient::DeleteClientTlsPolicy(
    ExperimentalTag, google::longrunning::Operation const& operation,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->DeleteClientTlsPolicy(ExperimentalTag{}, operation);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace networksecurity_v1
}  // namespace cloud
}  // namespace google
