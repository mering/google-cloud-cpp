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
// source: google/cloud/compute/backend_buckets/v1/backend_buckets.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_BACKEND_BUCKETS_V1_INTERNAL_BACKEND_BUCKETS_REST_CONNECTION_IMPL_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_BACKEND_BUCKETS_V1_INTERNAL_BACKEND_BUCKETS_REST_CONNECTION_IMPL_H

#include "google/cloud/compute/backend_buckets/v1/backend_buckets_connection.h"
#include "google/cloud/compute/backend_buckets/v1/backend_buckets_connection_idempotency_policy.h"
#include "google/cloud/compute/backend_buckets/v1/backend_buckets_options.h"
#include "google/cloud/compute/backend_buckets/v1/internal/backend_buckets_rest_stub.h"
#include "google/cloud/compute/backend_buckets/v1/internal/backend_buckets_retry_traits.h"
#include "google/cloud/background_threads.h"
#include "google/cloud/backoff_policy.h"
#include "google/cloud/options.h"
#include "google/cloud/status_or.h"
#include "google/cloud/stream_range.h"
#include "google/cloud/version.h"
#include "google/cloud/compute/global_operations/v1/global_operations.pb.h"
#include <memory>

namespace google {
namespace cloud {
namespace compute_backend_buckets_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class BackendBucketsRestConnectionImpl
    : public compute_backend_buckets_v1::BackendBucketsConnection {
 public:
  ~BackendBucketsRestConnectionImpl() override = default;

  BackendBucketsRestConnectionImpl(
      std::unique_ptr<google::cloud::BackgroundThreads> background,
      std::shared_ptr<
          compute_backend_buckets_v1_internal::BackendBucketsRestStub>
          stub,
      Options options);

  Options options() override { return options_; }

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>> AddSignedUrlKey(
      google::cloud::cpp::compute::backend_buckets::v1::
          AddSignedUrlKeyRequest const& request) override;

  StatusOr<google::cloud::cpp::compute::v1::Operation> AddSignedUrlKey(
      NoAwaitTag, google::cloud::cpp::compute::backend_buckets::v1::
                      AddSignedUrlKeyRequest const& request) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>> AddSignedUrlKey(
      google::cloud::cpp::compute::v1::Operation const& operation) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  DeleteBackendBucket(google::cloud::cpp::compute::backend_buckets::v1::
                          DeleteBackendBucketRequest const& request) override;

  StatusOr<google::cloud::cpp::compute::v1::Operation> DeleteBackendBucket(
      NoAwaitTag, google::cloud::cpp::compute::backend_buckets::v1::
                      DeleteBackendBucketRequest const& request) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  DeleteBackendBucket(
      google::cloud::cpp::compute::v1::Operation const& operation) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  DeleteSignedUrlKey(google::cloud::cpp::compute::backend_buckets::v1::
                         DeleteSignedUrlKeyRequest const& request) override;

  StatusOr<google::cloud::cpp::compute::v1::Operation> DeleteSignedUrlKey(
      NoAwaitTag, google::cloud::cpp::compute::backend_buckets::v1::
                      DeleteSignedUrlKeyRequest const& request) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  DeleteSignedUrlKey(
      google::cloud::cpp::compute::v1::Operation const& operation) override;

  StatusOr<google::cloud::cpp::compute::v1::BackendBucket> GetBackendBucket(
      google::cloud::cpp::compute::backend_buckets::v1::
          GetBackendBucketRequest const& request) override;

  StatusOr<google::cloud::cpp::compute::v1::Policy> GetIamPolicy(
      google::cloud::cpp::compute::backend_buckets::v1::
          GetIamPolicyRequest const& request) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  InsertBackendBucket(google::cloud::cpp::compute::backend_buckets::v1::
                          InsertBackendBucketRequest const& request) override;

  StatusOr<google::cloud::cpp::compute::v1::Operation> InsertBackendBucket(
      NoAwaitTag, google::cloud::cpp::compute::backend_buckets::v1::
                      InsertBackendBucketRequest const& request) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  InsertBackendBucket(
      google::cloud::cpp::compute::v1::Operation const& operation) override;

  StreamRange<google::cloud::cpp::compute::v1::BackendBucket>
  ListBackendBuckets(google::cloud::cpp::compute::backend_buckets::v1::
                         ListBackendBucketsRequest request) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  PatchBackendBucket(google::cloud::cpp::compute::backend_buckets::v1::
                         PatchBackendBucketRequest const& request) override;

  StatusOr<google::cloud::cpp::compute::v1::Operation> PatchBackendBucket(
      NoAwaitTag, google::cloud::cpp::compute::backend_buckets::v1::
                      PatchBackendBucketRequest const& request) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  PatchBackendBucket(
      google::cloud::cpp::compute::v1::Operation const& operation) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  SetEdgeSecurityPolicy(
      google::cloud::cpp::compute::backend_buckets::v1::
          SetEdgeSecurityPolicyRequest const& request) override;

  StatusOr<google::cloud::cpp::compute::v1::Operation> SetEdgeSecurityPolicy(
      NoAwaitTag, google::cloud::cpp::compute::backend_buckets::v1::
                      SetEdgeSecurityPolicyRequest const& request) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  SetEdgeSecurityPolicy(
      google::cloud::cpp::compute::v1::Operation const& operation) override;

  StatusOr<google::cloud::cpp::compute::v1::Policy> SetIamPolicy(
      google::cloud::cpp::compute::backend_buckets::v1::
          SetIamPolicyRequest const& request) override;

  StatusOr<google::cloud::cpp::compute::v1::TestPermissionsResponse>
  TestIamPermissions(google::cloud::cpp::compute::backend_buckets::v1::
                         TestIamPermissionsRequest const& request) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  UpdateBackendBucket(google::cloud::cpp::compute::backend_buckets::v1::
                          UpdateBackendBucketRequest const& request) override;

  StatusOr<google::cloud::cpp::compute::v1::Operation> UpdateBackendBucket(
      NoAwaitTag, google::cloud::cpp::compute::backend_buckets::v1::
                      UpdateBackendBucketRequest const& request) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  UpdateBackendBucket(
      google::cloud::cpp::compute::v1::Operation const& operation) override;

 private:
  static std::unique_ptr<compute_backend_buckets_v1::BackendBucketsRetryPolicy>
  retry_policy(Options const& options) {
    return options
        .get<compute_backend_buckets_v1::BackendBucketsRetryPolicyOption>()
        ->clone();
  }

  static std::unique_ptr<BackoffPolicy> backoff_policy(Options const& options) {
    return options
        .get<compute_backend_buckets_v1::BackendBucketsBackoffPolicyOption>()
        ->clone();
  }

  static std::unique_ptr<
      compute_backend_buckets_v1::BackendBucketsConnectionIdempotencyPolicy>
  idempotency_policy(Options const& options) {
    return options
        .get<compute_backend_buckets_v1::
                 BackendBucketsConnectionIdempotencyPolicyOption>()
        ->clone();
  }

  static std::unique_ptr<PollingPolicy> polling_policy(Options const& options) {
    return options
        .get<compute_backend_buckets_v1::BackendBucketsPollingPolicyOption>()
        ->clone();
  }

  std::unique_ptr<google::cloud::BackgroundThreads> background_;
  std::shared_ptr<compute_backend_buckets_v1_internal::BackendBucketsRestStub>
      stub_;
  Options options_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_backend_buckets_v1_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_BACKEND_BUCKETS_V1_INTERNAL_BACKEND_BUCKETS_REST_CONNECTION_IMPL_H
