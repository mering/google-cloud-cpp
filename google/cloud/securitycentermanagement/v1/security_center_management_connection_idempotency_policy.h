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
// source:
// google/cloud/securitycentermanagement/v1/security_center_management.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_SECURITYCENTERMANAGEMENT_V1_SECURITY_CENTER_MANAGEMENT_CONNECTION_IDEMPOTENCY_POLICY_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_SECURITYCENTERMANAGEMENT_V1_SECURITY_CENTER_MANAGEMENT_CONNECTION_IDEMPOTENCY_POLICY_H

#include "google/cloud/location/locations.grpc.pb.h"
#include "google/cloud/securitycentermanagement/v1/security_center_management.grpc.pb.h"
#include "google/cloud/idempotency.h"
#include "google/cloud/version.h"
#include <memory>

namespace google {
namespace cloud {
namespace securitycentermanagement_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class SecurityCenterManagementConnectionIdempotencyPolicy {
 public:
  virtual ~SecurityCenterManagementConnectionIdempotencyPolicy();

  /// Create a new copy of this object.
  virtual std::unique_ptr<SecurityCenterManagementConnectionIdempotencyPolicy>
  clone() const;

  virtual google::cloud::Idempotency
  ListEffectiveSecurityHealthAnalyticsCustomModules(
      google::cloud::securitycentermanagement::v1::
          ListEffectiveSecurityHealthAnalyticsCustomModulesRequest request);

  virtual google::cloud::Idempotency
  GetEffectiveSecurityHealthAnalyticsCustomModule(
      google::cloud::securitycentermanagement::v1::
          GetEffectiveSecurityHealthAnalyticsCustomModuleRequest const&
              request);

  virtual google::cloud::Idempotency ListSecurityHealthAnalyticsCustomModules(
      google::cloud::securitycentermanagement::v1::
          ListSecurityHealthAnalyticsCustomModulesRequest request);

  virtual google::cloud::Idempotency
  ListDescendantSecurityHealthAnalyticsCustomModules(
      google::cloud::securitycentermanagement::v1::
          ListDescendantSecurityHealthAnalyticsCustomModulesRequest request);

  virtual google::cloud::Idempotency GetSecurityHealthAnalyticsCustomModule(
      google::cloud::securitycentermanagement::v1::
          GetSecurityHealthAnalyticsCustomModuleRequest const& request);

  virtual google::cloud::Idempotency CreateSecurityHealthAnalyticsCustomModule(
      google::cloud::securitycentermanagement::v1::
          CreateSecurityHealthAnalyticsCustomModuleRequest const& request);

  virtual google::cloud::Idempotency UpdateSecurityHealthAnalyticsCustomModule(
      google::cloud::securitycentermanagement::v1::
          UpdateSecurityHealthAnalyticsCustomModuleRequest const& request);

  virtual google::cloud::Idempotency DeleteSecurityHealthAnalyticsCustomModule(
      google::cloud::securitycentermanagement::v1::
          DeleteSecurityHealthAnalyticsCustomModuleRequest const& request);

  virtual google::cloud::Idempotency
  SimulateSecurityHealthAnalyticsCustomModule(
      google::cloud::securitycentermanagement::v1::
          SimulateSecurityHealthAnalyticsCustomModuleRequest const& request);

  virtual google::cloud::Idempotency
  ListEffectiveEventThreatDetectionCustomModules(
      google::cloud::securitycentermanagement::v1::
          ListEffectiveEventThreatDetectionCustomModulesRequest request);

  virtual google::cloud::Idempotency
  GetEffectiveEventThreatDetectionCustomModule(
      google::cloud::securitycentermanagement::v1::
          GetEffectiveEventThreatDetectionCustomModuleRequest const& request);

  virtual google::cloud::Idempotency ListEventThreatDetectionCustomModules(
      google::cloud::securitycentermanagement::v1::
          ListEventThreatDetectionCustomModulesRequest request);

  virtual google::cloud::Idempotency
  ListDescendantEventThreatDetectionCustomModules(
      google::cloud::securitycentermanagement::v1::
          ListDescendantEventThreatDetectionCustomModulesRequest request);

  virtual google::cloud::Idempotency GetEventThreatDetectionCustomModule(
      google::cloud::securitycentermanagement::v1::
          GetEventThreatDetectionCustomModuleRequest const& request);

  virtual google::cloud::Idempotency CreateEventThreatDetectionCustomModule(
      google::cloud::securitycentermanagement::v1::
          CreateEventThreatDetectionCustomModuleRequest const& request);

  virtual google::cloud::Idempotency UpdateEventThreatDetectionCustomModule(
      google::cloud::securitycentermanagement::v1::
          UpdateEventThreatDetectionCustomModuleRequest const& request);

  virtual google::cloud::Idempotency DeleteEventThreatDetectionCustomModule(
      google::cloud::securitycentermanagement::v1::
          DeleteEventThreatDetectionCustomModuleRequest const& request);

  virtual google::cloud::Idempotency ValidateEventThreatDetectionCustomModule(
      google::cloud::securitycentermanagement::v1::
          ValidateEventThreatDetectionCustomModuleRequest const& request);

  virtual google::cloud::Idempotency GetSecurityCenterService(
      google::cloud::securitycentermanagement::v1::
          GetSecurityCenterServiceRequest const& request);

  virtual google::cloud::Idempotency ListSecurityCenterServices(
      google::cloud::securitycentermanagement::v1::
          ListSecurityCenterServicesRequest request);

  virtual google::cloud::Idempotency UpdateSecurityCenterService(
      google::cloud::securitycentermanagement::v1::
          UpdateSecurityCenterServiceRequest const& request);

  virtual google::cloud::Idempotency ListLocations(
      google::cloud::location::ListLocationsRequest request);

  virtual google::cloud::Idempotency GetLocation(
      google::cloud::location::GetLocationRequest const& request);
};

std::unique_ptr<SecurityCenterManagementConnectionIdempotencyPolicy>
MakeDefaultSecurityCenterManagementConnectionIdempotencyPolicy();

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace securitycentermanagement_v1
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_SECURITYCENTERMANAGEMENT_V1_SECURITY_CENTER_MANAGEMENT_CONNECTION_IDEMPOTENCY_POLICY_H
