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
// source: google/cloud/compute/security_policies/v1/security_policies.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_SECURITY_POLICIES_V1_SECURITY_POLICIES_CONNECTION_IDEMPOTENCY_POLICY_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_SECURITY_POLICIES_V1_SECURITY_POLICIES_CONNECTION_IDEMPOTENCY_POLICY_H

#include "google/cloud/idempotency.h"
#include "google/cloud/version.h"
#include "google/cloud/compute/security_policies/v1/security_policies.pb.h"
#include <memory>

namespace google {
namespace cloud {
namespace compute_security_policies_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class SecurityPoliciesConnectionIdempotencyPolicy {
 public:
  virtual ~SecurityPoliciesConnectionIdempotencyPolicy();

  /// Create a new copy of this object.
  virtual std::unique_ptr<SecurityPoliciesConnectionIdempotencyPolicy> clone()
      const;

  virtual google::cloud::Idempotency AddRule(
      google::cloud::cpp::compute::security_policies::v1::AddRuleRequest const&
          request);

  virtual google::cloud::Idempotency AggregatedListSecurityPolicies(
      google::cloud::cpp::compute::security_policies::v1::
          AggregatedListSecurityPoliciesRequest request);

  virtual google::cloud::Idempotency DeleteSecurityPolicy(
      google::cloud::cpp::compute::security_policies::v1::
          DeleteSecurityPolicyRequest const& request);

  virtual google::cloud::Idempotency GetSecurityPolicy(
      google::cloud::cpp::compute::security_policies::v1::
          GetSecurityPolicyRequest const& request);

  virtual google::cloud::Idempotency GetRule(
      google::cloud::cpp::compute::security_policies::v1::GetRuleRequest const&
          request);

  virtual google::cloud::Idempotency InsertSecurityPolicy(
      google::cloud::cpp::compute::security_policies::v1::
          InsertSecurityPolicyRequest const& request);

  virtual google::cloud::Idempotency ListSecurityPolicies(
      google::cloud::cpp::compute::security_policies::v1::
          ListSecurityPoliciesRequest request);

  virtual google::cloud::Idempotency ListPreconfiguredExpressionSets(
      google::cloud::cpp::compute::security_policies::v1::
          ListPreconfiguredExpressionSetsRequest const& request);

  virtual google::cloud::Idempotency PatchSecurityPolicy(
      google::cloud::cpp::compute::security_policies::v1::
          PatchSecurityPolicyRequest const& request);

  virtual google::cloud::Idempotency PatchRule(
      google::cloud::cpp::compute::security_policies::v1::
          PatchRuleRequest const& request);

  virtual google::cloud::Idempotency RemoveRule(
      google::cloud::cpp::compute::security_policies::v1::
          RemoveRuleRequest const& request);

  virtual google::cloud::Idempotency SetLabels(
      google::cloud::cpp::compute::security_policies::v1::
          SetLabelsRequest const& request);
};

std::unique_ptr<SecurityPoliciesConnectionIdempotencyPolicy>
MakeDefaultSecurityPoliciesConnectionIdempotencyPolicy();

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_security_policies_v1
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_SECURITY_POLICIES_V1_SECURITY_POLICIES_CONNECTION_IDEMPOTENCY_POLICY_H
