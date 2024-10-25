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
// source: google/cloud/notebooks/v1/service.proto

#include "google/cloud/notebooks/v1/internal/notebook_metadata_decorator.h"
#include "google/cloud/grpc_options.h"
#include "google/cloud/internal/absl_str_cat_quiet.h"
#include "google/cloud/internal/api_client_header.h"
#include "google/cloud/internal/url_encode.h"
#include "google/cloud/status_or.h"
#include "google/cloud/notebooks/v1/service.grpc.pb.h"
#include <memory>
#include <string>
#include <utility>
#include <vector>

namespace google {
namespace cloud {
namespace notebooks_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

NotebookServiceMetadata::NotebookServiceMetadata(
    std::shared_ptr<NotebookServiceStub> child,
    std::multimap<std::string, std::string> fixed_metadata,
    std::string api_client_header)
    : child_(std::move(child)),
      fixed_metadata_(std::move(fixed_metadata)),
      api_client_header_(
          api_client_header.empty()
              ? google::cloud::internal::GeneratedLibClientHeader()
              : std::move(api_client_header)) {}

StatusOr<google::cloud::notebooks::v1::ListInstancesResponse>
NotebookServiceMetadata::ListInstances(
    grpc::ClientContext& context, Options const& options,
    google::cloud::notebooks::v1::ListInstancesRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->ListInstances(context, options, request);
}

StatusOr<google::cloud::notebooks::v1::Instance>
NotebookServiceMetadata::GetInstance(
    grpc::ClientContext& context, Options const& options,
    google::cloud::notebooks::v1::GetInstanceRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->GetInstance(context, options, request);
}

future<StatusOr<google::longrunning::Operation>>
NotebookServiceMetadata::AsyncCreateInstance(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::notebooks::v1::CreateInstanceRequest const& request) {
  SetMetadata(*context, *options,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->AsyncCreateInstance(cq, std::move(context), std::move(options),
                                     request);
}

StatusOr<google::longrunning::Operation>
NotebookServiceMetadata::CreateInstance(
    grpc::ClientContext& context, Options options,
    google::cloud::notebooks::v1::CreateInstanceRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->CreateInstance(context, options, request);
}

future<StatusOr<google::longrunning::Operation>>
NotebookServiceMetadata::AsyncRegisterInstance(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::notebooks::v1::RegisterInstanceRequest const& request) {
  SetMetadata(*context, *options,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->AsyncRegisterInstance(cq, std::move(context),
                                       std::move(options), request);
}

StatusOr<google::longrunning::Operation>
NotebookServiceMetadata::RegisterInstance(
    grpc::ClientContext& context, Options options,
    google::cloud::notebooks::v1::RegisterInstanceRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->RegisterInstance(context, options, request);
}

future<StatusOr<google::longrunning::Operation>>
NotebookServiceMetadata::AsyncSetInstanceAccelerator(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::notebooks::v1::SetInstanceAcceleratorRequest const&
        request) {
  SetMetadata(*context, *options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->AsyncSetInstanceAccelerator(cq, std::move(context),
                                             std::move(options), request);
}

StatusOr<google::longrunning::Operation>
NotebookServiceMetadata::SetInstanceAccelerator(
    grpc::ClientContext& context, Options options,
    google::cloud::notebooks::v1::SetInstanceAcceleratorRequest const&
        request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->SetInstanceAccelerator(context, options, request);
}

future<StatusOr<google::longrunning::Operation>>
NotebookServiceMetadata::AsyncSetInstanceMachineType(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::notebooks::v1::SetInstanceMachineTypeRequest const&
        request) {
  SetMetadata(*context, *options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->AsyncSetInstanceMachineType(cq, std::move(context),
                                             std::move(options), request);
}

StatusOr<google::longrunning::Operation>
NotebookServiceMetadata::SetInstanceMachineType(
    grpc::ClientContext& context, Options options,
    google::cloud::notebooks::v1::SetInstanceMachineTypeRequest const&
        request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->SetInstanceMachineType(context, options, request);
}

future<StatusOr<google::longrunning::Operation>>
NotebookServiceMetadata::AsyncUpdateInstanceConfig(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::notebooks::v1::UpdateInstanceConfigRequest const& request) {
  SetMetadata(*context, *options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->AsyncUpdateInstanceConfig(cq, std::move(context),
                                           std::move(options), request);
}

StatusOr<google::longrunning::Operation>
NotebookServiceMetadata::UpdateInstanceConfig(
    grpc::ClientContext& context, Options options,
    google::cloud::notebooks::v1::UpdateInstanceConfigRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->UpdateInstanceConfig(context, options, request);
}

future<StatusOr<google::longrunning::Operation>>
NotebookServiceMetadata::AsyncUpdateShieldedInstanceConfig(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::notebooks::v1::UpdateShieldedInstanceConfigRequest const&
        request) {
  SetMetadata(*context, *options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->AsyncUpdateShieldedInstanceConfig(cq, std::move(context),
                                                   std::move(options), request);
}

StatusOr<google::longrunning::Operation>
NotebookServiceMetadata::UpdateShieldedInstanceConfig(
    grpc::ClientContext& context, Options options,
    google::cloud::notebooks::v1::UpdateShieldedInstanceConfigRequest const&
        request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->UpdateShieldedInstanceConfig(context, options, request);
}

future<StatusOr<google::longrunning::Operation>>
NotebookServiceMetadata::AsyncSetInstanceLabels(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::notebooks::v1::SetInstanceLabelsRequest const& request) {
  SetMetadata(*context, *options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->AsyncSetInstanceLabels(cq, std::move(context),
                                        std::move(options), request);
}

StatusOr<google::longrunning::Operation>
NotebookServiceMetadata::SetInstanceLabels(
    grpc::ClientContext& context, Options options,
    google::cloud::notebooks::v1::SetInstanceLabelsRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->SetInstanceLabels(context, options, request);
}

StatusOr<google::cloud::notebooks::v1::UpdateInstanceMetadataItemsResponse>
NotebookServiceMetadata::UpdateInstanceMetadataItems(
    grpc::ClientContext& context, Options const& options,
    google::cloud::notebooks::v1::UpdateInstanceMetadataItemsRequest const&
        request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->UpdateInstanceMetadataItems(context, options, request);
}

future<StatusOr<google::longrunning::Operation>>
NotebookServiceMetadata::AsyncDeleteInstance(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::notebooks::v1::DeleteInstanceRequest const& request) {
  SetMetadata(*context, *options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->AsyncDeleteInstance(cq, std::move(context), std::move(options),
                                     request);
}

StatusOr<google::longrunning::Operation>
NotebookServiceMetadata::DeleteInstance(
    grpc::ClientContext& context, Options options,
    google::cloud::notebooks::v1::DeleteInstanceRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->DeleteInstance(context, options, request);
}

future<StatusOr<google::longrunning::Operation>>
NotebookServiceMetadata::AsyncStartInstance(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::notebooks::v1::StartInstanceRequest const& request) {
  SetMetadata(*context, *options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->AsyncStartInstance(cq, std::move(context), std::move(options),
                                    request);
}

StatusOr<google::longrunning::Operation> NotebookServiceMetadata::StartInstance(
    grpc::ClientContext& context, Options options,
    google::cloud::notebooks::v1::StartInstanceRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->StartInstance(context, options, request);
}

future<StatusOr<google::longrunning::Operation>>
NotebookServiceMetadata::AsyncStopInstance(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::notebooks::v1::StopInstanceRequest const& request) {
  SetMetadata(*context, *options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->AsyncStopInstance(cq, std::move(context), std::move(options),
                                   request);
}

StatusOr<google::longrunning::Operation> NotebookServiceMetadata::StopInstance(
    grpc::ClientContext& context, Options options,
    google::cloud::notebooks::v1::StopInstanceRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->StopInstance(context, options, request);
}

future<StatusOr<google::longrunning::Operation>>
NotebookServiceMetadata::AsyncResetInstance(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::notebooks::v1::ResetInstanceRequest const& request) {
  SetMetadata(*context, *options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->AsyncResetInstance(cq, std::move(context), std::move(options),
                                    request);
}

StatusOr<google::longrunning::Operation> NotebookServiceMetadata::ResetInstance(
    grpc::ClientContext& context, Options options,
    google::cloud::notebooks::v1::ResetInstanceRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->ResetInstance(context, options, request);
}

future<StatusOr<google::longrunning::Operation>>
NotebookServiceMetadata::AsyncReportInstanceInfo(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::notebooks::v1::ReportInstanceInfoRequest const& request) {
  SetMetadata(*context, *options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->AsyncReportInstanceInfo(cq, std::move(context),
                                         std::move(options), request);
}

StatusOr<google::longrunning::Operation>
NotebookServiceMetadata::ReportInstanceInfo(
    grpc::ClientContext& context, Options options,
    google::cloud::notebooks::v1::ReportInstanceInfoRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->ReportInstanceInfo(context, options, request);
}

StatusOr<google::cloud::notebooks::v1::IsInstanceUpgradeableResponse>
NotebookServiceMetadata::IsInstanceUpgradeable(
    grpc::ClientContext& context, Options const& options,
    google::cloud::notebooks::v1::IsInstanceUpgradeableRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("notebook_instance=",
                           internal::UrlEncode(request.notebook_instance())));
  return child_->IsInstanceUpgradeable(context, options, request);
}

StatusOr<google::cloud::notebooks::v1::GetInstanceHealthResponse>
NotebookServiceMetadata::GetInstanceHealth(
    grpc::ClientContext& context, Options const& options,
    google::cloud::notebooks::v1::GetInstanceHealthRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->GetInstanceHealth(context, options, request);
}

future<StatusOr<google::longrunning::Operation>>
NotebookServiceMetadata::AsyncUpgradeInstance(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::notebooks::v1::UpgradeInstanceRequest const& request) {
  SetMetadata(*context, *options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->AsyncUpgradeInstance(cq, std::move(context),
                                      std::move(options), request);
}

StatusOr<google::longrunning::Operation>
NotebookServiceMetadata::UpgradeInstance(
    grpc::ClientContext& context, Options options,
    google::cloud::notebooks::v1::UpgradeInstanceRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->UpgradeInstance(context, options, request);
}

future<StatusOr<google::longrunning::Operation>>
NotebookServiceMetadata::AsyncRollbackInstance(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::notebooks::v1::RollbackInstanceRequest const& request) {
  SetMetadata(*context, *options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->AsyncRollbackInstance(cq, std::move(context),
                                       std::move(options), request);
}

StatusOr<google::longrunning::Operation>
NotebookServiceMetadata::RollbackInstance(
    grpc::ClientContext& context, Options options,
    google::cloud::notebooks::v1::RollbackInstanceRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->RollbackInstance(context, options, request);
}

future<StatusOr<google::longrunning::Operation>>
NotebookServiceMetadata::AsyncDiagnoseInstance(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::notebooks::v1::DiagnoseInstanceRequest const& request) {
  SetMetadata(*context, *options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->AsyncDiagnoseInstance(cq, std::move(context),
                                       std::move(options), request);
}

StatusOr<google::longrunning::Operation>
NotebookServiceMetadata::DiagnoseInstance(
    grpc::ClientContext& context, Options options,
    google::cloud::notebooks::v1::DiagnoseInstanceRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->DiagnoseInstance(context, options, request);
}

future<StatusOr<google::longrunning::Operation>>
NotebookServiceMetadata::AsyncUpgradeInstanceInternal(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::notebooks::v1::UpgradeInstanceInternalRequest const&
        request) {
  SetMetadata(*context, *options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->AsyncUpgradeInstanceInternal(cq, std::move(context),
                                              std::move(options), request);
}

StatusOr<google::longrunning::Operation>
NotebookServiceMetadata::UpgradeInstanceInternal(
    grpc::ClientContext& context, Options options,
    google::cloud::notebooks::v1::UpgradeInstanceInternalRequest const&
        request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->UpgradeInstanceInternal(context, options, request);
}

StatusOr<google::cloud::notebooks::v1::ListEnvironmentsResponse>
NotebookServiceMetadata::ListEnvironments(
    grpc::ClientContext& context, Options const& options,
    google::cloud::notebooks::v1::ListEnvironmentsRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->ListEnvironments(context, options, request);
}

StatusOr<google::cloud::notebooks::v1::Environment>
NotebookServiceMetadata::GetEnvironment(
    grpc::ClientContext& context, Options const& options,
    google::cloud::notebooks::v1::GetEnvironmentRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->GetEnvironment(context, options, request);
}

future<StatusOr<google::longrunning::Operation>>
NotebookServiceMetadata::AsyncCreateEnvironment(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::notebooks::v1::CreateEnvironmentRequest const& request) {
  SetMetadata(*context, *options,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->AsyncCreateEnvironment(cq, std::move(context),
                                        std::move(options), request);
}

StatusOr<google::longrunning::Operation>
NotebookServiceMetadata::CreateEnvironment(
    grpc::ClientContext& context, Options options,
    google::cloud::notebooks::v1::CreateEnvironmentRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->CreateEnvironment(context, options, request);
}

future<StatusOr<google::longrunning::Operation>>
NotebookServiceMetadata::AsyncDeleteEnvironment(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::notebooks::v1::DeleteEnvironmentRequest const& request) {
  SetMetadata(*context, *options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->AsyncDeleteEnvironment(cq, std::move(context),
                                        std::move(options), request);
}

StatusOr<google::longrunning::Operation>
NotebookServiceMetadata::DeleteEnvironment(
    grpc::ClientContext& context, Options options,
    google::cloud::notebooks::v1::DeleteEnvironmentRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->DeleteEnvironment(context, options, request);
}

StatusOr<google::cloud::notebooks::v1::ListSchedulesResponse>
NotebookServiceMetadata::ListSchedules(
    grpc::ClientContext& context, Options const& options,
    google::cloud::notebooks::v1::ListSchedulesRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->ListSchedules(context, options, request);
}

StatusOr<google::cloud::notebooks::v1::Schedule>
NotebookServiceMetadata::GetSchedule(
    grpc::ClientContext& context, Options const& options,
    google::cloud::notebooks::v1::GetScheduleRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->GetSchedule(context, options, request);
}

future<StatusOr<google::longrunning::Operation>>
NotebookServiceMetadata::AsyncDeleteSchedule(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::notebooks::v1::DeleteScheduleRequest const& request) {
  SetMetadata(*context, *options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->AsyncDeleteSchedule(cq, std::move(context), std::move(options),
                                     request);
}

StatusOr<google::longrunning::Operation>
NotebookServiceMetadata::DeleteSchedule(
    grpc::ClientContext& context, Options options,
    google::cloud::notebooks::v1::DeleteScheduleRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->DeleteSchedule(context, options, request);
}

future<StatusOr<google::longrunning::Operation>>
NotebookServiceMetadata::AsyncCreateSchedule(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::notebooks::v1::CreateScheduleRequest const& request) {
  SetMetadata(*context, *options,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->AsyncCreateSchedule(cq, std::move(context), std::move(options),
                                     request);
}

StatusOr<google::longrunning::Operation>
NotebookServiceMetadata::CreateSchedule(
    grpc::ClientContext& context, Options options,
    google::cloud::notebooks::v1::CreateScheduleRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->CreateSchedule(context, options, request);
}

future<StatusOr<google::longrunning::Operation>>
NotebookServiceMetadata::AsyncTriggerSchedule(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::notebooks::v1::TriggerScheduleRequest const& request) {
  SetMetadata(*context, *options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->AsyncTriggerSchedule(cq, std::move(context),
                                      std::move(options), request);
}

StatusOr<google::longrunning::Operation>
NotebookServiceMetadata::TriggerSchedule(
    grpc::ClientContext& context, Options options,
    google::cloud::notebooks::v1::TriggerScheduleRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->TriggerSchedule(context, options, request);
}

StatusOr<google::cloud::notebooks::v1::ListExecutionsResponse>
NotebookServiceMetadata::ListExecutions(
    grpc::ClientContext& context, Options const& options,
    google::cloud::notebooks::v1::ListExecutionsRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->ListExecutions(context, options, request);
}

StatusOr<google::cloud::notebooks::v1::Execution>
NotebookServiceMetadata::GetExecution(
    grpc::ClientContext& context, Options const& options,
    google::cloud::notebooks::v1::GetExecutionRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->GetExecution(context, options, request);
}

future<StatusOr<google::longrunning::Operation>>
NotebookServiceMetadata::AsyncDeleteExecution(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::notebooks::v1::DeleteExecutionRequest const& request) {
  SetMetadata(*context, *options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->AsyncDeleteExecution(cq, std::move(context),
                                      std::move(options), request);
}

StatusOr<google::longrunning::Operation>
NotebookServiceMetadata::DeleteExecution(
    grpc::ClientContext& context, Options options,
    google::cloud::notebooks::v1::DeleteExecutionRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->DeleteExecution(context, options, request);
}

future<StatusOr<google::longrunning::Operation>>
NotebookServiceMetadata::AsyncCreateExecution(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::notebooks::v1::CreateExecutionRequest const& request) {
  SetMetadata(*context, *options,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->AsyncCreateExecution(cq, std::move(context),
                                      std::move(options), request);
}

StatusOr<google::longrunning::Operation>
NotebookServiceMetadata::CreateExecution(
    grpc::ClientContext& context, Options options,
    google::cloud::notebooks::v1::CreateExecutionRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->CreateExecution(context, options, request);
}

StatusOr<google::cloud::location::ListLocationsResponse>
NotebookServiceMetadata::ListLocations(
    grpc::ClientContext& context, Options const& options,
    google::cloud::location::ListLocationsRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->ListLocations(context, options, request);
}

StatusOr<google::cloud::location::Location>
NotebookServiceMetadata::GetLocation(
    grpc::ClientContext& context, Options const& options,
    google::cloud::location::GetLocationRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->GetLocation(context, options, request);
}

StatusOr<google::iam::v1::Policy> NotebookServiceMetadata::SetIamPolicy(
    grpc::ClientContext& context, Options const& options,
    google::iam::v1::SetIamPolicyRequest const& request) {
  SetMetadata(
      context, options,
      absl::StrCat("resource=", internal::UrlEncode(request.resource())));
  return child_->SetIamPolicy(context, options, request);
}

StatusOr<google::iam::v1::Policy> NotebookServiceMetadata::GetIamPolicy(
    grpc::ClientContext& context, Options const& options,
    google::iam::v1::GetIamPolicyRequest const& request) {
  SetMetadata(
      context, options,
      absl::StrCat("resource=", internal::UrlEncode(request.resource())));
  return child_->GetIamPolicy(context, options, request);
}

StatusOr<google::iam::v1::TestIamPermissionsResponse>
NotebookServiceMetadata::TestIamPermissions(
    grpc::ClientContext& context, Options const& options,
    google::iam::v1::TestIamPermissionsRequest const& request) {
  SetMetadata(
      context, options,
      absl::StrCat("resource=", internal::UrlEncode(request.resource())));
  return child_->TestIamPermissions(context, options, request);
}

StatusOr<google::longrunning::ListOperationsResponse>
NotebookServiceMetadata::ListOperations(
    grpc::ClientContext& context, Options const& options,
    google::longrunning::ListOperationsRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->ListOperations(context, options, request);
}

StatusOr<google::longrunning::Operation> NotebookServiceMetadata::GetOperation(
    grpc::ClientContext& context, Options const& options,
    google::longrunning::GetOperationRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->GetOperation(context, options, request);
}

Status NotebookServiceMetadata::DeleteOperation(
    grpc::ClientContext& context, Options const& options,
    google::longrunning::DeleteOperationRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->DeleteOperation(context, options, request);
}

Status NotebookServiceMetadata::CancelOperation(
    grpc::ClientContext& context, Options const& options,
    google::longrunning::CancelOperationRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->CancelOperation(context, options, request);
}

future<StatusOr<google::longrunning::Operation>>
NotebookServiceMetadata::AsyncGetOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::longrunning::GetOperationRequest const& request) {
  SetMetadata(*context, *options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->AsyncGetOperation(cq, std::move(context), std::move(options),
                                   request);
}

future<Status> NotebookServiceMetadata::AsyncCancelOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::longrunning::CancelOperationRequest const& request) {
  SetMetadata(*context, *options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->AsyncCancelOperation(cq, std::move(context),
                                      std::move(options), request);
}

void NotebookServiceMetadata::SetMetadata(grpc::ClientContext& context,
                                          Options const& options,
                                          std::string const& request_params) {
  context.AddMetadata("x-goog-request-params", request_params);
  SetMetadata(context, options);
}

void NotebookServiceMetadata::SetMetadata(grpc::ClientContext& context,
                                          Options const& options) {
  google::cloud::internal::SetMetadata(context, options, fixed_metadata_,
                                       api_client_header_);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace notebooks_v1_internal
}  // namespace cloud
}  // namespace google
