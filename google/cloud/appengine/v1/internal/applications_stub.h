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
// source: google/appengine/v1/appengine.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_APPENGINE_V1_INTERNAL_APPLICATIONS_STUB_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_APPENGINE_V1_INTERNAL_APPLICATIONS_STUB_H

#include "google/cloud/completion_queue.h"
#include "google/cloud/future.h"
#include "google/cloud/options.h"
#include "google/cloud/status_or.h"
#include "google/cloud/version.h"
#include "google/appengine/v1/appengine.grpc.pb.h"
#include "google/appengine/v1/operation.pb.h"
#include "google/longrunning/operations.grpc.pb.h"
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace appengine_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class ApplicationsStub {
 public:
  virtual ~ApplicationsStub() = 0;

  virtual StatusOr<google::appengine::v1::Application> GetApplication(
      grpc::ClientContext& context, Options const& options,
      google::appengine::v1::GetApplicationRequest const& request) = 0;

  virtual future<StatusOr<google::longrunning::Operation>>
  AsyncCreateApplication(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::appengine::v1::CreateApplicationRequest const& request) = 0;

  virtual StatusOr<google::longrunning::Operation> CreateApplication(
      grpc::ClientContext& context, Options options,
      google::appengine::v1::CreateApplicationRequest const& request) = 0;

  virtual future<StatusOr<google::longrunning::Operation>>
  AsyncUpdateApplication(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::appengine::v1::UpdateApplicationRequest const& request) = 0;

  virtual StatusOr<google::longrunning::Operation> UpdateApplication(
      grpc::ClientContext& context, Options options,
      google::appengine::v1::UpdateApplicationRequest const& request) = 0;

  virtual future<StatusOr<google::longrunning::Operation>>
  AsyncRepairApplication(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::appengine::v1::RepairApplicationRequest const& request) = 0;

  virtual StatusOr<google::longrunning::Operation> RepairApplication(
      grpc::ClientContext& context, Options options,
      google::appengine::v1::RepairApplicationRequest const& request) = 0;

  virtual future<StatusOr<google::longrunning::Operation>> AsyncGetOperation(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::longrunning::GetOperationRequest const& request) = 0;

  virtual future<Status> AsyncCancelOperation(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::longrunning::CancelOperationRequest const& request) = 0;
};

class DefaultApplicationsStub : public ApplicationsStub {
 public:
  DefaultApplicationsStub(
      std::unique_ptr<google::appengine::v1::Applications::StubInterface>
          grpc_stub,
      std::unique_ptr<google::longrunning::Operations::StubInterface>
          operations)
      : grpc_stub_(std::move(grpc_stub)), operations_(std::move(operations)) {}

  StatusOr<google::appengine::v1::Application> GetApplication(
      grpc::ClientContext& context, Options const& options,
      google::appengine::v1::GetApplicationRequest const& request) override;

  future<StatusOr<google::longrunning::Operation>> AsyncCreateApplication(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::appengine::v1::CreateApplicationRequest const& request) override;

  StatusOr<google::longrunning::Operation> CreateApplication(
      grpc::ClientContext& context, Options options,
      google::appengine::v1::CreateApplicationRequest const& request) override;

  future<StatusOr<google::longrunning::Operation>> AsyncUpdateApplication(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::appengine::v1::UpdateApplicationRequest const& request) override;

  StatusOr<google::longrunning::Operation> UpdateApplication(
      grpc::ClientContext& context, Options options,
      google::appengine::v1::UpdateApplicationRequest const& request) override;

  future<StatusOr<google::longrunning::Operation>> AsyncRepairApplication(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::appengine::v1::RepairApplicationRequest const& request) override;

  StatusOr<google::longrunning::Operation> RepairApplication(
      grpc::ClientContext& context, Options options,
      google::appengine::v1::RepairApplicationRequest const& request) override;

  future<StatusOr<google::longrunning::Operation>> AsyncGetOperation(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::longrunning::GetOperationRequest const& request) override;

  future<Status> AsyncCancelOperation(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::longrunning::CancelOperationRequest const& request) override;

 private:
  std::unique_ptr<google::appengine::v1::Applications::StubInterface>
      grpc_stub_;
  std::unique_ptr<google::longrunning::Operations::StubInterface> operations_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace appengine_v1_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_APPENGINE_V1_INTERNAL_APPLICATIONS_STUB_H
