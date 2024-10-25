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
// source: google/cloud/dialogflow/v2/environment.proto

#include "google/cloud/dialogflow_es/internal/environments_stub.h"
#include "google/cloud/grpc_error_delegate.h"
#include "google/cloud/status_or.h"
#include "google/cloud/dialogflow/v2/environment.grpc.pb.h"
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace dialogflow_es_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

EnvironmentsStub::~EnvironmentsStub() = default;

StatusOr<google::cloud::dialogflow::v2::ListEnvironmentsResponse>
DefaultEnvironmentsStub::ListEnvironments(
    grpc::ClientContext& context, Options const&,
    google::cloud::dialogflow::v2::ListEnvironmentsRequest const& request) {
  google::cloud::dialogflow::v2::ListEnvironmentsResponse response;
  auto status = grpc_stub_->ListEnvironments(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::dialogflow::v2::Environment>
DefaultEnvironmentsStub::GetEnvironment(
    grpc::ClientContext& context, Options const&,
    google::cloud::dialogflow::v2::GetEnvironmentRequest const& request) {
  google::cloud::dialogflow::v2::Environment response;
  auto status = grpc_stub_->GetEnvironment(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::dialogflow::v2::Environment>
DefaultEnvironmentsStub::CreateEnvironment(
    grpc::ClientContext& context, Options const&,
    google::cloud::dialogflow::v2::CreateEnvironmentRequest const& request) {
  google::cloud::dialogflow::v2::Environment response;
  auto status = grpc_stub_->CreateEnvironment(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::dialogflow::v2::Environment>
DefaultEnvironmentsStub::UpdateEnvironment(
    grpc::ClientContext& context, Options const&,
    google::cloud::dialogflow::v2::UpdateEnvironmentRequest const& request) {
  google::cloud::dialogflow::v2::Environment response;
  auto status = grpc_stub_->UpdateEnvironment(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

Status DefaultEnvironmentsStub::DeleteEnvironment(
    grpc::ClientContext& context, Options const&,
    google::cloud::dialogflow::v2::DeleteEnvironmentRequest const& request) {
  google::protobuf::Empty response;
  auto status = grpc_stub_->DeleteEnvironment(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return google::cloud::Status();
}

StatusOr<google::cloud::dialogflow::v2::EnvironmentHistory>
DefaultEnvironmentsStub::GetEnvironmentHistory(
    grpc::ClientContext& context, Options const&,
    google::cloud::dialogflow::v2::GetEnvironmentHistoryRequest const&
        request) {
  google::cloud::dialogflow::v2::EnvironmentHistory response;
  auto status = grpc_stub_->GetEnvironmentHistory(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::location::ListLocationsResponse>
DefaultEnvironmentsStub::ListLocations(
    grpc::ClientContext& context, Options const&,
    google::cloud::location::ListLocationsRequest const& request) {
  google::cloud::location::ListLocationsResponse response;
  auto status = locations_stub_->ListLocations(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::location::Location>
DefaultEnvironmentsStub::GetLocation(
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
DefaultEnvironmentsStub::ListOperations(
    grpc::ClientContext& context, Options const&,
    google::longrunning::ListOperationsRequest const& request) {
  google::longrunning::ListOperationsResponse response;
  auto status = operations_stub_->ListOperations(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::longrunning::Operation> DefaultEnvironmentsStub::GetOperation(
    grpc::ClientContext& context, Options const&,
    google::longrunning::GetOperationRequest const& request) {
  google::longrunning::Operation response;
  auto status = operations_stub_->GetOperation(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

Status DefaultEnvironmentsStub::CancelOperation(
    grpc::ClientContext& context, Options const&,
    google::longrunning::CancelOperationRequest const& request) {
  google::protobuf::Empty response;
  auto status = operations_stub_->CancelOperation(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return google::cloud::Status();
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace dialogflow_es_internal
}  // namespace cloud
}  // namespace google
