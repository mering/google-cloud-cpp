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
// source: google/cloud/billing/v1/cloud_catalog.proto

#include "google/cloud/billing/v1/internal/cloud_catalog_stub.h"
#include "google/cloud/grpc_error_delegate.h"
#include "google/cloud/status_or.h"
#include "google/cloud/billing/v1/cloud_catalog.grpc.pb.h"
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace billing_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

CloudCatalogStub::~CloudCatalogStub() = default;

StatusOr<google::cloud::billing::v1::ListServicesResponse>
DefaultCloudCatalogStub::ListServices(
    grpc::ClientContext& context, Options const&,
    google::cloud::billing::v1::ListServicesRequest const& request) {
  google::cloud::billing::v1::ListServicesResponse response;
  auto status = grpc_stub_->ListServices(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::billing::v1::ListSkusResponse>
DefaultCloudCatalogStub::ListSkus(
    grpc::ClientContext& context, Options const&,
    google::cloud::billing::v1::ListSkusRequest const& request) {
  google::cloud::billing::v1::ListSkusResponse response;
  auto status = grpc_stub_->ListSkus(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace billing_v1_internal
}  // namespace cloud
}  // namespace google
