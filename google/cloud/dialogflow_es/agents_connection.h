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
// source: google/cloud/dialogflow/v2/agent.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DIALOGFLOW_ES_AGENTS_CONNECTION_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DIALOGFLOW_ES_AGENTS_CONNECTION_H

#include "google/cloud/dialogflow_es/agents_connection_idempotency_policy.h"
#include "google/cloud/dialogflow_es/internal/agents_retry_traits.h"
#include "google/cloud/backoff_policy.h"
#include "google/cloud/future.h"
#include "google/cloud/internal/retry_policy_impl.h"
#include "google/cloud/no_await_tag.h"
#include "google/cloud/options.h"
#include "google/cloud/polling_policy.h"
#include "google/cloud/status_or.h"
#include "google/cloud/stream_range.h"
#include "google/cloud/version.h"
#include "google/cloud/dialogflow/v2/agent.pb.h"
#include "google/longrunning/operations.grpc.pb.h"
#include "google/protobuf/struct.pb.h"
#include <memory>
#include <string>

namespace google {
namespace cloud {
namespace dialogflow_es {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

/// The retry policy for `AgentsConnection`.
class AgentsRetryPolicy : public ::google::cloud::RetryPolicy {
 public:
  /// Creates a new instance of the policy, reset to the initial state.
  virtual std::unique_ptr<AgentsRetryPolicy> clone() const = 0;
};

/**
 * A retry policy for `AgentsConnection` based on counting errors.
 *
 * This policy stops retrying if:
 * - An RPC returns a non-transient error.
 * - More than a prescribed number of transient failures is detected.
 *
 * In this class the following status codes are treated as transient errors:
 * - [`kUnavailable`](@ref google::cloud::StatusCode)
 */
class AgentsLimitedErrorCountRetryPolicy : public AgentsRetryPolicy {
 public:
  /**
   * Create an instance that tolerates up to @p maximum_failures transient
   * errors.
   *
   * @note Disable the retry loop by providing an instance of this policy with
   *     @p maximum_failures == 0.
   */
  explicit AgentsLimitedErrorCountRetryPolicy(int maximum_failures)
      : impl_(maximum_failures) {}

  AgentsLimitedErrorCountRetryPolicy(
      AgentsLimitedErrorCountRetryPolicy&& rhs) noexcept
      : AgentsLimitedErrorCountRetryPolicy(rhs.maximum_failures()) {}
  AgentsLimitedErrorCountRetryPolicy(
      AgentsLimitedErrorCountRetryPolicy const& rhs) noexcept
      : AgentsLimitedErrorCountRetryPolicy(rhs.maximum_failures()) {}

  int maximum_failures() const { return impl_.maximum_failures(); }

  bool OnFailure(Status const& status) override {
    return impl_.OnFailure(status);
  }
  bool IsExhausted() const override { return impl_.IsExhausted(); }
  bool IsPermanentFailure(Status const& status) const override {
    return impl_.IsPermanentFailure(status);
  }
  std::unique_ptr<AgentsRetryPolicy> clone() const override {
    return std::make_unique<AgentsLimitedErrorCountRetryPolicy>(
        maximum_failures());
  }

  // This is provided only for backwards compatibility.
  using BaseType = AgentsRetryPolicy;

 private:
  google::cloud::internal::LimitedErrorCountRetryPolicy<
      dialogflow_es_internal::AgentsRetryTraits>
      impl_;
};

/**
 * A retry policy for `AgentsConnection` based on elapsed time.
 *
 * This policy stops retrying if:
 * - An RPC returns a non-transient error.
 * - The elapsed time in the retry loop exceeds a prescribed duration.
 *
 * In this class the following status codes are treated as transient errors:
 * - [`kUnavailable`](@ref google::cloud::StatusCode)
 */
class AgentsLimitedTimeRetryPolicy : public AgentsRetryPolicy {
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
  explicit AgentsLimitedTimeRetryPolicy(
      std::chrono::duration<DurationRep, DurationPeriod> maximum_duration)
      : impl_(maximum_duration) {}

  AgentsLimitedTimeRetryPolicy(AgentsLimitedTimeRetryPolicy&& rhs) noexcept
      : AgentsLimitedTimeRetryPolicy(rhs.maximum_duration()) {}
  AgentsLimitedTimeRetryPolicy(AgentsLimitedTimeRetryPolicy const& rhs) noexcept
      : AgentsLimitedTimeRetryPolicy(rhs.maximum_duration()) {}

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
  std::unique_ptr<AgentsRetryPolicy> clone() const override {
    return std::make_unique<AgentsLimitedTimeRetryPolicy>(maximum_duration());
  }

  // This is provided only for backwards compatibility.
  using BaseType = AgentsRetryPolicy;

 private:
  google::cloud::internal::LimitedTimeRetryPolicy<
      dialogflow_es_internal::AgentsRetryTraits>
      impl_;
};

/**
 * The `AgentsConnection` object for `AgentsClient`.
 *
 * This interface defines virtual methods for each of the user-facing overload
 * sets in `AgentsClient`. This allows users to inject custom behavior
 * (e.g., with a Google Mock object) when writing tests that use objects of type
 * `AgentsClient`.
 *
 * To create a concrete instance, see `MakeAgentsConnection()`.
 *
 * For mocking, see `dialogflow_es_mocks::MockAgentsConnection`.
 */
class AgentsConnection {
 public:
  virtual ~AgentsConnection() = 0;

  virtual Options options() { return Options{}; }

  virtual StatusOr<google::cloud::dialogflow::v2::Agent> GetAgent(
      google::cloud::dialogflow::v2::GetAgentRequest const& request);

  virtual StatusOr<google::cloud::dialogflow::v2::Agent> SetAgent(
      google::cloud::dialogflow::v2::SetAgentRequest const& request);

  virtual Status DeleteAgent(
      google::cloud::dialogflow::v2::DeleteAgentRequest const& request);

  virtual StreamRange<google::cloud::dialogflow::v2::Agent> SearchAgents(
      google::cloud::dialogflow::v2::SearchAgentsRequest request);

  virtual future<StatusOr<google::protobuf::Struct>> TrainAgent(
      google::cloud::dialogflow::v2::TrainAgentRequest const& request);

  virtual StatusOr<google::longrunning::Operation> TrainAgent(
      NoAwaitTag,
      google::cloud::dialogflow::v2::TrainAgentRequest const& request);

  virtual future<StatusOr<google::protobuf::Struct>> TrainAgent(
      google::longrunning::Operation const& operation);

  virtual future<StatusOr<google::cloud::dialogflow::v2::ExportAgentResponse>>
  ExportAgent(google::cloud::dialogflow::v2::ExportAgentRequest const& request);

  virtual StatusOr<google::longrunning::Operation> ExportAgent(
      NoAwaitTag,
      google::cloud::dialogflow::v2::ExportAgentRequest const& request);

  virtual future<StatusOr<google::cloud::dialogflow::v2::ExportAgentResponse>>
  ExportAgent(google::longrunning::Operation const& operation);

  virtual future<StatusOr<google::protobuf::Struct>> ImportAgent(
      google::cloud::dialogflow::v2::ImportAgentRequest const& request);

  virtual StatusOr<google::longrunning::Operation> ImportAgent(
      NoAwaitTag,
      google::cloud::dialogflow::v2::ImportAgentRequest const& request);

  virtual future<StatusOr<google::protobuf::Struct>> ImportAgent(
      google::longrunning::Operation const& operation);

  virtual future<StatusOr<google::protobuf::Struct>> RestoreAgent(
      google::cloud::dialogflow::v2::RestoreAgentRequest const& request);

  virtual StatusOr<google::longrunning::Operation> RestoreAgent(
      NoAwaitTag,
      google::cloud::dialogflow::v2::RestoreAgentRequest const& request);

  virtual future<StatusOr<google::protobuf::Struct>> RestoreAgent(
      google::longrunning::Operation const& operation);

  virtual StatusOr<google::cloud::dialogflow::v2::ValidationResult>
  GetValidationResult(
      google::cloud::dialogflow::v2::GetValidationResultRequest const& request);

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
 * A factory function to construct an object of type `AgentsConnection`.
 *
 * The returned connection object should not be used directly; instead it
 * should be passed as an argument to the constructor of AgentsClient.
 *
 * The optional @p options argument may be used to configure aspects of the
 * returned `AgentsConnection`. Expected options are any of the types in
 * the following option lists:
 *
 * - `google::cloud::CommonOptionList`
 * - `google::cloud::GrpcOptionList`
 * - `google::cloud::UnifiedCredentialsOptionList`
 * - `google::cloud::dialogflow_es::AgentsPolicyOptionList`
 *
 * @note Unexpected options will be ignored. To log unexpected options instead,
 *     set `GOOGLE_CLOUD_CPP_ENABLE_CLOG=yes` in the environment.
 *
 * @param location Sets the prefix for the default `EndpointOption` value.
 * @param options (optional) Configure the `AgentsConnection` created by
 * this function.
 */
std::shared_ptr<AgentsConnection> MakeAgentsConnection(
    std::string const& location, Options options = {});

/**
 * A backwards-compatible version of the previous factory function.  Unless
 * the service also offers a global endpoint, the default value of the
 * `EndpointOption` may be useless, in which case it must be overridden.
 *
 * @deprecated Please use the `location` overload instead.
 */
std::shared_ptr<AgentsConnection> MakeAgentsConnection(Options options = {});

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace dialogflow_es
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DIALOGFLOW_ES_AGENTS_CONNECTION_H
