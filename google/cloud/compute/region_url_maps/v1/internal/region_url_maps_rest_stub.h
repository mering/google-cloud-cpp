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
// source: google/cloud/compute/region_url_maps/v1/region_url_maps.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_REGION_URL_MAPS_V1_INTERNAL_REGION_URL_MAPS_REST_STUB_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_REGION_URL_MAPS_V1_INTERNAL_REGION_URL_MAPS_REST_STUB_H

#include "google/cloud/compute/region_operations/v1/region_operations.pb.h"
#include "google/cloud/compute/region_url_maps/v1/region_url_maps.pb.h"
#include "google/cloud/completion_queue.h"
#include "google/cloud/internal/rest_client.h"
#include "google/cloud/internal/rest_context.h"
#include "google/cloud/status_or.h"
#include "google/cloud/version.h"
#include <memory>

namespace google {
namespace cloud {
namespace compute_region_url_maps_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class RegionUrlMapsRestStub {
 public:
  virtual ~RegionUrlMapsRestStub() = default;

  virtual future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  AsyncDeleteUrlMap(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<google::cloud::rest_internal::RestContext> rest_context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::cpp::compute::region_url_maps::v1::
          DeleteUrlMapRequest const& request) = 0;

  virtual StatusOr<google::cloud::cpp::compute::v1::Operation> DeleteUrlMap(
      google::cloud::rest_internal::RestContext& rest_context,
      Options const& options,
      google::cloud::cpp::compute::region_url_maps::v1::
          DeleteUrlMapRequest const& request) = 0;

  virtual StatusOr<google::cloud::cpp::compute::v1::UrlMap> GetUrlMap(
      google::cloud::rest_internal::RestContext& rest_context,
      Options const& options,
      google::cloud::cpp::compute::region_url_maps::v1::GetUrlMapRequest const&
          request) = 0;

  virtual future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  AsyncInsertUrlMap(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<google::cloud::rest_internal::RestContext> rest_context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::cpp::compute::region_url_maps::v1::
          InsertUrlMapRequest const& request) = 0;

  virtual StatusOr<google::cloud::cpp::compute::v1::Operation> InsertUrlMap(
      google::cloud::rest_internal::RestContext& rest_context,
      Options const& options,
      google::cloud::cpp::compute::region_url_maps::v1::
          InsertUrlMapRequest const& request) = 0;

  virtual StatusOr<google::cloud::cpp::compute::v1::UrlMapList>
  ListRegionUrlMaps(google::cloud::rest_internal::RestContext& rest_context,
                    Options const& options,
                    google::cloud::cpp::compute::region_url_maps::v1::
                        ListRegionUrlMapsRequest const& request) = 0;

  virtual future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  AsyncPatchUrlMap(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<google::cloud::rest_internal::RestContext> rest_context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::cpp::compute::region_url_maps::v1::
          PatchUrlMapRequest const& request) = 0;

  virtual StatusOr<google::cloud::cpp::compute::v1::Operation> PatchUrlMap(
      google::cloud::rest_internal::RestContext& rest_context,
      Options const& options,
      google::cloud::cpp::compute::region_url_maps::v1::
          PatchUrlMapRequest const& request) = 0;

  virtual future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  AsyncUpdateUrlMap(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<google::cloud::rest_internal::RestContext> rest_context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::cpp::compute::region_url_maps::v1::
          UpdateUrlMapRequest const& request) = 0;

  virtual StatusOr<google::cloud::cpp::compute::v1::Operation> UpdateUrlMap(
      google::cloud::rest_internal::RestContext& rest_context,
      Options const& options,
      google::cloud::cpp::compute::region_url_maps::v1::
          UpdateUrlMapRequest const& request) = 0;

  virtual StatusOr<google::cloud::cpp::compute::v1::UrlMapsValidateResponse>
  Validate(
      google::cloud::rest_internal::RestContext& rest_context,
      Options const& options,
      google::cloud::cpp::compute::region_url_maps::v1::ValidateRequest const&
          request) = 0;

  virtual future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  AsyncGetOperation(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<google::cloud::rest_internal::RestContext> rest_context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::cpp::compute::region_operations::v1::
          GetOperationRequest const& request) = 0;

  virtual future<Status> AsyncCancelOperation(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<google::cloud::rest_internal::RestContext> rest_context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::cpp::compute::region_operations::v1::
          DeleteOperationRequest const& request) = 0;
};

class DefaultRegionUrlMapsRestStub : public RegionUrlMapsRestStub {
 public:
  ~DefaultRegionUrlMapsRestStub() override = default;

  explicit DefaultRegionUrlMapsRestStub(Options options);
  DefaultRegionUrlMapsRestStub(
      std::shared_ptr<rest_internal::RestClient> service,
      std::shared_ptr<rest_internal::RestClient> operations, Options options);

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  AsyncDeleteUrlMap(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<google::cloud::rest_internal::RestContext> rest_context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::cpp::compute::region_url_maps::v1::
          DeleteUrlMapRequest const& request) override;

  StatusOr<google::cloud::cpp::compute::v1::Operation> DeleteUrlMap(
      google::cloud::rest_internal::RestContext& rest_context,
      Options const& options,
      google::cloud::cpp::compute::region_url_maps::v1::
          DeleteUrlMapRequest const& request) override;

  StatusOr<google::cloud::cpp::compute::v1::UrlMap> GetUrlMap(
      google::cloud::rest_internal::RestContext& rest_context,
      Options const& options,
      google::cloud::cpp::compute::region_url_maps::v1::GetUrlMapRequest const&
          request) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  AsyncInsertUrlMap(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<google::cloud::rest_internal::RestContext> rest_context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::cpp::compute::region_url_maps::v1::
          InsertUrlMapRequest const& request) override;

  StatusOr<google::cloud::cpp::compute::v1::Operation> InsertUrlMap(
      google::cloud::rest_internal::RestContext& rest_context,
      Options const& options,
      google::cloud::cpp::compute::region_url_maps::v1::
          InsertUrlMapRequest const& request) override;

  StatusOr<google::cloud::cpp::compute::v1::UrlMapList> ListRegionUrlMaps(
      google::cloud::rest_internal::RestContext& rest_context,
      Options const& options,
      google::cloud::cpp::compute::region_url_maps::v1::
          ListRegionUrlMapsRequest const& request) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>> AsyncPatchUrlMap(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<google::cloud::rest_internal::RestContext> rest_context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::cpp::compute::region_url_maps::v1::
          PatchUrlMapRequest const& request) override;

  StatusOr<google::cloud::cpp::compute::v1::Operation> PatchUrlMap(
      google::cloud::rest_internal::RestContext& rest_context,
      Options const& options,
      google::cloud::cpp::compute::region_url_maps::v1::
          PatchUrlMapRequest const& request) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  AsyncUpdateUrlMap(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<google::cloud::rest_internal::RestContext> rest_context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::cpp::compute::region_url_maps::v1::
          UpdateUrlMapRequest const& request) override;

  StatusOr<google::cloud::cpp::compute::v1::Operation> UpdateUrlMap(
      google::cloud::rest_internal::RestContext& rest_context,
      Options const& options,
      google::cloud::cpp::compute::region_url_maps::v1::
          UpdateUrlMapRequest const& request) override;

  StatusOr<google::cloud::cpp::compute::v1::UrlMapsValidateResponse> Validate(
      google::cloud::rest_internal::RestContext& rest_context,
      Options const& options,
      google::cloud::cpp::compute::region_url_maps::v1::ValidateRequest const&
          request) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  AsyncGetOperation(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<google::cloud::rest_internal::RestContext> rest_context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::cpp::compute::region_operations::v1::
          GetOperationRequest const& request) override;

  future<Status> AsyncCancelOperation(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<google::cloud::rest_internal::RestContext> rest_context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::cpp::compute::region_operations::v1::
          DeleteOperationRequest const& request) override;

 private:
  std::shared_ptr<rest_internal::RestClient> service_;
  std::shared_ptr<rest_internal::RestClient> operations_;
  Options options_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_region_url_maps_v1_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_REGION_URL_MAPS_V1_INTERNAL_REGION_URL_MAPS_REST_STUB_H
