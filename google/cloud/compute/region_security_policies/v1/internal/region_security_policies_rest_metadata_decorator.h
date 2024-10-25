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
// google/cloud/compute/region_security_policies/v1/region_security_policies.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_REGION_SECURITY_POLICIES_V1_INTERNAL_REGION_SECURITY_POLICIES_REST_METADATA_DECORATOR_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_REGION_SECURITY_POLICIES_V1_INTERNAL_REGION_SECURITY_POLICIES_REST_METADATA_DECORATOR_H

#include "google/cloud/compute/region_operations/v1/region_operations.pb.h"
#include "google/cloud/compute/region_security_policies/v1/internal/region_security_policies_rest_stub.h"
#include "google/cloud/compute/region_security_policies/v1/region_security_policies.pb.h"
#include "google/cloud/future.h"
#include "google/cloud/rest_options.h"
#include "google/cloud/version.h"
#include <memory>
#include <string>

namespace google {
namespace cloud {
namespace compute_region_security_policies_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class RegionSecurityPoliciesRestMetadata
    : public RegionSecurityPoliciesRestStub {
 public:
  ~RegionSecurityPoliciesRestMetadata() override = default;
  explicit RegionSecurityPoliciesRestMetadata(
      std::shared_ptr<RegionSecurityPoliciesRestStub> child,
      std::string api_client_header = "");

  google::cloud::future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  AsyncAddRule(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<google::cloud::rest_internal::RestContext> rest_context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::cpp::compute::region_security_policies::v1::
          AddRuleRequest const& request) override;

  StatusOr<google::cloud::cpp::compute::v1::Operation> AddRule(
      google::cloud::rest_internal::RestContext& rest_context,
      Options const& options,
      google::cloud::cpp::compute::region_security_policies::v1::
          AddRuleRequest const& request) override;

  google::cloud::future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  AsyncDeleteSecurityPolicy(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<google::cloud::rest_internal::RestContext> rest_context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::cpp::compute::region_security_policies::v1::
          DeleteSecurityPolicyRequest const& request) override;

  StatusOr<google::cloud::cpp::compute::v1::Operation> DeleteSecurityPolicy(
      google::cloud::rest_internal::RestContext& rest_context,
      Options const& options,
      google::cloud::cpp::compute::region_security_policies::v1::
          DeleteSecurityPolicyRequest const& request) override;

  StatusOr<google::cloud::cpp::compute::v1::SecurityPolicy> GetSecurityPolicy(
      google::cloud::rest_internal::RestContext& rest_context,
      Options const& options,
      google::cloud::cpp::compute::region_security_policies::v1::
          GetSecurityPolicyRequest const& request) override;

  StatusOr<google::cloud::cpp::compute::v1::SecurityPolicyRule> GetRule(
      google::cloud::rest_internal::RestContext& rest_context,
      Options const& options,
      google::cloud::cpp::compute::region_security_policies::v1::
          GetRuleRequest const& request) override;

  google::cloud::future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  AsyncInsertSecurityPolicy(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<google::cloud::rest_internal::RestContext> rest_context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::cpp::compute::region_security_policies::v1::
          InsertSecurityPolicyRequest const& request) override;

  StatusOr<google::cloud::cpp::compute::v1::Operation> InsertSecurityPolicy(
      google::cloud::rest_internal::RestContext& rest_context,
      Options const& options,
      google::cloud::cpp::compute::region_security_policies::v1::
          InsertSecurityPolicyRequest const& request) override;

  StatusOr<google::cloud::cpp::compute::v1::SecurityPolicyList>
  ListRegionSecurityPolicies(
      google::cloud::rest_internal::RestContext& rest_context,
      Options const& options,
      google::cloud::cpp::compute::region_security_policies::v1::
          ListRegionSecurityPoliciesRequest const& request) override;

  google::cloud::future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  AsyncPatchSecurityPolicy(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<google::cloud::rest_internal::RestContext> rest_context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::cpp::compute::region_security_policies::v1::
          PatchSecurityPolicyRequest const& request) override;

  StatusOr<google::cloud::cpp::compute::v1::Operation> PatchSecurityPolicy(
      google::cloud::rest_internal::RestContext& rest_context,
      Options const& options,
      google::cloud::cpp::compute::region_security_policies::v1::
          PatchSecurityPolicyRequest const& request) override;

  google::cloud::future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  AsyncPatchRule(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<google::cloud::rest_internal::RestContext> rest_context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::cpp::compute::region_security_policies::v1::
          PatchRuleRequest const& request) override;

  StatusOr<google::cloud::cpp::compute::v1::Operation> PatchRule(
      google::cloud::rest_internal::RestContext& rest_context,
      Options const& options,
      google::cloud::cpp::compute::region_security_policies::v1::
          PatchRuleRequest const& request) override;

  google::cloud::future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  AsyncRemoveRule(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<google::cloud::rest_internal::RestContext> rest_context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::cpp::compute::region_security_policies::v1::
          RemoveRuleRequest const& request) override;

  StatusOr<google::cloud::cpp::compute::v1::Operation> RemoveRule(
      google::cloud::rest_internal::RestContext& rest_context,
      Options const& options,
      google::cloud::cpp::compute::region_security_policies::v1::
          RemoveRuleRequest const& request) override;

  google::cloud::future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  AsyncGetOperation(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<google::cloud::rest_internal::RestContext> rest_context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::cpp::compute::region_operations::v1::
          GetOperationRequest const& request) override;

  google::cloud::future<Status> AsyncCancelOperation(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<google::cloud::rest_internal::RestContext> rest_context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::cpp::compute::region_operations::v1::
          DeleteOperationRequest const& request) override;

 private:
  void SetMetadata(rest_internal::RestContext& rest_context,
                   Options const& options,
                   std::vector<std::string> const& params = {});

  std::shared_ptr<RegionSecurityPoliciesRestStub> child_;
  std::string api_client_header_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_region_security_policies_v1_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_REGION_SECURITY_POLICIES_V1_INTERNAL_REGION_SECURITY_POLICIES_REST_METADATA_DECORATOR_H
