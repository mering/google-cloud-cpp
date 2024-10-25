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
// source: google/cloud/dialogflow/cx/v3/flow.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DIALOGFLOW_CX_FLOWS_CONNECTION_IDEMPOTENCY_POLICY_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DIALOGFLOW_CX_FLOWS_CONNECTION_IDEMPOTENCY_POLICY_H

#include "google/cloud/dialogflow/cx/v3/flow.grpc.pb.h"
#include "google/cloud/location/locations.grpc.pb.h"
#include "google/cloud/idempotency.h"
#include "google/cloud/version.h"
#include "google/longrunning/operations.grpc.pb.h"
#include <memory>

namespace google {
namespace cloud {
namespace dialogflow_cx {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class FlowsConnectionIdempotencyPolicy {
 public:
  virtual ~FlowsConnectionIdempotencyPolicy();

  /// Create a new copy of this object.
  virtual std::unique_ptr<FlowsConnectionIdempotencyPolicy> clone() const;

  virtual google::cloud::Idempotency CreateFlow(
      google::cloud::dialogflow::cx::v3::CreateFlowRequest const& request);

  virtual google::cloud::Idempotency DeleteFlow(
      google::cloud::dialogflow::cx::v3::DeleteFlowRequest const& request);

  virtual google::cloud::Idempotency ListFlows(
      google::cloud::dialogflow::cx::v3::ListFlowsRequest request);

  virtual google::cloud::Idempotency GetFlow(
      google::cloud::dialogflow::cx::v3::GetFlowRequest const& request);

  virtual google::cloud::Idempotency UpdateFlow(
      google::cloud::dialogflow::cx::v3::UpdateFlowRequest const& request);

  virtual google::cloud::Idempotency TrainFlow(
      google::cloud::dialogflow::cx::v3::TrainFlowRequest const& request);

  virtual google::cloud::Idempotency ValidateFlow(
      google::cloud::dialogflow::cx::v3::ValidateFlowRequest const& request);

  virtual google::cloud::Idempotency GetFlowValidationResult(
      google::cloud::dialogflow::cx::v3::GetFlowValidationResultRequest const&
          request);

  virtual google::cloud::Idempotency ImportFlow(
      google::cloud::dialogflow::cx::v3::ImportFlowRequest const& request);

  virtual google::cloud::Idempotency ExportFlow(
      google::cloud::dialogflow::cx::v3::ExportFlowRequest const& request);

  virtual google::cloud::Idempotency ListLocations(
      google::cloud::location::ListLocationsRequest request);

  virtual google::cloud::Idempotency GetLocation(
      google::cloud::location::GetLocationRequest const& request);

  virtual google::cloud::Idempotency ListOperations(
      google::longrunning::ListOperationsRequest request);

  virtual google::cloud::Idempotency GetOperation(
      google::longrunning::GetOperationRequest const& request);

  virtual google::cloud::Idempotency CancelOperation(
      google::longrunning::CancelOperationRequest const& request);
};

std::unique_ptr<FlowsConnectionIdempotencyPolicy>
MakeDefaultFlowsConnectionIdempotencyPolicy();

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace dialogflow_cx
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DIALOGFLOW_CX_FLOWS_CONNECTION_IDEMPOTENCY_POLICY_H
