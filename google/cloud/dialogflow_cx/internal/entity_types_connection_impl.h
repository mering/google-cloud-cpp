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

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DIALOGFLOW_CX_INTERNAL_ENTITY_TYPES_CONNECTION_IMPL_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DIALOGFLOW_CX_INTERNAL_ENTITY_TYPES_CONNECTION_IMPL_H

#include "google/cloud/dialogflow_cx/entity_types_connection.h"
#include "google/cloud/dialogflow_cx/entity_types_connection_idempotency_policy.h"
#include "google/cloud/dialogflow_cx/entity_types_options.h"
#include "google/cloud/dialogflow_cx/internal/entity_types_retry_traits.h"
#include "google/cloud/dialogflow_cx/internal/entity_types_stub.h"
#include "google/cloud/background_threads.h"
#include "google/cloud/backoff_policy.h"
#include "google/cloud/future.h"
#include "google/cloud/options.h"
#include "google/cloud/polling_policy.h"
#include "google/cloud/status_or.h"
#include "google/cloud/stream_range.h"
#include "google/cloud/version.h"
#include <google/longrunning/operations.grpc.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace dialogflow_cx_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class EntityTypesConnectionImpl : public dialogflow_cx::EntityTypesConnection {
 public:
  ~EntityTypesConnectionImpl() override = default;

  EntityTypesConnectionImpl(
      std::unique_ptr<google::cloud::BackgroundThreads> background,
      std::shared_ptr<dialogflow_cx_internal::EntityTypesStub> stub,
      Options options);

  Options options() override { return options_; }

  StatusOr<google::cloud::dialogflow::cx::v3::EntityType> GetEntityType(
      google::cloud::dialogflow::cx::v3::GetEntityTypeRequest const& request)
      override;

  StatusOr<google::cloud::dialogflow::cx::v3::EntityType> CreateEntityType(
      google::cloud::dialogflow::cx::v3::CreateEntityTypeRequest const& request)
      override;

  StatusOr<google::cloud::dialogflow::cx::v3::EntityType> UpdateEntityType(
      google::cloud::dialogflow::cx::v3::UpdateEntityTypeRequest const& request)
      override;

  Status DeleteEntityType(
      google::cloud::dialogflow::cx::v3::DeleteEntityTypeRequest const& request)
      override;

  StreamRange<google::cloud::dialogflow::cx::v3::EntityType> ListEntityTypes(
      google::cloud::dialogflow::cx::v3::ListEntityTypesRequest request)
      override;

  future<StatusOr<google::cloud::dialogflow::cx::v3::ExportEntityTypesResponse>>
  ExportEntityTypes(
      google::cloud::dialogflow::cx::v3::ExportEntityTypesRequest const&
          request) override;

  StatusOr<google::longrunning::Operation> ExportEntityTypes(
      NoAwaitTag,
      google::cloud::dialogflow::cx::v3::ExportEntityTypesRequest const&
          request) override;

  future<StatusOr<google::cloud::dialogflow::cx::v3::ExportEntityTypesResponse>>
  ExportEntityTypes(google::longrunning::Operation const& operation) override;

  future<StatusOr<google::cloud::dialogflow::cx::v3::ImportEntityTypesResponse>>
  ImportEntityTypes(
      google::cloud::dialogflow::cx::v3::ImportEntityTypesRequest const&
          request) override;

  StatusOr<google::longrunning::Operation> ImportEntityTypes(
      NoAwaitTag,
      google::cloud::dialogflow::cx::v3::ImportEntityTypesRequest const&
          request) override;

  future<StatusOr<google::cloud::dialogflow::cx::v3::ImportEntityTypesResponse>>
  ImportEntityTypes(google::longrunning::Operation const& operation) override;

  StreamRange<google::cloud::location::Location> ListLocations(
      google::cloud::location::ListLocationsRequest request) override;

  StatusOr<google::cloud::location::Location> GetLocation(
      google::cloud::location::GetLocationRequest const& request) override;

  StreamRange<google::longrunning::Operation> ListOperations(
      google::longrunning::ListOperationsRequest request) override;

  StatusOr<google::longrunning::Operation> GetOperation(
      google::longrunning::GetOperationRequest const& request) override;

  Status CancelOperation(
      google::longrunning::CancelOperationRequest const& request) override;

 private:
  std::unique_ptr<google::cloud::BackgroundThreads> background_;
  std::shared_ptr<dialogflow_cx_internal::EntityTypesStub> stub_;
  Options options_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace dialogflow_cx_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DIALOGFLOW_CX_INTERNAL_ENTITY_TYPES_CONNECTION_IMPL_H
