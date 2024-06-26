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
// source: google/cloud/compute/reservations/v1/reservations.proto

#include "google/cloud/compute/reservations/v1/reservations_client.h"
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace compute_reservations_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

ReservationsClient::ReservationsClient(
    std::shared_ptr<ReservationsConnection> connection, Options opts)
    : connection_(std::move(connection)),
      options_(
          internal::MergeOptions(std::move(opts), connection_->options())) {}
ReservationsClient::~ReservationsClient() = default;

StreamRange<std::pair<std::string,
                      google::cloud::cpp::compute::v1::ReservationsScopedList>>
ReservationsClient::AggregatedListReservations(std::string const& project,
                                               Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::cpp::compute::reservations::v1::
      AggregatedListReservationsRequest request;
  request.set_project(project);
  return connection_->AggregatedListReservations(request);
}

StreamRange<std::pair<std::string,
                      google::cloud::cpp::compute::v1::ReservationsScopedList>>
ReservationsClient::AggregatedListReservations(
    google::cloud::cpp::compute::reservations::v1::
        AggregatedListReservationsRequest request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->AggregatedListReservations(std::move(request));
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
ReservationsClient::DeleteReservation(std::string const& project,
                                      std::string const& zone,
                                      std::string const& reservation,
                                      Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::cpp::compute::reservations::v1::DeleteReservationRequest
      request;
  request.set_project(project);
  request.set_zone(zone);
  request.set_reservation(reservation);
  return connection_->DeleteReservation(request);
}

StatusOr<google::cloud::cpp::compute::v1::Operation>
ReservationsClient::DeleteReservation(ExperimentalTag, NoAwaitTag,
                                      std::string const& project,
                                      std::string const& zone,
                                      std::string const& reservation,
                                      Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::cpp::compute::reservations::v1::DeleteReservationRequest
      request;
  request.set_project(project);
  request.set_zone(zone);
  request.set_reservation(reservation);
  return connection_->DeleteReservation(ExperimentalTag{}, NoAwaitTag{},
                                        request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
ReservationsClient::DeleteReservation(
    google::cloud::cpp::compute::reservations::v1::
        DeleteReservationRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->DeleteReservation(request);
}

StatusOr<google::cloud::cpp::compute::v1::Operation>
ReservationsClient::DeleteReservation(
    ExperimentalTag, NoAwaitTag,
    google::cloud::cpp::compute::reservations::v1::
        DeleteReservationRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->DeleteReservation(ExperimentalTag{}, NoAwaitTag{},
                                        request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
ReservationsClient::DeleteReservation(
    ExperimentalTag,
    google::cloud::cpp::compute::v1::Operation const& operation, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->DeleteReservation(ExperimentalTag{}, operation);
}

StatusOr<google::cloud::cpp::compute::v1::Reservation>
ReservationsClient::GetReservation(std::string const& project,
                                   std::string const& zone,
                                   std::string const& reservation,
                                   Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::cpp::compute::reservations::v1::GetReservationRequest request;
  request.set_project(project);
  request.set_zone(zone);
  request.set_reservation(reservation);
  return connection_->GetReservation(request);
}

StatusOr<google::cloud::cpp::compute::v1::Reservation>
ReservationsClient::GetReservation(
    google::cloud::cpp::compute::reservations::v1::GetReservationRequest const&
        request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->GetReservation(request);
}

StatusOr<google::cloud::cpp::compute::v1::Policy>
ReservationsClient::GetIamPolicy(std::string const& project,
                                 std::string const& zone,
                                 std::string const& resource, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::cpp::compute::reservations::v1::GetIamPolicyRequest request;
  request.set_project(project);
  request.set_zone(zone);
  request.set_resource(resource);
  return connection_->GetIamPolicy(request);
}

StatusOr<google::cloud::cpp::compute::v1::Policy>
ReservationsClient::GetIamPolicy(
    google::cloud::cpp::compute::reservations::v1::GetIamPolicyRequest const&
        request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->GetIamPolicy(request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
ReservationsClient::InsertReservation(
    std::string const& project, std::string const& zone,
    google::cloud::cpp::compute::v1::Reservation const& reservation_resource,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::cpp::compute::reservations::v1::InsertReservationRequest
      request;
  request.set_project(project);
  request.set_zone(zone);
  *request.mutable_reservation_resource() = reservation_resource;
  return connection_->InsertReservation(request);
}

StatusOr<google::cloud::cpp::compute::v1::Operation>
ReservationsClient::InsertReservation(
    ExperimentalTag, NoAwaitTag, std::string const& project,
    std::string const& zone,
    google::cloud::cpp::compute::v1::Reservation const& reservation_resource,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::cpp::compute::reservations::v1::InsertReservationRequest
      request;
  request.set_project(project);
  request.set_zone(zone);
  *request.mutable_reservation_resource() = reservation_resource;
  return connection_->InsertReservation(ExperimentalTag{}, NoAwaitTag{},
                                        request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
ReservationsClient::InsertReservation(
    google::cloud::cpp::compute::reservations::v1::
        InsertReservationRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->InsertReservation(request);
}

StatusOr<google::cloud::cpp::compute::v1::Operation>
ReservationsClient::InsertReservation(
    ExperimentalTag, NoAwaitTag,
    google::cloud::cpp::compute::reservations::v1::
        InsertReservationRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->InsertReservation(ExperimentalTag{}, NoAwaitTag{},
                                        request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
ReservationsClient::InsertReservation(
    ExperimentalTag,
    google::cloud::cpp::compute::v1::Operation const& operation, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->InsertReservation(ExperimentalTag{}, operation);
}

StreamRange<google::cloud::cpp::compute::v1::Reservation>
ReservationsClient::ListReservations(std::string const& project,
                                     std::string const& zone, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::cpp::compute::reservations::v1::ListReservationsRequest
      request;
  request.set_project(project);
  request.set_zone(zone);
  return connection_->ListReservations(request);
}

StreamRange<google::cloud::cpp::compute::v1::Reservation>
ReservationsClient::ListReservations(
    google::cloud::cpp::compute::reservations::v1::ListReservationsRequest
        request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->ListReservations(std::move(request));
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
ReservationsClient::Resize(
    std::string const& project, std::string const& zone,
    std::string const& reservation,
    google::cloud::cpp::compute::v1::ReservationsResizeRequest const&
        reservations_resize_request_resource,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::cpp::compute::reservations::v1::ResizeRequest request;
  request.set_project(project);
  request.set_zone(zone);
  request.set_reservation(reservation);
  *request.mutable_reservations_resize_request_resource() =
      reservations_resize_request_resource;
  return connection_->Resize(request);
}

StatusOr<google::cloud::cpp::compute::v1::Operation> ReservationsClient::Resize(
    ExperimentalTag, NoAwaitTag, std::string const& project,
    std::string const& zone, std::string const& reservation,
    google::cloud::cpp::compute::v1::ReservationsResizeRequest const&
        reservations_resize_request_resource,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::cpp::compute::reservations::v1::ResizeRequest request;
  request.set_project(project);
  request.set_zone(zone);
  request.set_reservation(reservation);
  *request.mutable_reservations_resize_request_resource() =
      reservations_resize_request_resource;
  return connection_->Resize(ExperimentalTag{}, NoAwaitTag{}, request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
ReservationsClient::Resize(
    google::cloud::cpp::compute::reservations::v1::ResizeRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->Resize(request);
}

StatusOr<google::cloud::cpp::compute::v1::Operation> ReservationsClient::Resize(
    ExperimentalTag, NoAwaitTag,
    google::cloud::cpp::compute::reservations::v1::ResizeRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->Resize(ExperimentalTag{}, NoAwaitTag{}, request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
ReservationsClient::Resize(
    ExperimentalTag,
    google::cloud::cpp::compute::v1::Operation const& operation, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->Resize(ExperimentalTag{}, operation);
}

StatusOr<google::cloud::cpp::compute::v1::Policy>
ReservationsClient::SetIamPolicy(
    std::string const& project, std::string const& zone,
    std::string const& resource,
    google::cloud::cpp::compute::v1::ZoneSetPolicyRequest const&
        zone_set_policy_request_resource,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::cpp::compute::reservations::v1::SetIamPolicyRequest request;
  request.set_project(project);
  request.set_zone(zone);
  request.set_resource(resource);
  *request.mutable_zone_set_policy_request_resource() =
      zone_set_policy_request_resource;
  return connection_->SetIamPolicy(request);
}

StatusOr<google::cloud::cpp::compute::v1::Policy>
ReservationsClient::SetIamPolicy(
    google::cloud::cpp::compute::reservations::v1::SetIamPolicyRequest const&
        request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->SetIamPolicy(request);
}

StatusOr<google::cloud::cpp::compute::v1::TestPermissionsResponse>
ReservationsClient::TestIamPermissions(
    std::string const& project, std::string const& zone,
    std::string const& resource,
    google::cloud::cpp::compute::v1::TestPermissionsRequest const&
        test_permissions_request_resource,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::cpp::compute::reservations::v1::TestIamPermissionsRequest
      request;
  request.set_project(project);
  request.set_zone(zone);
  request.set_resource(resource);
  *request.mutable_test_permissions_request_resource() =
      test_permissions_request_resource;
  return connection_->TestIamPermissions(request);
}

StatusOr<google::cloud::cpp::compute::v1::TestPermissionsResponse>
ReservationsClient::TestIamPermissions(
    google::cloud::cpp::compute::reservations::v1::
        TestIamPermissionsRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->TestIamPermissions(request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
ReservationsClient::UpdateReservation(
    std::string const& project, std::string const& zone,
    std::string const& reservation, std::string const& update_mask,
    google::cloud::cpp::compute::v1::Reservation const& reservation_resource,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::cpp::compute::reservations::v1::UpdateReservationRequest
      request;
  request.set_project(project);
  request.set_zone(zone);
  request.set_reservation(reservation);
  request.set_update_mask(update_mask);
  *request.mutable_reservation_resource() = reservation_resource;
  return connection_->UpdateReservation(request);
}

StatusOr<google::cloud::cpp::compute::v1::Operation>
ReservationsClient::UpdateReservation(
    ExperimentalTag, NoAwaitTag, std::string const& project,
    std::string const& zone, std::string const& reservation,
    std::string const& update_mask,
    google::cloud::cpp::compute::v1::Reservation const& reservation_resource,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::cpp::compute::reservations::v1::UpdateReservationRequest
      request;
  request.set_project(project);
  request.set_zone(zone);
  request.set_reservation(reservation);
  request.set_update_mask(update_mask);
  *request.mutable_reservation_resource() = reservation_resource;
  return connection_->UpdateReservation(ExperimentalTag{}, NoAwaitTag{},
                                        request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
ReservationsClient::UpdateReservation(
    google::cloud::cpp::compute::reservations::v1::
        UpdateReservationRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->UpdateReservation(request);
}

StatusOr<google::cloud::cpp::compute::v1::Operation>
ReservationsClient::UpdateReservation(
    ExperimentalTag, NoAwaitTag,
    google::cloud::cpp::compute::reservations::v1::
        UpdateReservationRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->UpdateReservation(ExperimentalTag{}, NoAwaitTag{},
                                        request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
ReservationsClient::UpdateReservation(
    ExperimentalTag,
    google::cloud::cpp::compute::v1::Operation const& operation, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->UpdateReservation(ExperimentalTag{}, operation);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_reservations_v1
}  // namespace cloud
}  // namespace google
