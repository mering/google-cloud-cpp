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
// source: google/devtools/cloudbuild/v1/cloudbuild.proto

#include "google/cloud/cloudbuild/v1/internal/cloud_build_auth_decorator.h"
#include "google/devtools/cloudbuild/v1/cloudbuild.grpc.pb.h"
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace cloudbuild_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

CloudBuildAuth::CloudBuildAuth(
    std::shared_ptr<google::cloud::internal::GrpcAuthenticationStrategy> auth,
    std::shared_ptr<CloudBuildStub> child)
    : auth_(std::move(auth)), child_(std::move(child)) {}

future<StatusOr<google::longrunning::Operation>>
CloudBuildAuth::AsyncCreateBuild(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::devtools::cloudbuild::v1::CreateBuildRequest const& request) {
  using ReturnType = StatusOr<google::longrunning::Operation>;
  return auth_->AsyncConfigureContext(std::move(context))
      .then([cq, child = child_, options = std::move(options),
             request](future<StatusOr<std::shared_ptr<grpc::ClientContext>>>
                          f) mutable {
        auto context = f.get();
        if (!context) {
          return make_ready_future(ReturnType(std::move(context).status()));
        }
        return child->AsyncCreateBuild(cq, *std::move(context),
                                       std::move(options), request);
      });
}

StatusOr<google::longrunning::Operation> CloudBuildAuth::CreateBuild(
    grpc::ClientContext& context, Options options,
    google::devtools::cloudbuild::v1::CreateBuildRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->CreateBuild(context, options, request);
}

StatusOr<google::devtools::cloudbuild::v1::Build> CloudBuildAuth::GetBuild(
    grpc::ClientContext& context, Options const& options,
    google::devtools::cloudbuild::v1::GetBuildRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->GetBuild(context, options, request);
}

StatusOr<google::devtools::cloudbuild::v1::ListBuildsResponse>
CloudBuildAuth::ListBuilds(
    grpc::ClientContext& context, Options const& options,
    google::devtools::cloudbuild::v1::ListBuildsRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->ListBuilds(context, options, request);
}

StatusOr<google::devtools::cloudbuild::v1::Build> CloudBuildAuth::CancelBuild(
    grpc::ClientContext& context, Options const& options,
    google::devtools::cloudbuild::v1::CancelBuildRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->CancelBuild(context, options, request);
}

future<StatusOr<google::longrunning::Operation>>
CloudBuildAuth::AsyncRetryBuild(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::devtools::cloudbuild::v1::RetryBuildRequest const& request) {
  using ReturnType = StatusOr<google::longrunning::Operation>;
  return auth_->AsyncConfigureContext(std::move(context))
      .then([cq, child = child_, options = std::move(options),
             request](future<StatusOr<std::shared_ptr<grpc::ClientContext>>>
                          f) mutable {
        auto context = f.get();
        if (!context) {
          return make_ready_future(ReturnType(std::move(context).status()));
        }
        return child->AsyncRetryBuild(cq, *std::move(context),
                                      std::move(options), request);
      });
}

StatusOr<google::longrunning::Operation> CloudBuildAuth::RetryBuild(
    grpc::ClientContext& context, Options options,
    google::devtools::cloudbuild::v1::RetryBuildRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->RetryBuild(context, options, request);
}

future<StatusOr<google::longrunning::Operation>>
CloudBuildAuth::AsyncApproveBuild(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::devtools::cloudbuild::v1::ApproveBuildRequest const& request) {
  using ReturnType = StatusOr<google::longrunning::Operation>;
  return auth_->AsyncConfigureContext(std::move(context))
      .then([cq, child = child_, options = std::move(options),
             request](future<StatusOr<std::shared_ptr<grpc::ClientContext>>>
                          f) mutable {
        auto context = f.get();
        if (!context) {
          return make_ready_future(ReturnType(std::move(context).status()));
        }
        return child->AsyncApproveBuild(cq, *std::move(context),
                                        std::move(options), request);
      });
}

StatusOr<google::longrunning::Operation> CloudBuildAuth::ApproveBuild(
    grpc::ClientContext& context, Options options,
    google::devtools::cloudbuild::v1::ApproveBuildRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->ApproveBuild(context, options, request);
}

StatusOr<google::devtools::cloudbuild::v1::BuildTrigger>
CloudBuildAuth::CreateBuildTrigger(
    grpc::ClientContext& context, Options const& options,
    google::devtools::cloudbuild::v1::CreateBuildTriggerRequest const&
        request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->CreateBuildTrigger(context, options, request);
}

StatusOr<google::devtools::cloudbuild::v1::BuildTrigger>
CloudBuildAuth::GetBuildTrigger(
    grpc::ClientContext& context, Options const& options,
    google::devtools::cloudbuild::v1::GetBuildTriggerRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->GetBuildTrigger(context, options, request);
}

StatusOr<google::devtools::cloudbuild::v1::ListBuildTriggersResponse>
CloudBuildAuth::ListBuildTriggers(
    grpc::ClientContext& context, Options const& options,
    google::devtools::cloudbuild::v1::ListBuildTriggersRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->ListBuildTriggers(context, options, request);
}

Status CloudBuildAuth::DeleteBuildTrigger(
    grpc::ClientContext& context, Options const& options,
    google::devtools::cloudbuild::v1::DeleteBuildTriggerRequest const&
        request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->DeleteBuildTrigger(context, options, request);
}

StatusOr<google::devtools::cloudbuild::v1::BuildTrigger>
CloudBuildAuth::UpdateBuildTrigger(
    grpc::ClientContext& context, Options const& options,
    google::devtools::cloudbuild::v1::UpdateBuildTriggerRequest const&
        request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->UpdateBuildTrigger(context, options, request);
}

future<StatusOr<google::longrunning::Operation>>
CloudBuildAuth::AsyncRunBuildTrigger(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::devtools::cloudbuild::v1::RunBuildTriggerRequest const& request) {
  using ReturnType = StatusOr<google::longrunning::Operation>;
  return auth_->AsyncConfigureContext(std::move(context))
      .then([cq, child = child_, options = std::move(options),
             request](future<StatusOr<std::shared_ptr<grpc::ClientContext>>>
                          f) mutable {
        auto context = f.get();
        if (!context) {
          return make_ready_future(ReturnType(std::move(context).status()));
        }
        return child->AsyncRunBuildTrigger(cq, *std::move(context),
                                           std::move(options), request);
      });
}

StatusOr<google::longrunning::Operation> CloudBuildAuth::RunBuildTrigger(
    grpc::ClientContext& context, Options options,
    google::devtools::cloudbuild::v1::RunBuildTriggerRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->RunBuildTrigger(context, options, request);
}

StatusOr<google::devtools::cloudbuild::v1::ReceiveTriggerWebhookResponse>
CloudBuildAuth::ReceiveTriggerWebhook(
    grpc::ClientContext& context, Options const& options,
    google::devtools::cloudbuild::v1::ReceiveTriggerWebhookRequest const&
        request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->ReceiveTriggerWebhook(context, options, request);
}

future<StatusOr<google::longrunning::Operation>>
CloudBuildAuth::AsyncCreateWorkerPool(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::devtools::cloudbuild::v1::CreateWorkerPoolRequest const& request) {
  using ReturnType = StatusOr<google::longrunning::Operation>;
  return auth_->AsyncConfigureContext(std::move(context))
      .then([cq, child = child_, options = std::move(options),
             request](future<StatusOr<std::shared_ptr<grpc::ClientContext>>>
                          f) mutable {
        auto context = f.get();
        if (!context) {
          return make_ready_future(ReturnType(std::move(context).status()));
        }
        return child->AsyncCreateWorkerPool(cq, *std::move(context),
                                            std::move(options), request);
      });
}

StatusOr<google::longrunning::Operation> CloudBuildAuth::CreateWorkerPool(
    grpc::ClientContext& context, Options options,
    google::devtools::cloudbuild::v1::CreateWorkerPoolRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->CreateWorkerPool(context, options, request);
}

StatusOr<google::devtools::cloudbuild::v1::WorkerPool>
CloudBuildAuth::GetWorkerPool(
    grpc::ClientContext& context, Options const& options,
    google::devtools::cloudbuild::v1::GetWorkerPoolRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->GetWorkerPool(context, options, request);
}

future<StatusOr<google::longrunning::Operation>>
CloudBuildAuth::AsyncDeleteWorkerPool(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::devtools::cloudbuild::v1::DeleteWorkerPoolRequest const& request) {
  using ReturnType = StatusOr<google::longrunning::Operation>;
  return auth_->AsyncConfigureContext(std::move(context))
      .then([cq, child = child_, options = std::move(options),
             request](future<StatusOr<std::shared_ptr<grpc::ClientContext>>>
                          f) mutable {
        auto context = f.get();
        if (!context) {
          return make_ready_future(ReturnType(std::move(context).status()));
        }
        return child->AsyncDeleteWorkerPool(cq, *std::move(context),
                                            std::move(options), request);
      });
}

StatusOr<google::longrunning::Operation> CloudBuildAuth::DeleteWorkerPool(
    grpc::ClientContext& context, Options options,
    google::devtools::cloudbuild::v1::DeleteWorkerPoolRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->DeleteWorkerPool(context, options, request);
}

future<StatusOr<google::longrunning::Operation>>
CloudBuildAuth::AsyncUpdateWorkerPool(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::devtools::cloudbuild::v1::UpdateWorkerPoolRequest const& request) {
  using ReturnType = StatusOr<google::longrunning::Operation>;
  return auth_->AsyncConfigureContext(std::move(context))
      .then([cq, child = child_, options = std::move(options),
             request](future<StatusOr<std::shared_ptr<grpc::ClientContext>>>
                          f) mutable {
        auto context = f.get();
        if (!context) {
          return make_ready_future(ReturnType(std::move(context).status()));
        }
        return child->AsyncUpdateWorkerPool(cq, *std::move(context),
                                            std::move(options), request);
      });
}

StatusOr<google::longrunning::Operation> CloudBuildAuth::UpdateWorkerPool(
    grpc::ClientContext& context, Options options,
    google::devtools::cloudbuild::v1::UpdateWorkerPoolRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->UpdateWorkerPool(context, options, request);
}

StatusOr<google::devtools::cloudbuild::v1::ListWorkerPoolsResponse>
CloudBuildAuth::ListWorkerPools(
    grpc::ClientContext& context, Options const& options,
    google::devtools::cloudbuild::v1::ListWorkerPoolsRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->ListWorkerPools(context, options, request);
}

future<StatusOr<google::longrunning::Operation>>
CloudBuildAuth::AsyncGetOperation(
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

future<Status> CloudBuildAuth::AsyncCancelOperation(
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
}  // namespace cloudbuild_v1_internal
}  // namespace cloud
}  // namespace google
