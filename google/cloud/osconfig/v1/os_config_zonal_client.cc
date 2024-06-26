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
// source: google/cloud/osconfig/v1/osconfig_zonal_service.proto

#include "google/cloud/osconfig/v1/os_config_zonal_client.h"
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace osconfig_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

OsConfigZonalServiceClient::OsConfigZonalServiceClient(
    std::shared_ptr<OsConfigZonalServiceConnection> connection, Options opts)
    : connection_(std::move(connection)),
      options_(
          internal::MergeOptions(std::move(opts), connection_->options())) {}
OsConfigZonalServiceClient::~OsConfigZonalServiceClient() = default;

future<StatusOr<google::cloud::osconfig::v1::OSPolicyAssignment>>
OsConfigZonalServiceClient::CreateOSPolicyAssignment(
    std::string const& parent,
    google::cloud::osconfig::v1::OSPolicyAssignment const& os_policy_assignment,
    std::string const& os_policy_assignment_id, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::osconfig::v1::CreateOSPolicyAssignmentRequest request;
  request.set_parent(parent);
  *request.mutable_os_policy_assignment() = os_policy_assignment;
  request.set_os_policy_assignment_id(os_policy_assignment_id);
  return connection_->CreateOSPolicyAssignment(request);
}

StatusOr<google::longrunning::Operation>
OsConfigZonalServiceClient::CreateOSPolicyAssignment(
    ExperimentalTag, NoAwaitTag, std::string const& parent,
    google::cloud::osconfig::v1::OSPolicyAssignment const& os_policy_assignment,
    std::string const& os_policy_assignment_id, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::osconfig::v1::CreateOSPolicyAssignmentRequest request;
  request.set_parent(parent);
  *request.mutable_os_policy_assignment() = os_policy_assignment;
  request.set_os_policy_assignment_id(os_policy_assignment_id);
  return connection_->CreateOSPolicyAssignment(ExperimentalTag{}, NoAwaitTag{},
                                               request);
}

future<StatusOr<google::cloud::osconfig::v1::OSPolicyAssignment>>
OsConfigZonalServiceClient::CreateOSPolicyAssignment(
    google::cloud::osconfig::v1::CreateOSPolicyAssignmentRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->CreateOSPolicyAssignment(request);
}

StatusOr<google::longrunning::Operation>
OsConfigZonalServiceClient::CreateOSPolicyAssignment(
    ExperimentalTag, NoAwaitTag,
    google::cloud::osconfig::v1::CreateOSPolicyAssignmentRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->CreateOSPolicyAssignment(ExperimentalTag{}, NoAwaitTag{},
                                               request);
}

future<StatusOr<google::cloud::osconfig::v1::OSPolicyAssignment>>
OsConfigZonalServiceClient::CreateOSPolicyAssignment(
    ExperimentalTag, google::longrunning::Operation const& operation,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->CreateOSPolicyAssignment(ExperimentalTag{}, operation);
}

future<StatusOr<google::cloud::osconfig::v1::OSPolicyAssignment>>
OsConfigZonalServiceClient::UpdateOSPolicyAssignment(
    google::cloud::osconfig::v1::OSPolicyAssignment const& os_policy_assignment,
    google::protobuf::FieldMask const& update_mask, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::osconfig::v1::UpdateOSPolicyAssignmentRequest request;
  *request.mutable_os_policy_assignment() = os_policy_assignment;
  *request.mutable_update_mask() = update_mask;
  return connection_->UpdateOSPolicyAssignment(request);
}

StatusOr<google::longrunning::Operation>
OsConfigZonalServiceClient::UpdateOSPolicyAssignment(
    ExperimentalTag, NoAwaitTag,
    google::cloud::osconfig::v1::OSPolicyAssignment const& os_policy_assignment,
    google::protobuf::FieldMask const& update_mask, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::osconfig::v1::UpdateOSPolicyAssignmentRequest request;
  *request.mutable_os_policy_assignment() = os_policy_assignment;
  *request.mutable_update_mask() = update_mask;
  return connection_->UpdateOSPolicyAssignment(ExperimentalTag{}, NoAwaitTag{},
                                               request);
}

future<StatusOr<google::cloud::osconfig::v1::OSPolicyAssignment>>
OsConfigZonalServiceClient::UpdateOSPolicyAssignment(
    google::cloud::osconfig::v1::UpdateOSPolicyAssignmentRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->UpdateOSPolicyAssignment(request);
}

StatusOr<google::longrunning::Operation>
OsConfigZonalServiceClient::UpdateOSPolicyAssignment(
    ExperimentalTag, NoAwaitTag,
    google::cloud::osconfig::v1::UpdateOSPolicyAssignmentRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->UpdateOSPolicyAssignment(ExperimentalTag{}, NoAwaitTag{},
                                               request);
}

future<StatusOr<google::cloud::osconfig::v1::OSPolicyAssignment>>
OsConfigZonalServiceClient::UpdateOSPolicyAssignment(
    ExperimentalTag, google::longrunning::Operation const& operation,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->UpdateOSPolicyAssignment(ExperimentalTag{}, operation);
}

StatusOr<google::cloud::osconfig::v1::OSPolicyAssignment>
OsConfigZonalServiceClient::GetOSPolicyAssignment(std::string const& name,
                                                  Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::osconfig::v1::GetOSPolicyAssignmentRequest request;
  request.set_name(name);
  return connection_->GetOSPolicyAssignment(request);
}

StatusOr<google::cloud::osconfig::v1::OSPolicyAssignment>
OsConfigZonalServiceClient::GetOSPolicyAssignment(
    google::cloud::osconfig::v1::GetOSPolicyAssignmentRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->GetOSPolicyAssignment(request);
}

StreamRange<google::cloud::osconfig::v1::OSPolicyAssignment>
OsConfigZonalServiceClient::ListOSPolicyAssignments(std::string const& parent,
                                                    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::osconfig::v1::ListOSPolicyAssignmentsRequest request;
  request.set_parent(parent);
  return connection_->ListOSPolicyAssignments(request);
}

StreamRange<google::cloud::osconfig::v1::OSPolicyAssignment>
OsConfigZonalServiceClient::ListOSPolicyAssignments(
    google::cloud::osconfig::v1::ListOSPolicyAssignmentsRequest request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->ListOSPolicyAssignments(std::move(request));
}

StreamRange<google::cloud::osconfig::v1::OSPolicyAssignment>
OsConfigZonalServiceClient::ListOSPolicyAssignmentRevisions(
    std::string const& name, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::osconfig::v1::ListOSPolicyAssignmentRevisionsRequest request;
  request.set_name(name);
  return connection_->ListOSPolicyAssignmentRevisions(request);
}

StreamRange<google::cloud::osconfig::v1::OSPolicyAssignment>
OsConfigZonalServiceClient::ListOSPolicyAssignmentRevisions(
    google::cloud::osconfig::v1::ListOSPolicyAssignmentRevisionsRequest request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->ListOSPolicyAssignmentRevisions(std::move(request));
}

future<
    StatusOr<google::cloud::osconfig::v1::OSPolicyAssignmentOperationMetadata>>
OsConfigZonalServiceClient::DeleteOSPolicyAssignment(std::string const& name,
                                                     Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::osconfig::v1::DeleteOSPolicyAssignmentRequest request;
  request.set_name(name);
  return connection_->DeleteOSPolicyAssignment(request);
}

StatusOr<google::longrunning::Operation>
OsConfigZonalServiceClient::DeleteOSPolicyAssignment(ExperimentalTag,
                                                     NoAwaitTag,
                                                     std::string const& name,
                                                     Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::osconfig::v1::DeleteOSPolicyAssignmentRequest request;
  request.set_name(name);
  return connection_->DeleteOSPolicyAssignment(ExperimentalTag{}, NoAwaitTag{},
                                               request);
}

future<
    StatusOr<google::cloud::osconfig::v1::OSPolicyAssignmentOperationMetadata>>
OsConfigZonalServiceClient::DeleteOSPolicyAssignment(
    google::cloud::osconfig::v1::DeleteOSPolicyAssignmentRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->DeleteOSPolicyAssignment(request);
}

StatusOr<google::longrunning::Operation>
OsConfigZonalServiceClient::DeleteOSPolicyAssignment(
    ExperimentalTag, NoAwaitTag,
    google::cloud::osconfig::v1::DeleteOSPolicyAssignmentRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->DeleteOSPolicyAssignment(ExperimentalTag{}, NoAwaitTag{},
                                               request);
}

future<
    StatusOr<google::cloud::osconfig::v1::OSPolicyAssignmentOperationMetadata>>
OsConfigZonalServiceClient::DeleteOSPolicyAssignment(
    ExperimentalTag, google::longrunning::Operation const& operation,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->DeleteOSPolicyAssignment(ExperimentalTag{}, operation);
}

StatusOr<google::cloud::osconfig::v1::OSPolicyAssignmentReport>
OsConfigZonalServiceClient::GetOSPolicyAssignmentReport(std::string const& name,
                                                        Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::osconfig::v1::GetOSPolicyAssignmentReportRequest request;
  request.set_name(name);
  return connection_->GetOSPolicyAssignmentReport(request);
}

StatusOr<google::cloud::osconfig::v1::OSPolicyAssignmentReport>
OsConfigZonalServiceClient::GetOSPolicyAssignmentReport(
    google::cloud::osconfig::v1::GetOSPolicyAssignmentReportRequest const&
        request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->GetOSPolicyAssignmentReport(request);
}

StreamRange<google::cloud::osconfig::v1::OSPolicyAssignmentReport>
OsConfigZonalServiceClient::ListOSPolicyAssignmentReports(
    std::string const& parent, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::osconfig::v1::ListOSPolicyAssignmentReportsRequest request;
  request.set_parent(parent);
  return connection_->ListOSPolicyAssignmentReports(request);
}

StreamRange<google::cloud::osconfig::v1::OSPolicyAssignmentReport>
OsConfigZonalServiceClient::ListOSPolicyAssignmentReports(
    google::cloud::osconfig::v1::ListOSPolicyAssignmentReportsRequest request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->ListOSPolicyAssignmentReports(std::move(request));
}

StatusOr<google::cloud::osconfig::v1::Inventory>
OsConfigZonalServiceClient::GetInventory(std::string const& name,
                                         Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::osconfig::v1::GetInventoryRequest request;
  request.set_name(name);
  return connection_->GetInventory(request);
}

StatusOr<google::cloud::osconfig::v1::Inventory>
OsConfigZonalServiceClient::GetInventory(
    google::cloud::osconfig::v1::GetInventoryRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->GetInventory(request);
}

StreamRange<google::cloud::osconfig::v1::Inventory>
OsConfigZonalServiceClient::ListInventories(std::string const& parent,
                                            Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::osconfig::v1::ListInventoriesRequest request;
  request.set_parent(parent);
  return connection_->ListInventories(request);
}

StreamRange<google::cloud::osconfig::v1::Inventory>
OsConfigZonalServiceClient::ListInventories(
    google::cloud::osconfig::v1::ListInventoriesRequest request, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->ListInventories(std::move(request));
}

StatusOr<google::cloud::osconfig::v1::VulnerabilityReport>
OsConfigZonalServiceClient::GetVulnerabilityReport(std::string const& name,
                                                   Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::osconfig::v1::GetVulnerabilityReportRequest request;
  request.set_name(name);
  return connection_->GetVulnerabilityReport(request);
}

StatusOr<google::cloud::osconfig::v1::VulnerabilityReport>
OsConfigZonalServiceClient::GetVulnerabilityReport(
    google::cloud::osconfig::v1::GetVulnerabilityReportRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->GetVulnerabilityReport(request);
}

StreamRange<google::cloud::osconfig::v1::VulnerabilityReport>
OsConfigZonalServiceClient::ListVulnerabilityReports(std::string const& parent,
                                                     Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::osconfig::v1::ListVulnerabilityReportsRequest request;
  request.set_parent(parent);
  return connection_->ListVulnerabilityReports(request);
}

StreamRange<google::cloud::osconfig::v1::VulnerabilityReport>
OsConfigZonalServiceClient::ListVulnerabilityReports(
    google::cloud::osconfig::v1::ListVulnerabilityReportsRequest request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->ListVulnerabilityReports(std::move(request));
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace osconfig_v1
}  // namespace cloud
}  // namespace google
