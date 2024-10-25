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
// source: google/cloud/ids/v1/ids.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_IDS_V1_IDS_CONNECTION_IDEMPOTENCY_POLICY_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_IDS_V1_IDS_CONNECTION_IDEMPOTENCY_POLICY_H

#include "google/cloud/ids/v1/ids.grpc.pb.h"
#include "google/cloud/idempotency.h"
#include "google/cloud/version.h"
#include <memory>

namespace google {
namespace cloud {
namespace ids_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class IDSConnectionIdempotencyPolicy {
 public:
  virtual ~IDSConnectionIdempotencyPolicy();

  /// Create a new copy of this object.
  virtual std::unique_ptr<IDSConnectionIdempotencyPolicy> clone() const;

  virtual google::cloud::Idempotency ListEndpoints(
      google::cloud::ids::v1::ListEndpointsRequest request);

  virtual google::cloud::Idempotency GetEndpoint(
      google::cloud::ids::v1::GetEndpointRequest const& request);

  virtual google::cloud::Idempotency CreateEndpoint(
      google::cloud::ids::v1::CreateEndpointRequest const& request);

  virtual google::cloud::Idempotency DeleteEndpoint(
      google::cloud::ids::v1::DeleteEndpointRequest const& request);
};

std::unique_ptr<IDSConnectionIdempotencyPolicy>
MakeDefaultIDSConnectionIdempotencyPolicy();

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace ids_v1
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_IDS_V1_IDS_CONNECTION_IDEMPOTENCY_POLICY_H
