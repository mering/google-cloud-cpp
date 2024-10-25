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
// source: google/cloud/shell/v1/cloudshell.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_SHELL_V1_CLOUD_SHELL_CONNECTION_IDEMPOTENCY_POLICY_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_SHELL_V1_CLOUD_SHELL_CONNECTION_IDEMPOTENCY_POLICY_H

#include "google/cloud/shell/v1/cloudshell.grpc.pb.h"
#include "google/cloud/idempotency.h"
#include "google/cloud/version.h"
#include <memory>

namespace google {
namespace cloud {
namespace shell_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class CloudShellServiceConnectionIdempotencyPolicy {
 public:
  virtual ~CloudShellServiceConnectionIdempotencyPolicy();

  /// Create a new copy of this object.
  virtual std::unique_ptr<CloudShellServiceConnectionIdempotencyPolicy> clone()
      const;

  virtual google::cloud::Idempotency GetEnvironment(
      google::cloud::shell::v1::GetEnvironmentRequest const& request);

  virtual google::cloud::Idempotency StartEnvironment(
      google::cloud::shell::v1::StartEnvironmentRequest const& request);

  virtual google::cloud::Idempotency AuthorizeEnvironment(
      google::cloud::shell::v1::AuthorizeEnvironmentRequest const& request);

  virtual google::cloud::Idempotency AddPublicKey(
      google::cloud::shell::v1::AddPublicKeyRequest const& request);

  virtual google::cloud::Idempotency RemovePublicKey(
      google::cloud::shell::v1::RemovePublicKeyRequest const& request);
};

std::unique_ptr<CloudShellServiceConnectionIdempotencyPolicy>
MakeDefaultCloudShellServiceConnectionIdempotencyPolicy();

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace shell_v1
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_SHELL_V1_CLOUD_SHELL_CONNECTION_IDEMPOTENCY_POLICY_H
