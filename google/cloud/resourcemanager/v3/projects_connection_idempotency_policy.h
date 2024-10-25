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
// source: google/cloud/resourcemanager/v3/projects.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_RESOURCEMANAGER_V3_PROJECTS_CONNECTION_IDEMPOTENCY_POLICY_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_RESOURCEMANAGER_V3_PROJECTS_CONNECTION_IDEMPOTENCY_POLICY_H

#include "google/cloud/idempotency.h"
#include "google/cloud/version.h"
#include "google/cloud/resourcemanager/v3/projects.grpc.pb.h"
#include "google/longrunning/operations.grpc.pb.h"
#include <memory>

namespace google {
namespace cloud {
namespace resourcemanager_v3 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class ProjectsConnectionIdempotencyPolicy {
 public:
  virtual ~ProjectsConnectionIdempotencyPolicy();

  /// Create a new copy of this object.
  virtual std::unique_ptr<ProjectsConnectionIdempotencyPolicy> clone() const;

  virtual google::cloud::Idempotency GetProject(
      google::cloud::resourcemanager::v3::GetProjectRequest const& request);

  virtual google::cloud::Idempotency ListProjects(
      google::cloud::resourcemanager::v3::ListProjectsRequest request);

  virtual google::cloud::Idempotency SearchProjects(
      google::cloud::resourcemanager::v3::SearchProjectsRequest request);

  virtual google::cloud::Idempotency CreateProject(
      google::cloud::resourcemanager::v3::CreateProjectRequest const& request);

  virtual google::cloud::Idempotency UpdateProject(
      google::cloud::resourcemanager::v3::UpdateProjectRequest const& request);

  virtual google::cloud::Idempotency MoveProject(
      google::cloud::resourcemanager::v3::MoveProjectRequest const& request);

  virtual google::cloud::Idempotency DeleteProject(
      google::cloud::resourcemanager::v3::DeleteProjectRequest const& request);

  virtual google::cloud::Idempotency UndeleteProject(
      google::cloud::resourcemanager::v3::UndeleteProjectRequest const&
          request);

  virtual google::cloud::Idempotency GetIamPolicy(
      google::iam::v1::GetIamPolicyRequest const& request);

  virtual google::cloud::Idempotency SetIamPolicy(
      google::iam::v1::SetIamPolicyRequest const& request);

  virtual google::cloud::Idempotency TestIamPermissions(
      google::iam::v1::TestIamPermissionsRequest const& request);

  virtual google::cloud::Idempotency GetOperation(
      google::longrunning::GetOperationRequest const& request);
};

std::unique_ptr<ProjectsConnectionIdempotencyPolicy>
MakeDefaultProjectsConnectionIdempotencyPolicy();

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace resourcemanager_v3
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_RESOURCEMANAGER_V3_PROJECTS_CONNECTION_IDEMPOTENCY_POLICY_H
