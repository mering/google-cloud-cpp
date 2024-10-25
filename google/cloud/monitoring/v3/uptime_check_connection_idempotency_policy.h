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
// source: google/monitoring/v3/uptime_service.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_MONITORING_V3_UPTIME_CHECK_CONNECTION_IDEMPOTENCY_POLICY_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_MONITORING_V3_UPTIME_CHECK_CONNECTION_IDEMPOTENCY_POLICY_H

#include "google/cloud/idempotency.h"
#include "google/cloud/version.h"
#include "google/monitoring/v3/uptime_service.grpc.pb.h"
#include <memory>

namespace google {
namespace cloud {
namespace monitoring_v3 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class UptimeCheckServiceConnectionIdempotencyPolicy {
 public:
  virtual ~UptimeCheckServiceConnectionIdempotencyPolicy();

  /// Create a new copy of this object.
  virtual std::unique_ptr<UptimeCheckServiceConnectionIdempotencyPolicy> clone()
      const;

  virtual google::cloud::Idempotency ListUptimeCheckConfigs(
      google::monitoring::v3::ListUptimeCheckConfigsRequest request);

  virtual google::cloud::Idempotency GetUptimeCheckConfig(
      google::monitoring::v3::GetUptimeCheckConfigRequest const& request);

  virtual google::cloud::Idempotency CreateUptimeCheckConfig(
      google::monitoring::v3::CreateUptimeCheckConfigRequest const& request);

  virtual google::cloud::Idempotency UpdateUptimeCheckConfig(
      google::monitoring::v3::UpdateUptimeCheckConfigRequest const& request);

  virtual google::cloud::Idempotency DeleteUptimeCheckConfig(
      google::monitoring::v3::DeleteUptimeCheckConfigRequest const& request);

  virtual google::cloud::Idempotency ListUptimeCheckIps(
      google::monitoring::v3::ListUptimeCheckIpsRequest request);
};

std::unique_ptr<UptimeCheckServiceConnectionIdempotencyPolicy>
MakeDefaultUptimeCheckServiceConnectionIdempotencyPolicy();

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace monitoring_v3
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_MONITORING_V3_UPTIME_CHECK_CONNECTION_IDEMPOTENCY_POLICY_H
