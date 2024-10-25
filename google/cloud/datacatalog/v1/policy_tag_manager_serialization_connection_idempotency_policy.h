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
// source: google/cloud/datacatalog/v1/policytagmanagerserialization.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DATACATALOG_V1_POLICY_TAG_MANAGER_SERIALIZATION_CONNECTION_IDEMPOTENCY_POLICY_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DATACATALOG_V1_POLICY_TAG_MANAGER_SERIALIZATION_CONNECTION_IDEMPOTENCY_POLICY_H

#include "google/cloud/idempotency.h"
#include "google/cloud/version.h"
#include "google/cloud/datacatalog/v1/policytagmanagerserialization.grpc.pb.h"
#include "google/longrunning/operations.grpc.pb.h"
#include <memory>

namespace google {
namespace cloud {
namespace datacatalog_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class PolicyTagManagerSerializationConnectionIdempotencyPolicy {
 public:
  virtual ~PolicyTagManagerSerializationConnectionIdempotencyPolicy();

  /// Create a new copy of this object.
  virtual std::unique_ptr<
      PolicyTagManagerSerializationConnectionIdempotencyPolicy>
  clone() const;

  virtual google::cloud::Idempotency ReplaceTaxonomy(
      google::cloud::datacatalog::v1::ReplaceTaxonomyRequest const& request);

  virtual google::cloud::Idempotency ImportTaxonomies(
      google::cloud::datacatalog::v1::ImportTaxonomiesRequest const& request);

  virtual google::cloud::Idempotency ExportTaxonomies(
      google::cloud::datacatalog::v1::ExportTaxonomiesRequest const& request);

  virtual google::cloud::Idempotency ListOperations(
      google::longrunning::ListOperationsRequest request);

  virtual google::cloud::Idempotency GetOperation(
      google::longrunning::GetOperationRequest const& request);

  virtual google::cloud::Idempotency DeleteOperation(
      google::longrunning::DeleteOperationRequest const& request);

  virtual google::cloud::Idempotency CancelOperation(
      google::longrunning::CancelOperationRequest const& request);
};

std::unique_ptr<PolicyTagManagerSerializationConnectionIdempotencyPolicy>
MakeDefaultPolicyTagManagerSerializationConnectionIdempotencyPolicy();

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace datacatalog_v1
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DATACATALOG_V1_POLICY_TAG_MANAGER_SERIALIZATION_CONNECTION_IDEMPOTENCY_POLICY_H
