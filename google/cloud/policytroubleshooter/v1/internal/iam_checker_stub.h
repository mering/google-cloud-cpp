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
// source: google/cloud/policytroubleshooter/v1/checker.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_POLICYTROUBLESHOOTER_V1_INTERNAL_IAM_CHECKER_STUB_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_POLICYTROUBLESHOOTER_V1_INTERNAL_IAM_CHECKER_STUB_H

#include "google/cloud/policytroubleshooter/v1/checker.grpc.pb.h"
#include "google/cloud/options.h"
#include "google/cloud/status_or.h"
#include "google/cloud/version.h"
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace policytroubleshooter_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class IamCheckerStub {
 public:
  virtual ~IamCheckerStub() = 0;

  virtual StatusOr<
      google::cloud::policytroubleshooter::v1::TroubleshootIamPolicyResponse>
  TroubleshootIamPolicy(grpc::ClientContext& context, Options const& options,
                        google::cloud::policytroubleshooter::v1::
                            TroubleshootIamPolicyRequest const& request) = 0;
};

class DefaultIamCheckerStub : public IamCheckerStub {
 public:
  explicit DefaultIamCheckerStub(
      std::unique_ptr<
          google::cloud::policytroubleshooter::v1::IamChecker::StubInterface>
          grpc_stub)
      : grpc_stub_(std::move(grpc_stub)) {}

  StatusOr<
      google::cloud::policytroubleshooter::v1::TroubleshootIamPolicyResponse>
  TroubleshootIamPolicy(
      grpc::ClientContext& context, Options const& options,
      google::cloud::policytroubleshooter::v1::
          TroubleshootIamPolicyRequest const& request) override;

 private:
  std::unique_ptr<
      google::cloud::policytroubleshooter::v1::IamChecker::StubInterface>
      grpc_stub_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace policytroubleshooter_v1_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_POLICYTROUBLESHOOTER_V1_INTERNAL_IAM_CHECKER_STUB_H
