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
// source: google/cloud/aiplatform/v1/schedule_service.proto

#include "google/cloud/aiplatform/v1/internal/schedule_stub.h"
#include "google/cloud/grpc_error_delegate.h"
#include "google/cloud/status_or.h"
#include "google/cloud/aiplatform/v1/schedule_service.grpc.pb.h"
#include "google/longrunning/operations.grpc.pb.h"
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace aiplatform_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

ScheduleServiceStub::~ScheduleServiceStub() = default;

StatusOr<google::cloud::aiplatform::v1::Schedule>
DefaultScheduleServiceStub::CreateSchedule(
    grpc::ClientContext& context, Options const&,
    google::cloud::aiplatform::v1::CreateScheduleRequest const& request) {
  google::cloud::aiplatform::v1::Schedule response;
  auto status = grpc_stub_->CreateSchedule(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

future<StatusOr<google::longrunning::Operation>>
DefaultScheduleServiceStub::AsyncDeleteSchedule(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions,
    google::cloud::aiplatform::v1::DeleteScheduleRequest const& request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::aiplatform::v1::DeleteScheduleRequest,
      google::longrunning::Operation>(
      cq,
      [this](
          grpc::ClientContext* context,
          google::cloud::aiplatform::v1::DeleteScheduleRequest const& request,
          grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncDeleteSchedule(context, request, cq);
      },
      request, std::move(context));
}

StatusOr<google::longrunning::Operation>
DefaultScheduleServiceStub::DeleteSchedule(
    grpc::ClientContext& context, Options,
    google::cloud::aiplatform::v1::DeleteScheduleRequest const& request) {
  google::longrunning::Operation response;
  auto status = grpc_stub_->DeleteSchedule(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::aiplatform::v1::Schedule>
DefaultScheduleServiceStub::GetSchedule(
    grpc::ClientContext& context, Options const&,
    google::cloud::aiplatform::v1::GetScheduleRequest const& request) {
  google::cloud::aiplatform::v1::Schedule response;
  auto status = grpc_stub_->GetSchedule(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::aiplatform::v1::ListSchedulesResponse>
DefaultScheduleServiceStub::ListSchedules(
    grpc::ClientContext& context, Options const&,
    google::cloud::aiplatform::v1::ListSchedulesRequest const& request) {
  google::cloud::aiplatform::v1::ListSchedulesResponse response;
  auto status = grpc_stub_->ListSchedules(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

Status DefaultScheduleServiceStub::PauseSchedule(
    grpc::ClientContext& context, Options const&,
    google::cloud::aiplatform::v1::PauseScheduleRequest const& request) {
  google::protobuf::Empty response;
  auto status = grpc_stub_->PauseSchedule(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return google::cloud::Status();
}

Status DefaultScheduleServiceStub::ResumeSchedule(
    grpc::ClientContext& context, Options const&,
    google::cloud::aiplatform::v1::ResumeScheduleRequest const& request) {
  google::protobuf::Empty response;
  auto status = grpc_stub_->ResumeSchedule(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return google::cloud::Status();
}

StatusOr<google::cloud::aiplatform::v1::Schedule>
DefaultScheduleServiceStub::UpdateSchedule(
    grpc::ClientContext& context, Options const&,
    google::cloud::aiplatform::v1::UpdateScheduleRequest const& request) {
  google::cloud::aiplatform::v1::Schedule response;
  auto status = grpc_stub_->UpdateSchedule(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::location::ListLocationsResponse>
DefaultScheduleServiceStub::ListLocations(
    grpc::ClientContext& context, Options const&,
    google::cloud::location::ListLocationsRequest const& request) {
  google::cloud::location::ListLocationsResponse response;
  auto status = locations_stub_->ListLocations(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::location::Location>
DefaultScheduleServiceStub::GetLocation(
    grpc::ClientContext& context, Options const&,
    google::cloud::location::GetLocationRequest const& request) {
  google::cloud::location::Location response;
  auto status = locations_stub_->GetLocation(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::iam::v1::Policy> DefaultScheduleServiceStub::SetIamPolicy(
    grpc::ClientContext& context, Options const&,
    google::iam::v1::SetIamPolicyRequest const& request) {
  google::iam::v1::Policy response;
  auto status = iampolicy_stub_->SetIamPolicy(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::iam::v1::Policy> DefaultScheduleServiceStub::GetIamPolicy(
    grpc::ClientContext& context, Options const&,
    google::iam::v1::GetIamPolicyRequest const& request) {
  google::iam::v1::Policy response;
  auto status = iampolicy_stub_->GetIamPolicy(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::iam::v1::TestIamPermissionsResponse>
DefaultScheduleServiceStub::TestIamPermissions(
    grpc::ClientContext& context, Options const&,
    google::iam::v1::TestIamPermissionsRequest const& request) {
  google::iam::v1::TestIamPermissionsResponse response;
  auto status =
      iampolicy_stub_->TestIamPermissions(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::longrunning::ListOperationsResponse>
DefaultScheduleServiceStub::ListOperations(
    grpc::ClientContext& context, Options const&,
    google::longrunning::ListOperationsRequest const& request) {
  google::longrunning::ListOperationsResponse response;
  auto status = operations_stub_->ListOperations(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::longrunning::Operation>
DefaultScheduleServiceStub::GetOperation(
    grpc::ClientContext& context, Options const&,
    google::longrunning::GetOperationRequest const& request) {
  google::longrunning::Operation response;
  auto status = operations_stub_->GetOperation(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

Status DefaultScheduleServiceStub::DeleteOperation(
    grpc::ClientContext& context, Options const&,
    google::longrunning::DeleteOperationRequest const& request) {
  google::protobuf::Empty response;
  auto status = operations_stub_->DeleteOperation(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return google::cloud::Status();
}

Status DefaultScheduleServiceStub::CancelOperation(
    grpc::ClientContext& context, Options const&,
    google::longrunning::CancelOperationRequest const& request) {
  google::protobuf::Empty response;
  auto status = operations_stub_->CancelOperation(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return google::cloud::Status();
}

StatusOr<google::longrunning::Operation>
DefaultScheduleServiceStub::WaitOperation(
    grpc::ClientContext& context, Options const&,
    google::longrunning::WaitOperationRequest const& request) {
  google::longrunning::Operation response;
  auto status = operations_stub_->WaitOperation(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

future<StatusOr<google::longrunning::Operation>>
DefaultScheduleServiceStub::AsyncGetOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    // NOLINTNEXTLINE(performance-unnecessary-value-param)
    google::cloud::internal::ImmutableOptions,
    google::longrunning::GetOperationRequest const& request) {
  return internal::MakeUnaryRpcImpl<google::longrunning::GetOperationRequest,
                                    google::longrunning::Operation>(
      cq,
      [this](grpc::ClientContext* context,
             google::longrunning::GetOperationRequest const& request,
             grpc::CompletionQueue* cq) {
        return operations_->AsyncGetOperation(context, request, cq);
      },
      request, std::move(context));
}

future<Status> DefaultScheduleServiceStub::AsyncCancelOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    // NOLINTNEXTLINE(performance-unnecessary-value-param)
    google::cloud::internal::ImmutableOptions,
    google::longrunning::CancelOperationRequest const& request) {
  return internal::MakeUnaryRpcImpl<google::longrunning::CancelOperationRequest,
                                    google::protobuf::Empty>(
             cq,
             [this](grpc::ClientContext* context,
                    google::longrunning::CancelOperationRequest const& request,
                    grpc::CompletionQueue* cq) {
               return operations_->AsyncCancelOperation(context, request, cq);
             },
             request, std::move(context))
      .then([](future<StatusOr<google::protobuf::Empty>> f) {
        return f.get().status();
      });
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace aiplatform_v1_internal
}  // namespace cloud
}  // namespace google
