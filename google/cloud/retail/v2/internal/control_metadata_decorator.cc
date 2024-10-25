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

#include "google/cloud/retail/v2/internal/control_metadata_decorator.h"
#include "google/cloud/retail/v2/control_service.grpc.pb.h"
#include "google/cloud/grpc_options.h"
#include "google/cloud/internal/absl_str_cat_quiet.h"
#include "google/cloud/internal/api_client_header.h"
#include "google/cloud/internal/url_encode.h"
#include "google/cloud/status_or.h"
#include <memory>
#include <string>
#include <utility>
#include <vector>

namespace google {
namespace cloud {
namespace retail_v2_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

ControlServiceMetadata::ControlServiceMetadata(
    std::shared_ptr<ControlServiceStub> child,
    std::multimap<std::string, std::string> fixed_metadata,
    std::string api_client_header)
    : child_(std::move(child)),
      fixed_metadata_(std::move(fixed_metadata)),
      api_client_header_(
          api_client_header.empty()
              ? google::cloud::internal::GeneratedLibClientHeader()
              : std::move(api_client_header)) {}

StatusOr<google::cloud::retail::v2::Control>
ControlServiceMetadata::CreateControl(
    grpc::ClientContext& context, Options const& options,
    google::cloud::retail::v2::CreateControlRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->CreateControl(context, options, request);
}

Status ControlServiceMetadata::DeleteControl(
    grpc::ClientContext& context, Options const& options,
    google::cloud::retail::v2::DeleteControlRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->DeleteControl(context, options, request);
}

StatusOr<google::cloud::retail::v2::Control>
ControlServiceMetadata::UpdateControl(
    grpc::ClientContext& context, Options const& options,
    google::cloud::retail::v2::UpdateControlRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("control.name=",
                           internal::UrlEncode(request.control().name())));
  return child_->UpdateControl(context, options, request);
}

StatusOr<google::cloud::retail::v2::Control> ControlServiceMetadata::GetControl(
    grpc::ClientContext& context, Options const& options,
    google::cloud::retail::v2::GetControlRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->GetControl(context, options, request);
}

StatusOr<google::cloud::retail::v2::ListControlsResponse>
ControlServiceMetadata::ListControls(
    grpc::ClientContext& context, Options const& options,
    google::cloud::retail::v2::ListControlsRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->ListControls(context, options, request);
}

StatusOr<google::longrunning::ListOperationsResponse>
ControlServiceMetadata::ListOperations(
    grpc::ClientContext& context, Options const& options,
    google::longrunning::ListOperationsRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->ListOperations(context, options, request);
}

StatusOr<google::longrunning::Operation> ControlServiceMetadata::GetOperation(
    grpc::ClientContext& context, Options const& options,
    google::longrunning::GetOperationRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->GetOperation(context, options, request);
}

void ControlServiceMetadata::SetMetadata(grpc::ClientContext& context,
                                         Options const& options,
                                         std::string const& request_params) {
  context.AddMetadata("x-goog-request-params", request_params);
  SetMetadata(context, options);
}

void ControlServiceMetadata::SetMetadata(grpc::ClientContext& context,
                                         Options const& options) {
  google::cloud::internal::SetMetadata(context, options, fixed_metadata_,
                                       api_client_header_);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace retail_v2_internal
}  // namespace cloud
}  // namespace google
