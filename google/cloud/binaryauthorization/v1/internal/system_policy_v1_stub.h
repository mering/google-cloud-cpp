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
// source: google/cloud/binaryauthorization/v1/service.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_BINARYAUTHORIZATION_V1_INTERNAL_SYSTEM_POLICY_V1_STUB_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_BINARYAUTHORIZATION_V1_INTERNAL_SYSTEM_POLICY_V1_STUB_H

#include "google/cloud/options.h"
#include "google/cloud/status_or.h"
#include "google/cloud/version.h"
#include "google/cloud/binaryauthorization/v1/service.grpc.pb.h"
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace binaryauthorization_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class SystemPolicyV1Stub {
 public:
  virtual ~SystemPolicyV1Stub() = 0;

  virtual StatusOr<google::cloud::binaryauthorization::v1::Policy>
  GetSystemPolicy(
      grpc::ClientContext& context, Options const& options,
      google::cloud::binaryauthorization::v1::GetSystemPolicyRequest const&
          request) = 0;
};

class DefaultSystemPolicyV1Stub : public SystemPolicyV1Stub {
 public:
  explicit DefaultSystemPolicyV1Stub(
      std::unique_ptr<
          google::cloud::binaryauthorization::v1::SystemPolicyV1::StubInterface>
          grpc_stub)
      : grpc_stub_(std::move(grpc_stub)) {}

  StatusOr<google::cloud::binaryauthorization::v1::Policy> GetSystemPolicy(
      grpc::ClientContext& context, Options const& options,
      google::cloud::binaryauthorization::v1::GetSystemPolicyRequest const&
          request) override;

 private:
  std::unique_ptr<
      google::cloud::binaryauthorization::v1::SystemPolicyV1::StubInterface>
      grpc_stub_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace binaryauthorization_v1_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_BINARYAUTHORIZATION_V1_INTERNAL_SYSTEM_POLICY_V1_STUB_H
