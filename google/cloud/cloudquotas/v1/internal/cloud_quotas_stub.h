// Copyright 2024 Google LLC
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
// source: google/api/cloudquotas/v1/cloudquotas.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_CLOUDQUOTAS_V1_INTERNAL_CLOUD_QUOTAS_STUB_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_CLOUDQUOTAS_V1_INTERNAL_CLOUD_QUOTAS_STUB_H

#include "google/cloud/options.h"
#include "google/cloud/status_or.h"
#include "google/cloud/version.h"
#include "google/api/cloudquotas/v1/cloudquotas.grpc.pb.h"
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace cloudquotas_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class CloudQuotasStub {
 public:
  virtual ~CloudQuotasStub() = 0;

  virtual StatusOr<google::api::cloudquotas::v1::ListQuotaInfosResponse>
  ListQuotaInfos(
      grpc::ClientContext& context, Options const& options,
      google::api::cloudquotas::v1::ListQuotaInfosRequest const& request) = 0;

  virtual StatusOr<google::api::cloudquotas::v1::QuotaInfo> GetQuotaInfo(
      grpc::ClientContext& context, Options const& options,
      google::api::cloudquotas::v1::GetQuotaInfoRequest const& request) = 0;

  virtual StatusOr<google::api::cloudquotas::v1::ListQuotaPreferencesResponse>
  ListQuotaPreferences(
      grpc::ClientContext& context, Options const& options,
      google::api::cloudquotas::v1::ListQuotaPreferencesRequest const&
          request) = 0;

  virtual StatusOr<google::api::cloudquotas::v1::QuotaPreference>
  GetQuotaPreference(
      grpc::ClientContext& context, Options const& options,
      google::api::cloudquotas::v1::GetQuotaPreferenceRequest const&
          request) = 0;

  virtual StatusOr<google::api::cloudquotas::v1::QuotaPreference>
  CreateQuotaPreference(
      grpc::ClientContext& context, Options const& options,
      google::api::cloudquotas::v1::CreateQuotaPreferenceRequest const&
          request) = 0;

  virtual StatusOr<google::api::cloudquotas::v1::QuotaPreference>
  UpdateQuotaPreference(
      grpc::ClientContext& context, Options const& options,
      google::api::cloudquotas::v1::UpdateQuotaPreferenceRequest const&
          request) = 0;
};

class DefaultCloudQuotasStub : public CloudQuotasStub {
 public:
  explicit DefaultCloudQuotasStub(
      std::unique_ptr<google::api::cloudquotas::v1::CloudQuotas::StubInterface>
          grpc_stub)
      : grpc_stub_(std::move(grpc_stub)) {}

  StatusOr<google::api::cloudquotas::v1::ListQuotaInfosResponse> ListQuotaInfos(
      grpc::ClientContext& context, Options const& options,
      google::api::cloudquotas::v1::ListQuotaInfosRequest const& request)
      override;

  StatusOr<google::api::cloudquotas::v1::QuotaInfo> GetQuotaInfo(
      grpc::ClientContext& context, Options const& options,
      google::api::cloudquotas::v1::GetQuotaInfoRequest const& request)
      override;

  StatusOr<google::api::cloudquotas::v1::ListQuotaPreferencesResponse>
  ListQuotaPreferences(
      grpc::ClientContext& context, Options const& options,
      google::api::cloudquotas::v1::ListQuotaPreferencesRequest const& request)
      override;

  StatusOr<google::api::cloudquotas::v1::QuotaPreference> GetQuotaPreference(
      grpc::ClientContext& context, Options const& options,
      google::api::cloudquotas::v1::GetQuotaPreferenceRequest const& request)
      override;

  StatusOr<google::api::cloudquotas::v1::QuotaPreference> CreateQuotaPreference(
      grpc::ClientContext& context, Options const& options,
      google::api::cloudquotas::v1::CreateQuotaPreferenceRequest const& request)
      override;

  StatusOr<google::api::cloudquotas::v1::QuotaPreference> UpdateQuotaPreference(
      grpc::ClientContext& context, Options const& options,
      google::api::cloudquotas::v1::UpdateQuotaPreferenceRequest const& request)
      override;

 private:
  std::unique_ptr<google::api::cloudquotas::v1::CloudQuotas::StubInterface>
      grpc_stub_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace cloudquotas_v1_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_CLOUDQUOTAS_V1_INTERNAL_CLOUD_QUOTAS_STUB_H
