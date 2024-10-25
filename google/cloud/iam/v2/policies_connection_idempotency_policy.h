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

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_IAM_V2_POLICIES_CONNECTION_IDEMPOTENCY_POLICY_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_IAM_V2_POLICIES_CONNECTION_IDEMPOTENCY_POLICY_H

#include "google/cloud/idempotency.h"
#include "google/cloud/version.h"
#include "google/iam/v2/policy.grpc.pb.h"
#include "google/longrunning/operations.grpc.pb.h"
#include <memory>

namespace google {
namespace cloud {
namespace iam_v2 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class PoliciesConnectionIdempotencyPolicy {
 public:
  virtual ~PoliciesConnectionIdempotencyPolicy();

  /// Create a new copy of this object.
  virtual std::unique_ptr<PoliciesConnectionIdempotencyPolicy> clone() const;

  virtual google::cloud::Idempotency ListPolicies(
      google::iam::v2::ListPoliciesRequest request);

  virtual google::cloud::Idempotency GetPolicy(
      google::iam::v2::GetPolicyRequest const& request);

  virtual google::cloud::Idempotency CreatePolicy(
      google::iam::v2::CreatePolicyRequest const& request);

  virtual google::cloud::Idempotency UpdatePolicy(
      google::iam::v2::UpdatePolicyRequest const& request);

  virtual google::cloud::Idempotency DeletePolicy(
      google::iam::v2::DeletePolicyRequest const& request);

  virtual google::cloud::Idempotency GetOperation(
      google::longrunning::GetOperationRequest const& request);
};

std::unique_ptr<PoliciesConnectionIdempotencyPolicy>
MakeDefaultPoliciesConnectionIdempotencyPolicy();

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace iam_v2
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_IAM_V2_POLICIES_CONNECTION_IDEMPOTENCY_POLICY_H
