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
// source: google/cloud/bigquery/v2/routine.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_BIGQUERYCONTROL_V2_ROUTINE_CONNECTION_IDEMPOTENCY_POLICY_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_BIGQUERYCONTROL_V2_ROUTINE_CONNECTION_IDEMPOTENCY_POLICY_H

#include "google/cloud/idempotency.h"
#include "google/cloud/version.h"
#include "google/cloud/bigquery/v2/routine.pb.h"
#include <memory>

namespace google {
namespace cloud {
namespace bigquerycontrol_v2 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class RoutineServiceConnectionIdempotencyPolicy {
 public:
  virtual ~RoutineServiceConnectionIdempotencyPolicy();

  /// Create a new copy of this object.
  virtual std::unique_ptr<RoutineServiceConnectionIdempotencyPolicy> clone()
      const;

  virtual google::cloud::Idempotency GetRoutine(
      google::cloud::bigquery::v2::GetRoutineRequest const& request);

  virtual google::cloud::Idempotency InsertRoutine(
      google::cloud::bigquery::v2::InsertRoutineRequest const& request);

  virtual google::cloud::Idempotency UpdateRoutine(
      google::cloud::bigquery::v2::UpdateRoutineRequest const& request);

  virtual google::cloud::Idempotency PatchRoutine(
      google::cloud::bigquery::v2::PatchRoutineRequest const& request);

  virtual google::cloud::Idempotency DeleteRoutine(
      google::cloud::bigquery::v2::DeleteRoutineRequest const& request);

  virtual google::cloud::Idempotency ListRoutines(
      google::cloud::bigquery::v2::ListRoutinesRequest const& request);
};

std::unique_ptr<RoutineServiceConnectionIdempotencyPolicy>
MakeDefaultRoutineServiceConnectionIdempotencyPolicy();

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace bigquerycontrol_v2
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_BIGQUERYCONTROL_V2_ROUTINE_CONNECTION_IDEMPOTENCY_POLICY_H
