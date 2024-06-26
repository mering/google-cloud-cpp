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
// source: google/cloud/run/v2/service.proto

#include "google/cloud/run/v2/services_client.h"
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace run_v2 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

ServicesClient::ServicesClient(std::shared_ptr<ServicesConnection> connection,
                               Options opts)
    : connection_(std::move(connection)),
      options_(
          internal::MergeOptions(std::move(opts), connection_->options())) {}
ServicesClient::~ServicesClient() = default;

future<StatusOr<google::cloud::run::v2::Service>> ServicesClient::CreateService(
    std::string const& parent, google::cloud::run::v2::Service const& service,
    std::string const& service_id, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::run::v2::CreateServiceRequest request;
  request.set_parent(parent);
  *request.mutable_service() = service;
  request.set_service_id(service_id);
  return connection_->CreateService(request);
}

StatusOr<google::longrunning::Operation> ServicesClient::CreateService(
    ExperimentalTag, NoAwaitTag, std::string const& parent,
    google::cloud::run::v2::Service const& service,
    std::string const& service_id, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::run::v2::CreateServiceRequest request;
  request.set_parent(parent);
  *request.mutable_service() = service;
  request.set_service_id(service_id);
  return connection_->CreateService(ExperimentalTag{}, NoAwaitTag{}, request);
}

future<StatusOr<google::cloud::run::v2::Service>> ServicesClient::CreateService(
    google::cloud::run::v2::CreateServiceRequest const& request, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->CreateService(request);
}

StatusOr<google::longrunning::Operation> ServicesClient::CreateService(
    ExperimentalTag, NoAwaitTag,
    google::cloud::run::v2::CreateServiceRequest const& request, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->CreateService(ExperimentalTag{}, NoAwaitTag{}, request);
}

future<StatusOr<google::cloud::run::v2::Service>> ServicesClient::CreateService(
    ExperimentalTag, google::longrunning::Operation const& operation,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->CreateService(ExperimentalTag{}, operation);
}

StatusOr<google::cloud::run::v2::Service> ServicesClient::GetService(
    std::string const& name, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::run::v2::GetServiceRequest request;
  request.set_name(name);
  return connection_->GetService(request);
}

StatusOr<google::cloud::run::v2::Service> ServicesClient::GetService(
    google::cloud::run::v2::GetServiceRequest const& request, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->GetService(request);
}

StreamRange<google::cloud::run::v2::Service> ServicesClient::ListServices(
    std::string const& parent, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::run::v2::ListServicesRequest request;
  request.set_parent(parent);
  return connection_->ListServices(request);
}

StreamRange<google::cloud::run::v2::Service> ServicesClient::ListServices(
    google::cloud::run::v2::ListServicesRequest request, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->ListServices(std::move(request));
}

future<StatusOr<google::cloud::run::v2::Service>> ServicesClient::UpdateService(
    google::cloud::run::v2::Service const& service, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::run::v2::UpdateServiceRequest request;
  *request.mutable_service() = service;
  return connection_->UpdateService(request);
}

StatusOr<google::longrunning::Operation> ServicesClient::UpdateService(
    ExperimentalTag, NoAwaitTag, google::cloud::run::v2::Service const& service,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::run::v2::UpdateServiceRequest request;
  *request.mutable_service() = service;
  return connection_->UpdateService(ExperimentalTag{}, NoAwaitTag{}, request);
}

future<StatusOr<google::cloud::run::v2::Service>> ServicesClient::UpdateService(
    google::cloud::run::v2::UpdateServiceRequest const& request, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->UpdateService(request);
}

StatusOr<google::longrunning::Operation> ServicesClient::UpdateService(
    ExperimentalTag, NoAwaitTag,
    google::cloud::run::v2::UpdateServiceRequest const& request, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->UpdateService(ExperimentalTag{}, NoAwaitTag{}, request);
}

future<StatusOr<google::cloud::run::v2::Service>> ServicesClient::UpdateService(
    ExperimentalTag, google::longrunning::Operation const& operation,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->UpdateService(ExperimentalTag{}, operation);
}

future<StatusOr<google::cloud::run::v2::Service>> ServicesClient::DeleteService(
    std::string const& name, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::run::v2::DeleteServiceRequest request;
  request.set_name(name);
  return connection_->DeleteService(request);
}

StatusOr<google::longrunning::Operation> ServicesClient::DeleteService(
    ExperimentalTag, NoAwaitTag, std::string const& name, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::run::v2::DeleteServiceRequest request;
  request.set_name(name);
  return connection_->DeleteService(ExperimentalTag{}, NoAwaitTag{}, request);
}

future<StatusOr<google::cloud::run::v2::Service>> ServicesClient::DeleteService(
    google::cloud::run::v2::DeleteServiceRequest const& request, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->DeleteService(request);
}

StatusOr<google::longrunning::Operation> ServicesClient::DeleteService(
    ExperimentalTag, NoAwaitTag,
    google::cloud::run::v2::DeleteServiceRequest const& request, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->DeleteService(ExperimentalTag{}, NoAwaitTag{}, request);
}

future<StatusOr<google::cloud::run::v2::Service>> ServicesClient::DeleteService(
    ExperimentalTag, google::longrunning::Operation const& operation,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->DeleteService(ExperimentalTag{}, operation);
}

StatusOr<google::iam::v1::Policy> ServicesClient::GetIamPolicy(
    google::iam::v1::GetIamPolicyRequest const& request, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->GetIamPolicy(request);
}

StatusOr<google::iam::v1::Policy> ServicesClient::SetIamPolicy(
    google::iam::v1::SetIamPolicyRequest const& request, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->SetIamPolicy(request);
}

StatusOr<google::iam::v1::TestIamPermissionsResponse>
ServicesClient::TestIamPermissions(
    google::iam::v1::TestIamPermissionsRequest const& request, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->TestIamPermissions(request);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace run_v2
}  // namespace cloud
}  // namespace google
