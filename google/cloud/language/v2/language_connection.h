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
// source: google/cloud/language/v2/language_service.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_LANGUAGE_V2_LANGUAGE_CONNECTION_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_LANGUAGE_V2_LANGUAGE_CONNECTION_H

#include "google/cloud/language/v2/internal/language_retry_traits.h"
#include "google/cloud/language/v2/language_connection_idempotency_policy.h"
#include "google/cloud/backoff_policy.h"
#include "google/cloud/internal/retry_policy_impl.h"
#include "google/cloud/options.h"
#include "google/cloud/status_or.h"
#include "google/cloud/version.h"
#include "google/cloud/language/v2/language_service.pb.h"
#include <memory>

namespace google {
namespace cloud {
namespace language_v2 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

/// The retry policy for `LanguageServiceConnection`.
class LanguageServiceRetryPolicy : public ::google::cloud::RetryPolicy {
 public:
  /// Creates a new instance of the policy, reset to the initial state.
  virtual std::unique_ptr<LanguageServiceRetryPolicy> clone() const = 0;
};

/**
 * A retry policy for `LanguageServiceConnection` based on counting errors.
 *
 * This policy stops retrying if:
 * - An RPC returns a non-transient error.
 * - More than a prescribed number of transient failures is detected.
 *
 * In this class the following status codes are treated as transient errors:
 * - [`kUnavailable`](@ref google::cloud::StatusCode)
 */
class LanguageServiceLimitedErrorCountRetryPolicy
    : public LanguageServiceRetryPolicy {
 public:
  /**
   * Create an instance that tolerates up to @p maximum_failures transient
   * errors.
   *
   * @note Disable the retry loop by providing an instance of this policy with
   *     @p maximum_failures == 0.
   */
  explicit LanguageServiceLimitedErrorCountRetryPolicy(int maximum_failures)
      : impl_(maximum_failures) {}

  LanguageServiceLimitedErrorCountRetryPolicy(
      LanguageServiceLimitedErrorCountRetryPolicy&& rhs) noexcept
      : LanguageServiceLimitedErrorCountRetryPolicy(rhs.maximum_failures()) {}
  LanguageServiceLimitedErrorCountRetryPolicy(
      LanguageServiceLimitedErrorCountRetryPolicy const& rhs) noexcept
      : LanguageServiceLimitedErrorCountRetryPolicy(rhs.maximum_failures()) {}

  int maximum_failures() const { return impl_.maximum_failures(); }

  bool OnFailure(Status const& status) override {
    return impl_.OnFailure(status);
  }
  bool IsExhausted() const override { return impl_.IsExhausted(); }
  bool IsPermanentFailure(Status const& status) const override {
    return impl_.IsPermanentFailure(status);
  }
  std::unique_ptr<LanguageServiceRetryPolicy> clone() const override {
    return std::make_unique<LanguageServiceLimitedErrorCountRetryPolicy>(
        maximum_failures());
  }

  // This is provided only for backwards compatibility.
  using BaseType = LanguageServiceRetryPolicy;

 private:
  google::cloud::internal::LimitedErrorCountRetryPolicy<
      language_v2_internal::LanguageServiceRetryTraits>
      impl_;
};

/**
 * A retry policy for `LanguageServiceConnection` based on elapsed time.
 *
 * This policy stops retrying if:
 * - An RPC returns a non-transient error.
 * - The elapsed time in the retry loop exceeds a prescribed duration.
 *
 * In this class the following status codes are treated as transient errors:
 * - [`kUnavailable`](@ref google::cloud::StatusCode)
 */
class LanguageServiceLimitedTimeRetryPolicy
    : public LanguageServiceRetryPolicy {
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
  explicit LanguageServiceLimitedTimeRetryPolicy(
      std::chrono::duration<DurationRep, DurationPeriod> maximum_duration)
      : impl_(maximum_duration) {}

  LanguageServiceLimitedTimeRetryPolicy(
      LanguageServiceLimitedTimeRetryPolicy&& rhs) noexcept
      : LanguageServiceLimitedTimeRetryPolicy(rhs.maximum_duration()) {}
  LanguageServiceLimitedTimeRetryPolicy(
      LanguageServiceLimitedTimeRetryPolicy const& rhs) noexcept
      : LanguageServiceLimitedTimeRetryPolicy(rhs.maximum_duration()) {}

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
  std::unique_ptr<LanguageServiceRetryPolicy> clone() const override {
    return std::make_unique<LanguageServiceLimitedTimeRetryPolicy>(
        maximum_duration());
  }

  // This is provided only for backwards compatibility.
  using BaseType = LanguageServiceRetryPolicy;

 private:
  google::cloud::internal::LimitedTimeRetryPolicy<
      language_v2_internal::LanguageServiceRetryTraits>
      impl_;
};

/**
 * The `LanguageServiceConnection` object for `LanguageServiceClient`.
 *
 * This interface defines virtual methods for each of the user-facing overload
 * sets in `LanguageServiceClient`. This allows users to inject custom behavior
 * (e.g., with a Google Mock object) when writing tests that use objects of type
 * `LanguageServiceClient`.
 *
 * To create a concrete instance, see `MakeLanguageServiceConnection()`.
 *
 * For mocking, see `language_v2_mocks::MockLanguageServiceConnection`.
 */
class LanguageServiceConnection {
 public:
  virtual ~LanguageServiceConnection() = 0;

  virtual Options options() { return Options{}; }

  virtual StatusOr<google::cloud::language::v2::AnalyzeSentimentResponse>
  AnalyzeSentiment(
      google::cloud::language::v2::AnalyzeSentimentRequest const& request);

  virtual StatusOr<google::cloud::language::v2::AnalyzeEntitiesResponse>
  AnalyzeEntities(
      google::cloud::language::v2::AnalyzeEntitiesRequest const& request);

  virtual StatusOr<google::cloud::language::v2::ClassifyTextResponse>
  ClassifyText(google::cloud::language::v2::ClassifyTextRequest const& request);

  virtual StatusOr<google::cloud::language::v2::ModerateTextResponse>
  ModerateText(google::cloud::language::v2::ModerateTextRequest const& request);

  virtual StatusOr<google::cloud::language::v2::AnnotateTextResponse>
  AnnotateText(google::cloud::language::v2::AnnotateTextRequest const& request);
};

/**
 * A factory function to construct an object of type
 * `LanguageServiceConnection`.
 *
 * The returned connection object should not be used directly; instead it
 * should be passed as an argument to the constructor of LanguageServiceClient.
 *
 * The optional @p options argument may be used to configure aspects of the
 * returned `LanguageServiceConnection`. Expected options are any of the types
 * in the following option lists:
 *
 * - `google::cloud::CommonOptionList`
 * - `google::cloud::GrpcOptionList`
 * - `google::cloud::UnifiedCredentialsOptionList`
 * - `google::cloud::language_v2::LanguageServicePolicyOptionList`
 *
 * @note Unexpected options will be ignored. To log unexpected options instead,
 *     set `GOOGLE_CLOUD_CPP_ENABLE_CLOG=yes` in the environment.
 *
 * @param options (optional) Configure the `LanguageServiceConnection` created
 * by this function.
 */
std::shared_ptr<LanguageServiceConnection> MakeLanguageServiceConnection(
    Options options = {});

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace language_v2
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_LANGUAGE_V2_LANGUAGE_CONNECTION_H
