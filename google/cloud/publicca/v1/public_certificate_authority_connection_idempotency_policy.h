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
// source: google/cloud/security/publicca/v1/service.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_PUBLICCA_V1_PUBLIC_CERTIFICATE_AUTHORITY_CONNECTION_IDEMPOTENCY_POLICY_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_PUBLICCA_V1_PUBLIC_CERTIFICATE_AUTHORITY_CONNECTION_IDEMPOTENCY_POLICY_H

#include "google/cloud/idempotency.h"
#include "google/cloud/version.h"
#include "google/cloud/security/publicca/v1/service.grpc.pb.h"
#include <memory>

namespace google {
namespace cloud {
namespace publicca_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class PublicCertificateAuthorityServiceConnectionIdempotencyPolicy {
 public:
  virtual ~PublicCertificateAuthorityServiceConnectionIdempotencyPolicy();

  /// Create a new copy of this object.
  virtual std::unique_ptr<
      PublicCertificateAuthorityServiceConnectionIdempotencyPolicy>
  clone() const;

  virtual google::cloud::Idempotency CreateExternalAccountKey(
      google::cloud::security::publicca::v1::
          CreateExternalAccountKeyRequest const& request);
};

std::unique_ptr<PublicCertificateAuthorityServiceConnectionIdempotencyPolicy>
MakeDefaultPublicCertificateAuthorityServiceConnectionIdempotencyPolicy();

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace publicca_v1
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_PUBLICCA_V1_PUBLIC_CERTIFICATE_AUTHORITY_CONNECTION_IDEMPOTENCY_POLICY_H
