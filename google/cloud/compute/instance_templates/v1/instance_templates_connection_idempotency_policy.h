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
// source: google/cloud/compute/instance_templates/v1/instance_templates.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_INSTANCE_TEMPLATES_V1_INSTANCE_TEMPLATES_CONNECTION_IDEMPOTENCY_POLICY_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_INSTANCE_TEMPLATES_V1_INSTANCE_TEMPLATES_CONNECTION_IDEMPOTENCY_POLICY_H

#include "google/cloud/idempotency.h"
#include "google/cloud/version.h"
#include "google/cloud/compute/instance_templates/v1/instance_templates.pb.h"
#include <memory>

namespace google {
namespace cloud {
namespace compute_instance_templates_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class InstanceTemplatesConnectionIdempotencyPolicy {
 public:
  virtual ~InstanceTemplatesConnectionIdempotencyPolicy();

  /// Create a new copy of this object.
  virtual std::unique_ptr<InstanceTemplatesConnectionIdempotencyPolicy> clone()
      const;

  virtual google::cloud::Idempotency AggregatedListInstanceTemplates(
      google::cloud::cpp::compute::instance_templates::v1::
          AggregatedListInstanceTemplatesRequest request);

  virtual google::cloud::Idempotency DeleteInstanceTemplate(
      google::cloud::cpp::compute::instance_templates::v1::
          DeleteInstanceTemplateRequest const& request);

  virtual google::cloud::Idempotency GetInstanceTemplate(
      google::cloud::cpp::compute::instance_templates::v1::
          GetInstanceTemplateRequest const& request);

  virtual google::cloud::Idempotency GetIamPolicy(
      google::cloud::cpp::compute::instance_templates::v1::
          GetIamPolicyRequest const& request);

  virtual google::cloud::Idempotency InsertInstanceTemplate(
      google::cloud::cpp::compute::instance_templates::v1::
          InsertInstanceTemplateRequest const& request);

  virtual google::cloud::Idempotency ListInstanceTemplates(
      google::cloud::cpp::compute::instance_templates::v1::
          ListInstanceTemplatesRequest request);

  virtual google::cloud::Idempotency SetIamPolicy(
      google::cloud::cpp::compute::instance_templates::v1::
          SetIamPolicyRequest const& request);

  virtual google::cloud::Idempotency TestIamPermissions(
      google::cloud::cpp::compute::instance_templates::v1::
          TestIamPermissionsRequest const& request);
};

std::unique_ptr<InstanceTemplatesConnectionIdempotencyPolicy>
MakeDefaultInstanceTemplatesConnectionIdempotencyPolicy();

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_instance_templates_v1
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_INSTANCE_TEMPLATES_V1_INSTANCE_TEMPLATES_CONNECTION_IDEMPOTENCY_POLICY_H
