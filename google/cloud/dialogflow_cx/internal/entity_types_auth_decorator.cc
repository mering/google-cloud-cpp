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

#include "google/cloud/dialogflow_cx/internal/entity_types_auth_decorator.h"
#include <google/cloud/dialogflow/cx/v3/entity_type.grpc.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace dialogflow_cx_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

EntityTypesAuth::EntityTypesAuth(
    std::shared_ptr<google::cloud::internal::GrpcAuthenticationStrategy> auth,
    std::shared_ptr<EntityTypesStub> child)
    : auth_(std::move(auth)), child_(std::move(child)) {}

StatusOr<google::cloud::dialogflow::cx::v3::EntityType>
EntityTypesAuth::GetEntityType(
    grpc::ClientContext& context,
    google::cloud::dialogflow::cx::v3::GetEntityTypeRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->GetEntityType(context, request);
}

StatusOr<google::cloud::dialogflow::cx::v3::EntityType>
EntityTypesAuth::CreateEntityType(
    grpc::ClientContext& context,
    google::cloud::dialogflow::cx::v3::CreateEntityTypeRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->CreateEntityType(context, request);
}

StatusOr<google::cloud::dialogflow::cx::v3::EntityType>
EntityTypesAuth::UpdateEntityType(
    grpc::ClientContext& context,
    google::cloud::dialogflow::cx::v3::UpdateEntityTypeRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->UpdateEntityType(context, request);
}

Status EntityTypesAuth::DeleteEntityType(
    grpc::ClientContext& context,
    google::cloud::dialogflow::cx::v3::DeleteEntityTypeRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->DeleteEntityType(context, request);
}

StatusOr<google::cloud::dialogflow::cx::v3::ListEntityTypesResponse>
EntityTypesAuth::ListEntityTypes(
    grpc::ClientContext& context,
    google::cloud::dialogflow::cx::v3::ListEntityTypesRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->ListEntityTypes(context, request);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace dialogflow_cx_internal
}  // namespace cloud
}  // namespace google
