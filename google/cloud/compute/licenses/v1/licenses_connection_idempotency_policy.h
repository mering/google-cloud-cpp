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
// source: google/cloud/compute/licenses/v1/licenses.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_LICENSES_V1_LICENSES_CONNECTION_IDEMPOTENCY_POLICY_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_LICENSES_V1_LICENSES_CONNECTION_IDEMPOTENCY_POLICY_H

#include "google/cloud/compute/licenses/v1/licenses.pb.h"
#include "google/cloud/idempotency.h"
#include "google/cloud/version.h"
#include <memory>

namespace google {
namespace cloud {
namespace compute_licenses_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class LicensesConnectionIdempotencyPolicy {
 public:
  virtual ~LicensesConnectionIdempotencyPolicy();

  /// Create a new copy of this object.
  virtual std::unique_ptr<LicensesConnectionIdempotencyPolicy> clone() const;

  virtual google::cloud::Idempotency DeleteLicense(
      google::cloud::cpp::compute::licenses::v1::DeleteLicenseRequest const&
          request);

  virtual google::cloud::Idempotency GetLicense(
      google::cloud::cpp::compute::licenses::v1::GetLicenseRequest const&
          request);

  virtual google::cloud::Idempotency GetIamPolicy(
      google::cloud::cpp::compute::licenses::v1::GetIamPolicyRequest const&
          request);

  virtual google::cloud::Idempotency InsertLicense(
      google::cloud::cpp::compute::licenses::v1::InsertLicenseRequest const&
          request);

  virtual google::cloud::Idempotency ListLicenses(
      google::cloud::cpp::compute::licenses::v1::ListLicensesRequest request);

  virtual google::cloud::Idempotency SetIamPolicy(
      google::cloud::cpp::compute::licenses::v1::SetIamPolicyRequest const&
          request);

  virtual google::cloud::Idempotency TestIamPermissions(
      google::cloud::cpp::compute::licenses::v1::
          TestIamPermissionsRequest const& request);
};

std::unique_ptr<LicensesConnectionIdempotencyPolicy>
MakeDefaultLicensesConnectionIdempotencyPolicy();

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_licenses_v1
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_LICENSES_V1_LICENSES_CONNECTION_IDEMPOTENCY_POLICY_H
