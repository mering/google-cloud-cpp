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
// source: google/cloud/resourcemanager/v3/tag_holds.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_RESOURCEMANAGER_V3_TAG_HOLDS_CONNECTION_IDEMPOTENCY_POLICY_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_RESOURCEMANAGER_V3_TAG_HOLDS_CONNECTION_IDEMPOTENCY_POLICY_H

#include "google/cloud/idempotency.h"
#include "google/cloud/version.h"
#include "google/cloud/resourcemanager/v3/tag_holds.grpc.pb.h"
#include "google/longrunning/operations.grpc.pb.h"
#include <memory>

namespace google {
namespace cloud {
namespace resourcemanager_v3 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class TagHoldsConnectionIdempotencyPolicy {
 public:
  virtual ~TagHoldsConnectionIdempotencyPolicy();

  /// Create a new copy of this object.
  virtual std::unique_ptr<TagHoldsConnectionIdempotencyPolicy> clone() const;

  virtual google::cloud::Idempotency CreateTagHold(
      google::cloud::resourcemanager::v3::CreateTagHoldRequest const& request);

  virtual google::cloud::Idempotency DeleteTagHold(
      google::cloud::resourcemanager::v3::DeleteTagHoldRequest const& request);

  virtual google::cloud::Idempotency ListTagHolds(
      google::cloud::resourcemanager::v3::ListTagHoldsRequest request);

  virtual google::cloud::Idempotency GetOperation(
      google::longrunning::GetOperationRequest const& request);
};

std::unique_ptr<TagHoldsConnectionIdempotencyPolicy>
MakeDefaultTagHoldsConnectionIdempotencyPolicy();

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace resourcemanager_v3
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_RESOURCEMANAGER_V3_TAG_HOLDS_CONNECTION_IDEMPOTENCY_POLICY_H
