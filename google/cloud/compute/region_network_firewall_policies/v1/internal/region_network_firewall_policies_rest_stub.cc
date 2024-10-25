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
// google/cloud/compute/region_network_firewall_policies/v1/region_network_firewall_policies.proto

#include "google/cloud/compute/region_network_firewall_policies/v1/internal/region_network_firewall_policies_rest_stub.h"
#include "google/cloud/compute/region_network_firewall_policies/v1/region_network_firewall_policies.pb.h"
#include "google/cloud/compute/region_operations/v1/region_operations.pb.h"
#include "google/cloud/common_options.h"
#include "google/cloud/internal/absl_str_cat_quiet.h"
#include "google/cloud/internal/rest_stub_helpers.h"
#include "google/cloud/status_or.h"
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace compute_region_network_firewall_policies_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

DefaultRegionNetworkFirewallPoliciesRestStub::
    DefaultRegionNetworkFirewallPoliciesRestStub(Options options)
    : service_(rest_internal::MakePooledRestClient(
          options.get<EndpointOption>(), options)),
      operations_(rest_internal::MakePooledRestClient(
          options.get<EndpointOption>(), options)),
      options_(std::move(options)) {}

DefaultRegionNetworkFirewallPoliciesRestStub::
    DefaultRegionNetworkFirewallPoliciesRestStub(
        std::shared_ptr<rest_internal::RestClient> service,
        std::shared_ptr<rest_internal::RestClient> operations, Options options)
    : service_(std::move(service)),
      operations_(std::move(operations)),
      options_(std::move(options)) {}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
DefaultRegionNetworkFirewallPoliciesRestStub::AsyncAddAssociation(
    CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::cpp::compute::region_network_firewall_policies::v1::
        AddAssociationRequest const& request) {
  promise<StatusOr<google::cloud::cpp::compute::v1::Operation>> p;
  future<StatusOr<google::cloud::cpp::compute::v1::Operation>> f =
      p.get_future();
  std::thread t{
      [](auto p, auto service, auto request, auto rest_context, auto options) {
        std::vector<std::pair<std::string, std::string>> query_params;
        query_params.push_back(
            {"replace_existing_association",
             (request.replace_existing_association() ? "1" : "0")});
        query_params.push_back({"request_id", request.request_id()});
        query_params =
            rest_internal::TrimEmptyQueryParameters(std::move(query_params));
        p.set_value(
            rest_internal::Post<google::cloud::cpp::compute::v1::Operation>(
                *service, *rest_context,
                request.firewall_policy_association_resource(), false,
                absl::StrCat("/", "compute", "/",
                             rest_internal::DetermineApiVersion("v1", *options),
                             "/", "projects", "/", request.project(), "/",
                             "regions", "/", request.region(), "/",
                             "firewallPolicies", "/", request.firewall_policy(),
                             "/", "addAssociation"),
                std::move(query_params)));
      },
      std::move(p),
      service_,
      request,
      std::move(rest_context),
      std::move(options)};
  return f.then([t = std::move(t), cq](auto f) mutable {
    cq.RunAsync([t = std::move(t)]() mutable { t.join(); });
    return f.get();
  });
}

StatusOr<google::cloud::cpp::compute::v1::Operation>
DefaultRegionNetworkFirewallPoliciesRestStub::AddAssociation(
    google::cloud::rest_internal::RestContext& rest_context,
    Options const& options,
    google::cloud::cpp::compute::region_network_firewall_policies::v1::
        AddAssociationRequest const& request) {
  std::vector<std::pair<std::string, std::string>> query_params;
  query_params.push_back(
      {"replace_existing_association",
       (request.replace_existing_association() ? "1" : "0")});
  query_params.push_back({"request_id", request.request_id()});
  query_params =
      rest_internal::TrimEmptyQueryParameters(std::move(query_params));
  return rest_internal::Post<google::cloud::cpp::compute::v1::Operation>(
      *service_, rest_context, request.firewall_policy_association_resource(),
      false,
      absl::StrCat("/", "compute", "/",
                   rest_internal::DetermineApiVersion("v1", options), "/",
                   "projects", "/", request.project(), "/", "regions", "/",
                   request.region(), "/", "firewallPolicies", "/",
                   request.firewall_policy(), "/", "addAssociation"),
      std::move(query_params));
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
DefaultRegionNetworkFirewallPoliciesRestStub::AsyncAddRule(
    CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::cpp::compute::region_network_firewall_policies::v1::
        AddRuleRequest const& request) {
  promise<StatusOr<google::cloud::cpp::compute::v1::Operation>> p;
  future<StatusOr<google::cloud::cpp::compute::v1::Operation>> f =
      p.get_future();
  std::thread t{
      [](auto p, auto service, auto request, auto rest_context, auto options) {
        std::vector<std::pair<std::string, std::string>> query_params;
        query_params.push_back(
            {"max_priority", std::to_string(request.max_priority())});
        query_params.push_back(
            {"min_priority", std::to_string(request.min_priority())});
        query_params.push_back({"request_id", request.request_id()});
        query_params =
            rest_internal::TrimEmptyQueryParameters(std::move(query_params));
        p.set_value(
            rest_internal::Post<google::cloud::cpp::compute::v1::Operation>(
                *service, *rest_context,
                request.firewall_policy_rule_resource(), false,
                absl::StrCat("/", "compute", "/",
                             rest_internal::DetermineApiVersion("v1", *options),
                             "/", "projects", "/", request.project(), "/",
                             "regions", "/", request.region(), "/",
                             "firewallPolicies", "/", request.firewall_policy(),
                             "/", "addRule"),
                std::move(query_params)));
      },
      std::move(p),
      service_,
      request,
      std::move(rest_context),
      std::move(options)};
  return f.then([t = std::move(t), cq](auto f) mutable {
    cq.RunAsync([t = std::move(t)]() mutable { t.join(); });
    return f.get();
  });
}

StatusOr<google::cloud::cpp::compute::v1::Operation>
DefaultRegionNetworkFirewallPoliciesRestStub::AddRule(
    google::cloud::rest_internal::RestContext& rest_context,
    Options const& options,
    google::cloud::cpp::compute::region_network_firewall_policies::v1::
        AddRuleRequest const& request) {
  std::vector<std::pair<std::string, std::string>> query_params;
  query_params.push_back(
      {"max_priority", std::to_string(request.max_priority())});
  query_params.push_back(
      {"min_priority", std::to_string(request.min_priority())});
  query_params.push_back({"request_id", request.request_id()});
  query_params =
      rest_internal::TrimEmptyQueryParameters(std::move(query_params));
  return rest_internal::Post<google::cloud::cpp::compute::v1::Operation>(
      *service_, rest_context, request.firewall_policy_rule_resource(), false,
      absl::StrCat("/", "compute", "/",
                   rest_internal::DetermineApiVersion("v1", options), "/",
                   "projects", "/", request.project(), "/", "regions", "/",
                   request.region(), "/", "firewallPolicies", "/",
                   request.firewall_policy(), "/", "addRule"),
      std::move(query_params));
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
DefaultRegionNetworkFirewallPoliciesRestStub::AsyncCloneRules(
    CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::cpp::compute::region_network_firewall_policies::v1::
        CloneRulesRequest const& request) {
  promise<StatusOr<google::cloud::cpp::compute::v1::Operation>> p;
  future<StatusOr<google::cloud::cpp::compute::v1::Operation>> f =
      p.get_future();
  std::thread t{
      [](auto p, auto service, auto request, auto rest_context, auto options) {
        std::vector<std::pair<std::string, std::string>> query_params;
        p.set_value(
            rest_internal::Post<google::cloud::cpp::compute::v1::Operation>(
                *service, *rest_context, request, false,
                absl::StrCat("/", "compute", "/",
                             rest_internal::DetermineApiVersion("v1", *options),
                             "/", "projects", "/", request.project(), "/",
                             "regions", "/", request.region(), "/",
                             "firewallPolicies", "/", request.firewall_policy(),
                             "/", "cloneRules"),
                std::move(query_params)));
      },
      std::move(p),
      service_,
      request,
      std::move(rest_context),
      std::move(options)};
  return f.then([t = std::move(t), cq](auto f) mutable {
    cq.RunAsync([t = std::move(t)]() mutable { t.join(); });
    return f.get();
  });
}

StatusOr<google::cloud::cpp::compute::v1::Operation>
DefaultRegionNetworkFirewallPoliciesRestStub::CloneRules(
    google::cloud::rest_internal::RestContext& rest_context,
    Options const& options,
    google::cloud::cpp::compute::region_network_firewall_policies::v1::
        CloneRulesRequest const& request) {
  std::vector<std::pair<std::string, std::string>> query_params;
  return rest_internal::Post<google::cloud::cpp::compute::v1::Operation>(
      *service_, rest_context, request, false,
      absl::StrCat("/", "compute", "/",
                   rest_internal::DetermineApiVersion("v1", options), "/",
                   "projects", "/", request.project(), "/", "regions", "/",
                   request.region(), "/", "firewallPolicies", "/",
                   request.firewall_policy(), "/", "cloneRules"),
      std::move(query_params));
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
DefaultRegionNetworkFirewallPoliciesRestStub::AsyncDeleteFirewallPolicy(
    CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::cpp::compute::region_network_firewall_policies::v1::
        DeleteFirewallPolicyRequest const& request) {
  promise<StatusOr<google::cloud::cpp::compute::v1::Operation>> p;
  future<StatusOr<google::cloud::cpp::compute::v1::Operation>> f =
      p.get_future();
  std::thread t{
      [](auto p, auto service, auto request, auto rest_context, auto options) {
        std::vector<std::pair<std::string, std::string>> query_params;
        query_params.push_back({"request_id", request.request_id()});
        query_params =
            rest_internal::TrimEmptyQueryParameters(std::move(query_params));
        p.set_value(
            rest_internal::Delete<google::cloud::cpp::compute::v1::Operation>(
                *service, *rest_context, request, false,
                absl::StrCat("/", "compute", "/",
                             rest_internal::DetermineApiVersion("v1", *options),
                             "/", "projects", "/", request.project(), "/",
                             "regions", "/", request.region(), "/",
                             "firewallPolicies", "/",
                             request.firewall_policy()),
                std::move(query_params)));
      },
      std::move(p),
      service_,
      request,
      std::move(rest_context),
      std::move(options)};
  return f.then([t = std::move(t), cq](auto f) mutable {
    cq.RunAsync([t = std::move(t)]() mutable { t.join(); });
    return f.get();
  });
}

StatusOr<google::cloud::cpp::compute::v1::Operation>
DefaultRegionNetworkFirewallPoliciesRestStub::DeleteFirewallPolicy(
    google::cloud::rest_internal::RestContext& rest_context,
    Options const& options,
    google::cloud::cpp::compute::region_network_firewall_policies::v1::
        DeleteFirewallPolicyRequest const& request) {
  std::vector<std::pair<std::string, std::string>> query_params;
  query_params.push_back({"request_id", request.request_id()});
  query_params =
      rest_internal::TrimEmptyQueryParameters(std::move(query_params));
  return rest_internal::Delete<google::cloud::cpp::compute::v1::Operation>(
      *service_, rest_context, request, false,
      absl::StrCat("/", "compute", "/",
                   rest_internal::DetermineApiVersion("v1", options), "/",
                   "projects", "/", request.project(), "/", "regions", "/",
                   request.region(), "/", "firewallPolicies", "/",
                   request.firewall_policy()),
      std::move(query_params));
}

StatusOr<google::cloud::cpp::compute::v1::FirewallPolicy>
DefaultRegionNetworkFirewallPoliciesRestStub::GetFirewallPolicy(
    google::cloud::rest_internal::RestContext& rest_context,
    Options const& options,
    google::cloud::cpp::compute::region_network_firewall_policies::v1::
        GetFirewallPolicyRequest const& request) {
  std::vector<std::pair<std::string, std::string>> query_params;
  return rest_internal::Get<google::cloud::cpp::compute::v1::FirewallPolicy>(
      *service_, rest_context, request, false,
      absl::StrCat("/", "compute", "/",
                   rest_internal::DetermineApiVersion("v1", options), "/",
                   "projects", "/", request.project(), "/", "regions", "/",
                   request.region(), "/", "firewallPolicies", "/",
                   request.firewall_policy()),
      std::move(query_params));
}

StatusOr<google::cloud::cpp::compute::v1::FirewallPolicyAssociation>
DefaultRegionNetworkFirewallPoliciesRestStub::GetAssociation(
    google::cloud::rest_internal::RestContext& rest_context,
    Options const& options,
    google::cloud::cpp::compute::region_network_firewall_policies::v1::
        GetAssociationRequest const& request) {
  std::vector<std::pair<std::string, std::string>> query_params;
  query_params.push_back({"name", request.name()});
  query_params =
      rest_internal::TrimEmptyQueryParameters(std::move(query_params));
  return rest_internal::Get<
      google::cloud::cpp::compute::v1::FirewallPolicyAssociation>(
      *service_, rest_context, request, false,
      absl::StrCat("/", "compute", "/",
                   rest_internal::DetermineApiVersion("v1", options), "/",
                   "projects", "/", request.project(), "/", "regions", "/",
                   request.region(), "/", "firewallPolicies", "/",
                   request.firewall_policy(), "/", "getAssociation"),
      std::move(query_params));
}

StatusOr<google::cloud::cpp::compute::v1::
             RegionNetworkFirewallPoliciesGetEffectiveFirewallsResponse>
DefaultRegionNetworkFirewallPoliciesRestStub::GetEffectiveFirewalls(
    google::cloud::rest_internal::RestContext& rest_context,
    Options const& options,
    google::cloud::cpp::compute::region_network_firewall_policies::v1::
        GetEffectiveFirewallsRequest const& request) {
  std::vector<std::pair<std::string, std::string>> query_params;
  query_params.push_back({"network", request.network()});
  query_params =
      rest_internal::TrimEmptyQueryParameters(std::move(query_params));
  return rest_internal::Get<
      google::cloud::cpp::compute::v1::
          RegionNetworkFirewallPoliciesGetEffectiveFirewallsResponse>(
      *service_, rest_context, request, false,
      absl::StrCat("/", "compute", "/",
                   rest_internal::DetermineApiVersion("v1", options), "/",
                   "projects", "/", request.project(), "/", "regions", "/",
                   request.region(), "/", "firewallPolicies", "/",
                   "getEffectiveFirewalls"),
      std::move(query_params));
}

StatusOr<google::cloud::cpp::compute::v1::Policy>
DefaultRegionNetworkFirewallPoliciesRestStub::GetIamPolicy(
    google::cloud::rest_internal::RestContext& rest_context,
    Options const& options,
    google::cloud::cpp::compute::region_network_firewall_policies::v1::
        GetIamPolicyRequest const& request) {
  std::vector<std::pair<std::string, std::string>> query_params;
  query_params.push_back(
      {"options_requested_policy_version",
       std::to_string(request.options_requested_policy_version())});
  query_params =
      rest_internal::TrimEmptyQueryParameters(std::move(query_params));
  return rest_internal::Get<google::cloud::cpp::compute::v1::Policy>(
      *service_, rest_context, request, false,
      absl::StrCat("/", "compute", "/",
                   rest_internal::DetermineApiVersion("v1", options), "/",
                   "projects", "/", request.project(), "/", "regions", "/",
                   request.region(), "/", "firewallPolicies", "/",
                   request.resource(), "/", "getIamPolicy"),
      std::move(query_params));
}

StatusOr<google::cloud::cpp::compute::v1::FirewallPolicyRule>
DefaultRegionNetworkFirewallPoliciesRestStub::GetRule(
    google::cloud::rest_internal::RestContext& rest_context,
    Options const& options,
    google::cloud::cpp::compute::region_network_firewall_policies::v1::
        GetRuleRequest const& request) {
  std::vector<std::pair<std::string, std::string>> query_params;
  query_params.push_back({"priority", std::to_string(request.priority())});
  query_params =
      rest_internal::TrimEmptyQueryParameters(std::move(query_params));
  return rest_internal::Get<
      google::cloud::cpp::compute::v1::FirewallPolicyRule>(
      *service_, rest_context, request, false,
      absl::StrCat("/", "compute", "/",
                   rest_internal::DetermineApiVersion("v1", options), "/",
                   "projects", "/", request.project(), "/", "regions", "/",
                   request.region(), "/", "firewallPolicies", "/",
                   request.firewall_policy(), "/", "getRule"),
      std::move(query_params));
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
DefaultRegionNetworkFirewallPoliciesRestStub::AsyncInsertFirewallPolicy(
    CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::cpp::compute::region_network_firewall_policies::v1::
        InsertFirewallPolicyRequest const& request) {
  promise<StatusOr<google::cloud::cpp::compute::v1::Operation>> p;
  future<StatusOr<google::cloud::cpp::compute::v1::Operation>> f =
      p.get_future();
  std::thread t{
      [](auto p, auto service, auto request, auto rest_context, auto options) {
        std::vector<std::pair<std::string, std::string>> query_params;
        query_params.push_back({"request_id", request.request_id()});
        query_params =
            rest_internal::TrimEmptyQueryParameters(std::move(query_params));
        p.set_value(
            rest_internal::Post<google::cloud::cpp::compute::v1::Operation>(
                *service, *rest_context, request.firewall_policy_resource(),
                false,
                absl::StrCat("/", "compute", "/",
                             rest_internal::DetermineApiVersion("v1", *options),
                             "/", "projects", "/", request.project(), "/",
                             "regions", "/", request.region(), "/",
                             "firewallPolicies"),
                std::move(query_params)));
      },
      std::move(p),
      service_,
      request,
      std::move(rest_context),
      std::move(options)};
  return f.then([t = std::move(t), cq](auto f) mutable {
    cq.RunAsync([t = std::move(t)]() mutable { t.join(); });
    return f.get();
  });
}

StatusOr<google::cloud::cpp::compute::v1::Operation>
DefaultRegionNetworkFirewallPoliciesRestStub::InsertFirewallPolicy(
    google::cloud::rest_internal::RestContext& rest_context,
    Options const& options,
    google::cloud::cpp::compute::region_network_firewall_policies::v1::
        InsertFirewallPolicyRequest const& request) {
  std::vector<std::pair<std::string, std::string>> query_params;
  query_params.push_back({"request_id", request.request_id()});
  query_params =
      rest_internal::TrimEmptyQueryParameters(std::move(query_params));
  return rest_internal::Post<google::cloud::cpp::compute::v1::Operation>(
      *service_, rest_context, request.firewall_policy_resource(), false,
      absl::StrCat("/", "compute", "/",
                   rest_internal::DetermineApiVersion("v1", options), "/",
                   "projects", "/", request.project(), "/", "regions", "/",
                   request.region(), "/", "firewallPolicies"),
      std::move(query_params));
}

StatusOr<google::cloud::cpp::compute::v1::FirewallPolicyList>
DefaultRegionNetworkFirewallPoliciesRestStub::ListRegionNetworkFirewallPolicies(
    google::cloud::rest_internal::RestContext& rest_context,
    Options const& options,
    google::cloud::cpp::compute::region_network_firewall_policies::v1::
        ListRegionNetworkFirewallPoliciesRequest const& request) {
  std::vector<std::pair<std::string, std::string>> query_params;
  query_params.push_back({"filter", request.filter()});
  query_params.push_back(
      {"max_results", std::to_string(request.max_results())});
  query_params.push_back({"order_by", request.order_by()});
  query_params.push_back({"page_token", request.page_token()});
  query_params.push_back({"return_partial_success",
                          (request.return_partial_success() ? "1" : "0")});
  query_params =
      rest_internal::TrimEmptyQueryParameters(std::move(query_params));
  return rest_internal::Get<
      google::cloud::cpp::compute::v1::FirewallPolicyList>(
      *service_, rest_context, request, false,
      absl::StrCat("/", "compute", "/",
                   rest_internal::DetermineApiVersion("v1", options), "/",
                   "projects", "/", request.project(), "/", "regions", "/",
                   request.region(), "/", "firewallPolicies"),
      std::move(query_params));
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
DefaultRegionNetworkFirewallPoliciesRestStub::AsyncPatchFirewallPolicy(
    CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::cpp::compute::region_network_firewall_policies::v1::
        PatchFirewallPolicyRequest const& request) {
  promise<StatusOr<google::cloud::cpp::compute::v1::Operation>> p;
  future<StatusOr<google::cloud::cpp::compute::v1::Operation>> f =
      p.get_future();
  std::thread t{
      [](auto p, auto service, auto request, auto rest_context, auto options) {
        std::vector<std::pair<std::string, std::string>> query_params;
        query_params.push_back({"request_id", request.request_id()});
        query_params =
            rest_internal::TrimEmptyQueryParameters(std::move(query_params));
        p.set_value(
            rest_internal::Patch<google::cloud::cpp::compute::v1::Operation>(
                *service, *rest_context, request.firewall_policy_resource(),
                false,
                absl::StrCat("/", "compute", "/",
                             rest_internal::DetermineApiVersion("v1", *options),
                             "/", "projects", "/", request.project(), "/",
                             "regions", "/", request.region(), "/",
                             "firewallPolicies", "/",
                             request.firewall_policy()),
                std::move(query_params)));
      },
      std::move(p),
      service_,
      request,
      std::move(rest_context),
      std::move(options)};
  return f.then([t = std::move(t), cq](auto f) mutable {
    cq.RunAsync([t = std::move(t)]() mutable { t.join(); });
    return f.get();
  });
}

StatusOr<google::cloud::cpp::compute::v1::Operation>
DefaultRegionNetworkFirewallPoliciesRestStub::PatchFirewallPolicy(
    google::cloud::rest_internal::RestContext& rest_context,
    Options const& options,
    google::cloud::cpp::compute::region_network_firewall_policies::v1::
        PatchFirewallPolicyRequest const& request) {
  std::vector<std::pair<std::string, std::string>> query_params;
  query_params.push_back({"request_id", request.request_id()});
  query_params =
      rest_internal::TrimEmptyQueryParameters(std::move(query_params));
  return rest_internal::Patch<google::cloud::cpp::compute::v1::Operation>(
      *service_, rest_context, request.firewall_policy_resource(), false,
      absl::StrCat("/", "compute", "/",
                   rest_internal::DetermineApiVersion("v1", options), "/",
                   "projects", "/", request.project(), "/", "regions", "/",
                   request.region(), "/", "firewallPolicies", "/",
                   request.firewall_policy()),
      std::move(query_params));
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
DefaultRegionNetworkFirewallPoliciesRestStub::AsyncPatchRule(
    CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::cpp::compute::region_network_firewall_policies::v1::
        PatchRuleRequest const& request) {
  promise<StatusOr<google::cloud::cpp::compute::v1::Operation>> p;
  future<StatusOr<google::cloud::cpp::compute::v1::Operation>> f =
      p.get_future();
  std::thread t{
      [](auto p, auto service, auto request, auto rest_context, auto options) {
        std::vector<std::pair<std::string, std::string>> query_params;
        query_params.push_back(
            {"priority", std::to_string(request.priority())});
        query_params.push_back({"request_id", request.request_id()});
        query_params =
            rest_internal::TrimEmptyQueryParameters(std::move(query_params));
        p.set_value(
            rest_internal::Post<google::cloud::cpp::compute::v1::Operation>(
                *service, *rest_context,
                request.firewall_policy_rule_resource(), false,
                absl::StrCat("/", "compute", "/",
                             rest_internal::DetermineApiVersion("v1", *options),
                             "/", "projects", "/", request.project(), "/",
                             "regions", "/", request.region(), "/",
                             "firewallPolicies", "/", request.firewall_policy(),
                             "/", "patchRule"),
                std::move(query_params)));
      },
      std::move(p),
      service_,
      request,
      std::move(rest_context),
      std::move(options)};
  return f.then([t = std::move(t), cq](auto f) mutable {
    cq.RunAsync([t = std::move(t)]() mutable { t.join(); });
    return f.get();
  });
}

StatusOr<google::cloud::cpp::compute::v1::Operation>
DefaultRegionNetworkFirewallPoliciesRestStub::PatchRule(
    google::cloud::rest_internal::RestContext& rest_context,
    Options const& options,
    google::cloud::cpp::compute::region_network_firewall_policies::v1::
        PatchRuleRequest const& request) {
  std::vector<std::pair<std::string, std::string>> query_params;
  query_params.push_back({"priority", std::to_string(request.priority())});
  query_params.push_back({"request_id", request.request_id()});
  query_params =
      rest_internal::TrimEmptyQueryParameters(std::move(query_params));
  return rest_internal::Post<google::cloud::cpp::compute::v1::Operation>(
      *service_, rest_context, request.firewall_policy_rule_resource(), false,
      absl::StrCat("/", "compute", "/",
                   rest_internal::DetermineApiVersion("v1", options), "/",
                   "projects", "/", request.project(), "/", "regions", "/",
                   request.region(), "/", "firewallPolicies", "/",
                   request.firewall_policy(), "/", "patchRule"),
      std::move(query_params));
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
DefaultRegionNetworkFirewallPoliciesRestStub::AsyncRemoveAssociation(
    CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::cpp::compute::region_network_firewall_policies::v1::
        RemoveAssociationRequest const& request) {
  promise<StatusOr<google::cloud::cpp::compute::v1::Operation>> p;
  future<StatusOr<google::cloud::cpp::compute::v1::Operation>> f =
      p.get_future();
  std::thread t{
      [](auto p, auto service, auto request, auto rest_context, auto options) {
        std::vector<std::pair<std::string, std::string>> query_params;
        p.set_value(
            rest_internal::Post<google::cloud::cpp::compute::v1::Operation>(
                *service, *rest_context, request, false,
                absl::StrCat("/", "compute", "/",
                             rest_internal::DetermineApiVersion("v1", *options),
                             "/", "projects", "/", request.project(), "/",
                             "regions", "/", request.region(), "/",
                             "firewallPolicies", "/", request.firewall_policy(),
                             "/", "removeAssociation"),
                std::move(query_params)));
      },
      std::move(p),
      service_,
      request,
      std::move(rest_context),
      std::move(options)};
  return f.then([t = std::move(t), cq](auto f) mutable {
    cq.RunAsync([t = std::move(t)]() mutable { t.join(); });
    return f.get();
  });
}

StatusOr<google::cloud::cpp::compute::v1::Operation>
DefaultRegionNetworkFirewallPoliciesRestStub::RemoveAssociation(
    google::cloud::rest_internal::RestContext& rest_context,
    Options const& options,
    google::cloud::cpp::compute::region_network_firewall_policies::v1::
        RemoveAssociationRequest const& request) {
  std::vector<std::pair<std::string, std::string>> query_params;
  return rest_internal::Post<google::cloud::cpp::compute::v1::Operation>(
      *service_, rest_context, request, false,
      absl::StrCat("/", "compute", "/",
                   rest_internal::DetermineApiVersion("v1", options), "/",
                   "projects", "/", request.project(), "/", "regions", "/",
                   request.region(), "/", "firewallPolicies", "/",
                   request.firewall_policy(), "/", "removeAssociation"),
      std::move(query_params));
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
DefaultRegionNetworkFirewallPoliciesRestStub::AsyncRemoveRule(
    CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::cpp::compute::region_network_firewall_policies::v1::
        RemoveRuleRequest const& request) {
  promise<StatusOr<google::cloud::cpp::compute::v1::Operation>> p;
  future<StatusOr<google::cloud::cpp::compute::v1::Operation>> f =
      p.get_future();
  std::thread t{
      [](auto p, auto service, auto request, auto rest_context, auto options) {
        std::vector<std::pair<std::string, std::string>> query_params;
        p.set_value(
            rest_internal::Post<google::cloud::cpp::compute::v1::Operation>(
                *service, *rest_context, request, false,
                absl::StrCat("/", "compute", "/",
                             rest_internal::DetermineApiVersion("v1", *options),
                             "/", "projects", "/", request.project(), "/",
                             "regions", "/", request.region(), "/",
                             "firewallPolicies", "/", request.firewall_policy(),
                             "/", "removeRule"),
                std::move(query_params)));
      },
      std::move(p),
      service_,
      request,
      std::move(rest_context),
      std::move(options)};
  return f.then([t = std::move(t), cq](auto f) mutable {
    cq.RunAsync([t = std::move(t)]() mutable { t.join(); });
    return f.get();
  });
}

StatusOr<google::cloud::cpp::compute::v1::Operation>
DefaultRegionNetworkFirewallPoliciesRestStub::RemoveRule(
    google::cloud::rest_internal::RestContext& rest_context,
    Options const& options,
    google::cloud::cpp::compute::region_network_firewall_policies::v1::
        RemoveRuleRequest const& request) {
  std::vector<std::pair<std::string, std::string>> query_params;
  return rest_internal::Post<google::cloud::cpp::compute::v1::Operation>(
      *service_, rest_context, request, false,
      absl::StrCat("/", "compute", "/",
                   rest_internal::DetermineApiVersion("v1", options), "/",
                   "projects", "/", request.project(), "/", "regions", "/",
                   request.region(), "/", "firewallPolicies", "/",
                   request.firewall_policy(), "/", "removeRule"),
      std::move(query_params));
}

StatusOr<google::cloud::cpp::compute::v1::Policy>
DefaultRegionNetworkFirewallPoliciesRestStub::SetIamPolicy(
    google::cloud::rest_internal::RestContext& rest_context,
    Options const& options,
    google::cloud::cpp::compute::region_network_firewall_policies::v1::
        SetIamPolicyRequest const& request) {
  std::vector<std::pair<std::string, std::string>> query_params;
  return rest_internal::Post<google::cloud::cpp::compute::v1::Policy>(
      *service_, rest_context, request.region_set_policy_request_resource(),
      false,
      absl::StrCat("/", "compute", "/",
                   rest_internal::DetermineApiVersion("v1", options), "/",
                   "projects", "/", request.project(), "/", "regions", "/",
                   request.region(), "/", "firewallPolicies", "/",
                   request.resource(), "/", "setIamPolicy"),
      std::move(query_params));
}

StatusOr<google::cloud::cpp::compute::v1::TestPermissionsResponse>
DefaultRegionNetworkFirewallPoliciesRestStub::TestIamPermissions(
    google::cloud::rest_internal::RestContext& rest_context,
    Options const& options,
    google::cloud::cpp::compute::region_network_firewall_policies::v1::
        TestIamPermissionsRequest const& request) {
  std::vector<std::pair<std::string, std::string>> query_params;
  return rest_internal::Post<
      google::cloud::cpp::compute::v1::TestPermissionsResponse>(
      *service_, rest_context, request.test_permissions_request_resource(),
      false,
      absl::StrCat("/", "compute", "/",
                   rest_internal::DetermineApiVersion("v1", options), "/",
                   "projects", "/", request.project(), "/", "regions", "/",
                   request.region(), "/", "firewallPolicies", "/",
                   request.resource(), "/", "testIamPermissions"),
      std::move(query_params));
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
DefaultRegionNetworkFirewallPoliciesRestStub::AsyncGetOperation(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::cpp::compute::region_operations::v1::
        GetOperationRequest const& request) {
  promise<StatusOr<google::cloud::cpp::compute::v1::Operation>> p;
  future<StatusOr<google::cloud::cpp::compute::v1::Operation>> f =
      p.get_future();
  std::thread t{
      [](auto p, auto operations, auto request, auto rest_context,
         auto options) {
        p.set_value(
            rest_internal::Get<google::cloud::cpp::compute::v1::Operation>(
                *operations, *rest_context, request, false,
                absl::StrCat("/compute/",
                             rest_internal::DetermineApiVersion("v1", *options),
                             "/projects/", request.project(), "/regions/",
                             request.region(), "/operations/",
                             request.operation())));
      },
      std::move(p),
      operations_,
      request,
      std::move(rest_context),
      std::move(options)};
  return f.then([t = std::move(t), cq](auto f) mutable {
    cq.RunAsync([t = std::move(t)]() mutable { t.join(); });
    return f.get();
  });
}

future<Status>
DefaultRegionNetworkFirewallPoliciesRestStub::AsyncCancelOperation(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::cpp::compute::region_operations::v1::
        DeleteOperationRequest const& request) {
  promise<StatusOr<google::protobuf::Empty>> p;
  future<StatusOr<google::protobuf::Empty>> f = p.get_future();
  std::thread t{
      [](auto p, auto operations, auto request, auto rest_context,
         auto options) {
        p.set_value(rest_internal::Post<google::protobuf::Empty>(
            *operations, *rest_context, request, false,
            absl::StrCat(
                "/compute/", rest_internal::DetermineApiVersion("v1", *options),
                "/projects/", request.project(), "/regions/", request.region(),
                "/operations/", request.operation())));
      },
      std::move(p),
      operations_,
      request,
      std::move(rest_context),
      std::move(options)};
  return f.then([t = std::move(t), cq](auto f) mutable {
    cq.RunAsync([t = std::move(t)]() mutable { t.join(); });
    return f.get().status();
  });
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_region_network_firewall_policies_v1_internal
}  // namespace cloud
}  // namespace google
