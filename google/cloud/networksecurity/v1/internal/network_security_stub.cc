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
// source: google/cloud/networksecurity/v1/network_security.proto

#include "google/cloud/networksecurity/v1/internal/network_security_stub.h"
#include "google/cloud/grpc_error_delegate.h"
#include "google/cloud/status_or.h"
#include "google/cloud/networksecurity/v1/network_security.grpc.pb.h"
#include "google/longrunning/operations.grpc.pb.h"
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace networksecurity_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

NetworkSecurityStub::~NetworkSecurityStub() = default;

StatusOr<google::cloud::networksecurity::v1::ListAuthorizationPoliciesResponse>
DefaultNetworkSecurityStub::ListAuthorizationPolicies(
    grpc::ClientContext& context, Options const&,
    google::cloud::networksecurity::v1::ListAuthorizationPoliciesRequest const&
        request) {
  google::cloud::networksecurity::v1::ListAuthorizationPoliciesResponse
      response;
  auto status =
      grpc_stub_->ListAuthorizationPolicies(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::networksecurity::v1::AuthorizationPolicy>
DefaultNetworkSecurityStub::GetAuthorizationPolicy(
    grpc::ClientContext& context, Options const&,
    google::cloud::networksecurity::v1::GetAuthorizationPolicyRequest const&
        request) {
  google::cloud::networksecurity::v1::AuthorizationPolicy response;
  auto status =
      grpc_stub_->GetAuthorizationPolicy(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

future<StatusOr<google::longrunning::Operation>>
DefaultNetworkSecurityStub::AsyncCreateAuthorizationPolicy(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions,
    google::cloud::networksecurity::v1::CreateAuthorizationPolicyRequest const&
        request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::networksecurity::v1::CreateAuthorizationPolicyRequest,
      google::longrunning::Operation>(
      cq,
      [this](grpc::ClientContext* context,
             google::cloud::networksecurity::v1::
                 CreateAuthorizationPolicyRequest const& request,
             grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncCreateAuthorizationPolicy(context, request, cq);
      },
      request, std::move(context));
}

StatusOr<google::longrunning::Operation>
DefaultNetworkSecurityStub::CreateAuthorizationPolicy(
    grpc::ClientContext& context, Options,
    google::cloud::networksecurity::v1::CreateAuthorizationPolicyRequest const&
        request) {
  google::longrunning::Operation response;
  auto status =
      grpc_stub_->CreateAuthorizationPolicy(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

future<StatusOr<google::longrunning::Operation>>
DefaultNetworkSecurityStub::AsyncUpdateAuthorizationPolicy(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions,
    google::cloud::networksecurity::v1::UpdateAuthorizationPolicyRequest const&
        request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::networksecurity::v1::UpdateAuthorizationPolicyRequest,
      google::longrunning::Operation>(
      cq,
      [this](grpc::ClientContext* context,
             google::cloud::networksecurity::v1::
                 UpdateAuthorizationPolicyRequest const& request,
             grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncUpdateAuthorizationPolicy(context, request, cq);
      },
      request, std::move(context));
}

StatusOr<google::longrunning::Operation>
DefaultNetworkSecurityStub::UpdateAuthorizationPolicy(
    grpc::ClientContext& context, Options,
    google::cloud::networksecurity::v1::UpdateAuthorizationPolicyRequest const&
        request) {
  google::longrunning::Operation response;
  auto status =
      grpc_stub_->UpdateAuthorizationPolicy(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

future<StatusOr<google::longrunning::Operation>>
DefaultNetworkSecurityStub::AsyncDeleteAuthorizationPolicy(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions,
    google::cloud::networksecurity::v1::DeleteAuthorizationPolicyRequest const&
        request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::networksecurity::v1::DeleteAuthorizationPolicyRequest,
      google::longrunning::Operation>(
      cq,
      [this](grpc::ClientContext* context,
             google::cloud::networksecurity::v1::
                 DeleteAuthorizationPolicyRequest const& request,
             grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncDeleteAuthorizationPolicy(context, request, cq);
      },
      request, std::move(context));
}

StatusOr<google::longrunning::Operation>
DefaultNetworkSecurityStub::DeleteAuthorizationPolicy(
    grpc::ClientContext& context, Options,
    google::cloud::networksecurity::v1::DeleteAuthorizationPolicyRequest const&
        request) {
  google::longrunning::Operation response;
  auto status =
      grpc_stub_->DeleteAuthorizationPolicy(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::networksecurity::v1::ListServerTlsPoliciesResponse>
DefaultNetworkSecurityStub::ListServerTlsPolicies(
    grpc::ClientContext& context, Options const&,
    google::cloud::networksecurity::v1::ListServerTlsPoliciesRequest const&
        request) {
  google::cloud::networksecurity::v1::ListServerTlsPoliciesResponse response;
  auto status = grpc_stub_->ListServerTlsPolicies(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::networksecurity::v1::ServerTlsPolicy>
DefaultNetworkSecurityStub::GetServerTlsPolicy(
    grpc::ClientContext& context, Options const&,
    google::cloud::networksecurity::v1::GetServerTlsPolicyRequest const&
        request) {
  google::cloud::networksecurity::v1::ServerTlsPolicy response;
  auto status = grpc_stub_->GetServerTlsPolicy(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

future<StatusOr<google::longrunning::Operation>>
DefaultNetworkSecurityStub::AsyncCreateServerTlsPolicy(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions,
    google::cloud::networksecurity::v1::CreateServerTlsPolicyRequest const&
        request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::networksecurity::v1::CreateServerTlsPolicyRequest,
      google::longrunning::Operation>(
      cq,
      [this](grpc::ClientContext* context,
             google::cloud::networksecurity::v1::
                 CreateServerTlsPolicyRequest const& request,
             grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncCreateServerTlsPolicy(context, request, cq);
      },
      request, std::move(context));
}

StatusOr<google::longrunning::Operation>
DefaultNetworkSecurityStub::CreateServerTlsPolicy(
    grpc::ClientContext& context, Options,
    google::cloud::networksecurity::v1::CreateServerTlsPolicyRequest const&
        request) {
  google::longrunning::Operation response;
  auto status = grpc_stub_->CreateServerTlsPolicy(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

future<StatusOr<google::longrunning::Operation>>
DefaultNetworkSecurityStub::AsyncUpdateServerTlsPolicy(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions,
    google::cloud::networksecurity::v1::UpdateServerTlsPolicyRequest const&
        request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::networksecurity::v1::UpdateServerTlsPolicyRequest,
      google::longrunning::Operation>(
      cq,
      [this](grpc::ClientContext* context,
             google::cloud::networksecurity::v1::
                 UpdateServerTlsPolicyRequest const& request,
             grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncUpdateServerTlsPolicy(context, request, cq);
      },
      request, std::move(context));
}

StatusOr<google::longrunning::Operation>
DefaultNetworkSecurityStub::UpdateServerTlsPolicy(
    grpc::ClientContext& context, Options,
    google::cloud::networksecurity::v1::UpdateServerTlsPolicyRequest const&
        request) {
  google::longrunning::Operation response;
  auto status = grpc_stub_->UpdateServerTlsPolicy(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

future<StatusOr<google::longrunning::Operation>>
DefaultNetworkSecurityStub::AsyncDeleteServerTlsPolicy(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions,
    google::cloud::networksecurity::v1::DeleteServerTlsPolicyRequest const&
        request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::networksecurity::v1::DeleteServerTlsPolicyRequest,
      google::longrunning::Operation>(
      cq,
      [this](grpc::ClientContext* context,
             google::cloud::networksecurity::v1::
                 DeleteServerTlsPolicyRequest const& request,
             grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncDeleteServerTlsPolicy(context, request, cq);
      },
      request, std::move(context));
}

StatusOr<google::longrunning::Operation>
DefaultNetworkSecurityStub::DeleteServerTlsPolicy(
    grpc::ClientContext& context, Options,
    google::cloud::networksecurity::v1::DeleteServerTlsPolicyRequest const&
        request) {
  google::longrunning::Operation response;
  auto status = grpc_stub_->DeleteServerTlsPolicy(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::networksecurity::v1::ListClientTlsPoliciesResponse>
DefaultNetworkSecurityStub::ListClientTlsPolicies(
    grpc::ClientContext& context, Options const&,
    google::cloud::networksecurity::v1::ListClientTlsPoliciesRequest const&
        request) {
  google::cloud::networksecurity::v1::ListClientTlsPoliciesResponse response;
  auto status = grpc_stub_->ListClientTlsPolicies(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::networksecurity::v1::ClientTlsPolicy>
DefaultNetworkSecurityStub::GetClientTlsPolicy(
    grpc::ClientContext& context, Options const&,
    google::cloud::networksecurity::v1::GetClientTlsPolicyRequest const&
        request) {
  google::cloud::networksecurity::v1::ClientTlsPolicy response;
  auto status = grpc_stub_->GetClientTlsPolicy(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

future<StatusOr<google::longrunning::Operation>>
DefaultNetworkSecurityStub::AsyncCreateClientTlsPolicy(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions,
    google::cloud::networksecurity::v1::CreateClientTlsPolicyRequest const&
        request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::networksecurity::v1::CreateClientTlsPolicyRequest,
      google::longrunning::Operation>(
      cq,
      [this](grpc::ClientContext* context,
             google::cloud::networksecurity::v1::
                 CreateClientTlsPolicyRequest const& request,
             grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncCreateClientTlsPolicy(context, request, cq);
      },
      request, std::move(context));
}

StatusOr<google::longrunning::Operation>
DefaultNetworkSecurityStub::CreateClientTlsPolicy(
    grpc::ClientContext& context, Options,
    google::cloud::networksecurity::v1::CreateClientTlsPolicyRequest const&
        request) {
  google::longrunning::Operation response;
  auto status = grpc_stub_->CreateClientTlsPolicy(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

future<StatusOr<google::longrunning::Operation>>
DefaultNetworkSecurityStub::AsyncUpdateClientTlsPolicy(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions,
    google::cloud::networksecurity::v1::UpdateClientTlsPolicyRequest const&
        request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::networksecurity::v1::UpdateClientTlsPolicyRequest,
      google::longrunning::Operation>(
      cq,
      [this](grpc::ClientContext* context,
             google::cloud::networksecurity::v1::
                 UpdateClientTlsPolicyRequest const& request,
             grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncUpdateClientTlsPolicy(context, request, cq);
      },
      request, std::move(context));
}

StatusOr<google::longrunning::Operation>
DefaultNetworkSecurityStub::UpdateClientTlsPolicy(
    grpc::ClientContext& context, Options,
    google::cloud::networksecurity::v1::UpdateClientTlsPolicyRequest const&
        request) {
  google::longrunning::Operation response;
  auto status = grpc_stub_->UpdateClientTlsPolicy(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

future<StatusOr<google::longrunning::Operation>>
DefaultNetworkSecurityStub::AsyncDeleteClientTlsPolicy(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions,
    google::cloud::networksecurity::v1::DeleteClientTlsPolicyRequest const&
        request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::networksecurity::v1::DeleteClientTlsPolicyRequest,
      google::longrunning::Operation>(
      cq,
      [this](grpc::ClientContext* context,
             google::cloud::networksecurity::v1::
                 DeleteClientTlsPolicyRequest const& request,
             grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncDeleteClientTlsPolicy(context, request, cq);
      },
      request, std::move(context));
}

StatusOr<google::longrunning::Operation>
DefaultNetworkSecurityStub::DeleteClientTlsPolicy(
    grpc::ClientContext& context, Options,
    google::cloud::networksecurity::v1::DeleteClientTlsPolicyRequest const&
        request) {
  google::longrunning::Operation response;
  auto status = grpc_stub_->DeleteClientTlsPolicy(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::location::ListLocationsResponse>
DefaultNetworkSecurityStub::ListLocations(
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
DefaultNetworkSecurityStub::GetLocation(
    grpc::ClientContext& context, Options const&,
    google::cloud::location::GetLocationRequest const& request) {
  google::cloud::location::Location response;
  auto status = locations_stub_->GetLocation(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::iam::v1::Policy> DefaultNetworkSecurityStub::SetIamPolicy(
    grpc::ClientContext& context, Options const&,
    google::iam::v1::SetIamPolicyRequest const& request) {
  google::iam::v1::Policy response;
  auto status = iampolicy_stub_->SetIamPolicy(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::iam::v1::Policy> DefaultNetworkSecurityStub::GetIamPolicy(
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
DefaultNetworkSecurityStub::TestIamPermissions(
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
DefaultNetworkSecurityStub::ListOperations(
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
DefaultNetworkSecurityStub::GetOperation(
    grpc::ClientContext& context, Options const&,
    google::longrunning::GetOperationRequest const& request) {
  google::longrunning::Operation response;
  auto status = operations_stub_->GetOperation(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

Status DefaultNetworkSecurityStub::DeleteOperation(
    grpc::ClientContext& context, Options const&,
    google::longrunning::DeleteOperationRequest const& request) {
  google::protobuf::Empty response;
  auto status = operations_stub_->DeleteOperation(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return google::cloud::Status();
}

Status DefaultNetworkSecurityStub::CancelOperation(
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
DefaultNetworkSecurityStub::AsyncGetOperation(
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

future<Status> DefaultNetworkSecurityStub::AsyncCancelOperation(
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
}  // namespace networksecurity_v1_internal
}  // namespace cloud
}  // namespace google
