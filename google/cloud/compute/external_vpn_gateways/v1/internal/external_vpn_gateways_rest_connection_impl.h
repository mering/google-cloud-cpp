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
// source:
// google/cloud/compute/external_vpn_gateways/v1/external_vpn_gateways.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_EXTERNAL_VPN_GATEWAYS_V1_INTERNAL_EXTERNAL_VPN_GATEWAYS_REST_CONNECTION_IMPL_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_EXTERNAL_VPN_GATEWAYS_V1_INTERNAL_EXTERNAL_VPN_GATEWAYS_REST_CONNECTION_IMPL_H

#include "google/cloud/compute/external_vpn_gateways/v1/external_vpn_gateways_connection.h"
#include "google/cloud/compute/external_vpn_gateways/v1/external_vpn_gateways_connection_idempotency_policy.h"
#include "google/cloud/compute/external_vpn_gateways/v1/external_vpn_gateways_options.h"
#include "google/cloud/compute/external_vpn_gateways/v1/internal/external_vpn_gateways_rest_stub.h"
#include "google/cloud/compute/external_vpn_gateways/v1/internal/external_vpn_gateways_retry_traits.h"
#include "google/cloud/compute/global_operations/v1/global_operations.pb.h"
#include "google/cloud/background_threads.h"
#include "google/cloud/backoff_policy.h"
#include "google/cloud/options.h"
#include "google/cloud/status_or.h"
#include "google/cloud/stream_range.h"
#include "google/cloud/version.h"
#include <memory>

namespace google {
namespace cloud {
namespace compute_external_vpn_gateways_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class ExternalVpnGatewaysRestConnectionImpl
    : public compute_external_vpn_gateways_v1::ExternalVpnGatewaysConnection {
 public:
  ~ExternalVpnGatewaysRestConnectionImpl() override = default;

  ExternalVpnGatewaysRestConnectionImpl(
      std::unique_ptr<google::cloud::BackgroundThreads> background,
      std::shared_ptr<compute_external_vpn_gateways_v1_internal::
                          ExternalVpnGatewaysRestStub>
          stub,
      Options options);

  Options options() override { return options_; }

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  DeleteExternalVpnGateway(
      google::cloud::cpp::compute::external_vpn_gateways::v1::
          DeleteExternalVpnGatewayRequest const& request) override;

  StatusOr<google::cloud::cpp::compute::v1::Operation> DeleteExternalVpnGateway(
      NoAwaitTag, google::cloud::cpp::compute::external_vpn_gateways::v1::
                      DeleteExternalVpnGatewayRequest const& request) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  DeleteExternalVpnGateway(
      google::cloud::cpp::compute::v1::Operation const& operation) override;

  StatusOr<google::cloud::cpp::compute::v1::ExternalVpnGateway>
  GetExternalVpnGateway(
      google::cloud::cpp::compute::external_vpn_gateways::v1::
          GetExternalVpnGatewayRequest const& request) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  InsertExternalVpnGateway(
      google::cloud::cpp::compute::external_vpn_gateways::v1::
          InsertExternalVpnGatewayRequest const& request) override;

  StatusOr<google::cloud::cpp::compute::v1::Operation> InsertExternalVpnGateway(
      NoAwaitTag, google::cloud::cpp::compute::external_vpn_gateways::v1::
                      InsertExternalVpnGatewayRequest const& request) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  InsertExternalVpnGateway(
      google::cloud::cpp::compute::v1::Operation const& operation) override;

  StreamRange<google::cloud::cpp::compute::v1::ExternalVpnGateway>
  ListExternalVpnGateways(
      google::cloud::cpp::compute::external_vpn_gateways::v1::
          ListExternalVpnGatewaysRequest request) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>> SetLabels(
      google::cloud::cpp::compute::external_vpn_gateways::v1::
          SetLabelsRequest const& request) override;

  StatusOr<google::cloud::cpp::compute::v1::Operation> SetLabels(
      NoAwaitTag, google::cloud::cpp::compute::external_vpn_gateways::v1::
                      SetLabelsRequest const& request) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>> SetLabels(
      google::cloud::cpp::compute::v1::Operation const& operation) override;

  StatusOr<google::cloud::cpp::compute::v1::TestPermissionsResponse>
  TestIamPermissions(google::cloud::cpp::compute::external_vpn_gateways::v1::
                         TestIamPermissionsRequest const& request) override;

 private:
  static std::unique_ptr<
      compute_external_vpn_gateways_v1::ExternalVpnGatewaysRetryPolicy>
  retry_policy(Options const& options) {
    return options
        .get<compute_external_vpn_gateways_v1::
                 ExternalVpnGatewaysRetryPolicyOption>()
        ->clone();
  }

  static std::unique_ptr<BackoffPolicy> backoff_policy(Options const& options) {
    return options
        .get<compute_external_vpn_gateways_v1::
                 ExternalVpnGatewaysBackoffPolicyOption>()
        ->clone();
  }

  static std::unique_ptr<compute_external_vpn_gateways_v1::
                             ExternalVpnGatewaysConnectionIdempotencyPolicy>
  idempotency_policy(Options const& options) {
    return options
        .get<compute_external_vpn_gateways_v1::
                 ExternalVpnGatewaysConnectionIdempotencyPolicyOption>()
        ->clone();
  }

  static std::unique_ptr<PollingPolicy> polling_policy(Options const& options) {
    return options
        .get<compute_external_vpn_gateways_v1::
                 ExternalVpnGatewaysPollingPolicyOption>()
        ->clone();
  }

  std::unique_ptr<google::cloud::BackgroundThreads> background_;
  std::shared_ptr<
      compute_external_vpn_gateways_v1_internal::ExternalVpnGatewaysRestStub>
      stub_;
  Options options_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_external_vpn_gateways_v1_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_EXTERNAL_VPN_GATEWAYS_V1_INTERNAL_EXTERNAL_VPN_GATEWAYS_REST_CONNECTION_IMPL_H
