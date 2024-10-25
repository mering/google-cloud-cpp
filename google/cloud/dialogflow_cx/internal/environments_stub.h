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
// source: google/cloud/dialogflow/cx/v3/environment.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DIALOGFLOW_CX_INTERNAL_ENVIRONMENTS_STUB_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DIALOGFLOW_CX_INTERNAL_ENVIRONMENTS_STUB_H

#include "google/cloud/dialogflow/cx/v3/environment.grpc.pb.h"
#include "google/cloud/location/locations.grpc.pb.h"
#include "google/cloud/completion_queue.h"
#include "google/cloud/future.h"
#include "google/cloud/options.h"
#include "google/cloud/status_or.h"
#include "google/cloud/version.h"
#include "google/longrunning/operations.grpc.pb.h"
#include "google/protobuf/struct.pb.h"
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace dialogflow_cx_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class EnvironmentsStub {
 public:
  virtual ~EnvironmentsStub() = 0;

  virtual StatusOr<google::cloud::dialogflow::cx::v3::ListEnvironmentsResponse>
  ListEnvironments(
      grpc::ClientContext& context, Options const& options,
      google::cloud::dialogflow::cx::v3::ListEnvironmentsRequest const&
          request) = 0;

  virtual StatusOr<google::cloud::dialogflow::cx::v3::Environment>
  GetEnvironment(grpc::ClientContext& context, Options const& options,
                 google::cloud::dialogflow::cx::v3::GetEnvironmentRequest const&
                     request) = 0;

  virtual future<StatusOr<google::longrunning::Operation>>
  AsyncCreateEnvironment(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::dialogflow::cx::v3::CreateEnvironmentRequest const&
          request) = 0;

  virtual StatusOr<google::longrunning::Operation> CreateEnvironment(
      grpc::ClientContext& context, Options options,
      google::cloud::dialogflow::cx::v3::CreateEnvironmentRequest const&
          request) = 0;

  virtual future<StatusOr<google::longrunning::Operation>>
  AsyncUpdateEnvironment(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::dialogflow::cx::v3::UpdateEnvironmentRequest const&
          request) = 0;

  virtual StatusOr<google::longrunning::Operation> UpdateEnvironment(
      grpc::ClientContext& context, Options options,
      google::cloud::dialogflow::cx::v3::UpdateEnvironmentRequest const&
          request) = 0;

  virtual Status DeleteEnvironment(
      grpc::ClientContext& context, Options const& options,
      google::cloud::dialogflow::cx::v3::DeleteEnvironmentRequest const&
          request) = 0;

  virtual StatusOr<
      google::cloud::dialogflow::cx::v3::LookupEnvironmentHistoryResponse>
  LookupEnvironmentHistory(
      grpc::ClientContext& context, Options const& options,
      google::cloud::dialogflow::cx::v3::LookupEnvironmentHistoryRequest const&
          request) = 0;

  virtual future<StatusOr<google::longrunning::Operation>>
  AsyncRunContinuousTest(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::dialogflow::cx::v3::RunContinuousTestRequest const&
          request) = 0;

  virtual StatusOr<google::longrunning::Operation> RunContinuousTest(
      grpc::ClientContext& context, Options options,
      google::cloud::dialogflow::cx::v3::RunContinuousTestRequest const&
          request) = 0;

  virtual StatusOr<
      google::cloud::dialogflow::cx::v3::ListContinuousTestResultsResponse>
  ListContinuousTestResults(
      grpc::ClientContext& context, Options const& options,
      google::cloud::dialogflow::cx::v3::ListContinuousTestResultsRequest const&
          request) = 0;

  virtual future<StatusOr<google::longrunning::Operation>> AsyncDeployFlow(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::dialogflow::cx::v3::DeployFlowRequest const& request) = 0;

  virtual StatusOr<google::longrunning::Operation> DeployFlow(
      grpc::ClientContext& context, Options options,
      google::cloud::dialogflow::cx::v3::DeployFlowRequest const& request) = 0;

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

class DefaultEnvironmentsStub : public EnvironmentsStub {
 public:
  DefaultEnvironmentsStub(
      std::unique_ptr<
          google::cloud::dialogflow::cx::v3::Environments::StubInterface>
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

  StatusOr<google::cloud::dialogflow::cx::v3::ListEnvironmentsResponse>
  ListEnvironments(
      grpc::ClientContext& context, Options const& options,
      google::cloud::dialogflow::cx::v3::ListEnvironmentsRequest const& request)
      override;

  StatusOr<google::cloud::dialogflow::cx::v3::Environment> GetEnvironment(
      grpc::ClientContext& context, Options const& options,
      google::cloud::dialogflow::cx::v3::GetEnvironmentRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncCreateEnvironment(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::dialogflow::cx::v3::CreateEnvironmentRequest const&
          request) override;

  StatusOr<google::longrunning::Operation> CreateEnvironment(
      grpc::ClientContext& context, Options options,
      google::cloud::dialogflow::cx::v3::CreateEnvironmentRequest const&
          request) override;

  future<StatusOr<google::longrunning::Operation>> AsyncUpdateEnvironment(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::dialogflow::cx::v3::UpdateEnvironmentRequest const&
          request) override;

  StatusOr<google::longrunning::Operation> UpdateEnvironment(
      grpc::ClientContext& context, Options options,
      google::cloud::dialogflow::cx::v3::UpdateEnvironmentRequest const&
          request) override;

  Status DeleteEnvironment(
      grpc::ClientContext& context, Options const& options,
      google::cloud::dialogflow::cx::v3::DeleteEnvironmentRequest const&
          request) override;

  StatusOr<google::cloud::dialogflow::cx::v3::LookupEnvironmentHistoryResponse>
  LookupEnvironmentHistory(
      grpc::ClientContext& context, Options const& options,
      google::cloud::dialogflow::cx::v3::LookupEnvironmentHistoryRequest const&
          request) override;

  future<StatusOr<google::longrunning::Operation>> AsyncRunContinuousTest(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::dialogflow::cx::v3::RunContinuousTestRequest const&
          request) override;

  StatusOr<google::longrunning::Operation> RunContinuousTest(
      grpc::ClientContext& context, Options options,
      google::cloud::dialogflow::cx::v3::RunContinuousTestRequest const&
          request) override;

  StatusOr<google::cloud::dialogflow::cx::v3::ListContinuousTestResultsResponse>
  ListContinuousTestResults(
      grpc::ClientContext& context, Options const& options,
      google::cloud::dialogflow::cx::v3::ListContinuousTestResultsRequest const&
          request) override;

  future<StatusOr<google::longrunning::Operation>> AsyncDeployFlow(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::dialogflow::cx::v3::DeployFlowRequest const& request)
      override;

  StatusOr<google::longrunning::Operation> DeployFlow(
      grpc::ClientContext& context, Options options,
      google::cloud::dialogflow::cx::v3::DeployFlowRequest const& request)
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
      google::cloud::dialogflow::cx::v3::Environments::StubInterface>
      grpc_stub_;
  std::unique_ptr<google::longrunning::Operations::StubInterface>
      operations_stub_;
  std::unique_ptr<google::cloud::location::Locations::StubInterface>
      locations_stub_;
  std::unique_ptr<google::longrunning::Operations::StubInterface> operations_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace dialogflow_cx_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DIALOGFLOW_CX_INTERNAL_ENVIRONMENTS_STUB_H
