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
// source: google/cloud/servicehealth/v1/event_service.proto

#include "google/cloud/servicehealth/v1/internal/service_health_metadata_decorator.h"
#include "google/cloud/servicehealth/v1/event_service.grpc.pb.h"
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
namespace servicehealth_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

ServiceHealthMetadata::ServiceHealthMetadata(
    std::shared_ptr<ServiceHealthStub> child,
    std::multimap<std::string, std::string> fixed_metadata,
    std::string api_client_header)
    : child_(std::move(child)),
      fixed_metadata_(std::move(fixed_metadata)),
      api_client_header_(
          api_client_header.empty()
              ? google::cloud::internal::GeneratedLibClientHeader()
              : std::move(api_client_header)) {}

StatusOr<google::cloud::servicehealth::v1::ListEventsResponse>
ServiceHealthMetadata::ListEvents(
    grpc::ClientContext& context, Options const& options,
    google::cloud::servicehealth::v1::ListEventsRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->ListEvents(context, options, request);
}

StatusOr<google::cloud::servicehealth::v1::Event>
ServiceHealthMetadata::GetEvent(
    grpc::ClientContext& context, Options const& options,
    google::cloud::servicehealth::v1::GetEventRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->GetEvent(context, options, request);
}

StatusOr<google::cloud::servicehealth::v1::ListOrganizationEventsResponse>
ServiceHealthMetadata::ListOrganizationEvents(
    grpc::ClientContext& context, Options const& options,
    google::cloud::servicehealth::v1::ListOrganizationEventsRequest const&
        request) {
  SetMetadata(context, options,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->ListOrganizationEvents(context, options, request);
}

StatusOr<google::cloud::servicehealth::v1::OrganizationEvent>
ServiceHealthMetadata::GetOrganizationEvent(
    grpc::ClientContext& context, Options const& options,
    google::cloud::servicehealth::v1::GetOrganizationEventRequest const&
        request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->GetOrganizationEvent(context, options, request);
}

StatusOr<google::cloud::servicehealth::v1::ListOrganizationImpactsResponse>
ServiceHealthMetadata::ListOrganizationImpacts(
    grpc::ClientContext& context, Options const& options,
    google::cloud::servicehealth::v1::ListOrganizationImpactsRequest const&
        request) {
  SetMetadata(context, options,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->ListOrganizationImpacts(context, options, request);
}

StatusOr<google::cloud::servicehealth::v1::OrganizationImpact>
ServiceHealthMetadata::GetOrganizationImpact(
    grpc::ClientContext& context, Options const& options,
    google::cloud::servicehealth::v1::GetOrganizationImpactRequest const&
        request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->GetOrganizationImpact(context, options, request);
}

StatusOr<google::cloud::location::ListLocationsResponse>
ServiceHealthMetadata::ListLocations(
    grpc::ClientContext& context, Options const& options,
    google::cloud::location::ListLocationsRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->ListLocations(context, options, request);
}

StatusOr<google::cloud::location::Location> ServiceHealthMetadata::GetLocation(
    grpc::ClientContext& context, Options const& options,
    google::cloud::location::GetLocationRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->GetLocation(context, options, request);
}

void ServiceHealthMetadata::SetMetadata(grpc::ClientContext& context,
                                        Options const& options,
                                        std::string const& request_params) {
  context.AddMetadata("x-goog-request-params", request_params);
  SetMetadata(context, options);
}

void ServiceHealthMetadata::SetMetadata(grpc::ClientContext& context,
                                        Options const& options) {
  google::cloud::internal::SetMetadata(context, options, fixed_metadata_,
                                       api_client_header_);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace servicehealth_v1_internal
}  // namespace cloud
}  // namespace google
