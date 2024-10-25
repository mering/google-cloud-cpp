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
// source: google/cloud/recaptchaenterprise/v1/recaptchaenterprise.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_RECAPTCHAENTERPRISE_V1_INTERNAL_RECAPTCHA_ENTERPRISE_STUB_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_RECAPTCHAENTERPRISE_V1_INTERNAL_RECAPTCHA_ENTERPRISE_STUB_H

#include "google/cloud/recaptchaenterprise/v1/recaptchaenterprise.grpc.pb.h"
#include "google/cloud/options.h"
#include "google/cloud/status_or.h"
#include "google/cloud/version.h"
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace recaptchaenterprise_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class RecaptchaEnterpriseServiceStub {
 public:
  virtual ~RecaptchaEnterpriseServiceStub() = 0;

  virtual StatusOr<google::cloud::recaptchaenterprise::v1::Assessment>
  CreateAssessment(
      grpc::ClientContext& context, Options const& options,
      google::cloud::recaptchaenterprise::v1::CreateAssessmentRequest const&
          request) = 0;

  virtual StatusOr<
      google::cloud::recaptchaenterprise::v1::AnnotateAssessmentResponse>
  AnnotateAssessment(
      grpc::ClientContext& context, Options const& options,
      google::cloud::recaptchaenterprise::v1::AnnotateAssessmentRequest const&
          request) = 0;

  virtual StatusOr<google::cloud::recaptchaenterprise::v1::Key> CreateKey(
      grpc::ClientContext& context, Options const& options,
      google::cloud::recaptchaenterprise::v1::CreateKeyRequest const&
          request) = 0;

  virtual StatusOr<google::cloud::recaptchaenterprise::v1::ListKeysResponse>
  ListKeys(grpc::ClientContext& context, Options const& options,
           google::cloud::recaptchaenterprise::v1::ListKeysRequest const&
               request) = 0;

  virtual StatusOr<
      google::cloud::recaptchaenterprise::v1::RetrieveLegacySecretKeyResponse>
  RetrieveLegacySecretKey(
      grpc::ClientContext& context, Options const& options,
      google::cloud::recaptchaenterprise::v1::
          RetrieveLegacySecretKeyRequest const& request) = 0;

  virtual StatusOr<google::cloud::recaptchaenterprise::v1::Key> GetKey(
      grpc::ClientContext& context, Options const& options,
      google::cloud::recaptchaenterprise::v1::GetKeyRequest const& request) = 0;

  virtual StatusOr<google::cloud::recaptchaenterprise::v1::Key> UpdateKey(
      grpc::ClientContext& context, Options const& options,
      google::cloud::recaptchaenterprise::v1::UpdateKeyRequest const&
          request) = 0;

  virtual Status DeleteKey(
      grpc::ClientContext& context, Options const& options,
      google::cloud::recaptchaenterprise::v1::DeleteKeyRequest const&
          request) = 0;

  virtual StatusOr<google::cloud::recaptchaenterprise::v1::Key> MigrateKey(
      grpc::ClientContext& context, Options const& options,
      google::cloud::recaptchaenterprise::v1::MigrateKeyRequest const&
          request) = 0;

  virtual StatusOr<
      google::cloud::recaptchaenterprise::v1::AddIpOverrideResponse>
  AddIpOverride(
      grpc::ClientContext& context, Options const& options,
      google::cloud::recaptchaenterprise::v1::AddIpOverrideRequest const&
          request) = 0;

  virtual StatusOr<google::cloud::recaptchaenterprise::v1::Metrics> GetMetrics(
      grpc::ClientContext& context, Options const& options,
      google::cloud::recaptchaenterprise::v1::GetMetricsRequest const&
          request) = 0;

  virtual StatusOr<google::cloud::recaptchaenterprise::v1::FirewallPolicy>
  CreateFirewallPolicy(
      grpc::ClientContext& context, Options const& options,
      google::cloud::recaptchaenterprise::v1::CreateFirewallPolicyRequest const&
          request) = 0;

  virtual StatusOr<
      google::cloud::recaptchaenterprise::v1::ListFirewallPoliciesResponse>
  ListFirewallPolicies(
      grpc::ClientContext& context, Options const& options,
      google::cloud::recaptchaenterprise::v1::ListFirewallPoliciesRequest const&
          request) = 0;

  virtual StatusOr<google::cloud::recaptchaenterprise::v1::FirewallPolicy>
  GetFirewallPolicy(
      grpc::ClientContext& context, Options const& options,
      google::cloud::recaptchaenterprise::v1::GetFirewallPolicyRequest const&
          request) = 0;

  virtual StatusOr<google::cloud::recaptchaenterprise::v1::FirewallPolicy>
  UpdateFirewallPolicy(
      grpc::ClientContext& context, Options const& options,
      google::cloud::recaptchaenterprise::v1::UpdateFirewallPolicyRequest const&
          request) = 0;

  virtual Status DeleteFirewallPolicy(
      grpc::ClientContext& context, Options const& options,
      google::cloud::recaptchaenterprise::v1::DeleteFirewallPolicyRequest const&
          request) = 0;

  virtual StatusOr<
      google::cloud::recaptchaenterprise::v1::ReorderFirewallPoliciesResponse>
  ReorderFirewallPolicies(
      grpc::ClientContext& context, Options const& options,
      google::cloud::recaptchaenterprise::v1::
          ReorderFirewallPoliciesRequest const& request) = 0;

  virtual StatusOr<
      google::cloud::recaptchaenterprise::v1::ListRelatedAccountGroupsResponse>
  ListRelatedAccountGroups(
      grpc::ClientContext& context, Options const& options,
      google::cloud::recaptchaenterprise::v1::
          ListRelatedAccountGroupsRequest const& request) = 0;

  virtual StatusOr<google::cloud::recaptchaenterprise::v1::
                       ListRelatedAccountGroupMembershipsResponse>
  ListRelatedAccountGroupMemberships(
      grpc::ClientContext& context, Options const& options,
      google::cloud::recaptchaenterprise::v1::
          ListRelatedAccountGroupMembershipsRequest const& request) = 0;

  virtual StatusOr<google::cloud::recaptchaenterprise::v1::
                       SearchRelatedAccountGroupMembershipsResponse>
  SearchRelatedAccountGroupMemberships(
      grpc::ClientContext& context, Options const& options,
      google::cloud::recaptchaenterprise::v1::
          SearchRelatedAccountGroupMembershipsRequest const& request) = 0;
};

class DefaultRecaptchaEnterpriseServiceStub
    : public RecaptchaEnterpriseServiceStub {
 public:
  explicit DefaultRecaptchaEnterpriseServiceStub(
      std::unique_ptr<google::cloud::recaptchaenterprise::v1::
                          RecaptchaEnterpriseService::StubInterface>
          grpc_stub)
      : grpc_stub_(std::move(grpc_stub)) {}

  StatusOr<google::cloud::recaptchaenterprise::v1::Assessment> CreateAssessment(
      grpc::ClientContext& context, Options const& options,
      google::cloud::recaptchaenterprise::v1::CreateAssessmentRequest const&
          request) override;

  StatusOr<google::cloud::recaptchaenterprise::v1::AnnotateAssessmentResponse>
  AnnotateAssessment(
      grpc::ClientContext& context, Options const& options,
      google::cloud::recaptchaenterprise::v1::AnnotateAssessmentRequest const&
          request) override;

  StatusOr<google::cloud::recaptchaenterprise::v1::Key> CreateKey(
      grpc::ClientContext& context, Options const& options,
      google::cloud::recaptchaenterprise::v1::CreateKeyRequest const& request)
      override;

  StatusOr<google::cloud::recaptchaenterprise::v1::ListKeysResponse> ListKeys(
      grpc::ClientContext& context, Options const& options,
      google::cloud::recaptchaenterprise::v1::ListKeysRequest const& request)
      override;

  StatusOr<
      google::cloud::recaptchaenterprise::v1::RetrieveLegacySecretKeyResponse>
  RetrieveLegacySecretKey(
      grpc::ClientContext& context, Options const& options,
      google::cloud::recaptchaenterprise::v1::
          RetrieveLegacySecretKeyRequest const& request) override;

  StatusOr<google::cloud::recaptchaenterprise::v1::Key> GetKey(
      grpc::ClientContext& context, Options const& options,
      google::cloud::recaptchaenterprise::v1::GetKeyRequest const& request)
      override;

  StatusOr<google::cloud::recaptchaenterprise::v1::Key> UpdateKey(
      grpc::ClientContext& context, Options const& options,
      google::cloud::recaptchaenterprise::v1::UpdateKeyRequest const& request)
      override;

  Status DeleteKey(
      grpc::ClientContext& context, Options const& options,
      google::cloud::recaptchaenterprise::v1::DeleteKeyRequest const& request)
      override;

  StatusOr<google::cloud::recaptchaenterprise::v1::Key> MigrateKey(
      grpc::ClientContext& context, Options const& options,
      google::cloud::recaptchaenterprise::v1::MigrateKeyRequest const& request)
      override;

  StatusOr<google::cloud::recaptchaenterprise::v1::AddIpOverrideResponse>
  AddIpOverride(
      grpc::ClientContext& context, Options const& options,
      google::cloud::recaptchaenterprise::v1::AddIpOverrideRequest const&
          request) override;

  StatusOr<google::cloud::recaptchaenterprise::v1::Metrics> GetMetrics(
      grpc::ClientContext& context, Options const& options,
      google::cloud::recaptchaenterprise::v1::GetMetricsRequest const& request)
      override;

  StatusOr<google::cloud::recaptchaenterprise::v1::FirewallPolicy>
  CreateFirewallPolicy(
      grpc::ClientContext& context, Options const& options,
      google::cloud::recaptchaenterprise::v1::CreateFirewallPolicyRequest const&
          request) override;

  StatusOr<google::cloud::recaptchaenterprise::v1::ListFirewallPoliciesResponse>
  ListFirewallPolicies(
      grpc::ClientContext& context, Options const& options,
      google::cloud::recaptchaenterprise::v1::ListFirewallPoliciesRequest const&
          request) override;

  StatusOr<google::cloud::recaptchaenterprise::v1::FirewallPolicy>
  GetFirewallPolicy(
      grpc::ClientContext& context, Options const& options,
      google::cloud::recaptchaenterprise::v1::GetFirewallPolicyRequest const&
          request) override;

  StatusOr<google::cloud::recaptchaenterprise::v1::FirewallPolicy>
  UpdateFirewallPolicy(
      grpc::ClientContext& context, Options const& options,
      google::cloud::recaptchaenterprise::v1::UpdateFirewallPolicyRequest const&
          request) override;

  Status DeleteFirewallPolicy(
      grpc::ClientContext& context, Options const& options,
      google::cloud::recaptchaenterprise::v1::DeleteFirewallPolicyRequest const&
          request) override;

  StatusOr<
      google::cloud::recaptchaenterprise::v1::ReorderFirewallPoliciesResponse>
  ReorderFirewallPolicies(
      grpc::ClientContext& context, Options const& options,
      google::cloud::recaptchaenterprise::v1::
          ReorderFirewallPoliciesRequest const& request) override;

  StatusOr<
      google::cloud::recaptchaenterprise::v1::ListRelatedAccountGroupsResponse>
  ListRelatedAccountGroups(
      grpc::ClientContext& context, Options const& options,
      google::cloud::recaptchaenterprise::v1::
          ListRelatedAccountGroupsRequest const& request) override;

  StatusOr<google::cloud::recaptchaenterprise::v1::
               ListRelatedAccountGroupMembershipsResponse>
  ListRelatedAccountGroupMemberships(
      grpc::ClientContext& context, Options const& options,
      google::cloud::recaptchaenterprise::v1::
          ListRelatedAccountGroupMembershipsRequest const& request) override;

  StatusOr<google::cloud::recaptchaenterprise::v1::
               SearchRelatedAccountGroupMembershipsResponse>
  SearchRelatedAccountGroupMemberships(
      grpc::ClientContext& context, Options const& options,
      google::cloud::recaptchaenterprise::v1::
          SearchRelatedAccountGroupMembershipsRequest const& request) override;

 private:
  std::unique_ptr<google::cloud::recaptchaenterprise::v1::
                      RecaptchaEnterpriseService::StubInterface>
      grpc_stub_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace recaptchaenterprise_v1_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_RECAPTCHAENTERPRISE_V1_INTERNAL_RECAPTCHA_ENTERPRISE_STUB_H
