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

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_SECURITYCENTERMANAGEMENT_V1_INTERNAL_SECURITY_CENTER_MANAGEMENT_STUB_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_SECURITYCENTERMANAGEMENT_V1_INTERNAL_SECURITY_CENTER_MANAGEMENT_STUB_H

#include "google/cloud/options.h"
#include "google/cloud/status_or.h"
#include "google/cloud/version.h"
#include "google/cloud/location/locations.grpc.pb.h"
#include "google/cloud/securitycentermanagement/v1/security_center_management.grpc.pb.h"
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace securitycentermanagement_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class SecurityCenterManagementStub {
 public:
  virtual ~SecurityCenterManagementStub() = 0;

  virtual StatusOr<
      google::cloud::securitycentermanagement::v1::
          ListEffectiveSecurityHealthAnalyticsCustomModulesResponse>
  ListEffectiveSecurityHealthAnalyticsCustomModules(
      grpc::ClientContext& context, Options const& options,
      google::cloud::securitycentermanagement::v1::
          ListEffectiveSecurityHealthAnalyticsCustomModulesRequest const&
              request) = 0;

  virtual StatusOr<google::cloud::securitycentermanagement::v1::
                       EffectiveSecurityHealthAnalyticsCustomModule>
  GetEffectiveSecurityHealthAnalyticsCustomModule(
      grpc::ClientContext& context, Options const& options,
      google::cloud::securitycentermanagement::v1::
          GetEffectiveSecurityHealthAnalyticsCustomModuleRequest const&
              request) = 0;

  virtual StatusOr<google::cloud::securitycentermanagement::v1::
                       ListSecurityHealthAnalyticsCustomModulesResponse>
  ListSecurityHealthAnalyticsCustomModules(
      grpc::ClientContext& context, Options const& options,
      google::cloud::securitycentermanagement::v1::
          ListSecurityHealthAnalyticsCustomModulesRequest const& request) = 0;

  virtual StatusOr<
      google::cloud::securitycentermanagement::v1::
          ListDescendantSecurityHealthAnalyticsCustomModulesResponse>
  ListDescendantSecurityHealthAnalyticsCustomModules(
      grpc::ClientContext& context, Options const& options,
      google::cloud::securitycentermanagement::v1::
          ListDescendantSecurityHealthAnalyticsCustomModulesRequest const&
              request) = 0;

  virtual StatusOr<google::cloud::securitycentermanagement::v1::
                       SecurityHealthAnalyticsCustomModule>
  GetSecurityHealthAnalyticsCustomModule(
      grpc::ClientContext& context, Options const& options,
      google::cloud::securitycentermanagement::v1::
          GetSecurityHealthAnalyticsCustomModuleRequest const& request) = 0;

  virtual StatusOr<google::cloud::securitycentermanagement::v1::
                       SecurityHealthAnalyticsCustomModule>
  CreateSecurityHealthAnalyticsCustomModule(
      grpc::ClientContext& context, Options const& options,
      google::cloud::securitycentermanagement::v1::
          CreateSecurityHealthAnalyticsCustomModuleRequest const& request) = 0;

  virtual StatusOr<google::cloud::securitycentermanagement::v1::
                       SecurityHealthAnalyticsCustomModule>
  UpdateSecurityHealthAnalyticsCustomModule(
      grpc::ClientContext& context, Options const& options,
      google::cloud::securitycentermanagement::v1::
          UpdateSecurityHealthAnalyticsCustomModuleRequest const& request) = 0;

  virtual Status DeleteSecurityHealthAnalyticsCustomModule(
      grpc::ClientContext& context, Options const& options,
      google::cloud::securitycentermanagement::v1::
          DeleteSecurityHealthAnalyticsCustomModuleRequest const& request) = 0;

  virtual StatusOr<google::cloud::securitycentermanagement::v1::
                       SimulateSecurityHealthAnalyticsCustomModuleResponse>
  SimulateSecurityHealthAnalyticsCustomModule(
      grpc::ClientContext& context, Options const& options,
      google::cloud::securitycentermanagement::v1::
          SimulateSecurityHealthAnalyticsCustomModuleRequest const&
              request) = 0;

  virtual StatusOr<google::cloud::securitycentermanagement::v1::
                       ListEffectiveEventThreatDetectionCustomModulesResponse>
  ListEffectiveEventThreatDetectionCustomModules(
      grpc::ClientContext& context, Options const& options,
      google::cloud::securitycentermanagement::v1::
          ListEffectiveEventThreatDetectionCustomModulesRequest const&
              request) = 0;

  virtual StatusOr<google::cloud::securitycentermanagement::v1::
                       EffectiveEventThreatDetectionCustomModule>
  GetEffectiveEventThreatDetectionCustomModule(
      grpc::ClientContext& context, Options const& options,
      google::cloud::securitycentermanagement::v1::
          GetEffectiveEventThreatDetectionCustomModuleRequest const&
              request) = 0;

  virtual StatusOr<google::cloud::securitycentermanagement::v1::
                       ListEventThreatDetectionCustomModulesResponse>
  ListEventThreatDetectionCustomModules(
      grpc::ClientContext& context, Options const& options,
      google::cloud::securitycentermanagement::v1::
          ListEventThreatDetectionCustomModulesRequest const& request) = 0;

  virtual StatusOr<google::cloud::securitycentermanagement::v1::
                       ListDescendantEventThreatDetectionCustomModulesResponse>
  ListDescendantEventThreatDetectionCustomModules(
      grpc::ClientContext& context, Options const& options,
      google::cloud::securitycentermanagement::v1::
          ListDescendantEventThreatDetectionCustomModulesRequest const&
              request) = 0;

  virtual StatusOr<google::cloud::securitycentermanagement::v1::
                       EventThreatDetectionCustomModule>
  GetEventThreatDetectionCustomModule(
      grpc::ClientContext& context, Options const& options,
      google::cloud::securitycentermanagement::v1::
          GetEventThreatDetectionCustomModuleRequest const& request) = 0;

  virtual StatusOr<google::cloud::securitycentermanagement::v1::
                       EventThreatDetectionCustomModule>
  CreateEventThreatDetectionCustomModule(
      grpc::ClientContext& context, Options const& options,
      google::cloud::securitycentermanagement::v1::
          CreateEventThreatDetectionCustomModuleRequest const& request) = 0;

  virtual StatusOr<google::cloud::securitycentermanagement::v1::
                       EventThreatDetectionCustomModule>
  UpdateEventThreatDetectionCustomModule(
      grpc::ClientContext& context, Options const& options,
      google::cloud::securitycentermanagement::v1::
          UpdateEventThreatDetectionCustomModuleRequest const& request) = 0;

  virtual Status DeleteEventThreatDetectionCustomModule(
      grpc::ClientContext& context, Options const& options,
      google::cloud::securitycentermanagement::v1::
          DeleteEventThreatDetectionCustomModuleRequest const& request) = 0;

  virtual StatusOr<google::cloud::securitycentermanagement::v1::
                       ValidateEventThreatDetectionCustomModuleResponse>
  ValidateEventThreatDetectionCustomModule(
      grpc::ClientContext& context, Options const& options,
      google::cloud::securitycentermanagement::v1::
          ValidateEventThreatDetectionCustomModuleRequest const& request) = 0;

  virtual StatusOr<
      google::cloud::securitycentermanagement::v1::SecurityCenterService>
  GetSecurityCenterService(
      grpc::ClientContext& context, Options const& options,
      google::cloud::securitycentermanagement::v1::
          GetSecurityCenterServiceRequest const& request) = 0;

  virtual StatusOr<google::cloud::securitycentermanagement::v1::
                       ListSecurityCenterServicesResponse>
  ListSecurityCenterServices(
      grpc::ClientContext& context, Options const& options,
      google::cloud::securitycentermanagement::v1::
          ListSecurityCenterServicesRequest const& request) = 0;

  virtual StatusOr<
      google::cloud::securitycentermanagement::v1::SecurityCenterService>
  UpdateSecurityCenterService(
      grpc::ClientContext& context, Options const& options,
      google::cloud::securitycentermanagement::v1::
          UpdateSecurityCenterServiceRequest const& request) = 0;

  virtual StatusOr<google::cloud::location::ListLocationsResponse>
  ListLocations(
      grpc::ClientContext& context, Options const& options,
      google::cloud::location::ListLocationsRequest const& request) = 0;

  virtual StatusOr<google::cloud::location::Location> GetLocation(
      grpc::ClientContext& context, Options const& options,
      google::cloud::location::GetLocationRequest const& request) = 0;
};

class DefaultSecurityCenterManagementStub
    : public SecurityCenterManagementStub {
 public:
  explicit DefaultSecurityCenterManagementStub(
      std::unique_ptr<google::cloud::securitycentermanagement::v1::
                          SecurityCenterManagement::StubInterface>
          grpc_stub,
      std::unique_ptr<google::cloud::location::Locations::StubInterface>
          locations_stub)
      : grpc_stub_(std::move(grpc_stub)),
        locations_stub_(std::move(locations_stub)) {}

  StatusOr<google::cloud::securitycentermanagement::v1::
               ListEffectiveSecurityHealthAnalyticsCustomModulesResponse>
  ListEffectiveSecurityHealthAnalyticsCustomModules(
      grpc::ClientContext& context, Options const& options,
      google::cloud::securitycentermanagement::v1::
          ListEffectiveSecurityHealthAnalyticsCustomModulesRequest const&
              request) override;

  StatusOr<google::cloud::securitycentermanagement::v1::
               EffectiveSecurityHealthAnalyticsCustomModule>
  GetEffectiveSecurityHealthAnalyticsCustomModule(
      grpc::ClientContext& context, Options const& options,
      google::cloud::securitycentermanagement::v1::
          GetEffectiveSecurityHealthAnalyticsCustomModuleRequest const& request)
      override;

  StatusOr<google::cloud::securitycentermanagement::v1::
               ListSecurityHealthAnalyticsCustomModulesResponse>
  ListSecurityHealthAnalyticsCustomModules(
      grpc::ClientContext& context, Options const& options,
      google::cloud::securitycentermanagement::v1::
          ListSecurityHealthAnalyticsCustomModulesRequest const& request)
      override;

  StatusOr<google::cloud::securitycentermanagement::v1::
               ListDescendantSecurityHealthAnalyticsCustomModulesResponse>
  ListDescendantSecurityHealthAnalyticsCustomModules(
      grpc::ClientContext& context, Options const& options,
      google::cloud::securitycentermanagement::v1::
          ListDescendantSecurityHealthAnalyticsCustomModulesRequest const&
              request) override;

  StatusOr<google::cloud::securitycentermanagement::v1::
               SecurityHealthAnalyticsCustomModule>
  GetSecurityHealthAnalyticsCustomModule(
      grpc::ClientContext& context, Options const& options,
      google::cloud::securitycentermanagement::v1::
          GetSecurityHealthAnalyticsCustomModuleRequest const& request)
      override;

  StatusOr<google::cloud::securitycentermanagement::v1::
               SecurityHealthAnalyticsCustomModule>
  CreateSecurityHealthAnalyticsCustomModule(
      grpc::ClientContext& context, Options const& options,
      google::cloud::securitycentermanagement::v1::
          CreateSecurityHealthAnalyticsCustomModuleRequest const& request)
      override;

  StatusOr<google::cloud::securitycentermanagement::v1::
               SecurityHealthAnalyticsCustomModule>
  UpdateSecurityHealthAnalyticsCustomModule(
      grpc::ClientContext& context, Options const& options,
      google::cloud::securitycentermanagement::v1::
          UpdateSecurityHealthAnalyticsCustomModuleRequest const& request)
      override;

  Status DeleteSecurityHealthAnalyticsCustomModule(
      grpc::ClientContext& context, Options const& options,
      google::cloud::securitycentermanagement::v1::
          DeleteSecurityHealthAnalyticsCustomModuleRequest const& request)
      override;

  StatusOr<google::cloud::securitycentermanagement::v1::
               SimulateSecurityHealthAnalyticsCustomModuleResponse>
  SimulateSecurityHealthAnalyticsCustomModule(
      grpc::ClientContext& context, Options const& options,
      google::cloud::securitycentermanagement::v1::
          SimulateSecurityHealthAnalyticsCustomModuleRequest const& request)
      override;

  StatusOr<google::cloud::securitycentermanagement::v1::
               ListEffectiveEventThreatDetectionCustomModulesResponse>
  ListEffectiveEventThreatDetectionCustomModules(
      grpc::ClientContext& context, Options const& options,
      google::cloud::securitycentermanagement::v1::
          ListEffectiveEventThreatDetectionCustomModulesRequest const& request)
      override;

  StatusOr<google::cloud::securitycentermanagement::v1::
               EffectiveEventThreatDetectionCustomModule>
  GetEffectiveEventThreatDetectionCustomModule(
      grpc::ClientContext& context, Options const& options,
      google::cloud::securitycentermanagement::v1::
          GetEffectiveEventThreatDetectionCustomModuleRequest const& request)
      override;

  StatusOr<google::cloud::securitycentermanagement::v1::
               ListEventThreatDetectionCustomModulesResponse>
  ListEventThreatDetectionCustomModules(
      grpc::ClientContext& context, Options const& options,
      google::cloud::securitycentermanagement::v1::
          ListEventThreatDetectionCustomModulesRequest const& request) override;

  StatusOr<google::cloud::securitycentermanagement::v1::
               ListDescendantEventThreatDetectionCustomModulesResponse>
  ListDescendantEventThreatDetectionCustomModules(
      grpc::ClientContext& context, Options const& options,
      google::cloud::securitycentermanagement::v1::
          ListDescendantEventThreatDetectionCustomModulesRequest const& request)
      override;

  StatusOr<google::cloud::securitycentermanagement::v1::
               EventThreatDetectionCustomModule>
  GetEventThreatDetectionCustomModule(
      grpc::ClientContext& context, Options const& options,
      google::cloud::securitycentermanagement::v1::
          GetEventThreatDetectionCustomModuleRequest const& request) override;

  StatusOr<google::cloud::securitycentermanagement::v1::
               EventThreatDetectionCustomModule>
  CreateEventThreatDetectionCustomModule(
      grpc::ClientContext& context, Options const& options,
      google::cloud::securitycentermanagement::v1::
          CreateEventThreatDetectionCustomModuleRequest const& request)
      override;

  StatusOr<google::cloud::securitycentermanagement::v1::
               EventThreatDetectionCustomModule>
  UpdateEventThreatDetectionCustomModule(
      grpc::ClientContext& context, Options const& options,
      google::cloud::securitycentermanagement::v1::
          UpdateEventThreatDetectionCustomModuleRequest const& request)
      override;

  Status DeleteEventThreatDetectionCustomModule(
      grpc::ClientContext& context, Options const& options,
      google::cloud::securitycentermanagement::v1::
          DeleteEventThreatDetectionCustomModuleRequest const& request)
      override;

  StatusOr<google::cloud::securitycentermanagement::v1::
               ValidateEventThreatDetectionCustomModuleResponse>
  ValidateEventThreatDetectionCustomModule(
      grpc::ClientContext& context, Options const& options,
      google::cloud::securitycentermanagement::v1::
          ValidateEventThreatDetectionCustomModuleRequest const& request)
      override;

  StatusOr<google::cloud::securitycentermanagement::v1::SecurityCenterService>
  GetSecurityCenterService(
      grpc::ClientContext& context, Options const& options,
      google::cloud::securitycentermanagement::v1::
          GetSecurityCenterServiceRequest const& request) override;

  StatusOr<google::cloud::securitycentermanagement::v1::
               ListSecurityCenterServicesResponse>
  ListSecurityCenterServices(
      grpc::ClientContext& context, Options const& options,
      google::cloud::securitycentermanagement::v1::
          ListSecurityCenterServicesRequest const& request) override;

  StatusOr<google::cloud::securitycentermanagement::v1::SecurityCenterService>
  UpdateSecurityCenterService(
      grpc::ClientContext& context, Options const& options,
      google::cloud::securitycentermanagement::v1::
          UpdateSecurityCenterServiceRequest const& request) override;

  StatusOr<google::cloud::location::ListLocationsResponse> ListLocations(
      grpc::ClientContext& context, Options const& options,
      google::cloud::location::ListLocationsRequest const& request) override;

  StatusOr<google::cloud::location::Location> GetLocation(
      grpc::ClientContext& context, Options const& options,
      google::cloud::location::GetLocationRequest const& request) override;

 private:
  std::unique_ptr<google::cloud::securitycentermanagement::v1::
                      SecurityCenterManagement::StubInterface>
      grpc_stub_;
  std::unique_ptr<google::cloud::location::Locations::StubInterface>
      locations_stub_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace securitycentermanagement_v1_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_SECURITYCENTERMANAGEMENT_V1_INTERNAL_SECURITY_CENTER_MANAGEMENT_STUB_H
