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

#include "google/cloud/securitycentermanagement/v1/internal/security_center_management_metadata_decorator.h"
#include "google/cloud/securitycentermanagement/v1/security_center_management.grpc.pb.h"
#include "google/cloud/grpc_options.h"
#include "google/cloud/internal/absl_str_cat_quiet.h"
#include "google/cloud/internal/api_client_header.h"
#include "google/cloud/internal/url_encode.h"
#include "google/cloud/status_or.h"
#include <memory>
#include <string>
#include <utility>
#include <vector>

namespace google {
namespace cloud {
namespace securitycentermanagement_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

SecurityCenterManagementMetadata::SecurityCenterManagementMetadata(
    std::shared_ptr<SecurityCenterManagementStub> child,
    std::multimap<std::string, std::string> fixed_metadata,
    std::string api_client_header)
    : child_(std::move(child)),
      fixed_metadata_(std::move(fixed_metadata)),
      api_client_header_(
          api_client_header.empty()
              ? google::cloud::internal::GeneratedLibClientHeader()
              : std::move(api_client_header)) {}

StatusOr<google::cloud::securitycentermanagement::v1::
             ListEffectiveSecurityHealthAnalyticsCustomModulesResponse>
SecurityCenterManagementMetadata::
    ListEffectiveSecurityHealthAnalyticsCustomModules(
        grpc::ClientContext& context, Options const& options,
        google::cloud::securitycentermanagement::v1::
            ListEffectiveSecurityHealthAnalyticsCustomModulesRequest const&
                request) {
  SetMetadata(context, options,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->ListEffectiveSecurityHealthAnalyticsCustomModules(
      context, options, request);
}

StatusOr<google::cloud::securitycentermanagement::v1::
             EffectiveSecurityHealthAnalyticsCustomModule>
SecurityCenterManagementMetadata::
    GetEffectiveSecurityHealthAnalyticsCustomModule(
        grpc::ClientContext& context, Options const& options,
        google::cloud::securitycentermanagement::v1::
            GetEffectiveSecurityHealthAnalyticsCustomModuleRequest const&
                request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->GetEffectiveSecurityHealthAnalyticsCustomModule(
      context, options, request);
}

StatusOr<google::cloud::securitycentermanagement::v1::
             ListSecurityHealthAnalyticsCustomModulesResponse>
SecurityCenterManagementMetadata::ListSecurityHealthAnalyticsCustomModules(
    grpc::ClientContext& context, Options const& options,
    google::cloud::securitycentermanagement::v1::
        ListSecurityHealthAnalyticsCustomModulesRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->ListSecurityHealthAnalyticsCustomModules(context, options,
                                                          request);
}

StatusOr<google::cloud::securitycentermanagement::v1::
             ListDescendantSecurityHealthAnalyticsCustomModulesResponse>
SecurityCenterManagementMetadata::
    ListDescendantSecurityHealthAnalyticsCustomModules(
        grpc::ClientContext& context, Options const& options,
        google::cloud::securitycentermanagement::v1::
            ListDescendantSecurityHealthAnalyticsCustomModulesRequest const&
                request) {
  SetMetadata(context, options,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->ListDescendantSecurityHealthAnalyticsCustomModules(
      context, options, request);
}

StatusOr<google::cloud::securitycentermanagement::v1::
             SecurityHealthAnalyticsCustomModule>
SecurityCenterManagementMetadata::GetSecurityHealthAnalyticsCustomModule(
    grpc::ClientContext& context, Options const& options,
    google::cloud::securitycentermanagement::v1::
        GetSecurityHealthAnalyticsCustomModuleRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->GetSecurityHealthAnalyticsCustomModule(context, options,
                                                        request);
}

StatusOr<google::cloud::securitycentermanagement::v1::
             SecurityHealthAnalyticsCustomModule>
SecurityCenterManagementMetadata::CreateSecurityHealthAnalyticsCustomModule(
    grpc::ClientContext& context, Options const& options,
    google::cloud::securitycentermanagement::v1::
        CreateSecurityHealthAnalyticsCustomModuleRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->CreateSecurityHealthAnalyticsCustomModule(context, options,
                                                           request);
}

StatusOr<google::cloud::securitycentermanagement::v1::
             SecurityHealthAnalyticsCustomModule>
SecurityCenterManagementMetadata::UpdateSecurityHealthAnalyticsCustomModule(
    grpc::ClientContext& context, Options const& options,
    google::cloud::securitycentermanagement::v1::
        UpdateSecurityHealthAnalyticsCustomModuleRequest const& request) {
  SetMetadata(
      context, options,
      absl::StrCat(
          "security_health_analytics_custom_module.name=",
          internal::UrlEncode(
              request.security_health_analytics_custom_module().name())));
  return child_->UpdateSecurityHealthAnalyticsCustomModule(context, options,
                                                           request);
}

Status
SecurityCenterManagementMetadata::DeleteSecurityHealthAnalyticsCustomModule(
    grpc::ClientContext& context, Options const& options,
    google::cloud::securitycentermanagement::v1::
        DeleteSecurityHealthAnalyticsCustomModuleRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->DeleteSecurityHealthAnalyticsCustomModule(context, options,
                                                           request);
}

StatusOr<google::cloud::securitycentermanagement::v1::
             SimulateSecurityHealthAnalyticsCustomModuleResponse>
SecurityCenterManagementMetadata::SimulateSecurityHealthAnalyticsCustomModule(
    grpc::ClientContext& context, Options const& options,
    google::cloud::securitycentermanagement::v1::
        SimulateSecurityHealthAnalyticsCustomModuleRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->SimulateSecurityHealthAnalyticsCustomModule(context, options,
                                                             request);
}

StatusOr<google::cloud::securitycentermanagement::v1::
             ListEffectiveEventThreatDetectionCustomModulesResponse>
SecurityCenterManagementMetadata::
    ListEffectiveEventThreatDetectionCustomModules(
        grpc::ClientContext& context, Options const& options,
        google::cloud::securitycentermanagement::v1::
            ListEffectiveEventThreatDetectionCustomModulesRequest const&
                request) {
  SetMetadata(context, options,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->ListEffectiveEventThreatDetectionCustomModules(
      context, options, request);
}

StatusOr<google::cloud::securitycentermanagement::v1::
             EffectiveEventThreatDetectionCustomModule>
SecurityCenterManagementMetadata::GetEffectiveEventThreatDetectionCustomModule(
    grpc::ClientContext& context, Options const& options,
    google::cloud::securitycentermanagement::v1::
        GetEffectiveEventThreatDetectionCustomModuleRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->GetEffectiveEventThreatDetectionCustomModule(context, options,
                                                              request);
}

StatusOr<google::cloud::securitycentermanagement::v1::
             ListEventThreatDetectionCustomModulesResponse>
SecurityCenterManagementMetadata::ListEventThreatDetectionCustomModules(
    grpc::ClientContext& context, Options const& options,
    google::cloud::securitycentermanagement::v1::
        ListEventThreatDetectionCustomModulesRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->ListEventThreatDetectionCustomModules(context, options,
                                                       request);
}

StatusOr<google::cloud::securitycentermanagement::v1::
             ListDescendantEventThreatDetectionCustomModulesResponse>
SecurityCenterManagementMetadata::
    ListDescendantEventThreatDetectionCustomModules(
        grpc::ClientContext& context, Options const& options,
        google::cloud::securitycentermanagement::v1::
            ListDescendantEventThreatDetectionCustomModulesRequest const&
                request) {
  SetMetadata(context, options,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->ListDescendantEventThreatDetectionCustomModules(
      context, options, request);
}

StatusOr<google::cloud::securitycentermanagement::v1::
             EventThreatDetectionCustomModule>
SecurityCenterManagementMetadata::GetEventThreatDetectionCustomModule(
    grpc::ClientContext& context, Options const& options,
    google::cloud::securitycentermanagement::v1::
        GetEventThreatDetectionCustomModuleRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->GetEventThreatDetectionCustomModule(context, options, request);
}

StatusOr<google::cloud::securitycentermanagement::v1::
             EventThreatDetectionCustomModule>
SecurityCenterManagementMetadata::CreateEventThreatDetectionCustomModule(
    grpc::ClientContext& context, Options const& options,
    google::cloud::securitycentermanagement::v1::
        CreateEventThreatDetectionCustomModuleRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->CreateEventThreatDetectionCustomModule(context, options,
                                                        request);
}

StatusOr<google::cloud::securitycentermanagement::v1::
             EventThreatDetectionCustomModule>
SecurityCenterManagementMetadata::UpdateEventThreatDetectionCustomModule(
    grpc::ClientContext& context, Options const& options,
    google::cloud::securitycentermanagement::v1::
        UpdateEventThreatDetectionCustomModuleRequest const& request) {
  SetMetadata(
      context, options,
      absl::StrCat("event_threat_detection_custom_module.name=",
                   internal::UrlEncode(
                       request.event_threat_detection_custom_module().name())));
  return child_->UpdateEventThreatDetectionCustomModule(context, options,
                                                        request);
}

Status SecurityCenterManagementMetadata::DeleteEventThreatDetectionCustomModule(
    grpc::ClientContext& context, Options const& options,
    google::cloud::securitycentermanagement::v1::
        DeleteEventThreatDetectionCustomModuleRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->DeleteEventThreatDetectionCustomModule(context, options,
                                                        request);
}

StatusOr<google::cloud::securitycentermanagement::v1::
             ValidateEventThreatDetectionCustomModuleResponse>
SecurityCenterManagementMetadata::ValidateEventThreatDetectionCustomModule(
    grpc::ClientContext& context, Options const& options,
    google::cloud::securitycentermanagement::v1::
        ValidateEventThreatDetectionCustomModuleRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->ValidateEventThreatDetectionCustomModule(context, options,
                                                          request);
}

StatusOr<google::cloud::securitycentermanagement::v1::SecurityCenterService>
SecurityCenterManagementMetadata::GetSecurityCenterService(
    grpc::ClientContext& context, Options const& options,
    google::cloud::securitycentermanagement::v1::
        GetSecurityCenterServiceRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->GetSecurityCenterService(context, options, request);
}

StatusOr<google::cloud::securitycentermanagement::v1::
             ListSecurityCenterServicesResponse>
SecurityCenterManagementMetadata::ListSecurityCenterServices(
    grpc::ClientContext& context, Options const& options,
    google::cloud::securitycentermanagement::v1::
        ListSecurityCenterServicesRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->ListSecurityCenterServices(context, options, request);
}

StatusOr<google::cloud::securitycentermanagement::v1::SecurityCenterService>
SecurityCenterManagementMetadata::UpdateSecurityCenterService(
    grpc::ClientContext& context, Options const& options,
    google::cloud::securitycentermanagement::v1::
        UpdateSecurityCenterServiceRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("security_center_service.name=",
                           internal::UrlEncode(
                               request.security_center_service().name())));
  return child_->UpdateSecurityCenterService(context, options, request);
}

StatusOr<google::cloud::location::ListLocationsResponse>
SecurityCenterManagementMetadata::ListLocations(
    grpc::ClientContext& context, Options const& options,
    google::cloud::location::ListLocationsRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->ListLocations(context, options, request);
}

StatusOr<google::cloud::location::Location>
SecurityCenterManagementMetadata::GetLocation(
    grpc::ClientContext& context, Options const& options,
    google::cloud::location::GetLocationRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->GetLocation(context, options, request);
}

void SecurityCenterManagementMetadata::SetMetadata(
    grpc::ClientContext& context, Options const& options,
    std::string const& request_params) {
  context.AddMetadata("x-goog-request-params", request_params);
  SetMetadata(context, options);
}

void SecurityCenterManagementMetadata::SetMetadata(grpc::ClientContext& context,
                                                   Options const& options) {
  google::cloud::internal::SetMetadata(context, options, fixed_metadata_,
                                       api_client_header_);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace securitycentermanagement_v1_internal
}  // namespace cloud
}  // namespace google
