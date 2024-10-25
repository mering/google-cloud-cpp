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

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DEVELOPERCONNECT_V1_INTERNAL_DEVELOPER_CONNECT_STUB_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DEVELOPERCONNECT_V1_INTERNAL_DEVELOPER_CONNECT_STUB_H

#include "google/cloud/developerconnect/v1/developer_connect.grpc.pb.h"
#include "google/cloud/location/locations.grpc.pb.h"
#include "google/cloud/completion_queue.h"
#include "google/cloud/future.h"
#include "google/cloud/options.h"
#include "google/cloud/status_or.h"
#include "google/cloud/version.h"
#include "google/longrunning/operations.grpc.pb.h"
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace developerconnect_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class DeveloperConnectStub {
 public:
  virtual ~DeveloperConnectStub() = 0;

  virtual StatusOr<google::cloud::developerconnect::v1::ListConnectionsResponse>
  ListConnections(
      grpc::ClientContext& context, Options const& options,
      google::cloud::developerconnect::v1::ListConnectionsRequest const&
          request) = 0;

  virtual StatusOr<google::cloud::developerconnect::v1::Connection>
  GetConnection(grpc::ClientContext& context, Options const& options,
                google::cloud::developerconnect::v1::GetConnectionRequest const&
                    request) = 0;

  virtual future<StatusOr<google::longrunning::Operation>>
  AsyncCreateConnection(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::developerconnect::v1::CreateConnectionRequest const&
          request) = 0;

  virtual StatusOr<google::longrunning::Operation> CreateConnection(
      grpc::ClientContext& context, Options options,
      google::cloud::developerconnect::v1::CreateConnectionRequest const&
          request) = 0;

  virtual future<StatusOr<google::longrunning::Operation>>
  AsyncUpdateConnection(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::developerconnect::v1::UpdateConnectionRequest const&
          request) = 0;

  virtual StatusOr<google::longrunning::Operation> UpdateConnection(
      grpc::ClientContext& context, Options options,
      google::cloud::developerconnect::v1::UpdateConnectionRequest const&
          request) = 0;

  virtual future<StatusOr<google::longrunning::Operation>>
  AsyncDeleteConnection(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::developerconnect::v1::DeleteConnectionRequest const&
          request) = 0;

  virtual StatusOr<google::longrunning::Operation> DeleteConnection(
      grpc::ClientContext& context, Options options,
      google::cloud::developerconnect::v1::DeleteConnectionRequest const&
          request) = 0;

  virtual future<StatusOr<google::longrunning::Operation>>
  AsyncCreateGitRepositoryLink(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::developerconnect::v1::CreateGitRepositoryLinkRequest const&
          request) = 0;

  virtual StatusOr<google::longrunning::Operation> CreateGitRepositoryLink(
      grpc::ClientContext& context, Options options,
      google::cloud::developerconnect::v1::CreateGitRepositoryLinkRequest const&
          request) = 0;

  virtual future<StatusOr<google::longrunning::Operation>>
  AsyncDeleteGitRepositoryLink(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::developerconnect::v1::DeleteGitRepositoryLinkRequest const&
          request) = 0;

  virtual StatusOr<google::longrunning::Operation> DeleteGitRepositoryLink(
      grpc::ClientContext& context, Options options,
      google::cloud::developerconnect::v1::DeleteGitRepositoryLinkRequest const&
          request) = 0;

  virtual StatusOr<
      google::cloud::developerconnect::v1::ListGitRepositoryLinksResponse>
  ListGitRepositoryLinks(
      grpc::ClientContext& context, Options const& options,
      google::cloud::developerconnect::v1::ListGitRepositoryLinksRequest const&
          request) = 0;

  virtual StatusOr<google::cloud::developerconnect::v1::GitRepositoryLink>
  GetGitRepositoryLink(
      grpc::ClientContext& context, Options const& options,
      google::cloud::developerconnect::v1::GetGitRepositoryLinkRequest const&
          request) = 0;

  virtual StatusOr<
      google::cloud::developerconnect::v1::FetchReadWriteTokenResponse>
  FetchReadWriteToken(
      grpc::ClientContext& context, Options const& options,
      google::cloud::developerconnect::v1::FetchReadWriteTokenRequest const&
          request) = 0;

  virtual StatusOr<google::cloud::developerconnect::v1::FetchReadTokenResponse>
  FetchReadToken(
      grpc::ClientContext& context, Options const& options,
      google::cloud::developerconnect::v1::FetchReadTokenRequest const&
          request) = 0;

  virtual StatusOr<
      google::cloud::developerconnect::v1::FetchLinkableGitRepositoriesResponse>
  FetchLinkableGitRepositories(
      grpc::ClientContext& context, Options const& options,
      google::cloud::developerconnect::v1::
          FetchLinkableGitRepositoriesRequest const& request) = 0;

  virtual StatusOr<
      google::cloud::developerconnect::v1::FetchGitHubInstallationsResponse>
  FetchGitHubInstallations(
      grpc::ClientContext& context, Options const& options,
      google::cloud::developerconnect::v1::
          FetchGitHubInstallationsRequest const& request) = 0;

  virtual StatusOr<google::cloud::developerconnect::v1::FetchGitRefsResponse>
  FetchGitRefs(grpc::ClientContext& context, Options const& options,
               google::cloud::developerconnect::v1::FetchGitRefsRequest const&
                   request) = 0;

  virtual StatusOr<google::cloud::location::ListLocationsResponse>
  ListLocations(
      grpc::ClientContext& context, Options const& options,
      google::cloud::location::ListLocationsRequest const& request) = 0;

  virtual StatusOr<google::cloud::location::Location> GetLocation(
      grpc::ClientContext& context, Options const& options,
      google::cloud::location::GetLocationRequest const& request) = 0;

  virtual StatusOr<google::longrunning::ListOperationsResponse> ListOperations(
      grpc::ClientContext& context, Options const& options,
      google::longrunning::ListOperationsRequest const& request) = 0;

  virtual StatusOr<google::longrunning::Operation> GetOperation(
      grpc::ClientContext& context, Options const& options,
      google::longrunning::GetOperationRequest const& request) = 0;

  virtual Status DeleteOperation(
      grpc::ClientContext& context, Options const& options,
      google::longrunning::DeleteOperationRequest const& request) = 0;

  virtual Status CancelOperation(
      grpc::ClientContext& context, Options const& options,
      google::longrunning::CancelOperationRequest const& request) = 0;

  virtual future<StatusOr<google::longrunning::Operation>> AsyncGetOperation(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::longrunning::GetOperationRequest const& request) = 0;

  virtual future<Status> AsyncCancelOperation(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::longrunning::CancelOperationRequest const& request) = 0;
};

class DefaultDeveloperConnectStub : public DeveloperConnectStub {
 public:
  DefaultDeveloperConnectStub(
      std::unique_ptr<
          google::cloud::developerconnect::v1::DeveloperConnect::StubInterface>
          grpc_stub,
      std::unique_ptr<google::longrunning::Operations::StubInterface>
          operations_stub,
      std::unique_ptr<google::cloud::location::Locations::StubInterface>
          locations_stub,
      std::unique_ptr<google::longrunning::Operations::StubInterface>
          operations)
      : grpc_stub_(std::move(grpc_stub)),
        operations_stub_(std::move(operations_stub)),
        locations_stub_(std::move(locations_stub)),
        operations_(std::move(operations)) {}

  StatusOr<google::cloud::developerconnect::v1::ListConnectionsResponse>
  ListConnections(
      grpc::ClientContext& context, Options const& options,
      google::cloud::developerconnect::v1::ListConnectionsRequest const&
          request) override;

  StatusOr<google::cloud::developerconnect::v1::Connection> GetConnection(
      grpc::ClientContext& context, Options const& options,
      google::cloud::developerconnect::v1::GetConnectionRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncCreateConnection(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::developerconnect::v1::CreateConnectionRequest const&
          request) override;

  StatusOr<google::longrunning::Operation> CreateConnection(
      grpc::ClientContext& context, Options options,
      google::cloud::developerconnect::v1::CreateConnectionRequest const&
          request) override;

  future<StatusOr<google::longrunning::Operation>> AsyncUpdateConnection(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::developerconnect::v1::UpdateConnectionRequest const&
          request) override;

  StatusOr<google::longrunning::Operation> UpdateConnection(
      grpc::ClientContext& context, Options options,
      google::cloud::developerconnect::v1::UpdateConnectionRequest const&
          request) override;

  future<StatusOr<google::longrunning::Operation>> AsyncDeleteConnection(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::developerconnect::v1::DeleteConnectionRequest const&
          request) override;

  StatusOr<google::longrunning::Operation> DeleteConnection(
      grpc::ClientContext& context, Options options,
      google::cloud::developerconnect::v1::DeleteConnectionRequest const&
          request) override;

  future<StatusOr<google::longrunning::Operation>> AsyncCreateGitRepositoryLink(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::developerconnect::v1::CreateGitRepositoryLinkRequest const&
          request) override;

  StatusOr<google::longrunning::Operation> CreateGitRepositoryLink(
      grpc::ClientContext& context, Options options,
      google::cloud::developerconnect::v1::CreateGitRepositoryLinkRequest const&
          request) override;

  future<StatusOr<google::longrunning::Operation>> AsyncDeleteGitRepositoryLink(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::developerconnect::v1::DeleteGitRepositoryLinkRequest const&
          request) override;

  StatusOr<google::longrunning::Operation> DeleteGitRepositoryLink(
      grpc::ClientContext& context, Options options,
      google::cloud::developerconnect::v1::DeleteGitRepositoryLinkRequest const&
          request) override;

  StatusOr<google::cloud::developerconnect::v1::ListGitRepositoryLinksResponse>
  ListGitRepositoryLinks(
      grpc::ClientContext& context, Options const& options,
      google::cloud::developerconnect::v1::ListGitRepositoryLinksRequest const&
          request) override;

  StatusOr<google::cloud::developerconnect::v1::GitRepositoryLink>
  GetGitRepositoryLink(
      grpc::ClientContext& context, Options const& options,
      google::cloud::developerconnect::v1::GetGitRepositoryLinkRequest const&
          request) override;

  StatusOr<google::cloud::developerconnect::v1::FetchReadWriteTokenResponse>
  FetchReadWriteToken(
      grpc::ClientContext& context, Options const& options,
      google::cloud::developerconnect::v1::FetchReadWriteTokenRequest const&
          request) override;

  StatusOr<google::cloud::developerconnect::v1::FetchReadTokenResponse>
  FetchReadToken(
      grpc::ClientContext& context, Options const& options,
      google::cloud::developerconnect::v1::FetchReadTokenRequest const& request)
      override;

  StatusOr<
      google::cloud::developerconnect::v1::FetchLinkableGitRepositoriesResponse>
  FetchLinkableGitRepositories(
      grpc::ClientContext& context, Options const& options,
      google::cloud::developerconnect::v1::
          FetchLinkableGitRepositoriesRequest const& request) override;

  StatusOr<
      google::cloud::developerconnect::v1::FetchGitHubInstallationsResponse>
  FetchGitHubInstallations(
      grpc::ClientContext& context, Options const& options,
      google::cloud::developerconnect::v1::
          FetchGitHubInstallationsRequest const& request) override;

  StatusOr<google::cloud::developerconnect::v1::FetchGitRefsResponse>
  FetchGitRefs(grpc::ClientContext& context, Options const& options,
               google::cloud::developerconnect::v1::FetchGitRefsRequest const&
                   request) override;

  StatusOr<google::cloud::location::ListLocationsResponse> ListLocations(
      grpc::ClientContext& context, Options const& options,
      google::cloud::location::ListLocationsRequest const& request) override;

  StatusOr<google::cloud::location::Location> GetLocation(
      grpc::ClientContext& context, Options const& options,
      google::cloud::location::GetLocationRequest const& request) override;

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
  std::unique_ptr<
      google::cloud::developerconnect::v1::DeveloperConnect::StubInterface>
      grpc_stub_;
  std::unique_ptr<google::longrunning::Operations::StubInterface>
      operations_stub_;
  std::unique_ptr<google::cloud::location::Locations::StubInterface>
      locations_stub_;
  std::unique_ptr<google::longrunning::Operations::StubInterface> operations_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace developerconnect_v1_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DEVELOPERCONNECT_V1_INTERNAL_DEVELOPER_CONNECT_STUB_H
