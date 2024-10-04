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
// source: google/cloud/aiplatform/v1/dataset_service.proto

#include "google/cloud/aiplatform/v1/dataset_client.h"
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace aiplatform_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

DatasetServiceClient::DatasetServiceClient(
    std::shared_ptr<DatasetServiceConnection> connection, Options opts)
    : connection_(std::move(connection)),
      options_(
          internal::MergeOptions(std::move(opts), connection_->options())) {}
DatasetServiceClient::~DatasetServiceClient() = default;

future<StatusOr<google::cloud::aiplatform::v1::Dataset>>
DatasetServiceClient::CreateDataset(
    std::string const& parent,
    google::cloud::aiplatform::v1::Dataset const& dataset, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::aiplatform::v1::CreateDatasetRequest request;
  request.set_parent(parent);
  *request.mutable_dataset() = dataset;
  return connection_->CreateDataset(request);
}

StatusOr<google::longrunning::Operation> DatasetServiceClient::CreateDataset(
    NoAwaitTag, std::string const& parent,
    google::cloud::aiplatform::v1::Dataset const& dataset, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::aiplatform::v1::CreateDatasetRequest request;
  request.set_parent(parent);
  *request.mutable_dataset() = dataset;
  return connection_->CreateDataset(NoAwaitTag{}, request);
}

future<StatusOr<google::cloud::aiplatform::v1::Dataset>>
DatasetServiceClient::CreateDataset(
    google::cloud::aiplatform::v1::CreateDatasetRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->CreateDataset(request);
}

StatusOr<google::longrunning::Operation> DatasetServiceClient::CreateDataset(
    NoAwaitTag,
    google::cloud::aiplatform::v1::CreateDatasetRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->CreateDataset(NoAwaitTag{}, request);
}

future<StatusOr<google::cloud::aiplatform::v1::Dataset>>
DatasetServiceClient::CreateDataset(
    google::longrunning::Operation const& operation, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->CreateDataset(operation);
}

StatusOr<google::cloud::aiplatform::v1::Dataset>
DatasetServiceClient::GetDataset(std::string const& name, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::aiplatform::v1::GetDatasetRequest request;
  request.set_name(name);
  return connection_->GetDataset(request);
}

StatusOr<google::cloud::aiplatform::v1::Dataset>
DatasetServiceClient::GetDataset(
    google::cloud::aiplatform::v1::GetDatasetRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->GetDataset(request);
}

StatusOr<google::cloud::aiplatform::v1::Dataset>
DatasetServiceClient::UpdateDataset(
    google::cloud::aiplatform::v1::Dataset const& dataset,
    google::protobuf::FieldMask const& update_mask, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::aiplatform::v1::UpdateDatasetRequest request;
  *request.mutable_dataset() = dataset;
  *request.mutable_update_mask() = update_mask;
  return connection_->UpdateDataset(request);
}

StatusOr<google::cloud::aiplatform::v1::Dataset>
DatasetServiceClient::UpdateDataset(
    google::cloud::aiplatform::v1::UpdateDatasetRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->UpdateDataset(request);
}

StreamRange<google::cloud::aiplatform::v1::Dataset>
DatasetServiceClient::ListDatasets(std::string const& parent, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::aiplatform::v1::ListDatasetsRequest request;
  request.set_parent(parent);
  return connection_->ListDatasets(request);
}

StreamRange<google::cloud::aiplatform::v1::Dataset>
DatasetServiceClient::ListDatasets(
    google::cloud::aiplatform::v1::ListDatasetsRequest request, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->ListDatasets(std::move(request));
}

future<StatusOr<google::cloud::aiplatform::v1::DeleteOperationMetadata>>
DatasetServiceClient::DeleteDataset(std::string const& name, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::aiplatform::v1::DeleteDatasetRequest request;
  request.set_name(name);
  return connection_->DeleteDataset(request);
}

StatusOr<google::longrunning::Operation> DatasetServiceClient::DeleteDataset(
    NoAwaitTag, std::string const& name, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::aiplatform::v1::DeleteDatasetRequest request;
  request.set_name(name);
  return connection_->DeleteDataset(NoAwaitTag{}, request);
}

future<StatusOr<google::cloud::aiplatform::v1::DeleteOperationMetadata>>
DatasetServiceClient::DeleteDataset(
    google::cloud::aiplatform::v1::DeleteDatasetRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->DeleteDataset(request);
}

StatusOr<google::longrunning::Operation> DatasetServiceClient::DeleteDataset(
    NoAwaitTag,
    google::cloud::aiplatform::v1::DeleteDatasetRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->DeleteDataset(NoAwaitTag{}, request);
}

future<StatusOr<google::cloud::aiplatform::v1::DeleteOperationMetadata>>
DatasetServiceClient::DeleteDataset(
    google::longrunning::Operation const& operation, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->DeleteDataset(operation);
}

future<StatusOr<google::cloud::aiplatform::v1::ImportDataResponse>>
DatasetServiceClient::ImportData(
    std::string const& name,
    std::vector<google::cloud::aiplatform::v1::ImportDataConfig> const&
        import_configs,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::aiplatform::v1::ImportDataRequest request;
  request.set_name(name);
  *request.mutable_import_configs() = {import_configs.begin(),
                                       import_configs.end()};
  return connection_->ImportData(request);
}

StatusOr<google::longrunning::Operation> DatasetServiceClient::ImportData(
    NoAwaitTag, std::string const& name,
    std::vector<google::cloud::aiplatform::v1::ImportDataConfig> const&
        import_configs,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::aiplatform::v1::ImportDataRequest request;
  request.set_name(name);
  *request.mutable_import_configs() = {import_configs.begin(),
                                       import_configs.end()};
  return connection_->ImportData(NoAwaitTag{}, request);
}

future<StatusOr<google::cloud::aiplatform::v1::ImportDataResponse>>
DatasetServiceClient::ImportData(
    google::cloud::aiplatform::v1::ImportDataRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->ImportData(request);
}

StatusOr<google::longrunning::Operation> DatasetServiceClient::ImportData(
    NoAwaitTag, google::cloud::aiplatform::v1::ImportDataRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->ImportData(NoAwaitTag{}, request);
}

future<StatusOr<google::cloud::aiplatform::v1::ImportDataResponse>>
DatasetServiceClient::ImportData(
    google::longrunning::Operation const& operation, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->ImportData(operation);
}

future<StatusOr<google::cloud::aiplatform::v1::ExportDataResponse>>
DatasetServiceClient::ExportData(
    std::string const& name,
    google::cloud::aiplatform::v1::ExportDataConfig const& export_config,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::aiplatform::v1::ExportDataRequest request;
  request.set_name(name);
  *request.mutable_export_config() = export_config;
  return connection_->ExportData(request);
}

StatusOr<google::longrunning::Operation> DatasetServiceClient::ExportData(
    NoAwaitTag, std::string const& name,
    google::cloud::aiplatform::v1::ExportDataConfig const& export_config,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::aiplatform::v1::ExportDataRequest request;
  request.set_name(name);
  *request.mutable_export_config() = export_config;
  return connection_->ExportData(NoAwaitTag{}, request);
}

future<StatusOr<google::cloud::aiplatform::v1::ExportDataResponse>>
DatasetServiceClient::ExportData(
    google::cloud::aiplatform::v1::ExportDataRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->ExportData(request);
}

StatusOr<google::longrunning::Operation> DatasetServiceClient::ExportData(
    NoAwaitTag, google::cloud::aiplatform::v1::ExportDataRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->ExportData(NoAwaitTag{}, request);
}

future<StatusOr<google::cloud::aiplatform::v1::ExportDataResponse>>
DatasetServiceClient::ExportData(
    google::longrunning::Operation const& operation, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->ExportData(operation);
}

future<StatusOr<google::cloud::aiplatform::v1::DatasetVersion>>
DatasetServiceClient::CreateDatasetVersion(
    std::string const& parent,
    google::cloud::aiplatform::v1::DatasetVersion const& dataset_version,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::aiplatform::v1::CreateDatasetVersionRequest request;
  request.set_parent(parent);
  *request.mutable_dataset_version() = dataset_version;
  return connection_->CreateDatasetVersion(request);
}

StatusOr<google::longrunning::Operation>
DatasetServiceClient::CreateDatasetVersion(
    NoAwaitTag, std::string const& parent,
    google::cloud::aiplatform::v1::DatasetVersion const& dataset_version,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::aiplatform::v1::CreateDatasetVersionRequest request;
  request.set_parent(parent);
  *request.mutable_dataset_version() = dataset_version;
  return connection_->CreateDatasetVersion(NoAwaitTag{}, request);
}

future<StatusOr<google::cloud::aiplatform::v1::DatasetVersion>>
DatasetServiceClient::CreateDatasetVersion(
    google::cloud::aiplatform::v1::CreateDatasetVersionRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->CreateDatasetVersion(request);
}

StatusOr<google::longrunning::Operation>
DatasetServiceClient::CreateDatasetVersion(
    NoAwaitTag,
    google::cloud::aiplatform::v1::CreateDatasetVersionRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->CreateDatasetVersion(NoAwaitTag{}, request);
}

future<StatusOr<google::cloud::aiplatform::v1::DatasetVersion>>
DatasetServiceClient::CreateDatasetVersion(
    google::longrunning::Operation const& operation, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->CreateDatasetVersion(operation);
}

StatusOr<google::cloud::aiplatform::v1::DatasetVersion>
DatasetServiceClient::UpdateDatasetVersion(
    google::cloud::aiplatform::v1::DatasetVersion const& dataset_version,
    google::protobuf::FieldMask const& update_mask, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::aiplatform::v1::UpdateDatasetVersionRequest request;
  *request.mutable_dataset_version() = dataset_version;
  *request.mutable_update_mask() = update_mask;
  return connection_->UpdateDatasetVersion(request);
}

StatusOr<google::cloud::aiplatform::v1::DatasetVersion>
DatasetServiceClient::UpdateDatasetVersion(
    google::cloud::aiplatform::v1::UpdateDatasetVersionRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->UpdateDatasetVersion(request);
}

future<StatusOr<google::cloud::aiplatform::v1::DeleteOperationMetadata>>
DatasetServiceClient::DeleteDatasetVersion(std::string const& name,
                                           Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::aiplatform::v1::DeleteDatasetVersionRequest request;
  request.set_name(name);
  return connection_->DeleteDatasetVersion(request);
}

StatusOr<google::longrunning::Operation>
DatasetServiceClient::DeleteDatasetVersion(NoAwaitTag, std::string const& name,
                                           Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::aiplatform::v1::DeleteDatasetVersionRequest request;
  request.set_name(name);
  return connection_->DeleteDatasetVersion(NoAwaitTag{}, request);
}

future<StatusOr<google::cloud::aiplatform::v1::DeleteOperationMetadata>>
DatasetServiceClient::DeleteDatasetVersion(
    google::cloud::aiplatform::v1::DeleteDatasetVersionRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->DeleteDatasetVersion(request);
}

StatusOr<google::longrunning::Operation>
DatasetServiceClient::DeleteDatasetVersion(
    NoAwaitTag,
    google::cloud::aiplatform::v1::DeleteDatasetVersionRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->DeleteDatasetVersion(NoAwaitTag{}, request);
}

future<StatusOr<google::cloud::aiplatform::v1::DeleteOperationMetadata>>
DatasetServiceClient::DeleteDatasetVersion(
    google::longrunning::Operation const& operation, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->DeleteDatasetVersion(operation);
}

StatusOr<google::cloud::aiplatform::v1::DatasetVersion>
DatasetServiceClient::GetDatasetVersion(std::string const& name, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::aiplatform::v1::GetDatasetVersionRequest request;
  request.set_name(name);
  return connection_->GetDatasetVersion(request);
}

StatusOr<google::cloud::aiplatform::v1::DatasetVersion>
DatasetServiceClient::GetDatasetVersion(
    google::cloud::aiplatform::v1::GetDatasetVersionRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->GetDatasetVersion(request);
}

StreamRange<google::cloud::aiplatform::v1::DatasetVersion>
DatasetServiceClient::ListDatasetVersions(std::string const& parent,
                                          Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::aiplatform::v1::ListDatasetVersionsRequest request;
  request.set_parent(parent);
  return connection_->ListDatasetVersions(request);
}

StreamRange<google::cloud::aiplatform::v1::DatasetVersion>
DatasetServiceClient::ListDatasetVersions(
    google::cloud::aiplatform::v1::ListDatasetVersionsRequest request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->ListDatasetVersions(std::move(request));
}

future<StatusOr<google::cloud::aiplatform::v1::DatasetVersion>>
DatasetServiceClient::RestoreDatasetVersion(std::string const& name,
                                            Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::aiplatform::v1::RestoreDatasetVersionRequest request;
  request.set_name(name);
  return connection_->RestoreDatasetVersion(request);
}

StatusOr<google::longrunning::Operation>
DatasetServiceClient::RestoreDatasetVersion(NoAwaitTag, std::string const& name,
                                            Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::aiplatform::v1::RestoreDatasetVersionRequest request;
  request.set_name(name);
  return connection_->RestoreDatasetVersion(NoAwaitTag{}, request);
}

future<StatusOr<google::cloud::aiplatform::v1::DatasetVersion>>
DatasetServiceClient::RestoreDatasetVersion(
    google::cloud::aiplatform::v1::RestoreDatasetVersionRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->RestoreDatasetVersion(request);
}

StatusOr<google::longrunning::Operation>
DatasetServiceClient::RestoreDatasetVersion(
    NoAwaitTag,
    google::cloud::aiplatform::v1::RestoreDatasetVersionRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->RestoreDatasetVersion(NoAwaitTag{}, request);
}

future<StatusOr<google::cloud::aiplatform::v1::DatasetVersion>>
DatasetServiceClient::RestoreDatasetVersion(
    google::longrunning::Operation const& operation, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->RestoreDatasetVersion(operation);
}

StreamRange<google::cloud::aiplatform::v1::DataItem>
DatasetServiceClient::ListDataItems(std::string const& parent, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::aiplatform::v1::ListDataItemsRequest request;
  request.set_parent(parent);
  return connection_->ListDataItems(request);
}

StreamRange<google::cloud::aiplatform::v1::DataItem>
DatasetServiceClient::ListDataItems(
    google::cloud::aiplatform::v1::ListDataItemsRequest request, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->ListDataItems(std::move(request));
}

StreamRange<google::cloud::aiplatform::v1::DataItemView>
DatasetServiceClient::SearchDataItems(
    google::cloud::aiplatform::v1::SearchDataItemsRequest request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->SearchDataItems(std::move(request));
}

StreamRange<google::cloud::aiplatform::v1::SavedQuery>
DatasetServiceClient::ListSavedQueries(std::string const& parent,
                                       Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::aiplatform::v1::ListSavedQueriesRequest request;
  request.set_parent(parent);
  return connection_->ListSavedQueries(request);
}

StreamRange<google::cloud::aiplatform::v1::SavedQuery>
DatasetServiceClient::ListSavedQueries(
    google::cloud::aiplatform::v1::ListSavedQueriesRequest request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->ListSavedQueries(std::move(request));
}

future<StatusOr<google::cloud::aiplatform::v1::DeleteOperationMetadata>>
DatasetServiceClient::DeleteSavedQuery(std::string const& name, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::aiplatform::v1::DeleteSavedQueryRequest request;
  request.set_name(name);
  return connection_->DeleteSavedQuery(request);
}

StatusOr<google::longrunning::Operation> DatasetServiceClient::DeleteSavedQuery(
    NoAwaitTag, std::string const& name, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::aiplatform::v1::DeleteSavedQueryRequest request;
  request.set_name(name);
  return connection_->DeleteSavedQuery(NoAwaitTag{}, request);
}

future<StatusOr<google::cloud::aiplatform::v1::DeleteOperationMetadata>>
DatasetServiceClient::DeleteSavedQuery(
    google::cloud::aiplatform::v1::DeleteSavedQueryRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->DeleteSavedQuery(request);
}

StatusOr<google::longrunning::Operation> DatasetServiceClient::DeleteSavedQuery(
    NoAwaitTag,
    google::cloud::aiplatform::v1::DeleteSavedQueryRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->DeleteSavedQuery(NoAwaitTag{}, request);
}

future<StatusOr<google::cloud::aiplatform::v1::DeleteOperationMetadata>>
DatasetServiceClient::DeleteSavedQuery(
    google::longrunning::Operation const& operation, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->DeleteSavedQuery(operation);
}

StatusOr<google::cloud::aiplatform::v1::AnnotationSpec>
DatasetServiceClient::GetAnnotationSpec(std::string const& name, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::aiplatform::v1::GetAnnotationSpecRequest request;
  request.set_name(name);
  return connection_->GetAnnotationSpec(request);
}

StatusOr<google::cloud::aiplatform::v1::AnnotationSpec>
DatasetServiceClient::GetAnnotationSpec(
    google::cloud::aiplatform::v1::GetAnnotationSpecRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->GetAnnotationSpec(request);
}

StreamRange<google::cloud::aiplatform::v1::Annotation>
DatasetServiceClient::ListAnnotations(std::string const& parent, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::aiplatform::v1::ListAnnotationsRequest request;
  request.set_parent(parent);
  return connection_->ListAnnotations(request);
}

StreamRange<google::cloud::aiplatform::v1::Annotation>
DatasetServiceClient::ListAnnotations(
    google::cloud::aiplatform::v1::ListAnnotationsRequest request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->ListAnnotations(std::move(request));
}

StreamRange<google::cloud::location::Location>
DatasetServiceClient::ListLocations(
    google::cloud::location::ListLocationsRequest request, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->ListLocations(std::move(request));
}

StatusOr<google::cloud::location::Location> DatasetServiceClient::GetLocation(
    google::cloud::location::GetLocationRequest const& request, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->GetLocation(request);
}

StatusOr<google::iam::v1::Policy> DatasetServiceClient::SetIamPolicy(
    google::iam::v1::SetIamPolicyRequest const& request, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->SetIamPolicy(request);
}

StatusOr<google::iam::v1::Policy> DatasetServiceClient::GetIamPolicy(
    google::iam::v1::GetIamPolicyRequest const& request, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->GetIamPolicy(request);
}

StatusOr<google::iam::v1::TestIamPermissionsResponse>
DatasetServiceClient::TestIamPermissions(
    google::iam::v1::TestIamPermissionsRequest const& request, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->TestIamPermissions(request);
}

StreamRange<google::longrunning::Operation>
DatasetServiceClient::ListOperations(std::string const& name,
                                     std::string const& filter, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::longrunning::ListOperationsRequest request;
  request.set_name(name);
  request.set_filter(filter);
  return connection_->ListOperations(request);
}

StreamRange<google::longrunning::Operation>
DatasetServiceClient::ListOperations(
    google::longrunning::ListOperationsRequest request, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->ListOperations(std::move(request));
}

StatusOr<google::longrunning::Operation> DatasetServiceClient::GetOperation(
    std::string const& name, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::longrunning::GetOperationRequest request;
  request.set_name(name);
  return connection_->GetOperation(request);
}

StatusOr<google::longrunning::Operation> DatasetServiceClient::GetOperation(
    google::longrunning::GetOperationRequest const& request, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->GetOperation(request);
}

Status DatasetServiceClient::DeleteOperation(std::string const& name,
                                             Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::longrunning::DeleteOperationRequest request;
  request.set_name(name);
  return connection_->DeleteOperation(request);
}

Status DatasetServiceClient::DeleteOperation(
    google::longrunning::DeleteOperationRequest const& request, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->DeleteOperation(request);
}

Status DatasetServiceClient::CancelOperation(std::string const& name,
                                             Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::longrunning::CancelOperationRequest request;
  request.set_name(name);
  return connection_->CancelOperation(request);
}

Status DatasetServiceClient::CancelOperation(
    google::longrunning::CancelOperationRequest const& request, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->CancelOperation(request);
}

StatusOr<google::longrunning::Operation> DatasetServiceClient::WaitOperation(
    google::longrunning::WaitOperationRequest const& request, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->WaitOperation(request);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace aiplatform_v1
}  // namespace cloud
}  // namespace google
