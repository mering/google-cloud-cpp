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
// source: google/cloud/aiplatform/v1/endpoint_service.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_AIPLATFORM_V1_INTERNAL_ENDPOINT_TRACING_CONNECTION_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_AIPLATFORM_V1_INTERNAL_ENDPOINT_TRACING_CONNECTION_H

#include "google/cloud/aiplatform/v1/endpoint_connection.h"
#include "google/cloud/version.h"
#include <memory>

namespace google {
namespace cloud {
namespace aiplatform_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

class EndpointServiceTracingConnection
    : public aiplatform_v1::EndpointServiceConnection {
 public:
  ~EndpointServiceTracingConnection() override = default;

  explicit EndpointServiceTracingConnection(
      std::shared_ptr<aiplatform_v1::EndpointServiceConnection> child);

  Options options() override { return child_->options(); }

  future<StatusOr<google::cloud::aiplatform::v1::Endpoint>> CreateEndpoint(
      google::cloud::aiplatform::v1::CreateEndpointRequest const& request)
      override;

  StatusOr<google::longrunning::Operation> CreateEndpoint(
      NoAwaitTag,
      google::cloud::aiplatform::v1::CreateEndpointRequest const& request)
      override;

  future<StatusOr<google::cloud::aiplatform::v1::Endpoint>> CreateEndpoint(
      google::longrunning::Operation const& operation) override;

  StatusOr<google::cloud::aiplatform::v1::Endpoint> GetEndpoint(
      google::cloud::aiplatform::v1::GetEndpointRequest const& request)
      override;

  StreamRange<google::cloud::aiplatform::v1::Endpoint> ListEndpoints(
      google::cloud::aiplatform::v1::ListEndpointsRequest request) override;

  StatusOr<google::cloud::aiplatform::v1::Endpoint> UpdateEndpoint(
      google::cloud::aiplatform::v1::UpdateEndpointRequest const& request)
      override;

  future<StatusOr<google::cloud::aiplatform::v1::DeleteOperationMetadata>>
  DeleteEndpoint(google::cloud::aiplatform::v1::DeleteEndpointRequest const&
                     request) override;

  StatusOr<google::longrunning::Operation> DeleteEndpoint(
      NoAwaitTag,
      google::cloud::aiplatform::v1::DeleteEndpointRequest const& request)
      override;

  future<StatusOr<google::cloud::aiplatform::v1::DeleteOperationMetadata>>
  DeleteEndpoint(google::longrunning::Operation const& operation) override;

  future<StatusOr<google::cloud::aiplatform::v1::DeployModelResponse>>
  DeployModel(google::cloud::aiplatform::v1::DeployModelRequest const& request)
      override;

  StatusOr<google::longrunning::Operation> DeployModel(
      NoAwaitTag,
      google::cloud::aiplatform::v1::DeployModelRequest const& request)
      override;

  future<StatusOr<google::cloud::aiplatform::v1::DeployModelResponse>>
  DeployModel(google::longrunning::Operation const& operation) override;

  future<StatusOr<google::cloud::aiplatform::v1::UndeployModelResponse>>
  UndeployModel(google::cloud::aiplatform::v1::UndeployModelRequest const&
                    request) override;

  StatusOr<google::longrunning::Operation> UndeployModel(
      NoAwaitTag,
      google::cloud::aiplatform::v1::UndeployModelRequest const& request)
      override;

  future<StatusOr<google::cloud::aiplatform::v1::UndeployModelResponse>>
  UndeployModel(google::longrunning::Operation const& operation) override;

  future<StatusOr<google::cloud::aiplatform::v1::MutateDeployedModelResponse>>
  MutateDeployedModel(
      google::cloud::aiplatform::v1::MutateDeployedModelRequest const& request)
      override;

  StatusOr<google::longrunning::Operation> MutateDeployedModel(
      NoAwaitTag,
      google::cloud::aiplatform::v1::MutateDeployedModelRequest const& request)
      override;

  future<StatusOr<google::cloud::aiplatform::v1::MutateDeployedModelResponse>>
  MutateDeployedModel(google::longrunning::Operation const& operation) override;

  StreamRange<google::cloud::location::Location> ListLocations(
      google::cloud::location::ListLocationsRequest request) override;

  StatusOr<google::cloud::location::Location> GetLocation(
      google::cloud::location::GetLocationRequest const& request) override;

  StatusOr<google::iam::v1::Policy> SetIamPolicy(
      google::iam::v1::SetIamPolicyRequest const& request) override;

  StatusOr<google::iam::v1::Policy> GetIamPolicy(
      google::iam::v1::GetIamPolicyRequest const& request) override;

  StatusOr<google::iam::v1::TestIamPermissionsResponse> TestIamPermissions(
      google::iam::v1::TestIamPermissionsRequest const& request) override;

  StreamRange<google::longrunning::Operation> ListOperations(
      google::longrunning::ListOperationsRequest request) override;

  StatusOr<google::longrunning::Operation> GetOperation(
      google::longrunning::GetOperationRequest const& request) override;

  Status DeleteOperation(
      google::longrunning::DeleteOperationRequest const& request) override;

  Status CancelOperation(
      google::longrunning::CancelOperationRequest const& request) override;

  StatusOr<google::longrunning::Operation> WaitOperation(
      google::longrunning::WaitOperationRequest const& request) override;

 private:
  std::shared_ptr<aiplatform_v1::EndpointServiceConnection> child_;
};

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

/**
 * Conditionally applies the tracing decorator to the given connection.
 *
 * The connection is only decorated if tracing is enabled (as determined by the
 * connection's options).
 */
std::shared_ptr<aiplatform_v1::EndpointServiceConnection>
MakeEndpointServiceTracingConnection(
    std::shared_ptr<aiplatform_v1::EndpointServiceConnection> conn);

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace aiplatform_v1_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_AIPLATFORM_V1_INTERNAL_ENDPOINT_TRACING_CONNECTION_H
