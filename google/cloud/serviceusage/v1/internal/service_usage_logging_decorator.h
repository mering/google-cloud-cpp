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
// source: google/api/serviceusage/v1/serviceusage.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_SERVICEUSAGE_V1_INTERNAL_SERVICE_USAGE_LOGGING_DECORATOR_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_SERVICEUSAGE_V1_INTERNAL_SERVICE_USAGE_LOGGING_DECORATOR_H

#include "google/cloud/serviceusage/v1/internal/service_usage_stub.h"
#include "google/cloud/tracing_options.h"
#include "google/cloud/version.h"
#include "google/longrunning/operations.grpc.pb.h"
#include <memory>
#include <set>
#include <string>

namespace google {
namespace cloud {
namespace serviceusage_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class ServiceUsageLogging : public ServiceUsageStub {
 public:
  ~ServiceUsageLogging() override = default;
  ServiceUsageLogging(std::shared_ptr<ServiceUsageStub> child,
                      TracingOptions tracing_options,
                      std::set<std::string> const& components);

  future<StatusOr<google::longrunning::Operation>> AsyncEnableService(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::api::serviceusage::v1::EnableServiceRequest const& request)
      override;

  StatusOr<google::longrunning::Operation> EnableService(
      grpc::ClientContext& context, Options options,
      google::api::serviceusage::v1::EnableServiceRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncDisableService(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::api::serviceusage::v1::DisableServiceRequest const& request)
      override;

  StatusOr<google::longrunning::Operation> DisableService(
      grpc::ClientContext& context, Options options,
      google::api::serviceusage::v1::DisableServiceRequest const& request)
      override;

  StatusOr<google::api::serviceusage::v1::Service> GetService(
      grpc::ClientContext& context, Options const& options,
      google::api::serviceusage::v1::GetServiceRequest const& request) override;

  StatusOr<google::api::serviceusage::v1::ListServicesResponse> ListServices(
      grpc::ClientContext& context, Options const& options,
      google::api::serviceusage::v1::ListServicesRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncBatchEnableServices(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::api::serviceusage::v1::BatchEnableServicesRequest const& request)
      override;

  StatusOr<google::longrunning::Operation> BatchEnableServices(
      grpc::ClientContext& context, Options options,
      google::api::serviceusage::v1::BatchEnableServicesRequest const& request)
      override;

  StatusOr<google::api::serviceusage::v1::BatchGetServicesResponse>
  BatchGetServices(grpc::ClientContext& context, Options const& options,
                   google::api::serviceusage::v1::BatchGetServicesRequest const&
                       request) override;

  StatusOr<google::longrunning::ListOperationsResponse> ListOperations(
      grpc::ClientContext& context, Options const& options,
      google::longrunning::ListOperationsRequest const& request) override;

  StatusOr<google::longrunning::Operation> GetOperation(
      grpc::ClientContext& context, Options const& options,
      google::longrunning::GetOperationRequest const& request) override;

  future<StatusOr<google::longrunning::Operation>> AsyncGetOperation(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::longrunning::GetOperationRequest const& request) override;

  future<Status> AsyncCancelOperation(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::longrunning::CancelOperationRequest const& request) override;

 private:
  std::shared_ptr<ServiceUsageStub> child_;
  TracingOptions tracing_options_;
};  // ServiceUsageLogging

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace serviceusage_v1_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_SERVICEUSAGE_V1_INTERNAL_SERVICE_USAGE_LOGGING_DECORATOR_H
