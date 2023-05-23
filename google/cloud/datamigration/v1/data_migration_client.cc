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
// source: google/cloud/clouddms/v1/clouddms.proto

#include "google/cloud/datamigration/v1/data_migration_client.h"
#include <memory>

namespace google {
namespace cloud {
namespace datamigration_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

DataMigrationServiceClient::DataMigrationServiceClient(
    std::shared_ptr<DataMigrationServiceConnection> connection, Options opts)
    : connection_(std::move(connection)),
      options_(
          internal::MergeOptions(std::move(opts), connection_->options())) {}
DataMigrationServiceClient::~DataMigrationServiceClient() = default;

StreamRange<google::cloud::clouddms::v1::MigrationJob>
DataMigrationServiceClient::ListMigrationJobs(std::string const& parent,
                                              Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::clouddms::v1::ListMigrationJobsRequest request;
  request.set_parent(parent);
  return connection_->ListMigrationJobs(request);
}

StreamRange<google::cloud::clouddms::v1::MigrationJob>
DataMigrationServiceClient::ListMigrationJobs(
    google::cloud::clouddms::v1::ListMigrationJobsRequest request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->ListMigrationJobs(std::move(request));
}

StatusOr<google::cloud::clouddms::v1::MigrationJob>
DataMigrationServiceClient::GetMigrationJob(std::string const& name,
                                            Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::clouddms::v1::GetMigrationJobRequest request;
  request.set_name(name);
  return connection_->GetMigrationJob(request);
}

StatusOr<google::cloud::clouddms::v1::MigrationJob>
DataMigrationServiceClient::GetMigrationJob(
    google::cloud::clouddms::v1::GetMigrationJobRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->GetMigrationJob(request);
}

future<StatusOr<google::cloud::clouddms::v1::MigrationJob>>
DataMigrationServiceClient::CreateMigrationJob(
    std::string const& parent,
    google::cloud::clouddms::v1::MigrationJob const& migration_job,
    std::string const& migration_job_id, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::clouddms::v1::CreateMigrationJobRequest request;
  request.set_parent(parent);
  *request.mutable_migration_job() = migration_job;
  request.set_migration_job_id(migration_job_id);
  return connection_->CreateMigrationJob(request);
}

future<StatusOr<google::cloud::clouddms::v1::MigrationJob>>
DataMigrationServiceClient::CreateMigrationJob(
    google::cloud::clouddms::v1::CreateMigrationJobRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->CreateMigrationJob(request);
}

future<StatusOr<google::cloud::clouddms::v1::MigrationJob>>
DataMigrationServiceClient::UpdateMigrationJob(
    google::cloud::clouddms::v1::MigrationJob const& migration_job,
    google::protobuf::FieldMask const& update_mask, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::clouddms::v1::UpdateMigrationJobRequest request;
  *request.mutable_migration_job() = migration_job;
  *request.mutable_update_mask() = update_mask;
  return connection_->UpdateMigrationJob(request);
}

future<StatusOr<google::cloud::clouddms::v1::MigrationJob>>
DataMigrationServiceClient::UpdateMigrationJob(
    google::cloud::clouddms::v1::UpdateMigrationJobRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->UpdateMigrationJob(request);
}

future<StatusOr<google::cloud::clouddms::v1::OperationMetadata>>
DataMigrationServiceClient::DeleteMigrationJob(std::string const& name,
                                               Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::clouddms::v1::DeleteMigrationJobRequest request;
  request.set_name(name);
  return connection_->DeleteMigrationJob(request);
}

future<StatusOr<google::cloud::clouddms::v1::OperationMetadata>>
DataMigrationServiceClient::DeleteMigrationJob(
    google::cloud::clouddms::v1::DeleteMigrationJobRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->DeleteMigrationJob(request);
}

future<StatusOr<google::cloud::clouddms::v1::MigrationJob>>
DataMigrationServiceClient::StartMigrationJob(
    google::cloud::clouddms::v1::StartMigrationJobRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->StartMigrationJob(request);
}

future<StatusOr<google::cloud::clouddms::v1::MigrationJob>>
DataMigrationServiceClient::StopMigrationJob(
    google::cloud::clouddms::v1::StopMigrationJobRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->StopMigrationJob(request);
}

future<StatusOr<google::cloud::clouddms::v1::MigrationJob>>
DataMigrationServiceClient::ResumeMigrationJob(
    google::cloud::clouddms::v1::ResumeMigrationJobRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->ResumeMigrationJob(request);
}

future<StatusOr<google::cloud::clouddms::v1::MigrationJob>>
DataMigrationServiceClient::PromoteMigrationJob(
    google::cloud::clouddms::v1::PromoteMigrationJobRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->PromoteMigrationJob(request);
}

future<StatusOr<google::cloud::clouddms::v1::MigrationJob>>
DataMigrationServiceClient::VerifyMigrationJob(
    google::cloud::clouddms::v1::VerifyMigrationJobRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->VerifyMigrationJob(request);
}

future<StatusOr<google::cloud::clouddms::v1::MigrationJob>>
DataMigrationServiceClient::RestartMigrationJob(
    google::cloud::clouddms::v1::RestartMigrationJobRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->RestartMigrationJob(request);
}

StatusOr<google::cloud::clouddms::v1::SshScript>
DataMigrationServiceClient::GenerateSshScript(
    google::cloud::clouddms::v1::GenerateSshScriptRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->GenerateSshScript(request);
}

StreamRange<google::cloud::clouddms::v1::ConnectionProfile>
DataMigrationServiceClient::ListConnectionProfiles(std::string const& parent,
                                                   Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::clouddms::v1::ListConnectionProfilesRequest request;
  request.set_parent(parent);
  return connection_->ListConnectionProfiles(request);
}

StreamRange<google::cloud::clouddms::v1::ConnectionProfile>
DataMigrationServiceClient::ListConnectionProfiles(
    google::cloud::clouddms::v1::ListConnectionProfilesRequest request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->ListConnectionProfiles(std::move(request));
}

StatusOr<google::cloud::clouddms::v1::ConnectionProfile>
DataMigrationServiceClient::GetConnectionProfile(std::string const& name,
                                                 Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::clouddms::v1::GetConnectionProfileRequest request;
  request.set_name(name);
  return connection_->GetConnectionProfile(request);
}

StatusOr<google::cloud::clouddms::v1::ConnectionProfile>
DataMigrationServiceClient::GetConnectionProfile(
    google::cloud::clouddms::v1::GetConnectionProfileRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->GetConnectionProfile(request);
}

future<StatusOr<google::cloud::clouddms::v1::ConnectionProfile>>
DataMigrationServiceClient::CreateConnectionProfile(
    std::string const& parent,
    google::cloud::clouddms::v1::ConnectionProfile const& connection_profile,
    std::string const& connection_profile_id, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::clouddms::v1::CreateConnectionProfileRequest request;
  request.set_parent(parent);
  *request.mutable_connection_profile() = connection_profile;
  request.set_connection_profile_id(connection_profile_id);
  return connection_->CreateConnectionProfile(request);
}

future<StatusOr<google::cloud::clouddms::v1::ConnectionProfile>>
DataMigrationServiceClient::CreateConnectionProfile(
    google::cloud::clouddms::v1::CreateConnectionProfileRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->CreateConnectionProfile(request);
}

future<StatusOr<google::cloud::clouddms::v1::ConnectionProfile>>
DataMigrationServiceClient::UpdateConnectionProfile(
    google::cloud::clouddms::v1::ConnectionProfile const& connection_profile,
    google::protobuf::FieldMask const& update_mask, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::clouddms::v1::UpdateConnectionProfileRequest request;
  *request.mutable_connection_profile() = connection_profile;
  *request.mutable_update_mask() = update_mask;
  return connection_->UpdateConnectionProfile(request);
}

future<StatusOr<google::cloud::clouddms::v1::ConnectionProfile>>
DataMigrationServiceClient::UpdateConnectionProfile(
    google::cloud::clouddms::v1::UpdateConnectionProfileRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->UpdateConnectionProfile(request);
}

future<StatusOr<google::cloud::clouddms::v1::OperationMetadata>>
DataMigrationServiceClient::DeleteConnectionProfile(std::string const& name,
                                                    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::clouddms::v1::DeleteConnectionProfileRequest request;
  request.set_name(name);
  return connection_->DeleteConnectionProfile(request);
}

future<StatusOr<google::cloud::clouddms::v1::OperationMetadata>>
DataMigrationServiceClient::DeleteConnectionProfile(
    google::cloud::clouddms::v1::DeleteConnectionProfileRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->DeleteConnectionProfile(request);
}

future<StatusOr<google::cloud::clouddms::v1::PrivateConnection>>
DataMigrationServiceClient::CreatePrivateConnection(
    std::string const& parent,
    google::cloud::clouddms::v1::PrivateConnection const& private_connection,
    std::string const& private_connection_id, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::clouddms::v1::CreatePrivateConnectionRequest request;
  request.set_parent(parent);
  *request.mutable_private_connection() = private_connection;
  request.set_private_connection_id(private_connection_id);
  return connection_->CreatePrivateConnection(request);
}

future<StatusOr<google::cloud::clouddms::v1::PrivateConnection>>
DataMigrationServiceClient::CreatePrivateConnection(
    google::cloud::clouddms::v1::CreatePrivateConnectionRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->CreatePrivateConnection(request);
}

StatusOr<google::cloud::clouddms::v1::PrivateConnection>
DataMigrationServiceClient::GetPrivateConnection(std::string const& name,
                                                 Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::clouddms::v1::GetPrivateConnectionRequest request;
  request.set_name(name);
  return connection_->GetPrivateConnection(request);
}

StatusOr<google::cloud::clouddms::v1::PrivateConnection>
DataMigrationServiceClient::GetPrivateConnection(
    google::cloud::clouddms::v1::GetPrivateConnectionRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->GetPrivateConnection(request);
}

StreamRange<google::cloud::clouddms::v1::PrivateConnection>
DataMigrationServiceClient::ListPrivateConnections(std::string const& parent,
                                                   Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::clouddms::v1::ListPrivateConnectionsRequest request;
  request.set_parent(parent);
  return connection_->ListPrivateConnections(request);
}

StreamRange<google::cloud::clouddms::v1::PrivateConnection>
DataMigrationServiceClient::ListPrivateConnections(
    google::cloud::clouddms::v1::ListPrivateConnectionsRequest request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->ListPrivateConnections(std::move(request));
}

future<StatusOr<google::cloud::clouddms::v1::OperationMetadata>>
DataMigrationServiceClient::DeletePrivateConnection(std::string const& name,
                                                    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::clouddms::v1::DeletePrivateConnectionRequest request;
  request.set_name(name);
  return connection_->DeletePrivateConnection(request);
}

future<StatusOr<google::cloud::clouddms::v1::OperationMetadata>>
DataMigrationServiceClient::DeletePrivateConnection(
    google::cloud::clouddms::v1::DeletePrivateConnectionRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->DeletePrivateConnection(request);
}

StatusOr<google::cloud::clouddms::v1::ConversionWorkspace>
DataMigrationServiceClient::GetConversionWorkspace(std::string const& name,
                                                   Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::clouddms::v1::GetConversionWorkspaceRequest request;
  request.set_name(name);
  return connection_->GetConversionWorkspace(request);
}

StatusOr<google::cloud::clouddms::v1::ConversionWorkspace>
DataMigrationServiceClient::GetConversionWorkspace(
    google::cloud::clouddms::v1::GetConversionWorkspaceRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->GetConversionWorkspace(request);
}

StreamRange<google::cloud::clouddms::v1::ConversionWorkspace>
DataMigrationServiceClient::ListConversionWorkspaces(std::string const& parent,
                                                     Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::clouddms::v1::ListConversionWorkspacesRequest request;
  request.set_parent(parent);
  return connection_->ListConversionWorkspaces(request);
}

StreamRange<google::cloud::clouddms::v1::ConversionWorkspace>
DataMigrationServiceClient::ListConversionWorkspaces(
    google::cloud::clouddms::v1::ListConversionWorkspacesRequest request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->ListConversionWorkspaces(std::move(request));
}

future<StatusOr<google::cloud::clouddms::v1::ConversionWorkspace>>
DataMigrationServiceClient::CreateConversionWorkspace(
    std::string const& parent,
    google::cloud::clouddms::v1::ConversionWorkspace const&
        conversion_workspace,
    std::string const& conversion_workspace_id, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::clouddms::v1::CreateConversionWorkspaceRequest request;
  request.set_parent(parent);
  *request.mutable_conversion_workspace() = conversion_workspace;
  request.set_conversion_workspace_id(conversion_workspace_id);
  return connection_->CreateConversionWorkspace(request);
}

future<StatusOr<google::cloud::clouddms::v1::ConversionWorkspace>>
DataMigrationServiceClient::CreateConversionWorkspace(
    google::cloud::clouddms::v1::CreateConversionWorkspaceRequest const&
        request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->CreateConversionWorkspace(request);
}

future<StatusOr<google::cloud::clouddms::v1::ConversionWorkspace>>
DataMigrationServiceClient::UpdateConversionWorkspace(
    google::cloud::clouddms::v1::ConversionWorkspace const&
        conversion_workspace,
    google::protobuf::FieldMask const& update_mask, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::clouddms::v1::UpdateConversionWorkspaceRequest request;
  *request.mutable_conversion_workspace() = conversion_workspace;
  *request.mutable_update_mask() = update_mask;
  return connection_->UpdateConversionWorkspace(request);
}

future<StatusOr<google::cloud::clouddms::v1::ConversionWorkspace>>
DataMigrationServiceClient::UpdateConversionWorkspace(
    google::cloud::clouddms::v1::UpdateConversionWorkspaceRequest const&
        request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->UpdateConversionWorkspace(request);
}

future<StatusOr<google::cloud::clouddms::v1::OperationMetadata>>
DataMigrationServiceClient::DeleteConversionWorkspace(std::string const& name,
                                                      Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::clouddms::v1::DeleteConversionWorkspaceRequest request;
  request.set_name(name);
  return connection_->DeleteConversionWorkspace(request);
}

future<StatusOr<google::cloud::clouddms::v1::OperationMetadata>>
DataMigrationServiceClient::DeleteConversionWorkspace(
    google::cloud::clouddms::v1::DeleteConversionWorkspaceRequest const&
        request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->DeleteConversionWorkspace(request);
}

future<StatusOr<google::cloud::clouddms::v1::ConversionWorkspace>>
DataMigrationServiceClient::SeedConversionWorkspace(
    google::cloud::clouddms::v1::SeedConversionWorkspaceRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->SeedConversionWorkspace(request);
}

future<StatusOr<google::cloud::clouddms::v1::ConversionWorkspace>>
DataMigrationServiceClient::ImportMappingRules(
    google::cloud::clouddms::v1::ImportMappingRulesRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->ImportMappingRules(request);
}

future<StatusOr<google::cloud::clouddms::v1::ConversionWorkspace>>
DataMigrationServiceClient::ConvertConversionWorkspace(
    google::cloud::clouddms::v1::ConvertConversionWorkspaceRequest const&
        request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->ConvertConversionWorkspace(request);
}

future<StatusOr<google::cloud::clouddms::v1::ConversionWorkspace>>
DataMigrationServiceClient::CommitConversionWorkspace(
    google::cloud::clouddms::v1::CommitConversionWorkspaceRequest const&
        request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->CommitConversionWorkspace(request);
}

future<StatusOr<google::cloud::clouddms::v1::ConversionWorkspace>>
DataMigrationServiceClient::RollbackConversionWorkspace(
    google::cloud::clouddms::v1::RollbackConversionWorkspaceRequest const&
        request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->RollbackConversionWorkspace(request);
}

future<StatusOr<google::cloud::clouddms::v1::ConversionWorkspace>>
DataMigrationServiceClient::ApplyConversionWorkspace(
    google::cloud::clouddms::v1::ApplyConversionWorkspaceRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->ApplyConversionWorkspace(request);
}

StreamRange<google::cloud::clouddms::v1::DatabaseEntity>
DataMigrationServiceClient::DescribeDatabaseEntities(
    google::cloud::clouddms::v1::DescribeDatabaseEntitiesRequest request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->DescribeDatabaseEntities(std::move(request));
}

StatusOr<google::cloud::clouddms::v1::SearchBackgroundJobsResponse>
DataMigrationServiceClient::SearchBackgroundJobs(
    google::cloud::clouddms::v1::SearchBackgroundJobsRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->SearchBackgroundJobs(request);
}

StatusOr<
    google::cloud::clouddms::v1::DescribeConversionWorkspaceRevisionsResponse>
DataMigrationServiceClient::DescribeConversionWorkspaceRevisions(
    google::cloud::clouddms::v1::
        DescribeConversionWorkspaceRevisionsRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->DescribeConversionWorkspaceRevisions(request);
}

StreamRange<std::string> DataMigrationServiceClient::FetchStaticIps(
    std::string const& name, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::clouddms::v1::FetchStaticIpsRequest request;
  request.set_name(name);
  return connection_->FetchStaticIps(request);
}

StreamRange<std::string> DataMigrationServiceClient::FetchStaticIps(
    google::cloud::clouddms::v1::FetchStaticIpsRequest request, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->FetchStaticIps(std::move(request));
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace datamigration_v1
}  // namespace cloud
}  // namespace google
