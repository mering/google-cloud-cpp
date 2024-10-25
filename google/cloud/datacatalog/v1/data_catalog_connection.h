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
// source: google/cloud/datacatalog/v1/datacatalog.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DATACATALOG_V1_DATA_CATALOG_CONNECTION_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DATACATALOG_V1_DATA_CATALOG_CONNECTION_H

#include "google/cloud/datacatalog/v1/data_catalog_connection_idempotency_policy.h"
#include "google/cloud/datacatalog/v1/internal/data_catalog_retry_traits.h"
#include "google/cloud/backoff_policy.h"
#include "google/cloud/future.h"
#include "google/cloud/internal/retry_policy_impl.h"
#include "google/cloud/no_await_tag.h"
#include "google/cloud/options.h"
#include "google/cloud/polling_policy.h"
#include "google/cloud/status_or.h"
#include "google/cloud/stream_range.h"
#include "google/cloud/version.h"
#include "google/cloud/datacatalog/v1/datacatalog.pb.h"
#include "google/longrunning/operations.grpc.pb.h"
#include <memory>

namespace google {
namespace cloud {
namespace datacatalog_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

/// The retry policy for `DataCatalogConnection`.
class DataCatalogRetryPolicy : public ::google::cloud::RetryPolicy {
 public:
  /// Creates a new instance of the policy, reset to the initial state.
  virtual std::unique_ptr<DataCatalogRetryPolicy> clone() const = 0;
};

/**
 * A retry policy for `DataCatalogConnection` based on counting errors.
 *
 * This policy stops retrying if:
 * - An RPC returns a non-transient error.
 * - More than a prescribed number of transient failures is detected.
 *
 * In this class the following status codes are treated as transient errors:
 * - [`kUnavailable`](@ref google::cloud::StatusCode)
 */
class DataCatalogLimitedErrorCountRetryPolicy : public DataCatalogRetryPolicy {
 public:
  /**
   * Create an instance that tolerates up to @p maximum_failures transient
   * errors.
   *
   * @note Disable the retry loop by providing an instance of this policy with
   *     @p maximum_failures == 0.
   */
  explicit DataCatalogLimitedErrorCountRetryPolicy(int maximum_failures)
      : impl_(maximum_failures) {}

  DataCatalogLimitedErrorCountRetryPolicy(
      DataCatalogLimitedErrorCountRetryPolicy&& rhs) noexcept
      : DataCatalogLimitedErrorCountRetryPolicy(rhs.maximum_failures()) {}
  DataCatalogLimitedErrorCountRetryPolicy(
      DataCatalogLimitedErrorCountRetryPolicy const& rhs) noexcept
      : DataCatalogLimitedErrorCountRetryPolicy(rhs.maximum_failures()) {}

  int maximum_failures() const { return impl_.maximum_failures(); }

  bool OnFailure(Status const& status) override {
    return impl_.OnFailure(status);
  }
  bool IsExhausted() const override { return impl_.IsExhausted(); }
  bool IsPermanentFailure(Status const& status) const override {
    return impl_.IsPermanentFailure(status);
  }
  std::unique_ptr<DataCatalogRetryPolicy> clone() const override {
    return std::make_unique<DataCatalogLimitedErrorCountRetryPolicy>(
        maximum_failures());
  }

  // This is provided only for backwards compatibility.
  using BaseType = DataCatalogRetryPolicy;

 private:
  google::cloud::internal::LimitedErrorCountRetryPolicy<
      datacatalog_v1_internal::DataCatalogRetryTraits>
      impl_;
};

/**
 * A retry policy for `DataCatalogConnection` based on elapsed time.
 *
 * This policy stops retrying if:
 * - An RPC returns a non-transient error.
 * - The elapsed time in the retry loop exceeds a prescribed duration.
 *
 * In this class the following status codes are treated as transient errors:
 * - [`kUnavailable`](@ref google::cloud::StatusCode)
 */
class DataCatalogLimitedTimeRetryPolicy : public DataCatalogRetryPolicy {
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
  explicit DataCatalogLimitedTimeRetryPolicy(
      std::chrono::duration<DurationRep, DurationPeriod> maximum_duration)
      : impl_(maximum_duration) {}

  DataCatalogLimitedTimeRetryPolicy(
      DataCatalogLimitedTimeRetryPolicy&& rhs) noexcept
      : DataCatalogLimitedTimeRetryPolicy(rhs.maximum_duration()) {}
  DataCatalogLimitedTimeRetryPolicy(
      DataCatalogLimitedTimeRetryPolicy const& rhs) noexcept
      : DataCatalogLimitedTimeRetryPolicy(rhs.maximum_duration()) {}

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
  std::unique_ptr<DataCatalogRetryPolicy> clone() const override {
    return std::make_unique<DataCatalogLimitedTimeRetryPolicy>(
        maximum_duration());
  }

  // This is provided only for backwards compatibility.
  using BaseType = DataCatalogRetryPolicy;

 private:
  google::cloud::internal::LimitedTimeRetryPolicy<
      datacatalog_v1_internal::DataCatalogRetryTraits>
      impl_;
};

/**
 * The `DataCatalogConnection` object for `DataCatalogClient`.
 *
 * This interface defines virtual methods for each of the user-facing overload
 * sets in `DataCatalogClient`. This allows users to inject custom behavior
 * (e.g., with a Google Mock object) when writing tests that use objects of type
 * `DataCatalogClient`.
 *
 * To create a concrete instance, see `MakeDataCatalogConnection()`.
 *
 * For mocking, see `datacatalog_v1_mocks::MockDataCatalogConnection`.
 */
class DataCatalogConnection {
 public:
  virtual ~DataCatalogConnection() = 0;

  virtual Options options() { return Options{}; }

  virtual StreamRange<google::cloud::datacatalog::v1::SearchCatalogResult>
  SearchCatalog(google::cloud::datacatalog::v1::SearchCatalogRequest request);

  virtual StatusOr<google::cloud::datacatalog::v1::EntryGroup> CreateEntryGroup(
      google::cloud::datacatalog::v1::CreateEntryGroupRequest const& request);

  virtual StatusOr<google::cloud::datacatalog::v1::EntryGroup> GetEntryGroup(
      google::cloud::datacatalog::v1::GetEntryGroupRequest const& request);

  virtual StatusOr<google::cloud::datacatalog::v1::EntryGroup> UpdateEntryGroup(
      google::cloud::datacatalog::v1::UpdateEntryGroupRequest const& request);

  virtual Status DeleteEntryGroup(
      google::cloud::datacatalog::v1::DeleteEntryGroupRequest const& request);

  virtual StreamRange<google::cloud::datacatalog::v1::EntryGroup>
  ListEntryGroups(
      google::cloud::datacatalog::v1::ListEntryGroupsRequest request);

  virtual StatusOr<google::cloud::datacatalog::v1::Entry> CreateEntry(
      google::cloud::datacatalog::v1::CreateEntryRequest const& request);

  virtual StatusOr<google::cloud::datacatalog::v1::Entry> UpdateEntry(
      google::cloud::datacatalog::v1::UpdateEntryRequest const& request);

  virtual Status DeleteEntry(
      google::cloud::datacatalog::v1::DeleteEntryRequest const& request);

  virtual StatusOr<google::cloud::datacatalog::v1::Entry> GetEntry(
      google::cloud::datacatalog::v1::GetEntryRequest const& request);

  virtual StatusOr<google::cloud::datacatalog::v1::Entry> LookupEntry(
      google::cloud::datacatalog::v1::LookupEntryRequest const& request);

  virtual StreamRange<google::cloud::datacatalog::v1::Entry> ListEntries(
      google::cloud::datacatalog::v1::ListEntriesRequest request);

  virtual StatusOr<google::cloud::datacatalog::v1::EntryOverview>
  ModifyEntryOverview(
      google::cloud::datacatalog::v1::ModifyEntryOverviewRequest const&
          request);

  virtual StatusOr<google::cloud::datacatalog::v1::Contacts>
  ModifyEntryContacts(
      google::cloud::datacatalog::v1::ModifyEntryContactsRequest const&
          request);

  virtual StatusOr<google::cloud::datacatalog::v1::TagTemplate>
  CreateTagTemplate(
      google::cloud::datacatalog::v1::CreateTagTemplateRequest const& request);

  virtual StatusOr<google::cloud::datacatalog::v1::TagTemplate> GetTagTemplate(
      google::cloud::datacatalog::v1::GetTagTemplateRequest const& request);

  virtual StatusOr<google::cloud::datacatalog::v1::TagTemplate>
  UpdateTagTemplate(
      google::cloud::datacatalog::v1::UpdateTagTemplateRequest const& request);

  virtual Status DeleteTagTemplate(
      google::cloud::datacatalog::v1::DeleteTagTemplateRequest const& request);

  virtual StatusOr<google::cloud::datacatalog::v1::TagTemplateField>
  CreateTagTemplateField(
      google::cloud::datacatalog::v1::CreateTagTemplateFieldRequest const&
          request);

  virtual StatusOr<google::cloud::datacatalog::v1::TagTemplateField>
  UpdateTagTemplateField(
      google::cloud::datacatalog::v1::UpdateTagTemplateFieldRequest const&
          request);

  virtual StatusOr<google::cloud::datacatalog::v1::TagTemplateField>
  RenameTagTemplateField(
      google::cloud::datacatalog::v1::RenameTagTemplateFieldRequest const&
          request);

  virtual StatusOr<google::cloud::datacatalog::v1::TagTemplateField>
  RenameTagTemplateFieldEnumValue(
      google::cloud::datacatalog::v1::
          RenameTagTemplateFieldEnumValueRequest const& request);

  virtual Status DeleteTagTemplateField(
      google::cloud::datacatalog::v1::DeleteTagTemplateFieldRequest const&
          request);

  virtual StatusOr<google::cloud::datacatalog::v1::Tag> CreateTag(
      google::cloud::datacatalog::v1::CreateTagRequest const& request);

  virtual StatusOr<google::cloud::datacatalog::v1::Tag> UpdateTag(
      google::cloud::datacatalog::v1::UpdateTagRequest const& request);

  virtual Status DeleteTag(
      google::cloud::datacatalog::v1::DeleteTagRequest const& request);

  virtual StreamRange<google::cloud::datacatalog::v1::Tag> ListTags(
      google::cloud::datacatalog::v1::ListTagsRequest request);

  virtual future<
      StatusOr<google::cloud::datacatalog::v1::ReconcileTagsResponse>>
  ReconcileTags(
      google::cloud::datacatalog::v1::ReconcileTagsRequest const& request);

  virtual StatusOr<google::longrunning::Operation> ReconcileTags(
      NoAwaitTag,
      google::cloud::datacatalog::v1::ReconcileTagsRequest const& request);

  virtual future<
      StatusOr<google::cloud::datacatalog::v1::ReconcileTagsResponse>>
  ReconcileTags(google::longrunning::Operation const& operation);

  virtual StatusOr<google::cloud::datacatalog::v1::StarEntryResponse> StarEntry(
      google::cloud::datacatalog::v1::StarEntryRequest const& request);

  virtual StatusOr<google::cloud::datacatalog::v1::UnstarEntryResponse>
  UnstarEntry(
      google::cloud::datacatalog::v1::UnstarEntryRequest const& request);

  virtual StatusOr<google::iam::v1::Policy> SetIamPolicy(
      google::iam::v1::SetIamPolicyRequest const& request);

  virtual StatusOr<google::iam::v1::Policy> GetIamPolicy(
      google::iam::v1::GetIamPolicyRequest const& request);

  virtual StatusOr<google::iam::v1::TestIamPermissionsResponse>
  TestIamPermissions(google::iam::v1::TestIamPermissionsRequest const& request);

  virtual future<
      StatusOr<google::cloud::datacatalog::v1::ImportEntriesResponse>>
  ImportEntries(
      google::cloud::datacatalog::v1::ImportEntriesRequest const& request);

  virtual StatusOr<google::longrunning::Operation> ImportEntries(
      NoAwaitTag,
      google::cloud::datacatalog::v1::ImportEntriesRequest const& request);

  virtual future<
      StatusOr<google::cloud::datacatalog::v1::ImportEntriesResponse>>
  ImportEntries(google::longrunning::Operation const& operation);

  virtual StreamRange<google::longrunning::Operation> ListOperations(
      google::longrunning::ListOperationsRequest request);

  virtual StatusOr<google::longrunning::Operation> GetOperation(
      google::longrunning::GetOperationRequest const& request);

  virtual Status DeleteOperation(
      google::longrunning::DeleteOperationRequest const& request);

  virtual Status CancelOperation(
      google::longrunning::CancelOperationRequest const& request);
};

/**
 * A factory function to construct an object of type `DataCatalogConnection`.
 *
 * The returned connection object should not be used directly; instead it
 * should be passed as an argument to the constructor of DataCatalogClient.
 *
 * The optional @p options argument may be used to configure aspects of the
 * returned `DataCatalogConnection`. Expected options are any of the types in
 * the following option lists:
 *
 * - `google::cloud::CommonOptionList`
 * - `google::cloud::GrpcOptionList`
 * - `google::cloud::UnifiedCredentialsOptionList`
 * - `google::cloud::datacatalog_v1::DataCatalogPolicyOptionList`
 *
 * @note Unexpected options will be ignored. To log unexpected options instead,
 *     set `GOOGLE_CLOUD_CPP_ENABLE_CLOG=yes` in the environment.
 *
 * @param options (optional) Configure the `DataCatalogConnection` created by
 * this function.
 */
std::shared_ptr<DataCatalogConnection> MakeDataCatalogConnection(
    Options options = {});

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace datacatalog_v1
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DATACATALOG_V1_DATA_CATALOG_CONNECTION_H
