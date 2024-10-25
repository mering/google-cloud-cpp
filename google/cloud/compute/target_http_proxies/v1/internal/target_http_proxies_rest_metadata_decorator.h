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
// source: google/cloud/compute/target_http_proxies/v1/target_http_proxies.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_TARGET_HTTP_PROXIES_V1_INTERNAL_TARGET_HTTP_PROXIES_REST_METADATA_DECORATOR_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_TARGET_HTTP_PROXIES_V1_INTERNAL_TARGET_HTTP_PROXIES_REST_METADATA_DECORATOR_H

#include "google/cloud/compute/global_operations/v1/global_operations.pb.h"
#include "google/cloud/compute/target_http_proxies/v1/internal/target_http_proxies_rest_stub.h"
#include "google/cloud/compute/target_http_proxies/v1/target_http_proxies.pb.h"
#include "google/cloud/future.h"
#include "google/cloud/rest_options.h"
#include "google/cloud/version.h"
#include <memory>
#include <string>

namespace google {
namespace cloud {
namespace compute_target_http_proxies_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class TargetHttpProxiesRestMetadata : public TargetHttpProxiesRestStub {
 public:
  ~TargetHttpProxiesRestMetadata() override = default;
  explicit TargetHttpProxiesRestMetadata(
      std::shared_ptr<TargetHttpProxiesRestStub> child,
      std::string api_client_header = "");

  StatusOr<google::cloud::cpp::compute::v1::TargetHttpProxyAggregatedList>
  AggregatedListTargetHttpProxies(
      google::cloud::rest_internal::RestContext& rest_context,
      Options const& options,
      google::cloud::cpp::compute::target_http_proxies::v1::
          AggregatedListTargetHttpProxiesRequest const& request) override;

  google::cloud::future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  AsyncDeleteTargetHttpProxy(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<google::cloud::rest_internal::RestContext> rest_context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::cpp::compute::target_http_proxies::v1::
          DeleteTargetHttpProxyRequest const& request) override;

  StatusOr<google::cloud::cpp::compute::v1::Operation> DeleteTargetHttpProxy(
      google::cloud::rest_internal::RestContext& rest_context,
      Options const& options,
      google::cloud::cpp::compute::target_http_proxies::v1::
          DeleteTargetHttpProxyRequest const& request) override;

  StatusOr<google::cloud::cpp::compute::v1::TargetHttpProxy> GetTargetHttpProxy(
      google::cloud::rest_internal::RestContext& rest_context,
      Options const& options,
      google::cloud::cpp::compute::target_http_proxies::v1::
          GetTargetHttpProxyRequest const& request) override;

  google::cloud::future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  AsyncInsertTargetHttpProxy(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<google::cloud::rest_internal::RestContext> rest_context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::cpp::compute::target_http_proxies::v1::
          InsertTargetHttpProxyRequest const& request) override;

  StatusOr<google::cloud::cpp::compute::v1::Operation> InsertTargetHttpProxy(
      google::cloud::rest_internal::RestContext& rest_context,
      Options const& options,
      google::cloud::cpp::compute::target_http_proxies::v1::
          InsertTargetHttpProxyRequest const& request) override;

  StatusOr<google::cloud::cpp::compute::v1::TargetHttpProxyList>
  ListTargetHttpProxies(
      google::cloud::rest_internal::RestContext& rest_context,
      Options const& options,
      google::cloud::cpp::compute::target_http_proxies::v1::
          ListTargetHttpProxiesRequest const& request) override;

  google::cloud::future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  AsyncPatchTargetHttpProxy(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<google::cloud::rest_internal::RestContext> rest_context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::cpp::compute::target_http_proxies::v1::
          PatchTargetHttpProxyRequest const& request) override;

  StatusOr<google::cloud::cpp::compute::v1::Operation> PatchTargetHttpProxy(
      google::cloud::rest_internal::RestContext& rest_context,
      Options const& options,
      google::cloud::cpp::compute::target_http_proxies::v1::
          PatchTargetHttpProxyRequest const& request) override;

  google::cloud::future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  AsyncSetUrlMap(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<google::cloud::rest_internal::RestContext> rest_context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::cpp::compute::target_http_proxies::v1::
          SetUrlMapRequest const& request) override;

  StatusOr<google::cloud::cpp::compute::v1::Operation> SetUrlMap(
      google::cloud::rest_internal::RestContext& rest_context,
      Options const& options,
      google::cloud::cpp::compute::target_http_proxies::v1::
          SetUrlMapRequest const& request) override;

  google::cloud::future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  AsyncGetOperation(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<google::cloud::rest_internal::RestContext> rest_context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::cpp::compute::global_operations::v1::
          GetOperationRequest const& request) override;

  google::cloud::future<Status> AsyncCancelOperation(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<google::cloud::rest_internal::RestContext> rest_context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::cpp::compute::global_operations::v1::
          DeleteOperationRequest const& request) override;

 private:
  void SetMetadata(rest_internal::RestContext& rest_context,
                   Options const& options,
                   std::vector<std::string> const& params = {});

  std::shared_ptr<TargetHttpProxiesRestStub> child_;
  std::string api_client_header_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_target_http_proxies_v1_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_TARGET_HTTP_PROXIES_V1_INTERNAL_TARGET_HTTP_PROXIES_REST_METADATA_DECORATOR_H
