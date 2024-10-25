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
// source: google/cloud/compute/node_templates/v1/node_templates.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_NODE_TEMPLATES_V1_INTERNAL_NODE_TEMPLATES_REST_CONNECTION_IMPL_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_NODE_TEMPLATES_V1_INTERNAL_NODE_TEMPLATES_REST_CONNECTION_IMPL_H

#include "google/cloud/compute/node_templates/v1/internal/node_templates_rest_stub.h"
#include "google/cloud/compute/node_templates/v1/internal/node_templates_retry_traits.h"
#include "google/cloud/compute/node_templates/v1/node_templates_connection.h"
#include "google/cloud/compute/node_templates/v1/node_templates_connection_idempotency_policy.h"
#include "google/cloud/compute/node_templates/v1/node_templates_options.h"
#include "google/cloud/background_threads.h"
#include "google/cloud/backoff_policy.h"
#include "google/cloud/options.h"
#include "google/cloud/status_or.h"
#include "google/cloud/stream_range.h"
#include "google/cloud/version.h"
#include "google/cloud/compute/region_operations/v1/region_operations.pb.h"
#include <memory>

namespace google {
namespace cloud {
namespace compute_node_templates_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class NodeTemplatesRestConnectionImpl
    : public compute_node_templates_v1::NodeTemplatesConnection {
 public:
  ~NodeTemplatesRestConnectionImpl() override = default;

  NodeTemplatesRestConnectionImpl(
      std::unique_ptr<google::cloud::BackgroundThreads> background,
      std::shared_ptr<compute_node_templates_v1_internal::NodeTemplatesRestStub>
          stub,
      Options options);

  Options options() override { return options_; }

  StreamRange<std::pair<
      std::string, google::cloud::cpp::compute::v1::NodeTemplatesScopedList>>
  AggregatedListNodeTemplates(
      google::cloud::cpp::compute::node_templates::v1::
          AggregatedListNodeTemplatesRequest request) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  DeleteNodeTemplate(google::cloud::cpp::compute::node_templates::v1::
                         DeleteNodeTemplateRequest const& request) override;

  StatusOr<google::cloud::cpp::compute::v1::Operation> DeleteNodeTemplate(
      NoAwaitTag, google::cloud::cpp::compute::node_templates::v1::
                      DeleteNodeTemplateRequest const& request) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  DeleteNodeTemplate(
      google::cloud::cpp::compute::v1::Operation const& operation) override;

  StatusOr<google::cloud::cpp::compute::v1::NodeTemplate> GetNodeTemplate(
      google::cloud::cpp::compute::node_templates::v1::
          GetNodeTemplateRequest const& request) override;

  StatusOr<google::cloud::cpp::compute::v1::Policy> GetIamPolicy(
      google::cloud::cpp::compute::node_templates::v1::
          GetIamPolicyRequest const& request) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  InsertNodeTemplate(google::cloud::cpp::compute::node_templates::v1::
                         InsertNodeTemplateRequest const& request) override;

  StatusOr<google::cloud::cpp::compute::v1::Operation> InsertNodeTemplate(
      NoAwaitTag, google::cloud::cpp::compute::node_templates::v1::
                      InsertNodeTemplateRequest const& request) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  InsertNodeTemplate(
      google::cloud::cpp::compute::v1::Operation const& operation) override;

  StreamRange<google::cloud::cpp::compute::v1::NodeTemplate> ListNodeTemplates(
      google::cloud::cpp::compute::node_templates::v1::ListNodeTemplatesRequest
          request) override;

  StatusOr<google::cloud::cpp::compute::v1::Policy> SetIamPolicy(
      google::cloud::cpp::compute::node_templates::v1::
          SetIamPolicyRequest const& request) override;

  StatusOr<google::cloud::cpp::compute::v1::TestPermissionsResponse>
  TestIamPermissions(google::cloud::cpp::compute::node_templates::v1::
                         TestIamPermissionsRequest const& request) override;

 private:
  static std::unique_ptr<compute_node_templates_v1::NodeTemplatesRetryPolicy>
  retry_policy(Options const& options) {
    return options
        .get<compute_node_templates_v1::NodeTemplatesRetryPolicyOption>()
        ->clone();
  }

  static std::unique_ptr<BackoffPolicy> backoff_policy(Options const& options) {
    return options
        .get<compute_node_templates_v1::NodeTemplatesBackoffPolicyOption>()
        ->clone();
  }

  static std::unique_ptr<
      compute_node_templates_v1::NodeTemplatesConnectionIdempotencyPolicy>
  idempotency_policy(Options const& options) {
    return options
        .get<compute_node_templates_v1::
                 NodeTemplatesConnectionIdempotencyPolicyOption>()
        ->clone();
  }

  static std::unique_ptr<PollingPolicy> polling_policy(Options const& options) {
    return options
        .get<compute_node_templates_v1::NodeTemplatesPollingPolicyOption>()
        ->clone();
  }

  std::unique_ptr<google::cloud::BackgroundThreads> background_;
  std::shared_ptr<compute_node_templates_v1_internal::NodeTemplatesRestStub>
      stub_;
  Options options_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_node_templates_v1_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_NODE_TEMPLATES_V1_INTERNAL_NODE_TEMPLATES_REST_CONNECTION_IMPL_H
