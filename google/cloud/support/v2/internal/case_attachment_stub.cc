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
// source: google/cloud/support/v2/attachment_service.proto

#include "google/cloud/support/v2/internal/case_attachment_stub.h"
#include "google/cloud/support/v2/attachment_service.grpc.pb.h"
#include "google/cloud/grpc_error_delegate.h"
#include "google/cloud/status_or.h"
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace support_v2_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

CaseAttachmentServiceStub::~CaseAttachmentServiceStub() = default;

StatusOr<google::cloud::support::v2::ListAttachmentsResponse>
DefaultCaseAttachmentServiceStub::ListAttachments(
    grpc::ClientContext& context, Options const&,
    google::cloud::support::v2::ListAttachmentsRequest const& request) {
  google::cloud::support::v2::ListAttachmentsResponse response;
  auto status = grpc_stub_->ListAttachments(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace support_v2_internal
}  // namespace cloud
}  // namespace google
