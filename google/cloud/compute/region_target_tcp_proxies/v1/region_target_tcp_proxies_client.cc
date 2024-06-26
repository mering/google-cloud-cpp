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
// source:
// google/cloud/compute/region_target_tcp_proxies/v1/region_target_tcp_proxies.proto

#include "google/cloud/compute/region_target_tcp_proxies/v1/region_target_tcp_proxies_client.h"
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace compute_region_target_tcp_proxies_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

RegionTargetTcpProxiesClient::RegionTargetTcpProxiesClient(
    std::shared_ptr<RegionTargetTcpProxiesConnection> connection, Options opts)
    : connection_(std::move(connection)),
      options_(
          internal::MergeOptions(std::move(opts), connection_->options())) {}
RegionTargetTcpProxiesClient::~RegionTargetTcpProxiesClient() = default;

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
RegionTargetTcpProxiesClient::DeleteTargetTcpProxy(
    std::string const& project, std::string const& region,
    std::string const& target_tcp_proxy, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::cpp::compute::region_target_tcp_proxies::v1::
      DeleteTargetTcpProxyRequest request;
  request.set_project(project);
  request.set_region(region);
  request.set_target_tcp_proxy(target_tcp_proxy);
  return connection_->DeleteTargetTcpProxy(request);
}

StatusOr<google::cloud::cpp::compute::v1::Operation>
RegionTargetTcpProxiesClient::DeleteTargetTcpProxy(
    ExperimentalTag, NoAwaitTag, std::string const& project,
    std::string const& region, std::string const& target_tcp_proxy,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::cpp::compute::region_target_tcp_proxies::v1::
      DeleteTargetTcpProxyRequest request;
  request.set_project(project);
  request.set_region(region);
  request.set_target_tcp_proxy(target_tcp_proxy);
  return connection_->DeleteTargetTcpProxy(ExperimentalTag{}, NoAwaitTag{},
                                           request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
RegionTargetTcpProxiesClient::DeleteTargetTcpProxy(
    google::cloud::cpp::compute::region_target_tcp_proxies::v1::
        DeleteTargetTcpProxyRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->DeleteTargetTcpProxy(request);
}

StatusOr<google::cloud::cpp::compute::v1::Operation>
RegionTargetTcpProxiesClient::DeleteTargetTcpProxy(
    ExperimentalTag, NoAwaitTag,
    google::cloud::cpp::compute::region_target_tcp_proxies::v1::
        DeleteTargetTcpProxyRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->DeleteTargetTcpProxy(ExperimentalTag{}, NoAwaitTag{},
                                           request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
RegionTargetTcpProxiesClient::DeleteTargetTcpProxy(
    ExperimentalTag,
    google::cloud::cpp::compute::v1::Operation const& operation, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->DeleteTargetTcpProxy(ExperimentalTag{}, operation);
}

StatusOr<google::cloud::cpp::compute::v1::TargetTcpProxy>
RegionTargetTcpProxiesClient::GetTargetTcpProxy(
    std::string const& project, std::string const& region,
    std::string const& target_tcp_proxy, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::cpp::compute::region_target_tcp_proxies::v1::
      GetTargetTcpProxyRequest request;
  request.set_project(project);
  request.set_region(region);
  request.set_target_tcp_proxy(target_tcp_proxy);
  return connection_->GetTargetTcpProxy(request);
}

StatusOr<google::cloud::cpp::compute::v1::TargetTcpProxy>
RegionTargetTcpProxiesClient::GetTargetTcpProxy(
    google::cloud::cpp::compute::region_target_tcp_proxies::v1::
        GetTargetTcpProxyRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->GetTargetTcpProxy(request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
RegionTargetTcpProxiesClient::InsertTargetTcpProxy(
    std::string const& project, std::string const& region,
    google::cloud::cpp::compute::v1::TargetTcpProxy const&
        target_tcp_proxy_resource,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::cpp::compute::region_target_tcp_proxies::v1::
      InsertTargetTcpProxyRequest request;
  request.set_project(project);
  request.set_region(region);
  *request.mutable_target_tcp_proxy_resource() = target_tcp_proxy_resource;
  return connection_->InsertTargetTcpProxy(request);
}

StatusOr<google::cloud::cpp::compute::v1::Operation>
RegionTargetTcpProxiesClient::InsertTargetTcpProxy(
    ExperimentalTag, NoAwaitTag, std::string const& project,
    std::string const& region,
    google::cloud::cpp::compute::v1::TargetTcpProxy const&
        target_tcp_proxy_resource,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::cpp::compute::region_target_tcp_proxies::v1::
      InsertTargetTcpProxyRequest request;
  request.set_project(project);
  request.set_region(region);
  *request.mutable_target_tcp_proxy_resource() = target_tcp_proxy_resource;
  return connection_->InsertTargetTcpProxy(ExperimentalTag{}, NoAwaitTag{},
                                           request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
RegionTargetTcpProxiesClient::InsertTargetTcpProxy(
    google::cloud::cpp::compute::region_target_tcp_proxies::v1::
        InsertTargetTcpProxyRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->InsertTargetTcpProxy(request);
}

StatusOr<google::cloud::cpp::compute::v1::Operation>
RegionTargetTcpProxiesClient::InsertTargetTcpProxy(
    ExperimentalTag, NoAwaitTag,
    google::cloud::cpp::compute::region_target_tcp_proxies::v1::
        InsertTargetTcpProxyRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->InsertTargetTcpProxy(ExperimentalTag{}, NoAwaitTag{},
                                           request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
RegionTargetTcpProxiesClient::InsertTargetTcpProxy(
    ExperimentalTag,
    google::cloud::cpp::compute::v1::Operation const& operation, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->InsertTargetTcpProxy(ExperimentalTag{}, operation);
}

StreamRange<google::cloud::cpp::compute::v1::TargetTcpProxy>
RegionTargetTcpProxiesClient::ListRegionTargetTcpProxies(
    std::string const& project, std::string const& region, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::cpp::compute::region_target_tcp_proxies::v1::
      ListRegionTargetTcpProxiesRequest request;
  request.set_project(project);
  request.set_region(region);
  return connection_->ListRegionTargetTcpProxies(request);
}

StreamRange<google::cloud::cpp::compute::v1::TargetTcpProxy>
RegionTargetTcpProxiesClient::ListRegionTargetTcpProxies(
    google::cloud::cpp::compute::region_target_tcp_proxies::v1::
        ListRegionTargetTcpProxiesRequest request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->ListRegionTargetTcpProxies(std::move(request));
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_region_target_tcp_proxies_v1
}  // namespace cloud
}  // namespace google
