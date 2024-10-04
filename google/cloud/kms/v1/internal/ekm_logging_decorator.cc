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
// source: google/cloud/kms/v1/ekm_service.proto

#include "google/cloud/kms/v1/internal/ekm_logging_decorator.h"
#include "google/cloud/internal/log_wrapper.h"
#include "google/cloud/status_or.h"
#include <google/cloud/kms/v1/ekm_service.grpc.pb.h>
#include <memory>
#include <set>
#include <string>
#include <utility>

namespace google {
namespace cloud {
namespace kms_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

EkmServiceLogging::EkmServiceLogging(std::shared_ptr<EkmServiceStub> child,
                                     TracingOptions tracing_options,
                                     std::set<std::string> const&)
    : child_(std::move(child)), tracing_options_(std::move(tracing_options)) {}

StatusOr<google::cloud::kms::v1::ListEkmConnectionsResponse>
EkmServiceLogging::ListEkmConnections(
    grpc::ClientContext& context, Options const& options,
    google::cloud::kms::v1::ListEkmConnectionsRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::kms::v1::ListEkmConnectionsRequest const& request) {
        return child_->ListEkmConnections(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::kms::v1::EkmConnection>
EkmServiceLogging::GetEkmConnection(
    grpc::ClientContext& context, Options const& options,
    google::cloud::kms::v1::GetEkmConnectionRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::kms::v1::GetEkmConnectionRequest const& request) {
        return child_->GetEkmConnection(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::kms::v1::EkmConnection>
EkmServiceLogging::CreateEkmConnection(
    grpc::ClientContext& context, Options const& options,
    google::cloud::kms::v1::CreateEkmConnectionRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](
          grpc::ClientContext& context, Options const& options,
          google::cloud::kms::v1::CreateEkmConnectionRequest const& request) {
        return child_->CreateEkmConnection(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::kms::v1::EkmConnection>
EkmServiceLogging::UpdateEkmConnection(
    grpc::ClientContext& context, Options const& options,
    google::cloud::kms::v1::UpdateEkmConnectionRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](
          grpc::ClientContext& context, Options const& options,
          google::cloud::kms::v1::UpdateEkmConnectionRequest const& request) {
        return child_->UpdateEkmConnection(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::kms::v1::EkmConfig> EkmServiceLogging::GetEkmConfig(
    grpc::ClientContext& context, Options const& options,
    google::cloud::kms::v1::GetEkmConfigRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::kms::v1::GetEkmConfigRequest const& request) {
        return child_->GetEkmConfig(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::kms::v1::EkmConfig> EkmServiceLogging::UpdateEkmConfig(
    grpc::ClientContext& context, Options const& options,
    google::cloud::kms::v1::UpdateEkmConfigRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::kms::v1::UpdateEkmConfigRequest const& request) {
        return child_->UpdateEkmConfig(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::kms::v1::VerifyConnectivityResponse>
EkmServiceLogging::VerifyConnectivity(
    grpc::ClientContext& context, Options const& options,
    google::cloud::kms::v1::VerifyConnectivityRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::kms::v1::VerifyConnectivityRequest const& request) {
        return child_->VerifyConnectivity(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::location::ListLocationsResponse>
EkmServiceLogging::ListLocations(
    grpc::ClientContext& context, Options const& options,
    google::cloud::location::ListLocationsRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::location::ListLocationsRequest const& request) {
        return child_->ListLocations(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::location::Location> EkmServiceLogging::GetLocation(
    grpc::ClientContext& context, Options const& options,
    google::cloud::location::GetLocationRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::location::GetLocationRequest const& request) {
        return child_->GetLocation(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::iam::v1::Policy> EkmServiceLogging::SetIamPolicy(
    grpc::ClientContext& context, Options const& options,
    google::iam::v1::SetIamPolicyRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::iam::v1::SetIamPolicyRequest const& request) {
        return child_->SetIamPolicy(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::iam::v1::Policy> EkmServiceLogging::GetIamPolicy(
    grpc::ClientContext& context, Options const& options,
    google::iam::v1::GetIamPolicyRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::iam::v1::GetIamPolicyRequest const& request) {
        return child_->GetIamPolicy(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::iam::v1::TestIamPermissionsResponse>
EkmServiceLogging::TestIamPermissions(
    grpc::ClientContext& context, Options const& options,
    google::iam::v1::TestIamPermissionsRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::iam::v1::TestIamPermissionsRequest const& request) {
        return child_->TestIamPermissions(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::longrunning::Operation> EkmServiceLogging::GetOperation(
    grpc::ClientContext& context, Options const& options,
    google::longrunning::GetOperationRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::longrunning::GetOperationRequest const& request) {
        return child_->GetOperation(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace kms_v1_internal
}  // namespace cloud
}  // namespace google
