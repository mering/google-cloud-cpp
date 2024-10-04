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
// source: google/devtools/artifactregistry/v1/service.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_ARTIFACTREGISTRY_V1_ARTIFACT_REGISTRY_CONNECTION_IDEMPOTENCY_POLICY_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_ARTIFACTREGISTRY_V1_ARTIFACT_REGISTRY_CONNECTION_IDEMPOTENCY_POLICY_H

#include "google/cloud/idempotency.h"
#include "google/cloud/version.h"
#include <google/cloud/location/locations.grpc.pb.h>
#include <google/devtools/artifactregistry/v1/service.grpc.pb.h>
#include <google/longrunning/operations.grpc.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace artifactregistry_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class ArtifactRegistryConnectionIdempotencyPolicy {
 public:
  virtual ~ArtifactRegistryConnectionIdempotencyPolicy();

  /// Create a new copy of this object.
  virtual std::unique_ptr<ArtifactRegistryConnectionIdempotencyPolicy> clone()
      const;

  virtual google::cloud::Idempotency ListDockerImages(
      google::devtools::artifactregistry::v1::ListDockerImagesRequest request);

  virtual google::cloud::Idempotency GetDockerImage(
      google::devtools::artifactregistry::v1::GetDockerImageRequest const&
          request);

  virtual google::cloud::Idempotency ListMavenArtifacts(
      google::devtools::artifactregistry::v1::ListMavenArtifactsRequest
          request);

  virtual google::cloud::Idempotency GetMavenArtifact(
      google::devtools::artifactregistry::v1::GetMavenArtifactRequest const&
          request);

  virtual google::cloud::Idempotency ListNpmPackages(
      google::devtools::artifactregistry::v1::ListNpmPackagesRequest request);

  virtual google::cloud::Idempotency GetNpmPackage(
      google::devtools::artifactregistry::v1::GetNpmPackageRequest const&
          request);

  virtual google::cloud::Idempotency ListPythonPackages(
      google::devtools::artifactregistry::v1::ListPythonPackagesRequest
          request);

  virtual google::cloud::Idempotency GetPythonPackage(
      google::devtools::artifactregistry::v1::GetPythonPackageRequest const&
          request);

  virtual google::cloud::Idempotency ImportAptArtifacts(
      google::devtools::artifactregistry::v1::ImportAptArtifactsRequest const&
          request);

  virtual google::cloud::Idempotency ImportYumArtifacts(
      google::devtools::artifactregistry::v1::ImportYumArtifactsRequest const&
          request);

  virtual google::cloud::Idempotency ListRepositories(
      google::devtools::artifactregistry::v1::ListRepositoriesRequest request);

  virtual google::cloud::Idempotency GetRepository(
      google::devtools::artifactregistry::v1::GetRepositoryRequest const&
          request);

  virtual google::cloud::Idempotency CreateRepository(
      google::devtools::artifactregistry::v1::CreateRepositoryRequest const&
          request);

  virtual google::cloud::Idempotency UpdateRepository(
      google::devtools::artifactregistry::v1::UpdateRepositoryRequest const&
          request);

  virtual google::cloud::Idempotency DeleteRepository(
      google::devtools::artifactregistry::v1::DeleteRepositoryRequest const&
          request);

  virtual google::cloud::Idempotency ListPackages(
      google::devtools::artifactregistry::v1::ListPackagesRequest request);

  virtual google::cloud::Idempotency GetPackage(
      google::devtools::artifactregistry::v1::GetPackageRequest const& request);

  virtual google::cloud::Idempotency DeletePackage(
      google::devtools::artifactregistry::v1::DeletePackageRequest const&
          request);

  virtual google::cloud::Idempotency ListVersions(
      google::devtools::artifactregistry::v1::ListVersionsRequest request);

  virtual google::cloud::Idempotency GetVersion(
      google::devtools::artifactregistry::v1::GetVersionRequest const& request);

  virtual google::cloud::Idempotency DeleteVersion(
      google::devtools::artifactregistry::v1::DeleteVersionRequest const&
          request);

  virtual google::cloud::Idempotency BatchDeleteVersions(
      google::devtools::artifactregistry::v1::BatchDeleteVersionsRequest const&
          request);

  virtual google::cloud::Idempotency ListFiles(
      google::devtools::artifactregistry::v1::ListFilesRequest request);

  virtual google::cloud::Idempotency GetFile(
      google::devtools::artifactregistry::v1::GetFileRequest const& request);

  virtual google::cloud::Idempotency ListTags(
      google::devtools::artifactregistry::v1::ListTagsRequest request);

  virtual google::cloud::Idempotency GetTag(
      google::devtools::artifactregistry::v1::GetTagRequest const& request);

  virtual google::cloud::Idempotency CreateTag(
      google::devtools::artifactregistry::v1::CreateTagRequest const& request);

  virtual google::cloud::Idempotency UpdateTag(
      google::devtools::artifactregistry::v1::UpdateTagRequest const& request);

  virtual google::cloud::Idempotency DeleteTag(
      google::devtools::artifactregistry::v1::DeleteTagRequest const& request);

  virtual google::cloud::Idempotency SetIamPolicy(
      google::iam::v1::SetIamPolicyRequest const& request);

  virtual google::cloud::Idempotency GetIamPolicy(
      google::iam::v1::GetIamPolicyRequest const& request);

  virtual google::cloud::Idempotency TestIamPermissions(
      google::iam::v1::TestIamPermissionsRequest const& request);

  virtual google::cloud::Idempotency GetProjectSettings(
      google::devtools::artifactregistry::v1::GetProjectSettingsRequest const&
          request);

  virtual google::cloud::Idempotency UpdateProjectSettings(
      google::devtools::artifactregistry::v1::
          UpdateProjectSettingsRequest const& request);

  virtual google::cloud::Idempotency GetVPCSCConfig(
      google::devtools::artifactregistry::v1::GetVPCSCConfigRequest const&
          request);

  virtual google::cloud::Idempotency UpdateVPCSCConfig(
      google::devtools::artifactregistry::v1::UpdateVPCSCConfigRequest const&
          request);

  virtual google::cloud::Idempotency ListLocations(
      google::cloud::location::ListLocationsRequest request);

  virtual google::cloud::Idempotency GetLocation(
      google::cloud::location::GetLocationRequest const& request);

  virtual google::cloud::Idempotency GetOperation(
      google::longrunning::GetOperationRequest const& request);
};

std::unique_ptr<ArtifactRegistryConnectionIdempotencyPolicy>
MakeDefaultArtifactRegistryConnectionIdempotencyPolicy();

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace artifactregistry_v1
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_ARTIFACTREGISTRY_V1_ARTIFACT_REGISTRY_CONNECTION_IDEMPOTENCY_POLICY_H
