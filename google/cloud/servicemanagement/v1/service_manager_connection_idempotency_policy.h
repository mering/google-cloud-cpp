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
// source: google/api/servicemanagement/v1/servicemanager.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_SERVICEMANAGEMENT_V1_SERVICE_MANAGER_CONNECTION_IDEMPOTENCY_POLICY_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_SERVICEMANAGEMENT_V1_SERVICE_MANAGER_CONNECTION_IDEMPOTENCY_POLICY_H

#include "google/cloud/idempotency.h"
#include "google/cloud/version.h"
#include "google/api/servicemanagement/v1/servicemanager.grpc.pb.h"
#include "google/iam/v1/iam_policy.grpc.pb.h"
#include "google/longrunning/operations.grpc.pb.h"
#include <memory>

namespace google {
namespace cloud {
namespace servicemanagement_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class ServiceManagerConnectionIdempotencyPolicy {
 public:
  virtual ~ServiceManagerConnectionIdempotencyPolicy();

  /// Create a new copy of this object.
  virtual std::unique_ptr<ServiceManagerConnectionIdempotencyPolicy> clone()
      const;

  virtual google::cloud::Idempotency ListServices(
      google::api::servicemanagement::v1::ListServicesRequest request);

  virtual google::cloud::Idempotency GetService(
      google::api::servicemanagement::v1::GetServiceRequest const& request);

  virtual google::cloud::Idempotency CreateService(
      google::api::servicemanagement::v1::CreateServiceRequest const& request);

  virtual google::cloud::Idempotency DeleteService(
      google::api::servicemanagement::v1::DeleteServiceRequest const& request);

  virtual google::cloud::Idempotency UndeleteService(
      google::api::servicemanagement::v1::UndeleteServiceRequest const&
          request);

  virtual google::cloud::Idempotency ListServiceConfigs(
      google::api::servicemanagement::v1::ListServiceConfigsRequest request);

  virtual google::cloud::Idempotency GetServiceConfig(
      google::api::servicemanagement::v1::GetServiceConfigRequest const&
          request);

  virtual google::cloud::Idempotency CreateServiceConfig(
      google::api::servicemanagement::v1::CreateServiceConfigRequest const&
          request);

  virtual google::cloud::Idempotency SubmitConfigSource(
      google::api::servicemanagement::v1::SubmitConfigSourceRequest const&
          request);

  virtual google::cloud::Idempotency ListServiceRollouts(
      google::api::servicemanagement::v1::ListServiceRolloutsRequest request);

  virtual google::cloud::Idempotency GetServiceRollout(
      google::api::servicemanagement::v1::GetServiceRolloutRequest const&
          request);

  virtual google::cloud::Idempotency CreateServiceRollout(
      google::api::servicemanagement::v1::CreateServiceRolloutRequest const&
          request);

  virtual google::cloud::Idempotency GenerateConfigReport(
      google::api::servicemanagement::v1::GenerateConfigReportRequest const&
          request);

  virtual google::cloud::Idempotency SetIamPolicy(
      google::iam::v1::SetIamPolicyRequest const& request);

  virtual google::cloud::Idempotency GetIamPolicy(
      google::iam::v1::GetIamPolicyRequest const& request);

  virtual google::cloud::Idempotency TestIamPermissions(
      google::iam::v1::TestIamPermissionsRequest const& request);

  virtual google::cloud::Idempotency ListOperations(
      google::longrunning::ListOperationsRequest request);
};

std::unique_ptr<ServiceManagerConnectionIdempotencyPolicy>
MakeDefaultServiceManagerConnectionIdempotencyPolicy();

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace servicemanagement_v1
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_SERVICEMANAGEMENT_V1_SERVICE_MANAGER_CONNECTION_IDEMPOTENCY_POLICY_H
