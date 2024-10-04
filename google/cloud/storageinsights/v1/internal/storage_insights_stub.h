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
// source: google/cloud/storageinsights/v1/storageinsights.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_STORAGEINSIGHTS_V1_INTERNAL_STORAGE_INSIGHTS_STUB_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_STORAGEINSIGHTS_V1_INTERNAL_STORAGE_INSIGHTS_STUB_H

#include "google/cloud/options.h"
#include "google/cloud/status_or.h"
#include "google/cloud/version.h"
#include <google/cloud/location/locations.grpc.pb.h>
#include <google/cloud/storageinsights/v1/storageinsights.grpc.pb.h>
#include <google/longrunning/operations.grpc.pb.h>
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace storageinsights_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class StorageInsightsStub {
 public:
  virtual ~StorageInsightsStub() = 0;

  virtual StatusOr<
      google::cloud::storageinsights::v1::ListReportConfigsResponse>
  ListReportConfigs(
      grpc::ClientContext& context, Options const& options,
      google::cloud::storageinsights::v1::ListReportConfigsRequest const&
          request) = 0;

  virtual StatusOr<google::cloud::storageinsights::v1::ReportConfig>
  GetReportConfig(
      grpc::ClientContext& context, Options const& options,
      google::cloud::storageinsights::v1::GetReportConfigRequest const&
          request) = 0;

  virtual StatusOr<google::cloud::storageinsights::v1::ReportConfig>
  CreateReportConfig(
      grpc::ClientContext& context, Options const& options,
      google::cloud::storageinsights::v1::CreateReportConfigRequest const&
          request) = 0;

  virtual StatusOr<google::cloud::storageinsights::v1::ReportConfig>
  UpdateReportConfig(
      grpc::ClientContext& context, Options const& options,
      google::cloud::storageinsights::v1::UpdateReportConfigRequest const&
          request) = 0;

  virtual Status DeleteReportConfig(
      grpc::ClientContext& context, Options const& options,
      google::cloud::storageinsights::v1::DeleteReportConfigRequest const&
          request) = 0;

  virtual StatusOr<
      google::cloud::storageinsights::v1::ListReportDetailsResponse>
  ListReportDetails(
      grpc::ClientContext& context, Options const& options,
      google::cloud::storageinsights::v1::ListReportDetailsRequest const&
          request) = 0;

  virtual StatusOr<google::cloud::storageinsights::v1::ReportDetail>
  GetReportDetail(
      grpc::ClientContext& context, Options const& options,
      google::cloud::storageinsights::v1::GetReportDetailRequest const&
          request) = 0;

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

  virtual Status DeleteOperation(
      grpc::ClientContext& context, Options const& options,
      google::longrunning::DeleteOperationRequest const& request) = 0;

  virtual Status CancelOperation(
      grpc::ClientContext& context, Options const& options,
      google::longrunning::CancelOperationRequest const& request) = 0;
};

class DefaultStorageInsightsStub : public StorageInsightsStub {
 public:
  explicit DefaultStorageInsightsStub(
      std::unique_ptr<
          google::cloud::storageinsights::v1::StorageInsights::StubInterface>
          grpc_stub,
      std::unique_ptr<google::longrunning::Operations::StubInterface>
          operations_stub,
      std::unique_ptr<google::cloud::location::Locations::StubInterface>
          locations_stub)
      : grpc_stub_(std::move(grpc_stub)),
        operations_stub_(std::move(operations_stub)),
        locations_stub_(std::move(locations_stub)) {}

  StatusOr<google::cloud::storageinsights::v1::ListReportConfigsResponse>
  ListReportConfigs(
      grpc::ClientContext& context, Options const& options,
      google::cloud::storageinsights::v1::ListReportConfigsRequest const&
          request) override;

  StatusOr<google::cloud::storageinsights::v1::ReportConfig> GetReportConfig(
      grpc::ClientContext& context, Options const& options,
      google::cloud::storageinsights::v1::GetReportConfigRequest const& request)
      override;

  StatusOr<google::cloud::storageinsights::v1::ReportConfig> CreateReportConfig(
      grpc::ClientContext& context, Options const& options,
      google::cloud::storageinsights::v1::CreateReportConfigRequest const&
          request) override;

  StatusOr<google::cloud::storageinsights::v1::ReportConfig> UpdateReportConfig(
      grpc::ClientContext& context, Options const& options,
      google::cloud::storageinsights::v1::UpdateReportConfigRequest const&
          request) override;

  Status DeleteReportConfig(
      grpc::ClientContext& context, Options const& options,
      google::cloud::storageinsights::v1::DeleteReportConfigRequest const&
          request) override;

  StatusOr<google::cloud::storageinsights::v1::ListReportDetailsResponse>
  ListReportDetails(
      grpc::ClientContext& context, Options const& options,
      google::cloud::storageinsights::v1::ListReportDetailsRequest const&
          request) override;

  StatusOr<google::cloud::storageinsights::v1::ReportDetail> GetReportDetail(
      grpc::ClientContext& context, Options const& options,
      google::cloud::storageinsights::v1::GetReportDetailRequest const& request)
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

  Status DeleteOperation(
      grpc::ClientContext& context, Options const& options,
      google::longrunning::DeleteOperationRequest const& request) override;

  Status CancelOperation(
      grpc::ClientContext& context, Options const& options,
      google::longrunning::CancelOperationRequest const& request) override;

 private:
  std::unique_ptr<
      google::cloud::storageinsights::v1::StorageInsights::StubInterface>
      grpc_stub_;
  std::unique_ptr<google::longrunning::Operations::StubInterface>
      operations_stub_;
  std::unique_ptr<google::cloud::location::Locations::StubInterface>
      locations_stub_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace storageinsights_v1_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_STORAGEINSIGHTS_V1_INTERNAL_STORAGE_INSIGHTS_STUB_H
