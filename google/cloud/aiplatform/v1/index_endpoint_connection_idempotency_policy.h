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
// source: google/cloud/aiplatform/v1/index_endpoint_service.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_AIPLATFORM_V1_INDEX_ENDPOINT_CONNECTION_IDEMPOTENCY_POLICY_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_AIPLATFORM_V1_INDEX_ENDPOINT_CONNECTION_IDEMPOTENCY_POLICY_H

#include "google/cloud/aiplatform/v1/index_endpoint_service.grpc.pb.h"
#include "google/cloud/location/locations.grpc.pb.h"
#include "google/cloud/idempotency.h"
#include "google/cloud/version.h"
#include "google/iam/v1/iam_policy.grpc.pb.h"
#include "google/longrunning/operations.grpc.pb.h"
#include <memory>

namespace google {
namespace cloud {
namespace aiplatform_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class IndexEndpointServiceConnectionIdempotencyPolicy {
 public:
  virtual ~IndexEndpointServiceConnectionIdempotencyPolicy();

  /// Create a new copy of this object.
  virtual std::unique_ptr<IndexEndpointServiceConnectionIdempotencyPolicy>
  clone() const;

  virtual google::cloud::Idempotency CreateIndexEndpoint(
      google::cloud::aiplatform::v1::CreateIndexEndpointRequest const& request);

  virtual google::cloud::Idempotency GetIndexEndpoint(
      google::cloud::aiplatform::v1::GetIndexEndpointRequest const& request);

  virtual google::cloud::Idempotency ListIndexEndpoints(
      google::cloud::aiplatform::v1::ListIndexEndpointsRequest request);

  virtual google::cloud::Idempotency UpdateIndexEndpoint(
      google::cloud::aiplatform::v1::UpdateIndexEndpointRequest const& request);

  virtual google::cloud::Idempotency DeleteIndexEndpoint(
      google::cloud::aiplatform::v1::DeleteIndexEndpointRequest const& request);

  virtual google::cloud::Idempotency DeployIndex(
      google::cloud::aiplatform::v1::DeployIndexRequest const& request);

  virtual google::cloud::Idempotency UndeployIndex(
      google::cloud::aiplatform::v1::UndeployIndexRequest const& request);

  virtual google::cloud::Idempotency MutateDeployedIndex(
      google::cloud::aiplatform::v1::MutateDeployedIndexRequest const& request);

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

  virtual google::cloud::Idempotency WaitOperation(
      google::longrunning::WaitOperationRequest const& request);
};

std::unique_ptr<IndexEndpointServiceConnectionIdempotencyPolicy>
MakeDefaultIndexEndpointServiceConnectionIdempotencyPolicy();

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace aiplatform_v1
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_AIPLATFORM_V1_INDEX_ENDPOINT_CONNECTION_IDEMPOTENCY_POLICY_H
