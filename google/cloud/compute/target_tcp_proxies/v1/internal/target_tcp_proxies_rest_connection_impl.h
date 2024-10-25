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
// source: google/cloud/compute/target_tcp_proxies/v1/target_tcp_proxies.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_TARGET_TCP_PROXIES_V1_INTERNAL_TARGET_TCP_PROXIES_REST_CONNECTION_IMPL_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_TARGET_TCP_PROXIES_V1_INTERNAL_TARGET_TCP_PROXIES_REST_CONNECTION_IMPL_H

#include "google/cloud/compute/global_operations/v1/global_operations.pb.h"
#include "google/cloud/compute/target_tcp_proxies/v1/internal/target_tcp_proxies_rest_stub.h"
#include "google/cloud/compute/target_tcp_proxies/v1/internal/target_tcp_proxies_retry_traits.h"
#include "google/cloud/compute/target_tcp_proxies/v1/target_tcp_proxies_connection.h"
#include "google/cloud/compute/target_tcp_proxies/v1/target_tcp_proxies_connection_idempotency_policy.h"
#include "google/cloud/compute/target_tcp_proxies/v1/target_tcp_proxies_options.h"
#include "google/cloud/background_threads.h"
#include "google/cloud/backoff_policy.h"
#include "google/cloud/options.h"
#include "google/cloud/status_or.h"
#include "google/cloud/stream_range.h"
#include "google/cloud/version.h"
#include <memory>

namespace google {
namespace cloud {
namespace compute_target_tcp_proxies_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class TargetTcpProxiesRestConnectionImpl
    : public compute_target_tcp_proxies_v1::TargetTcpProxiesConnection {
 public:
  ~TargetTcpProxiesRestConnectionImpl() override = default;

  TargetTcpProxiesRestConnectionImpl(
      std::unique_ptr<google::cloud::BackgroundThreads> background,
      std::shared_ptr<
          compute_target_tcp_proxies_v1_internal::TargetTcpProxiesRestStub>
          stub,
      Options options);

  Options options() override { return options_; }

  StreamRange<std::pair<
      std::string, google::cloud::cpp::compute::v1::TargetTcpProxiesScopedList>>
  AggregatedListTargetTcpProxies(
      google::cloud::cpp::compute::target_tcp_proxies::v1::
          AggregatedListTargetTcpProxiesRequest request) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  DeleteTargetTcpProxy(google::cloud::cpp::compute::target_tcp_proxies::v1::
                           DeleteTargetTcpProxyRequest const& request) override;

  StatusOr<google::cloud::cpp::compute::v1::Operation> DeleteTargetTcpProxy(
      NoAwaitTag, google::cloud::cpp::compute::target_tcp_proxies::v1::
                      DeleteTargetTcpProxyRequest const& request) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  DeleteTargetTcpProxy(
      google::cloud::cpp::compute::v1::Operation const& operation) override;

  StatusOr<google::cloud::cpp::compute::v1::TargetTcpProxy> GetTargetTcpProxy(
      google::cloud::cpp::compute::target_tcp_proxies::v1::
          GetTargetTcpProxyRequest const& request) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  InsertTargetTcpProxy(google::cloud::cpp::compute::target_tcp_proxies::v1::
                           InsertTargetTcpProxyRequest const& request) override;

  StatusOr<google::cloud::cpp::compute::v1::Operation> InsertTargetTcpProxy(
      NoAwaitTag, google::cloud::cpp::compute::target_tcp_proxies::v1::
                      InsertTargetTcpProxyRequest const& request) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  InsertTargetTcpProxy(
      google::cloud::cpp::compute::v1::Operation const& operation) override;

  StreamRange<google::cloud::cpp::compute::v1::TargetTcpProxy>
  ListTargetTcpProxies(google::cloud::cpp::compute::target_tcp_proxies::v1::
                           ListTargetTcpProxiesRequest request) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  SetBackendService(google::cloud::cpp::compute::target_tcp_proxies::v1::
                        SetBackendServiceRequest const& request) override;

  StatusOr<google::cloud::cpp::compute::v1::Operation> SetBackendService(
      NoAwaitTag, google::cloud::cpp::compute::target_tcp_proxies::v1::
                      SetBackendServiceRequest const& request) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  SetBackendService(
      google::cloud::cpp::compute::v1::Operation const& operation) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>> SetProxyHeader(
      google::cloud::cpp::compute::target_tcp_proxies::v1::
          SetProxyHeaderRequest const& request) override;

  StatusOr<google::cloud::cpp::compute::v1::Operation> SetProxyHeader(
      NoAwaitTag, google::cloud::cpp::compute::target_tcp_proxies::v1::
                      SetProxyHeaderRequest const& request) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>> SetProxyHeader(
      google::cloud::cpp::compute::v1::Operation const& operation) override;

 private:
  static std::unique_ptr<
      compute_target_tcp_proxies_v1::TargetTcpProxiesRetryPolicy>
  retry_policy(Options const& options) {
    return options
        .get<compute_target_tcp_proxies_v1::TargetTcpProxiesRetryPolicyOption>()
        ->clone();
  }

  static std::unique_ptr<BackoffPolicy> backoff_policy(Options const& options) {
    return options
        .get<compute_target_tcp_proxies_v1::
                 TargetTcpProxiesBackoffPolicyOption>()
        ->clone();
  }

  static std::unique_ptr<compute_target_tcp_proxies_v1::
                             TargetTcpProxiesConnectionIdempotencyPolicy>
  idempotency_policy(Options const& options) {
    return options
        .get<compute_target_tcp_proxies_v1::
                 TargetTcpProxiesConnectionIdempotencyPolicyOption>()
        ->clone();
  }

  static std::unique_ptr<PollingPolicy> polling_policy(Options const& options) {
    return options
        .get<compute_target_tcp_proxies_v1::
                 TargetTcpProxiesPollingPolicyOption>()
        ->clone();
  }

  std::unique_ptr<google::cloud::BackgroundThreads> background_;
  std::shared_ptr<
      compute_target_tcp_proxies_v1_internal::TargetTcpProxiesRestStub>
      stub_;
  Options options_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_target_tcp_proxies_v1_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_TARGET_TCP_PROXIES_V1_INTERNAL_TARGET_TCP_PROXIES_REST_CONNECTION_IMPL_H
