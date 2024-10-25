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
// source: google/cloud/compute/https_health_checks/v1/https_health_checks.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_HTTPS_HEALTH_CHECKS_V1_INTERNAL_HTTPS_HEALTH_CHECKS_REST_CONNECTION_IMPL_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_HTTPS_HEALTH_CHECKS_V1_INTERNAL_HTTPS_HEALTH_CHECKS_REST_CONNECTION_IMPL_H

#include "google/cloud/compute/https_health_checks/v1/https_health_checks_connection.h"
#include "google/cloud/compute/https_health_checks/v1/https_health_checks_connection_idempotency_policy.h"
#include "google/cloud/compute/https_health_checks/v1/https_health_checks_options.h"
#include "google/cloud/compute/https_health_checks/v1/internal/https_health_checks_rest_stub.h"
#include "google/cloud/compute/https_health_checks/v1/internal/https_health_checks_retry_traits.h"
#include "google/cloud/background_threads.h"
#include "google/cloud/backoff_policy.h"
#include "google/cloud/options.h"
#include "google/cloud/status_or.h"
#include "google/cloud/stream_range.h"
#include "google/cloud/version.h"
#include "google/cloud/compute/global_operations/v1/global_operations.pb.h"
#include <memory>

namespace google {
namespace cloud {
namespace compute_https_health_checks_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class HttpsHealthChecksRestConnectionImpl
    : public compute_https_health_checks_v1::HttpsHealthChecksConnection {
 public:
  ~HttpsHealthChecksRestConnectionImpl() override = default;

  HttpsHealthChecksRestConnectionImpl(
      std::unique_ptr<google::cloud::BackgroundThreads> background,
      std::shared_ptr<
          compute_https_health_checks_v1_internal::HttpsHealthChecksRestStub>
          stub,
      Options options);

  Options options() override { return options_; }

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  DeleteHttpsHealthCheck(
      google::cloud::cpp::compute::https_health_checks::v1::
          DeleteHttpsHealthCheckRequest const& request) override;

  StatusOr<google::cloud::cpp::compute::v1::Operation> DeleteHttpsHealthCheck(
      NoAwaitTag, google::cloud::cpp::compute::https_health_checks::v1::
                      DeleteHttpsHealthCheckRequest const& request) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  DeleteHttpsHealthCheck(
      google::cloud::cpp::compute::v1::Operation const& operation) override;

  StatusOr<google::cloud::cpp::compute::v1::HttpsHealthCheck>
  GetHttpsHealthCheck(google::cloud::cpp::compute::https_health_checks::v1::
                          GetHttpsHealthCheckRequest const& request) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  InsertHttpsHealthCheck(
      google::cloud::cpp::compute::https_health_checks::v1::
          InsertHttpsHealthCheckRequest const& request) override;

  StatusOr<google::cloud::cpp::compute::v1::Operation> InsertHttpsHealthCheck(
      NoAwaitTag, google::cloud::cpp::compute::https_health_checks::v1::
                      InsertHttpsHealthCheckRequest const& request) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  InsertHttpsHealthCheck(
      google::cloud::cpp::compute::v1::Operation const& operation) override;

  StreamRange<google::cloud::cpp::compute::v1::HttpsHealthCheck>
  ListHttpsHealthChecks(google::cloud::cpp::compute::https_health_checks::v1::
                            ListHttpsHealthChecksRequest request) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  PatchHttpsHealthCheck(
      google::cloud::cpp::compute::https_health_checks::v1::
          PatchHttpsHealthCheckRequest const& request) override;

  StatusOr<google::cloud::cpp::compute::v1::Operation> PatchHttpsHealthCheck(
      NoAwaitTag, google::cloud::cpp::compute::https_health_checks::v1::
                      PatchHttpsHealthCheckRequest const& request) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  PatchHttpsHealthCheck(
      google::cloud::cpp::compute::v1::Operation const& operation) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  UpdateHttpsHealthCheck(
      google::cloud::cpp::compute::https_health_checks::v1::
          UpdateHttpsHealthCheckRequest const& request) override;

  StatusOr<google::cloud::cpp::compute::v1::Operation> UpdateHttpsHealthCheck(
      NoAwaitTag, google::cloud::cpp::compute::https_health_checks::v1::
                      UpdateHttpsHealthCheckRequest const& request) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  UpdateHttpsHealthCheck(
      google::cloud::cpp::compute::v1::Operation const& operation) override;

 private:
  static std::unique_ptr<
      compute_https_health_checks_v1::HttpsHealthChecksRetryPolicy>
  retry_policy(Options const& options) {
    return options
        .get<compute_https_health_checks_v1::
                 HttpsHealthChecksRetryPolicyOption>()
        ->clone();
  }

  static std::unique_ptr<BackoffPolicy> backoff_policy(Options const& options) {
    return options
        .get<compute_https_health_checks_v1::
                 HttpsHealthChecksBackoffPolicyOption>()
        ->clone();
  }

  static std::unique_ptr<compute_https_health_checks_v1::
                             HttpsHealthChecksConnectionIdempotencyPolicy>
  idempotency_policy(Options const& options) {
    return options
        .get<compute_https_health_checks_v1::
                 HttpsHealthChecksConnectionIdempotencyPolicyOption>()
        ->clone();
  }

  static std::unique_ptr<PollingPolicy> polling_policy(Options const& options) {
    return options
        .get<compute_https_health_checks_v1::
                 HttpsHealthChecksPollingPolicyOption>()
        ->clone();
  }

  std::unique_ptr<google::cloud::BackgroundThreads> background_;
  std::shared_ptr<
      compute_https_health_checks_v1_internal::HttpsHealthChecksRestStub>
      stub_;
  Options options_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_https_health_checks_v1_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_HTTPS_HEALTH_CHECKS_V1_INTERNAL_HTTPS_HEALTH_CHECKS_REST_CONNECTION_IMPL_H
