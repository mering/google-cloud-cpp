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
// source: google/cloud/privilegedaccessmanager/v1/privilegedaccessmanager.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_PRIVILEGEDACCESSMANAGER_V1_PRIVILEGED_ACCESS_MANAGER_CONNECTION_IDEMPOTENCY_POLICY_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_PRIVILEGEDACCESSMANAGER_V1_PRIVILEGED_ACCESS_MANAGER_CONNECTION_IDEMPOTENCY_POLICY_H

#include "google/cloud/idempotency.h"
#include "google/cloud/version.h"
#include <google/cloud/location/locations.grpc.pb.h>
#include <google/cloud/privilegedaccessmanager/v1/privilegedaccessmanager.grpc.pb.h>
#include <google/longrunning/operations.grpc.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace privilegedaccessmanager_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class PrivilegedAccessManagerConnectionIdempotencyPolicy {
 public:
  virtual ~PrivilegedAccessManagerConnectionIdempotencyPolicy();

  /// Create a new copy of this object.
  virtual std::unique_ptr<PrivilegedAccessManagerConnectionIdempotencyPolicy>
  clone() const;

  virtual google::cloud::Idempotency CheckOnboardingStatus(
      google::cloud::privilegedaccessmanager::v1::
          CheckOnboardingStatusRequest const& request);

  virtual google::cloud::Idempotency ListEntitlements(
      google::cloud::privilegedaccessmanager::v1::ListEntitlementsRequest
          request);

  virtual google::cloud::Idempotency SearchEntitlements(
      google::cloud::privilegedaccessmanager::v1::SearchEntitlementsRequest
          request);

  virtual google::cloud::Idempotency GetEntitlement(
      google::cloud::privilegedaccessmanager::v1::GetEntitlementRequest const&
          request);

  virtual google::cloud::Idempotency CreateEntitlement(
      google::cloud::privilegedaccessmanager::v1::
          CreateEntitlementRequest const& request);

  virtual google::cloud::Idempotency DeleteEntitlement(
      google::cloud::privilegedaccessmanager::v1::
          DeleteEntitlementRequest const& request);

  virtual google::cloud::Idempotency UpdateEntitlement(
      google::cloud::privilegedaccessmanager::v1::
          UpdateEntitlementRequest const& request);

  virtual google::cloud::Idempotency ListGrants(
      google::cloud::privilegedaccessmanager::v1::ListGrantsRequest request);

  virtual google::cloud::Idempotency SearchGrants(
      google::cloud::privilegedaccessmanager::v1::SearchGrantsRequest request);

  virtual google::cloud::Idempotency GetGrant(
      google::cloud::privilegedaccessmanager::v1::GetGrantRequest const&
          request);

  virtual google::cloud::Idempotency CreateGrant(
      google::cloud::privilegedaccessmanager::v1::CreateGrantRequest const&
          request);

  virtual google::cloud::Idempotency ApproveGrant(
      google::cloud::privilegedaccessmanager::v1::ApproveGrantRequest const&
          request);

  virtual google::cloud::Idempotency DenyGrant(
      google::cloud::privilegedaccessmanager::v1::DenyGrantRequest const&
          request);

  virtual google::cloud::Idempotency RevokeGrant(
      google::cloud::privilegedaccessmanager::v1::RevokeGrantRequest const&
          request);

  virtual google::cloud::Idempotency ListLocations(
      google::cloud::location::ListLocationsRequest request);

  virtual google::cloud::Idempotency GetLocation(
      google::cloud::location::GetLocationRequest const& request);

  virtual google::cloud::Idempotency ListOperations(
      google::longrunning::ListOperationsRequest request);

  virtual google::cloud::Idempotency GetOperation(
      google::longrunning::GetOperationRequest const& request);

  virtual google::cloud::Idempotency DeleteOperation(
      google::longrunning::DeleteOperationRequest const& request);
};

std::unique_ptr<PrivilegedAccessManagerConnectionIdempotencyPolicy>
MakeDefaultPrivilegedAccessManagerConnectionIdempotencyPolicy();

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace privilegedaccessmanager_v1
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_PRIVILEGEDACCESSMANAGER_V1_PRIVILEGED_ACCESS_MANAGER_CONNECTION_IDEMPOTENCY_POLICY_H
