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
// source: google/cloud/datastream/v1/datastream.proto

#include "google/cloud/datastream/v1/internal/datastream_stub.h"
#include "google/cloud/grpc_error_delegate.h"
#include "google/cloud/status_or.h"
#include <google/cloud/datastream/v1/datastream.grpc.pb.h>
#include <google/longrunning/operations.grpc.pb.h>
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace datastream_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

DatastreamStub::~DatastreamStub() = default;

StatusOr<google::cloud::datastream::v1::ListConnectionProfilesResponse>
DefaultDatastreamStub::ListConnectionProfiles(
    grpc::ClientContext& context, Options const&,
    google::cloud::datastream::v1::ListConnectionProfilesRequest const&
        request) {
  google::cloud::datastream::v1::ListConnectionProfilesResponse response;
  auto status =
      grpc_stub_->ListConnectionProfiles(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::datastream::v1::ConnectionProfile>
DefaultDatastreamStub::GetConnectionProfile(
    grpc::ClientContext& context, Options const&,
    google::cloud::datastream::v1::GetConnectionProfileRequest const& request) {
  google::cloud::datastream::v1::ConnectionProfile response;
  auto status = grpc_stub_->GetConnectionProfile(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

future<StatusOr<google::longrunning::Operation>>
DefaultDatastreamStub::AsyncCreateConnectionProfile(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions,
    google::cloud::datastream::v1::CreateConnectionProfileRequest const&
        request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::datastream::v1::CreateConnectionProfileRequest,
      google::longrunning::Operation>(
      cq,
      [this](
          grpc::ClientContext* context,
          google::cloud::datastream::v1::CreateConnectionProfileRequest const&
              request,
          grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncCreateConnectionProfile(context, request, cq);
      },
      request, std::move(context));
}

StatusOr<google::longrunning::Operation>
DefaultDatastreamStub::CreateConnectionProfile(
    grpc::ClientContext& context, Options,
    google::cloud::datastream::v1::CreateConnectionProfileRequest const&
        request) {
  google::longrunning::Operation response;
  auto status =
      grpc_stub_->CreateConnectionProfile(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

future<StatusOr<google::longrunning::Operation>>
DefaultDatastreamStub::AsyncUpdateConnectionProfile(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions,
    google::cloud::datastream::v1::UpdateConnectionProfileRequest const&
        request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::datastream::v1::UpdateConnectionProfileRequest,
      google::longrunning::Operation>(
      cq,
      [this](
          grpc::ClientContext* context,
          google::cloud::datastream::v1::UpdateConnectionProfileRequest const&
              request,
          grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncUpdateConnectionProfile(context, request, cq);
      },
      request, std::move(context));
}

StatusOr<google::longrunning::Operation>
DefaultDatastreamStub::UpdateConnectionProfile(
    grpc::ClientContext& context, Options,
    google::cloud::datastream::v1::UpdateConnectionProfileRequest const&
        request) {
  google::longrunning::Operation response;
  auto status =
      grpc_stub_->UpdateConnectionProfile(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

future<StatusOr<google::longrunning::Operation>>
DefaultDatastreamStub::AsyncDeleteConnectionProfile(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions,
    google::cloud::datastream::v1::DeleteConnectionProfileRequest const&
        request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::datastream::v1::DeleteConnectionProfileRequest,
      google::longrunning::Operation>(
      cq,
      [this](
          grpc::ClientContext* context,
          google::cloud::datastream::v1::DeleteConnectionProfileRequest const&
              request,
          grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncDeleteConnectionProfile(context, request, cq);
      },
      request, std::move(context));
}

StatusOr<google::longrunning::Operation>
DefaultDatastreamStub::DeleteConnectionProfile(
    grpc::ClientContext& context, Options,
    google::cloud::datastream::v1::DeleteConnectionProfileRequest const&
        request) {
  google::longrunning::Operation response;
  auto status =
      grpc_stub_->DeleteConnectionProfile(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::datastream::v1::DiscoverConnectionProfileResponse>
DefaultDatastreamStub::DiscoverConnectionProfile(
    grpc::ClientContext& context, Options const&,
    google::cloud::datastream::v1::DiscoverConnectionProfileRequest const&
        request) {
  google::cloud::datastream::v1::DiscoverConnectionProfileResponse response;
  auto status =
      grpc_stub_->DiscoverConnectionProfile(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::datastream::v1::ListStreamsResponse>
DefaultDatastreamStub::ListStreams(
    grpc::ClientContext& context, Options const&,
    google::cloud::datastream::v1::ListStreamsRequest const& request) {
  google::cloud::datastream::v1::ListStreamsResponse response;
  auto status = grpc_stub_->ListStreams(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::datastream::v1::Stream>
DefaultDatastreamStub::GetStream(
    grpc::ClientContext& context, Options const&,
    google::cloud::datastream::v1::GetStreamRequest const& request) {
  google::cloud::datastream::v1::Stream response;
  auto status = grpc_stub_->GetStream(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

future<StatusOr<google::longrunning::Operation>>
DefaultDatastreamStub::AsyncCreateStream(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions,
    google::cloud::datastream::v1::CreateStreamRequest const& request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::datastream::v1::CreateStreamRequest,
      google::longrunning::Operation>(
      cq,
      [this](grpc::ClientContext* context,
             google::cloud::datastream::v1::CreateStreamRequest const& request,
             grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncCreateStream(context, request, cq);
      },
      request, std::move(context));
}

StatusOr<google::longrunning::Operation> DefaultDatastreamStub::CreateStream(
    grpc::ClientContext& context, Options,
    google::cloud::datastream::v1::CreateStreamRequest const& request) {
  google::longrunning::Operation response;
  auto status = grpc_stub_->CreateStream(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

future<StatusOr<google::longrunning::Operation>>
DefaultDatastreamStub::AsyncUpdateStream(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions,
    google::cloud::datastream::v1::UpdateStreamRequest const& request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::datastream::v1::UpdateStreamRequest,
      google::longrunning::Operation>(
      cq,
      [this](grpc::ClientContext* context,
             google::cloud::datastream::v1::UpdateStreamRequest const& request,
             grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncUpdateStream(context, request, cq);
      },
      request, std::move(context));
}

StatusOr<google::longrunning::Operation> DefaultDatastreamStub::UpdateStream(
    grpc::ClientContext& context, Options,
    google::cloud::datastream::v1::UpdateStreamRequest const& request) {
  google::longrunning::Operation response;
  auto status = grpc_stub_->UpdateStream(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

future<StatusOr<google::longrunning::Operation>>
DefaultDatastreamStub::AsyncDeleteStream(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions,
    google::cloud::datastream::v1::DeleteStreamRequest const& request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::datastream::v1::DeleteStreamRequest,
      google::longrunning::Operation>(
      cq,
      [this](grpc::ClientContext* context,
             google::cloud::datastream::v1::DeleteStreamRequest const& request,
             grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncDeleteStream(context, request, cq);
      },
      request, std::move(context));
}

StatusOr<google::longrunning::Operation> DefaultDatastreamStub::DeleteStream(
    grpc::ClientContext& context, Options,
    google::cloud::datastream::v1::DeleteStreamRequest const& request) {
  google::longrunning::Operation response;
  auto status = grpc_stub_->DeleteStream(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::datastream::v1::StreamObject>
DefaultDatastreamStub::GetStreamObject(
    grpc::ClientContext& context, Options const&,
    google::cloud::datastream::v1::GetStreamObjectRequest const& request) {
  google::cloud::datastream::v1::StreamObject response;
  auto status = grpc_stub_->GetStreamObject(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::datastream::v1::StreamObject>
DefaultDatastreamStub::LookupStreamObject(
    grpc::ClientContext& context, Options const&,
    google::cloud::datastream::v1::LookupStreamObjectRequest const& request) {
  google::cloud::datastream::v1::StreamObject response;
  auto status = grpc_stub_->LookupStreamObject(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::datastream::v1::ListStreamObjectsResponse>
DefaultDatastreamStub::ListStreamObjects(
    grpc::ClientContext& context, Options const&,
    google::cloud::datastream::v1::ListStreamObjectsRequest const& request) {
  google::cloud::datastream::v1::ListStreamObjectsResponse response;
  auto status = grpc_stub_->ListStreamObjects(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::datastream::v1::StartBackfillJobResponse>
DefaultDatastreamStub::StartBackfillJob(
    grpc::ClientContext& context, Options const&,
    google::cloud::datastream::v1::StartBackfillJobRequest const& request) {
  google::cloud::datastream::v1::StartBackfillJobResponse response;
  auto status = grpc_stub_->StartBackfillJob(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::datastream::v1::StopBackfillJobResponse>
DefaultDatastreamStub::StopBackfillJob(
    grpc::ClientContext& context, Options const&,
    google::cloud::datastream::v1::StopBackfillJobRequest const& request) {
  google::cloud::datastream::v1::StopBackfillJobResponse response;
  auto status = grpc_stub_->StopBackfillJob(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::datastream::v1::FetchStaticIpsResponse>
DefaultDatastreamStub::FetchStaticIps(
    grpc::ClientContext& context, Options const&,
    google::cloud::datastream::v1::FetchStaticIpsRequest const& request) {
  google::cloud::datastream::v1::FetchStaticIpsResponse response;
  auto status = grpc_stub_->FetchStaticIps(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

future<StatusOr<google::longrunning::Operation>>
DefaultDatastreamStub::AsyncCreatePrivateConnection(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions,
    google::cloud::datastream::v1::CreatePrivateConnectionRequest const&
        request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::datastream::v1::CreatePrivateConnectionRequest,
      google::longrunning::Operation>(
      cq,
      [this](
          grpc::ClientContext* context,
          google::cloud::datastream::v1::CreatePrivateConnectionRequest const&
              request,
          grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncCreatePrivateConnection(context, request, cq);
      },
      request, std::move(context));
}

StatusOr<google::longrunning::Operation>
DefaultDatastreamStub::CreatePrivateConnection(
    grpc::ClientContext& context, Options,
    google::cloud::datastream::v1::CreatePrivateConnectionRequest const&
        request) {
  google::longrunning::Operation response;
  auto status =
      grpc_stub_->CreatePrivateConnection(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::datastream::v1::PrivateConnection>
DefaultDatastreamStub::GetPrivateConnection(
    grpc::ClientContext& context, Options const&,
    google::cloud::datastream::v1::GetPrivateConnectionRequest const& request) {
  google::cloud::datastream::v1::PrivateConnection response;
  auto status = grpc_stub_->GetPrivateConnection(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::datastream::v1::ListPrivateConnectionsResponse>
DefaultDatastreamStub::ListPrivateConnections(
    grpc::ClientContext& context, Options const&,
    google::cloud::datastream::v1::ListPrivateConnectionsRequest const&
        request) {
  google::cloud::datastream::v1::ListPrivateConnectionsResponse response;
  auto status =
      grpc_stub_->ListPrivateConnections(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

future<StatusOr<google::longrunning::Operation>>
DefaultDatastreamStub::AsyncDeletePrivateConnection(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions,
    google::cloud::datastream::v1::DeletePrivateConnectionRequest const&
        request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::datastream::v1::DeletePrivateConnectionRequest,
      google::longrunning::Operation>(
      cq,
      [this](
          grpc::ClientContext* context,
          google::cloud::datastream::v1::DeletePrivateConnectionRequest const&
              request,
          grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncDeletePrivateConnection(context, request, cq);
      },
      request, std::move(context));
}

StatusOr<google::longrunning::Operation>
DefaultDatastreamStub::DeletePrivateConnection(
    grpc::ClientContext& context, Options,
    google::cloud::datastream::v1::DeletePrivateConnectionRequest const&
        request) {
  google::longrunning::Operation response;
  auto status =
      grpc_stub_->DeletePrivateConnection(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

future<StatusOr<google::longrunning::Operation>>
DefaultDatastreamStub::AsyncCreateRoute(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions,
    google::cloud::datastream::v1::CreateRouteRequest const& request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::datastream::v1::CreateRouteRequest,
      google::longrunning::Operation>(
      cq,
      [this](grpc::ClientContext* context,
             google::cloud::datastream::v1::CreateRouteRequest const& request,
             grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncCreateRoute(context, request, cq);
      },
      request, std::move(context));
}

StatusOr<google::longrunning::Operation> DefaultDatastreamStub::CreateRoute(
    grpc::ClientContext& context, Options,
    google::cloud::datastream::v1::CreateRouteRequest const& request) {
  google::longrunning::Operation response;
  auto status = grpc_stub_->CreateRoute(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::datastream::v1::Route> DefaultDatastreamStub::GetRoute(
    grpc::ClientContext& context, Options const&,
    google::cloud::datastream::v1::GetRouteRequest const& request) {
  google::cloud::datastream::v1::Route response;
  auto status = grpc_stub_->GetRoute(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::datastream::v1::ListRoutesResponse>
DefaultDatastreamStub::ListRoutes(
    grpc::ClientContext& context, Options const&,
    google::cloud::datastream::v1::ListRoutesRequest const& request) {
  google::cloud::datastream::v1::ListRoutesResponse response;
  auto status = grpc_stub_->ListRoutes(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

future<StatusOr<google::longrunning::Operation>>
DefaultDatastreamStub::AsyncDeleteRoute(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions,
    google::cloud::datastream::v1::DeleteRouteRequest const& request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::datastream::v1::DeleteRouteRequest,
      google::longrunning::Operation>(
      cq,
      [this](grpc::ClientContext* context,
             google::cloud::datastream::v1::DeleteRouteRequest const& request,
             grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncDeleteRoute(context, request, cq);
      },
      request, std::move(context));
}

StatusOr<google::longrunning::Operation> DefaultDatastreamStub::DeleteRoute(
    grpc::ClientContext& context, Options,
    google::cloud::datastream::v1::DeleteRouteRequest const& request) {
  google::longrunning::Operation response;
  auto status = grpc_stub_->DeleteRoute(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::location::ListLocationsResponse>
DefaultDatastreamStub::ListLocations(
    grpc::ClientContext& context, Options const&,
    google::cloud::location::ListLocationsRequest const& request) {
  google::cloud::location::ListLocationsResponse response;
  auto status = locations_stub_->ListLocations(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::location::Location> DefaultDatastreamStub::GetLocation(
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
DefaultDatastreamStub::ListOperations(
    grpc::ClientContext& context, Options const&,
    google::longrunning::ListOperationsRequest const& request) {
  google::longrunning::ListOperationsResponse response;
  auto status = operations_stub_->ListOperations(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::longrunning::Operation> DefaultDatastreamStub::GetOperation(
    grpc::ClientContext& context, Options const&,
    google::longrunning::GetOperationRequest const& request) {
  google::longrunning::Operation response;
  auto status = operations_stub_->GetOperation(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

Status DefaultDatastreamStub::DeleteOperation(
    grpc::ClientContext& context, Options const&,
    google::longrunning::DeleteOperationRequest const& request) {
  google::protobuf::Empty response;
  auto status = operations_stub_->DeleteOperation(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return google::cloud::Status();
}

Status DefaultDatastreamStub::CancelOperation(
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
DefaultDatastreamStub::AsyncGetOperation(
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

future<Status> DefaultDatastreamStub::AsyncCancelOperation(
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
}  // namespace datastream_v1_internal
}  // namespace cloud
}  // namespace google
