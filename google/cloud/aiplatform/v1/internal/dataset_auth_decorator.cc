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

#include "google/cloud/aiplatform/v1/internal/dataset_auth_decorator.h"
#include "google/cloud/aiplatform/v1/dataset_service.grpc.pb.h"
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace aiplatform_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

DatasetServiceAuth::DatasetServiceAuth(
    std::shared_ptr<google::cloud::internal::GrpcAuthenticationStrategy> auth,
    std::shared_ptr<DatasetServiceStub> child)
    : auth_(std::move(auth)), child_(std::move(child)) {}

future<StatusOr<google::longrunning::Operation>>
DatasetServiceAuth::AsyncCreateDataset(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::aiplatform::v1::CreateDatasetRequest const& request) {
  using ReturnType = StatusOr<google::longrunning::Operation>;
  return auth_->AsyncConfigureContext(std::move(context))
      .then([cq, child = child_, options = std::move(options),
             request](future<StatusOr<std::shared_ptr<grpc::ClientContext>>>
                          f) mutable {
        auto context = f.get();
        if (!context) {
          return make_ready_future(ReturnType(std::move(context).status()));
        }
        return child->AsyncCreateDataset(cq, *std::move(context),
                                         std::move(options), request);
      });
}

StatusOr<google::longrunning::Operation> DatasetServiceAuth::CreateDataset(
    grpc::ClientContext& context, Options options,
    google::cloud::aiplatform::v1::CreateDatasetRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->CreateDataset(context, options, request);
}

StatusOr<google::cloud::aiplatform::v1::Dataset> DatasetServiceAuth::GetDataset(
    grpc::ClientContext& context, Options const& options,
    google::cloud::aiplatform::v1::GetDatasetRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->GetDataset(context, options, request);
}

StatusOr<google::cloud::aiplatform::v1::Dataset>
DatasetServiceAuth::UpdateDataset(
    grpc::ClientContext& context, Options const& options,
    google::cloud::aiplatform::v1::UpdateDatasetRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->UpdateDataset(context, options, request);
}

StatusOr<google::cloud::aiplatform::v1::ListDatasetsResponse>
DatasetServiceAuth::ListDatasets(
    grpc::ClientContext& context, Options const& options,
    google::cloud::aiplatform::v1::ListDatasetsRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->ListDatasets(context, options, request);
}

future<StatusOr<google::longrunning::Operation>>
DatasetServiceAuth::AsyncDeleteDataset(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::aiplatform::v1::DeleteDatasetRequest const& request) {
  using ReturnType = StatusOr<google::longrunning::Operation>;
  return auth_->AsyncConfigureContext(std::move(context))
      .then([cq, child = child_, options = std::move(options),
             request](future<StatusOr<std::shared_ptr<grpc::ClientContext>>>
                          f) mutable {
        auto context = f.get();
        if (!context) {
          return make_ready_future(ReturnType(std::move(context).status()));
        }
        return child->AsyncDeleteDataset(cq, *std::move(context),
                                         std::move(options), request);
      });
}

StatusOr<google::longrunning::Operation> DatasetServiceAuth::DeleteDataset(
    grpc::ClientContext& context, Options options,
    google::cloud::aiplatform::v1::DeleteDatasetRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->DeleteDataset(context, options, request);
}

future<StatusOr<google::longrunning::Operation>>
DatasetServiceAuth::AsyncImportData(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::aiplatform::v1::ImportDataRequest const& request) {
  using ReturnType = StatusOr<google::longrunning::Operation>;
  return auth_->AsyncConfigureContext(std::move(context))
      .then([cq, child = child_, options = std::move(options),
             request](future<StatusOr<std::shared_ptr<grpc::ClientContext>>>
                          f) mutable {
        auto context = f.get();
        if (!context) {
          return make_ready_future(ReturnType(std::move(context).status()));
        }
        return child->AsyncImportData(cq, *std::move(context),
                                      std::move(options), request);
      });
}

StatusOr<google::longrunning::Operation> DatasetServiceAuth::ImportData(
    grpc::ClientContext& context, Options options,
    google::cloud::aiplatform::v1::ImportDataRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->ImportData(context, options, request);
}

future<StatusOr<google::longrunning::Operation>>
DatasetServiceAuth::AsyncExportData(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::aiplatform::v1::ExportDataRequest const& request) {
  using ReturnType = StatusOr<google::longrunning::Operation>;
  return auth_->AsyncConfigureContext(std::move(context))
      .then([cq, child = child_, options = std::move(options),
             request](future<StatusOr<std::shared_ptr<grpc::ClientContext>>>
                          f) mutable {
        auto context = f.get();
        if (!context) {
          return make_ready_future(ReturnType(std::move(context).status()));
        }
        return child->AsyncExportData(cq, *std::move(context),
                                      std::move(options), request);
      });
}

StatusOr<google::longrunning::Operation> DatasetServiceAuth::ExportData(
    grpc::ClientContext& context, Options options,
    google::cloud::aiplatform::v1::ExportDataRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->ExportData(context, options, request);
}

future<StatusOr<google::longrunning::Operation>>
DatasetServiceAuth::AsyncCreateDatasetVersion(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::aiplatform::v1::CreateDatasetVersionRequest const& request) {
  using ReturnType = StatusOr<google::longrunning::Operation>;
  return auth_->AsyncConfigureContext(std::move(context))
      .then([cq, child = child_, options = std::move(options),
             request](future<StatusOr<std::shared_ptr<grpc::ClientContext>>>
                          f) mutable {
        auto context = f.get();
        if (!context) {
          return make_ready_future(ReturnType(std::move(context).status()));
        }
        return child->AsyncCreateDatasetVersion(cq, *std::move(context),
                                                std::move(options), request);
      });
}

StatusOr<google::longrunning::Operation>
DatasetServiceAuth::CreateDatasetVersion(
    grpc::ClientContext& context, Options options,
    google::cloud::aiplatform::v1::CreateDatasetVersionRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->CreateDatasetVersion(context, options, request);
}

StatusOr<google::cloud::aiplatform::v1::DatasetVersion>
DatasetServiceAuth::UpdateDatasetVersion(
    grpc::ClientContext& context, Options const& options,
    google::cloud::aiplatform::v1::UpdateDatasetVersionRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->UpdateDatasetVersion(context, options, request);
}

future<StatusOr<google::longrunning::Operation>>
DatasetServiceAuth::AsyncDeleteDatasetVersion(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::aiplatform::v1::DeleteDatasetVersionRequest const& request) {
  using ReturnType = StatusOr<google::longrunning::Operation>;
  return auth_->AsyncConfigureContext(std::move(context))
      .then([cq, child = child_, options = std::move(options),
             request](future<StatusOr<std::shared_ptr<grpc::ClientContext>>>
                          f) mutable {
        auto context = f.get();
        if (!context) {
          return make_ready_future(ReturnType(std::move(context).status()));
        }
        return child->AsyncDeleteDatasetVersion(cq, *std::move(context),
                                                std::move(options), request);
      });
}

StatusOr<google::longrunning::Operation>
DatasetServiceAuth::DeleteDatasetVersion(
    grpc::ClientContext& context, Options options,
    google::cloud::aiplatform::v1::DeleteDatasetVersionRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->DeleteDatasetVersion(context, options, request);
}

StatusOr<google::cloud::aiplatform::v1::DatasetVersion>
DatasetServiceAuth::GetDatasetVersion(
    grpc::ClientContext& context, Options const& options,
    google::cloud::aiplatform::v1::GetDatasetVersionRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->GetDatasetVersion(context, options, request);
}

StatusOr<google::cloud::aiplatform::v1::ListDatasetVersionsResponse>
DatasetServiceAuth::ListDatasetVersions(
    grpc::ClientContext& context, Options const& options,
    google::cloud::aiplatform::v1::ListDatasetVersionsRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->ListDatasetVersions(context, options, request);
}

future<StatusOr<google::longrunning::Operation>>
DatasetServiceAuth::AsyncRestoreDatasetVersion(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::aiplatform::v1::RestoreDatasetVersionRequest const&
        request) {
  using ReturnType = StatusOr<google::longrunning::Operation>;
  return auth_->AsyncConfigureContext(std::move(context))
      .then([cq, child = child_, options = std::move(options),
             request](future<StatusOr<std::shared_ptr<grpc::ClientContext>>>
                          f) mutable {
        auto context = f.get();
        if (!context) {
          return make_ready_future(ReturnType(std::move(context).status()));
        }
        return child->AsyncRestoreDatasetVersion(cq, *std::move(context),
                                                 std::move(options), request);
      });
}

StatusOr<google::longrunning::Operation>
DatasetServiceAuth::RestoreDatasetVersion(
    grpc::ClientContext& context, Options options,
    google::cloud::aiplatform::v1::RestoreDatasetVersionRequest const&
        request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->RestoreDatasetVersion(context, options, request);
}

StatusOr<google::cloud::aiplatform::v1::ListDataItemsResponse>
DatasetServiceAuth::ListDataItems(
    grpc::ClientContext& context, Options const& options,
    google::cloud::aiplatform::v1::ListDataItemsRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->ListDataItems(context, options, request);
}

StatusOr<google::cloud::aiplatform::v1::SearchDataItemsResponse>
DatasetServiceAuth::SearchDataItems(
    grpc::ClientContext& context, Options const& options,
    google::cloud::aiplatform::v1::SearchDataItemsRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->SearchDataItems(context, options, request);
}

StatusOr<google::cloud::aiplatform::v1::ListSavedQueriesResponse>
DatasetServiceAuth::ListSavedQueries(
    grpc::ClientContext& context, Options const& options,
    google::cloud::aiplatform::v1::ListSavedQueriesRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->ListSavedQueries(context, options, request);
}

future<StatusOr<google::longrunning::Operation>>
DatasetServiceAuth::AsyncDeleteSavedQuery(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::aiplatform::v1::DeleteSavedQueryRequest const& request) {
  using ReturnType = StatusOr<google::longrunning::Operation>;
  return auth_->AsyncConfigureContext(std::move(context))
      .then([cq, child = child_, options = std::move(options),
             request](future<StatusOr<std::shared_ptr<grpc::ClientContext>>>
                          f) mutable {
        auto context = f.get();
        if (!context) {
          return make_ready_future(ReturnType(std::move(context).status()));
        }
        return child->AsyncDeleteSavedQuery(cq, *std::move(context),
                                            std::move(options), request);
      });
}

StatusOr<google::longrunning::Operation> DatasetServiceAuth::DeleteSavedQuery(
    grpc::ClientContext& context, Options options,
    google::cloud::aiplatform::v1::DeleteSavedQueryRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->DeleteSavedQuery(context, options, request);
}

StatusOr<google::cloud::aiplatform::v1::AnnotationSpec>
DatasetServiceAuth::GetAnnotationSpec(
    grpc::ClientContext& context, Options const& options,
    google::cloud::aiplatform::v1::GetAnnotationSpecRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->GetAnnotationSpec(context, options, request);
}

StatusOr<google::cloud::aiplatform::v1::ListAnnotationsResponse>
DatasetServiceAuth::ListAnnotations(
    grpc::ClientContext& context, Options const& options,
    google::cloud::aiplatform::v1::ListAnnotationsRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->ListAnnotations(context, options, request);
}

StatusOr<google::cloud::location::ListLocationsResponse>
DatasetServiceAuth::ListLocations(
    grpc::ClientContext& context, Options const& options,
    google::cloud::location::ListLocationsRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->ListLocations(context, options, request);
}

StatusOr<google::cloud::location::Location> DatasetServiceAuth::GetLocation(
    grpc::ClientContext& context, Options const& options,
    google::cloud::location::GetLocationRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->GetLocation(context, options, request);
}

StatusOr<google::iam::v1::Policy> DatasetServiceAuth::SetIamPolicy(
    grpc::ClientContext& context, Options const& options,
    google::iam::v1::SetIamPolicyRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->SetIamPolicy(context, options, request);
}

StatusOr<google::iam::v1::Policy> DatasetServiceAuth::GetIamPolicy(
    grpc::ClientContext& context, Options const& options,
    google::iam::v1::GetIamPolicyRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->GetIamPolicy(context, options, request);
}

StatusOr<google::iam::v1::TestIamPermissionsResponse>
DatasetServiceAuth::TestIamPermissions(
    grpc::ClientContext& context, Options const& options,
    google::iam::v1::TestIamPermissionsRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->TestIamPermissions(context, options, request);
}

StatusOr<google::longrunning::ListOperationsResponse>
DatasetServiceAuth::ListOperations(
    grpc::ClientContext& context, Options const& options,
    google::longrunning::ListOperationsRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->ListOperations(context, options, request);
}

StatusOr<google::longrunning::Operation> DatasetServiceAuth::GetOperation(
    grpc::ClientContext& context, Options const& options,
    google::longrunning::GetOperationRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->GetOperation(context, options, request);
}

Status DatasetServiceAuth::DeleteOperation(
    grpc::ClientContext& context, Options const& options,
    google::longrunning::DeleteOperationRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->DeleteOperation(context, options, request);
}

Status DatasetServiceAuth::CancelOperation(
    grpc::ClientContext& context, Options const& options,
    google::longrunning::CancelOperationRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->CancelOperation(context, options, request);
}

StatusOr<google::longrunning::Operation> DatasetServiceAuth::WaitOperation(
    grpc::ClientContext& context, Options const& options,
    google::longrunning::WaitOperationRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->WaitOperation(context, options, request);
}

future<StatusOr<google::longrunning::Operation>>
DatasetServiceAuth::AsyncGetOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::longrunning::GetOperationRequest const& request) {
  using ReturnType = StatusOr<google::longrunning::Operation>;
  return auth_->AsyncConfigureContext(std::move(context))
      .then([cq, child = child_, options = std::move(options),
             request](future<StatusOr<std::shared_ptr<grpc::ClientContext>>>
                          f) mutable {
        auto context = f.get();
        if (!context) {
          return make_ready_future(ReturnType(std::move(context).status()));
        }
        return child->AsyncGetOperation(cq, *std::move(context),
                                        std::move(options), request);
      });
}

future<Status> DatasetServiceAuth::AsyncCancelOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::longrunning::CancelOperationRequest const& request) {
  return auth_->AsyncConfigureContext(std::move(context))
      .then([cq, child = child_, options = std::move(options),
             request](future<StatusOr<std::shared_ptr<grpc::ClientContext>>>
                          f) mutable {
        auto context = f.get();
        if (!context) return make_ready_future(std::move(context).status());
        return child->AsyncCancelOperation(cq, *std::move(context),
                                           std::move(options), request);
      });
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace aiplatform_v1_internal
}  // namespace cloud
}  // namespace google
