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
// source: google/api/servicecontrol/v2/service_controller.proto

#include "google/cloud/servicecontrol/v2/internal/service_controller_auth_decorator.h"
#include "google/api/servicecontrol/v2/service_controller.grpc.pb.h"
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace servicecontrol_v2_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

ServiceControllerAuth::ServiceControllerAuth(
    std::shared_ptr<google::cloud::internal::GrpcAuthenticationStrategy> auth,
    std::shared_ptr<ServiceControllerStub> child)
    : auth_(std::move(auth)), child_(std::move(child)) {}

StatusOr<google::api::servicecontrol::v2::CheckResponse>
ServiceControllerAuth::Check(
    grpc::ClientContext& context, Options const& options,
    google::api::servicecontrol::v2::CheckRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->Check(context, options, request);
}

StatusOr<google::api::servicecontrol::v2::ReportResponse>
ServiceControllerAuth::Report(
    grpc::ClientContext& context, Options const& options,
    google::api::servicecontrol::v2::ReportRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->Report(context, options, request);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace servicecontrol_v2_internal
}  // namespace cloud
}  // namespace google
