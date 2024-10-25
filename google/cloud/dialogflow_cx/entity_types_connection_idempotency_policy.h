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
// source: google/cloud/dialogflow/cx/v3/entity_type.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DIALOGFLOW_CX_ENTITY_TYPES_CONNECTION_IDEMPOTENCY_POLICY_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DIALOGFLOW_CX_ENTITY_TYPES_CONNECTION_IDEMPOTENCY_POLICY_H

#include "google/cloud/idempotency.h"
#include "google/cloud/version.h"
#include "google/cloud/dialogflow/cx/v3/entity_type.grpc.pb.h"
#include "google/cloud/location/locations.grpc.pb.h"
#include "google/longrunning/operations.grpc.pb.h"
#include <memory>

namespace google {
namespace cloud {
namespace dialogflow_cx {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class EntityTypesConnectionIdempotencyPolicy {
 public:
  virtual ~EntityTypesConnectionIdempotencyPolicy();

  /// Create a new copy of this object.
  virtual std::unique_ptr<EntityTypesConnectionIdempotencyPolicy> clone() const;

  virtual google::cloud::Idempotency GetEntityType(
      google::cloud::dialogflow::cx::v3::GetEntityTypeRequest const& request);

  virtual google::cloud::Idempotency CreateEntityType(
      google::cloud::dialogflow::cx::v3::CreateEntityTypeRequest const&
          request);

  virtual google::cloud::Idempotency UpdateEntityType(
      google::cloud::dialogflow::cx::v3::UpdateEntityTypeRequest const&
          request);

  virtual google::cloud::Idempotency DeleteEntityType(
      google::cloud::dialogflow::cx::v3::DeleteEntityTypeRequest const&
          request);

  virtual google::cloud::Idempotency ListEntityTypes(
      google::cloud::dialogflow::cx::v3::ListEntityTypesRequest request);

  virtual google::cloud::Idempotency ExportEntityTypes(
      google::cloud::dialogflow::cx::v3::ExportEntityTypesRequest const&
          request);

  virtual google::cloud::Idempotency ImportEntityTypes(
      google::cloud::dialogflow::cx::v3::ImportEntityTypesRequest const&
          request);

  virtual google::cloud::Idempotency ListLocations(
      google::cloud::location::ListLocationsRequest request);

  virtual google::cloud::Idempotency GetLocation(
      google::cloud::location::GetLocationRequest const& request);

  virtual google::cloud::Idempotency ListOperations(
      google::longrunning::ListOperationsRequest request);

  virtual google::cloud::Idempotency GetOperation(
      google::longrunning::GetOperationRequest const& request);

  virtual google::cloud::Idempotency CancelOperation(
      google::longrunning::CancelOperationRequest const& request);
};

std::unique_ptr<EntityTypesConnectionIdempotencyPolicy>
MakeDefaultEntityTypesConnectionIdempotencyPolicy();

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace dialogflow_cx
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DIALOGFLOW_CX_ENTITY_TYPES_CONNECTION_IDEMPOTENCY_POLICY_H
