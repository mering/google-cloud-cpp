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
// source: google/cloud/compute/firewall_policies/v1/firewall_policies.proto

#include "google/cloud/compute/firewall_policies/v1/firewall_policies_client.h"
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace compute_firewall_policies_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

FirewallPoliciesClient::FirewallPoliciesClient(
    std::shared_ptr<FirewallPoliciesConnection> connection, Options opts)
    : connection_(std::move(connection)),
      options_(
          internal::MergeOptions(std::move(opts), connection_->options())) {}
FirewallPoliciesClient::~FirewallPoliciesClient() = default;

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
FirewallPoliciesClient::AddAssociation(
    std::string const& firewall_policy,
    google::cloud::cpp::compute::v1::FirewallPolicyAssociation const&
        firewall_policy_association_resource,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::cpp::compute::firewall_policies::v1::AddAssociationRequest
      request;
  request.set_firewall_policy(firewall_policy);
  *request.mutable_firewall_policy_association_resource() =
      firewall_policy_association_resource;
  return connection_->AddAssociation(request);
}

StatusOr<google::cloud::cpp::compute::v1::Operation>
FirewallPoliciesClient::AddAssociation(
    ExperimentalTag, NoAwaitTag, std::string const& firewall_policy,
    google::cloud::cpp::compute::v1::FirewallPolicyAssociation const&
        firewall_policy_association_resource,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::cpp::compute::firewall_policies::v1::AddAssociationRequest
      request;
  request.set_firewall_policy(firewall_policy);
  *request.mutable_firewall_policy_association_resource() =
      firewall_policy_association_resource;
  return connection_->AddAssociation(ExperimentalTag{}, NoAwaitTag{}, request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
FirewallPoliciesClient::AddAssociation(
    google::cloud::cpp::compute::firewall_policies::v1::
        AddAssociationRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->AddAssociation(request);
}

StatusOr<google::cloud::cpp::compute::v1::Operation>
FirewallPoliciesClient::AddAssociation(
    ExperimentalTag, NoAwaitTag,
    google::cloud::cpp::compute::firewall_policies::v1::
        AddAssociationRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->AddAssociation(ExperimentalTag{}, NoAwaitTag{}, request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
FirewallPoliciesClient::AddAssociation(
    ExperimentalTag,
    google::cloud::cpp::compute::v1::Operation const& operation, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->AddAssociation(ExperimentalTag{}, operation);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
FirewallPoliciesClient::AddRule(
    std::string const& firewall_policy,
    google::cloud::cpp::compute::v1::FirewallPolicyRule const&
        firewall_policy_rule_resource,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::cpp::compute::firewall_policies::v1::AddRuleRequest request;
  request.set_firewall_policy(firewall_policy);
  *request.mutable_firewall_policy_rule_resource() =
      firewall_policy_rule_resource;
  return connection_->AddRule(request);
}

StatusOr<google::cloud::cpp::compute::v1::Operation>
FirewallPoliciesClient::AddRule(
    ExperimentalTag, NoAwaitTag, std::string const& firewall_policy,
    google::cloud::cpp::compute::v1::FirewallPolicyRule const&
        firewall_policy_rule_resource,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::cpp::compute::firewall_policies::v1::AddRuleRequest request;
  request.set_firewall_policy(firewall_policy);
  *request.mutable_firewall_policy_rule_resource() =
      firewall_policy_rule_resource;
  return connection_->AddRule(ExperimentalTag{}, NoAwaitTag{}, request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
FirewallPoliciesClient::AddRule(
    google::cloud::cpp::compute::firewall_policies::v1::AddRuleRequest const&
        request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->AddRule(request);
}

StatusOr<google::cloud::cpp::compute::v1::Operation>
FirewallPoliciesClient::AddRule(
    ExperimentalTag, NoAwaitTag,
    google::cloud::cpp::compute::firewall_policies::v1::AddRuleRequest const&
        request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->AddRule(ExperimentalTag{}, NoAwaitTag{}, request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
FirewallPoliciesClient::AddRule(
    ExperimentalTag,
    google::cloud::cpp::compute::v1::Operation const& operation, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->AddRule(ExperimentalTag{}, operation);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
FirewallPoliciesClient::CloneRules(std::string const& firewall_policy,
                                   Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::cpp::compute::firewall_policies::v1::CloneRulesRequest request;
  request.set_firewall_policy(firewall_policy);
  return connection_->CloneRules(request);
}

StatusOr<google::cloud::cpp::compute::v1::Operation>
FirewallPoliciesClient::CloneRules(ExperimentalTag, NoAwaitTag,
                                   std::string const& firewall_policy,
                                   Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::cpp::compute::firewall_policies::v1::CloneRulesRequest request;
  request.set_firewall_policy(firewall_policy);
  return connection_->CloneRules(ExperimentalTag{}, NoAwaitTag{}, request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
FirewallPoliciesClient::CloneRules(
    google::cloud::cpp::compute::firewall_policies::v1::CloneRulesRequest const&
        request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->CloneRules(request);
}

StatusOr<google::cloud::cpp::compute::v1::Operation>
FirewallPoliciesClient::CloneRules(
    ExperimentalTag, NoAwaitTag,
    google::cloud::cpp::compute::firewall_policies::v1::CloneRulesRequest const&
        request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->CloneRules(ExperimentalTag{}, NoAwaitTag{}, request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
FirewallPoliciesClient::CloneRules(
    ExperimentalTag,
    google::cloud::cpp::compute::v1::Operation const& operation, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->CloneRules(ExperimentalTag{}, operation);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
FirewallPoliciesClient::DeleteFirewallPolicy(std::string const& firewall_policy,
                                             Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::cpp::compute::firewall_policies::v1::
      DeleteFirewallPolicyRequest request;
  request.set_firewall_policy(firewall_policy);
  return connection_->DeleteFirewallPolicy(request);
}

StatusOr<google::cloud::cpp::compute::v1::Operation>
FirewallPoliciesClient::DeleteFirewallPolicy(ExperimentalTag, NoAwaitTag,
                                             std::string const& firewall_policy,
                                             Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::cpp::compute::firewall_policies::v1::
      DeleteFirewallPolicyRequest request;
  request.set_firewall_policy(firewall_policy);
  return connection_->DeleteFirewallPolicy(ExperimentalTag{}, NoAwaitTag{},
                                           request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
FirewallPoliciesClient::DeleteFirewallPolicy(
    google::cloud::cpp::compute::firewall_policies::v1::
        DeleteFirewallPolicyRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->DeleteFirewallPolicy(request);
}

StatusOr<google::cloud::cpp::compute::v1::Operation>
FirewallPoliciesClient::DeleteFirewallPolicy(
    ExperimentalTag, NoAwaitTag,
    google::cloud::cpp::compute::firewall_policies::v1::
        DeleteFirewallPolicyRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->DeleteFirewallPolicy(ExperimentalTag{}, NoAwaitTag{},
                                           request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
FirewallPoliciesClient::DeleteFirewallPolicy(
    ExperimentalTag,
    google::cloud::cpp::compute::v1::Operation const& operation, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->DeleteFirewallPolicy(ExperimentalTag{}, operation);
}

StatusOr<google::cloud::cpp::compute::v1::FirewallPolicy>
FirewallPoliciesClient::GetFirewallPolicy(std::string const& firewall_policy,
                                          Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::cpp::compute::firewall_policies::v1::GetFirewallPolicyRequest
      request;
  request.set_firewall_policy(firewall_policy);
  return connection_->GetFirewallPolicy(request);
}

StatusOr<google::cloud::cpp::compute::v1::FirewallPolicy>
FirewallPoliciesClient::GetFirewallPolicy(
    google::cloud::cpp::compute::firewall_policies::v1::
        GetFirewallPolicyRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->GetFirewallPolicy(request);
}

StatusOr<google::cloud::cpp::compute::v1::FirewallPolicyAssociation>
FirewallPoliciesClient::GetAssociation(std::string const& firewall_policy,
                                       Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::cpp::compute::firewall_policies::v1::GetAssociationRequest
      request;
  request.set_firewall_policy(firewall_policy);
  return connection_->GetAssociation(request);
}

StatusOr<google::cloud::cpp::compute::v1::FirewallPolicyAssociation>
FirewallPoliciesClient::GetAssociation(
    google::cloud::cpp::compute::firewall_policies::v1::
        GetAssociationRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->GetAssociation(request);
}

StatusOr<google::cloud::cpp::compute::v1::Policy>
FirewallPoliciesClient::GetIamPolicy(std::string const& resource,
                                     Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::cpp::compute::firewall_policies::v1::GetIamPolicyRequest
      request;
  request.set_resource(resource);
  return connection_->GetIamPolicy(request);
}

StatusOr<google::cloud::cpp::compute::v1::Policy>
FirewallPoliciesClient::GetIamPolicy(
    google::cloud::cpp::compute::firewall_policies::v1::
        GetIamPolicyRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->GetIamPolicy(request);
}

StatusOr<google::cloud::cpp::compute::v1::FirewallPolicyRule>
FirewallPoliciesClient::GetRule(std::string const& firewall_policy,
                                Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::cpp::compute::firewall_policies::v1::GetRuleRequest request;
  request.set_firewall_policy(firewall_policy);
  return connection_->GetRule(request);
}

StatusOr<google::cloud::cpp::compute::v1::FirewallPolicyRule>
FirewallPoliciesClient::GetRule(
    google::cloud::cpp::compute::firewall_policies::v1::GetRuleRequest const&
        request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->GetRule(request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
FirewallPoliciesClient::InsertFirewallPolicy(
    google::cloud::cpp::compute::firewall_policies::v1::
        InsertFirewallPolicyRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->InsertFirewallPolicy(request);
}

StatusOr<google::cloud::cpp::compute::v1::Operation>
FirewallPoliciesClient::InsertFirewallPolicy(
    ExperimentalTag, NoAwaitTag,
    google::cloud::cpp::compute::firewall_policies::v1::
        InsertFirewallPolicyRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->InsertFirewallPolicy(ExperimentalTag{}, NoAwaitTag{},
                                           request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
FirewallPoliciesClient::InsertFirewallPolicy(
    ExperimentalTag,
    google::cloud::cpp::compute::v1::Operation const& operation, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->InsertFirewallPolicy(ExperimentalTag{}, operation);
}

StreamRange<google::cloud::cpp::compute::v1::FirewallPolicy>
FirewallPoliciesClient::ListFirewallPolicies(
    google::cloud::cpp::compute::firewall_policies::v1::
        ListFirewallPoliciesRequest request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->ListFirewallPolicies(std::move(request));
}

StatusOr<
    google::cloud::cpp::compute::v1::FirewallPoliciesListAssociationsResponse>
FirewallPoliciesClient::ListAssociations(
    google::cloud::cpp::compute::firewall_policies::v1::
        ListAssociationsRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->ListAssociations(request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
FirewallPoliciesClient::Move(std::string const& firewall_policy, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::cpp::compute::firewall_policies::v1::MoveRequest request;
  request.set_firewall_policy(firewall_policy);
  return connection_->Move(request);
}

StatusOr<google::cloud::cpp::compute::v1::Operation>
FirewallPoliciesClient::Move(ExperimentalTag, NoAwaitTag,
                             std::string const& firewall_policy, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::cpp::compute::firewall_policies::v1::MoveRequest request;
  request.set_firewall_policy(firewall_policy);
  return connection_->Move(ExperimentalTag{}, NoAwaitTag{}, request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
FirewallPoliciesClient::Move(
    google::cloud::cpp::compute::firewall_policies::v1::MoveRequest const&
        request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->Move(request);
}

StatusOr<google::cloud::cpp::compute::v1::Operation>
FirewallPoliciesClient::Move(
    ExperimentalTag, NoAwaitTag,
    google::cloud::cpp::compute::firewall_policies::v1::MoveRequest const&
        request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->Move(ExperimentalTag{}, NoAwaitTag{}, request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
FirewallPoliciesClient::Move(
    ExperimentalTag,
    google::cloud::cpp::compute::v1::Operation const& operation, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->Move(ExperimentalTag{}, operation);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
FirewallPoliciesClient::PatchFirewallPolicy(
    std::string const& firewall_policy,
    google::cloud::cpp::compute::v1::FirewallPolicy const&
        firewall_policy_resource,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::cpp::compute::firewall_policies::v1::PatchFirewallPolicyRequest
      request;
  request.set_firewall_policy(firewall_policy);
  *request.mutable_firewall_policy_resource() = firewall_policy_resource;
  return connection_->PatchFirewallPolicy(request);
}

StatusOr<google::cloud::cpp::compute::v1::Operation>
FirewallPoliciesClient::PatchFirewallPolicy(
    ExperimentalTag, NoAwaitTag, std::string const& firewall_policy,
    google::cloud::cpp::compute::v1::FirewallPolicy const&
        firewall_policy_resource,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::cpp::compute::firewall_policies::v1::PatchFirewallPolicyRequest
      request;
  request.set_firewall_policy(firewall_policy);
  *request.mutable_firewall_policy_resource() = firewall_policy_resource;
  return connection_->PatchFirewallPolicy(ExperimentalTag{}, NoAwaitTag{},
                                          request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
FirewallPoliciesClient::PatchFirewallPolicy(
    google::cloud::cpp::compute::firewall_policies::v1::
        PatchFirewallPolicyRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->PatchFirewallPolicy(request);
}

StatusOr<google::cloud::cpp::compute::v1::Operation>
FirewallPoliciesClient::PatchFirewallPolicy(
    ExperimentalTag, NoAwaitTag,
    google::cloud::cpp::compute::firewall_policies::v1::
        PatchFirewallPolicyRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->PatchFirewallPolicy(ExperimentalTag{}, NoAwaitTag{},
                                          request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
FirewallPoliciesClient::PatchFirewallPolicy(
    ExperimentalTag,
    google::cloud::cpp::compute::v1::Operation const& operation, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->PatchFirewallPolicy(ExperimentalTag{}, operation);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
FirewallPoliciesClient::PatchRule(
    std::string const& firewall_policy,
    google::cloud::cpp::compute::v1::FirewallPolicyRule const&
        firewall_policy_rule_resource,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::cpp::compute::firewall_policies::v1::PatchRuleRequest request;
  request.set_firewall_policy(firewall_policy);
  *request.mutable_firewall_policy_rule_resource() =
      firewall_policy_rule_resource;
  return connection_->PatchRule(request);
}

StatusOr<google::cloud::cpp::compute::v1::Operation>
FirewallPoliciesClient::PatchRule(
    ExperimentalTag, NoAwaitTag, std::string const& firewall_policy,
    google::cloud::cpp::compute::v1::FirewallPolicyRule const&
        firewall_policy_rule_resource,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::cpp::compute::firewall_policies::v1::PatchRuleRequest request;
  request.set_firewall_policy(firewall_policy);
  *request.mutable_firewall_policy_rule_resource() =
      firewall_policy_rule_resource;
  return connection_->PatchRule(ExperimentalTag{}, NoAwaitTag{}, request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
FirewallPoliciesClient::PatchRule(
    google::cloud::cpp::compute::firewall_policies::v1::PatchRuleRequest const&
        request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->PatchRule(request);
}

StatusOr<google::cloud::cpp::compute::v1::Operation>
FirewallPoliciesClient::PatchRule(
    ExperimentalTag, NoAwaitTag,
    google::cloud::cpp::compute::firewall_policies::v1::PatchRuleRequest const&
        request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->PatchRule(ExperimentalTag{}, NoAwaitTag{}, request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
FirewallPoliciesClient::PatchRule(
    ExperimentalTag,
    google::cloud::cpp::compute::v1::Operation const& operation, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->PatchRule(ExperimentalTag{}, operation);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
FirewallPoliciesClient::RemoveAssociation(std::string const& firewall_policy,
                                          Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::cpp::compute::firewall_policies::v1::RemoveAssociationRequest
      request;
  request.set_firewall_policy(firewall_policy);
  return connection_->RemoveAssociation(request);
}

StatusOr<google::cloud::cpp::compute::v1::Operation>
FirewallPoliciesClient::RemoveAssociation(ExperimentalTag, NoAwaitTag,
                                          std::string const& firewall_policy,
                                          Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::cpp::compute::firewall_policies::v1::RemoveAssociationRequest
      request;
  request.set_firewall_policy(firewall_policy);
  return connection_->RemoveAssociation(ExperimentalTag{}, NoAwaitTag{},
                                        request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
FirewallPoliciesClient::RemoveAssociation(
    google::cloud::cpp::compute::firewall_policies::v1::
        RemoveAssociationRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->RemoveAssociation(request);
}

StatusOr<google::cloud::cpp::compute::v1::Operation>
FirewallPoliciesClient::RemoveAssociation(
    ExperimentalTag, NoAwaitTag,
    google::cloud::cpp::compute::firewall_policies::v1::
        RemoveAssociationRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->RemoveAssociation(ExperimentalTag{}, NoAwaitTag{},
                                        request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
FirewallPoliciesClient::RemoveAssociation(
    ExperimentalTag,
    google::cloud::cpp::compute::v1::Operation const& operation, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->RemoveAssociation(ExperimentalTag{}, operation);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
FirewallPoliciesClient::RemoveRule(std::string const& firewall_policy,
                                   Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::cpp::compute::firewall_policies::v1::RemoveRuleRequest request;
  request.set_firewall_policy(firewall_policy);
  return connection_->RemoveRule(request);
}

StatusOr<google::cloud::cpp::compute::v1::Operation>
FirewallPoliciesClient::RemoveRule(ExperimentalTag, NoAwaitTag,
                                   std::string const& firewall_policy,
                                   Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::cpp::compute::firewall_policies::v1::RemoveRuleRequest request;
  request.set_firewall_policy(firewall_policy);
  return connection_->RemoveRule(ExperimentalTag{}, NoAwaitTag{}, request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
FirewallPoliciesClient::RemoveRule(
    google::cloud::cpp::compute::firewall_policies::v1::RemoveRuleRequest const&
        request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->RemoveRule(request);
}

StatusOr<google::cloud::cpp::compute::v1::Operation>
FirewallPoliciesClient::RemoveRule(
    ExperimentalTag, NoAwaitTag,
    google::cloud::cpp::compute::firewall_policies::v1::RemoveRuleRequest const&
        request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->RemoveRule(ExperimentalTag{}, NoAwaitTag{}, request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
FirewallPoliciesClient::RemoveRule(
    ExperimentalTag,
    google::cloud::cpp::compute::v1::Operation const& operation, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->RemoveRule(ExperimentalTag{}, operation);
}

StatusOr<google::cloud::cpp::compute::v1::Policy>
FirewallPoliciesClient::SetIamPolicy(
    std::string const& resource,
    google::cloud::cpp::compute::v1::GlobalOrganizationSetPolicyRequest const&
        global_organization_set_policy_request_resource,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::cpp::compute::firewall_policies::v1::SetIamPolicyRequest
      request;
  request.set_resource(resource);
  *request.mutable_global_organization_set_policy_request_resource() =
      global_organization_set_policy_request_resource;
  return connection_->SetIamPolicy(request);
}

StatusOr<google::cloud::cpp::compute::v1::Policy>
FirewallPoliciesClient::SetIamPolicy(
    google::cloud::cpp::compute::firewall_policies::v1::
        SetIamPolicyRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->SetIamPolicy(request);
}

StatusOr<google::cloud::cpp::compute::v1::TestPermissionsResponse>
FirewallPoliciesClient::TestIamPermissions(
    std::string const& resource,
    google::cloud::cpp::compute::v1::TestPermissionsRequest const&
        test_permissions_request_resource,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::cpp::compute::firewall_policies::v1::TestIamPermissionsRequest
      request;
  request.set_resource(resource);
  *request.mutable_test_permissions_request_resource() =
      test_permissions_request_resource;
  return connection_->TestIamPermissions(request);
}

StatusOr<google::cloud::cpp::compute::v1::TestPermissionsResponse>
FirewallPoliciesClient::TestIamPermissions(
    google::cloud::cpp::compute::firewall_policies::v1::
        TestIamPermissionsRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->TestIamPermissions(request);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_firewall_policies_v1
}  // namespace cloud
}  // namespace google
