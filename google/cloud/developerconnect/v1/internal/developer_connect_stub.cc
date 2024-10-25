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
// source: google/cloud/developerconnect/v1/developer_connect.proto

#include "google/cloud/developerconnect/v1/internal/developer_connect_stub.h"
#include "google/cloud/developerconnect/v1/developer_connect.grpc.pb.h"
#include "google/cloud/grpc_error_delegate.h"
#include "google/cloud/status_or.h"
#include "google/longrunning/operations.grpc.pb.h"
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace developerconnect_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

DeveloperConnectStub::~DeveloperConnectStub() = default;

StatusOr<google::cloud::developerconnect::v1::ListConnectionsResponse>
DefaultDeveloperConnectStub::ListConnections(
    grpc::ClientContext& context, Options const&,
    google::cloud::developerconnect::v1::ListConnectionsRequest const&
        request) {
  google::cloud::developerconnect::v1::ListConnectionsResponse response;
  auto status = grpc_stub_->ListConnections(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::developerconnect::v1::Connection>
DefaultDeveloperConnectStub::GetConnection(
    grpc::ClientContext& context, Options const&,
    google::cloud::developerconnect::v1::GetConnectionRequest const& request) {
  google::cloud::developerconnect::v1::Connection response;
  auto status = grpc_stub_->GetConnection(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

future<StatusOr<google::longrunning::Operation>>
DefaultDeveloperConnectStub::AsyncCreateConnection(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions,
    google::cloud::developerconnect::v1::CreateConnectionRequest const&
        request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::developerconnect::v1::CreateConnectionRequest,
      google::longrunning::Operation>(
      cq,
      [this](grpc::ClientContext* context,
             google::cloud::developerconnect::v1::CreateConnectionRequest const&
                 request,
             grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncCreateConnection(context, request, cq);
      },
      request, std::move(context));
}

StatusOr<google::longrunning::Operation>
DefaultDeveloperConnectStub::CreateConnection(
    grpc::ClientContext& context, Options,
    google::cloud::developerconnect::v1::CreateConnectionRequest const&
        request) {
  google::longrunning::Operation response;
  auto status = grpc_stub_->CreateConnection(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

future<StatusOr<google::longrunning::Operation>>
DefaultDeveloperConnectStub::AsyncUpdateConnection(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions,
    google::cloud::developerconnect::v1::UpdateConnectionRequest const&
        request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::developerconnect::v1::UpdateConnectionRequest,
      google::longrunning::Operation>(
      cq,
      [this](grpc::ClientContext* context,
             google::cloud::developerconnect::v1::UpdateConnectionRequest const&
                 request,
             grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncUpdateConnection(context, request, cq);
      },
      request, std::move(context));
}

StatusOr<google::longrunning::Operation>
DefaultDeveloperConnectStub::UpdateConnection(
    grpc::ClientContext& context, Options,
    google::cloud::developerconnect::v1::UpdateConnectionRequest const&
        request) {
  google::longrunning::Operation response;
  auto status = grpc_stub_->UpdateConnection(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

future<StatusOr<google::longrunning::Operation>>
DefaultDeveloperConnectStub::AsyncDeleteConnection(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions,
    google::cloud::developerconnect::v1::DeleteConnectionRequest const&
        request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::developerconnect::v1::DeleteConnectionRequest,
      google::longrunning::Operation>(
      cq,
      [this](grpc::ClientContext* context,
             google::cloud::developerconnect::v1::DeleteConnectionRequest const&
                 request,
             grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncDeleteConnection(context, request, cq);
      },
      request, std::move(context));
}

StatusOr<google::longrunning::Operation>
DefaultDeveloperConnectStub::DeleteConnection(
    grpc::ClientContext& context, Options,
    google::cloud::developerconnect::v1::DeleteConnectionRequest const&
        request) {
  google::longrunning::Operation response;
  auto status = grpc_stub_->DeleteConnection(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

future<StatusOr<google::longrunning::Operation>>
DefaultDeveloperConnectStub::AsyncCreateGitRepositoryLink(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions,
    google::cloud::developerconnect::v1::CreateGitRepositoryLinkRequest const&
        request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::developerconnect::v1::CreateGitRepositoryLinkRequest,
      google::longrunning::Operation>(
      cq,
      [this](grpc::ClientContext* context,
             google::cloud::developerconnect::v1::
                 CreateGitRepositoryLinkRequest const& request,
             grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncCreateGitRepositoryLink(context, request, cq);
      },
      request, std::move(context));
}

StatusOr<google::longrunning::Operation>
DefaultDeveloperConnectStub::CreateGitRepositoryLink(
    grpc::ClientContext& context, Options,
    google::cloud::developerconnect::v1::CreateGitRepositoryLinkRequest const&
        request) {
  google::longrunning::Operation response;
  auto status =
      grpc_stub_->CreateGitRepositoryLink(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

future<StatusOr<google::longrunning::Operation>>
DefaultDeveloperConnectStub::AsyncDeleteGitRepositoryLink(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions,
    google::cloud::developerconnect::v1::DeleteGitRepositoryLinkRequest const&
        request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::developerconnect::v1::DeleteGitRepositoryLinkRequest,
      google::longrunning::Operation>(
      cq,
      [this](grpc::ClientContext* context,
             google::cloud::developerconnect::v1::
                 DeleteGitRepositoryLinkRequest const& request,
             grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncDeleteGitRepositoryLink(context, request, cq);
      },
      request, std::move(context));
}

StatusOr<google::longrunning::Operation>
DefaultDeveloperConnectStub::DeleteGitRepositoryLink(
    grpc::ClientContext& context, Options,
    google::cloud::developerconnect::v1::DeleteGitRepositoryLinkRequest const&
        request) {
  google::longrunning::Operation response;
  auto status =
      grpc_stub_->DeleteGitRepositoryLink(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::developerconnect::v1::ListGitRepositoryLinksResponse>
DefaultDeveloperConnectStub::ListGitRepositoryLinks(
    grpc::ClientContext& context, Options const&,
    google::cloud::developerconnect::v1::ListGitRepositoryLinksRequest const&
        request) {
  google::cloud::developerconnect::v1::ListGitRepositoryLinksResponse response;
  auto status =
      grpc_stub_->ListGitRepositoryLinks(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::developerconnect::v1::GitRepositoryLink>
DefaultDeveloperConnectStub::GetGitRepositoryLink(
    grpc::ClientContext& context, Options const&,
    google::cloud::developerconnect::v1::GetGitRepositoryLinkRequest const&
        request) {
  google::cloud::developerconnect::v1::GitRepositoryLink response;
  auto status = grpc_stub_->GetGitRepositoryLink(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::developerconnect::v1::FetchReadWriteTokenResponse>
DefaultDeveloperConnectStub::FetchReadWriteToken(
    grpc::ClientContext& context, Options const&,
    google::cloud::developerconnect::v1::FetchReadWriteTokenRequest const&
        request) {
  google::cloud::developerconnect::v1::FetchReadWriteTokenResponse response;
  auto status = grpc_stub_->FetchReadWriteToken(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::developerconnect::v1::FetchReadTokenResponse>
DefaultDeveloperConnectStub::FetchReadToken(
    grpc::ClientContext& context, Options const&,
    google::cloud::developerconnect::v1::FetchReadTokenRequest const& request) {
  google::cloud::developerconnect::v1::FetchReadTokenResponse response;
  auto status = grpc_stub_->FetchReadToken(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<
    google::cloud::developerconnect::v1::FetchLinkableGitRepositoriesResponse>
DefaultDeveloperConnectStub::FetchLinkableGitRepositories(
    grpc::ClientContext& context, Options const&,
    google::cloud::developerconnect::v1::
        FetchLinkableGitRepositoriesRequest const& request) {
  google::cloud::developerconnect::v1::FetchLinkableGitRepositoriesResponse
      response;
  auto status =
      grpc_stub_->FetchLinkableGitRepositories(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::developerconnect::v1::FetchGitHubInstallationsResponse>
DefaultDeveloperConnectStub::FetchGitHubInstallations(
    grpc::ClientContext& context, Options const&,
    google::cloud::developerconnect::v1::FetchGitHubInstallationsRequest const&
        request) {
  google::cloud::developerconnect::v1::FetchGitHubInstallationsResponse
      response;
  auto status =
      grpc_stub_->FetchGitHubInstallations(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::developerconnect::v1::FetchGitRefsResponse>
DefaultDeveloperConnectStub::FetchGitRefs(
    grpc::ClientContext& context, Options const&,
    google::cloud::developerconnect::v1::FetchGitRefsRequest const& request) {
  google::cloud::developerconnect::v1::FetchGitRefsResponse response;
  auto status = grpc_stub_->FetchGitRefs(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::location::ListLocationsResponse>
DefaultDeveloperConnectStub::ListLocations(
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
DefaultDeveloperConnectStub::GetLocation(
    grpc::ClientContext& context, Options const&,
    google::cloud::location::GetLocationRequest const& request) {
  google::cloud::location::Location response;
  auto status = locations_stub_->GetLocation(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::longrunning::ListOperationsResponse>
DefaultDeveloperConnectStub::ListOperations(
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
DefaultDeveloperConnectStub::GetOperation(
    grpc::ClientContext& context, Options const&,
    google::longrunning::GetOperationRequest const& request) {
  google::longrunning::Operation response;
  auto status = operations_stub_->GetOperation(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

Status DefaultDeveloperConnectStub::DeleteOperation(
    grpc::ClientContext& context, Options const&,
    google::longrunning::DeleteOperationRequest const& request) {
  google::protobuf::Empty response;
  auto status = operations_stub_->DeleteOperation(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return google::cloud::Status();
}

Status DefaultDeveloperConnectStub::CancelOperation(
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
DefaultDeveloperConnectStub::AsyncGetOperation(
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

future<Status> DefaultDeveloperConnectStub::AsyncCancelOperation(
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
}  // namespace developerconnect_v1_internal
}  // namespace cloud
}  // namespace google
