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
// source: google/cloud/orgpolicy/v2/orgpolicy.proto

#include "google/cloud/orgpolicy/v2/internal/org_policy_logging_decorator.h"
#include "google/cloud/internal/log_wrapper.h"
#include "google/cloud/status_or.h"
#include <google/cloud/orgpolicy/v2/orgpolicy.grpc.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace orgpolicy_v2_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

OrgPolicyLogging::OrgPolicyLogging(std::shared_ptr<OrgPolicyStub> child,
                                   TracingOptions tracing_options,
                                   std::set<std::string> const& components)
    : child_(std::move(child)),
      tracing_options_(std::move(tracing_options)),
      stream_logging_(components.find("rpc-streams") != components.end()) {}

StatusOr<google::cloud::orgpolicy::v2::ListConstraintsResponse>
OrgPolicyLogging::ListConstraints(
    grpc::ClientContext& context,
    google::cloud::orgpolicy::v2::ListConstraintsRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](
          grpc::ClientContext& context,
          google::cloud::orgpolicy::v2::ListConstraintsRequest const& request) {
        return child_->ListConstraints(context, request);
      },
      context, request, __func__, tracing_options_);
}

StatusOr<google::cloud::orgpolicy::v2::ListPoliciesResponse>
OrgPolicyLogging::ListPolicies(
    grpc::ClientContext& context,
    google::cloud::orgpolicy::v2::ListPoliciesRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context,
             google::cloud::orgpolicy::v2::ListPoliciesRequest const& request) {
        return child_->ListPolicies(context, request);
      },
      context, request, __func__, tracing_options_);
}

StatusOr<google::cloud::orgpolicy::v2::Policy> OrgPolicyLogging::GetPolicy(
    grpc::ClientContext& context,
    google::cloud::orgpolicy::v2::GetPolicyRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context,
             google::cloud::orgpolicy::v2::GetPolicyRequest const& request) {
        return child_->GetPolicy(context, request);
      },
      context, request, __func__, tracing_options_);
}

StatusOr<google::cloud::orgpolicy::v2::Policy>
OrgPolicyLogging::GetEffectivePolicy(
    grpc::ClientContext& context,
    google::cloud::orgpolicy::v2::GetEffectivePolicyRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context,
             google::cloud::orgpolicy::v2::GetEffectivePolicyRequest const&
                 request) {
        return child_->GetEffectivePolicy(context, request);
      },
      context, request, __func__, tracing_options_);
}

StatusOr<google::cloud::orgpolicy::v2::Policy> OrgPolicyLogging::CreatePolicy(
    grpc::ClientContext& context,
    google::cloud::orgpolicy::v2::CreatePolicyRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context,
             google::cloud::orgpolicy::v2::CreatePolicyRequest const& request) {
        return child_->CreatePolicy(context, request);
      },
      context, request, __func__, tracing_options_);
}

StatusOr<google::cloud::orgpolicy::v2::Policy> OrgPolicyLogging::UpdatePolicy(
    grpc::ClientContext& context,
    google::cloud::orgpolicy::v2::UpdatePolicyRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context,
             google::cloud::orgpolicy::v2::UpdatePolicyRequest const& request) {
        return child_->UpdatePolicy(context, request);
      },
      context, request, __func__, tracing_options_);
}

Status OrgPolicyLogging::DeletePolicy(
    grpc::ClientContext& context,
    google::cloud::orgpolicy::v2::DeletePolicyRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context,
             google::cloud::orgpolicy::v2::DeletePolicyRequest const& request) {
        return child_->DeletePolicy(context, request);
      },
      context, request, __func__, tracing_options_);
}

StatusOr<google::cloud::orgpolicy::v2::CustomConstraint>
OrgPolicyLogging::CreateCustomConstraint(
    grpc::ClientContext& context,
    google::cloud::orgpolicy::v2::CreateCustomConstraintRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context,
             google::cloud::orgpolicy::v2::CreateCustomConstraintRequest const&
                 request) {
        return child_->CreateCustomConstraint(context, request);
      },
      context, request, __func__, tracing_options_);
}

StatusOr<google::cloud::orgpolicy::v2::CustomConstraint>
OrgPolicyLogging::UpdateCustomConstraint(
    grpc::ClientContext& context,
    google::cloud::orgpolicy::v2::UpdateCustomConstraintRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context,
             google::cloud::orgpolicy::v2::UpdateCustomConstraintRequest const&
                 request) {
        return child_->UpdateCustomConstraint(context, request);
      },
      context, request, __func__, tracing_options_);
}

StatusOr<google::cloud::orgpolicy::v2::CustomConstraint>
OrgPolicyLogging::GetCustomConstraint(
    grpc::ClientContext& context,
    google::cloud::orgpolicy::v2::GetCustomConstraintRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context,
             google::cloud::orgpolicy::v2::GetCustomConstraintRequest const&
                 request) {
        return child_->GetCustomConstraint(context, request);
      },
      context, request, __func__, tracing_options_);
}

StatusOr<google::cloud::orgpolicy::v2::ListCustomConstraintsResponse>
OrgPolicyLogging::ListCustomConstraints(
    grpc::ClientContext& context,
    google::cloud::orgpolicy::v2::ListCustomConstraintsRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context,
             google::cloud::orgpolicy::v2::ListCustomConstraintsRequest const&
                 request) {
        return child_->ListCustomConstraints(context, request);
      },
      context, request, __func__, tracing_options_);
}

Status OrgPolicyLogging::DeleteCustomConstraint(
    grpc::ClientContext& context,
    google::cloud::orgpolicy::v2::DeleteCustomConstraintRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context,
             google::cloud::orgpolicy::v2::DeleteCustomConstraintRequest const&
                 request) {
        return child_->DeleteCustomConstraint(context, request);
      },
      context, request, __func__, tracing_options_);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace orgpolicy_v2_internal
}  // namespace cloud
}  // namespace google
