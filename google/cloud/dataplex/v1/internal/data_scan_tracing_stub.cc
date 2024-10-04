// Copyright 2024 Google LLC
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
// source: google/cloud/dataplex/v1/datascans.proto

#include "google/cloud/dataplex/v1/internal/data_scan_tracing_stub.h"
#include "google/cloud/internal/grpc_opentelemetry.h"
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace dataplex_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

DataScanServiceTracingStub::DataScanServiceTracingStub(
    std::shared_ptr<DataScanServiceStub> child)
    : child_(std::move(child)), propagator_(internal::MakePropagator()) {}

future<StatusOr<google::longrunning::Operation>>
DataScanServiceTracingStub::AsyncCreateDataScan(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::dataplex::v1::CreateDataScanRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.cloud.dataplex.v1.DataScanService",
                                     "CreateDataScan");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto f =
      child_->AsyncCreateDataScan(cq, context, std::move(options), request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

StatusOr<google::longrunning::Operation>
DataScanServiceTracingStub::CreateDataScan(
    grpc::ClientContext& context, Options options,
    google::cloud::dataplex::v1::CreateDataScanRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.cloud.dataplex.v1.DataScanService",
                                     "CreateDataScan");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->CreateDataScan(context, options, request));
}

future<StatusOr<google::longrunning::Operation>>
DataScanServiceTracingStub::AsyncUpdateDataScan(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::dataplex::v1::UpdateDataScanRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.cloud.dataplex.v1.DataScanService",
                                     "UpdateDataScan");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto f =
      child_->AsyncUpdateDataScan(cq, context, std::move(options), request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

StatusOr<google::longrunning::Operation>
DataScanServiceTracingStub::UpdateDataScan(
    grpc::ClientContext& context, Options options,
    google::cloud::dataplex::v1::UpdateDataScanRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.cloud.dataplex.v1.DataScanService",
                                     "UpdateDataScan");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->UpdateDataScan(context, options, request));
}

future<StatusOr<google::longrunning::Operation>>
DataScanServiceTracingStub::AsyncDeleteDataScan(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::dataplex::v1::DeleteDataScanRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.cloud.dataplex.v1.DataScanService",
                                     "DeleteDataScan");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto f =
      child_->AsyncDeleteDataScan(cq, context, std::move(options), request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

StatusOr<google::longrunning::Operation>
DataScanServiceTracingStub::DeleteDataScan(
    grpc::ClientContext& context, Options options,
    google::cloud::dataplex::v1::DeleteDataScanRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.cloud.dataplex.v1.DataScanService",
                                     "DeleteDataScan");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->DeleteDataScan(context, options, request));
}

StatusOr<google::cloud::dataplex::v1::DataScan>
DataScanServiceTracingStub::GetDataScan(
    grpc::ClientContext& context, Options const& options,
    google::cloud::dataplex::v1::GetDataScanRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.cloud.dataplex.v1.DataScanService",
                                     "GetDataScan");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->GetDataScan(context, options, request));
}

StatusOr<google::cloud::dataplex::v1::ListDataScansResponse>
DataScanServiceTracingStub::ListDataScans(
    grpc::ClientContext& context, Options const& options,
    google::cloud::dataplex::v1::ListDataScansRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.cloud.dataplex.v1.DataScanService",
                                     "ListDataScans");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->ListDataScans(context, options, request));
}

StatusOr<google::cloud::dataplex::v1::RunDataScanResponse>
DataScanServiceTracingStub::RunDataScan(
    grpc::ClientContext& context, Options const& options,
    google::cloud::dataplex::v1::RunDataScanRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.cloud.dataplex.v1.DataScanService",
                                     "RunDataScan");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->RunDataScan(context, options, request));
}

StatusOr<google::cloud::dataplex::v1::DataScanJob>
DataScanServiceTracingStub::GetDataScanJob(
    grpc::ClientContext& context, Options const& options,
    google::cloud::dataplex::v1::GetDataScanJobRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.cloud.dataplex.v1.DataScanService",
                                     "GetDataScanJob");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->GetDataScanJob(context, options, request));
}

StatusOr<google::cloud::dataplex::v1::ListDataScanJobsResponse>
DataScanServiceTracingStub::ListDataScanJobs(
    grpc::ClientContext& context, Options const& options,
    google::cloud::dataplex::v1::ListDataScanJobsRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.cloud.dataplex.v1.DataScanService",
                                     "ListDataScanJobs");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->ListDataScanJobs(context, options, request));
}

StatusOr<google::cloud::dataplex::v1::GenerateDataQualityRulesResponse>
DataScanServiceTracingStub::GenerateDataQualityRules(
    grpc::ClientContext& context, Options const& options,
    google::cloud::dataplex::v1::GenerateDataQualityRulesRequest const&
        request) {
  auto span = internal::MakeSpanGrpc("google.cloud.dataplex.v1.DataScanService",
                                     "GenerateDataQualityRules");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(
      context, *span,
      child_->GenerateDataQualityRules(context, options, request));
}

StatusOr<google::cloud::location::ListLocationsResponse>
DataScanServiceTracingStub::ListLocations(
    grpc::ClientContext& context, Options const& options,
    google::cloud::location::ListLocationsRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.cloud.dataplex.v1.DataScanService",
                                     "ListLocations");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->ListLocations(context, options, request));
}

StatusOr<google::cloud::location::Location>
DataScanServiceTracingStub::GetLocation(
    grpc::ClientContext& context, Options const& options,
    google::cloud::location::GetLocationRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.cloud.dataplex.v1.DataScanService",
                                     "GetLocation");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->GetLocation(context, options, request));
}

StatusOr<google::iam::v1::Policy> DataScanServiceTracingStub::SetIamPolicy(
    grpc::ClientContext& context, Options const& options,
    google::iam::v1::SetIamPolicyRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.cloud.dataplex.v1.DataScanService",
                                     "SetIamPolicy");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->SetIamPolicy(context, options, request));
}

StatusOr<google::iam::v1::Policy> DataScanServiceTracingStub::GetIamPolicy(
    grpc::ClientContext& context, Options const& options,
    google::iam::v1::GetIamPolicyRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.cloud.dataplex.v1.DataScanService",
                                     "GetIamPolicy");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->GetIamPolicy(context, options, request));
}

StatusOr<google::iam::v1::TestIamPermissionsResponse>
DataScanServiceTracingStub::TestIamPermissions(
    grpc::ClientContext& context, Options const& options,
    google::iam::v1::TestIamPermissionsRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.cloud.dataplex.v1.DataScanService",
                                     "TestIamPermissions");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(
      context, *span, child_->TestIamPermissions(context, options, request));
}

StatusOr<google::longrunning::ListOperationsResponse>
DataScanServiceTracingStub::ListOperations(
    grpc::ClientContext& context, Options const& options,
    google::longrunning::ListOperationsRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.cloud.dataplex.v1.DataScanService",
                                     "ListOperations");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->ListOperations(context, options, request));
}

StatusOr<google::longrunning::Operation>
DataScanServiceTracingStub::GetOperation(
    grpc::ClientContext& context, Options const& options,
    google::longrunning::GetOperationRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.cloud.dataplex.v1.DataScanService",
                                     "GetOperation");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->GetOperation(context, options, request));
}

Status DataScanServiceTracingStub::DeleteOperation(
    grpc::ClientContext& context, Options const& options,
    google::longrunning::DeleteOperationRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.cloud.dataplex.v1.DataScanService",
                                     "DeleteOperation");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->DeleteOperation(context, options, request));
}

Status DataScanServiceTracingStub::CancelOperation(
    grpc::ClientContext& context, Options const& options,
    google::longrunning::CancelOperationRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.cloud.dataplex.v1.DataScanService",
                                     "CancelOperation");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->CancelOperation(context, options, request));
}

future<StatusOr<google::longrunning::Operation>>
DataScanServiceTracingStub::AsyncGetOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::longrunning::GetOperationRequest const& request) {
  auto span =
      internal::MakeSpanGrpc("google.longrunning.Operations", "GetOperation");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto f = child_->AsyncGetOperation(cq, context, std::move(options), request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

future<Status> DataScanServiceTracingStub::AsyncCancelOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::longrunning::CancelOperationRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.longrunning.Operations",
                                     "CancelOperation");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto f =
      child_->AsyncCancelOperation(cq, context, std::move(options), request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

std::shared_ptr<DataScanServiceStub> MakeDataScanServiceTracingStub(
    std::shared_ptr<DataScanServiceStub> stub) {
#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
  return std::make_shared<DataScanServiceTracingStub>(std::move(stub));
#else
  return stub;
#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace dataplex_v1_internal
}  // namespace cloud
}  // namespace google
