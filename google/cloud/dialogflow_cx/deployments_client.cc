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
// source: google/cloud/dialogflow/cx/v3/deployment.proto

#include "google/cloud/dialogflow_cx/deployments_client.h"
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace dialogflow_cx {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

DeploymentsClient::DeploymentsClient(
    std::shared_ptr<DeploymentsConnection> connection, Options opts)
    : connection_(std::move(connection)),
      options_(
          internal::MergeOptions(std::move(opts), connection_->options())) {}
DeploymentsClient::~DeploymentsClient() = default;

StreamRange<google::cloud::dialogflow::cx::v3::Deployment>
DeploymentsClient::ListDeployments(std::string const& parent, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::dialogflow::cx::v3::ListDeploymentsRequest request;
  request.set_parent(parent);
  return connection_->ListDeployments(request);
}

StreamRange<google::cloud::dialogflow::cx::v3::Deployment>
DeploymentsClient::ListDeployments(
    google::cloud::dialogflow::cx::v3::ListDeploymentsRequest request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->ListDeployments(std::move(request));
}

StatusOr<google::cloud::dialogflow::cx::v3::Deployment>
DeploymentsClient::GetDeployment(std::string const& name, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::dialogflow::cx::v3::GetDeploymentRequest request;
  request.set_name(name);
  return connection_->GetDeployment(request);
}

StatusOr<google::cloud::dialogflow::cx::v3::Deployment>
DeploymentsClient::GetDeployment(
    google::cloud::dialogflow::cx::v3::GetDeploymentRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->GetDeployment(request);
}

StreamRange<google::cloud::location::Location> DeploymentsClient::ListLocations(
    google::cloud::location::ListLocationsRequest request, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->ListLocations(std::move(request));
}

StatusOr<google::cloud::location::Location> DeploymentsClient::GetLocation(
    google::cloud::location::GetLocationRequest const& request, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->GetLocation(request);
}

StreamRange<google::longrunning::Operation> DeploymentsClient::ListOperations(
    std::string const& name, std::string const& filter, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::longrunning::ListOperationsRequest request;
  request.set_name(name);
  request.set_filter(filter);
  return connection_->ListOperations(request);
}

StreamRange<google::longrunning::Operation> DeploymentsClient::ListOperations(
    google::longrunning::ListOperationsRequest request, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->ListOperations(std::move(request));
}

StatusOr<google::longrunning::Operation> DeploymentsClient::GetOperation(
    std::string const& name, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::longrunning::GetOperationRequest request;
  request.set_name(name);
  return connection_->GetOperation(request);
}

StatusOr<google::longrunning::Operation> DeploymentsClient::GetOperation(
    google::longrunning::GetOperationRequest const& request, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->GetOperation(request);
}

Status DeploymentsClient::CancelOperation(std::string const& name,
                                          Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::longrunning::CancelOperationRequest request;
  request.set_name(name);
  return connection_->CancelOperation(request);
}

Status DeploymentsClient::CancelOperation(
    google::longrunning::CancelOperationRequest const& request, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->CancelOperation(request);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace dialogflow_cx
}  // namespace cloud
}  // namespace google
