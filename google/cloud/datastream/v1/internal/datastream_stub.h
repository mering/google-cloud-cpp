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

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DATASTREAM_V1_INTERNAL_DATASTREAM_STUB_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DATASTREAM_V1_INTERNAL_DATASTREAM_STUB_H

#include "google/cloud/completion_queue.h"
#include "google/cloud/future.h"
#include "google/cloud/options.h"
#include "google/cloud/status_or.h"
#include "google/cloud/version.h"
#include "google/cloud/datastream/v1/datastream.grpc.pb.h"
#include "google/cloud/location/locations.grpc.pb.h"
#include "google/longrunning/operations.grpc.pb.h"
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace datastream_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class DatastreamStub {
 public:
  virtual ~DatastreamStub() = 0;

  virtual StatusOr<
      google::cloud::datastream::v1::ListConnectionProfilesResponse>
  ListConnectionProfiles(
      grpc::ClientContext& context, Options const& options,
      google::cloud::datastream::v1::ListConnectionProfilesRequest const&
          request) = 0;

  virtual StatusOr<google::cloud::datastream::v1::ConnectionProfile>
  GetConnectionProfile(
      grpc::ClientContext& context, Options const& options,
      google::cloud::datastream::v1::GetConnectionProfileRequest const&
          request) = 0;

  virtual future<StatusOr<google::longrunning::Operation>>
  AsyncCreateConnectionProfile(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::datastream::v1::CreateConnectionProfileRequest const&
          request) = 0;

  virtual StatusOr<google::longrunning::Operation> CreateConnectionProfile(
      grpc::ClientContext& context, Options options,
      google::cloud::datastream::v1::CreateConnectionProfileRequest const&
          request) = 0;

  virtual future<StatusOr<google::longrunning::Operation>>
  AsyncUpdateConnectionProfile(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::datastream::v1::UpdateConnectionProfileRequest const&
          request) = 0;

  virtual StatusOr<google::longrunning::Operation> UpdateConnectionProfile(
      grpc::ClientContext& context, Options options,
      google::cloud::datastream::v1::UpdateConnectionProfileRequest const&
          request) = 0;

  virtual future<StatusOr<google::longrunning::Operation>>
  AsyncDeleteConnectionProfile(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::datastream::v1::DeleteConnectionProfileRequest const&
          request) = 0;

  virtual StatusOr<google::longrunning::Operation> DeleteConnectionProfile(
      grpc::ClientContext& context, Options options,
      google::cloud::datastream::v1::DeleteConnectionProfileRequest const&
          request) = 0;

  virtual StatusOr<
      google::cloud::datastream::v1::DiscoverConnectionProfileResponse>
  DiscoverConnectionProfile(
      grpc::ClientContext& context, Options const& options,
      google::cloud::datastream::v1::DiscoverConnectionProfileRequest const&
          request) = 0;

  virtual StatusOr<google::cloud::datastream::v1::ListStreamsResponse>
  ListStreams(
      grpc::ClientContext& context, Options const& options,
      google::cloud::datastream::v1::ListStreamsRequest const& request) = 0;

  virtual StatusOr<google::cloud::datastream::v1::Stream> GetStream(
      grpc::ClientContext& context, Options const& options,
      google::cloud::datastream::v1::GetStreamRequest const& request) = 0;

  virtual future<StatusOr<google::longrunning::Operation>> AsyncCreateStream(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::datastream::v1::CreateStreamRequest const& request) = 0;

  virtual StatusOr<google::longrunning::Operation> CreateStream(
      grpc::ClientContext& context, Options options,
      google::cloud::datastream::v1::CreateStreamRequest const& request) = 0;

  virtual future<StatusOr<google::longrunning::Operation>> AsyncUpdateStream(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::datastream::v1::UpdateStreamRequest const& request) = 0;

  virtual StatusOr<google::longrunning::Operation> UpdateStream(
      grpc::ClientContext& context, Options options,
      google::cloud::datastream::v1::UpdateStreamRequest const& request) = 0;

  virtual future<StatusOr<google::longrunning::Operation>> AsyncDeleteStream(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::datastream::v1::DeleteStreamRequest const& request) = 0;

  virtual StatusOr<google::longrunning::Operation> DeleteStream(
      grpc::ClientContext& context, Options options,
      google::cloud::datastream::v1::DeleteStreamRequest const& request) = 0;

  virtual StatusOr<google::cloud::datastream::v1::StreamObject> GetStreamObject(
      grpc::ClientContext& context, Options const& options,
      google::cloud::datastream::v1::GetStreamObjectRequest const& request) = 0;

  virtual StatusOr<google::cloud::datastream::v1::StreamObject>
  LookupStreamObject(
      grpc::ClientContext& context, Options const& options,
      google::cloud::datastream::v1::LookupStreamObjectRequest const&
          request) = 0;

  virtual StatusOr<google::cloud::datastream::v1::ListStreamObjectsResponse>
  ListStreamObjects(
      grpc::ClientContext& context, Options const& options,
      google::cloud::datastream::v1::ListStreamObjectsRequest const&
          request) = 0;

  virtual StatusOr<google::cloud::datastream::v1::StartBackfillJobResponse>
  StartBackfillJob(grpc::ClientContext& context, Options const& options,
                   google::cloud::datastream::v1::StartBackfillJobRequest const&
                       request) = 0;

  virtual StatusOr<google::cloud::datastream::v1::StopBackfillJobResponse>
  StopBackfillJob(
      grpc::ClientContext& context, Options const& options,
      google::cloud::datastream::v1::StopBackfillJobRequest const& request) = 0;

  virtual StatusOr<google::cloud::datastream::v1::FetchStaticIpsResponse>
  FetchStaticIps(
      grpc::ClientContext& context, Options const& options,
      google::cloud::datastream::v1::FetchStaticIpsRequest const& request) = 0;

  virtual future<StatusOr<google::longrunning::Operation>>
  AsyncCreatePrivateConnection(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::datastream::v1::CreatePrivateConnectionRequest const&
          request) = 0;

  virtual StatusOr<google::longrunning::Operation> CreatePrivateConnection(
      grpc::ClientContext& context, Options options,
      google::cloud::datastream::v1::CreatePrivateConnectionRequest const&
          request) = 0;

  virtual StatusOr<google::cloud::datastream::v1::PrivateConnection>
  GetPrivateConnection(
      grpc::ClientContext& context, Options const& options,
      google::cloud::datastream::v1::GetPrivateConnectionRequest const&
          request) = 0;

  virtual StatusOr<
      google::cloud::datastream::v1::ListPrivateConnectionsResponse>
  ListPrivateConnections(
      grpc::ClientContext& context, Options const& options,
      google::cloud::datastream::v1::ListPrivateConnectionsRequest const&
          request) = 0;

  virtual future<StatusOr<google::longrunning::Operation>>
  AsyncDeletePrivateConnection(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::datastream::v1::DeletePrivateConnectionRequest const&
          request) = 0;

  virtual StatusOr<google::longrunning::Operation> DeletePrivateConnection(
      grpc::ClientContext& context, Options options,
      google::cloud::datastream::v1::DeletePrivateConnectionRequest const&
          request) = 0;

  virtual future<StatusOr<google::longrunning::Operation>> AsyncCreateRoute(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::datastream::v1::CreateRouteRequest const& request) = 0;

  virtual StatusOr<google::longrunning::Operation> CreateRoute(
      grpc::ClientContext& context, Options options,
      google::cloud::datastream::v1::CreateRouteRequest const& request) = 0;

  virtual StatusOr<google::cloud::datastream::v1::Route> GetRoute(
      grpc::ClientContext& context, Options const& options,
      google::cloud::datastream::v1::GetRouteRequest const& request) = 0;

  virtual StatusOr<google::cloud::datastream::v1::ListRoutesResponse>
  ListRoutes(
      grpc::ClientContext& context, Options const& options,
      google::cloud::datastream::v1::ListRoutesRequest const& request) = 0;

  virtual future<StatusOr<google::longrunning::Operation>> AsyncDeleteRoute(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::datastream::v1::DeleteRouteRequest const& request) = 0;

  virtual StatusOr<google::longrunning::Operation> DeleteRoute(
      grpc::ClientContext& context, Options options,
      google::cloud::datastream::v1::DeleteRouteRequest const& request) = 0;

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

class DefaultDatastreamStub : public DatastreamStub {
 public:
  DefaultDatastreamStub(
      std::unique_ptr<google::cloud::datastream::v1::Datastream::StubInterface>
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

  StatusOr<google::cloud::datastream::v1::ListConnectionProfilesResponse>
  ListConnectionProfiles(
      grpc::ClientContext& context, Options const& options,
      google::cloud::datastream::v1::ListConnectionProfilesRequest const&
          request) override;

  StatusOr<google::cloud::datastream::v1::ConnectionProfile>
  GetConnectionProfile(
      grpc::ClientContext& context, Options const& options,
      google::cloud::datastream::v1::GetConnectionProfileRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncCreateConnectionProfile(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::datastream::v1::CreateConnectionProfileRequest const&
          request) override;

  StatusOr<google::longrunning::Operation> CreateConnectionProfile(
      grpc::ClientContext& context, Options options,
      google::cloud::datastream::v1::CreateConnectionProfileRequest const&
          request) override;

  future<StatusOr<google::longrunning::Operation>> AsyncUpdateConnectionProfile(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::datastream::v1::UpdateConnectionProfileRequest const&
          request) override;

  StatusOr<google::longrunning::Operation> UpdateConnectionProfile(
      grpc::ClientContext& context, Options options,
      google::cloud::datastream::v1::UpdateConnectionProfileRequest const&
          request) override;

  future<StatusOr<google::longrunning::Operation>> AsyncDeleteConnectionProfile(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::datastream::v1::DeleteConnectionProfileRequest const&
          request) override;

  StatusOr<google::longrunning::Operation> DeleteConnectionProfile(
      grpc::ClientContext& context, Options options,
      google::cloud::datastream::v1::DeleteConnectionProfileRequest const&
          request) override;

  StatusOr<google::cloud::datastream::v1::DiscoverConnectionProfileResponse>
  DiscoverConnectionProfile(
      grpc::ClientContext& context, Options const& options,
      google::cloud::datastream::v1::DiscoverConnectionProfileRequest const&
          request) override;

  StatusOr<google::cloud::datastream::v1::ListStreamsResponse> ListStreams(
      grpc::ClientContext& context, Options const& options,
      google::cloud::datastream::v1::ListStreamsRequest const& request)
      override;

  StatusOr<google::cloud::datastream::v1::Stream> GetStream(
      grpc::ClientContext& context, Options const& options,
      google::cloud::datastream::v1::GetStreamRequest const& request) override;

  future<StatusOr<google::longrunning::Operation>> AsyncCreateStream(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::datastream::v1::CreateStreamRequest const& request)
      override;

  StatusOr<google::longrunning::Operation> CreateStream(
      grpc::ClientContext& context, Options options,
      google::cloud::datastream::v1::CreateStreamRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncUpdateStream(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::datastream::v1::UpdateStreamRequest const& request)
      override;

  StatusOr<google::longrunning::Operation> UpdateStream(
      grpc::ClientContext& context, Options options,
      google::cloud::datastream::v1::UpdateStreamRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncDeleteStream(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::datastream::v1::DeleteStreamRequest const& request)
      override;

  StatusOr<google::longrunning::Operation> DeleteStream(
      grpc::ClientContext& context, Options options,
      google::cloud::datastream::v1::DeleteStreamRequest const& request)
      override;

  StatusOr<google::cloud::datastream::v1::StreamObject> GetStreamObject(
      grpc::ClientContext& context, Options const& options,
      google::cloud::datastream::v1::GetStreamObjectRequest const& request)
      override;

  StatusOr<google::cloud::datastream::v1::StreamObject> LookupStreamObject(
      grpc::ClientContext& context, Options const& options,
      google::cloud::datastream::v1::LookupStreamObjectRequest const& request)
      override;

  StatusOr<google::cloud::datastream::v1::ListStreamObjectsResponse>
  ListStreamObjects(
      grpc::ClientContext& context, Options const& options,
      google::cloud::datastream::v1::ListStreamObjectsRequest const& request)
      override;

  StatusOr<google::cloud::datastream::v1::StartBackfillJobResponse>
  StartBackfillJob(grpc::ClientContext& context, Options const& options,
                   google::cloud::datastream::v1::StartBackfillJobRequest const&
                       request) override;

  StatusOr<google::cloud::datastream::v1::StopBackfillJobResponse>
  StopBackfillJob(grpc::ClientContext& context, Options const& options,
                  google::cloud::datastream::v1::StopBackfillJobRequest const&
                      request) override;

  StatusOr<google::cloud::datastream::v1::FetchStaticIpsResponse>
  FetchStaticIps(grpc::ClientContext& context, Options const& options,
                 google::cloud::datastream::v1::FetchStaticIpsRequest const&
                     request) override;

  future<StatusOr<google::longrunning::Operation>> AsyncCreatePrivateConnection(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::datastream::v1::CreatePrivateConnectionRequest const&
          request) override;

  StatusOr<google::longrunning::Operation> CreatePrivateConnection(
      grpc::ClientContext& context, Options options,
      google::cloud::datastream::v1::CreatePrivateConnectionRequest const&
          request) override;

  StatusOr<google::cloud::datastream::v1::PrivateConnection>
  GetPrivateConnection(
      grpc::ClientContext& context, Options const& options,
      google::cloud::datastream::v1::GetPrivateConnectionRequest const& request)
      override;

  StatusOr<google::cloud::datastream::v1::ListPrivateConnectionsResponse>
  ListPrivateConnections(
      grpc::ClientContext& context, Options const& options,
      google::cloud::datastream::v1::ListPrivateConnectionsRequest const&
          request) override;

  future<StatusOr<google::longrunning::Operation>> AsyncDeletePrivateConnection(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::datastream::v1::DeletePrivateConnectionRequest const&
          request) override;

  StatusOr<google::longrunning::Operation> DeletePrivateConnection(
      grpc::ClientContext& context, Options options,
      google::cloud::datastream::v1::DeletePrivateConnectionRequest const&
          request) override;

  future<StatusOr<google::longrunning::Operation>> AsyncCreateRoute(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::datastream::v1::CreateRouteRequest const& request)
      override;

  StatusOr<google::longrunning::Operation> CreateRoute(
      grpc::ClientContext& context, Options options,
      google::cloud::datastream::v1::CreateRouteRequest const& request)
      override;

  StatusOr<google::cloud::datastream::v1::Route> GetRoute(
      grpc::ClientContext& context, Options const& options,
      google::cloud::datastream::v1::GetRouteRequest const& request) override;

  StatusOr<google::cloud::datastream::v1::ListRoutesResponse> ListRoutes(
      grpc::ClientContext& context, Options const& options,
      google::cloud::datastream::v1::ListRoutesRequest const& request) override;

  future<StatusOr<google::longrunning::Operation>> AsyncDeleteRoute(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::datastream::v1::DeleteRouteRequest const& request)
      override;

  StatusOr<google::longrunning::Operation> DeleteRoute(
      grpc::ClientContext& context, Options options,
      google::cloud::datastream::v1::DeleteRouteRequest const& request)
      override;

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
  std::unique_ptr<google::cloud::datastream::v1::Datastream::StubInterface>
      grpc_stub_;
  std::unique_ptr<google::longrunning::Operations::StubInterface>
      operations_stub_;
  std::unique_ptr<google::cloud::location::Locations::StubInterface>
      locations_stub_;
  std::unique_ptr<google::longrunning::Operations::StubInterface> operations_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace datastream_v1_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DATASTREAM_V1_INTERNAL_DATASTREAM_STUB_H
