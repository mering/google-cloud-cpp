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
// source: google/iam/v2/policy.proto

#include "google/cloud/iam/v2/internal/policies_connection_impl.h"
#include "google/cloud/iam/v2/internal/policies_option_defaults.h"
#include "google/cloud/background_threads.h"
#include "google/cloud/common_options.h"
#include "google/cloud/grpc_options.h"
#include "google/cloud/internal/async_long_running_operation.h"
#include "google/cloud/internal/pagination_range.h"
#include "google/cloud/internal/retry_loop.h"
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace iam_v2_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN
namespace {

std::unique_ptr<iam_v2::PoliciesRetryPolicy> retry_policy(
    Options const& options) {
  return options.get<iam_v2::PoliciesRetryPolicyOption>()->clone();
}

std::unique_ptr<BackoffPolicy> backoff_policy(Options const& options) {
  return options.get<iam_v2::PoliciesBackoffPolicyOption>()->clone();
}

std::unique_ptr<iam_v2::PoliciesConnectionIdempotencyPolicy> idempotency_policy(
    Options const& options) {
  return options.get<iam_v2::PoliciesConnectionIdempotencyPolicyOption>()
      ->clone();
}

std::unique_ptr<PollingPolicy> polling_policy(Options const& options) {
  return options.get<iam_v2::PoliciesPollingPolicyOption>()->clone();
}

}  // namespace

PoliciesConnectionImpl::PoliciesConnectionImpl(
    std::unique_ptr<google::cloud::BackgroundThreads> background,
    std::shared_ptr<iam_v2_internal::PoliciesStub> stub, Options options)
    : background_(std::move(background)),
      stub_(std::move(stub)),
      options_(internal::MergeOptions(std::move(options),
                                      PoliciesConnection::options())) {}

StreamRange<google::iam::v2::Policy> PoliciesConnectionImpl::ListPolicies(
    google::iam::v2::ListPoliciesRequest request) {
  request.clear_page_token();
  auto current = google::cloud::internal::SaveCurrentOptions();
  auto idempotency = idempotency_policy(*current)->ListPolicies(request);
  char const* function_name = __func__;
  return google::cloud::internal::MakePaginationRange<
      StreamRange<google::iam::v2::Policy>>(
      current, std::move(request),
      [idempotency, function_name, stub = stub_,
       retry =
           std::shared_ptr<iam_v2::PoliciesRetryPolicy>(retry_policy(*current)),
       backoff = std::shared_ptr<BackoffPolicy>(backoff_policy(*current))](
          Options const& options,
          google::iam::v2::ListPoliciesRequest const& r) {
        return google::cloud::internal::RetryLoop(
            retry->clone(), backoff->clone(), idempotency,
            [stub](grpc::ClientContext& context, Options const& options,
                   google::iam::v2::ListPoliciesRequest const& request) {
              return stub->ListPolicies(context, options, request);
            },
            options, r, function_name);
      },
      [](google::iam::v2::ListPoliciesResponse r) {
        std::vector<google::iam::v2::Policy> result(r.policies().size());
        auto& messages = *r.mutable_policies();
        std::move(messages.begin(), messages.end(), result.begin());
        return result;
      });
}

StatusOr<google::iam::v2::Policy> PoliciesConnectionImpl::GetPolicy(
    google::iam::v2::GetPolicyRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->GetPolicy(request),
      [this](grpc::ClientContext& context, Options const& options,
             google::iam::v2::GetPolicyRequest const& request) {
        return stub_->GetPolicy(context, options, request);
      },
      *current, request, __func__);
}

future<StatusOr<google::iam::v2::Policy>> PoliciesConnectionImpl::CreatePolicy(
    google::iam::v2::CreatePolicyRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  auto request_copy = request;
  auto const idempotent =
      idempotency_policy(*current)->CreatePolicy(request_copy);
  return google::cloud::internal::AsyncLongRunningOperation<
      google::iam::v2::Policy>(
      background_->cq(), current, std::move(request_copy),
      [stub = stub_](google::cloud::CompletionQueue& cq,
                     std::shared_ptr<grpc::ClientContext> context,
                     google::cloud::internal::ImmutableOptions options,
                     google::iam::v2::CreatePolicyRequest const& request) {
        return stub->AsyncCreatePolicy(cq, std::move(context),
                                       std::move(options), request);
      },
      [stub = stub_](google::cloud::CompletionQueue& cq,
                     std::shared_ptr<grpc::ClientContext> context,
                     google::cloud::internal::ImmutableOptions options,
                     google::longrunning::GetOperationRequest const& request) {
        return stub->AsyncGetOperation(cq, std::move(context),
                                       std::move(options), request);
      },
      [stub = stub_](
          google::cloud::CompletionQueue& cq,
          std::shared_ptr<grpc::ClientContext> context,
          google::cloud::internal::ImmutableOptions options,
          google::longrunning::CancelOperationRequest const& request) {
        return stub->AsyncCancelOperation(cq, std::move(context),
                                          std::move(options), request);
      },
      &google::cloud::internal::ExtractLongRunningResultResponse<
          google::iam::v2::Policy>,
      retry_policy(*current), backoff_policy(*current), idempotent,
      polling_policy(*current), __func__);
}

StatusOr<google::longrunning::Operation> PoliciesConnectionImpl::CreatePolicy(
    NoAwaitTag, google::iam::v2::CreatePolicyRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->CreatePolicy(request),
      [this](grpc::ClientContext& context, Options const& options,
             google::iam::v2::CreatePolicyRequest const& request) {
        return stub_->CreatePolicy(context, options, request);
      },
      *current, request, __func__);
}

future<StatusOr<google::iam::v2::Policy>> PoliciesConnectionImpl::CreatePolicy(
    google::longrunning::Operation const& operation) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  if (!operation.metadata()
           .Is<typename google::iam::v2::PolicyOperationMetadata>()) {
    return make_ready_future<StatusOr<google::iam::v2::Policy>>(
        internal::InvalidArgumentError(
            "operation does not correspond to CreatePolicy",
            GCP_ERROR_INFO().WithMetadata("operation",
                                          operation.metadata().DebugString())));
  }

  return google::cloud::internal::AsyncAwaitLongRunningOperation<
      google::iam::v2::Policy>(
      background_->cq(), current, operation,
      [stub = stub_](google::cloud::CompletionQueue& cq,
                     std::shared_ptr<grpc::ClientContext> context,
                     google::cloud::internal::ImmutableOptions options,
                     google::longrunning::GetOperationRequest const& request) {
        return stub->AsyncGetOperation(cq, std::move(context),
                                       std::move(options), request);
      },
      [stub = stub_](
          google::cloud::CompletionQueue& cq,
          std::shared_ptr<grpc::ClientContext> context,
          google::cloud::internal::ImmutableOptions options,
          google::longrunning::CancelOperationRequest const& request) {
        return stub->AsyncCancelOperation(cq, std::move(context),
                                          std::move(options), request);
      },
      &google::cloud::internal::ExtractLongRunningResultResponse<
          google::iam::v2::Policy>,
      polling_policy(*current), __func__);
}

future<StatusOr<google::iam::v2::Policy>> PoliciesConnectionImpl::UpdatePolicy(
    google::iam::v2::UpdatePolicyRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  auto request_copy = request;
  auto const idempotent =
      idempotency_policy(*current)->UpdatePolicy(request_copy);
  return google::cloud::internal::AsyncLongRunningOperation<
      google::iam::v2::Policy>(
      background_->cq(), current, std::move(request_copy),
      [stub = stub_](google::cloud::CompletionQueue& cq,
                     std::shared_ptr<grpc::ClientContext> context,
                     google::cloud::internal::ImmutableOptions options,
                     google::iam::v2::UpdatePolicyRequest const& request) {
        return stub->AsyncUpdatePolicy(cq, std::move(context),
                                       std::move(options), request);
      },
      [stub = stub_](google::cloud::CompletionQueue& cq,
                     std::shared_ptr<grpc::ClientContext> context,
                     google::cloud::internal::ImmutableOptions options,
                     google::longrunning::GetOperationRequest const& request) {
        return stub->AsyncGetOperation(cq, std::move(context),
                                       std::move(options), request);
      },
      [stub = stub_](
          google::cloud::CompletionQueue& cq,
          std::shared_ptr<grpc::ClientContext> context,
          google::cloud::internal::ImmutableOptions options,
          google::longrunning::CancelOperationRequest const& request) {
        return stub->AsyncCancelOperation(cq, std::move(context),
                                          std::move(options), request);
      },
      &google::cloud::internal::ExtractLongRunningResultResponse<
          google::iam::v2::Policy>,
      retry_policy(*current), backoff_policy(*current), idempotent,
      polling_policy(*current), __func__);
}

StatusOr<google::longrunning::Operation> PoliciesConnectionImpl::UpdatePolicy(
    NoAwaitTag, google::iam::v2::UpdatePolicyRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->UpdatePolicy(request),
      [this](grpc::ClientContext& context, Options const& options,
             google::iam::v2::UpdatePolicyRequest const& request) {
        return stub_->UpdatePolicy(context, options, request);
      },
      *current, request, __func__);
}

future<StatusOr<google::iam::v2::Policy>> PoliciesConnectionImpl::UpdatePolicy(
    google::longrunning::Operation const& operation) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  if (!operation.metadata()
           .Is<typename google::iam::v2::PolicyOperationMetadata>()) {
    return make_ready_future<StatusOr<google::iam::v2::Policy>>(
        internal::InvalidArgumentError(
            "operation does not correspond to UpdatePolicy",
            GCP_ERROR_INFO().WithMetadata("operation",
                                          operation.metadata().DebugString())));
  }

  return google::cloud::internal::AsyncAwaitLongRunningOperation<
      google::iam::v2::Policy>(
      background_->cq(), current, operation,
      [stub = stub_](google::cloud::CompletionQueue& cq,
                     std::shared_ptr<grpc::ClientContext> context,
                     google::cloud::internal::ImmutableOptions options,
                     google::longrunning::GetOperationRequest const& request) {
        return stub->AsyncGetOperation(cq, std::move(context),
                                       std::move(options), request);
      },
      [stub = stub_](
          google::cloud::CompletionQueue& cq,
          std::shared_ptr<grpc::ClientContext> context,
          google::cloud::internal::ImmutableOptions options,
          google::longrunning::CancelOperationRequest const& request) {
        return stub->AsyncCancelOperation(cq, std::move(context),
                                          std::move(options), request);
      },
      &google::cloud::internal::ExtractLongRunningResultResponse<
          google::iam::v2::Policy>,
      polling_policy(*current), __func__);
}

future<StatusOr<google::iam::v2::Policy>> PoliciesConnectionImpl::DeletePolicy(
    google::iam::v2::DeletePolicyRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  auto request_copy = request;
  auto const idempotent =
      idempotency_policy(*current)->DeletePolicy(request_copy);
  return google::cloud::internal::AsyncLongRunningOperation<
      google::iam::v2::Policy>(
      background_->cq(), current, std::move(request_copy),
      [stub = stub_](google::cloud::CompletionQueue& cq,
                     std::shared_ptr<grpc::ClientContext> context,
                     google::cloud::internal::ImmutableOptions options,
                     google::iam::v2::DeletePolicyRequest const& request) {
        return stub->AsyncDeletePolicy(cq, std::move(context),
                                       std::move(options), request);
      },
      [stub = stub_](google::cloud::CompletionQueue& cq,
                     std::shared_ptr<grpc::ClientContext> context,
                     google::cloud::internal::ImmutableOptions options,
                     google::longrunning::GetOperationRequest const& request) {
        return stub->AsyncGetOperation(cq, std::move(context),
                                       std::move(options), request);
      },
      [stub = stub_](
          google::cloud::CompletionQueue& cq,
          std::shared_ptr<grpc::ClientContext> context,
          google::cloud::internal::ImmutableOptions options,
          google::longrunning::CancelOperationRequest const& request) {
        return stub->AsyncCancelOperation(cq, std::move(context),
                                          std::move(options), request);
      },
      &google::cloud::internal::ExtractLongRunningResultResponse<
          google::iam::v2::Policy>,
      retry_policy(*current), backoff_policy(*current), idempotent,
      polling_policy(*current), __func__);
}

StatusOr<google::longrunning::Operation> PoliciesConnectionImpl::DeletePolicy(
    NoAwaitTag, google::iam::v2::DeletePolicyRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->DeletePolicy(request),
      [this](grpc::ClientContext& context, Options const& options,
             google::iam::v2::DeletePolicyRequest const& request) {
        return stub_->DeletePolicy(context, options, request);
      },
      *current, request, __func__);
}

future<StatusOr<google::iam::v2::Policy>> PoliciesConnectionImpl::DeletePolicy(
    google::longrunning::Operation const& operation) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  if (!operation.metadata()
           .Is<typename google::iam::v2::PolicyOperationMetadata>()) {
    return make_ready_future<StatusOr<google::iam::v2::Policy>>(
        internal::InvalidArgumentError(
            "operation does not correspond to DeletePolicy",
            GCP_ERROR_INFO().WithMetadata("operation",
                                          operation.metadata().DebugString())));
  }

  return google::cloud::internal::AsyncAwaitLongRunningOperation<
      google::iam::v2::Policy>(
      background_->cq(), current, operation,
      [stub = stub_](google::cloud::CompletionQueue& cq,
                     std::shared_ptr<grpc::ClientContext> context,
                     google::cloud::internal::ImmutableOptions options,
                     google::longrunning::GetOperationRequest const& request) {
        return stub->AsyncGetOperation(cq, std::move(context),
                                       std::move(options), request);
      },
      [stub = stub_](
          google::cloud::CompletionQueue& cq,
          std::shared_ptr<grpc::ClientContext> context,
          google::cloud::internal::ImmutableOptions options,
          google::longrunning::CancelOperationRequest const& request) {
        return stub->AsyncCancelOperation(cq, std::move(context),
                                          std::move(options), request);
      },
      &google::cloud::internal::ExtractLongRunningResultResponse<
          google::iam::v2::Policy>,
      polling_policy(*current), __func__);
}

StatusOr<google::longrunning::Operation> PoliciesConnectionImpl::GetOperation(
    google::longrunning::GetOperationRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->GetOperation(request),
      [this](grpc::ClientContext& context, Options const& options,
             google::longrunning::GetOperationRequest const& request) {
        return stub_->GetOperation(context, options, request);
      },
      *current, request, __func__);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace iam_v2_internal
}  // namespace cloud
}  // namespace google
