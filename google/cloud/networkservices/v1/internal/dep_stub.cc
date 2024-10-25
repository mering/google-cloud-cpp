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
// source: google/cloud/networkservices/v1/dep.proto

#include "google/cloud/networkservices/v1/internal/dep_stub.h"
#include "google/cloud/networkservices/v1/dep.grpc.pb.h"
#include "google/cloud/grpc_error_delegate.h"
#include "google/cloud/status_or.h"
#include "google/longrunning/operations.grpc.pb.h"
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace networkservices_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

DepServiceStub::~DepServiceStub() = default;

StatusOr<google::cloud::networkservices::v1::ListLbTrafficExtensionsResponse>
DefaultDepServiceStub::ListLbTrafficExtensions(
    grpc::ClientContext& context, Options const&,
    google::cloud::networkservices::v1::ListLbTrafficExtensionsRequest const&
        request) {
  google::cloud::networkservices::v1::ListLbTrafficExtensionsResponse response;
  auto status =
      grpc_stub_->ListLbTrafficExtensions(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::networkservices::v1::LbTrafficExtension>
DefaultDepServiceStub::GetLbTrafficExtension(
    grpc::ClientContext& context, Options const&,
    google::cloud::networkservices::v1::GetLbTrafficExtensionRequest const&
        request) {
  google::cloud::networkservices::v1::LbTrafficExtension response;
  auto status = grpc_stub_->GetLbTrafficExtension(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

future<StatusOr<google::longrunning::Operation>>
DefaultDepServiceStub::AsyncCreateLbTrafficExtension(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions,
    google::cloud::networkservices::v1::CreateLbTrafficExtensionRequest const&
        request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::networkservices::v1::CreateLbTrafficExtensionRequest,
      google::longrunning::Operation>(
      cq,
      [this](grpc::ClientContext* context,
             google::cloud::networkservices::v1::
                 CreateLbTrafficExtensionRequest const& request,
             grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncCreateLbTrafficExtension(context, request, cq);
      },
      request, std::move(context));
}

StatusOr<google::longrunning::Operation>
DefaultDepServiceStub::CreateLbTrafficExtension(
    grpc::ClientContext& context, Options,
    google::cloud::networkservices::v1::CreateLbTrafficExtensionRequest const&
        request) {
  google::longrunning::Operation response;
  auto status =
      grpc_stub_->CreateLbTrafficExtension(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

future<StatusOr<google::longrunning::Operation>>
DefaultDepServiceStub::AsyncUpdateLbTrafficExtension(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions,
    google::cloud::networkservices::v1::UpdateLbTrafficExtensionRequest const&
        request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::networkservices::v1::UpdateLbTrafficExtensionRequest,
      google::longrunning::Operation>(
      cq,
      [this](grpc::ClientContext* context,
             google::cloud::networkservices::v1::
                 UpdateLbTrafficExtensionRequest const& request,
             grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncUpdateLbTrafficExtension(context, request, cq);
      },
      request, std::move(context));
}

StatusOr<google::longrunning::Operation>
DefaultDepServiceStub::UpdateLbTrafficExtension(
    grpc::ClientContext& context, Options,
    google::cloud::networkservices::v1::UpdateLbTrafficExtensionRequest const&
        request) {
  google::longrunning::Operation response;
  auto status =
      grpc_stub_->UpdateLbTrafficExtension(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

future<StatusOr<google::longrunning::Operation>>
DefaultDepServiceStub::AsyncDeleteLbTrafficExtension(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions,
    google::cloud::networkservices::v1::DeleteLbTrafficExtensionRequest const&
        request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::networkservices::v1::DeleteLbTrafficExtensionRequest,
      google::longrunning::Operation>(
      cq,
      [this](grpc::ClientContext* context,
             google::cloud::networkservices::v1::
                 DeleteLbTrafficExtensionRequest const& request,
             grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncDeleteLbTrafficExtension(context, request, cq);
      },
      request, std::move(context));
}

StatusOr<google::longrunning::Operation>
DefaultDepServiceStub::DeleteLbTrafficExtension(
    grpc::ClientContext& context, Options,
    google::cloud::networkservices::v1::DeleteLbTrafficExtensionRequest const&
        request) {
  google::longrunning::Operation response;
  auto status =
      grpc_stub_->DeleteLbTrafficExtension(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::networkservices::v1::ListLbRouteExtensionsResponse>
DefaultDepServiceStub::ListLbRouteExtensions(
    grpc::ClientContext& context, Options const&,
    google::cloud::networkservices::v1::ListLbRouteExtensionsRequest const&
        request) {
  google::cloud::networkservices::v1::ListLbRouteExtensionsResponse response;
  auto status = grpc_stub_->ListLbRouteExtensions(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::networkservices::v1::LbRouteExtension>
DefaultDepServiceStub::GetLbRouteExtension(
    grpc::ClientContext& context, Options const&,
    google::cloud::networkservices::v1::GetLbRouteExtensionRequest const&
        request) {
  google::cloud::networkservices::v1::LbRouteExtension response;
  auto status = grpc_stub_->GetLbRouteExtension(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

future<StatusOr<google::longrunning::Operation>>
DefaultDepServiceStub::AsyncCreateLbRouteExtension(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions,
    google::cloud::networkservices::v1::CreateLbRouteExtensionRequest const&
        request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::networkservices::v1::CreateLbRouteExtensionRequest,
      google::longrunning::Operation>(
      cq,
      [this](grpc::ClientContext* context,
             google::cloud::networkservices::v1::
                 CreateLbRouteExtensionRequest const& request,
             grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncCreateLbRouteExtension(context, request, cq);
      },
      request, std::move(context));
}

StatusOr<google::longrunning::Operation>
DefaultDepServiceStub::CreateLbRouteExtension(
    grpc::ClientContext& context, Options,
    google::cloud::networkservices::v1::CreateLbRouteExtensionRequest const&
        request) {
  google::longrunning::Operation response;
  auto status =
      grpc_stub_->CreateLbRouteExtension(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

future<StatusOr<google::longrunning::Operation>>
DefaultDepServiceStub::AsyncUpdateLbRouteExtension(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions,
    google::cloud::networkservices::v1::UpdateLbRouteExtensionRequest const&
        request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::networkservices::v1::UpdateLbRouteExtensionRequest,
      google::longrunning::Operation>(
      cq,
      [this](grpc::ClientContext* context,
             google::cloud::networkservices::v1::
                 UpdateLbRouteExtensionRequest const& request,
             grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncUpdateLbRouteExtension(context, request, cq);
      },
      request, std::move(context));
}

StatusOr<google::longrunning::Operation>
DefaultDepServiceStub::UpdateLbRouteExtension(
    grpc::ClientContext& context, Options,
    google::cloud::networkservices::v1::UpdateLbRouteExtensionRequest const&
        request) {
  google::longrunning::Operation response;
  auto status =
      grpc_stub_->UpdateLbRouteExtension(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

future<StatusOr<google::longrunning::Operation>>
DefaultDepServiceStub::AsyncDeleteLbRouteExtension(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions,
    google::cloud::networkservices::v1::DeleteLbRouteExtensionRequest const&
        request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::networkservices::v1::DeleteLbRouteExtensionRequest,
      google::longrunning::Operation>(
      cq,
      [this](grpc::ClientContext* context,
             google::cloud::networkservices::v1::
                 DeleteLbRouteExtensionRequest const& request,
             grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncDeleteLbRouteExtension(context, request, cq);
      },
      request, std::move(context));
}

StatusOr<google::longrunning::Operation>
DefaultDepServiceStub::DeleteLbRouteExtension(
    grpc::ClientContext& context, Options,
    google::cloud::networkservices::v1::DeleteLbRouteExtensionRequest const&
        request) {
  google::longrunning::Operation response;
  auto status =
      grpc_stub_->DeleteLbRouteExtension(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::location::ListLocationsResponse>
DefaultDepServiceStub::ListLocations(
    grpc::ClientContext& context, Options const&,
    google::cloud::location::ListLocationsRequest const& request) {
  google::cloud::location::ListLocationsResponse response;
  auto status = locations_stub_->ListLocations(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::location::Location> DefaultDepServiceStub::GetLocation(
    grpc::ClientContext& context, Options const&,
    google::cloud::location::GetLocationRequest const& request) {
  google::cloud::location::Location response;
  auto status = locations_stub_->GetLocation(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::iam::v1::Policy> DefaultDepServiceStub::SetIamPolicy(
    grpc::ClientContext& context, Options const&,
    google::iam::v1::SetIamPolicyRequest const& request) {
  google::iam::v1::Policy response;
  auto status = iampolicy_stub_->SetIamPolicy(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::iam::v1::Policy> DefaultDepServiceStub::GetIamPolicy(
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
DefaultDepServiceStub::TestIamPermissions(
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
DefaultDepServiceStub::ListOperations(
    grpc::ClientContext& context, Options const&,
    google::longrunning::ListOperationsRequest const& request) {
  google::longrunning::ListOperationsResponse response;
  auto status = operations_stub_->ListOperations(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::longrunning::Operation> DefaultDepServiceStub::GetOperation(
    grpc::ClientContext& context, Options const&,
    google::longrunning::GetOperationRequest const& request) {
  google::longrunning::Operation response;
  auto status = operations_stub_->GetOperation(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

Status DefaultDepServiceStub::DeleteOperation(
    grpc::ClientContext& context, Options const&,
    google::longrunning::DeleteOperationRequest const& request) {
  google::protobuf::Empty response;
  auto status = operations_stub_->DeleteOperation(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return google::cloud::Status();
}

Status DefaultDepServiceStub::CancelOperation(
    grpc::ClientContext& context, Options const&,
    google::longrunning::CancelOperationRequest const& request) {
  google::protobuf::Empty response;
  auto status = operations_stub_->CancelOperation(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return google::cloud::Status();
}

future<StatusOr<google::longrunning::Operation>>
DefaultDepServiceStub::AsyncGetOperation(
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

future<Status> DefaultDepServiceStub::AsyncCancelOperation(
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
}  // namespace networkservices_v1_internal
}  // namespace cloud
}  // namespace google
