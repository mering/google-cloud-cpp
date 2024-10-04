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
// source: google/iam/v2/policy.proto

#include "google/cloud/iam/v2/policies_connection_idempotency_policy.h"
#include <memory>

namespace google {
namespace cloud {
namespace iam_v2 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

using ::google::cloud::Idempotency;

PoliciesConnectionIdempotencyPolicy::~PoliciesConnectionIdempotencyPolicy() =
    default;

std::unique_ptr<PoliciesConnectionIdempotencyPolicy>
PoliciesConnectionIdempotencyPolicy::clone() const {
  return std::make_unique<PoliciesConnectionIdempotencyPolicy>(*this);
}

Idempotency PoliciesConnectionIdempotencyPolicy::ListPolicies(
    google::iam::v2::ListPoliciesRequest) {  // NOLINT
  return Idempotency::kIdempotent;
}

Idempotency PoliciesConnectionIdempotencyPolicy::GetPolicy(
    google::iam::v2::GetPolicyRequest const&) {
  return Idempotency::kIdempotent;
}

Idempotency PoliciesConnectionIdempotencyPolicy::CreatePolicy(
    google::iam::v2::CreatePolicyRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency PoliciesConnectionIdempotencyPolicy::UpdatePolicy(
    google::iam::v2::UpdatePolicyRequest const&) {
  return Idempotency::kIdempotent;
}

Idempotency PoliciesConnectionIdempotencyPolicy::DeletePolicy(
    google::iam::v2::DeletePolicyRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency PoliciesConnectionIdempotencyPolicy::GetOperation(
    google::longrunning::GetOperationRequest const&) {
  return Idempotency::kIdempotent;
}

std::unique_ptr<PoliciesConnectionIdempotencyPolicy>
MakeDefaultPoliciesConnectionIdempotencyPolicy() {
  return std::make_unique<PoliciesConnectionIdempotencyPolicy>();
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace iam_v2
}  // namespace cloud
}  // namespace google
