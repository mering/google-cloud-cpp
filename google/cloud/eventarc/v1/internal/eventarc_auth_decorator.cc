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
// source: google/cloud/eventarc/v1/eventarc.proto

#include "google/cloud/eventarc/v1/internal/eventarc_auth_decorator.h"
#include <google/cloud/eventarc/v1/eventarc.grpc.pb.h>
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace eventarc_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

EventarcAuth::EventarcAuth(
    std::shared_ptr<google::cloud::internal::GrpcAuthenticationStrategy> auth,
    std::shared_ptr<EventarcStub> child)
    : auth_(std::move(auth)), child_(std::move(child)) {}

StatusOr<google::cloud::eventarc::v1::Trigger> EventarcAuth::GetTrigger(
    grpc::ClientContext& context, Options const& options,
    google::cloud::eventarc::v1::GetTriggerRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->GetTrigger(context, options, request);
}

StatusOr<google::cloud::eventarc::v1::ListTriggersResponse>
EventarcAuth::ListTriggers(
    grpc::ClientContext& context, Options const& options,
    google::cloud::eventarc::v1::ListTriggersRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->ListTriggers(context, options, request);
}

future<StatusOr<google::longrunning::Operation>>
EventarcAuth::AsyncCreateTrigger(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::eventarc::v1::CreateTriggerRequest const& request) {
  using ReturnType = StatusOr<google::longrunning::Operation>;
  return auth_->AsyncConfigureContext(std::move(context))
      .then([cq, child = child_, options = std::move(options),
             request](future<StatusOr<std::shared_ptr<grpc::ClientContext>>>
                          f) mutable {
        auto context = f.get();
        if (!context) {
          return make_ready_future(ReturnType(std::move(context).status()));
        }
        return child->AsyncCreateTrigger(cq, *std::move(context),
                                         std::move(options), request);
      });
}

StatusOr<google::longrunning::Operation> EventarcAuth::CreateTrigger(
    grpc::ClientContext& context, Options options,
    google::cloud::eventarc::v1::CreateTriggerRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->CreateTrigger(context, options, request);
}

future<StatusOr<google::longrunning::Operation>>
EventarcAuth::AsyncUpdateTrigger(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::eventarc::v1::UpdateTriggerRequest const& request) {
  using ReturnType = StatusOr<google::longrunning::Operation>;
  return auth_->AsyncConfigureContext(std::move(context))
      .then([cq, child = child_, options = std::move(options),
             request](future<StatusOr<std::shared_ptr<grpc::ClientContext>>>
                          f) mutable {
        auto context = f.get();
        if (!context) {
          return make_ready_future(ReturnType(std::move(context).status()));
        }
        return child->AsyncUpdateTrigger(cq, *std::move(context),
                                         std::move(options), request);
      });
}

StatusOr<google::longrunning::Operation> EventarcAuth::UpdateTrigger(
    grpc::ClientContext& context, Options options,
    google::cloud::eventarc::v1::UpdateTriggerRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->UpdateTrigger(context, options, request);
}

future<StatusOr<google::longrunning::Operation>>
EventarcAuth::AsyncDeleteTrigger(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::eventarc::v1::DeleteTriggerRequest const& request) {
  using ReturnType = StatusOr<google::longrunning::Operation>;
  return auth_->AsyncConfigureContext(std::move(context))
      .then([cq, child = child_, options = std::move(options),
             request](future<StatusOr<std::shared_ptr<grpc::ClientContext>>>
                          f) mutable {
        auto context = f.get();
        if (!context) {
          return make_ready_future(ReturnType(std::move(context).status()));
        }
        return child->AsyncDeleteTrigger(cq, *std::move(context),
                                         std::move(options), request);
      });
}

StatusOr<google::longrunning::Operation> EventarcAuth::DeleteTrigger(
    grpc::ClientContext& context, Options options,
    google::cloud::eventarc::v1::DeleteTriggerRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->DeleteTrigger(context, options, request);
}

StatusOr<google::cloud::eventarc::v1::Channel> EventarcAuth::GetChannel(
    grpc::ClientContext& context, Options const& options,
    google::cloud::eventarc::v1::GetChannelRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->GetChannel(context, options, request);
}

StatusOr<google::cloud::eventarc::v1::ListChannelsResponse>
EventarcAuth::ListChannels(
    grpc::ClientContext& context, Options const& options,
    google::cloud::eventarc::v1::ListChannelsRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->ListChannels(context, options, request);
}

future<StatusOr<google::longrunning::Operation>>
EventarcAuth::AsyncCreateChannel(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::eventarc::v1::CreateChannelRequest const& request) {
  using ReturnType = StatusOr<google::longrunning::Operation>;
  return auth_->AsyncConfigureContext(std::move(context))
      .then([cq, child = child_, options = std::move(options),
             request](future<StatusOr<std::shared_ptr<grpc::ClientContext>>>
                          f) mutable {
        auto context = f.get();
        if (!context) {
          return make_ready_future(ReturnType(std::move(context).status()));
        }
        return child->AsyncCreateChannel(cq, *std::move(context),
                                         std::move(options), request);
      });
}

StatusOr<google::longrunning::Operation> EventarcAuth::CreateChannel(
    grpc::ClientContext& context, Options options,
    google::cloud::eventarc::v1::CreateChannelRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->CreateChannel(context, options, request);
}

future<StatusOr<google::longrunning::Operation>>
EventarcAuth::AsyncUpdateChannel(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::eventarc::v1::UpdateChannelRequest const& request) {
  using ReturnType = StatusOr<google::longrunning::Operation>;
  return auth_->AsyncConfigureContext(std::move(context))
      .then([cq, child = child_, options = std::move(options),
             request](future<StatusOr<std::shared_ptr<grpc::ClientContext>>>
                          f) mutable {
        auto context = f.get();
        if (!context) {
          return make_ready_future(ReturnType(std::move(context).status()));
        }
        return child->AsyncUpdateChannel(cq, *std::move(context),
                                         std::move(options), request);
      });
}

StatusOr<google::longrunning::Operation> EventarcAuth::UpdateChannel(
    grpc::ClientContext& context, Options options,
    google::cloud::eventarc::v1::UpdateChannelRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->UpdateChannel(context, options, request);
}

future<StatusOr<google::longrunning::Operation>>
EventarcAuth::AsyncDeleteChannel(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::eventarc::v1::DeleteChannelRequest const& request) {
  using ReturnType = StatusOr<google::longrunning::Operation>;
  return auth_->AsyncConfigureContext(std::move(context))
      .then([cq, child = child_, options = std::move(options),
             request](future<StatusOr<std::shared_ptr<grpc::ClientContext>>>
                          f) mutable {
        auto context = f.get();
        if (!context) {
          return make_ready_future(ReturnType(std::move(context).status()));
        }
        return child->AsyncDeleteChannel(cq, *std::move(context),
                                         std::move(options), request);
      });
}

StatusOr<google::longrunning::Operation> EventarcAuth::DeleteChannel(
    grpc::ClientContext& context, Options options,
    google::cloud::eventarc::v1::DeleteChannelRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->DeleteChannel(context, options, request);
}

StatusOr<google::cloud::eventarc::v1::Provider> EventarcAuth::GetProvider(
    grpc::ClientContext& context, Options const& options,
    google::cloud::eventarc::v1::GetProviderRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->GetProvider(context, options, request);
}

StatusOr<google::cloud::eventarc::v1::ListProvidersResponse>
EventarcAuth::ListProviders(
    grpc::ClientContext& context, Options const& options,
    google::cloud::eventarc::v1::ListProvidersRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->ListProviders(context, options, request);
}

StatusOr<google::cloud::eventarc::v1::ChannelConnection>
EventarcAuth::GetChannelConnection(
    grpc::ClientContext& context, Options const& options,
    google::cloud::eventarc::v1::GetChannelConnectionRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->GetChannelConnection(context, options, request);
}

StatusOr<google::cloud::eventarc::v1::ListChannelConnectionsResponse>
EventarcAuth::ListChannelConnections(
    grpc::ClientContext& context, Options const& options,
    google::cloud::eventarc::v1::ListChannelConnectionsRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->ListChannelConnections(context, options, request);
}

future<StatusOr<google::longrunning::Operation>>
EventarcAuth::AsyncCreateChannelConnection(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::eventarc::v1::CreateChannelConnectionRequest const&
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
        return child->AsyncCreateChannelConnection(cq, *std::move(context),
                                                   std::move(options), request);
      });
}

StatusOr<google::longrunning::Operation> EventarcAuth::CreateChannelConnection(
    grpc::ClientContext& context, Options options,
    google::cloud::eventarc::v1::CreateChannelConnectionRequest const&
        request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->CreateChannelConnection(context, options, request);
}

future<StatusOr<google::longrunning::Operation>>
EventarcAuth::AsyncDeleteChannelConnection(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::eventarc::v1::DeleteChannelConnectionRequest const&
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
        return child->AsyncDeleteChannelConnection(cq, *std::move(context),
                                                   std::move(options), request);
      });
}

StatusOr<google::longrunning::Operation> EventarcAuth::DeleteChannelConnection(
    grpc::ClientContext& context, Options options,
    google::cloud::eventarc::v1::DeleteChannelConnectionRequest const&
        request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->DeleteChannelConnection(context, options, request);
}

StatusOr<google::cloud::eventarc::v1::GoogleChannelConfig>
EventarcAuth::GetGoogleChannelConfig(
    grpc::ClientContext& context, Options const& options,
    google::cloud::eventarc::v1::GetGoogleChannelConfigRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->GetGoogleChannelConfig(context, options, request);
}

StatusOr<google::cloud::eventarc::v1::GoogleChannelConfig>
EventarcAuth::UpdateGoogleChannelConfig(
    grpc::ClientContext& context, Options const& options,
    google::cloud::eventarc::v1::UpdateGoogleChannelConfigRequest const&
        request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->UpdateGoogleChannelConfig(context, options, request);
}

StatusOr<google::cloud::location::ListLocationsResponse>
EventarcAuth::ListLocations(
    grpc::ClientContext& context, Options const& options,
    google::cloud::location::ListLocationsRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->ListLocations(context, options, request);
}

StatusOr<google::cloud::location::Location> EventarcAuth::GetLocation(
    grpc::ClientContext& context, Options const& options,
    google::cloud::location::GetLocationRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->GetLocation(context, options, request);
}

StatusOr<google::iam::v1::Policy> EventarcAuth::SetIamPolicy(
    grpc::ClientContext& context, Options const& options,
    google::iam::v1::SetIamPolicyRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->SetIamPolicy(context, options, request);
}

StatusOr<google::iam::v1::Policy> EventarcAuth::GetIamPolicy(
    grpc::ClientContext& context, Options const& options,
    google::iam::v1::GetIamPolicyRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->GetIamPolicy(context, options, request);
}

StatusOr<google::iam::v1::TestIamPermissionsResponse>
EventarcAuth::TestIamPermissions(
    grpc::ClientContext& context, Options const& options,
    google::iam::v1::TestIamPermissionsRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->TestIamPermissions(context, options, request);
}

StatusOr<google::longrunning::ListOperationsResponse>
EventarcAuth::ListOperations(
    grpc::ClientContext& context, Options const& options,
    google::longrunning::ListOperationsRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->ListOperations(context, options, request);
}

StatusOr<google::longrunning::Operation> EventarcAuth::GetOperation(
    grpc::ClientContext& context, Options const& options,
    google::longrunning::GetOperationRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->GetOperation(context, options, request);
}

Status EventarcAuth::DeleteOperation(
    grpc::ClientContext& context, Options const& options,
    google::longrunning::DeleteOperationRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->DeleteOperation(context, options, request);
}

Status EventarcAuth::CancelOperation(
    grpc::ClientContext& context, Options const& options,
    google::longrunning::CancelOperationRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->CancelOperation(context, options, request);
}

future<StatusOr<google::longrunning::Operation>>
EventarcAuth::AsyncGetOperation(
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

future<Status> EventarcAuth::AsyncCancelOperation(
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
}  // namespace eventarc_v1_internal
}  // namespace cloud
}  // namespace google
