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
// source: google/cloud/networkservices/v1/network_services.proto

#include "google/cloud/networkservices/v1/internal/network_services_stub.h"
#include "google/cloud/grpc_error_delegate.h"
#include "google/cloud/status_or.h"
#include <google/cloud/networkservices/v1/network_services.grpc.pb.h>
#include <google/longrunning/operations.grpc.pb.h>
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace networkservices_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

NetworkServicesStub::~NetworkServicesStub() = default;

StatusOr<google::cloud::networkservices::v1::ListEndpointPoliciesResponse>
DefaultNetworkServicesStub::ListEndpointPolicies(
    grpc::ClientContext& context, Options const&,
    google::cloud::networkservices::v1::ListEndpointPoliciesRequest const&
        request) {
  google::cloud::networkservices::v1::ListEndpointPoliciesResponse response;
  auto status = grpc_stub_->ListEndpointPolicies(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::networkservices::v1::EndpointPolicy>
DefaultNetworkServicesStub::GetEndpointPolicy(
    grpc::ClientContext& context, Options const&,
    google::cloud::networkservices::v1::GetEndpointPolicyRequest const&
        request) {
  google::cloud::networkservices::v1::EndpointPolicy response;
  auto status = grpc_stub_->GetEndpointPolicy(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

future<StatusOr<google::longrunning::Operation>>
DefaultNetworkServicesStub::AsyncCreateEndpointPolicy(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions,
    google::cloud::networkservices::v1::CreateEndpointPolicyRequest const&
        request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::networkservices::v1::CreateEndpointPolicyRequest,
      google::longrunning::Operation>(
      cq,
      [this](
          grpc::ClientContext* context,
          google::cloud::networkservices::v1::CreateEndpointPolicyRequest const&
              request,
          grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncCreateEndpointPolicy(context, request, cq);
      },
      request, std::move(context));
}

future<StatusOr<google::longrunning::Operation>>
DefaultNetworkServicesStub::AsyncUpdateEndpointPolicy(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions,
    google::cloud::networkservices::v1::UpdateEndpointPolicyRequest const&
        request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::networkservices::v1::UpdateEndpointPolicyRequest,
      google::longrunning::Operation>(
      cq,
      [this](
          grpc::ClientContext* context,
          google::cloud::networkservices::v1::UpdateEndpointPolicyRequest const&
              request,
          grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncUpdateEndpointPolicy(context, request, cq);
      },
      request, std::move(context));
}

future<StatusOr<google::longrunning::Operation>>
DefaultNetworkServicesStub::AsyncDeleteEndpointPolicy(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions,
    google::cloud::networkservices::v1::DeleteEndpointPolicyRequest const&
        request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::networkservices::v1::DeleteEndpointPolicyRequest,
      google::longrunning::Operation>(
      cq,
      [this](
          grpc::ClientContext* context,
          google::cloud::networkservices::v1::DeleteEndpointPolicyRequest const&
              request,
          grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncDeleteEndpointPolicy(context, request, cq);
      },
      request, std::move(context));
}

StatusOr<google::cloud::networkservices::v1::ListGatewaysResponse>
DefaultNetworkServicesStub::ListGateways(
    grpc::ClientContext& context, Options const&,
    google::cloud::networkservices::v1::ListGatewaysRequest const& request) {
  google::cloud::networkservices::v1::ListGatewaysResponse response;
  auto status = grpc_stub_->ListGateways(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::networkservices::v1::Gateway>
DefaultNetworkServicesStub::GetGateway(
    grpc::ClientContext& context, Options const&,
    google::cloud::networkservices::v1::GetGatewayRequest const& request) {
  google::cloud::networkservices::v1::Gateway response;
  auto status = grpc_stub_->GetGateway(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

future<StatusOr<google::longrunning::Operation>>
DefaultNetworkServicesStub::AsyncCreateGateway(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions,
    google::cloud::networkservices::v1::CreateGatewayRequest const& request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::networkservices::v1::CreateGatewayRequest,
      google::longrunning::Operation>(
      cq,
      [this](grpc::ClientContext* context,
             google::cloud::networkservices::v1::CreateGatewayRequest const&
                 request,
             grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncCreateGateway(context, request, cq);
      },
      request, std::move(context));
}

future<StatusOr<google::longrunning::Operation>>
DefaultNetworkServicesStub::AsyncUpdateGateway(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions,
    google::cloud::networkservices::v1::UpdateGatewayRequest const& request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::networkservices::v1::UpdateGatewayRequest,
      google::longrunning::Operation>(
      cq,
      [this](grpc::ClientContext* context,
             google::cloud::networkservices::v1::UpdateGatewayRequest const&
                 request,
             grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncUpdateGateway(context, request, cq);
      },
      request, std::move(context));
}

future<StatusOr<google::longrunning::Operation>>
DefaultNetworkServicesStub::AsyncDeleteGateway(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions,
    google::cloud::networkservices::v1::DeleteGatewayRequest const& request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::networkservices::v1::DeleteGatewayRequest,
      google::longrunning::Operation>(
      cq,
      [this](grpc::ClientContext* context,
             google::cloud::networkservices::v1::DeleteGatewayRequest const&
                 request,
             grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncDeleteGateway(context, request, cq);
      },
      request, std::move(context));
}

StatusOr<google::cloud::networkservices::v1::ListGrpcRoutesResponse>
DefaultNetworkServicesStub::ListGrpcRoutes(
    grpc::ClientContext& context, Options const&,
    google::cloud::networkservices::v1::ListGrpcRoutesRequest const& request) {
  google::cloud::networkservices::v1::ListGrpcRoutesResponse response;
  auto status = grpc_stub_->ListGrpcRoutes(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::networkservices::v1::GrpcRoute>
DefaultNetworkServicesStub::GetGrpcRoute(
    grpc::ClientContext& context, Options const&,
    google::cloud::networkservices::v1::GetGrpcRouteRequest const& request) {
  google::cloud::networkservices::v1::GrpcRoute response;
  auto status = grpc_stub_->GetGrpcRoute(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

future<StatusOr<google::longrunning::Operation>>
DefaultNetworkServicesStub::AsyncCreateGrpcRoute(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions,
    google::cloud::networkservices::v1::CreateGrpcRouteRequest const& request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::networkservices::v1::CreateGrpcRouteRequest,
      google::longrunning::Operation>(
      cq,
      [this](grpc::ClientContext* context,
             google::cloud::networkservices::v1::CreateGrpcRouteRequest const&
                 request,
             grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncCreateGrpcRoute(context, request, cq);
      },
      request, std::move(context));
}

future<StatusOr<google::longrunning::Operation>>
DefaultNetworkServicesStub::AsyncUpdateGrpcRoute(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions,
    google::cloud::networkservices::v1::UpdateGrpcRouteRequest const& request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::networkservices::v1::UpdateGrpcRouteRequest,
      google::longrunning::Operation>(
      cq,
      [this](grpc::ClientContext* context,
             google::cloud::networkservices::v1::UpdateGrpcRouteRequest const&
                 request,
             grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncUpdateGrpcRoute(context, request, cq);
      },
      request, std::move(context));
}

future<StatusOr<google::longrunning::Operation>>
DefaultNetworkServicesStub::AsyncDeleteGrpcRoute(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions,
    google::cloud::networkservices::v1::DeleteGrpcRouteRequest const& request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::networkservices::v1::DeleteGrpcRouteRequest,
      google::longrunning::Operation>(
      cq,
      [this](grpc::ClientContext* context,
             google::cloud::networkservices::v1::DeleteGrpcRouteRequest const&
                 request,
             grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncDeleteGrpcRoute(context, request, cq);
      },
      request, std::move(context));
}

StatusOr<google::cloud::networkservices::v1::ListHttpRoutesResponse>
DefaultNetworkServicesStub::ListHttpRoutes(
    grpc::ClientContext& context, Options const&,
    google::cloud::networkservices::v1::ListHttpRoutesRequest const& request) {
  google::cloud::networkservices::v1::ListHttpRoutesResponse response;
  auto status = grpc_stub_->ListHttpRoutes(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::networkservices::v1::HttpRoute>
DefaultNetworkServicesStub::GetHttpRoute(
    grpc::ClientContext& context, Options const&,
    google::cloud::networkservices::v1::GetHttpRouteRequest const& request) {
  google::cloud::networkservices::v1::HttpRoute response;
  auto status = grpc_stub_->GetHttpRoute(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

future<StatusOr<google::longrunning::Operation>>
DefaultNetworkServicesStub::AsyncCreateHttpRoute(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions,
    google::cloud::networkservices::v1::CreateHttpRouteRequest const& request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::networkservices::v1::CreateHttpRouteRequest,
      google::longrunning::Operation>(
      cq,
      [this](grpc::ClientContext* context,
             google::cloud::networkservices::v1::CreateHttpRouteRequest const&
                 request,
             grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncCreateHttpRoute(context, request, cq);
      },
      request, std::move(context));
}

future<StatusOr<google::longrunning::Operation>>
DefaultNetworkServicesStub::AsyncUpdateHttpRoute(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions,
    google::cloud::networkservices::v1::UpdateHttpRouteRequest const& request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::networkservices::v1::UpdateHttpRouteRequest,
      google::longrunning::Operation>(
      cq,
      [this](grpc::ClientContext* context,
             google::cloud::networkservices::v1::UpdateHttpRouteRequest const&
                 request,
             grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncUpdateHttpRoute(context, request, cq);
      },
      request, std::move(context));
}

future<StatusOr<google::longrunning::Operation>>
DefaultNetworkServicesStub::AsyncDeleteHttpRoute(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions,
    google::cloud::networkservices::v1::DeleteHttpRouteRequest const& request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::networkservices::v1::DeleteHttpRouteRequest,
      google::longrunning::Operation>(
      cq,
      [this](grpc::ClientContext* context,
             google::cloud::networkservices::v1::DeleteHttpRouteRequest const&
                 request,
             grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncDeleteHttpRoute(context, request, cq);
      },
      request, std::move(context));
}

StatusOr<google::cloud::networkservices::v1::ListTcpRoutesResponse>
DefaultNetworkServicesStub::ListTcpRoutes(
    grpc::ClientContext& context, Options const&,
    google::cloud::networkservices::v1::ListTcpRoutesRequest const& request) {
  google::cloud::networkservices::v1::ListTcpRoutesResponse response;
  auto status = grpc_stub_->ListTcpRoutes(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::networkservices::v1::TcpRoute>
DefaultNetworkServicesStub::GetTcpRoute(
    grpc::ClientContext& context, Options const&,
    google::cloud::networkservices::v1::GetTcpRouteRequest const& request) {
  google::cloud::networkservices::v1::TcpRoute response;
  auto status = grpc_stub_->GetTcpRoute(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

future<StatusOr<google::longrunning::Operation>>
DefaultNetworkServicesStub::AsyncCreateTcpRoute(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions,
    google::cloud::networkservices::v1::CreateTcpRouteRequest const& request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::networkservices::v1::CreateTcpRouteRequest,
      google::longrunning::Operation>(
      cq,
      [this](grpc::ClientContext* context,
             google::cloud::networkservices::v1::CreateTcpRouteRequest const&
                 request,
             grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncCreateTcpRoute(context, request, cq);
      },
      request, std::move(context));
}

future<StatusOr<google::longrunning::Operation>>
DefaultNetworkServicesStub::AsyncUpdateTcpRoute(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions,
    google::cloud::networkservices::v1::UpdateTcpRouteRequest const& request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::networkservices::v1::UpdateTcpRouteRequest,
      google::longrunning::Operation>(
      cq,
      [this](grpc::ClientContext* context,
             google::cloud::networkservices::v1::UpdateTcpRouteRequest const&
                 request,
             grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncUpdateTcpRoute(context, request, cq);
      },
      request, std::move(context));
}

future<StatusOr<google::longrunning::Operation>>
DefaultNetworkServicesStub::AsyncDeleteTcpRoute(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions,
    google::cloud::networkservices::v1::DeleteTcpRouteRequest const& request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::networkservices::v1::DeleteTcpRouteRequest,
      google::longrunning::Operation>(
      cq,
      [this](grpc::ClientContext* context,
             google::cloud::networkservices::v1::DeleteTcpRouteRequest const&
                 request,
             grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncDeleteTcpRoute(context, request, cq);
      },
      request, std::move(context));
}

StatusOr<google::cloud::networkservices::v1::ListTlsRoutesResponse>
DefaultNetworkServicesStub::ListTlsRoutes(
    grpc::ClientContext& context, Options const&,
    google::cloud::networkservices::v1::ListTlsRoutesRequest const& request) {
  google::cloud::networkservices::v1::ListTlsRoutesResponse response;
  auto status = grpc_stub_->ListTlsRoutes(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::networkservices::v1::TlsRoute>
DefaultNetworkServicesStub::GetTlsRoute(
    grpc::ClientContext& context, Options const&,
    google::cloud::networkservices::v1::GetTlsRouteRequest const& request) {
  google::cloud::networkservices::v1::TlsRoute response;
  auto status = grpc_stub_->GetTlsRoute(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

future<StatusOr<google::longrunning::Operation>>
DefaultNetworkServicesStub::AsyncCreateTlsRoute(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions,
    google::cloud::networkservices::v1::CreateTlsRouteRequest const& request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::networkservices::v1::CreateTlsRouteRequest,
      google::longrunning::Operation>(
      cq,
      [this](grpc::ClientContext* context,
             google::cloud::networkservices::v1::CreateTlsRouteRequest const&
                 request,
             grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncCreateTlsRoute(context, request, cq);
      },
      request, std::move(context));
}

future<StatusOr<google::longrunning::Operation>>
DefaultNetworkServicesStub::AsyncUpdateTlsRoute(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions,
    google::cloud::networkservices::v1::UpdateTlsRouteRequest const& request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::networkservices::v1::UpdateTlsRouteRequest,
      google::longrunning::Operation>(
      cq,
      [this](grpc::ClientContext* context,
             google::cloud::networkservices::v1::UpdateTlsRouteRequest const&
                 request,
             grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncUpdateTlsRoute(context, request, cq);
      },
      request, std::move(context));
}

future<StatusOr<google::longrunning::Operation>>
DefaultNetworkServicesStub::AsyncDeleteTlsRoute(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions,
    google::cloud::networkservices::v1::DeleteTlsRouteRequest const& request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::networkservices::v1::DeleteTlsRouteRequest,
      google::longrunning::Operation>(
      cq,
      [this](grpc::ClientContext* context,
             google::cloud::networkservices::v1::DeleteTlsRouteRequest const&
                 request,
             grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncDeleteTlsRoute(context, request, cq);
      },
      request, std::move(context));
}

StatusOr<google::cloud::networkservices::v1::ListServiceBindingsResponse>
DefaultNetworkServicesStub::ListServiceBindings(
    grpc::ClientContext& context, Options const&,
    google::cloud::networkservices::v1::ListServiceBindingsRequest const&
        request) {
  google::cloud::networkservices::v1::ListServiceBindingsResponse response;
  auto status = grpc_stub_->ListServiceBindings(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::networkservices::v1::ServiceBinding>
DefaultNetworkServicesStub::GetServiceBinding(
    grpc::ClientContext& context, Options const&,
    google::cloud::networkservices::v1::GetServiceBindingRequest const&
        request) {
  google::cloud::networkservices::v1::ServiceBinding response;
  auto status = grpc_stub_->GetServiceBinding(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

future<StatusOr<google::longrunning::Operation>>
DefaultNetworkServicesStub::AsyncCreateServiceBinding(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions,
    google::cloud::networkservices::v1::CreateServiceBindingRequest const&
        request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::networkservices::v1::CreateServiceBindingRequest,
      google::longrunning::Operation>(
      cq,
      [this](
          grpc::ClientContext* context,
          google::cloud::networkservices::v1::CreateServiceBindingRequest const&
              request,
          grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncCreateServiceBinding(context, request, cq);
      },
      request, std::move(context));
}

future<StatusOr<google::longrunning::Operation>>
DefaultNetworkServicesStub::AsyncDeleteServiceBinding(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions,
    google::cloud::networkservices::v1::DeleteServiceBindingRequest const&
        request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::networkservices::v1::DeleteServiceBindingRequest,
      google::longrunning::Operation>(
      cq,
      [this](
          grpc::ClientContext* context,
          google::cloud::networkservices::v1::DeleteServiceBindingRequest const&
              request,
          grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncDeleteServiceBinding(context, request, cq);
      },
      request, std::move(context));
}

StatusOr<google::cloud::networkservices::v1::ListMeshesResponse>
DefaultNetworkServicesStub::ListMeshes(
    grpc::ClientContext& context, Options const&,
    google::cloud::networkservices::v1::ListMeshesRequest const& request) {
  google::cloud::networkservices::v1::ListMeshesResponse response;
  auto status = grpc_stub_->ListMeshes(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::networkservices::v1::Mesh>
DefaultNetworkServicesStub::GetMesh(
    grpc::ClientContext& context, Options const&,
    google::cloud::networkservices::v1::GetMeshRequest const& request) {
  google::cloud::networkservices::v1::Mesh response;
  auto status = grpc_stub_->GetMesh(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

future<StatusOr<google::longrunning::Operation>>
DefaultNetworkServicesStub::AsyncCreateMesh(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions,
    google::cloud::networkservices::v1::CreateMeshRequest const& request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::networkservices::v1::CreateMeshRequest,
      google::longrunning::Operation>(
      cq,
      [this](
          grpc::ClientContext* context,
          google::cloud::networkservices::v1::CreateMeshRequest const& request,
          grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncCreateMesh(context, request, cq);
      },
      request, std::move(context));
}

future<StatusOr<google::longrunning::Operation>>
DefaultNetworkServicesStub::AsyncUpdateMesh(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions,
    google::cloud::networkservices::v1::UpdateMeshRequest const& request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::networkservices::v1::UpdateMeshRequest,
      google::longrunning::Operation>(
      cq,
      [this](
          grpc::ClientContext* context,
          google::cloud::networkservices::v1::UpdateMeshRequest const& request,
          grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncUpdateMesh(context, request, cq);
      },
      request, std::move(context));
}

future<StatusOr<google::longrunning::Operation>>
DefaultNetworkServicesStub::AsyncDeleteMesh(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions,
    google::cloud::networkservices::v1::DeleteMeshRequest const& request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::networkservices::v1::DeleteMeshRequest,
      google::longrunning::Operation>(
      cq,
      [this](
          grpc::ClientContext* context,
          google::cloud::networkservices::v1::DeleteMeshRequest const& request,
          grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncDeleteMesh(context, request, cq);
      },
      request, std::move(context));
}

future<StatusOr<google::longrunning::Operation>>
DefaultNetworkServicesStub::AsyncGetOperation(
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

future<Status> DefaultNetworkServicesStub::AsyncCancelOperation(
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
