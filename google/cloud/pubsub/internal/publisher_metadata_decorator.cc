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
// source: google/pubsub/v1/pubsub.proto

#include "google/cloud/pubsub/internal/publisher_metadata_decorator.h"
#include "google/cloud/common_options.h"
#include "google/cloud/internal/absl_str_cat_quiet.h"
#include "google/cloud/internal/api_client_header.h"
#include "google/cloud/internal/url_encode.h"
#include "google/cloud/status_or.h"
#include <google/pubsub/v1/pubsub.grpc.pb.h>
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace pubsub_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

PublisherMetadata::PublisherMetadata(
    std::shared_ptr<PublisherStub> child,
    std::multimap<std::string, std::string> fixed_metadata,
    std::string api_client_header)
    : child_(std::move(child)),
      fixed_metadata_(std::move(fixed_metadata)),
      api_client_header_(
          api_client_header.empty()
              ? google::cloud::internal::GeneratedLibClientHeader()
              : std::move(api_client_header)) {}

StatusOr<google::pubsub::v1::Topic> PublisherMetadata::CreateTopic(
    grpc::ClientContext& context, Options const& options,
    google::pubsub::v1::Topic const& request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->CreateTopic(context, options, request);
}

StatusOr<google::pubsub::v1::Topic> PublisherMetadata::UpdateTopic(
    grpc::ClientContext& context, Options const& options,
    google::pubsub::v1::UpdateTopicRequest const& request) {
  SetMetadata(
      context, options,
      absl::StrCat("topic.name=", internal::UrlEncode(request.topic().name())));
  return child_->UpdateTopic(context, options, request);
}

StatusOr<google::pubsub::v1::PublishResponse> PublisherMetadata::Publish(
    grpc::ClientContext& context, Options const& options,
    google::pubsub::v1::PublishRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("topic=", internal::UrlEncode(request.topic())));
  return child_->Publish(context, options, request);
}

StatusOr<google::pubsub::v1::Topic> PublisherMetadata::GetTopic(
    grpc::ClientContext& context, Options const& options,
    google::pubsub::v1::GetTopicRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("topic=", internal::UrlEncode(request.topic())));
  return child_->GetTopic(context, options, request);
}

StatusOr<google::pubsub::v1::ListTopicsResponse> PublisherMetadata::ListTopics(
    grpc::ClientContext& context, Options const& options,
    google::pubsub::v1::ListTopicsRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("project=", internal::UrlEncode(request.project())));
  return child_->ListTopics(context, options, request);
}

StatusOr<google::pubsub::v1::ListTopicSubscriptionsResponse>
PublisherMetadata::ListTopicSubscriptions(
    grpc::ClientContext& context, Options const& options,
    google::pubsub::v1::ListTopicSubscriptionsRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("topic=", internal::UrlEncode(request.topic())));
  return child_->ListTopicSubscriptions(context, options, request);
}

StatusOr<google::pubsub::v1::ListTopicSnapshotsResponse>
PublisherMetadata::ListTopicSnapshots(
    grpc::ClientContext& context, Options const& options,
    google::pubsub::v1::ListTopicSnapshotsRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("topic=", internal::UrlEncode(request.topic())));
  return child_->ListTopicSnapshots(context, options, request);
}

Status PublisherMetadata::DeleteTopic(
    grpc::ClientContext& context, Options const& options,
    google::pubsub::v1::DeleteTopicRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("topic=", internal::UrlEncode(request.topic())));
  return child_->DeleteTopic(context, options, request);
}

StatusOr<google::pubsub::v1::DetachSubscriptionResponse>
PublisherMetadata::DetachSubscription(
    grpc::ClientContext& context, Options const& options,
    google::pubsub::v1::DetachSubscriptionRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("subscription=",
                           internal::UrlEncode(request.subscription())));
  return child_->DetachSubscription(context, options, request);
}

future<StatusOr<google::pubsub::v1::PublishResponse>>
PublisherMetadata::AsyncPublish(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::pubsub::v1::PublishRequest const& request) {
  SetMetadata(*context, *options,
              absl::StrCat("topic=", internal::UrlEncode(request.topic())));
  return child_->AsyncPublish(cq, std::move(context), std::move(options),
                              request);
}

void PublisherMetadata::SetMetadata(grpc::ClientContext& context,
                                    Options const& options,
                                    std::string const& request_params) {
  context.AddMetadata("x-goog-request-params", request_params);
  SetMetadata(context, options);
}

void PublisherMetadata::SetMetadata(grpc::ClientContext& context,
                                    Options const& options) {
  for (auto const& kv : fixed_metadata_) {
    context.AddMetadata(kv.first, kv.second);
  }
  context.AddMetadata("x-goog-api-client", api_client_header_);
  if (options.has<UserProjectOption>()) {
    context.AddMetadata("x-goog-user-project",
                        options.get<UserProjectOption>());
  }
  auto const& authority = options.get<AuthorityOption>();
  if (!authority.empty()) context.set_authority(authority);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace pubsub_internal
}  // namespace cloud
}  // namespace google
