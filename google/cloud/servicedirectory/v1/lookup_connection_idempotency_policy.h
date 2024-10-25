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
// source: google/cloud/servicedirectory/v1/lookup_service.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_SERVICEDIRECTORY_V1_LOOKUP_CONNECTION_IDEMPOTENCY_POLICY_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_SERVICEDIRECTORY_V1_LOOKUP_CONNECTION_IDEMPOTENCY_POLICY_H

#include "google/cloud/location/locations.grpc.pb.h"
#include "google/cloud/servicedirectory/v1/lookup_service.grpc.pb.h"
#include "google/cloud/idempotency.h"
#include "google/cloud/version.h"
#include <memory>

namespace google {
namespace cloud {
namespace servicedirectory_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class LookupServiceConnectionIdempotencyPolicy {
 public:
  virtual ~LookupServiceConnectionIdempotencyPolicy();

  /// Create a new copy of this object.
  virtual std::unique_ptr<LookupServiceConnectionIdempotencyPolicy> clone()
      const;

  virtual google::cloud::Idempotency ResolveService(
      google::cloud::servicedirectory::v1::ResolveServiceRequest const&
          request);

  virtual google::cloud::Idempotency ListLocations(
      google::cloud::location::ListLocationsRequest request);

  virtual google::cloud::Idempotency GetLocation(
      google::cloud::location::GetLocationRequest const& request);
};

std::unique_ptr<LookupServiceConnectionIdempotencyPolicy>
MakeDefaultLookupServiceConnectionIdempotencyPolicy();

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace servicedirectory_v1
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_SERVICEDIRECTORY_V1_LOOKUP_CONNECTION_IDEMPOTENCY_POLICY_H
