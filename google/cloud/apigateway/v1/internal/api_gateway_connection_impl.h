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
// source: google/cloud/apigateway/v1/apigateway_service.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_APIGATEWAY_V1_INTERNAL_API_GATEWAY_CONNECTION_IMPL_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_APIGATEWAY_V1_INTERNAL_API_GATEWAY_CONNECTION_IMPL_H

#include "google/cloud/apigateway/v1/api_gateway_connection.h"
#include "google/cloud/apigateway/v1/api_gateway_connection_idempotency_policy.h"
#include "google/cloud/apigateway/v1/api_gateway_options.h"
#include "google/cloud/apigateway/v1/internal/api_gateway_retry_traits.h"
#include "google/cloud/apigateway/v1/internal/api_gateway_stub.h"
#include "google/cloud/background_threads.h"
#include "google/cloud/backoff_policy.h"
#include "google/cloud/future.h"
#include "google/cloud/options.h"
#include "google/cloud/polling_policy.h"
#include "google/cloud/status_or.h"
#include "google/cloud/stream_range.h"
#include "google/cloud/version.h"
#include "google/longrunning/operations.grpc.pb.h"
#include <memory>

namespace google {
namespace cloud {
namespace apigateway_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class ApiGatewayServiceConnectionImpl
    : public apigateway_v1::ApiGatewayServiceConnection {
 public:
  ~ApiGatewayServiceConnectionImpl() override = default;

  ApiGatewayServiceConnectionImpl(
      std::unique_ptr<google::cloud::BackgroundThreads> background,
      std::shared_ptr<apigateway_v1_internal::ApiGatewayServiceStub> stub,
      Options options);

  Options options() override { return options_; }

  StreamRange<google::cloud::apigateway::v1::Gateway> ListGateways(
      google::cloud::apigateway::v1::ListGatewaysRequest request) override;

  StatusOr<google::cloud::apigateway::v1::Gateway> GetGateway(
      google::cloud::apigateway::v1::GetGatewayRequest const& request) override;

  future<StatusOr<google::cloud::apigateway::v1::Gateway>> CreateGateway(
      google::cloud::apigateway::v1::CreateGatewayRequest const& request)
      override;

  StatusOr<google::longrunning::Operation> CreateGateway(
      NoAwaitTag,
      google::cloud::apigateway::v1::CreateGatewayRequest const& request)
      override;

  future<StatusOr<google::cloud::apigateway::v1::Gateway>> CreateGateway(
      google::longrunning::Operation const& operation) override;

  future<StatusOr<google::cloud::apigateway::v1::Gateway>> UpdateGateway(
      google::cloud::apigateway::v1::UpdateGatewayRequest const& request)
      override;

  StatusOr<google::longrunning::Operation> UpdateGateway(
      NoAwaitTag,
      google::cloud::apigateway::v1::UpdateGatewayRequest const& request)
      override;

  future<StatusOr<google::cloud::apigateway::v1::Gateway>> UpdateGateway(
      google::longrunning::Operation const& operation) override;

  future<StatusOr<google::cloud::apigateway::v1::OperationMetadata>>
  DeleteGateway(google::cloud::apigateway::v1::DeleteGatewayRequest const&
                    request) override;

  StatusOr<google::longrunning::Operation> DeleteGateway(
      NoAwaitTag,
      google::cloud::apigateway::v1::DeleteGatewayRequest const& request)
      override;

  future<StatusOr<google::cloud::apigateway::v1::OperationMetadata>>
  DeleteGateway(google::longrunning::Operation const& operation) override;

  StreamRange<google::cloud::apigateway::v1::Api> ListApis(
      google::cloud::apigateway::v1::ListApisRequest request) override;

  StatusOr<google::cloud::apigateway::v1::Api> GetApi(
      google::cloud::apigateway::v1::GetApiRequest const& request) override;

  future<StatusOr<google::cloud::apigateway::v1::Api>> CreateApi(
      google::cloud::apigateway::v1::CreateApiRequest const& request) override;

  StatusOr<google::longrunning::Operation> CreateApi(
      NoAwaitTag,
      google::cloud::apigateway::v1::CreateApiRequest const& request) override;

  future<StatusOr<google::cloud::apigateway::v1::Api>> CreateApi(
      google::longrunning::Operation const& operation) override;

  future<StatusOr<google::cloud::apigateway::v1::Api>> UpdateApi(
      google::cloud::apigateway::v1::UpdateApiRequest const& request) override;

  StatusOr<google::longrunning::Operation> UpdateApi(
      NoAwaitTag,
      google::cloud::apigateway::v1::UpdateApiRequest const& request) override;

  future<StatusOr<google::cloud::apigateway::v1::Api>> UpdateApi(
      google::longrunning::Operation const& operation) override;

  future<StatusOr<google::cloud::apigateway::v1::OperationMetadata>> DeleteApi(
      google::cloud::apigateway::v1::DeleteApiRequest const& request) override;

  StatusOr<google::longrunning::Operation> DeleteApi(
      NoAwaitTag,
      google::cloud::apigateway::v1::DeleteApiRequest const& request) override;

  future<StatusOr<google::cloud::apigateway::v1::OperationMetadata>> DeleteApi(
      google::longrunning::Operation const& operation) override;

  StreamRange<google::cloud::apigateway::v1::ApiConfig> ListApiConfigs(
      google::cloud::apigateway::v1::ListApiConfigsRequest request) override;

  StatusOr<google::cloud::apigateway::v1::ApiConfig> GetApiConfig(
      google::cloud::apigateway::v1::GetApiConfigRequest const& request)
      override;

  future<StatusOr<google::cloud::apigateway::v1::ApiConfig>> CreateApiConfig(
      google::cloud::apigateway::v1::CreateApiConfigRequest const& request)
      override;

  StatusOr<google::longrunning::Operation> CreateApiConfig(
      NoAwaitTag,
      google::cloud::apigateway::v1::CreateApiConfigRequest const& request)
      override;

  future<StatusOr<google::cloud::apigateway::v1::ApiConfig>> CreateApiConfig(
      google::longrunning::Operation const& operation) override;

  future<StatusOr<google::cloud::apigateway::v1::ApiConfig>> UpdateApiConfig(
      google::cloud::apigateway::v1::UpdateApiConfigRequest const& request)
      override;

  StatusOr<google::longrunning::Operation> UpdateApiConfig(
      NoAwaitTag,
      google::cloud::apigateway::v1::UpdateApiConfigRequest const& request)
      override;

  future<StatusOr<google::cloud::apigateway::v1::ApiConfig>> UpdateApiConfig(
      google::longrunning::Operation const& operation) override;

  future<StatusOr<google::cloud::apigateway::v1::OperationMetadata>>
  DeleteApiConfig(google::cloud::apigateway::v1::DeleteApiConfigRequest const&
                      request) override;

  StatusOr<google::longrunning::Operation> DeleteApiConfig(
      NoAwaitTag,
      google::cloud::apigateway::v1::DeleteApiConfigRequest const& request)
      override;

  future<StatusOr<google::cloud::apigateway::v1::OperationMetadata>>
  DeleteApiConfig(google::longrunning::Operation const& operation) override;

 private:
  std::unique_ptr<google::cloud::BackgroundThreads> background_;
  std::shared_ptr<apigateway_v1_internal::ApiGatewayServiceStub> stub_;
  Options options_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace apigateway_v1_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_APIGATEWAY_V1_INTERNAL_API_GATEWAY_CONNECTION_IMPL_H
