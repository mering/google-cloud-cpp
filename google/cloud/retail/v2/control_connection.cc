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
// source: google/cloud/retail/v2/control_service.proto

#include "google/cloud/retail/v2/control_connection.h"
#include "google/cloud/retail/v2/control_options.h"
#include "google/cloud/retail/v2/internal/control_connection_impl.h"
#include "google/cloud/retail/v2/internal/control_option_defaults.h"
#include "google/cloud/retail/v2/internal/control_stub_factory.h"
#include "google/cloud/retail/v2/internal/control_tracing_connection.h"
#include "google/cloud/background_threads.h"
#include "google/cloud/common_options.h"
#include "google/cloud/credentials.h"
#include "google/cloud/grpc_options.h"
#include "google/cloud/internal/pagination_range.h"
#include "google/cloud/internal/unified_grpc_credentials.h"
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace retail_v2 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

ControlServiceConnection::~ControlServiceConnection() = default;

StatusOr<google::cloud::retail::v2::Control>
ControlServiceConnection::CreateControl(
    google::cloud::retail::v2::CreateControlRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

Status ControlServiceConnection::DeleteControl(
    google::cloud::retail::v2::DeleteControlRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::cloud::retail::v2::Control>
ControlServiceConnection::UpdateControl(
    google::cloud::retail::v2::UpdateControlRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::cloud::retail::v2::Control>
ControlServiceConnection::GetControl(
    google::cloud::retail::v2::GetControlRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StreamRange<google::cloud::retail::v2::Control>
ControlServiceConnection::ListControls(
    google::cloud::retail::v2::
        ListControlsRequest) {  // NOLINT(performance-unnecessary-value-param)
  return google::cloud::internal::MakeUnimplementedPaginationRange<
      StreamRange<google::cloud::retail::v2::Control>>();
}

StreamRange<google::longrunning::Operation>
ControlServiceConnection::ListOperations(
    google::longrunning::
        ListOperationsRequest) {  // NOLINT(performance-unnecessary-value-param)
  return google::cloud::internal::MakeUnimplementedPaginationRange<
      StreamRange<google::longrunning::Operation>>();
}

StatusOr<google::longrunning::Operation> ControlServiceConnection::GetOperation(
    google::longrunning::GetOperationRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

std::shared_ptr<ControlServiceConnection> MakeControlServiceConnection(
    Options options) {
  internal::CheckExpectedOptions<CommonOptionList, GrpcOptionList,
                                 UnifiedCredentialsOptionList,
                                 ControlServicePolicyOptionList>(options,
                                                                 __func__);
  options =
      retail_v2_internal::ControlServiceDefaultOptions(std::move(options));
  auto background = internal::MakeBackgroundThreadsFactory(options)();
  auto auth = internal::CreateAuthenticationStrategy(background->cq(), options);
  auto stub = retail_v2_internal::CreateDefaultControlServiceStub(
      std::move(auth), options);
  return retail_v2_internal::MakeControlServiceTracingConnection(
      std::make_shared<retail_v2_internal::ControlServiceConnectionImpl>(
          std::move(background), std::move(stub), std::move(options)));
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace retail_v2
}  // namespace cloud
}  // namespace google
