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
// source: google/cloud/bigquery/reservation/v1/reservation.proto

#include "google/cloud/bigquery/reservation/v1/internal/reservation_auth_decorator.h"
#include "google/cloud/bigquery/reservation/v1/reservation.grpc.pb.h"
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace bigquery_reservation_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

ReservationServiceAuth::ReservationServiceAuth(
    std::shared_ptr<google::cloud::internal::GrpcAuthenticationStrategy> auth,
    std::shared_ptr<ReservationServiceStub> child)
    : auth_(std::move(auth)), child_(std::move(child)) {}

StatusOr<google::cloud::bigquery::reservation::v1::Reservation>
ReservationServiceAuth::CreateReservation(
    grpc::ClientContext& context, Options const& options,
    google::cloud::bigquery::reservation::v1::CreateReservationRequest const&
        request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->CreateReservation(context, options, request);
}

StatusOr<google::cloud::bigquery::reservation::v1::ListReservationsResponse>
ReservationServiceAuth::ListReservations(
    grpc::ClientContext& context, Options const& options,
    google::cloud::bigquery::reservation::v1::ListReservationsRequest const&
        request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->ListReservations(context, options, request);
}

StatusOr<google::cloud::bigquery::reservation::v1::Reservation>
ReservationServiceAuth::GetReservation(
    grpc::ClientContext& context, Options const& options,
    google::cloud::bigquery::reservation::v1::GetReservationRequest const&
        request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->GetReservation(context, options, request);
}

Status ReservationServiceAuth::DeleteReservation(
    grpc::ClientContext& context, Options const& options,
    google::cloud::bigquery::reservation::v1::DeleteReservationRequest const&
        request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->DeleteReservation(context, options, request);
}

StatusOr<google::cloud::bigquery::reservation::v1::Reservation>
ReservationServiceAuth::UpdateReservation(
    grpc::ClientContext& context, Options const& options,
    google::cloud::bigquery::reservation::v1::UpdateReservationRequest const&
        request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->UpdateReservation(context, options, request);
}

StatusOr<google::cloud::bigquery::reservation::v1::CapacityCommitment>
ReservationServiceAuth::CreateCapacityCommitment(
    grpc::ClientContext& context, Options const& options,
    google::cloud::bigquery::reservation::v1::
        CreateCapacityCommitmentRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->CreateCapacityCommitment(context, options, request);
}

StatusOr<
    google::cloud::bigquery::reservation::v1::ListCapacityCommitmentsResponse>
ReservationServiceAuth::ListCapacityCommitments(
    grpc::ClientContext& context, Options const& options,
    google::cloud::bigquery::reservation::v1::
        ListCapacityCommitmentsRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->ListCapacityCommitments(context, options, request);
}

StatusOr<google::cloud::bigquery::reservation::v1::CapacityCommitment>
ReservationServiceAuth::GetCapacityCommitment(
    grpc::ClientContext& context, Options const& options,
    google::cloud::bigquery::reservation::v1::
        GetCapacityCommitmentRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->GetCapacityCommitment(context, options, request);
}

Status ReservationServiceAuth::DeleteCapacityCommitment(
    grpc::ClientContext& context, Options const& options,
    google::cloud::bigquery::reservation::v1::
        DeleteCapacityCommitmentRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->DeleteCapacityCommitment(context, options, request);
}

StatusOr<google::cloud::bigquery::reservation::v1::CapacityCommitment>
ReservationServiceAuth::UpdateCapacityCommitment(
    grpc::ClientContext& context, Options const& options,
    google::cloud::bigquery::reservation::v1::
        UpdateCapacityCommitmentRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->UpdateCapacityCommitment(context, options, request);
}

StatusOr<
    google::cloud::bigquery::reservation::v1::SplitCapacityCommitmentResponse>
ReservationServiceAuth::SplitCapacityCommitment(
    grpc::ClientContext& context, Options const& options,
    google::cloud::bigquery::reservation::v1::
        SplitCapacityCommitmentRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->SplitCapacityCommitment(context, options, request);
}

StatusOr<google::cloud::bigquery::reservation::v1::CapacityCommitment>
ReservationServiceAuth::MergeCapacityCommitments(
    grpc::ClientContext& context, Options const& options,
    google::cloud::bigquery::reservation::v1::
        MergeCapacityCommitmentsRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->MergeCapacityCommitments(context, options, request);
}

StatusOr<google::cloud::bigquery::reservation::v1::Assignment>
ReservationServiceAuth::CreateAssignment(
    grpc::ClientContext& context, Options const& options,
    google::cloud::bigquery::reservation::v1::CreateAssignmentRequest const&
        request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->CreateAssignment(context, options, request);
}

StatusOr<google::cloud::bigquery::reservation::v1::ListAssignmentsResponse>
ReservationServiceAuth::ListAssignments(
    grpc::ClientContext& context, Options const& options,
    google::cloud::bigquery::reservation::v1::ListAssignmentsRequest const&
        request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->ListAssignments(context, options, request);
}

Status ReservationServiceAuth::DeleteAssignment(
    grpc::ClientContext& context, Options const& options,
    google::cloud::bigquery::reservation::v1::DeleteAssignmentRequest const&
        request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->DeleteAssignment(context, options, request);
}

StatusOr<google::cloud::bigquery::reservation::v1::SearchAssignmentsResponse>
ReservationServiceAuth::SearchAssignments(
    grpc::ClientContext& context, Options const& options,
    google::cloud::bigquery::reservation::v1::SearchAssignmentsRequest const&
        request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->SearchAssignments(context, options, request);
}

StatusOr<google::cloud::bigquery::reservation::v1::SearchAllAssignmentsResponse>
ReservationServiceAuth::SearchAllAssignments(
    grpc::ClientContext& context, Options const& options,
    google::cloud::bigquery::reservation::v1::SearchAllAssignmentsRequest const&
        request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->SearchAllAssignments(context, options, request);
}

StatusOr<google::cloud::bigquery::reservation::v1::Assignment>
ReservationServiceAuth::MoveAssignment(
    grpc::ClientContext& context, Options const& options,
    google::cloud::bigquery::reservation::v1::MoveAssignmentRequest const&
        request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->MoveAssignment(context, options, request);
}

StatusOr<google::cloud::bigquery::reservation::v1::Assignment>
ReservationServiceAuth::UpdateAssignment(
    grpc::ClientContext& context, Options const& options,
    google::cloud::bigquery::reservation::v1::UpdateAssignmentRequest const&
        request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->UpdateAssignment(context, options, request);
}

StatusOr<google::cloud::bigquery::reservation::v1::BiReservation>
ReservationServiceAuth::GetBiReservation(
    grpc::ClientContext& context, Options const& options,
    google::cloud::bigquery::reservation::v1::GetBiReservationRequest const&
        request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->GetBiReservation(context, options, request);
}

StatusOr<google::cloud::bigquery::reservation::v1::BiReservation>
ReservationServiceAuth::UpdateBiReservation(
    grpc::ClientContext& context, Options const& options,
    google::cloud::bigquery::reservation::v1::UpdateBiReservationRequest const&
        request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->UpdateBiReservation(context, options, request);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace bigquery_reservation_v1_internal
}  // namespace cloud
}  // namespace google
