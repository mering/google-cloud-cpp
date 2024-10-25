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
// source: google/cloud/compute/images/v1/images.proto

#include "google/cloud/compute/images/v1/internal/images_rest_stub.h"
#include "google/cloud/common_options.h"
#include "google/cloud/internal/absl_str_cat_quiet.h"
#include "google/cloud/internal/rest_stub_helpers.h"
#include "google/cloud/status_or.h"
#include "google/cloud/compute/global_operations/v1/global_operations.pb.h"
#include "google/cloud/compute/images/v1/images.pb.h"
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace compute_images_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

DefaultImagesRestStub::DefaultImagesRestStub(Options options)
    : service_(rest_internal::MakePooledRestClient(
          options.get<EndpointOption>(), options)),
      operations_(rest_internal::MakePooledRestClient(
          options.get<EndpointOption>(), options)),
      options_(std::move(options)) {}

DefaultImagesRestStub::DefaultImagesRestStub(
    std::shared_ptr<rest_internal::RestClient> service,
    std::shared_ptr<rest_internal::RestClient> operations, Options options)
    : service_(std::move(service)),
      operations_(std::move(operations)),
      options_(std::move(options)) {}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
DefaultImagesRestStub::AsyncDeleteImage(
    CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::cpp::compute::images::v1::DeleteImageRequest const&
        request) {
  promise<StatusOr<google::cloud::cpp::compute::v1::Operation>> p;
  future<StatusOr<google::cloud::cpp::compute::v1::Operation>> f =
      p.get_future();
  std::thread t{
      [](auto p, auto service, auto request, auto rest_context, auto options) {
        std::vector<std::pair<std::string, std::string>> query_params;
        query_params.push_back({"request_id", request.request_id()});
        query_params =
            rest_internal::TrimEmptyQueryParameters(std::move(query_params));
        p.set_value(
            rest_internal::Delete<google::cloud::cpp::compute::v1::Operation>(
                *service, *rest_context, request, false,
                absl::StrCat("/", "compute", "/",
                             rest_internal::DetermineApiVersion("v1", *options),
                             "/", "projects", "/", request.project(), "/",
                             "global", "/", "images", "/", request.image()),
                std::move(query_params)));
      },
      std::move(p),
      service_,
      request,
      std::move(rest_context),
      std::move(options)};
  return f.then([t = std::move(t), cq](auto f) mutable {
    cq.RunAsync([t = std::move(t)]() mutable { t.join(); });
    return f.get();
  });
}

StatusOr<google::cloud::cpp::compute::v1::Operation>
DefaultImagesRestStub::DeleteImage(
    google::cloud::rest_internal::RestContext& rest_context,
    Options const& options,
    google::cloud::cpp::compute::images::v1::DeleteImageRequest const&
        request) {
  std::vector<std::pair<std::string, std::string>> query_params;
  query_params.push_back({"request_id", request.request_id()});
  query_params =
      rest_internal::TrimEmptyQueryParameters(std::move(query_params));
  return rest_internal::Delete<google::cloud::cpp::compute::v1::Operation>(
      *service_, rest_context, request, false,
      absl::StrCat("/", "compute", "/",
                   rest_internal::DetermineApiVersion("v1", options), "/",
                   "projects", "/", request.project(), "/", "global", "/",
                   "images", "/", request.image()),
      std::move(query_params));
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
DefaultImagesRestStub::AsyncDeprecate(
    CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::cpp::compute::images::v1::DeprecateRequest const& request) {
  promise<StatusOr<google::cloud::cpp::compute::v1::Operation>> p;
  future<StatusOr<google::cloud::cpp::compute::v1::Operation>> f =
      p.get_future();
  std::thread t{
      [](auto p, auto service, auto request, auto rest_context, auto options) {
        std::vector<std::pair<std::string, std::string>> query_params;
        query_params.push_back({"request_id", request.request_id()});
        query_params =
            rest_internal::TrimEmptyQueryParameters(std::move(query_params));
        p.set_value(
            rest_internal::Post<google::cloud::cpp::compute::v1::Operation>(
                *service, *rest_context, request.deprecation_status_resource(),
                false,
                absl::StrCat("/", "compute", "/",
                             rest_internal::DetermineApiVersion("v1", *options),
                             "/", "projects", "/", request.project(), "/",
                             "global", "/", "images", "/", request.image(), "/",
                             "deprecate"),
                std::move(query_params)));
      },
      std::move(p),
      service_,
      request,
      std::move(rest_context),
      std::move(options)};
  return f.then([t = std::move(t), cq](auto f) mutable {
    cq.RunAsync([t = std::move(t)]() mutable { t.join(); });
    return f.get();
  });
}

StatusOr<google::cloud::cpp::compute::v1::Operation>
DefaultImagesRestStub::Deprecate(
    google::cloud::rest_internal::RestContext& rest_context,
    Options const& options,
    google::cloud::cpp::compute::images::v1::DeprecateRequest const& request) {
  std::vector<std::pair<std::string, std::string>> query_params;
  query_params.push_back({"request_id", request.request_id()});
  query_params =
      rest_internal::TrimEmptyQueryParameters(std::move(query_params));
  return rest_internal::Post<google::cloud::cpp::compute::v1::Operation>(
      *service_, rest_context, request.deprecation_status_resource(), false,
      absl::StrCat("/", "compute", "/",
                   rest_internal::DetermineApiVersion("v1", options), "/",
                   "projects", "/", request.project(), "/", "global", "/",
                   "images", "/", request.image(), "/", "deprecate"),
      std::move(query_params));
}

StatusOr<google::cloud::cpp::compute::v1::Image>
DefaultImagesRestStub::GetImage(
    google::cloud::rest_internal::RestContext& rest_context,
    Options const& options,
    google::cloud::cpp::compute::images::v1::GetImageRequest const& request) {
  std::vector<std::pair<std::string, std::string>> query_params;
  return rest_internal::Get<google::cloud::cpp::compute::v1::Image>(
      *service_, rest_context, request, false,
      absl::StrCat("/", "compute", "/",
                   rest_internal::DetermineApiVersion("v1", options), "/",
                   "projects", "/", request.project(), "/", "global", "/",
                   "images", "/", request.image()),
      std::move(query_params));
}

StatusOr<google::cloud::cpp::compute::v1::Image>
DefaultImagesRestStub::GetFromFamily(
    google::cloud::rest_internal::RestContext& rest_context,
    Options const& options,
    google::cloud::cpp::compute::images::v1::GetFromFamilyRequest const&
        request) {
  std::vector<std::pair<std::string, std::string>> query_params;
  return rest_internal::Get<google::cloud::cpp::compute::v1::Image>(
      *service_, rest_context, request, false,
      absl::StrCat("/", "compute", "/",
                   rest_internal::DetermineApiVersion("v1", options), "/",
                   "projects", "/", request.project(), "/", "global", "/",
                   "images", "/", "family", "/", request.family()),
      std::move(query_params));
}

StatusOr<google::cloud::cpp::compute::v1::Policy>
DefaultImagesRestStub::GetIamPolicy(
    google::cloud::rest_internal::RestContext& rest_context,
    Options const& options,
    google::cloud::cpp::compute::images::v1::GetIamPolicyRequest const&
        request) {
  std::vector<std::pair<std::string, std::string>> query_params;
  query_params.push_back(
      {"options_requested_policy_version",
       std::to_string(request.options_requested_policy_version())});
  query_params =
      rest_internal::TrimEmptyQueryParameters(std::move(query_params));
  return rest_internal::Get<google::cloud::cpp::compute::v1::Policy>(
      *service_, rest_context, request, false,
      absl::StrCat("/", "compute", "/",
                   rest_internal::DetermineApiVersion("v1", options), "/",
                   "projects", "/", request.project(), "/", "global", "/",
                   "images", "/", request.resource(), "/", "getIamPolicy"),
      std::move(query_params));
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
DefaultImagesRestStub::AsyncInsertImage(
    CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::cpp::compute::images::v1::InsertImageRequest const&
        request) {
  promise<StatusOr<google::cloud::cpp::compute::v1::Operation>> p;
  future<StatusOr<google::cloud::cpp::compute::v1::Operation>> f =
      p.get_future();
  std::thread t{
      [](auto p, auto service, auto request, auto rest_context, auto options) {
        std::vector<std::pair<std::string, std::string>> query_params;
        query_params.push_back(
            {"force_create", (request.force_create() ? "1" : "0")});
        query_params.push_back({"request_id", request.request_id()});
        query_params =
            rest_internal::TrimEmptyQueryParameters(std::move(query_params));
        p.set_value(
            rest_internal::Post<google::cloud::cpp::compute::v1::Operation>(
                *service, *rest_context, request.image_resource(), false,
                absl::StrCat("/", "compute", "/",
                             rest_internal::DetermineApiVersion("v1", *options),
                             "/", "projects", "/", request.project(), "/",
                             "global", "/", "images"),
                std::move(query_params)));
      },
      std::move(p),
      service_,
      request,
      std::move(rest_context),
      std::move(options)};
  return f.then([t = std::move(t), cq](auto f) mutable {
    cq.RunAsync([t = std::move(t)]() mutable { t.join(); });
    return f.get();
  });
}

StatusOr<google::cloud::cpp::compute::v1::Operation>
DefaultImagesRestStub::InsertImage(
    google::cloud::rest_internal::RestContext& rest_context,
    Options const& options,
    google::cloud::cpp::compute::images::v1::InsertImageRequest const&
        request) {
  std::vector<std::pair<std::string, std::string>> query_params;
  query_params.push_back(
      {"force_create", (request.force_create() ? "1" : "0")});
  query_params.push_back({"request_id", request.request_id()});
  query_params =
      rest_internal::TrimEmptyQueryParameters(std::move(query_params));
  return rest_internal::Post<google::cloud::cpp::compute::v1::Operation>(
      *service_, rest_context, request.image_resource(), false,
      absl::StrCat("/", "compute", "/",
                   rest_internal::DetermineApiVersion("v1", options), "/",
                   "projects", "/", request.project(), "/", "global", "/",
                   "images"),
      std::move(query_params));
}

StatusOr<google::cloud::cpp::compute::v1::ImageList>
DefaultImagesRestStub::ListImages(
    google::cloud::rest_internal::RestContext& rest_context,
    Options const& options,
    google::cloud::cpp::compute::images::v1::ListImagesRequest const& request) {
  std::vector<std::pair<std::string, std::string>> query_params;
  query_params.push_back({"filter", request.filter()});
  query_params.push_back(
      {"max_results", std::to_string(request.max_results())});
  query_params.push_back({"order_by", request.order_by()});
  query_params.push_back({"page_token", request.page_token()});
  query_params.push_back({"return_partial_success",
                          (request.return_partial_success() ? "1" : "0")});
  query_params =
      rest_internal::TrimEmptyQueryParameters(std::move(query_params));
  return rest_internal::Get<google::cloud::cpp::compute::v1::ImageList>(
      *service_, rest_context, request, false,
      absl::StrCat("/", "compute", "/",
                   rest_internal::DetermineApiVersion("v1", options), "/",
                   "projects", "/", request.project(), "/", "global", "/",
                   "images"),
      std::move(query_params));
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
DefaultImagesRestStub::AsyncPatchImage(
    CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::cpp::compute::images::v1::PatchImageRequest const& request) {
  promise<StatusOr<google::cloud::cpp::compute::v1::Operation>> p;
  future<StatusOr<google::cloud::cpp::compute::v1::Operation>> f =
      p.get_future();
  std::thread t{
      [](auto p, auto service, auto request, auto rest_context, auto options) {
        std::vector<std::pair<std::string, std::string>> query_params;
        query_params.push_back({"request_id", request.request_id()});
        query_params =
            rest_internal::TrimEmptyQueryParameters(std::move(query_params));
        p.set_value(
            rest_internal::Patch<google::cloud::cpp::compute::v1::Operation>(
                *service, *rest_context, request.image_resource(), false,
                absl::StrCat("/", "compute", "/",
                             rest_internal::DetermineApiVersion("v1", *options),
                             "/", "projects", "/", request.project(), "/",
                             "global", "/", "images", "/", request.image()),
                std::move(query_params)));
      },
      std::move(p),
      service_,
      request,
      std::move(rest_context),
      std::move(options)};
  return f.then([t = std::move(t), cq](auto f) mutable {
    cq.RunAsync([t = std::move(t)]() mutable { t.join(); });
    return f.get();
  });
}

StatusOr<google::cloud::cpp::compute::v1::Operation>
DefaultImagesRestStub::PatchImage(
    google::cloud::rest_internal::RestContext& rest_context,
    Options const& options,
    google::cloud::cpp::compute::images::v1::PatchImageRequest const& request) {
  std::vector<std::pair<std::string, std::string>> query_params;
  query_params.push_back({"request_id", request.request_id()});
  query_params =
      rest_internal::TrimEmptyQueryParameters(std::move(query_params));
  return rest_internal::Patch<google::cloud::cpp::compute::v1::Operation>(
      *service_, rest_context, request.image_resource(), false,
      absl::StrCat("/", "compute", "/",
                   rest_internal::DetermineApiVersion("v1", options), "/",
                   "projects", "/", request.project(), "/", "global", "/",
                   "images", "/", request.image()),
      std::move(query_params));
}

StatusOr<google::cloud::cpp::compute::v1::Policy>
DefaultImagesRestStub::SetIamPolicy(
    google::cloud::rest_internal::RestContext& rest_context,
    Options const& options,
    google::cloud::cpp::compute::images::v1::SetIamPolicyRequest const&
        request) {
  std::vector<std::pair<std::string, std::string>> query_params;
  return rest_internal::Post<google::cloud::cpp::compute::v1::Policy>(
      *service_, rest_context, request.global_set_policy_request_resource(),
      false,
      absl::StrCat("/", "compute", "/",
                   rest_internal::DetermineApiVersion("v1", options), "/",
                   "projects", "/", request.project(), "/", "global", "/",
                   "images", "/", request.resource(), "/", "setIamPolicy"),
      std::move(query_params));
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
DefaultImagesRestStub::AsyncSetLabels(
    CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::cpp::compute::images::v1::SetLabelsRequest const& request) {
  promise<StatusOr<google::cloud::cpp::compute::v1::Operation>> p;
  future<StatusOr<google::cloud::cpp::compute::v1::Operation>> f =
      p.get_future();
  std::thread t{
      [](auto p, auto service, auto request, auto rest_context, auto options) {
        std::vector<std::pair<std::string, std::string>> query_params;
        p.set_value(
            rest_internal::Post<google::cloud::cpp::compute::v1::Operation>(
                *service, *rest_context,
                request.global_set_labels_request_resource(), false,
                absl::StrCat("/", "compute", "/",
                             rest_internal::DetermineApiVersion("v1", *options),
                             "/", "projects", "/", request.project(), "/",
                             "global", "/", "images", "/", request.resource(),
                             "/", "setLabels"),
                std::move(query_params)));
      },
      std::move(p),
      service_,
      request,
      std::move(rest_context),
      std::move(options)};
  return f.then([t = std::move(t), cq](auto f) mutable {
    cq.RunAsync([t = std::move(t)]() mutable { t.join(); });
    return f.get();
  });
}

StatusOr<google::cloud::cpp::compute::v1::Operation>
DefaultImagesRestStub::SetLabels(
    google::cloud::rest_internal::RestContext& rest_context,
    Options const& options,
    google::cloud::cpp::compute::images::v1::SetLabelsRequest const& request) {
  std::vector<std::pair<std::string, std::string>> query_params;
  return rest_internal::Post<google::cloud::cpp::compute::v1::Operation>(
      *service_, rest_context, request.global_set_labels_request_resource(),
      false,
      absl::StrCat("/", "compute", "/",
                   rest_internal::DetermineApiVersion("v1", options), "/",
                   "projects", "/", request.project(), "/", "global", "/",
                   "images", "/", request.resource(), "/", "setLabels"),
      std::move(query_params));
}

StatusOr<google::cloud::cpp::compute::v1::TestPermissionsResponse>
DefaultImagesRestStub::TestIamPermissions(
    google::cloud::rest_internal::RestContext& rest_context,
    Options const& options,
    google::cloud::cpp::compute::images::v1::TestIamPermissionsRequest const&
        request) {
  std::vector<std::pair<std::string, std::string>> query_params;
  return rest_internal::Post<
      google::cloud::cpp::compute::v1::TestPermissionsResponse>(
      *service_, rest_context, request.test_permissions_request_resource(),
      false,
      absl::StrCat("/", "compute", "/",
                   rest_internal::DetermineApiVersion("v1", options), "/",
                   "projects", "/", request.project(), "/", "global", "/",
                   "images", "/", request.resource(), "/",
                   "testIamPermissions"),
      std::move(query_params));
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
DefaultImagesRestStub::AsyncGetOperation(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::cpp::compute::global_operations::v1::
        GetOperationRequest const& request) {
  promise<StatusOr<google::cloud::cpp::compute::v1::Operation>> p;
  future<StatusOr<google::cloud::cpp::compute::v1::Operation>> f =
      p.get_future();
  std::thread t{
      [](auto p, auto operations, auto request, auto rest_context,
         auto options) {
        p.set_value(
            rest_internal::Get<google::cloud::cpp::compute::v1::Operation>(
                *operations, *rest_context, request, false,
                absl::StrCat("/compute/",
                             rest_internal::DetermineApiVersion("v1", *options),
                             "/projects/", request.project(),
                             "/global/operations/", request.operation())));
      },
      std::move(p),
      operations_,
      request,
      std::move(rest_context),
      std::move(options)};
  return f.then([t = std::move(t), cq](auto f) mutable {
    cq.RunAsync([t = std::move(t)]() mutable { t.join(); });
    return f.get();
  });
}

future<Status> DefaultImagesRestStub::AsyncCancelOperation(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::cpp::compute::global_operations::v1::
        DeleteOperationRequest const& request) {
  promise<StatusOr<google::protobuf::Empty>> p;
  future<StatusOr<google::protobuf::Empty>> f = p.get_future();
  std::thread t{
      [](auto p, auto operations, auto request, auto rest_context,
         auto options) {
        p.set_value(rest_internal::Post<google::protobuf::Empty>(
            *operations, *rest_context, request, false,
            absl::StrCat("/compute/",
                         rest_internal::DetermineApiVersion("v1", *options),
                         "/projects/", request.project(), "/global/operations/",
                         request.operation())));
      },
      std::move(p),
      operations_,
      request,
      std::move(rest_context),
      std::move(options)};
  return f.then([t = std::move(t), cq](auto f) mutable {
    cq.RunAsync([t = std::move(t)]() mutable { t.join(); });
    return f.get().status();
  });
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_images_v1_internal
}  // namespace cloud
}  // namespace google
