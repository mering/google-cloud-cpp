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
// source: google/cloud/connectors/v1/connectors_service.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_CONNECTORS_V1_CONNECTORS_CONNECTION_IDEMPOTENCY_POLICY_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_CONNECTORS_V1_CONNECTORS_CONNECTION_IDEMPOTENCY_POLICY_H

#include "google/cloud/idempotency.h"
#include "google/cloud/version.h"
#include "google/cloud/connectors/v1/connectors_service.grpc.pb.h"
#include "google/cloud/location/locations.grpc.pb.h"
#include "google/iam/v1/iam_policy.grpc.pb.h"
#include "google/longrunning/operations.grpc.pb.h"
#include <memory>

namespace google {
namespace cloud {
namespace connectors_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class ConnectorsConnectionIdempotencyPolicy {
 public:
  virtual ~ConnectorsConnectionIdempotencyPolicy();

  /// Create a new copy of this object.
  virtual std::unique_ptr<ConnectorsConnectionIdempotencyPolicy> clone() const;

  virtual google::cloud::Idempotency ListConnections(
      google::cloud::connectors::v1::ListConnectionsRequest request);

  virtual google::cloud::Idempotency GetConnection(
      google::cloud::connectors::v1::GetConnectionRequest const& request);

  virtual google::cloud::Idempotency CreateConnection(
      google::cloud::connectors::v1::CreateConnectionRequest const& request);

  virtual google::cloud::Idempotency UpdateConnection(
      google::cloud::connectors::v1::UpdateConnectionRequest const& request);

  virtual google::cloud::Idempotency DeleteConnection(
      google::cloud::connectors::v1::DeleteConnectionRequest const& request);

  virtual google::cloud::Idempotency ListProviders(
      google::cloud::connectors::v1::ListProvidersRequest request);

  virtual google::cloud::Idempotency GetProvider(
      google::cloud::connectors::v1::GetProviderRequest const& request);

  virtual google::cloud::Idempotency ListConnectors(
      google::cloud::connectors::v1::ListConnectorsRequest request);

  virtual google::cloud::Idempotency GetConnector(
      google::cloud::connectors::v1::GetConnectorRequest const& request);

  virtual google::cloud::Idempotency ListConnectorVersions(
      google::cloud::connectors::v1::ListConnectorVersionsRequest request);

  virtual google::cloud::Idempotency GetConnectorVersion(
      google::cloud::connectors::v1::GetConnectorVersionRequest const& request);

  virtual google::cloud::Idempotency GetConnectionSchemaMetadata(
      google::cloud::connectors::v1::GetConnectionSchemaMetadataRequest const&
          request);

  virtual google::cloud::Idempotency RefreshConnectionSchemaMetadata(
      google::cloud::connectors::v1::
          RefreshConnectionSchemaMetadataRequest const& request);

  virtual google::cloud::Idempotency ListRuntimeEntitySchemas(
      google::cloud::connectors::v1::ListRuntimeEntitySchemasRequest request);

  virtual google::cloud::Idempotency ListRuntimeActionSchemas(
      google::cloud::connectors::v1::ListRuntimeActionSchemasRequest request);

  virtual google::cloud::Idempotency GetRuntimeConfig(
      google::cloud::connectors::v1::GetRuntimeConfigRequest const& request);

  virtual google::cloud::Idempotency GetGlobalSettings(
      google::cloud::connectors::v1::GetGlobalSettingsRequest const& request);

  virtual google::cloud::Idempotency ListLocations(
      google::cloud::location::ListLocationsRequest request);

  virtual google::cloud::Idempotency GetLocation(
      google::cloud::location::GetLocationRequest const& request);

  virtual google::cloud::Idempotency SetIamPolicy(
      google::iam::v1::SetIamPolicyRequest const& request);

  virtual google::cloud::Idempotency GetIamPolicy(
      google::iam::v1::GetIamPolicyRequest const& request);

  virtual google::cloud::Idempotency TestIamPermissions(
      google::iam::v1::TestIamPermissionsRequest const& request);

  virtual google::cloud::Idempotency ListOperations(
      google::longrunning::ListOperationsRequest request);

  virtual google::cloud::Idempotency GetOperation(
      google::longrunning::GetOperationRequest const& request);

  virtual google::cloud::Idempotency DeleteOperation(
      google::longrunning::DeleteOperationRequest const& request);

  virtual google::cloud::Idempotency CancelOperation(
      google::longrunning::CancelOperationRequest const& request);
};

std::unique_ptr<ConnectorsConnectionIdempotencyPolicy>
MakeDefaultConnectorsConnectionIdempotencyPolicy();

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace connectors_v1
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_CONNECTORS_V1_CONNECTORS_CONNECTION_IDEMPOTENCY_POLICY_H
