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
// source: google/appengine/v1/appengine.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_APPENGINE_V1_APPLICATIONS_CONNECTION_IDEMPOTENCY_POLICY_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_APPENGINE_V1_APPLICATIONS_CONNECTION_IDEMPOTENCY_POLICY_H

#include "google/cloud/idempotency.h"
#include "google/cloud/version.h"
#include "google/appengine/v1/appengine.grpc.pb.h"
#include <memory>

namespace google {
namespace cloud {
namespace appengine_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class ApplicationsConnectionIdempotencyPolicy {
 public:
  virtual ~ApplicationsConnectionIdempotencyPolicy();

  /// Create a new copy of this object.
  virtual std::unique_ptr<ApplicationsConnectionIdempotencyPolicy> clone()
      const;

  virtual google::cloud::Idempotency GetApplication(
      google::appengine::v1::GetApplicationRequest const& request);

  virtual google::cloud::Idempotency CreateApplication(
      google::appengine::v1::CreateApplicationRequest const& request);

  virtual google::cloud::Idempotency UpdateApplication(
      google::appengine::v1::UpdateApplicationRequest const& request);

  virtual google::cloud::Idempotency RepairApplication(
      google::appengine::v1::RepairApplicationRequest const& request);
};

std::unique_ptr<ApplicationsConnectionIdempotencyPolicy>
MakeDefaultApplicationsConnectionIdempotencyPolicy();

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace appengine_v1
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_APPENGINE_V1_APPLICATIONS_CONNECTION_IDEMPOTENCY_POLICY_H
