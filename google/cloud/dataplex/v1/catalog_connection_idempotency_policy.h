// Copyright 2024 Google LLC
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
// source: google/cloud/dataplex/v1/catalog.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DATAPLEX_V1_CATALOG_CONNECTION_IDEMPOTENCY_POLICY_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DATAPLEX_V1_CATALOG_CONNECTION_IDEMPOTENCY_POLICY_H

#include "google/cloud/idempotency.h"
#include "google/cloud/version.h"
#include <google/cloud/dataplex/v1/catalog.grpc.pb.h>
#include <google/cloud/location/locations.grpc.pb.h>
#include <google/iam/v1/iam_policy.grpc.pb.h>
#include <google/longrunning/operations.grpc.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace dataplex_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class CatalogServiceConnectionIdempotencyPolicy {
 public:
  virtual ~CatalogServiceConnectionIdempotencyPolicy();

  /// Create a new copy of this object.
  virtual std::unique_ptr<CatalogServiceConnectionIdempotencyPolicy> clone()
      const;

  virtual google::cloud::Idempotency CreateEntryType(
      google::cloud::dataplex::v1::CreateEntryTypeRequest const& request);

  virtual google::cloud::Idempotency UpdateEntryType(
      google::cloud::dataplex::v1::UpdateEntryTypeRequest const& request);

  virtual google::cloud::Idempotency DeleteEntryType(
      google::cloud::dataplex::v1::DeleteEntryTypeRequest const& request);

  virtual google::cloud::Idempotency ListEntryTypes(
      google::cloud::dataplex::v1::ListEntryTypesRequest request);

  virtual google::cloud::Idempotency GetEntryType(
      google::cloud::dataplex::v1::GetEntryTypeRequest const& request);

  virtual google::cloud::Idempotency CreateAspectType(
      google::cloud::dataplex::v1::CreateAspectTypeRequest const& request);

  virtual google::cloud::Idempotency UpdateAspectType(
      google::cloud::dataplex::v1::UpdateAspectTypeRequest const& request);

  virtual google::cloud::Idempotency DeleteAspectType(
      google::cloud::dataplex::v1::DeleteAspectTypeRequest const& request);

  virtual google::cloud::Idempotency ListAspectTypes(
      google::cloud::dataplex::v1::ListAspectTypesRequest request);

  virtual google::cloud::Idempotency GetAspectType(
      google::cloud::dataplex::v1::GetAspectTypeRequest const& request);

  virtual google::cloud::Idempotency CreateEntryGroup(
      google::cloud::dataplex::v1::CreateEntryGroupRequest const& request);

  virtual google::cloud::Idempotency UpdateEntryGroup(
      google::cloud::dataplex::v1::UpdateEntryGroupRequest const& request);

  virtual google::cloud::Idempotency DeleteEntryGroup(
      google::cloud::dataplex::v1::DeleteEntryGroupRequest const& request);

  virtual google::cloud::Idempotency ListEntryGroups(
      google::cloud::dataplex::v1::ListEntryGroupsRequest request);

  virtual google::cloud::Idempotency GetEntryGroup(
      google::cloud::dataplex::v1::GetEntryGroupRequest const& request);

  virtual google::cloud::Idempotency CreateEntry(
      google::cloud::dataplex::v1::CreateEntryRequest const& request);

  virtual google::cloud::Idempotency UpdateEntry(
      google::cloud::dataplex::v1::UpdateEntryRequest const& request);

  virtual google::cloud::Idempotency DeleteEntry(
      google::cloud::dataplex::v1::DeleteEntryRequest const& request);

  virtual google::cloud::Idempotency ListEntries(
      google::cloud::dataplex::v1::ListEntriesRequest request);

  virtual google::cloud::Idempotency GetEntry(
      google::cloud::dataplex::v1::GetEntryRequest const& request);

  virtual google::cloud::Idempotency LookupEntry(
      google::cloud::dataplex::v1::LookupEntryRequest const& request);

  virtual google::cloud::Idempotency SearchEntries(
      google::cloud::dataplex::v1::SearchEntriesRequest request);

  virtual google::cloud::Idempotency ListLocations(
      google::cloud::location::ListLocationsRequest request);

  virtual google::cloud::Idempotency GetLocation(
      google::cloud::location::GetLocationRequest const& request);

  virtual google::cloud::Idempotency SetIamPolicy(
      google::iam::v1::SetIamPolicyRequest const& request);

  virtual google::cloud::Idempotency GetIamPolicy(
      google::iam::v1::GetIamPolicyRequest const& request);

  virtual google::cloud::Idempotency TestIamPermissions(
      google::iam::v1::TestIamPermissionsRequest const& request);

  virtual google::cloud::Idempotency ListOperations(
      google::longrunning::ListOperationsRequest request);

  virtual google::cloud::Idempotency GetOperation(
      google::longrunning::GetOperationRequest const& request);

  virtual google::cloud::Idempotency DeleteOperation(
      google::longrunning::DeleteOperationRequest const& request);

  virtual google::cloud::Idempotency CancelOperation(
      google::longrunning::CancelOperationRequest const& request);
};

std::unique_ptr<CatalogServiceConnectionIdempotencyPolicy>
MakeDefaultCatalogServiceConnectionIdempotencyPolicy();

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace dataplex_v1
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DATAPLEX_V1_CATALOG_CONNECTION_IDEMPOTENCY_POLICY_H
