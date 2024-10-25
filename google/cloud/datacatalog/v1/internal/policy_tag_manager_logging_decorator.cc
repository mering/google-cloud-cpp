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
// source: google/cloud/datacatalog/v1/policytagmanager.proto

#include "google/cloud/datacatalog/v1/internal/policy_tag_manager_logging_decorator.h"
#include "google/cloud/datacatalog/v1/policytagmanager.grpc.pb.h"
#include "google/cloud/internal/log_wrapper.h"
#include "google/cloud/status_or.h"
#include <memory>
#include <set>
#include <string>
#include <utility>

namespace google {
namespace cloud {
namespace datacatalog_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

PolicyTagManagerLogging::PolicyTagManagerLogging(
    std::shared_ptr<PolicyTagManagerStub> child, TracingOptions tracing_options,
    std::set<std::string> const&)
    : child_(std::move(child)), tracing_options_(std::move(tracing_options)) {}

StatusOr<google::cloud::datacatalog::v1::Taxonomy>
PolicyTagManagerLogging::CreateTaxonomy(
    grpc::ClientContext& context, Options const& options,
    google::cloud::datacatalog::v1::CreateTaxonomyRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::datacatalog::v1::CreateTaxonomyRequest const&
                 request) {
        return child_->CreateTaxonomy(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

Status PolicyTagManagerLogging::DeleteTaxonomy(
    grpc::ClientContext& context, Options const& options,
    google::cloud::datacatalog::v1::DeleteTaxonomyRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::datacatalog::v1::DeleteTaxonomyRequest const&
                 request) {
        return child_->DeleteTaxonomy(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::datacatalog::v1::Taxonomy>
PolicyTagManagerLogging::UpdateTaxonomy(
    grpc::ClientContext& context, Options const& options,
    google::cloud::datacatalog::v1::UpdateTaxonomyRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::datacatalog::v1::UpdateTaxonomyRequest const&
                 request) {
        return child_->UpdateTaxonomy(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::datacatalog::v1::ListTaxonomiesResponse>
PolicyTagManagerLogging::ListTaxonomies(
    grpc::ClientContext& context, Options const& options,
    google::cloud::datacatalog::v1::ListTaxonomiesRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::datacatalog::v1::ListTaxonomiesRequest const&
                 request) {
        return child_->ListTaxonomies(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::datacatalog::v1::Taxonomy>
PolicyTagManagerLogging::GetTaxonomy(
    grpc::ClientContext& context, Options const& options,
    google::cloud::datacatalog::v1::GetTaxonomyRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](
          grpc::ClientContext& context, Options const& options,
          google::cloud::datacatalog::v1::GetTaxonomyRequest const& request) {
        return child_->GetTaxonomy(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::datacatalog::v1::PolicyTag>
PolicyTagManagerLogging::CreatePolicyTag(
    grpc::ClientContext& context, Options const& options,
    google::cloud::datacatalog::v1::CreatePolicyTagRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::datacatalog::v1::CreatePolicyTagRequest const&
                 request) {
        return child_->CreatePolicyTag(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

Status PolicyTagManagerLogging::DeletePolicyTag(
    grpc::ClientContext& context, Options const& options,
    google::cloud::datacatalog::v1::DeletePolicyTagRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::datacatalog::v1::DeletePolicyTagRequest const&
                 request) {
        return child_->DeletePolicyTag(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::datacatalog::v1::PolicyTag>
PolicyTagManagerLogging::UpdatePolicyTag(
    grpc::ClientContext& context, Options const& options,
    google::cloud::datacatalog::v1::UpdatePolicyTagRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::datacatalog::v1::UpdatePolicyTagRequest const&
                 request) {
        return child_->UpdatePolicyTag(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::datacatalog::v1::ListPolicyTagsResponse>
PolicyTagManagerLogging::ListPolicyTags(
    grpc::ClientContext& context, Options const& options,
    google::cloud::datacatalog::v1::ListPolicyTagsRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::datacatalog::v1::ListPolicyTagsRequest const&
                 request) {
        return child_->ListPolicyTags(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::datacatalog::v1::PolicyTag>
PolicyTagManagerLogging::GetPolicyTag(
    grpc::ClientContext& context, Options const& options,
    google::cloud::datacatalog::v1::GetPolicyTagRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](
          grpc::ClientContext& context, Options const& options,
          google::cloud::datacatalog::v1::GetPolicyTagRequest const& request) {
        return child_->GetPolicyTag(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::iam::v1::Policy> PolicyTagManagerLogging::GetIamPolicy(
    grpc::ClientContext& context, Options const& options,
    google::iam::v1::GetIamPolicyRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::iam::v1::GetIamPolicyRequest const& request) {
        return child_->GetIamPolicy(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::iam::v1::Policy> PolicyTagManagerLogging::SetIamPolicy(
    grpc::ClientContext& context, Options const& options,
    google::iam::v1::SetIamPolicyRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::iam::v1::SetIamPolicyRequest const& request) {
        return child_->SetIamPolicy(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::iam::v1::TestIamPermissionsResponse>
PolicyTagManagerLogging::TestIamPermissions(
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
PolicyTagManagerLogging::ListOperations(
    grpc::ClientContext& context, Options const& options,
    google::longrunning::ListOperationsRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::longrunning::ListOperationsRequest const& request) {
        return child_->ListOperations(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::longrunning::Operation> PolicyTagManagerLogging::GetOperation(
    grpc::ClientContext& context, Options const& options,
    google::longrunning::GetOperationRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::longrunning::GetOperationRequest const& request) {
        return child_->GetOperation(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

Status PolicyTagManagerLogging::DeleteOperation(
    grpc::ClientContext& context, Options const& options,
    google::longrunning::DeleteOperationRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::longrunning::DeleteOperationRequest const& request) {
        return child_->DeleteOperation(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

Status PolicyTagManagerLogging::CancelOperation(
    grpc::ClientContext& context, Options const& options,
    google::longrunning::CancelOperationRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::longrunning::CancelOperationRequest const& request) {
        return child_->CancelOperation(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace datacatalog_v1_internal
}  // namespace cloud
}  // namespace google
