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
// source: google/cloud/notebooks/v1/service.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_NOTEBOOKS_V1_NOTEBOOK_CONNECTION_IDEMPOTENCY_POLICY_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_NOTEBOOKS_V1_NOTEBOOK_CONNECTION_IDEMPOTENCY_POLICY_H

#include "google/cloud/location/locations.grpc.pb.h"
#include "google/cloud/notebooks/v1/service.grpc.pb.h"
#include "google/cloud/idempotency.h"
#include "google/cloud/version.h"
#include "google/iam/v1/iam_policy.grpc.pb.h"
#include "google/longrunning/operations.grpc.pb.h"
#include <memory>

namespace google {
namespace cloud {
namespace notebooks_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class NotebookServiceConnectionIdempotencyPolicy {
 public:
  virtual ~NotebookServiceConnectionIdempotencyPolicy();

  /// Create a new copy of this object.
  virtual std::unique_ptr<NotebookServiceConnectionIdempotencyPolicy> clone()
      const;

  virtual google::cloud::Idempotency ListInstances(
      google::cloud::notebooks::v1::ListInstancesRequest request);

  virtual google::cloud::Idempotency GetInstance(
      google::cloud::notebooks::v1::GetInstanceRequest const& request);

  virtual google::cloud::Idempotency CreateInstance(
      google::cloud::notebooks::v1::CreateInstanceRequest const& request);

  virtual google::cloud::Idempotency RegisterInstance(
      google::cloud::notebooks::v1::RegisterInstanceRequest const& request);

  virtual google::cloud::Idempotency SetInstanceAccelerator(
      google::cloud::notebooks::v1::SetInstanceAcceleratorRequest const&
          request);

  virtual google::cloud::Idempotency SetInstanceMachineType(
      google::cloud::notebooks::v1::SetInstanceMachineTypeRequest const&
          request);

  virtual google::cloud::Idempotency UpdateInstanceConfig(
      google::cloud::notebooks::v1::UpdateInstanceConfigRequest const& request);

  virtual google::cloud::Idempotency UpdateShieldedInstanceConfig(
      google::cloud::notebooks::v1::UpdateShieldedInstanceConfigRequest const&
          request);

  virtual google::cloud::Idempotency SetInstanceLabels(
      google::cloud::notebooks::v1::SetInstanceLabelsRequest const& request);

  virtual google::cloud::Idempotency UpdateInstanceMetadataItems(
      google::cloud::notebooks::v1::UpdateInstanceMetadataItemsRequest const&
          request);

  virtual google::cloud::Idempotency DeleteInstance(
      google::cloud::notebooks::v1::DeleteInstanceRequest const& request);

  virtual google::cloud::Idempotency StartInstance(
      google::cloud::notebooks::v1::StartInstanceRequest const& request);

  virtual google::cloud::Idempotency StopInstance(
      google::cloud::notebooks::v1::StopInstanceRequest const& request);

  virtual google::cloud::Idempotency ResetInstance(
      google::cloud::notebooks::v1::ResetInstanceRequest const& request);

  virtual google::cloud::Idempotency ReportInstanceInfo(
      google::cloud::notebooks::v1::ReportInstanceInfoRequest const& request);

  virtual google::cloud::Idempotency IsInstanceUpgradeable(
      google::cloud::notebooks::v1::IsInstanceUpgradeableRequest const&
          request);

  virtual google::cloud::Idempotency GetInstanceHealth(
      google::cloud::notebooks::v1::GetInstanceHealthRequest const& request);

  virtual google::cloud::Idempotency UpgradeInstance(
      google::cloud::notebooks::v1::UpgradeInstanceRequest const& request);

  virtual google::cloud::Idempotency RollbackInstance(
      google::cloud::notebooks::v1::RollbackInstanceRequest const& request);

  virtual google::cloud::Idempotency DiagnoseInstance(
      google::cloud::notebooks::v1::DiagnoseInstanceRequest const& request);

  virtual google::cloud::Idempotency UpgradeInstanceInternal(
      google::cloud::notebooks::v1::UpgradeInstanceInternalRequest const&
          request);

  virtual google::cloud::Idempotency ListEnvironments(
      google::cloud::notebooks::v1::ListEnvironmentsRequest request);

  virtual google::cloud::Idempotency GetEnvironment(
      google::cloud::notebooks::v1::GetEnvironmentRequest const& request);

  virtual google::cloud::Idempotency CreateEnvironment(
      google::cloud::notebooks::v1::CreateEnvironmentRequest const& request);

  virtual google::cloud::Idempotency DeleteEnvironment(
      google::cloud::notebooks::v1::DeleteEnvironmentRequest const& request);

  virtual google::cloud::Idempotency ListSchedules(
      google::cloud::notebooks::v1::ListSchedulesRequest request);

  virtual google::cloud::Idempotency GetSchedule(
      google::cloud::notebooks::v1::GetScheduleRequest const& request);

  virtual google::cloud::Idempotency DeleteSchedule(
      google::cloud::notebooks::v1::DeleteScheduleRequest const& request);

  virtual google::cloud::Idempotency CreateSchedule(
      google::cloud::notebooks::v1::CreateScheduleRequest const& request);

  virtual google::cloud::Idempotency TriggerSchedule(
      google::cloud::notebooks::v1::TriggerScheduleRequest const& request);

  virtual google::cloud::Idempotency ListExecutions(
      google::cloud::notebooks::v1::ListExecutionsRequest request);

  virtual google::cloud::Idempotency GetExecution(
      google::cloud::notebooks::v1::GetExecutionRequest const& request);

  virtual google::cloud::Idempotency DeleteExecution(
      google::cloud::notebooks::v1::DeleteExecutionRequest const& request);

  virtual google::cloud::Idempotency CreateExecution(
      google::cloud::notebooks::v1::CreateExecutionRequest const& request);

  virtual google::cloud::Idempotency ListLocations(
      google::cloud::location::ListLocationsRequest request);

  virtual google::cloud::Idempotency GetLocation(
      google::cloud::location::GetLocationRequest const& request);

  virtual google::cloud::Idempotency SetIamPolicy(
      google::iam::v1::SetIamPolicyRequest const& request);

  virtual google::cloud::Idempotency GetIamPolicy(
      google::iam::v1::GetIamPolicyRequest const& request);

  virtual google::cloud::Idempotency TestIamPermissions(
      google::iam::v1::TestIamPermissionsRequest const& request);

  virtual google::cloud::Idempotency ListOperations(
      google::longrunning::ListOperationsRequest request);

  virtual google::cloud::Idempotency GetOperation(
      google::longrunning::GetOperationRequest const& request);

  virtual google::cloud::Idempotency DeleteOperation(
      google::longrunning::DeleteOperationRequest const& request);

  virtual google::cloud::Idempotency CancelOperation(
      google::longrunning::CancelOperationRequest const& request);
};

std::unique_ptr<NotebookServiceConnectionIdempotencyPolicy>
MakeDefaultNotebookServiceConnectionIdempotencyPolicy();

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace notebooks_v1
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_NOTEBOOKS_V1_NOTEBOOK_CONNECTION_IDEMPOTENCY_POLICY_H
