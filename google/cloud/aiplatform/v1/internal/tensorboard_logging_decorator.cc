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
// source: google/cloud/aiplatform/v1/tensorboard_service.proto

#include "google/cloud/aiplatform/v1/internal/tensorboard_logging_decorator.h"
#include "google/cloud/internal/log_wrapper.h"
#include "google/cloud/internal/streaming_read_rpc_logging.h"
#include "google/cloud/status_or.h"
#include "google/cloud/aiplatform/v1/tensorboard_service.grpc.pb.h"
#include <memory>
#include <set>
#include <string>
#include <utility>

namespace google {
namespace cloud {
namespace aiplatform_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

TensorboardServiceLogging::TensorboardServiceLogging(
    std::shared_ptr<TensorboardServiceStub> child,
    TracingOptions tracing_options, std::set<std::string> const& components)
    : child_(std::move(child)),
      tracing_options_(std::move(tracing_options)),
      stream_logging_(components.find("rpc-streams") != components.end()) {}

future<StatusOr<google::longrunning::Operation>>
TensorboardServiceLogging::AsyncCreateTensorboard(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::aiplatform::v1::CreateTensorboardRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             google::cloud::internal::ImmutableOptions options,
             google::cloud::aiplatform::v1::CreateTensorboardRequest const&
                 request) {
        return child_->AsyncCreateTensorboard(cq, std::move(context),
                                              std::move(options), request);
      },
      cq, std::move(context), std::move(options), request, __func__,
      tracing_options_);
}

StatusOr<google::longrunning::Operation>
TensorboardServiceLogging::CreateTensorboard(
    grpc::ClientContext& context, Options options,
    google::cloud::aiplatform::v1::CreateTensorboardRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::aiplatform::v1::CreateTensorboardRequest const&
                 request) {
        return child_->CreateTensorboard(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::aiplatform::v1::Tensorboard>
TensorboardServiceLogging::GetTensorboard(
    grpc::ClientContext& context, Options const& options,
    google::cloud::aiplatform::v1::GetTensorboardRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](
          grpc::ClientContext& context, Options const& options,
          google::cloud::aiplatform::v1::GetTensorboardRequest const& request) {
        return child_->GetTensorboard(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
TensorboardServiceLogging::AsyncUpdateTensorboard(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::aiplatform::v1::UpdateTensorboardRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             google::cloud::internal::ImmutableOptions options,
             google::cloud::aiplatform::v1::UpdateTensorboardRequest const&
                 request) {
        return child_->AsyncUpdateTensorboard(cq, std::move(context),
                                              std::move(options), request);
      },
      cq, std::move(context), std::move(options), request, __func__,
      tracing_options_);
}

StatusOr<google::longrunning::Operation>
TensorboardServiceLogging::UpdateTensorboard(
    grpc::ClientContext& context, Options options,
    google::cloud::aiplatform::v1::UpdateTensorboardRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::aiplatform::v1::UpdateTensorboardRequest const&
                 request) {
        return child_->UpdateTensorboard(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::aiplatform::v1::ListTensorboardsResponse>
TensorboardServiceLogging::ListTensorboards(
    grpc::ClientContext& context, Options const& options,
    google::cloud::aiplatform::v1::ListTensorboardsRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::aiplatform::v1::ListTensorboardsRequest const&
                 request) {
        return child_->ListTensorboards(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
TensorboardServiceLogging::AsyncDeleteTensorboard(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::aiplatform::v1::DeleteTensorboardRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             google::cloud::internal::ImmutableOptions options,
             google::cloud::aiplatform::v1::DeleteTensorboardRequest const&
                 request) {
        return child_->AsyncDeleteTensorboard(cq, std::move(context),
                                              std::move(options), request);
      },
      cq, std::move(context), std::move(options), request, __func__,
      tracing_options_);
}

StatusOr<google::longrunning::Operation>
TensorboardServiceLogging::DeleteTensorboard(
    grpc::ClientContext& context, Options options,
    google::cloud::aiplatform::v1::DeleteTensorboardRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::aiplatform::v1::DeleteTensorboardRequest const&
                 request) {
        return child_->DeleteTensorboard(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::aiplatform::v1::ReadTensorboardUsageResponse>
TensorboardServiceLogging::ReadTensorboardUsage(
    grpc::ClientContext& context, Options const& options,
    google::cloud::aiplatform::v1::ReadTensorboardUsageRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::aiplatform::v1::ReadTensorboardUsageRequest const&
                 request) {
        return child_->ReadTensorboardUsage(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::aiplatform::v1::ReadTensorboardSizeResponse>
TensorboardServiceLogging::ReadTensorboardSize(
    grpc::ClientContext& context, Options const& options,
    google::cloud::aiplatform::v1::ReadTensorboardSizeRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::aiplatform::v1::ReadTensorboardSizeRequest const&
                 request) {
        return child_->ReadTensorboardSize(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::aiplatform::v1::TensorboardExperiment>
TensorboardServiceLogging::CreateTensorboardExperiment(
    grpc::ClientContext& context, Options const& options,
    google::cloud::aiplatform::v1::CreateTensorboardExperimentRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::aiplatform::v1::
                 CreateTensorboardExperimentRequest const& request) {
        return child_->CreateTensorboardExperiment(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::aiplatform::v1::TensorboardExperiment>
TensorboardServiceLogging::GetTensorboardExperiment(
    grpc::ClientContext& context, Options const& options,
    google::cloud::aiplatform::v1::GetTensorboardExperimentRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](
          grpc::ClientContext& context, Options const& options,
          google::cloud::aiplatform::v1::GetTensorboardExperimentRequest const&
              request) {
        return child_->GetTensorboardExperiment(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::aiplatform::v1::TensorboardExperiment>
TensorboardServiceLogging::UpdateTensorboardExperiment(
    grpc::ClientContext& context, Options const& options,
    google::cloud::aiplatform::v1::UpdateTensorboardExperimentRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::aiplatform::v1::
                 UpdateTensorboardExperimentRequest const& request) {
        return child_->UpdateTensorboardExperiment(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::aiplatform::v1::ListTensorboardExperimentsResponse>
TensorboardServiceLogging::ListTensorboardExperiments(
    grpc::ClientContext& context, Options const& options,
    google::cloud::aiplatform::v1::ListTensorboardExperimentsRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::aiplatform::v1::
                 ListTensorboardExperimentsRequest const& request) {
        return child_->ListTensorboardExperiments(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
TensorboardServiceLogging::AsyncDeleteTensorboardExperiment(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::aiplatform::v1::DeleteTensorboardExperimentRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             google::cloud::internal::ImmutableOptions options,
             google::cloud::aiplatform::v1::
                 DeleteTensorboardExperimentRequest const& request) {
        return child_->AsyncDeleteTensorboardExperiment(
            cq, std::move(context), std::move(options), request);
      },
      cq, std::move(context), std::move(options), request, __func__,
      tracing_options_);
}

StatusOr<google::longrunning::Operation>
TensorboardServiceLogging::DeleteTensorboardExperiment(
    grpc::ClientContext& context, Options options,
    google::cloud::aiplatform::v1::DeleteTensorboardExperimentRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::aiplatform::v1::
                 DeleteTensorboardExperimentRequest const& request) {
        return child_->DeleteTensorboardExperiment(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::aiplatform::v1::TensorboardRun>
TensorboardServiceLogging::CreateTensorboardRun(
    grpc::ClientContext& context, Options const& options,
    google::cloud::aiplatform::v1::CreateTensorboardRunRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::aiplatform::v1::CreateTensorboardRunRequest const&
                 request) {
        return child_->CreateTensorboardRun(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::aiplatform::v1::BatchCreateTensorboardRunsResponse>
TensorboardServiceLogging::BatchCreateTensorboardRuns(
    grpc::ClientContext& context, Options const& options,
    google::cloud::aiplatform::v1::BatchCreateTensorboardRunsRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::aiplatform::v1::
                 BatchCreateTensorboardRunsRequest const& request) {
        return child_->BatchCreateTensorboardRuns(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::aiplatform::v1::TensorboardRun>
TensorboardServiceLogging::GetTensorboardRun(
    grpc::ClientContext& context, Options const& options,
    google::cloud::aiplatform::v1::GetTensorboardRunRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::aiplatform::v1::GetTensorboardRunRequest const&
                 request) {
        return child_->GetTensorboardRun(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::aiplatform::v1::TensorboardRun>
TensorboardServiceLogging::UpdateTensorboardRun(
    grpc::ClientContext& context, Options const& options,
    google::cloud::aiplatform::v1::UpdateTensorboardRunRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::aiplatform::v1::UpdateTensorboardRunRequest const&
                 request) {
        return child_->UpdateTensorboardRun(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::aiplatform::v1::ListTensorboardRunsResponse>
TensorboardServiceLogging::ListTensorboardRuns(
    grpc::ClientContext& context, Options const& options,
    google::cloud::aiplatform::v1::ListTensorboardRunsRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::aiplatform::v1::ListTensorboardRunsRequest const&
                 request) {
        return child_->ListTensorboardRuns(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
TensorboardServiceLogging::AsyncDeleteTensorboardRun(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::aiplatform::v1::DeleteTensorboardRunRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             google::cloud::internal::ImmutableOptions options,
             google::cloud::aiplatform::v1::DeleteTensorboardRunRequest const&
                 request) {
        return child_->AsyncDeleteTensorboardRun(cq, std::move(context),
                                                 std::move(options), request);
      },
      cq, std::move(context), std::move(options), request, __func__,
      tracing_options_);
}

StatusOr<google::longrunning::Operation>
TensorboardServiceLogging::DeleteTensorboardRun(
    grpc::ClientContext& context, Options options,
    google::cloud::aiplatform::v1::DeleteTensorboardRunRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::aiplatform::v1::DeleteTensorboardRunRequest const&
                 request) {
        return child_->DeleteTensorboardRun(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<
    google::cloud::aiplatform::v1::BatchCreateTensorboardTimeSeriesResponse>
TensorboardServiceLogging::BatchCreateTensorboardTimeSeries(
    grpc::ClientContext& context, Options const& options,
    google::cloud::aiplatform::v1::
        BatchCreateTensorboardTimeSeriesRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::aiplatform::v1::
                 BatchCreateTensorboardTimeSeriesRequest const& request) {
        return child_->BatchCreateTensorboardTimeSeries(context, options,
                                                        request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::aiplatform::v1::TensorboardTimeSeries>
TensorboardServiceLogging::CreateTensorboardTimeSeries(
    grpc::ClientContext& context, Options const& options,
    google::cloud::aiplatform::v1::CreateTensorboardTimeSeriesRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::aiplatform::v1::
                 CreateTensorboardTimeSeriesRequest const& request) {
        return child_->CreateTensorboardTimeSeries(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::aiplatform::v1::TensorboardTimeSeries>
TensorboardServiceLogging::GetTensorboardTimeSeries(
    grpc::ClientContext& context, Options const& options,
    google::cloud::aiplatform::v1::GetTensorboardTimeSeriesRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](
          grpc::ClientContext& context, Options const& options,
          google::cloud::aiplatform::v1::GetTensorboardTimeSeriesRequest const&
              request) {
        return child_->GetTensorboardTimeSeries(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::aiplatform::v1::TensorboardTimeSeries>
TensorboardServiceLogging::UpdateTensorboardTimeSeries(
    grpc::ClientContext& context, Options const& options,
    google::cloud::aiplatform::v1::UpdateTensorboardTimeSeriesRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::aiplatform::v1::
                 UpdateTensorboardTimeSeriesRequest const& request) {
        return child_->UpdateTensorboardTimeSeries(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::aiplatform::v1::ListTensorboardTimeSeriesResponse>
TensorboardServiceLogging::ListTensorboardTimeSeries(
    grpc::ClientContext& context, Options const& options,
    google::cloud::aiplatform::v1::ListTensorboardTimeSeriesRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](
          grpc::ClientContext& context, Options const& options,
          google::cloud::aiplatform::v1::ListTensorboardTimeSeriesRequest const&
              request) {
        return child_->ListTensorboardTimeSeries(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
TensorboardServiceLogging::AsyncDeleteTensorboardTimeSeries(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::aiplatform::v1::DeleteTensorboardTimeSeriesRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             google::cloud::internal::ImmutableOptions options,
             google::cloud::aiplatform::v1::
                 DeleteTensorboardTimeSeriesRequest const& request) {
        return child_->AsyncDeleteTensorboardTimeSeries(
            cq, std::move(context), std::move(options), request);
      },
      cq, std::move(context), std::move(options), request, __func__,
      tracing_options_);
}

StatusOr<google::longrunning::Operation>
TensorboardServiceLogging::DeleteTensorboardTimeSeries(
    grpc::ClientContext& context, Options options,
    google::cloud::aiplatform::v1::DeleteTensorboardTimeSeriesRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::aiplatform::v1::
                 DeleteTensorboardTimeSeriesRequest const& request) {
        return child_->DeleteTensorboardTimeSeries(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<
    google::cloud::aiplatform::v1::BatchReadTensorboardTimeSeriesDataResponse>
TensorboardServiceLogging::BatchReadTensorboardTimeSeriesData(
    grpc::ClientContext& context, Options const& options,
    google::cloud::aiplatform::v1::
        BatchReadTensorboardTimeSeriesDataRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::aiplatform::v1::
                 BatchReadTensorboardTimeSeriesDataRequest const& request) {
        return child_->BatchReadTensorboardTimeSeriesData(context, options,
                                                          request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::aiplatform::v1::ReadTensorboardTimeSeriesDataResponse>
TensorboardServiceLogging::ReadTensorboardTimeSeriesData(
    grpc::ClientContext& context, Options const& options,
    google::cloud::aiplatform::v1::ReadTensorboardTimeSeriesDataRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::aiplatform::v1::
                 ReadTensorboardTimeSeriesDataRequest const& request) {
        return child_->ReadTensorboardTimeSeriesData(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

std::unique_ptr<google::cloud::internal::StreamingReadRpc<
    google::cloud::aiplatform::v1::ReadTensorboardBlobDataResponse>>
TensorboardServiceLogging::ReadTensorboardBlobData(
    std::shared_ptr<grpc::ClientContext> context, Options const& options,
    google::cloud::aiplatform::v1::ReadTensorboardBlobDataRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](
          std::shared_ptr<grpc::ClientContext> context, Options const& options,
          google::cloud::aiplatform::v1::ReadTensorboardBlobDataRequest const&
              request)
          -> std::unique_ptr<google::cloud::internal::StreamingReadRpc<
              google::cloud::aiplatform::v1::ReadTensorboardBlobDataResponse>> {
        auto stream = child_->ReadTensorboardBlobData(std::move(context),
                                                      options, request);
        if (stream_logging_) {
          stream =
              std::make_unique<google::cloud::internal::StreamingReadRpcLogging<
                  google::cloud::aiplatform::v1::
                      ReadTensorboardBlobDataResponse>>(
                  std::move(stream), tracing_options_,
                  google::cloud::internal::RequestIdForLogging());
        }
        return stream;
      },
      std::move(context), options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::aiplatform::v1::WriteTensorboardExperimentDataResponse>
TensorboardServiceLogging::WriteTensorboardExperimentData(
    grpc::ClientContext& context, Options const& options,
    google::cloud::aiplatform::v1::WriteTensorboardExperimentDataRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::aiplatform::v1::
                 WriteTensorboardExperimentDataRequest const& request) {
        return child_->WriteTensorboardExperimentData(context, options,
                                                      request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::aiplatform::v1::WriteTensorboardRunDataResponse>
TensorboardServiceLogging::WriteTensorboardRunData(
    grpc::ClientContext& context, Options const& options,
    google::cloud::aiplatform::v1::WriteTensorboardRunDataRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](
          grpc::ClientContext& context, Options const& options,
          google::cloud::aiplatform::v1::WriteTensorboardRunDataRequest const&
              request) {
        return child_->WriteTensorboardRunData(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::aiplatform::v1::ExportTensorboardTimeSeriesDataResponse>
TensorboardServiceLogging::ExportTensorboardTimeSeriesData(
    grpc::ClientContext& context, Options const& options,
    google::cloud::aiplatform::v1::ExportTensorboardTimeSeriesDataRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::aiplatform::v1::
                 ExportTensorboardTimeSeriesDataRequest const& request) {
        return child_->ExportTensorboardTimeSeriesData(context, options,
                                                       request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::location::ListLocationsResponse>
TensorboardServiceLogging::ListLocations(
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
TensorboardServiceLogging::GetLocation(
    grpc::ClientContext& context, Options const& options,
    google::cloud::location::GetLocationRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::location::GetLocationRequest const& request) {
        return child_->GetLocation(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::iam::v1::Policy> TensorboardServiceLogging::SetIamPolicy(
    grpc::ClientContext& context, Options const& options,
    google::iam::v1::SetIamPolicyRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::iam::v1::SetIamPolicyRequest const& request) {
        return child_->SetIamPolicy(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::iam::v1::Policy> TensorboardServiceLogging::GetIamPolicy(
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
TensorboardServiceLogging::TestIamPermissions(
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
TensorboardServiceLogging::ListOperations(
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
TensorboardServiceLogging::GetOperation(
    grpc::ClientContext& context, Options const& options,
    google::longrunning::GetOperationRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::longrunning::GetOperationRequest const& request) {
        return child_->GetOperation(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

Status TensorboardServiceLogging::DeleteOperation(
    grpc::ClientContext& context, Options const& options,
    google::longrunning::DeleteOperationRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::longrunning::DeleteOperationRequest const& request) {
        return child_->DeleteOperation(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

Status TensorboardServiceLogging::CancelOperation(
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
TensorboardServiceLogging::WaitOperation(
    grpc::ClientContext& context, Options const& options,
    google::longrunning::WaitOperationRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::longrunning::WaitOperationRequest const& request) {
        return child_->WaitOperation(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
TensorboardServiceLogging::AsyncGetOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::longrunning::GetOperationRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             google::cloud::internal::ImmutableOptions options,
             google::longrunning::GetOperationRequest const& request) {
        return child_->AsyncGetOperation(cq, std::move(context),
                                         std::move(options), request);
      },
      cq, std::move(context), std::move(options), request, __func__,
      tracing_options_);
}

future<Status> TensorboardServiceLogging::AsyncCancelOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::longrunning::CancelOperationRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             google::cloud::internal::ImmutableOptions options,
             google::longrunning::CancelOperationRequest const& request) {
        return child_->AsyncCancelOperation(cq, std::move(context),
                                            std::move(options), request);
      },
      cq, std::move(context), std::move(options), request, __func__,
      tracing_options_);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace aiplatform_v1_internal
}  // namespace cloud
}  // namespace google
