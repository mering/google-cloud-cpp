// Copyright 2024 Google LLC
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
// source: google/cloud/compute/storage_pool_types/v1/storage_pool_types.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_STORAGE_POOL_TYPES_V1_STORAGE_POOL_TYPES_CONNECTION_IDEMPOTENCY_POLICY_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_STORAGE_POOL_TYPES_V1_STORAGE_POOL_TYPES_CONNECTION_IDEMPOTENCY_POLICY_H

#include "google/cloud/idempotency.h"
#include "google/cloud/version.h"
#include "google/cloud/compute/storage_pool_types/v1/storage_pool_types.pb.h"
#include <memory>

namespace google {
namespace cloud {
namespace compute_storage_pool_types_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class StoragePoolTypesConnectionIdempotencyPolicy {
 public:
  virtual ~StoragePoolTypesConnectionIdempotencyPolicy();

  /// Create a new copy of this object.
  virtual std::unique_ptr<StoragePoolTypesConnectionIdempotencyPolicy> clone()
      const;

  virtual google::cloud::Idempotency AggregatedListStoragePoolTypes(
      google::cloud::cpp::compute::storage_pool_types::v1::
          AggregatedListStoragePoolTypesRequest request);

  virtual google::cloud::Idempotency GetStoragePoolType(
      google::cloud::cpp::compute::storage_pool_types::v1::
          GetStoragePoolTypeRequest const& request);

  virtual google::cloud::Idempotency ListStoragePoolTypes(
      google::cloud::cpp::compute::storage_pool_types::v1::
          ListStoragePoolTypesRequest request);
};

std::unique_ptr<StoragePoolTypesConnectionIdempotencyPolicy>
MakeDefaultStoragePoolTypesConnectionIdempotencyPolicy();

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_storage_pool_types_v1
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_STORAGE_POOL_TYPES_V1_STORAGE_POOL_TYPES_CONNECTION_IDEMPOTENCY_POLICY_H
