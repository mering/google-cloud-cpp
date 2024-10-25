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
// source: google/monitoring/v3/group_service.proto

#include "google/cloud/monitoring/v3/internal/group_logging_decorator.h"
#include "google/cloud/internal/log_wrapper.h"
#include "google/cloud/status_or.h"
#include "google/monitoring/v3/group_service.grpc.pb.h"
#include <memory>
#include <set>
#include <string>
#include <utility>

namespace google {
namespace cloud {
namespace monitoring_v3_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

GroupServiceLogging::GroupServiceLogging(
    std::shared_ptr<GroupServiceStub> child, TracingOptions tracing_options,
    std::set<std::string> const&)
    : child_(std::move(child)), tracing_options_(std::move(tracing_options)) {}

StatusOr<google::monitoring::v3::ListGroupsResponse>
GroupServiceLogging::ListGroups(
    grpc::ClientContext& context, Options const& options,
    google::monitoring::v3::ListGroupsRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::monitoring::v3::ListGroupsRequest const& request) {
        return child_->ListGroups(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::monitoring::v3::Group> GroupServiceLogging::GetGroup(
    grpc::ClientContext& context, Options const& options,
    google::monitoring::v3::GetGroupRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::monitoring::v3::GetGroupRequest const& request) {
        return child_->GetGroup(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::monitoring::v3::Group> GroupServiceLogging::CreateGroup(
    grpc::ClientContext& context, Options const& options,
    google::monitoring::v3::CreateGroupRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::monitoring::v3::CreateGroupRequest const& request) {
        return child_->CreateGroup(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::monitoring::v3::Group> GroupServiceLogging::UpdateGroup(
    grpc::ClientContext& context, Options const& options,
    google::monitoring::v3::UpdateGroupRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::monitoring::v3::UpdateGroupRequest const& request) {
        return child_->UpdateGroup(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

Status GroupServiceLogging::DeleteGroup(
    grpc::ClientContext& context, Options const& options,
    google::monitoring::v3::DeleteGroupRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::monitoring::v3::DeleteGroupRequest const& request) {
        return child_->DeleteGroup(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::monitoring::v3::ListGroupMembersResponse>
GroupServiceLogging::ListGroupMembers(
    grpc::ClientContext& context, Options const& options,
    google::monitoring::v3::ListGroupMembersRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::monitoring::v3::ListGroupMembersRequest const& request) {
        return child_->ListGroupMembers(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace monitoring_v3_internal
}  // namespace cloud
}  // namespace google
