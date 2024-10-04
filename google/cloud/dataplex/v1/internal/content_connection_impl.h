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

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DATAPLEX_V1_INTERNAL_CONTENT_CONNECTION_IMPL_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DATAPLEX_V1_INTERNAL_CONTENT_CONNECTION_IMPL_H

#include "google/cloud/dataplex/v1/content_connection.h"
#include "google/cloud/dataplex/v1/content_connection_idempotency_policy.h"
#include "google/cloud/dataplex/v1/content_options.h"
#include "google/cloud/dataplex/v1/internal/content_retry_traits.h"
#include "google/cloud/dataplex/v1/internal/content_stub.h"
#include "google/cloud/background_threads.h"
#include "google/cloud/backoff_policy.h"
#include "google/cloud/options.h"
#include "google/cloud/status_or.h"
#include "google/cloud/stream_range.h"
#include "google/cloud/version.h"
#include <memory>

namespace google {
namespace cloud {
namespace dataplex_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class ContentServiceConnectionImpl
    : public dataplex_v1::ContentServiceConnection {
 public:
  ~ContentServiceConnectionImpl() override = default;

  ContentServiceConnectionImpl(
      std::unique_ptr<google::cloud::BackgroundThreads> background,
      std::shared_ptr<dataplex_v1_internal::ContentServiceStub> stub,
      Options options);

  Options options() override { return options_; }

  StatusOr<google::cloud::dataplex::v1::Content> CreateContent(
      google::cloud::dataplex::v1::CreateContentRequest const& request)
      override;

  StatusOr<google::cloud::dataplex::v1::Content> UpdateContent(
      google::cloud::dataplex::v1::UpdateContentRequest const& request)
      override;

  Status DeleteContent(google::cloud::dataplex::v1::DeleteContentRequest const&
                           request) override;

  StatusOr<google::cloud::dataplex::v1::Content> GetContent(
      google::cloud::dataplex::v1::GetContentRequest const& request) override;

  StatusOr<google::iam::v1::Policy> GetIamPolicy(
      google::iam::v1::GetIamPolicyRequest const& request) override;

  StatusOr<google::iam::v1::Policy> SetIamPolicy(
      google::iam::v1::SetIamPolicyRequest const& request) override;

  StatusOr<google::iam::v1::TestIamPermissionsResponse> TestIamPermissions(
      google::iam::v1::TestIamPermissionsRequest const& request) override;

  StreamRange<google::cloud::dataplex::v1::Content> ListContent(
      google::cloud::dataplex::v1::ListContentRequest request) override;

  StreamRange<google::cloud::location::Location> ListLocations(
      google::cloud::location::ListLocationsRequest request) override;

  StatusOr<google::cloud::location::Location> GetLocation(
      google::cloud::location::GetLocationRequest const& request) override;

  StreamRange<google::longrunning::Operation> ListOperations(
      google::longrunning::ListOperationsRequest request) override;

  StatusOr<google::longrunning::Operation> GetOperation(
      google::longrunning::GetOperationRequest const& request) override;

  Status DeleteOperation(
      google::longrunning::DeleteOperationRequest const& request) override;

  Status CancelOperation(
      google::longrunning::CancelOperationRequest const& request) override;

 private:
  std::unique_ptr<google::cloud::BackgroundThreads> background_;
  std::shared_ptr<dataplex_v1_internal::ContentServiceStub> stub_;
  Options options_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace dataplex_v1_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DATAPLEX_V1_INTERNAL_CONTENT_CONNECTION_IMPL_H
