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
// source: google/cloud/discoveryengine/v1/conversational_search_service.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DISCOVERYENGINE_V1_CONVERSATIONAL_SEARCH_CONNECTION_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DISCOVERYENGINE_V1_CONVERSATIONAL_SEARCH_CONNECTION_H

#include "google/cloud/discoveryengine/v1/conversational_search_connection_idempotency_policy.h"
#include "google/cloud/discoveryengine/v1/conversational_search_service.pb.h"
#include "google/cloud/discoveryengine/v1/internal/conversational_search_retry_traits.h"
#include "google/cloud/backoff_policy.h"
#include "google/cloud/internal/retry_policy_impl.h"
#include "google/cloud/options.h"
#include "google/cloud/status_or.h"
#include "google/cloud/stream_range.h"
#include "google/cloud/version.h"
#include <memory>

namespace google {
namespace cloud {
namespace discoveryengine_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

/// The retry policy for `ConversationalSearchServiceConnection`.
class ConversationalSearchServiceRetryPolicy
    : public ::google::cloud::RetryPolicy {
 public:
  /// Creates a new instance of the policy, reset to the initial state.
  virtual std::unique_ptr<ConversationalSearchServiceRetryPolicy> clone()
      const = 0;
};

/**
 * A retry policy for `ConversationalSearchServiceConnection` based on counting
 * errors.
 *
 * This policy stops retrying if:
 * - An RPC returns a non-transient error.
 * - More than a prescribed number of transient failures is detected.
 *
 * In this class the following status codes are treated as transient errors:
 * - [`kUnavailable`](@ref google::cloud::StatusCode)
 */
class ConversationalSearchServiceLimitedErrorCountRetryPolicy
    : public ConversationalSearchServiceRetryPolicy {
 public:
  /**
   * Create an instance that tolerates up to @p maximum_failures transient
   * errors.
   *
   * @note Disable the retry loop by providing an instance of this policy with
   *     @p maximum_failures == 0.
   */
  explicit ConversationalSearchServiceLimitedErrorCountRetryPolicy(
      int maximum_failures)
      : impl_(maximum_failures) {}

  ConversationalSearchServiceLimitedErrorCountRetryPolicy(
      ConversationalSearchServiceLimitedErrorCountRetryPolicy&& rhs) noexcept
      : ConversationalSearchServiceLimitedErrorCountRetryPolicy(
            rhs.maximum_failures()) {}
  ConversationalSearchServiceLimitedErrorCountRetryPolicy(
      ConversationalSearchServiceLimitedErrorCountRetryPolicy const&
          rhs) noexcept
      : ConversationalSearchServiceLimitedErrorCountRetryPolicy(
            rhs.maximum_failures()) {}

  int maximum_failures() const { return impl_.maximum_failures(); }

  bool OnFailure(Status const& status) override {
    return impl_.OnFailure(status);
  }
  bool IsExhausted() const override { return impl_.IsExhausted(); }
  bool IsPermanentFailure(Status const& status) const override {
    return impl_.IsPermanentFailure(status);
  }
  std::unique_ptr<ConversationalSearchServiceRetryPolicy> clone()
      const override {
    return std::make_unique<
        ConversationalSearchServiceLimitedErrorCountRetryPolicy>(
        maximum_failures());
  }

  // This is provided only for backwards compatibility.
  using BaseType = ConversationalSearchServiceRetryPolicy;

 private:
  google::cloud::internal::LimitedErrorCountRetryPolicy<
      discoveryengine_v1_internal::ConversationalSearchServiceRetryTraits>
      impl_;
};

/**
 * A retry policy for `ConversationalSearchServiceConnection` based on elapsed
 * time.
 *
 * This policy stops retrying if:
 * - An RPC returns a non-transient error.
 * - The elapsed time in the retry loop exceeds a prescribed duration.
 *
 * In this class the following status codes are treated as transient errors:
 * - [`kUnavailable`](@ref google::cloud::StatusCode)
 */
class ConversationalSearchServiceLimitedTimeRetryPolicy
    : public ConversationalSearchServiceRetryPolicy {
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
  explicit ConversationalSearchServiceLimitedTimeRetryPolicy(
      std::chrono::duration<DurationRep, DurationPeriod> maximum_duration)
      : impl_(maximum_duration) {}

  ConversationalSearchServiceLimitedTimeRetryPolicy(
      ConversationalSearchServiceLimitedTimeRetryPolicy&& rhs) noexcept
      : ConversationalSearchServiceLimitedTimeRetryPolicy(
            rhs.maximum_duration()) {}
  ConversationalSearchServiceLimitedTimeRetryPolicy(
      ConversationalSearchServiceLimitedTimeRetryPolicy const& rhs) noexcept
      : ConversationalSearchServiceLimitedTimeRetryPolicy(
            rhs.maximum_duration()) {}

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
  std::unique_ptr<ConversationalSearchServiceRetryPolicy> clone()
      const override {
    return std::make_unique<ConversationalSearchServiceLimitedTimeRetryPolicy>(
        maximum_duration());
  }

  // This is provided only for backwards compatibility.
  using BaseType = ConversationalSearchServiceRetryPolicy;

 private:
  google::cloud::internal::LimitedTimeRetryPolicy<
      discoveryengine_v1_internal::ConversationalSearchServiceRetryTraits>
      impl_;
};

/**
 * The `ConversationalSearchServiceConnection` object for
 * `ConversationalSearchServiceClient`.
 *
 * This interface defines virtual methods for each of the user-facing overload
 * sets in `ConversationalSearchServiceClient`. This allows users to inject
 * custom behavior (e.g., with a Google Mock object) when writing tests that use
 * objects of type `ConversationalSearchServiceClient`.
 *
 * To create a concrete instance, see
 * `MakeConversationalSearchServiceConnection()`.
 *
 * For mocking, see
 * `discoveryengine_v1_mocks::MockConversationalSearchServiceConnection`.
 */
class ConversationalSearchServiceConnection {
 public:
  virtual ~ConversationalSearchServiceConnection() = 0;

  virtual Options options() { return Options{}; }

  virtual StatusOr<
      google::cloud::discoveryengine::v1::ConverseConversationResponse>
  ConverseConversation(
      google::cloud::discoveryengine::v1::ConverseConversationRequest const&
          request);

  virtual StatusOr<google::cloud::discoveryengine::v1::Conversation>
  CreateConversation(
      google::cloud::discoveryengine::v1::CreateConversationRequest const&
          request);

  virtual Status DeleteConversation(
      google::cloud::discoveryengine::v1::DeleteConversationRequest const&
          request);

  virtual StatusOr<google::cloud::discoveryengine::v1::Conversation>
  UpdateConversation(
      google::cloud::discoveryengine::v1::UpdateConversationRequest const&
          request);

  virtual StatusOr<google::cloud::discoveryengine::v1::Conversation>
  GetConversation(
      google::cloud::discoveryengine::v1::GetConversationRequest const&
          request);

  virtual StreamRange<google::cloud::discoveryengine::v1::Conversation>
  ListConversations(
      google::cloud::discoveryengine::v1::ListConversationsRequest request);

  virtual StatusOr<google::cloud::discoveryengine::v1::AnswerQueryResponse>
  AnswerQuery(
      google::cloud::discoveryengine::v1::AnswerQueryRequest const& request);

  virtual StatusOr<google::cloud::discoveryengine::v1::Answer> GetAnswer(
      google::cloud::discoveryengine::v1::GetAnswerRequest const& request);

  virtual StatusOr<google::cloud::discoveryengine::v1::Session> CreateSession(
      google::cloud::discoveryengine::v1::CreateSessionRequest const& request);

  virtual Status DeleteSession(
      google::cloud::discoveryengine::v1::DeleteSessionRequest const& request);

  virtual StatusOr<google::cloud::discoveryengine::v1::Session> UpdateSession(
      google::cloud::discoveryengine::v1::UpdateSessionRequest const& request);

  virtual StatusOr<google::cloud::discoveryengine::v1::Session> GetSession(
      google::cloud::discoveryengine::v1::GetSessionRequest const& request);

  virtual StreamRange<google::cloud::discoveryengine::v1::Session> ListSessions(
      google::cloud::discoveryengine::v1::ListSessionsRequest request);

  virtual StreamRange<google::longrunning::Operation> ListOperations(
      google::longrunning::ListOperationsRequest request);

  virtual StatusOr<google::longrunning::Operation> GetOperation(
      google::longrunning::GetOperationRequest const& request);

  virtual Status CancelOperation(
      google::longrunning::CancelOperationRequest const& request);
};

/**
 * A factory function to construct an object of type
 * `ConversationalSearchServiceConnection`.
 *
 * The returned connection object should not be used directly; instead it
 * should be passed as an argument to the constructor of
 * ConversationalSearchServiceClient.
 *
 * The optional @p options argument may be used to configure aspects of the
 * returned `ConversationalSearchServiceConnection`. Expected options are any of
 * the types in the following option lists:
 *
 * - `google::cloud::CommonOptionList`
 * - `google::cloud::GrpcOptionList`
 * - `google::cloud::UnifiedCredentialsOptionList`
 * -
 * `google::cloud::discoveryengine_v1::ConversationalSearchServicePolicyOptionList`
 *
 * @note Unexpected options will be ignored. To log unexpected options instead,
 *     set `GOOGLE_CLOUD_CPP_ENABLE_CLOG=yes` in the environment.
 *
 * @param options (optional) Configure the
 * `ConversationalSearchServiceConnection` created by this function.
 */
std::shared_ptr<ConversationalSearchServiceConnection>
MakeConversationalSearchServiceConnection(Options options = {});

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace discoveryengine_v1
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DISCOVERYENGINE_V1_CONVERSATIONAL_SEARCH_CONNECTION_H
