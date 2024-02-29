// Copyright 2021 Google LLC
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
// source: google/cloud/pubsublite/v1/admin.proto

#include "google/cloud/pubsublite/internal/admin_tracing_stub.h"
#include "google/cloud/internal/grpc_opentelemetry.h"
#include <utility>

namespace google {
namespace cloud {
namespace pubsublite_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

AdminServiceTracingStub::AdminServiceTracingStub(
    std::shared_ptr<AdminServiceStub> child)
    : child_(std::move(child)), propagator_(internal::MakePropagator()) {}

StatusOr<google::cloud::pubsublite::v1::Topic>
AdminServiceTracingStub::CreateTopic(
    grpc::ClientContext& context, Options const& options,
    google::cloud::pubsublite::v1::CreateTopicRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.cloud.pubsublite.v1.AdminService",
                                     "CreateTopic");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->CreateTopic(context, options, request));
}

StatusOr<google::cloud::pubsublite::v1::Topic>
AdminServiceTracingStub::GetTopic(
    grpc::ClientContext& context, Options const& options,
    google::cloud::pubsublite::v1::GetTopicRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.cloud.pubsublite.v1.AdminService",
                                     "GetTopic");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->GetTopic(context, options, request));
}

StatusOr<google::cloud::pubsublite::v1::TopicPartitions>
AdminServiceTracingStub::GetTopicPartitions(
    grpc::ClientContext& context, Options const& options,
    google::cloud::pubsublite::v1::GetTopicPartitionsRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.cloud.pubsublite.v1.AdminService",
                                     "GetTopicPartitions");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(
      context, *span, child_->GetTopicPartitions(context, options, request));
}

StatusOr<google::cloud::pubsublite::v1::ListTopicsResponse>
AdminServiceTracingStub::ListTopics(
    grpc::ClientContext& context, Options const& options,
    google::cloud::pubsublite::v1::ListTopicsRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.cloud.pubsublite.v1.AdminService",
                                     "ListTopics");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->ListTopics(context, options, request));
}

StatusOr<google::cloud::pubsublite::v1::Topic>
AdminServiceTracingStub::UpdateTopic(
    grpc::ClientContext& context, Options const& options,
    google::cloud::pubsublite::v1::UpdateTopicRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.cloud.pubsublite.v1.AdminService",
                                     "UpdateTopic");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->UpdateTopic(context, options, request));
}

Status AdminServiceTracingStub::DeleteTopic(
    grpc::ClientContext& context, Options const& options,
    google::cloud::pubsublite::v1::DeleteTopicRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.cloud.pubsublite.v1.AdminService",
                                     "DeleteTopic");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->DeleteTopic(context, options, request));
}

StatusOr<google::cloud::pubsublite::v1::ListTopicSubscriptionsResponse>
AdminServiceTracingStub::ListTopicSubscriptions(
    grpc::ClientContext& context, Options const& options,
    google::cloud::pubsublite::v1::ListTopicSubscriptionsRequest const&
        request) {
  auto span = internal::MakeSpanGrpc("google.cloud.pubsublite.v1.AdminService",
                                     "ListTopicSubscriptions");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(
      context, *span,
      child_->ListTopicSubscriptions(context, options, request));
}

StatusOr<google::cloud::pubsublite::v1::Subscription>
AdminServiceTracingStub::CreateSubscription(
    grpc::ClientContext& context, Options const& options,
    google::cloud::pubsublite::v1::CreateSubscriptionRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.cloud.pubsublite.v1.AdminService",
                                     "CreateSubscription");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(
      context, *span, child_->CreateSubscription(context, options, request));
}

StatusOr<google::cloud::pubsublite::v1::Subscription>
AdminServiceTracingStub::GetSubscription(
    grpc::ClientContext& context, Options const& options,
    google::cloud::pubsublite::v1::GetSubscriptionRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.cloud.pubsublite.v1.AdminService",
                                     "GetSubscription");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->GetSubscription(context, options, request));
}

StatusOr<google::cloud::pubsublite::v1::ListSubscriptionsResponse>
AdminServiceTracingStub::ListSubscriptions(
    grpc::ClientContext& context, Options const& options,
    google::cloud::pubsublite::v1::ListSubscriptionsRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.cloud.pubsublite.v1.AdminService",
                                     "ListSubscriptions");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(
      context, *span, child_->ListSubscriptions(context, options, request));
}

StatusOr<google::cloud::pubsublite::v1::Subscription>
AdminServiceTracingStub::UpdateSubscription(
    grpc::ClientContext& context, Options const& options,
    google::cloud::pubsublite::v1::UpdateSubscriptionRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.cloud.pubsublite.v1.AdminService",
                                     "UpdateSubscription");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(
      context, *span, child_->UpdateSubscription(context, options, request));
}

Status AdminServiceTracingStub::DeleteSubscription(
    grpc::ClientContext& context, Options const& options,
    google::cloud::pubsublite::v1::DeleteSubscriptionRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.cloud.pubsublite.v1.AdminService",
                                     "DeleteSubscription");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(
      context, *span, child_->DeleteSubscription(context, options, request));
}

future<StatusOr<google::longrunning::Operation>>
AdminServiceTracingStub::AsyncSeekSubscription(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::pubsublite::v1::SeekSubscriptionRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.cloud.pubsublite.v1.AdminService",
                                     "SeekSubscription");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto f =
      child_->AsyncSeekSubscription(cq, context, std::move(options), request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

StatusOr<google::cloud::pubsublite::v1::Reservation>
AdminServiceTracingStub::CreateReservation(
    grpc::ClientContext& context, Options const& options,
    google::cloud::pubsublite::v1::CreateReservationRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.cloud.pubsublite.v1.AdminService",
                                     "CreateReservation");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(
      context, *span, child_->CreateReservation(context, options, request));
}

StatusOr<google::cloud::pubsublite::v1::Reservation>
AdminServiceTracingStub::GetReservation(
    grpc::ClientContext& context, Options const& options,
    google::cloud::pubsublite::v1::GetReservationRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.cloud.pubsublite.v1.AdminService",
                                     "GetReservation");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->GetReservation(context, options, request));
}

StatusOr<google::cloud::pubsublite::v1::ListReservationsResponse>
AdminServiceTracingStub::ListReservations(
    grpc::ClientContext& context, Options const& options,
    google::cloud::pubsublite::v1::ListReservationsRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.cloud.pubsublite.v1.AdminService",
                                     "ListReservations");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->ListReservations(context, options, request));
}

StatusOr<google::cloud::pubsublite::v1::Reservation>
AdminServiceTracingStub::UpdateReservation(
    grpc::ClientContext& context, Options const& options,
    google::cloud::pubsublite::v1::UpdateReservationRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.cloud.pubsublite.v1.AdminService",
                                     "UpdateReservation");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(
      context, *span, child_->UpdateReservation(context, options, request));
}

Status AdminServiceTracingStub::DeleteReservation(
    grpc::ClientContext& context, Options const& options,
    google::cloud::pubsublite::v1::DeleteReservationRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.cloud.pubsublite.v1.AdminService",
                                     "DeleteReservation");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(
      context, *span, child_->DeleteReservation(context, options, request));
}

StatusOr<google::cloud::pubsublite::v1::ListReservationTopicsResponse>
AdminServiceTracingStub::ListReservationTopics(
    grpc::ClientContext& context, Options const& options,
    google::cloud::pubsublite::v1::ListReservationTopicsRequest const&
        request) {
  auto span = internal::MakeSpanGrpc("google.cloud.pubsublite.v1.AdminService",
                                     "ListReservationTopics");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(
      context, *span, child_->ListReservationTopics(context, options, request));
}

future<StatusOr<google::cloud::pubsublite::v1::TopicPartitions>>
AdminServiceTracingStub::AsyncGetTopicPartitions(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::pubsublite::v1::GetTopicPartitionsRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.cloud.pubsublite.v1.AdminService",
                                     "GetTopicPartitions");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto f =
      child_->AsyncGetTopicPartitions(cq, context, std::move(options), request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

future<StatusOr<google::longrunning::Operation>>
AdminServiceTracingStub::AsyncGetOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::longrunning::GetOperationRequest const& request) {
  auto span =
      internal::MakeSpanGrpc("google.longrunning.Operations", "GetOperation");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto f = child_->AsyncGetOperation(cq, context, std::move(options), request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

future<Status> AdminServiceTracingStub::AsyncCancelOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::longrunning::CancelOperationRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.longrunning.Operations",
                                     "CancelOperation");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto f =
      child_->AsyncCancelOperation(cq, context, std::move(options), request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

std::shared_ptr<AdminServiceStub> MakeAdminServiceTracingStub(
    std::shared_ptr<AdminServiceStub> stub) {
#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
  return std::make_shared<AdminServiceTracingStub>(std::move(stub));
#else
  return stub;
#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace pubsublite_internal
}  // namespace cloud
}  // namespace google
