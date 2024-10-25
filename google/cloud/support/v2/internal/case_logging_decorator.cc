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
// source: google/cloud/support/v2/case_service.proto

#include "google/cloud/support/v2/internal/case_logging_decorator.h"
#include "google/cloud/support/v2/case_service.grpc.pb.h"
#include "google/cloud/internal/log_wrapper.h"
#include "google/cloud/status_or.h"
#include <memory>
#include <set>
#include <string>
#include <utility>

namespace google {
namespace cloud {
namespace support_v2_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

CaseServiceLogging::CaseServiceLogging(std::shared_ptr<CaseServiceStub> child,
                                       TracingOptions tracing_options,
                                       std::set<std::string> const&)
    : child_(std::move(child)), tracing_options_(std::move(tracing_options)) {}

StatusOr<google::cloud::support::v2::Case> CaseServiceLogging::GetCase(
    grpc::ClientContext& context, Options const& options,
    google::cloud::support::v2::GetCaseRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::support::v2::GetCaseRequest const& request) {
        return child_->GetCase(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::support::v2::ListCasesResponse>
CaseServiceLogging::ListCases(
    grpc::ClientContext& context, Options const& options,
    google::cloud::support::v2::ListCasesRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::support::v2::ListCasesRequest const& request) {
        return child_->ListCases(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::support::v2::SearchCasesResponse>
CaseServiceLogging::SearchCases(
    grpc::ClientContext& context, Options const& options,
    google::cloud::support::v2::SearchCasesRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::support::v2::SearchCasesRequest const& request) {
        return child_->SearchCases(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::support::v2::Case> CaseServiceLogging::CreateCase(
    grpc::ClientContext& context, Options const& options,
    google::cloud::support::v2::CreateCaseRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::support::v2::CreateCaseRequest const& request) {
        return child_->CreateCase(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::support::v2::Case> CaseServiceLogging::UpdateCase(
    grpc::ClientContext& context, Options const& options,
    google::cloud::support::v2::UpdateCaseRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::support::v2::UpdateCaseRequest const& request) {
        return child_->UpdateCase(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::support::v2::Case> CaseServiceLogging::EscalateCase(
    grpc::ClientContext& context, Options const& options,
    google::cloud::support::v2::EscalateCaseRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::support::v2::EscalateCaseRequest const& request) {
        return child_->EscalateCase(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::support::v2::Case> CaseServiceLogging::CloseCase(
    grpc::ClientContext& context, Options const& options,
    google::cloud::support::v2::CloseCaseRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::support::v2::CloseCaseRequest const& request) {
        return child_->CloseCase(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::support::v2::SearchCaseClassificationsResponse>
CaseServiceLogging::SearchCaseClassifications(
    grpc::ClientContext& context, Options const& options,
    google::cloud::support::v2::SearchCaseClassificationsRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::support::v2::SearchCaseClassificationsRequest const&
                 request) {
        return child_->SearchCaseClassifications(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace support_v2_internal
}  // namespace cloud
}  // namespace google
