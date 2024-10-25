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
// source: google/cloud/eventarc/publishing/v1/publisher.proto

#include "google/cloud/eventarc/publishing/v1/internal/publisher_stub.h"
#include "google/cloud/eventarc/publishing/v1/publisher.grpc.pb.h"
#include "google/cloud/grpc_error_delegate.h"
#include "google/cloud/status_or.h"
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace eventarc_publishing_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

PublisherStub::~PublisherStub() = default;

StatusOr<google::cloud::eventarc::publishing::v1::
             PublishChannelConnectionEventsResponse>
DefaultPublisherStub::PublishChannelConnectionEvents(
    grpc::ClientContext& context, Options const&,
    google::cloud::eventarc::publishing::v1::
        PublishChannelConnectionEventsRequest const& request) {
  google::cloud::eventarc::publishing::v1::
      PublishChannelConnectionEventsResponse response;
  auto status =
      grpc_stub_->PublishChannelConnectionEvents(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::eventarc::publishing::v1::PublishEventsResponse>
DefaultPublisherStub::PublishEvents(
    grpc::ClientContext& context, Options const&,
    google::cloud::eventarc::publishing::v1::PublishEventsRequest const&
        request) {
  google::cloud::eventarc::publishing::v1::PublishEventsResponse response;
  auto status = grpc_stub_->PublishEvents(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace eventarc_publishing_v1_internal
}  // namespace cloud
}  // namespace google
