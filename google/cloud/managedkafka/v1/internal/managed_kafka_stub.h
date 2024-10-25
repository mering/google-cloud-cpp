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
// source: google/cloud/managedkafka/v1/managed_kafka.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_MANAGEDKAFKA_V1_INTERNAL_MANAGED_KAFKA_STUB_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_MANAGEDKAFKA_V1_INTERNAL_MANAGED_KAFKA_STUB_H

#include "google/cloud/completion_queue.h"
#include "google/cloud/future.h"
#include "google/cloud/options.h"
#include "google/cloud/status_or.h"
#include "google/cloud/version.h"
#include "google/cloud/location/locations.grpc.pb.h"
#include "google/cloud/managedkafka/v1/managed_kafka.grpc.pb.h"
#include "google/longrunning/operations.grpc.pb.h"
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace managedkafka_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class ManagedKafkaStub {
 public:
  virtual ~ManagedKafkaStub() = 0;

  virtual StatusOr<google::cloud::managedkafka::v1::ListClustersResponse>
  ListClusters(
      grpc::ClientContext& context, Options const& options,
      google::cloud::managedkafka::v1::ListClustersRequest const& request) = 0;

  virtual StatusOr<google::cloud::managedkafka::v1::Cluster> GetCluster(
      grpc::ClientContext& context, Options const& options,
      google::cloud::managedkafka::v1::GetClusterRequest const& request) = 0;

  virtual future<StatusOr<google::longrunning::Operation>> AsyncCreateCluster(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::managedkafka::v1::CreateClusterRequest const& request) = 0;

  virtual StatusOr<google::longrunning::Operation> CreateCluster(
      grpc::ClientContext& context, Options options,
      google::cloud::managedkafka::v1::CreateClusterRequest const& request) = 0;

  virtual future<StatusOr<google::longrunning::Operation>> AsyncUpdateCluster(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::managedkafka::v1::UpdateClusterRequest const& request) = 0;

  virtual StatusOr<google::longrunning::Operation> UpdateCluster(
      grpc::ClientContext& context, Options options,
      google::cloud::managedkafka::v1::UpdateClusterRequest const& request) = 0;

  virtual future<StatusOr<google::longrunning::Operation>> AsyncDeleteCluster(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::managedkafka::v1::DeleteClusterRequest const& request) = 0;

  virtual StatusOr<google::longrunning::Operation> DeleteCluster(
      grpc::ClientContext& context, Options options,
      google::cloud::managedkafka::v1::DeleteClusterRequest const& request) = 0;

  virtual StatusOr<google::cloud::managedkafka::v1::ListTopicsResponse>
  ListTopics(
      grpc::ClientContext& context, Options const& options,
      google::cloud::managedkafka::v1::ListTopicsRequest const& request) = 0;

  virtual StatusOr<google::cloud::managedkafka::v1::Topic> GetTopic(
      grpc::ClientContext& context, Options const& options,
      google::cloud::managedkafka::v1::GetTopicRequest const& request) = 0;

  virtual StatusOr<google::cloud::managedkafka::v1::Topic> CreateTopic(
      grpc::ClientContext& context, Options const& options,
      google::cloud::managedkafka::v1::CreateTopicRequest const& request) = 0;

  virtual StatusOr<google::cloud::managedkafka::v1::Topic> UpdateTopic(
      grpc::ClientContext& context, Options const& options,
      google::cloud::managedkafka::v1::UpdateTopicRequest const& request) = 0;

  virtual Status DeleteTopic(
      grpc::ClientContext& context, Options const& options,
      google::cloud::managedkafka::v1::DeleteTopicRequest const& request) = 0;

  virtual StatusOr<google::cloud::managedkafka::v1::ListConsumerGroupsResponse>
  ListConsumerGroups(
      grpc::ClientContext& context, Options const& options,
      google::cloud::managedkafka::v1::ListConsumerGroupsRequest const&
          request) = 0;

  virtual StatusOr<google::cloud::managedkafka::v1::ConsumerGroup>
  GetConsumerGroup(
      grpc::ClientContext& context, Options const& options,
      google::cloud::managedkafka::v1::GetConsumerGroupRequest const&
          request) = 0;

  virtual StatusOr<google::cloud::managedkafka::v1::ConsumerGroup>
  UpdateConsumerGroup(
      grpc::ClientContext& context, Options const& options,
      google::cloud::managedkafka::v1::UpdateConsumerGroupRequest const&
          request) = 0;

  virtual Status DeleteConsumerGroup(
      grpc::ClientContext& context, Options const& options,
      google::cloud::managedkafka::v1::DeleteConsumerGroupRequest const&
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

class DefaultManagedKafkaStub : public ManagedKafkaStub {
 public:
  DefaultManagedKafkaStub(
      std::unique_ptr<
          google::cloud::managedkafka::v1::ManagedKafka::StubInterface>
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

  StatusOr<google::cloud::managedkafka::v1::ListClustersResponse> ListClusters(
      grpc::ClientContext& context, Options const& options,
      google::cloud::managedkafka::v1::ListClustersRequest const& request)
      override;

  StatusOr<google::cloud::managedkafka::v1::Cluster> GetCluster(
      grpc::ClientContext& context, Options const& options,
      google::cloud::managedkafka::v1::GetClusterRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncCreateCluster(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::managedkafka::v1::CreateClusterRequest const& request)
      override;

  StatusOr<google::longrunning::Operation> CreateCluster(
      grpc::ClientContext& context, Options options,
      google::cloud::managedkafka::v1::CreateClusterRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncUpdateCluster(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::managedkafka::v1::UpdateClusterRequest const& request)
      override;

  StatusOr<google::longrunning::Operation> UpdateCluster(
      grpc::ClientContext& context, Options options,
      google::cloud::managedkafka::v1::UpdateClusterRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncDeleteCluster(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::managedkafka::v1::DeleteClusterRequest const& request)
      override;

  StatusOr<google::longrunning::Operation> DeleteCluster(
      grpc::ClientContext& context, Options options,
      google::cloud::managedkafka::v1::DeleteClusterRequest const& request)
      override;

  StatusOr<google::cloud::managedkafka::v1::ListTopicsResponse> ListTopics(
      grpc::ClientContext& context, Options const& options,
      google::cloud::managedkafka::v1::ListTopicsRequest const& request)
      override;

  StatusOr<google::cloud::managedkafka::v1::Topic> GetTopic(
      grpc::ClientContext& context, Options const& options,
      google::cloud::managedkafka::v1::GetTopicRequest const& request) override;

  StatusOr<google::cloud::managedkafka::v1::Topic> CreateTopic(
      grpc::ClientContext& context, Options const& options,
      google::cloud::managedkafka::v1::CreateTopicRequest const& request)
      override;

  StatusOr<google::cloud::managedkafka::v1::Topic> UpdateTopic(
      grpc::ClientContext& context, Options const& options,
      google::cloud::managedkafka::v1::UpdateTopicRequest const& request)
      override;

  Status DeleteTopic(grpc::ClientContext& context, Options const& options,
                     google::cloud::managedkafka::v1::DeleteTopicRequest const&
                         request) override;

  StatusOr<google::cloud::managedkafka::v1::ListConsumerGroupsResponse>
  ListConsumerGroups(
      grpc::ClientContext& context, Options const& options,
      google::cloud::managedkafka::v1::ListConsumerGroupsRequest const& request)
      override;

  StatusOr<google::cloud::managedkafka::v1::ConsumerGroup> GetConsumerGroup(
      grpc::ClientContext& context, Options const& options,
      google::cloud::managedkafka::v1::GetConsumerGroupRequest const& request)
      override;

  StatusOr<google::cloud::managedkafka::v1::ConsumerGroup> UpdateConsumerGroup(
      grpc::ClientContext& context, Options const& options,
      google::cloud::managedkafka::v1::UpdateConsumerGroupRequest const&
          request) override;

  Status DeleteConsumerGroup(
      grpc::ClientContext& context, Options const& options,
      google::cloud::managedkafka::v1::DeleteConsumerGroupRequest const&
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
  std::unique_ptr<google::cloud::managedkafka::v1::ManagedKafka::StubInterface>
      grpc_stub_;
  std::unique_ptr<google::longrunning::Operations::StubInterface>
      operations_stub_;
  std::unique_ptr<google::cloud::location::Locations::StubInterface>
      locations_stub_;
  std::unique_ptr<google::longrunning::Operations::StubInterface> operations_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace managedkafka_v1_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_MANAGEDKAFKA_V1_INTERNAL_MANAGED_KAFKA_STUB_H
