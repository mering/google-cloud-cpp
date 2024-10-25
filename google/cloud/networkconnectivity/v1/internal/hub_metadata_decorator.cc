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
// source: google/cloud/networkconnectivity/v1/hub.proto

#include "google/cloud/networkconnectivity/v1/internal/hub_metadata_decorator.h"
#include "google/cloud/networkconnectivity/v1/hub.grpc.pb.h"
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
namespace networkconnectivity_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

HubServiceMetadata::HubServiceMetadata(
    std::shared_ptr<HubServiceStub> child,
    std::multimap<std::string, std::string> fixed_metadata,
    std::string api_client_header)
    : child_(std::move(child)),
      fixed_metadata_(std::move(fixed_metadata)),
      api_client_header_(
          api_client_header.empty()
              ? google::cloud::internal::GeneratedLibClientHeader()
              : std::move(api_client_header)) {}

StatusOr<google::cloud::networkconnectivity::v1::ListHubsResponse>
HubServiceMetadata::ListHubs(
    grpc::ClientContext& context, Options const& options,
    google::cloud::networkconnectivity::v1::ListHubsRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->ListHubs(context, options, request);
}

StatusOr<google::cloud::networkconnectivity::v1::Hub>
HubServiceMetadata::GetHub(
    grpc::ClientContext& context, Options const& options,
    google::cloud::networkconnectivity::v1::GetHubRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->GetHub(context, options, request);
}

future<StatusOr<google::longrunning::Operation>>
HubServiceMetadata::AsyncCreateHub(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::networkconnectivity::v1::CreateHubRequest const& request) {
  SetMetadata(*context, *options,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->AsyncCreateHub(cq, std::move(context), std::move(options),
                                request);
}

StatusOr<google::longrunning::Operation> HubServiceMetadata::CreateHub(
    grpc::ClientContext& context, Options options,
    google::cloud::networkconnectivity::v1::CreateHubRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->CreateHub(context, options, request);
}

future<StatusOr<google::longrunning::Operation>>
HubServiceMetadata::AsyncUpdateHub(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::networkconnectivity::v1::UpdateHubRequest const& request) {
  SetMetadata(
      *context, *options,
      absl::StrCat("hub.name=", internal::UrlEncode(request.hub().name())));
  return child_->AsyncUpdateHub(cq, std::move(context), std::move(options),
                                request);
}

StatusOr<google::longrunning::Operation> HubServiceMetadata::UpdateHub(
    grpc::ClientContext& context, Options options,
    google::cloud::networkconnectivity::v1::UpdateHubRequest const& request) {
  SetMetadata(
      context, options,
      absl::StrCat("hub.name=", internal::UrlEncode(request.hub().name())));
  return child_->UpdateHub(context, options, request);
}

future<StatusOr<google::longrunning::Operation>>
HubServiceMetadata::AsyncDeleteHub(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::networkconnectivity::v1::DeleteHubRequest const& request) {
  SetMetadata(*context, *options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->AsyncDeleteHub(cq, std::move(context), std::move(options),
                                request);
}

StatusOr<google::longrunning::Operation> HubServiceMetadata::DeleteHub(
    grpc::ClientContext& context, Options options,
    google::cloud::networkconnectivity::v1::DeleteHubRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->DeleteHub(context, options, request);
}

StatusOr<google::cloud::networkconnectivity::v1::ListHubSpokesResponse>
HubServiceMetadata::ListHubSpokes(
    grpc::ClientContext& context, Options const& options,
    google::cloud::networkconnectivity::v1::ListHubSpokesRequest const&
        request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->ListHubSpokes(context, options, request);
}

StatusOr<google::cloud::networkconnectivity::v1::ListSpokesResponse>
HubServiceMetadata::ListSpokes(
    grpc::ClientContext& context, Options const& options,
    google::cloud::networkconnectivity::v1::ListSpokesRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->ListSpokes(context, options, request);
}

StatusOr<google::cloud::networkconnectivity::v1::Spoke>
HubServiceMetadata::GetSpoke(
    grpc::ClientContext& context, Options const& options,
    google::cloud::networkconnectivity::v1::GetSpokeRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->GetSpoke(context, options, request);
}

future<StatusOr<google::longrunning::Operation>>
HubServiceMetadata::AsyncCreateSpoke(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::networkconnectivity::v1::CreateSpokeRequest const& request) {
  SetMetadata(*context, *options,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->AsyncCreateSpoke(cq, std::move(context), std::move(options),
                                  request);
}

StatusOr<google::longrunning::Operation> HubServiceMetadata::CreateSpoke(
    grpc::ClientContext& context, Options options,
    google::cloud::networkconnectivity::v1::CreateSpokeRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->CreateSpoke(context, options, request);
}

future<StatusOr<google::longrunning::Operation>>
HubServiceMetadata::AsyncUpdateSpoke(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::networkconnectivity::v1::UpdateSpokeRequest const& request) {
  SetMetadata(
      *context, *options,
      absl::StrCat("spoke.name=", internal::UrlEncode(request.spoke().name())));
  return child_->AsyncUpdateSpoke(cq, std::move(context), std::move(options),
                                  request);
}

StatusOr<google::longrunning::Operation> HubServiceMetadata::UpdateSpoke(
    grpc::ClientContext& context, Options options,
    google::cloud::networkconnectivity::v1::UpdateSpokeRequest const& request) {
  SetMetadata(
      context, options,
      absl::StrCat("spoke.name=", internal::UrlEncode(request.spoke().name())));
  return child_->UpdateSpoke(context, options, request);
}

future<StatusOr<google::longrunning::Operation>>
HubServiceMetadata::AsyncRejectHubSpoke(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::networkconnectivity::v1::RejectHubSpokeRequest const&
        request) {
  SetMetadata(*context, *options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->AsyncRejectHubSpoke(cq, std::move(context), std::move(options),
                                     request);
}

StatusOr<google::longrunning::Operation> HubServiceMetadata::RejectHubSpoke(
    grpc::ClientContext& context, Options options,
    google::cloud::networkconnectivity::v1::RejectHubSpokeRequest const&
        request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->RejectHubSpoke(context, options, request);
}

future<StatusOr<google::longrunning::Operation>>
HubServiceMetadata::AsyncAcceptHubSpoke(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::networkconnectivity::v1::AcceptHubSpokeRequest const&
        request) {
  SetMetadata(*context, *options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->AsyncAcceptHubSpoke(cq, std::move(context), std::move(options),
                                     request);
}

StatusOr<google::longrunning::Operation> HubServiceMetadata::AcceptHubSpoke(
    grpc::ClientContext& context, Options options,
    google::cloud::networkconnectivity::v1::AcceptHubSpokeRequest const&
        request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->AcceptHubSpoke(context, options, request);
}

future<StatusOr<google::longrunning::Operation>>
HubServiceMetadata::AsyncDeleteSpoke(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::networkconnectivity::v1::DeleteSpokeRequest const& request) {
  SetMetadata(*context, *options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->AsyncDeleteSpoke(cq, std::move(context), std::move(options),
                                  request);
}

StatusOr<google::longrunning::Operation> HubServiceMetadata::DeleteSpoke(
    grpc::ClientContext& context, Options options,
    google::cloud::networkconnectivity::v1::DeleteSpokeRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->DeleteSpoke(context, options, request);
}

StatusOr<google::cloud::networkconnectivity::v1::RouteTable>
HubServiceMetadata::GetRouteTable(
    grpc::ClientContext& context, Options const& options,
    google::cloud::networkconnectivity::v1::GetRouteTableRequest const&
        request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->GetRouteTable(context, options, request);
}

StatusOr<google::cloud::networkconnectivity::v1::Route>
HubServiceMetadata::GetRoute(
    grpc::ClientContext& context, Options const& options,
    google::cloud::networkconnectivity::v1::GetRouteRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->GetRoute(context, options, request);
}

StatusOr<google::cloud::networkconnectivity::v1::ListRoutesResponse>
HubServiceMetadata::ListRoutes(
    grpc::ClientContext& context, Options const& options,
    google::cloud::networkconnectivity::v1::ListRoutesRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->ListRoutes(context, options, request);
}

StatusOr<google::cloud::networkconnectivity::v1::ListRouteTablesResponse>
HubServiceMetadata::ListRouteTables(
    grpc::ClientContext& context, Options const& options,
    google::cloud::networkconnectivity::v1::ListRouteTablesRequest const&
        request) {
  SetMetadata(context, options,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->ListRouteTables(context, options, request);
}

StatusOr<google::cloud::networkconnectivity::v1::Group>
HubServiceMetadata::GetGroup(
    grpc::ClientContext& context, Options const& options,
    google::cloud::networkconnectivity::v1::GetGroupRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->GetGroup(context, options, request);
}

StatusOr<google::cloud::networkconnectivity::v1::ListGroupsResponse>
HubServiceMetadata::ListGroups(
    grpc::ClientContext& context, Options const& options,
    google::cloud::networkconnectivity::v1::ListGroupsRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->ListGroups(context, options, request);
}

StatusOr<google::cloud::location::ListLocationsResponse>
HubServiceMetadata::ListLocations(
    grpc::ClientContext& context, Options const& options,
    google::cloud::location::ListLocationsRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->ListLocations(context, options, request);
}

StatusOr<google::cloud::location::Location> HubServiceMetadata::GetLocation(
    grpc::ClientContext& context, Options const& options,
    google::cloud::location::GetLocationRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->GetLocation(context, options, request);
}

StatusOr<google::iam::v1::Policy> HubServiceMetadata::SetIamPolicy(
    grpc::ClientContext& context, Options const& options,
    google::iam::v1::SetIamPolicyRequest const& request) {
  SetMetadata(
      context, options,
      absl::StrCat("resource=", internal::UrlEncode(request.resource())));
  return child_->SetIamPolicy(context, options, request);
}

StatusOr<google::iam::v1::Policy> HubServiceMetadata::GetIamPolicy(
    grpc::ClientContext& context, Options const& options,
    google::iam::v1::GetIamPolicyRequest const& request) {
  SetMetadata(
      context, options,
      absl::StrCat("resource=", internal::UrlEncode(request.resource())));
  return child_->GetIamPolicy(context, options, request);
}

StatusOr<google::iam::v1::TestIamPermissionsResponse>
HubServiceMetadata::TestIamPermissions(
    grpc::ClientContext& context, Options const& options,
    google::iam::v1::TestIamPermissionsRequest const& request) {
  SetMetadata(
      context, options,
      absl::StrCat("resource=", internal::UrlEncode(request.resource())));
  return child_->TestIamPermissions(context, options, request);
}

StatusOr<google::longrunning::ListOperationsResponse>
HubServiceMetadata::ListOperations(
    grpc::ClientContext& context, Options const& options,
    google::longrunning::ListOperationsRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->ListOperations(context, options, request);
}

StatusOr<google::longrunning::Operation> HubServiceMetadata::GetOperation(
    grpc::ClientContext& context, Options const& options,
    google::longrunning::GetOperationRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->GetOperation(context, options, request);
}

Status HubServiceMetadata::DeleteOperation(
    grpc::ClientContext& context, Options const& options,
    google::longrunning::DeleteOperationRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->DeleteOperation(context, options, request);
}

Status HubServiceMetadata::CancelOperation(
    grpc::ClientContext& context, Options const& options,
    google::longrunning::CancelOperationRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->CancelOperation(context, options, request);
}

future<StatusOr<google::longrunning::Operation>>
HubServiceMetadata::AsyncGetOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::longrunning::GetOperationRequest const& request) {
  SetMetadata(*context, *options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->AsyncGetOperation(cq, std::move(context), std::move(options),
                                   request);
}

future<Status> HubServiceMetadata::AsyncCancelOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::longrunning::CancelOperationRequest const& request) {
  SetMetadata(*context, *options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->AsyncCancelOperation(cq, std::move(context),
                                      std::move(options), request);
}

void HubServiceMetadata::SetMetadata(grpc::ClientContext& context,
                                     Options const& options,
                                     std::string const& request_params) {
  context.AddMetadata("x-goog-request-params", request_params);
  SetMetadata(context, options);
}

void HubServiceMetadata::SetMetadata(grpc::ClientContext& context,
                                     Options const& options) {
  google::cloud::internal::SetMetadata(context, options, fixed_metadata_,
                                       api_client_header_);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace networkconnectivity_v1_internal
}  // namespace cloud
}  // namespace google
