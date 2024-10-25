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
// source: google/cloud/compute/machine_types/v1/machine_types.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_MACHINE_TYPES_V1_INTERNAL_MACHINE_TYPES_REST_LOGGING_DECORATOR_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_MACHINE_TYPES_V1_INTERNAL_MACHINE_TYPES_REST_LOGGING_DECORATOR_H

#include "google/cloud/compute/machine_types/v1/internal/machine_types_rest_stub.h"
#include "google/cloud/future.h"
#include "google/cloud/internal/rest_context.h"
#include "google/cloud/tracing_options.h"
#include "google/cloud/version.h"
#include "google/cloud/compute/machine_types/v1/machine_types.pb.h"
#include <memory>
#include <set>
#include <string>

namespace google {
namespace cloud {
namespace compute_machine_types_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class MachineTypesRestLogging : public MachineTypesRestStub {
 public:
  ~MachineTypesRestLogging() override = default;
  MachineTypesRestLogging(std::shared_ptr<MachineTypesRestStub> child,
                          TracingOptions tracing_options,
                          std::set<std::string> components);

  StatusOr<google::cloud::cpp::compute::v1::MachineTypeAggregatedList>
  AggregatedListMachineTypes(
      google::cloud::rest_internal::RestContext& rest_context,
      Options const& options,
      google::cloud::cpp::compute::machine_types::v1::
          AggregatedListMachineTypesRequest const& request) override;

  StatusOr<google::cloud::cpp::compute::v1::MachineType> GetMachineType(
      google::cloud::rest_internal::RestContext& rest_context,
      Options const& options,
      google::cloud::cpp::compute::machine_types::v1::
          GetMachineTypeRequest const& request) override;

  StatusOr<google::cloud::cpp::compute::v1::MachineTypeList> ListMachineTypes(
      google::cloud::rest_internal::RestContext& rest_context,
      Options const& options,
      google::cloud::cpp::compute::machine_types::v1::
          ListMachineTypesRequest const& request) override;

 private:
  std::shared_ptr<MachineTypesRestStub> child_;
  TracingOptions tracing_options_;
  std::set<std::string> components_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_machine_types_v1_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_MACHINE_TYPES_V1_INTERNAL_MACHINE_TYPES_REST_LOGGING_DECORATOR_H
