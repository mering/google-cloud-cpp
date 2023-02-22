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
// source: google/cloud/dataplex/v1/content.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DATAPLEX_V1_CONTENT_CONNECTION_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DATAPLEX_V1_CONTENT_CONNECTION_H

#include "google/cloud/dataplex/v1/content_connection_idempotency_policy.h"
#include "google/cloud/dataplex/v1/internal/content_retry_traits.h"
#include "google/cloud/dataplex/v1/internal/content_stub.h"
#include "google/cloud/backoff_policy.h"
#include "google/cloud/options.h"
#include "google/cloud/status_or.h"
#include "google/cloud/stream_range.h"
#include "google/cloud/version.h"
#include <memory>

namespace google {
namespace cloud {
namespace dataplex_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

using ContentServiceRetryPolicy =
    ::google::cloud::internal::TraitBasedRetryPolicy<
        dataplex_v1_internal::ContentServiceRetryTraits>;

using ContentServiceLimitedTimeRetryPolicy =
    ::google::cloud::internal::LimitedTimeRetryPolicy<
        dataplex_v1_internal::ContentServiceRetryTraits>;

using ContentServiceLimitedErrorCountRetryPolicy =
    ::google::cloud::internal::LimitedErrorCountRetryPolicy<
        dataplex_v1_internal::ContentServiceRetryTraits>;

/**
 * The `ContentServiceConnection` object for `ContentServiceClient`.
 *
 * This interface defines virtual methods for each of the user-facing overload
 * sets in `ContentServiceClient`. This allows users to inject custom behavior
 * (e.g., with a Google Mock object) when writing tests that use objects of type
 * `ContentServiceClient`.
 *
 * To create a concrete instance, see `MakeContentServiceConnection()`.
 *
 * For mocking, see `dataplex_v1_mocks::MockContentServiceConnection`.
 */
class ContentServiceConnection {
 public:
  virtual ~ContentServiceConnection() = 0;

  virtual Options options() { return Options{}; }

  virtual StatusOr<google::cloud::dataplex::v1::Content> CreateContent(
      google::cloud::dataplex::v1::CreateContentRequest const& request);

  virtual StatusOr<google::cloud::dataplex::v1::Content> UpdateContent(
      google::cloud::dataplex::v1::UpdateContentRequest const& request);

  virtual Status DeleteContent(
      google::cloud::dataplex::v1::DeleteContentRequest const& request);

  virtual StatusOr<google::cloud::dataplex::v1::Content> GetContent(
      google::cloud::dataplex::v1::GetContentRequest const& request);

  virtual StatusOr<google::iam::v1::Policy> GetIamPolicy(
      google::iam::v1::GetIamPolicyRequest const& request);

  virtual StatusOr<google::iam::v1::Policy> SetIamPolicy(
      google::iam::v1::SetIamPolicyRequest const& request);

  virtual StatusOr<google::iam::v1::TestIamPermissionsResponse>
  TestIamPermissions(google::iam::v1::TestIamPermissionsRequest const& request);

  virtual StreamRange<google::cloud::dataplex::v1::Content> ListContent(
      google::cloud::dataplex::v1::ListContentRequest request);
};

/**
 * A factory function to construct an object of type `ContentServiceConnection`.
 *
 * The returned connection object should not be used directly; instead it
 * should be passed as an argument to the constructor of ContentServiceClient.
 *
 * The optional @p options argument may be used to configure aspects of the
 * returned `ContentServiceConnection`. Expected options are any of the types in
 * the following option lists:
 *
 * - `google::cloud::CommonOptionList`
 * - `google::cloud::GrpcOptionList`
 * - `google::cloud::UnifiedCredentialsOptionList`
 * - `google::cloud::dataplex_v1::ContentServicePolicyOptionList`
 *
 * @note Unexpected options will be ignored. To log unexpected options instead,
 *     set `GOOGLE_CLOUD_CPP_ENABLE_CLOG=yes` in the environment.
 *
 * @param options (optional) Configure the `ContentServiceConnection` created by
 * this function.
 */
std::shared_ptr<ContentServiceConnection> MakeContentServiceConnection(
    Options options = {});

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace dataplex_v1
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DATAPLEX_V1_CONTENT_CONNECTION_H
