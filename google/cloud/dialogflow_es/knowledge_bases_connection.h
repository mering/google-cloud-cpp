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
// source: google/cloud/dialogflow/v2/knowledge_base.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DIALOGFLOW_ES_KNOWLEDGE_BASES_CONNECTION_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DIALOGFLOW_ES_KNOWLEDGE_BASES_CONNECTION_H

#include "google/cloud/dialogflow_es/internal/knowledge_bases_retry_traits.h"
#include "google/cloud/dialogflow_es/knowledge_bases_connection_idempotency_policy.h"
#include "google/cloud/backoff_policy.h"
#include "google/cloud/internal/retry_policy_impl.h"
#include "google/cloud/options.h"
#include "google/cloud/status_or.h"
#include "google/cloud/stream_range.h"
#include "google/cloud/version.h"
#include <google/cloud/dialogflow/v2/knowledge_base.pb.h>
#include <memory>
#include <string>

namespace google {
namespace cloud {
namespace dialogflow_es {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

/// The retry policy for `KnowledgeBasesConnection`.
class KnowledgeBasesRetryPolicy : public ::google::cloud::RetryPolicy {
 public:
  /// Creates a new instance of the policy, reset to the initial state.
  virtual std::unique_ptr<KnowledgeBasesRetryPolicy> clone() const = 0;
};

/**
 * A retry policy for `KnowledgeBasesConnection` based on counting errors.
 *
 * This policy stops retrying if:
 * - An RPC returns a non-transient error.
 * - More than a prescribed number of transient failures is detected.
 *
 * In this class the following status codes are treated as transient errors:
 * - [`kUnavailable`](@ref google::cloud::StatusCode)
 */
class KnowledgeBasesLimitedErrorCountRetryPolicy
    : public KnowledgeBasesRetryPolicy {
 public:
  /**
   * Create an instance that tolerates up to @p maximum_failures transient
   * errors.
   *
   * @note Disable the retry loop by providing an instance of this policy with
   *     @p maximum_failures == 0.
   */
  explicit KnowledgeBasesLimitedErrorCountRetryPolicy(int maximum_failures)
      : impl_(maximum_failures) {}

  KnowledgeBasesLimitedErrorCountRetryPolicy(
      KnowledgeBasesLimitedErrorCountRetryPolicy&& rhs) noexcept
      : KnowledgeBasesLimitedErrorCountRetryPolicy(rhs.maximum_failures()) {}
  KnowledgeBasesLimitedErrorCountRetryPolicy(
      KnowledgeBasesLimitedErrorCountRetryPolicy const& rhs) noexcept
      : KnowledgeBasesLimitedErrorCountRetryPolicy(rhs.maximum_failures()) {}

  int maximum_failures() const { return impl_.maximum_failures(); }

  bool OnFailure(Status const& status) override {
    return impl_.OnFailure(status);
  }
  bool IsExhausted() const override { return impl_.IsExhausted(); }
  bool IsPermanentFailure(Status const& status) const override {
    return impl_.IsPermanentFailure(status);
  }
  std::unique_ptr<KnowledgeBasesRetryPolicy> clone() const override {
    return std::make_unique<KnowledgeBasesLimitedErrorCountRetryPolicy>(
        maximum_failures());
  }

  // This is provided only for backwards compatibility.
  using BaseType = KnowledgeBasesRetryPolicy;

 private:
  google::cloud::internal::LimitedErrorCountRetryPolicy<
      dialogflow_es_internal::KnowledgeBasesRetryTraits>
      impl_;
};

/**
 * A retry policy for `KnowledgeBasesConnection` based on elapsed time.
 *
 * This policy stops retrying if:
 * - An RPC returns a non-transient error.
 * - The elapsed time in the retry loop exceeds a prescribed duration.
 *
 * In this class the following status codes are treated as transient errors:
 * - [`kUnavailable`](@ref google::cloud::StatusCode)
 */
class KnowledgeBasesLimitedTimeRetryPolicy : public KnowledgeBasesRetryPolicy {
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
  explicit KnowledgeBasesLimitedTimeRetryPolicy(
      std::chrono::duration<DurationRep, DurationPeriod> maximum_duration)
      : impl_(maximum_duration) {}

  KnowledgeBasesLimitedTimeRetryPolicy(
      KnowledgeBasesLimitedTimeRetryPolicy&& rhs) noexcept
      : KnowledgeBasesLimitedTimeRetryPolicy(rhs.maximum_duration()) {}
  KnowledgeBasesLimitedTimeRetryPolicy(
      KnowledgeBasesLimitedTimeRetryPolicy const& rhs) noexcept
      : KnowledgeBasesLimitedTimeRetryPolicy(rhs.maximum_duration()) {}

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
  std::unique_ptr<KnowledgeBasesRetryPolicy> clone() const override {
    return std::make_unique<KnowledgeBasesLimitedTimeRetryPolicy>(
        maximum_duration());
  }

  // This is provided only for backwards compatibility.
  using BaseType = KnowledgeBasesRetryPolicy;

 private:
  google::cloud::internal::LimitedTimeRetryPolicy<
      dialogflow_es_internal::KnowledgeBasesRetryTraits>
      impl_;
};

/**
 * The `KnowledgeBasesConnection` object for `KnowledgeBasesClient`.
 *
 * This interface defines virtual methods for each of the user-facing overload
 * sets in `KnowledgeBasesClient`. This allows users to inject custom behavior
 * (e.g., with a Google Mock object) when writing tests that use objects of type
 * `KnowledgeBasesClient`.
 *
 * To create a concrete instance, see `MakeKnowledgeBasesConnection()`.
 *
 * For mocking, see `dialogflow_es_mocks::MockKnowledgeBasesConnection`.
 */
class KnowledgeBasesConnection {
 public:
  virtual ~KnowledgeBasesConnection() = 0;

  virtual Options options() { return Options{}; }

  virtual StreamRange<google::cloud::dialogflow::v2::KnowledgeBase>
  ListKnowledgeBases(
      google::cloud::dialogflow::v2::ListKnowledgeBasesRequest request);

  virtual StatusOr<google::cloud::dialogflow::v2::KnowledgeBase>
  GetKnowledgeBase(
      google::cloud::dialogflow::v2::GetKnowledgeBaseRequest const& request);

  virtual StatusOr<google::cloud::dialogflow::v2::KnowledgeBase>
  CreateKnowledgeBase(
      google::cloud::dialogflow::v2::CreateKnowledgeBaseRequest const& request);

  virtual Status DeleteKnowledgeBase(
      google::cloud::dialogflow::v2::DeleteKnowledgeBaseRequest const& request);

  virtual StatusOr<google::cloud::dialogflow::v2::KnowledgeBase>
  UpdateKnowledgeBase(
      google::cloud::dialogflow::v2::UpdateKnowledgeBaseRequest const& request);

  virtual StreamRange<google::cloud::location::Location> ListLocations(
      google::cloud::location::ListLocationsRequest request);

  virtual StatusOr<google::cloud::location::Location> GetLocation(
      google::cloud::location::GetLocationRequest const& request);

  virtual StreamRange<google::longrunning::Operation> ListOperations(
      google::longrunning::ListOperationsRequest request);

  virtual StatusOr<google::longrunning::Operation> GetOperation(
      google::longrunning::GetOperationRequest const& request);

  virtual Status CancelOperation(
      google::longrunning::CancelOperationRequest const& request);
};

/**
 * A factory function to construct an object of type `KnowledgeBasesConnection`.
 *
 * The returned connection object should not be used directly; instead it
 * should be passed as an argument to the constructor of KnowledgeBasesClient.
 *
 * The optional @p options argument may be used to configure aspects of the
 * returned `KnowledgeBasesConnection`. Expected options are any of the types in
 * the following option lists:
 *
 * - `google::cloud::CommonOptionList`
 * - `google::cloud::GrpcOptionList`
 * - `google::cloud::UnifiedCredentialsOptionList`
 * - `google::cloud::dialogflow_es::KnowledgeBasesPolicyOptionList`
 *
 * @note Unexpected options will be ignored. To log unexpected options instead,
 *     set `GOOGLE_CLOUD_CPP_ENABLE_CLOG=yes` in the environment.
 *
 * @param location Sets the prefix for the default `EndpointOption` value.
 * @param options (optional) Configure the `KnowledgeBasesConnection` created by
 * this function.
 */
std::shared_ptr<KnowledgeBasesConnection> MakeKnowledgeBasesConnection(
    std::string const& location, Options options = {});

/**
 * A backwards-compatible version of the previous factory function.  Unless
 * the service also offers a global endpoint, the default value of the
 * `EndpointOption` may be useless, in which case it must be overridden.
 *
 * @deprecated Please use the `location` overload instead.
 */
std::shared_ptr<KnowledgeBasesConnection> MakeKnowledgeBasesConnection(
    Options options = {});

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace dialogflow_es
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DIALOGFLOW_ES_KNOWLEDGE_BASES_CONNECTION_H
