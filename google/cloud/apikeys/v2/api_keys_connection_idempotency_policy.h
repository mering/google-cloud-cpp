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
// source: google/api/apikeys/v2/apikeys.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_APIKEYS_V2_API_KEYS_CONNECTION_IDEMPOTENCY_POLICY_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_APIKEYS_V2_API_KEYS_CONNECTION_IDEMPOTENCY_POLICY_H

#include "google/cloud/idempotency.h"
#include "google/cloud/version.h"
#include "google/api/apikeys/v2/apikeys.grpc.pb.h"
#include "google/longrunning/operations.grpc.pb.h"
#include <memory>

namespace google {
namespace cloud {
namespace apikeys_v2 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class ApiKeysConnectionIdempotencyPolicy {
 public:
  virtual ~ApiKeysConnectionIdempotencyPolicy();

  /// Create a new copy of this object.
  virtual std::unique_ptr<ApiKeysConnectionIdempotencyPolicy> clone() const;

  virtual google::cloud::Idempotency CreateKey(
      google::api::apikeys::v2::CreateKeyRequest const& request);

  virtual google::cloud::Idempotency ListKeys(
      google::api::apikeys::v2::ListKeysRequest request);

  virtual google::cloud::Idempotency GetKey(
      google::api::apikeys::v2::GetKeyRequest const& request);

  virtual google::cloud::Idempotency GetKeyString(
      google::api::apikeys::v2::GetKeyStringRequest const& request);

  virtual google::cloud::Idempotency UpdateKey(
      google::api::apikeys::v2::UpdateKeyRequest const& request);

  virtual google::cloud::Idempotency DeleteKey(
      google::api::apikeys::v2::DeleteKeyRequest const& request);

  virtual google::cloud::Idempotency UndeleteKey(
      google::api::apikeys::v2::UndeleteKeyRequest const& request);

  virtual google::cloud::Idempotency LookupKey(
      google::api::apikeys::v2::LookupKeyRequest const& request);

  virtual google::cloud::Idempotency GetOperation(
      google::longrunning::GetOperationRequest const& request);
};

std::unique_ptr<ApiKeysConnectionIdempotencyPolicy>
MakeDefaultApiKeysConnectionIdempotencyPolicy();

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace apikeys_v2
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_APIKEYS_V2_API_KEYS_CONNECTION_IDEMPOTENCY_POLICY_H
