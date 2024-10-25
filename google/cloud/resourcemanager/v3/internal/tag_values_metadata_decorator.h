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
// source: google/cloud/resourcemanager/v3/tag_values.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_RESOURCEMANAGER_V3_INTERNAL_TAG_VALUES_METADATA_DECORATOR_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_RESOURCEMANAGER_V3_INTERNAL_TAG_VALUES_METADATA_DECORATOR_H

#include "google/cloud/resourcemanager/v3/internal/tag_values_stub.h"
#include "google/cloud/options.h"
#include "google/cloud/version.h"
#include "google/longrunning/operations.grpc.pb.h"
#include <map>
#include <memory>
#include <string>

namespace google {
namespace cloud {
namespace resourcemanager_v3_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class TagValuesMetadata : public TagValuesStub {
 public:
  ~TagValuesMetadata() override = default;
  TagValuesMetadata(std::shared_ptr<TagValuesStub> child,
                    std::multimap<std::string, std::string> fixed_metadata,
                    std::string api_client_header = "");

  StatusOr<google::cloud::resourcemanager::v3::ListTagValuesResponse>
  ListTagValues(grpc::ClientContext& context, Options const& options,
                google::cloud::resourcemanager::v3::ListTagValuesRequest const&
                    request) override;

  StatusOr<google::cloud::resourcemanager::v3::TagValue> GetTagValue(
      grpc::ClientContext& context, Options const& options,
      google::cloud::resourcemanager::v3::GetTagValueRequest const& request)
      override;

  StatusOr<google::cloud::resourcemanager::v3::TagValue> GetNamespacedTagValue(
      grpc::ClientContext& context, Options const& options,
      google::cloud::resourcemanager::v3::GetNamespacedTagValueRequest const&
          request) override;

  future<StatusOr<google::longrunning::Operation>> AsyncCreateTagValue(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::resourcemanager::v3::CreateTagValueRequest const& request)
      override;

  StatusOr<google::longrunning::Operation> CreateTagValue(
      grpc::ClientContext& context, Options options,
      google::cloud::resourcemanager::v3::CreateTagValueRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncUpdateTagValue(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::resourcemanager::v3::UpdateTagValueRequest const& request)
      override;

  StatusOr<google::longrunning::Operation> UpdateTagValue(
      grpc::ClientContext& context, Options options,
      google::cloud::resourcemanager::v3::UpdateTagValueRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncDeleteTagValue(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::resourcemanager::v3::DeleteTagValueRequest const& request)
      override;

  StatusOr<google::longrunning::Operation> DeleteTagValue(
      grpc::ClientContext& context, Options options,
      google::cloud::resourcemanager::v3::DeleteTagValueRequest const& request)
      override;

  StatusOr<google::iam::v1::Policy> GetIamPolicy(
      grpc::ClientContext& context, Options const& options,
      google::iam::v1::GetIamPolicyRequest const& request) override;

  StatusOr<google::iam::v1::Policy> SetIamPolicy(
      grpc::ClientContext& context, Options const& options,
      google::iam::v1::SetIamPolicyRequest const& request) override;

  StatusOr<google::iam::v1::TestIamPermissionsResponse> TestIamPermissions(
      grpc::ClientContext& context, Options const& options,
      google::iam::v1::TestIamPermissionsRequest const& request) override;

  StatusOr<google::longrunning::Operation> GetOperation(
      grpc::ClientContext& context, Options const& options,
      google::longrunning::GetOperationRequest const& request) override;

  future<StatusOr<google::longrunning::Operation>> AsyncGetOperation(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::longrunning::GetOperationRequest const& request) override;

  future<Status> AsyncCancelOperation(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::longrunning::CancelOperationRequest const& request) override;

 private:
  void SetMetadata(grpc::ClientContext& context, Options const& options,
                   std::string const& request_params);
  void SetMetadata(grpc::ClientContext& context, Options const& options);

  std::shared_ptr<TagValuesStub> child_;
  std::multimap<std::string, std::string> fixed_metadata_;
  std::string api_client_header_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace resourcemanager_v3_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_RESOURCEMANAGER_V3_INTERNAL_TAG_VALUES_METADATA_DECORATOR_H
