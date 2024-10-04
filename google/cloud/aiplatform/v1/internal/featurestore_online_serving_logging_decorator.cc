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
// source: google/cloud/aiplatform/v1/featurestore_online_service.proto

#include "google/cloud/aiplatform/v1/internal/featurestore_online_serving_logging_decorator.h"
#include "google/cloud/internal/log_wrapper.h"
#include "google/cloud/internal/streaming_read_rpc_logging.h"
#include "google/cloud/status_or.h"
#include <google/cloud/aiplatform/v1/featurestore_online_service.grpc.pb.h>
#include <memory>
#include <set>
#include <string>
#include <utility>

namespace google {
namespace cloud {
namespace aiplatform_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

FeaturestoreOnlineServingServiceLogging::
    FeaturestoreOnlineServingServiceLogging(
        std::shared_ptr<FeaturestoreOnlineServingServiceStub> child,
        TracingOptions tracing_options, std::set<std::string> const& components)
    : child_(std::move(child)),
      tracing_options_(std::move(tracing_options)),
      stream_logging_(components.find("rpc-streams") != components.end()) {}

StatusOr<google::cloud::aiplatform::v1::ReadFeatureValuesResponse>
FeaturestoreOnlineServingServiceLogging::ReadFeatureValues(
    grpc::ClientContext& context, Options const& options,
    google::cloud::aiplatform::v1::ReadFeatureValuesRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::aiplatform::v1::ReadFeatureValuesRequest const&
                 request) {
        return child_->ReadFeatureValues(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

std::unique_ptr<google::cloud::internal::StreamingReadRpc<
    google::cloud::aiplatform::v1::ReadFeatureValuesResponse>>
FeaturestoreOnlineServingServiceLogging::StreamingReadFeatureValues(
    std::shared_ptr<grpc::ClientContext> context, Options const& options,
    google::cloud::aiplatform::v1::StreamingReadFeatureValuesRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](std::shared_ptr<grpc::ClientContext> context,
             Options const& options,
             google::cloud::aiplatform::v1::
                 StreamingReadFeatureValuesRequest const& request)
          -> std::unique_ptr<google::cloud::internal::StreamingReadRpc<
              google::cloud::aiplatform::v1::ReadFeatureValuesResponse>> {
        auto stream = child_->StreamingReadFeatureValues(std::move(context),
                                                         options, request);
        if (stream_logging_) {
          stream =
              std::make_unique<google::cloud::internal::StreamingReadRpcLogging<
                  google::cloud::aiplatform::v1::ReadFeatureValuesResponse>>(
                  std::move(stream), tracing_options_,
                  google::cloud::internal::RequestIdForLogging());
        }
        return stream;
      },
      std::move(context), options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::aiplatform::v1::WriteFeatureValuesResponse>
FeaturestoreOnlineServingServiceLogging::WriteFeatureValues(
    grpc::ClientContext& context, Options const& options,
    google::cloud::aiplatform::v1::WriteFeatureValuesRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::aiplatform::v1::WriteFeatureValuesRequest const&
                 request) {
        return child_->WriteFeatureValues(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::location::ListLocationsResponse>
FeaturestoreOnlineServingServiceLogging::ListLocations(
    grpc::ClientContext& context, Options const& options,
    google::cloud::location::ListLocationsRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::location::ListLocationsRequest const& request) {
        return child_->ListLocations(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::location::Location>
FeaturestoreOnlineServingServiceLogging::GetLocation(
    grpc::ClientContext& context, Options const& options,
    google::cloud::location::GetLocationRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::location::GetLocationRequest const& request) {
        return child_->GetLocation(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::iam::v1::Policy>
FeaturestoreOnlineServingServiceLogging::SetIamPolicy(
    grpc::ClientContext& context, Options const& options,
    google::iam::v1::SetIamPolicyRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::iam::v1::SetIamPolicyRequest const& request) {
        return child_->SetIamPolicy(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::iam::v1::Policy>
FeaturestoreOnlineServingServiceLogging::GetIamPolicy(
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
FeaturestoreOnlineServingServiceLogging::TestIamPermissions(
    grpc::ClientContext& context, Options const& options,
    google::iam::v1::TestIamPermissionsRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::iam::v1::TestIamPermissionsRequest const& request) {
        return child_->TestIamPermissions(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::longrunning::ListOperationsResponse>
FeaturestoreOnlineServingServiceLogging::ListOperations(
    grpc::ClientContext& context, Options const& options,
    google::longrunning::ListOperationsRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::longrunning::ListOperationsRequest const& request) {
        return child_->ListOperations(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::longrunning::Operation>
FeaturestoreOnlineServingServiceLogging::GetOperation(
    grpc::ClientContext& context, Options const& options,
    google::longrunning::GetOperationRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::longrunning::GetOperationRequest const& request) {
        return child_->GetOperation(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

Status FeaturestoreOnlineServingServiceLogging::DeleteOperation(
    grpc::ClientContext& context, Options const& options,
    google::longrunning::DeleteOperationRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::longrunning::DeleteOperationRequest const& request) {
        return child_->DeleteOperation(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

Status FeaturestoreOnlineServingServiceLogging::CancelOperation(
    grpc::ClientContext& context, Options const& options,
    google::longrunning::CancelOperationRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::longrunning::CancelOperationRequest const& request) {
        return child_->CancelOperation(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::longrunning::Operation>
FeaturestoreOnlineServingServiceLogging::WaitOperation(
    grpc::ClientContext& context, Options const& options,
    google::longrunning::WaitOperationRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::longrunning::WaitOperationRequest const& request) {
        return child_->WaitOperation(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace aiplatform_v1_internal
}  // namespace cloud
}  // namespace google
