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
// source: generator/integration_tests/test.proto

#ifndef GOOGLE_CLOUD_CPP_GENERATOR_INTEGRATION_TESTS_GOLDEN_V1_INTERNAL_GOLDEN_KITCHEN_SINK_REST_STUB_H
#define GOOGLE_CLOUD_CPP_GENERATOR_INTEGRATION_TESTS_GOLDEN_V1_INTERNAL_GOLDEN_KITCHEN_SINK_REST_STUB_H

#include "google/cloud/completion_queue.h"
#include "google/cloud/internal/rest_client.h"
#include "google/cloud/internal/rest_context.h"
#include "google/cloud/status_or.h"
#include "google/cloud/version.h"
#include <generator/integration_tests/backup.pb.h>
#include <generator/integration_tests/test.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace golden_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class GoldenKitchenSinkRestStub {
 public:
  virtual ~GoldenKitchenSinkRestStub() = default;

  virtual StatusOr<google::test::admin::database::v1::GenerateAccessTokenResponse> GenerateAccessToken(
      google::cloud::rest_internal::RestContext& rest_context,
      google::test::admin::database::v1::GenerateAccessTokenRequest const& request) = 0;

  virtual StatusOr<google::test::admin::database::v1::GenerateIdTokenResponse> GenerateIdToken(
      google::cloud::rest_internal::RestContext& rest_context,
      google::test::admin::database::v1::GenerateIdTokenRequest const& request) = 0;

  virtual StatusOr<google::test::admin::database::v1::WriteLogEntriesResponse> WriteLogEntries(
      google::cloud::rest_internal::RestContext& rest_context,
      google::test::admin::database::v1::WriteLogEntriesRequest const& request) = 0;

  virtual StatusOr<google::test::admin::database::v1::ListLogsResponse> ListLogs(
      google::cloud::rest_internal::RestContext& rest_context,
      google::test::admin::database::v1::ListLogsRequest const& request) = 0;

  virtual StatusOr<google::test::admin::database::v1::ListServiceAccountKeysResponse> ListServiceAccountKeys(
      google::cloud::rest_internal::RestContext& rest_context,
      google::test::admin::database::v1::ListServiceAccountKeysRequest const& request) = 0;

  virtual Status DoNothing(
      google::cloud::rest_internal::RestContext& rest_context,
      google::protobuf::Empty const& request) = 0;

  virtual Status ExplicitRouting1(
      google::cloud::rest_internal::RestContext& rest_context,
      google::test::admin::database::v1::ExplicitRoutingRequest const& request) = 0;

  virtual Status ExplicitRouting2(
      google::cloud::rest_internal::RestContext& rest_context,
      google::test::admin::database::v1::ExplicitRoutingRequest const& request) = 0;
};

class DefaultGoldenKitchenSinkRestStub : public GoldenKitchenSinkRestStub {
 public:
  ~DefaultGoldenKitchenSinkRestStub() override = default;

  explicit DefaultGoldenKitchenSinkRestStub(Options options);
  DefaultGoldenKitchenSinkRestStub(
      std::shared_ptr<rest_internal::RestClient> service,
      Options options);

  StatusOr<google::test::admin::database::v1::GenerateAccessTokenResponse> GenerateAccessToken(
      google::cloud::rest_internal::RestContext& rest_context,
      google::test::admin::database::v1::GenerateAccessTokenRequest const& request) override;

  StatusOr<google::test::admin::database::v1::GenerateIdTokenResponse> GenerateIdToken(
      google::cloud::rest_internal::RestContext& rest_context,
      google::test::admin::database::v1::GenerateIdTokenRequest const& request) override;

  StatusOr<google::test::admin::database::v1::WriteLogEntriesResponse> WriteLogEntries(
      google::cloud::rest_internal::RestContext& rest_context,
      google::test::admin::database::v1::WriteLogEntriesRequest const& request) override;

  StatusOr<google::test::admin::database::v1::ListLogsResponse> ListLogs(
      google::cloud::rest_internal::RestContext& rest_context,
      google::test::admin::database::v1::ListLogsRequest const& request) override;

  StatusOr<google::test::admin::database::v1::ListServiceAccountKeysResponse> ListServiceAccountKeys(
      google::cloud::rest_internal::RestContext& rest_context,
      google::test::admin::database::v1::ListServiceAccountKeysRequest const& request) override;

  Status DoNothing(
      google::cloud::rest_internal::RestContext& rest_context,
      google::protobuf::Empty const& request) override;

  Status ExplicitRouting1(
      google::cloud::rest_internal::RestContext& rest_context,
      google::test::admin::database::v1::ExplicitRoutingRequest const& request) override;

  Status ExplicitRouting2(
      google::cloud::rest_internal::RestContext& rest_context,
      google::test::admin::database::v1::ExplicitRoutingRequest const& request) override;

 private:
  std::shared_ptr<rest_internal::RestClient> service_;
  Options options_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace golden_v1_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GENERATOR_INTEGRATION_TESTS_GOLDEN_V1_INTERNAL_GOLDEN_KITCHEN_SINK_REST_STUB_H
