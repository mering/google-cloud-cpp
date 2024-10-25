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
// source: google/cloud/compute/target_grpc_proxies/v1/target_grpc_proxies.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_TARGET_GRPC_PROXIES_V1_INTERNAL_TARGET_GRPC_PROXIES_REST_LOGGING_DECORATOR_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_TARGET_GRPC_PROXIES_V1_INTERNAL_TARGET_GRPC_PROXIES_REST_LOGGING_DECORATOR_H

#include "google/cloud/compute/global_operations/v1/global_operations.pb.h"
#include "google/cloud/compute/target_grpc_proxies/v1/internal/target_grpc_proxies_rest_stub.h"
#include "google/cloud/compute/target_grpc_proxies/v1/target_grpc_proxies.pb.h"
#include "google/cloud/future.h"
#include "google/cloud/internal/rest_context.h"
#include "google/cloud/tracing_options.h"
#include "google/cloud/version.h"
#include <memory>
#include <set>
#include <string>

namespace google {
namespace cloud {
namespace compute_target_grpc_proxies_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class TargetGrpcProxiesRestLogging : public TargetGrpcProxiesRestStub {
 public:
  ~TargetGrpcProxiesRestLogging() override = default;
  TargetGrpcProxiesRestLogging(std::shared_ptr<TargetGrpcProxiesRestStub> child,
                               TracingOptions tracing_options,
                               std::set<std::string> components);

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  AsyncDeleteTargetGrpcProxy(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<google::cloud::rest_internal::RestContext> rest_context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::cpp::compute::target_grpc_proxies::v1::
          DeleteTargetGrpcProxyRequest const& request) override;

  StatusOr<google::cloud::cpp::compute::v1::Operation> DeleteTargetGrpcProxy(
      google::cloud::rest_internal::RestContext& rest_context,
      Options const& options,
      google::cloud::cpp::compute::target_grpc_proxies::v1::
          DeleteTargetGrpcProxyRequest const& request) override;

  StatusOr<google::cloud::cpp::compute::v1::TargetGrpcProxy> GetTargetGrpcProxy(
      google::cloud::rest_internal::RestContext& rest_context,
      Options const& options,
      google::cloud::cpp::compute::target_grpc_proxies::v1::
          GetTargetGrpcProxyRequest const& request) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  AsyncInsertTargetGrpcProxy(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<google::cloud::rest_internal::RestContext> rest_context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::cpp::compute::target_grpc_proxies::v1::
          InsertTargetGrpcProxyRequest const& request) override;

  StatusOr<google::cloud::cpp::compute::v1::Operation> InsertTargetGrpcProxy(
      google::cloud::rest_internal::RestContext& rest_context,
      Options const& options,
      google::cloud::cpp::compute::target_grpc_proxies::v1::
          InsertTargetGrpcProxyRequest const& request) override;

  StatusOr<google::cloud::cpp::compute::v1::TargetGrpcProxyList>
  ListTargetGrpcProxies(
      google::cloud::rest_internal::RestContext& rest_context,
      Options const& options,
      google::cloud::cpp::compute::target_grpc_proxies::v1::
          ListTargetGrpcProxiesRequest const& request) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  AsyncPatchTargetGrpcProxy(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<google::cloud::rest_internal::RestContext> rest_context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::cpp::compute::target_grpc_proxies::v1::
          PatchTargetGrpcProxyRequest const& request) override;

  StatusOr<google::cloud::cpp::compute::v1::Operation> PatchTargetGrpcProxy(
      google::cloud::rest_internal::RestContext& rest_context,
      Options const& options,
      google::cloud::cpp::compute::target_grpc_proxies::v1::
          PatchTargetGrpcProxyRequest const& request) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  AsyncGetOperation(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<google::cloud::rest_internal::RestContext> rest_context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::cpp::compute::global_operations::v1::
          GetOperationRequest const& request) override;

  future<Status> AsyncCancelOperation(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<google::cloud::rest_internal::RestContext> rest_context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::cpp::compute::global_operations::v1::
          DeleteOperationRequest const& request) override;

 private:
  std::shared_ptr<TargetGrpcProxiesRestStub> child_;
  TracingOptions tracing_options_;
  std::set<std::string> components_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_target_grpc_proxies_v1_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_TARGET_GRPC_PROXIES_V1_INTERNAL_TARGET_GRPC_PROXIES_REST_LOGGING_DECORATOR_H
