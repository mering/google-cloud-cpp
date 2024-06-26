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
// source: google/cloud/compute/target_tcp_proxies/v1/target_tcp_proxies.proto

#include "google/cloud/compute/target_tcp_proxies/v1/target_tcp_proxies_client.h"
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace compute_target_tcp_proxies_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

TargetTcpProxiesClient::TargetTcpProxiesClient(
    std::shared_ptr<TargetTcpProxiesConnection> connection, Options opts)
    : connection_(std::move(connection)),
      options_(
          internal::MergeOptions(std::move(opts), connection_->options())) {}
TargetTcpProxiesClient::~TargetTcpProxiesClient() = default;

StreamRange<std::pair<
    std::string, google::cloud::cpp::compute::v1::TargetTcpProxiesScopedList>>
TargetTcpProxiesClient::AggregatedListTargetTcpProxies(
    std::string const& project, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::cpp::compute::target_tcp_proxies::v1::
      AggregatedListTargetTcpProxiesRequest request;
  request.set_project(project);
  return connection_->AggregatedListTargetTcpProxies(request);
}

StreamRange<std::pair<
    std::string, google::cloud::cpp::compute::v1::TargetTcpProxiesScopedList>>
TargetTcpProxiesClient::AggregatedListTargetTcpProxies(
    google::cloud::cpp::compute::target_tcp_proxies::v1::
        AggregatedListTargetTcpProxiesRequest request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->AggregatedListTargetTcpProxies(std::move(request));
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
TargetTcpProxiesClient::DeleteTargetTcpProxy(
    std::string const& project, std::string const& target_tcp_proxy,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::cpp::compute::target_tcp_proxies::v1::
      DeleteTargetTcpProxyRequest request;
  request.set_project(project);
  request.set_target_tcp_proxy(target_tcp_proxy);
  return connection_->DeleteTargetTcpProxy(request);
}

StatusOr<google::cloud::cpp::compute::v1::Operation>
TargetTcpProxiesClient::DeleteTargetTcpProxy(
    ExperimentalTag, NoAwaitTag, std::string const& project,
    std::string const& target_tcp_proxy, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::cpp::compute::target_tcp_proxies::v1::
      DeleteTargetTcpProxyRequest request;
  request.set_project(project);
  request.set_target_tcp_proxy(target_tcp_proxy);
  return connection_->DeleteTargetTcpProxy(ExperimentalTag{}, NoAwaitTag{},
                                           request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
TargetTcpProxiesClient::DeleteTargetTcpProxy(
    google::cloud::cpp::compute::target_tcp_proxies::v1::
        DeleteTargetTcpProxyRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->DeleteTargetTcpProxy(request);
}

StatusOr<google::cloud::cpp::compute::v1::Operation>
TargetTcpProxiesClient::DeleteTargetTcpProxy(
    ExperimentalTag, NoAwaitTag,
    google::cloud::cpp::compute::target_tcp_proxies::v1::
        DeleteTargetTcpProxyRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->DeleteTargetTcpProxy(ExperimentalTag{}, NoAwaitTag{},
                                           request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
TargetTcpProxiesClient::DeleteTargetTcpProxy(
    ExperimentalTag,
    google::cloud::cpp::compute::v1::Operation const& operation, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->DeleteTargetTcpProxy(ExperimentalTag{}, operation);
}

StatusOr<google::cloud::cpp::compute::v1::TargetTcpProxy>
TargetTcpProxiesClient::GetTargetTcpProxy(std::string const& project,
                                          std::string const& target_tcp_proxy,
                                          Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::cpp::compute::target_tcp_proxies::v1::GetTargetTcpProxyRequest
      request;
  request.set_project(project);
  request.set_target_tcp_proxy(target_tcp_proxy);
  return connection_->GetTargetTcpProxy(request);
}

StatusOr<google::cloud::cpp::compute::v1::TargetTcpProxy>
TargetTcpProxiesClient::GetTargetTcpProxy(
    google::cloud::cpp::compute::target_tcp_proxies::v1::
        GetTargetTcpProxyRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->GetTargetTcpProxy(request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
TargetTcpProxiesClient::InsertTargetTcpProxy(
    std::string const& project,
    google::cloud::cpp::compute::v1::TargetTcpProxy const&
        target_tcp_proxy_resource,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::cpp::compute::target_tcp_proxies::v1::
      InsertTargetTcpProxyRequest request;
  request.set_project(project);
  *request.mutable_target_tcp_proxy_resource() = target_tcp_proxy_resource;
  return connection_->InsertTargetTcpProxy(request);
}

StatusOr<google::cloud::cpp::compute::v1::Operation>
TargetTcpProxiesClient::InsertTargetTcpProxy(
    ExperimentalTag, NoAwaitTag, std::string const& project,
    google::cloud::cpp::compute::v1::TargetTcpProxy const&
        target_tcp_proxy_resource,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::cpp::compute::target_tcp_proxies::v1::
      InsertTargetTcpProxyRequest request;
  request.set_project(project);
  *request.mutable_target_tcp_proxy_resource() = target_tcp_proxy_resource;
  return connection_->InsertTargetTcpProxy(ExperimentalTag{}, NoAwaitTag{},
                                           request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
TargetTcpProxiesClient::InsertTargetTcpProxy(
    google::cloud::cpp::compute::target_tcp_proxies::v1::
        InsertTargetTcpProxyRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->InsertTargetTcpProxy(request);
}

StatusOr<google::cloud::cpp::compute::v1::Operation>
TargetTcpProxiesClient::InsertTargetTcpProxy(
    ExperimentalTag, NoAwaitTag,
    google::cloud::cpp::compute::target_tcp_proxies::v1::
        InsertTargetTcpProxyRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->InsertTargetTcpProxy(ExperimentalTag{}, NoAwaitTag{},
                                           request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
TargetTcpProxiesClient::InsertTargetTcpProxy(
    ExperimentalTag,
    google::cloud::cpp::compute::v1::Operation const& operation, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->InsertTargetTcpProxy(ExperimentalTag{}, operation);
}

StreamRange<google::cloud::cpp::compute::v1::TargetTcpProxy>
TargetTcpProxiesClient::ListTargetTcpProxies(std::string const& project,
                                             Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::cpp::compute::target_tcp_proxies::v1::
      ListTargetTcpProxiesRequest request;
  request.set_project(project);
  return connection_->ListTargetTcpProxies(request);
}

StreamRange<google::cloud::cpp::compute::v1::TargetTcpProxy>
TargetTcpProxiesClient::ListTargetTcpProxies(
    google::cloud::cpp::compute::target_tcp_proxies::v1::
        ListTargetTcpProxiesRequest request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->ListTargetTcpProxies(std::move(request));
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
TargetTcpProxiesClient::SetBackendService(
    std::string const& project, std::string const& target_tcp_proxy,
    google::cloud::cpp::compute::v1::
        TargetTcpProxiesSetBackendServiceRequest const&
            target_tcp_proxies_set_backend_service_request_resource,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::cpp::compute::target_tcp_proxies::v1::SetBackendServiceRequest
      request;
  request.set_project(project);
  request.set_target_tcp_proxy(target_tcp_proxy);
  *request.mutable_target_tcp_proxies_set_backend_service_request_resource() =
      target_tcp_proxies_set_backend_service_request_resource;
  return connection_->SetBackendService(request);
}

StatusOr<google::cloud::cpp::compute::v1::Operation>
TargetTcpProxiesClient::SetBackendService(
    ExperimentalTag, NoAwaitTag, std::string const& project,
    std::string const& target_tcp_proxy,
    google::cloud::cpp::compute::v1::
        TargetTcpProxiesSetBackendServiceRequest const&
            target_tcp_proxies_set_backend_service_request_resource,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::cpp::compute::target_tcp_proxies::v1::SetBackendServiceRequest
      request;
  request.set_project(project);
  request.set_target_tcp_proxy(target_tcp_proxy);
  *request.mutable_target_tcp_proxies_set_backend_service_request_resource() =
      target_tcp_proxies_set_backend_service_request_resource;
  return connection_->SetBackendService(ExperimentalTag{}, NoAwaitTag{},
                                        request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
TargetTcpProxiesClient::SetBackendService(
    google::cloud::cpp::compute::target_tcp_proxies::v1::
        SetBackendServiceRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->SetBackendService(request);
}

StatusOr<google::cloud::cpp::compute::v1::Operation>
TargetTcpProxiesClient::SetBackendService(
    ExperimentalTag, NoAwaitTag,
    google::cloud::cpp::compute::target_tcp_proxies::v1::
        SetBackendServiceRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->SetBackendService(ExperimentalTag{}, NoAwaitTag{},
                                        request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
TargetTcpProxiesClient::SetBackendService(
    ExperimentalTag,
    google::cloud::cpp::compute::v1::Operation const& operation, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->SetBackendService(ExperimentalTag{}, operation);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
TargetTcpProxiesClient::SetProxyHeader(
    std::string const& project, std::string const& target_tcp_proxy,
    google::cloud::cpp::compute::v1::
        TargetTcpProxiesSetProxyHeaderRequest const&
            target_tcp_proxies_set_proxy_header_request_resource,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::cpp::compute::target_tcp_proxies::v1::SetProxyHeaderRequest
      request;
  request.set_project(project);
  request.set_target_tcp_proxy(target_tcp_proxy);
  *request.mutable_target_tcp_proxies_set_proxy_header_request_resource() =
      target_tcp_proxies_set_proxy_header_request_resource;
  return connection_->SetProxyHeader(request);
}

StatusOr<google::cloud::cpp::compute::v1::Operation>
TargetTcpProxiesClient::SetProxyHeader(
    ExperimentalTag, NoAwaitTag, std::string const& project,
    std::string const& target_tcp_proxy,
    google::cloud::cpp::compute::v1::
        TargetTcpProxiesSetProxyHeaderRequest const&
            target_tcp_proxies_set_proxy_header_request_resource,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::cpp::compute::target_tcp_proxies::v1::SetProxyHeaderRequest
      request;
  request.set_project(project);
  request.set_target_tcp_proxy(target_tcp_proxy);
  *request.mutable_target_tcp_proxies_set_proxy_header_request_resource() =
      target_tcp_proxies_set_proxy_header_request_resource;
  return connection_->SetProxyHeader(ExperimentalTag{}, NoAwaitTag{}, request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
TargetTcpProxiesClient::SetProxyHeader(
    google::cloud::cpp::compute::target_tcp_proxies::v1::
        SetProxyHeaderRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->SetProxyHeader(request);
}

StatusOr<google::cloud::cpp::compute::v1::Operation>
TargetTcpProxiesClient::SetProxyHeader(
    ExperimentalTag, NoAwaitTag,
    google::cloud::cpp::compute::target_tcp_proxies::v1::
        SetProxyHeaderRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->SetProxyHeader(ExperimentalTag{}, NoAwaitTag{}, request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
TargetTcpProxiesClient::SetProxyHeader(
    ExperimentalTag,
    google::cloud::cpp::compute::v1::Operation const& operation, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->SetProxyHeader(ExperimentalTag{}, operation);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_target_tcp_proxies_v1
}  // namespace cloud
}  // namespace google
