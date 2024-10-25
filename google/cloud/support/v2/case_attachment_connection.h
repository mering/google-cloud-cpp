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
// source: google/cloud/support/v2/attachment_service.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_SUPPORT_V2_CASE_ATTACHMENT_CONNECTION_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_SUPPORT_V2_CASE_ATTACHMENT_CONNECTION_H

#include "google/cloud/support/v2/case_attachment_connection_idempotency_policy.h"
#include "google/cloud/support/v2/internal/case_attachment_retry_traits.h"
#include "google/cloud/backoff_policy.h"
#include "google/cloud/internal/retry_policy_impl.h"
#include "google/cloud/options.h"
#include "google/cloud/status_or.h"
#include "google/cloud/stream_range.h"
#include "google/cloud/version.h"
#include "google/cloud/support/v2/attachment_service.pb.h"
#include <memory>

namespace google {
namespace cloud {
namespace support_v2 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

/// The retry policy for `CaseAttachmentServiceConnection`.
class CaseAttachmentServiceRetryPolicy : public ::google::cloud::RetryPolicy {
 public:
  /// Creates a new instance of the policy, reset to the initial state.
  virtual std::unique_ptr<CaseAttachmentServiceRetryPolicy> clone() const = 0;
};

/**
 * A retry policy for `CaseAttachmentServiceConnection` based on counting
 * errors.
 *
 * This policy stops retrying if:
 * - An RPC returns a non-transient error.
 * - More than a prescribed number of transient failures is detected.
 *
 * In this class the following status codes are treated as transient errors:
 * - [`kUnavailable`](@ref google::cloud::StatusCode)
 */
class CaseAttachmentServiceLimitedErrorCountRetryPolicy
    : public CaseAttachmentServiceRetryPolicy {
 public:
  /**
   * Create an instance that tolerates up to @p maximum_failures transient
   * errors.
   *
   * @note Disable the retry loop by providing an instance of this policy with
   *     @p maximum_failures == 0.
   */
  explicit CaseAttachmentServiceLimitedErrorCountRetryPolicy(
      int maximum_failures)
      : impl_(maximum_failures) {}

  CaseAttachmentServiceLimitedErrorCountRetryPolicy(
      CaseAttachmentServiceLimitedErrorCountRetryPolicy&& rhs) noexcept
      : CaseAttachmentServiceLimitedErrorCountRetryPolicy(
            rhs.maximum_failures()) {}
  CaseAttachmentServiceLimitedErrorCountRetryPolicy(
      CaseAttachmentServiceLimitedErrorCountRetryPolicy const& rhs) noexcept
      : CaseAttachmentServiceLimitedErrorCountRetryPolicy(
            rhs.maximum_failures()) {}

  int maximum_failures() const { return impl_.maximum_failures(); }

  bool OnFailure(Status const& status) override {
    return impl_.OnFailure(status);
  }
  bool IsExhausted() const override { return impl_.IsExhausted(); }
  bool IsPermanentFailure(Status const& status) const override {
    return impl_.IsPermanentFailure(status);
  }
  std::unique_ptr<CaseAttachmentServiceRetryPolicy> clone() const override {
    return std::make_unique<CaseAttachmentServiceLimitedErrorCountRetryPolicy>(
        maximum_failures());
  }

  // This is provided only for backwards compatibility.
  using BaseType = CaseAttachmentServiceRetryPolicy;

 private:
  google::cloud::internal::LimitedErrorCountRetryPolicy<
      support_v2_internal::CaseAttachmentServiceRetryTraits>
      impl_;
};

/**
 * A retry policy for `CaseAttachmentServiceConnection` based on elapsed time.
 *
 * This policy stops retrying if:
 * - An RPC returns a non-transient error.
 * - The elapsed time in the retry loop exceeds a prescribed duration.
 *
 * In this class the following status codes are treated as transient errors:
 * - [`kUnavailable`](@ref google::cloud::StatusCode)
 */
class CaseAttachmentServiceLimitedTimeRetryPolicy
    : public CaseAttachmentServiceRetryPolicy {
 public:
  /**
   * Constructor given a `std::chrono::duration<>` object.
   *
   * @tparam DurationRep a placeholder to match the `Rep` tparam for @p
   *     duration's type. The semantics of this template parameter are
   *     documented in `std::chrono::duration<>`. In brief, the underlying
   *     arithmetic type used to store the number of ticks. For our purposes it
   *     is simply a formal parameter.
   * @tparam DurationPeriod a placeholder to match the `Period` tparam for @p
   *     duration's type. The semantics of this template parameter are
   *     documented in `std::chrono::duration<>`. In brief, the length of the
   *     tick in seconds, expressed as a `std::ratio<>`. For our purposes it is
   *     simply a formal parameter.
   * @param maximum_duration the maximum time allowed before the policy expires.
   *     While the application can express this time in any units they desire,
   *     the class truncates to milliseconds.
   *
   * @see https://en.cppreference.com/w/cpp/chrono/duration for more information
   *     about `std::chrono::duration`.
   */
  template <typename DurationRep, typename DurationPeriod>
  explicit CaseAttachmentServiceLimitedTimeRetryPolicy(
      std::chrono::duration<DurationRep, DurationPeriod> maximum_duration)
      : impl_(maximum_duration) {}

  CaseAttachmentServiceLimitedTimeRetryPolicy(
      CaseAttachmentServiceLimitedTimeRetryPolicy&& rhs) noexcept
      : CaseAttachmentServiceLimitedTimeRetryPolicy(rhs.maximum_duration()) {}
  CaseAttachmentServiceLimitedTimeRetryPolicy(
      CaseAttachmentServiceLimitedTimeRetryPolicy const& rhs) noexcept
      : CaseAttachmentServiceLimitedTimeRetryPolicy(rhs.maximum_duration()) {}

  std::chrono::milliseconds maximum_duration() const {
    return impl_.maximum_duration();
  }

  bool OnFailure(Status const& status) override {
    return impl_.OnFailure(status);
  }
  bool IsExhausted() const override { return impl_.IsExhausted(); }
  bool IsPermanentFailure(Status const& status) const override {
    return impl_.IsPermanentFailure(status);
  }
  std::unique_ptr<CaseAttachmentServiceRetryPolicy> clone() const override {
    return std::make_unique<CaseAttachmentServiceLimitedTimeRetryPolicy>(
        maximum_duration());
  }

  // This is provided only for backwards compatibility.
  using BaseType = CaseAttachmentServiceRetryPolicy;

 private:
  google::cloud::internal::LimitedTimeRetryPolicy<
      support_v2_internal::CaseAttachmentServiceRetryTraits>
      impl_;
};

/**
 * The `CaseAttachmentServiceConnection` object for
 * `CaseAttachmentServiceClient`.
 *
 * This interface defines virtual methods for each of the user-facing overload
 * sets in `CaseAttachmentServiceClient`. This allows users to inject custom
 * behavior (e.g., with a Google Mock object) when writing tests that use
 * objects of type `CaseAttachmentServiceClient`.
 *
 * To create a concrete instance, see `MakeCaseAttachmentServiceConnection()`.
 *
 * For mocking, see `support_v2_mocks::MockCaseAttachmentServiceConnection`.
 */
class CaseAttachmentServiceConnection {
 public:
  virtual ~CaseAttachmentServiceConnection() = 0;

  virtual Options options() { return Options{}; }

  virtual StreamRange<google::cloud::support::v2::Attachment> ListAttachments(
      google::cloud::support::v2::ListAttachmentsRequest request);
};

/**
 * A factory function to construct an object of type
 * `CaseAttachmentServiceConnection`.
 *
 * The returned connection object should not be used directly; instead it
 * should be passed as an argument to the constructor of
 * CaseAttachmentServiceClient.
 *
 * The optional @p options argument may be used to configure aspects of the
 * returned `CaseAttachmentServiceConnection`. Expected options are any of the
 * types in the following option lists:
 *
 * - `google::cloud::CommonOptionList`
 * - `google::cloud::GrpcOptionList`
 * - `google::cloud::UnifiedCredentialsOptionList`
 * - `google::cloud::support_v2::CaseAttachmentServicePolicyOptionList`
 *
 * @note Unexpected options will be ignored. To log unexpected options instead,
 *     set `GOOGLE_CLOUD_CPP_ENABLE_CLOG=yes` in the environment.
 *
 * @param options (optional) Configure the `CaseAttachmentServiceConnection`
 * created by this function.
 */
std::shared_ptr<CaseAttachmentServiceConnection>
MakeCaseAttachmentServiceConnection(Options options = {});

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace support_v2
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_SUPPORT_V2_CASE_ATTACHMENT_CONNECTION_H
