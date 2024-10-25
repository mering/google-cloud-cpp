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
// source: google/cloud/apphub/v1/apphub_service.proto

#include "google/cloud/apphub/v1/internal/app_hub_stub.h"
#include "google/cloud/grpc_error_delegate.h"
#include "google/cloud/status_or.h"
#include "google/cloud/apphub/v1/apphub_service.grpc.pb.h"
#include "google/longrunning/operations.grpc.pb.h"
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace apphub_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

AppHubStub::~AppHubStub() = default;

StatusOr<google::cloud::apphub::v1::LookupServiceProjectAttachmentResponse>
DefaultAppHubStub::LookupServiceProjectAttachment(
    grpc::ClientContext& context, Options const&,
    google::cloud::apphub::v1::LookupServiceProjectAttachmentRequest const&
        request) {
  google::cloud::apphub::v1::LookupServiceProjectAttachmentResponse response;
  auto status =
      grpc_stub_->LookupServiceProjectAttachment(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::apphub::v1::ListServiceProjectAttachmentsResponse>
DefaultAppHubStub::ListServiceProjectAttachments(
    grpc::ClientContext& context, Options const&,
    google::cloud::apphub::v1::ListServiceProjectAttachmentsRequest const&
        request) {
  google::cloud::apphub::v1::ListServiceProjectAttachmentsResponse response;
  auto status =
      grpc_stub_->ListServiceProjectAttachments(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

future<StatusOr<google::longrunning::Operation>>
DefaultAppHubStub::AsyncCreateServiceProjectAttachment(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions,
    google::cloud::apphub::v1::CreateServiceProjectAttachmentRequest const&
        request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::apphub::v1::CreateServiceProjectAttachmentRequest,
      google::longrunning::Operation>(
      cq,
      [this](grpc::ClientContext* context,
             google::cloud::apphub::v1::
                 CreateServiceProjectAttachmentRequest const& request,
             grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncCreateServiceProjectAttachment(context, request,
                                                               cq);
      },
      request, std::move(context));
}

StatusOr<google::longrunning::Operation>
DefaultAppHubStub::CreateServiceProjectAttachment(
    grpc::ClientContext& context, Options,
    google::cloud::apphub::v1::CreateServiceProjectAttachmentRequest const&
        request) {
  google::longrunning::Operation response;
  auto status =
      grpc_stub_->CreateServiceProjectAttachment(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::apphub::v1::ServiceProjectAttachment>
DefaultAppHubStub::GetServiceProjectAttachment(
    grpc::ClientContext& context, Options const&,
    google::cloud::apphub::v1::GetServiceProjectAttachmentRequest const&
        request) {
  google::cloud::apphub::v1::ServiceProjectAttachment response;
  auto status =
      grpc_stub_->GetServiceProjectAttachment(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

future<StatusOr<google::longrunning::Operation>>
DefaultAppHubStub::AsyncDeleteServiceProjectAttachment(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions,
    google::cloud::apphub::v1::DeleteServiceProjectAttachmentRequest const&
        request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::apphub::v1::DeleteServiceProjectAttachmentRequest,
      google::longrunning::Operation>(
      cq,
      [this](grpc::ClientContext* context,
             google::cloud::apphub::v1::
                 DeleteServiceProjectAttachmentRequest const& request,
             grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncDeleteServiceProjectAttachment(context, request,
                                                               cq);
      },
      request, std::move(context));
}

StatusOr<google::longrunning::Operation>
DefaultAppHubStub::DeleteServiceProjectAttachment(
    grpc::ClientContext& context, Options,
    google::cloud::apphub::v1::DeleteServiceProjectAttachmentRequest const&
        request) {
  google::longrunning::Operation response;
  auto status =
      grpc_stub_->DeleteServiceProjectAttachment(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::apphub::v1::DetachServiceProjectAttachmentResponse>
DefaultAppHubStub::DetachServiceProjectAttachment(
    grpc::ClientContext& context, Options const&,
    google::cloud::apphub::v1::DetachServiceProjectAttachmentRequest const&
        request) {
  google::cloud::apphub::v1::DetachServiceProjectAttachmentResponse response;
  auto status =
      grpc_stub_->DetachServiceProjectAttachment(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::apphub::v1::ListDiscoveredServicesResponse>
DefaultAppHubStub::ListDiscoveredServices(
    grpc::ClientContext& context, Options const&,
    google::cloud::apphub::v1::ListDiscoveredServicesRequest const& request) {
  google::cloud::apphub::v1::ListDiscoveredServicesResponse response;
  auto status =
      grpc_stub_->ListDiscoveredServices(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::apphub::v1::DiscoveredService>
DefaultAppHubStub::GetDiscoveredService(
    grpc::ClientContext& context, Options const&,
    google::cloud::apphub::v1::GetDiscoveredServiceRequest const& request) {
  google::cloud::apphub::v1::DiscoveredService response;
  auto status = grpc_stub_->GetDiscoveredService(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::apphub::v1::LookupDiscoveredServiceResponse>
DefaultAppHubStub::LookupDiscoveredService(
    grpc::ClientContext& context, Options const&,
    google::cloud::apphub::v1::LookupDiscoveredServiceRequest const& request) {
  google::cloud::apphub::v1::LookupDiscoveredServiceResponse response;
  auto status =
      grpc_stub_->LookupDiscoveredService(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::apphub::v1::ListServicesResponse>
DefaultAppHubStub::ListServices(
    grpc::ClientContext& context, Options const&,
    google::cloud::apphub::v1::ListServicesRequest const& request) {
  google::cloud::apphub::v1::ListServicesResponse response;
  auto status = grpc_stub_->ListServices(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

future<StatusOr<google::longrunning::Operation>>
DefaultAppHubStub::AsyncCreateService(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions,
    google::cloud::apphub::v1::CreateServiceRequest const& request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::apphub::v1::CreateServiceRequest,
      google::longrunning::Operation>(
      cq,
      [this](grpc::ClientContext* context,
             google::cloud::apphub::v1::CreateServiceRequest const& request,
             grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncCreateService(context, request, cq);
      },
      request, std::move(context));
}

StatusOr<google::longrunning::Operation> DefaultAppHubStub::CreateService(
    grpc::ClientContext& context, Options,
    google::cloud::apphub::v1::CreateServiceRequest const& request) {
  google::longrunning::Operation response;
  auto status = grpc_stub_->CreateService(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::apphub::v1::Service> DefaultAppHubStub::GetService(
    grpc::ClientContext& context, Options const&,
    google::cloud::apphub::v1::GetServiceRequest const& request) {
  google::cloud::apphub::v1::Service response;
  auto status = grpc_stub_->GetService(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

future<StatusOr<google::longrunning::Operation>>
DefaultAppHubStub::AsyncUpdateService(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions,
    google::cloud::apphub::v1::UpdateServiceRequest const& request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::apphub::v1::UpdateServiceRequest,
      google::longrunning::Operation>(
      cq,
      [this](grpc::ClientContext* context,
             google::cloud::apphub::v1::UpdateServiceRequest const& request,
             grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncUpdateService(context, request, cq);
      },
      request, std::move(context));
}

StatusOr<google::longrunning::Operation> DefaultAppHubStub::UpdateService(
    grpc::ClientContext& context, Options,
    google::cloud::apphub::v1::UpdateServiceRequest const& request) {
  google::longrunning::Operation response;
  auto status = grpc_stub_->UpdateService(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

future<StatusOr<google::longrunning::Operation>>
DefaultAppHubStub::AsyncDeleteService(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions,
    google::cloud::apphub::v1::DeleteServiceRequest const& request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::apphub::v1::DeleteServiceRequest,
      google::longrunning::Operation>(
      cq,
      [this](grpc::ClientContext* context,
             google::cloud::apphub::v1::DeleteServiceRequest const& request,
             grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncDeleteService(context, request, cq);
      },
      request, std::move(context));
}

StatusOr<google::longrunning::Operation> DefaultAppHubStub::DeleteService(
    grpc::ClientContext& context, Options,
    google::cloud::apphub::v1::DeleteServiceRequest const& request) {
  google::longrunning::Operation response;
  auto status = grpc_stub_->DeleteService(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::apphub::v1::ListDiscoveredWorkloadsResponse>
DefaultAppHubStub::ListDiscoveredWorkloads(
    grpc::ClientContext& context, Options const&,
    google::cloud::apphub::v1::ListDiscoveredWorkloadsRequest const& request) {
  google::cloud::apphub::v1::ListDiscoveredWorkloadsResponse response;
  auto status =
      grpc_stub_->ListDiscoveredWorkloads(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::apphub::v1::DiscoveredWorkload>
DefaultAppHubStub::GetDiscoveredWorkload(
    grpc::ClientContext& context, Options const&,
    google::cloud::apphub::v1::GetDiscoveredWorkloadRequest const& request) {
  google::cloud::apphub::v1::DiscoveredWorkload response;
  auto status = grpc_stub_->GetDiscoveredWorkload(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::apphub::v1::LookupDiscoveredWorkloadResponse>
DefaultAppHubStub::LookupDiscoveredWorkload(
    grpc::ClientContext& context, Options const&,
    google::cloud::apphub::v1::LookupDiscoveredWorkloadRequest const& request) {
  google::cloud::apphub::v1::LookupDiscoveredWorkloadResponse response;
  auto status =
      grpc_stub_->LookupDiscoveredWorkload(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::apphub::v1::ListWorkloadsResponse>
DefaultAppHubStub::ListWorkloads(
    grpc::ClientContext& context, Options const&,
    google::cloud::apphub::v1::ListWorkloadsRequest const& request) {
  google::cloud::apphub::v1::ListWorkloadsResponse response;
  auto status = grpc_stub_->ListWorkloads(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

future<StatusOr<google::longrunning::Operation>>
DefaultAppHubStub::AsyncCreateWorkload(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions,
    google::cloud::apphub::v1::CreateWorkloadRequest const& request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::apphub::v1::CreateWorkloadRequest,
      google::longrunning::Operation>(
      cq,
      [this](grpc::ClientContext* context,
             google::cloud::apphub::v1::CreateWorkloadRequest const& request,
             grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncCreateWorkload(context, request, cq);
      },
      request, std::move(context));
}

StatusOr<google::longrunning::Operation> DefaultAppHubStub::CreateWorkload(
    grpc::ClientContext& context, Options,
    google::cloud::apphub::v1::CreateWorkloadRequest const& request) {
  google::longrunning::Operation response;
  auto status = grpc_stub_->CreateWorkload(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::apphub::v1::Workload> DefaultAppHubStub::GetWorkload(
    grpc::ClientContext& context, Options const&,
    google::cloud::apphub::v1::GetWorkloadRequest const& request) {
  google::cloud::apphub::v1::Workload response;
  auto status = grpc_stub_->GetWorkload(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

future<StatusOr<google::longrunning::Operation>>
DefaultAppHubStub::AsyncUpdateWorkload(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions,
    google::cloud::apphub::v1::UpdateWorkloadRequest const& request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::apphub::v1::UpdateWorkloadRequest,
      google::longrunning::Operation>(
      cq,
      [this](grpc::ClientContext* context,
             google::cloud::apphub::v1::UpdateWorkloadRequest const& request,
             grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncUpdateWorkload(context, request, cq);
      },
      request, std::move(context));
}

StatusOr<google::longrunning::Operation> DefaultAppHubStub::UpdateWorkload(
    grpc::ClientContext& context, Options,
    google::cloud::apphub::v1::UpdateWorkloadRequest const& request) {
  google::longrunning::Operation response;
  auto status = grpc_stub_->UpdateWorkload(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

future<StatusOr<google::longrunning::Operation>>
DefaultAppHubStub::AsyncDeleteWorkload(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions,
    google::cloud::apphub::v1::DeleteWorkloadRequest const& request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::apphub::v1::DeleteWorkloadRequest,
      google::longrunning::Operation>(
      cq,
      [this](grpc::ClientContext* context,
             google::cloud::apphub::v1::DeleteWorkloadRequest const& request,
             grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncDeleteWorkload(context, request, cq);
      },
      request, std::move(context));
}

StatusOr<google::longrunning::Operation> DefaultAppHubStub::DeleteWorkload(
    grpc::ClientContext& context, Options,
    google::cloud::apphub::v1::DeleteWorkloadRequest const& request) {
  google::longrunning::Operation response;
  auto status = grpc_stub_->DeleteWorkload(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::apphub::v1::ListApplicationsResponse>
DefaultAppHubStub::ListApplications(
    grpc::ClientContext& context, Options const&,
    google::cloud::apphub::v1::ListApplicationsRequest const& request) {
  google::cloud::apphub::v1::ListApplicationsResponse response;
  auto status = grpc_stub_->ListApplications(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

future<StatusOr<google::longrunning::Operation>>
DefaultAppHubStub::AsyncCreateApplication(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions,
    google::cloud::apphub::v1::CreateApplicationRequest const& request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::apphub::v1::CreateApplicationRequest,
      google::longrunning::Operation>(
      cq,
      [this](grpc::ClientContext* context,
             google::cloud::apphub::v1::CreateApplicationRequest const& request,
             grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncCreateApplication(context, request, cq);
      },
      request, std::move(context));
}

StatusOr<google::longrunning::Operation> DefaultAppHubStub::CreateApplication(
    grpc::ClientContext& context, Options,
    google::cloud::apphub::v1::CreateApplicationRequest const& request) {
  google::longrunning::Operation response;
  auto status = grpc_stub_->CreateApplication(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::apphub::v1::Application>
DefaultAppHubStub::GetApplication(
    grpc::ClientContext& context, Options const&,
    google::cloud::apphub::v1::GetApplicationRequest const& request) {
  google::cloud::apphub::v1::Application response;
  auto status = grpc_stub_->GetApplication(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

future<StatusOr<google::longrunning::Operation>>
DefaultAppHubStub::AsyncUpdateApplication(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions,
    google::cloud::apphub::v1::UpdateApplicationRequest const& request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::apphub::v1::UpdateApplicationRequest,
      google::longrunning::Operation>(
      cq,
      [this](grpc::ClientContext* context,
             google::cloud::apphub::v1::UpdateApplicationRequest const& request,
             grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncUpdateApplication(context, request, cq);
      },
      request, std::move(context));
}

StatusOr<google::longrunning::Operation> DefaultAppHubStub::UpdateApplication(
    grpc::ClientContext& context, Options,
    google::cloud::apphub::v1::UpdateApplicationRequest const& request) {
  google::longrunning::Operation response;
  auto status = grpc_stub_->UpdateApplication(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

future<StatusOr<google::longrunning::Operation>>
DefaultAppHubStub::AsyncDeleteApplication(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions,
    google::cloud::apphub::v1::DeleteApplicationRequest const& request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::apphub::v1::DeleteApplicationRequest,
      google::longrunning::Operation>(
      cq,
      [this](grpc::ClientContext* context,
             google::cloud::apphub::v1::DeleteApplicationRequest const& request,
             grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncDeleteApplication(context, request, cq);
      },
      request, std::move(context));
}

StatusOr<google::longrunning::Operation> DefaultAppHubStub::DeleteApplication(
    grpc::ClientContext& context, Options,
    google::cloud::apphub::v1::DeleteApplicationRequest const& request) {
  google::longrunning::Operation response;
  auto status = grpc_stub_->DeleteApplication(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::location::ListLocationsResponse>
DefaultAppHubStub::ListLocations(
    grpc::ClientContext& context, Options const&,
    google::cloud::location::ListLocationsRequest const& request) {
  google::cloud::location::ListLocationsResponse response;
  auto status = locations_stub_->ListLocations(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::location::Location> DefaultAppHubStub::GetLocation(
    grpc::ClientContext& context, Options const&,
    google::cloud::location::GetLocationRequest const& request) {
  google::cloud::location::Location response;
  auto status = locations_stub_->GetLocation(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::iam::v1::Policy> DefaultAppHubStub::SetIamPolicy(
    grpc::ClientContext& context, Options const&,
    google::iam::v1::SetIamPolicyRequest const& request) {
  google::iam::v1::Policy response;
  auto status = iampolicy_stub_->SetIamPolicy(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::iam::v1::Policy> DefaultAppHubStub::GetIamPolicy(
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
DefaultAppHubStub::TestIamPermissions(
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
DefaultAppHubStub::ListOperations(
    grpc::ClientContext& context, Options const&,
    google::longrunning::ListOperationsRequest const& request) {
  google::longrunning::ListOperationsResponse response;
  auto status = operations_stub_->ListOperations(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::longrunning::Operation> DefaultAppHubStub::GetOperation(
    grpc::ClientContext& context, Options const&,
    google::longrunning::GetOperationRequest const& request) {
  google::longrunning::Operation response;
  auto status = operations_stub_->GetOperation(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

Status DefaultAppHubStub::DeleteOperation(
    grpc::ClientContext& context, Options const&,
    google::longrunning::DeleteOperationRequest const& request) {
  google::protobuf::Empty response;
  auto status = operations_stub_->DeleteOperation(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return google::cloud::Status();
}

Status DefaultAppHubStub::CancelOperation(
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
DefaultAppHubStub::AsyncGetOperation(
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

future<Status> DefaultAppHubStub::AsyncCancelOperation(
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
}  // namespace apphub_v1_internal
}  // namespace cloud
}  // namespace google
