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
// source: google/cloud/dialogflow/cx/v3/generator.proto

#include "google/cloud/dialogflow_cx/internal/generators_stub.h"
#include "google/cloud/dialogflow/cx/v3/generator.grpc.pb.h"
#include "google/cloud/grpc_error_delegate.h"
#include "google/cloud/status_or.h"
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace dialogflow_cx_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

GeneratorsStub::~GeneratorsStub() = default;

StatusOr<google::cloud::dialogflow::cx::v3::ListGeneratorsResponse>
DefaultGeneratorsStub::ListGenerators(
    grpc::ClientContext& context, Options const&,
    google::cloud::dialogflow::cx::v3::ListGeneratorsRequest const& request) {
  google::cloud::dialogflow::cx::v3::ListGeneratorsResponse response;
  auto status = grpc_stub_->ListGenerators(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::dialogflow::cx::v3::Generator>
DefaultGeneratorsStub::GetGenerator(
    grpc::ClientContext& context, Options const&,
    google::cloud::dialogflow::cx::v3::GetGeneratorRequest const& request) {
  google::cloud::dialogflow::cx::v3::Generator response;
  auto status = grpc_stub_->GetGenerator(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::dialogflow::cx::v3::Generator>
DefaultGeneratorsStub::CreateGenerator(
    grpc::ClientContext& context, Options const&,
    google::cloud::dialogflow::cx::v3::CreateGeneratorRequest const& request) {
  google::cloud::dialogflow::cx::v3::Generator response;
  auto status = grpc_stub_->CreateGenerator(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::dialogflow::cx::v3::Generator>
DefaultGeneratorsStub::UpdateGenerator(
    grpc::ClientContext& context, Options const&,
    google::cloud::dialogflow::cx::v3::UpdateGeneratorRequest const& request) {
  google::cloud::dialogflow::cx::v3::Generator response;
  auto status = grpc_stub_->UpdateGenerator(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

Status DefaultGeneratorsStub::DeleteGenerator(
    grpc::ClientContext& context, Options const&,
    google::cloud::dialogflow::cx::v3::DeleteGeneratorRequest const& request) {
  google::protobuf::Empty response;
  auto status = grpc_stub_->DeleteGenerator(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return google::cloud::Status();
}

StatusOr<google::cloud::location::ListLocationsResponse>
DefaultGeneratorsStub::ListLocations(
    grpc::ClientContext& context, Options const&,
    google::cloud::location::ListLocationsRequest const& request) {
  google::cloud::location::ListLocationsResponse response;
  auto status = locations_stub_->ListLocations(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::location::Location> DefaultGeneratorsStub::GetLocation(
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
DefaultGeneratorsStub::ListOperations(
    grpc::ClientContext& context, Options const&,
    google::longrunning::ListOperationsRequest const& request) {
  google::longrunning::ListOperationsResponse response;
  auto status = operations_stub_->ListOperations(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::longrunning::Operation> DefaultGeneratorsStub::GetOperation(
    grpc::ClientContext& context, Options const&,
    google::longrunning::GetOperationRequest const& request) {
  google::longrunning::Operation response;
  auto status = operations_stub_->GetOperation(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

Status DefaultGeneratorsStub::CancelOperation(
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
}  // namespace dialogflow_cx_internal
}  // namespace cloud
}  // namespace google
