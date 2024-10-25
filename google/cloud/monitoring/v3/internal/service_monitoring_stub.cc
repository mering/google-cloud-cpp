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
// source: google/monitoring/v3/service_service.proto

#include "google/cloud/monitoring/v3/internal/service_monitoring_stub.h"
#include "google/cloud/grpc_error_delegate.h"
#include "google/cloud/status_or.h"
#include "google/monitoring/v3/service_service.grpc.pb.h"
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace monitoring_v3_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

ServiceMonitoringServiceStub::~ServiceMonitoringServiceStub() = default;

StatusOr<google::monitoring::v3::Service>
DefaultServiceMonitoringServiceStub::CreateService(
    grpc::ClientContext& context, Options const&,
    google::monitoring::v3::CreateServiceRequest const& request) {
  google::monitoring::v3::Service response;
  auto status = grpc_stub_->CreateService(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::monitoring::v3::Service>
DefaultServiceMonitoringServiceStub::GetService(
    grpc::ClientContext& context, Options const&,
    google::monitoring::v3::GetServiceRequest const& request) {
  google::monitoring::v3::Service response;
  auto status = grpc_stub_->GetService(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::monitoring::v3::ListServicesResponse>
DefaultServiceMonitoringServiceStub::ListServices(
    grpc::ClientContext& context, Options const&,
    google::monitoring::v3::ListServicesRequest const& request) {
  google::monitoring::v3::ListServicesResponse response;
  auto status = grpc_stub_->ListServices(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::monitoring::v3::Service>
DefaultServiceMonitoringServiceStub::UpdateService(
    grpc::ClientContext& context, Options const&,
    google::monitoring::v3::UpdateServiceRequest const& request) {
  google::monitoring::v3::Service response;
  auto status = grpc_stub_->UpdateService(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

Status DefaultServiceMonitoringServiceStub::DeleteService(
    grpc::ClientContext& context, Options const&,
    google::monitoring::v3::DeleteServiceRequest const& request) {
  google::protobuf::Empty response;
  auto status = grpc_stub_->DeleteService(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return google::cloud::Status();
}

StatusOr<google::monitoring::v3::ServiceLevelObjective>
DefaultServiceMonitoringServiceStub::CreateServiceLevelObjective(
    grpc::ClientContext& context, Options const&,
    google::monitoring::v3::CreateServiceLevelObjectiveRequest const& request) {
  google::monitoring::v3::ServiceLevelObjective response;
  auto status =
      grpc_stub_->CreateServiceLevelObjective(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::monitoring::v3::ServiceLevelObjective>
DefaultServiceMonitoringServiceStub::GetServiceLevelObjective(
    grpc::ClientContext& context, Options const&,
    google::monitoring::v3::GetServiceLevelObjectiveRequest const& request) {
  google::monitoring::v3::ServiceLevelObjective response;
  auto status =
      grpc_stub_->GetServiceLevelObjective(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::monitoring::v3::ListServiceLevelObjectivesResponse>
DefaultServiceMonitoringServiceStub::ListServiceLevelObjectives(
    grpc::ClientContext& context, Options const&,
    google::monitoring::v3::ListServiceLevelObjectivesRequest const& request) {
  google::monitoring::v3::ListServiceLevelObjectivesResponse response;
  auto status =
      grpc_stub_->ListServiceLevelObjectives(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::monitoring::v3::ServiceLevelObjective>
DefaultServiceMonitoringServiceStub::UpdateServiceLevelObjective(
    grpc::ClientContext& context, Options const&,
    google::monitoring::v3::UpdateServiceLevelObjectiveRequest const& request) {
  google::monitoring::v3::ServiceLevelObjective response;
  auto status =
      grpc_stub_->UpdateServiceLevelObjective(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

Status DefaultServiceMonitoringServiceStub::DeleteServiceLevelObjective(
    grpc::ClientContext& context, Options const&,
    google::monitoring::v3::DeleteServiceLevelObjectiveRequest const& request) {
  google::protobuf::Empty response;
  auto status =
      grpc_stub_->DeleteServiceLevelObjective(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return google::cloud::Status();
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace monitoring_v3_internal
}  // namespace cloud
}  // namespace google
