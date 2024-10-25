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

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_APPHUB_V1_INTERNAL_APP_HUB_AUTH_DECORATOR_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_APPHUB_V1_INTERNAL_APP_HUB_AUTH_DECORATOR_H

#include "google/cloud/apphub/v1/internal/app_hub_stub.h"
#include "google/cloud/internal/unified_grpc_credentials.h"
#include "google/cloud/version.h"
#include "google/longrunning/operations.grpc.pb.h"
#include <memory>
#include <set>
#include <string>

namespace google {
namespace cloud {
namespace apphub_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class AppHubAuth : public AppHubStub {
 public:
  ~AppHubAuth() override = default;
  AppHubAuth(
      std::shared_ptr<google::cloud::internal::GrpcAuthenticationStrategy> auth,
      std::shared_ptr<AppHubStub> child);

  StatusOr<google::cloud::apphub::v1::LookupServiceProjectAttachmentResponse>
  LookupServiceProjectAttachment(
      grpc::ClientContext& context, Options const& options,
      google::cloud::apphub::v1::LookupServiceProjectAttachmentRequest const&
          request) override;

  StatusOr<google::cloud::apphub::v1::ListServiceProjectAttachmentsResponse>
  ListServiceProjectAttachments(
      grpc::ClientContext& context, Options const& options,
      google::cloud::apphub::v1::ListServiceProjectAttachmentsRequest const&
          request) override;

  future<StatusOr<google::longrunning::Operation>>
  AsyncCreateServiceProjectAttachment(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::apphub::v1::CreateServiceProjectAttachmentRequest const&
          request) override;

  StatusOr<google::longrunning::Operation> CreateServiceProjectAttachment(
      grpc::ClientContext& context, Options options,
      google::cloud::apphub::v1::CreateServiceProjectAttachmentRequest const&
          request) override;

  StatusOr<google::cloud::apphub::v1::ServiceProjectAttachment>
  GetServiceProjectAttachment(
      grpc::ClientContext& context, Options const& options,
      google::cloud::apphub::v1::GetServiceProjectAttachmentRequest const&
          request) override;

  future<StatusOr<google::longrunning::Operation>>
  AsyncDeleteServiceProjectAttachment(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::apphub::v1::DeleteServiceProjectAttachmentRequest const&
          request) override;

  StatusOr<google::longrunning::Operation> DeleteServiceProjectAttachment(
      grpc::ClientContext& context, Options options,
      google::cloud::apphub::v1::DeleteServiceProjectAttachmentRequest const&
          request) override;

  StatusOr<google::cloud::apphub::v1::DetachServiceProjectAttachmentResponse>
  DetachServiceProjectAttachment(
      grpc::ClientContext& context, Options const& options,
      google::cloud::apphub::v1::DetachServiceProjectAttachmentRequest const&
          request) override;

  StatusOr<google::cloud::apphub::v1::ListDiscoveredServicesResponse>
  ListDiscoveredServices(
      grpc::ClientContext& context, Options const& options,
      google::cloud::apphub::v1::ListDiscoveredServicesRequest const& request)
      override;

  StatusOr<google::cloud::apphub::v1::DiscoveredService> GetDiscoveredService(
      grpc::ClientContext& context, Options const& options,
      google::cloud::apphub::v1::GetDiscoveredServiceRequest const& request)
      override;

  StatusOr<google::cloud::apphub::v1::LookupDiscoveredServiceResponse>
  LookupDiscoveredService(
      grpc::ClientContext& context, Options const& options,
      google::cloud::apphub::v1::LookupDiscoveredServiceRequest const& request)
      override;

  StatusOr<google::cloud::apphub::v1::ListServicesResponse> ListServices(
      grpc::ClientContext& context, Options const& options,
      google::cloud::apphub::v1::ListServicesRequest const& request) override;

  future<StatusOr<google::longrunning::Operation>> AsyncCreateService(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::apphub::v1::CreateServiceRequest const& request) override;

  StatusOr<google::longrunning::Operation> CreateService(
      grpc::ClientContext& context, Options options,
      google::cloud::apphub::v1::CreateServiceRequest const& request) override;

  StatusOr<google::cloud::apphub::v1::Service> GetService(
      grpc::ClientContext& context, Options const& options,
      google::cloud::apphub::v1::GetServiceRequest const& request) override;

  future<StatusOr<google::longrunning::Operation>> AsyncUpdateService(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::apphub::v1::UpdateServiceRequest const& request) override;

  StatusOr<google::longrunning::Operation> UpdateService(
      grpc::ClientContext& context, Options options,
      google::cloud::apphub::v1::UpdateServiceRequest const& request) override;

  future<StatusOr<google::longrunning::Operation>> AsyncDeleteService(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::apphub::v1::DeleteServiceRequest const& request) override;

  StatusOr<google::longrunning::Operation> DeleteService(
      grpc::ClientContext& context, Options options,
      google::cloud::apphub::v1::DeleteServiceRequest const& request) override;

  StatusOr<google::cloud::apphub::v1::ListDiscoveredWorkloadsResponse>
  ListDiscoveredWorkloads(
      grpc::ClientContext& context, Options const& options,
      google::cloud::apphub::v1::ListDiscoveredWorkloadsRequest const& request)
      override;

  StatusOr<google::cloud::apphub::v1::DiscoveredWorkload> GetDiscoveredWorkload(
      grpc::ClientContext& context, Options const& options,
      google::cloud::apphub::v1::GetDiscoveredWorkloadRequest const& request)
      override;

  StatusOr<google::cloud::apphub::v1::LookupDiscoveredWorkloadResponse>
  LookupDiscoveredWorkload(
      grpc::ClientContext& context, Options const& options,
      google::cloud::apphub::v1::LookupDiscoveredWorkloadRequest const& request)
      override;

  StatusOr<google::cloud::apphub::v1::ListWorkloadsResponse> ListWorkloads(
      grpc::ClientContext& context, Options const& options,
      google::cloud::apphub::v1::ListWorkloadsRequest const& request) override;

  future<StatusOr<google::longrunning::Operation>> AsyncCreateWorkload(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::apphub::v1::CreateWorkloadRequest const& request) override;

  StatusOr<google::longrunning::Operation> CreateWorkload(
      grpc::ClientContext& context, Options options,
      google::cloud::apphub::v1::CreateWorkloadRequest const& request) override;

  StatusOr<google::cloud::apphub::v1::Workload> GetWorkload(
      grpc::ClientContext& context, Options const& options,
      google::cloud::apphub::v1::GetWorkloadRequest const& request) override;

  future<StatusOr<google::longrunning::Operation>> AsyncUpdateWorkload(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::apphub::v1::UpdateWorkloadRequest const& request) override;

  StatusOr<google::longrunning::Operation> UpdateWorkload(
      grpc::ClientContext& context, Options options,
      google::cloud::apphub::v1::UpdateWorkloadRequest const& request) override;

  future<StatusOr<google::longrunning::Operation>> AsyncDeleteWorkload(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::apphub::v1::DeleteWorkloadRequest const& request) override;

  StatusOr<google::longrunning::Operation> DeleteWorkload(
      grpc::ClientContext& context, Options options,
      google::cloud::apphub::v1::DeleteWorkloadRequest const& request) override;

  StatusOr<google::cloud::apphub::v1::ListApplicationsResponse>
  ListApplications(grpc::ClientContext& context, Options const& options,
                   google::cloud::apphub::v1::ListApplicationsRequest const&
                       request) override;

  future<StatusOr<google::longrunning::Operation>> AsyncCreateApplication(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::apphub::v1::CreateApplicationRequest const& request)
      override;

  StatusOr<google::longrunning::Operation> CreateApplication(
      grpc::ClientContext& context, Options options,
      google::cloud::apphub::v1::CreateApplicationRequest const& request)
      override;

  StatusOr<google::cloud::apphub::v1::Application> GetApplication(
      grpc::ClientContext& context, Options const& options,
      google::cloud::apphub::v1::GetApplicationRequest const& request) override;

  future<StatusOr<google::longrunning::Operation>> AsyncUpdateApplication(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::apphub::v1::UpdateApplicationRequest const& request)
      override;

  StatusOr<google::longrunning::Operation> UpdateApplication(
      grpc::ClientContext& context, Options options,
      google::cloud::apphub::v1::UpdateApplicationRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncDeleteApplication(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::apphub::v1::DeleteApplicationRequest const& request)
      override;

  StatusOr<google::longrunning::Operation> DeleteApplication(
      grpc::ClientContext& context, Options options,
      google::cloud::apphub::v1::DeleteApplicationRequest const& request)
      override;

  StatusOr<google::cloud::location::ListLocationsResponse> ListLocations(
      grpc::ClientContext& context, Options const& options,
      google::cloud::location::ListLocationsRequest const& request) override;

  StatusOr<google::cloud::location::Location> GetLocation(
      grpc::ClientContext& context, Options const& options,
      google::cloud::location::GetLocationRequest const& request) override;

  StatusOr<google::iam::v1::Policy> SetIamPolicy(
      grpc::ClientContext& context, Options const& options,
      google::iam::v1::SetIamPolicyRequest const& request) override;

  StatusOr<google::iam::v1::Policy> GetIamPolicy(
      grpc::ClientContext& context, Options const& options,
      google::iam::v1::GetIamPolicyRequest const& request) override;

  StatusOr<google::iam::v1::TestIamPermissionsResponse> TestIamPermissions(
      grpc::ClientContext& context, Options const& options,
      google::iam::v1::TestIamPermissionsRequest const& request) override;

  StatusOr<google::longrunning::ListOperationsResponse> ListOperations(
      grpc::ClientContext& context, Options const& options,
      google::longrunning::ListOperationsRequest const& request) override;

  StatusOr<google::longrunning::Operation> GetOperation(
      grpc::ClientContext& context, Options const& options,
      google::longrunning::GetOperationRequest const& request) override;

  Status DeleteOperation(
      grpc::ClientContext& context, Options const& options,
      google::longrunning::DeleteOperationRequest const& request) override;

  Status CancelOperation(
      grpc::ClientContext& context, Options const& options,
      google::longrunning::CancelOperationRequest const& request) override;

  future<StatusOr<google::longrunning::Operation>> AsyncGetOperation(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::longrunning::GetOperationRequest const& request) override;

  future<Status> AsyncCancelOperation(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::longrunning::CancelOperationRequest const& request) override;

 private:
  std::shared_ptr<google::cloud::internal::GrpcAuthenticationStrategy> auth_;
  std::shared_ptr<AppHubStub> child_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace apphub_v1_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_APPHUB_V1_INTERNAL_APP_HUB_AUTH_DECORATOR_H
