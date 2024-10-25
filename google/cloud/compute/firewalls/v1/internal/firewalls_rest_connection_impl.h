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
// source: google/cloud/compute/firewalls/v1/firewalls.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_FIREWALLS_V1_INTERNAL_FIREWALLS_REST_CONNECTION_IMPL_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_FIREWALLS_V1_INTERNAL_FIREWALLS_REST_CONNECTION_IMPL_H

#include "google/cloud/compute/firewalls/v1/firewalls_connection.h"
#include "google/cloud/compute/firewalls/v1/firewalls_connection_idempotency_policy.h"
#include "google/cloud/compute/firewalls/v1/firewalls_options.h"
#include "google/cloud/compute/firewalls/v1/internal/firewalls_rest_stub.h"
#include "google/cloud/compute/firewalls/v1/internal/firewalls_retry_traits.h"
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
namespace compute_firewalls_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class FirewallsRestConnectionImpl
    : public compute_firewalls_v1::FirewallsConnection {
 public:
  ~FirewallsRestConnectionImpl() override = default;

  FirewallsRestConnectionImpl(
      std::unique_ptr<google::cloud::BackgroundThreads> background,
      std::shared_ptr<compute_firewalls_v1_internal::FirewallsRestStub> stub,
      Options options);

  Options options() override { return options_; }

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>> DeleteFirewall(
      google::cloud::cpp::compute::firewalls::v1::DeleteFirewallRequest const&
          request) override;

  StatusOr<google::cloud::cpp::compute::v1::Operation> DeleteFirewall(
      NoAwaitTag,
      google::cloud::cpp::compute::firewalls::v1::DeleteFirewallRequest const&
          request) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>> DeleteFirewall(
      google::cloud::cpp::compute::v1::Operation const& operation) override;

  StatusOr<google::cloud::cpp::compute::v1::Firewall> GetFirewall(
      google::cloud::cpp::compute::firewalls::v1::GetFirewallRequest const&
          request) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>> InsertFirewall(
      google::cloud::cpp::compute::firewalls::v1::InsertFirewallRequest const&
          request) override;

  StatusOr<google::cloud::cpp::compute::v1::Operation> InsertFirewall(
      NoAwaitTag,
      google::cloud::cpp::compute::firewalls::v1::InsertFirewallRequest const&
          request) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>> InsertFirewall(
      google::cloud::cpp::compute::v1::Operation const& operation) override;

  StreamRange<google::cloud::cpp::compute::v1::Firewall> ListFirewalls(
      google::cloud::cpp::compute::firewalls::v1::ListFirewallsRequest request)
      override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>> PatchFirewall(
      google::cloud::cpp::compute::firewalls::v1::PatchFirewallRequest const&
          request) override;

  StatusOr<google::cloud::cpp::compute::v1::Operation> PatchFirewall(
      NoAwaitTag,
      google::cloud::cpp::compute::firewalls::v1::PatchFirewallRequest const&
          request) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>> PatchFirewall(
      google::cloud::cpp::compute::v1::Operation const& operation) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>> UpdateFirewall(
      google::cloud::cpp::compute::firewalls::v1::UpdateFirewallRequest const&
          request) override;

  StatusOr<google::cloud::cpp::compute::v1::Operation> UpdateFirewall(
      NoAwaitTag,
      google::cloud::cpp::compute::firewalls::v1::UpdateFirewallRequest const&
          request) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>> UpdateFirewall(
      google::cloud::cpp::compute::v1::Operation const& operation) override;

 private:
  static std::unique_ptr<compute_firewalls_v1::FirewallsRetryPolicy>
  retry_policy(Options const& options) {
    return options.get<compute_firewalls_v1::FirewallsRetryPolicyOption>()
        ->clone();
  }

  static std::unique_ptr<BackoffPolicy> backoff_policy(Options const& options) {
    return options.get<compute_firewalls_v1::FirewallsBackoffPolicyOption>()
        ->clone();
  }

  static std::unique_ptr<
      compute_firewalls_v1::FirewallsConnectionIdempotencyPolicy>
  idempotency_policy(Options const& options) {
    return options
        .get<compute_firewalls_v1::FirewallsConnectionIdempotencyPolicyOption>()
        ->clone();
  }

  static std::unique_ptr<PollingPolicy> polling_policy(Options const& options) {
    return options.get<compute_firewalls_v1::FirewallsPollingPolicyOption>()
        ->clone();
  }

  std::unique_ptr<google::cloud::BackgroundThreads> background_;
  std::shared_ptr<compute_firewalls_v1_internal::FirewallsRestStub> stub_;
  Options options_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_firewalls_v1_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_FIREWALLS_V1_INTERNAL_FIREWALLS_REST_CONNECTION_IMPL_H
