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
// source: google/cloud/securesourcemanager/v1/secure_source_manager.proto

#include "google/cloud/securesourcemanager/v1/internal/secure_source_manager_stub.h"
#include "google/cloud/grpc_error_delegate.h"
#include "google/cloud/status_or.h"
#include "google/cloud/securesourcemanager/v1/secure_source_manager.grpc.pb.h"
#include "google/longrunning/operations.grpc.pb.h"
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace securesourcemanager_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

SecureSourceManagerStub::~SecureSourceManagerStub() = default;

StatusOr<google::cloud::securesourcemanager::v1::ListInstancesResponse>
DefaultSecureSourceManagerStub::ListInstances(
    grpc::ClientContext& context, Options const&,
    google::cloud::securesourcemanager::v1::ListInstancesRequest const&
        request) {
  google::cloud::securesourcemanager::v1::ListInstancesResponse response;
  auto status = grpc_stub_->ListInstances(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::securesourcemanager::v1::Instance>
DefaultSecureSourceManagerStub::GetInstance(
    grpc::ClientContext& context, Options const&,
    google::cloud::securesourcemanager::v1::GetInstanceRequest const& request) {
  google::cloud::securesourcemanager::v1::Instance response;
  auto status = grpc_stub_->GetInstance(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

future<StatusOr<google::longrunning::Operation>>
DefaultSecureSourceManagerStub::AsyncCreateInstance(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions,
    google::cloud::securesourcemanager::v1::CreateInstanceRequest const&
        request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::securesourcemanager::v1::CreateInstanceRequest,
      google::longrunning::Operation>(
      cq,
      [this](
          grpc::ClientContext* context,
          google::cloud::securesourcemanager::v1::CreateInstanceRequest const&
              request,
          grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncCreateInstance(context, request, cq);
      },
      request, std::move(context));
}

StatusOr<google::longrunning::Operation>
DefaultSecureSourceManagerStub::CreateInstance(
    grpc::ClientContext& context, Options,
    google::cloud::securesourcemanager::v1::CreateInstanceRequest const&
        request) {
  google::longrunning::Operation response;
  auto status = grpc_stub_->CreateInstance(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

future<StatusOr<google::longrunning::Operation>>
DefaultSecureSourceManagerStub::AsyncDeleteInstance(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions,
    google::cloud::securesourcemanager::v1::DeleteInstanceRequest const&
        request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::securesourcemanager::v1::DeleteInstanceRequest,
      google::longrunning::Operation>(
      cq,
      [this](
          grpc::ClientContext* context,
          google::cloud::securesourcemanager::v1::DeleteInstanceRequest const&
              request,
          grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncDeleteInstance(context, request, cq);
      },
      request, std::move(context));
}

StatusOr<google::longrunning::Operation>
DefaultSecureSourceManagerStub::DeleteInstance(
    grpc::ClientContext& context, Options,
    google::cloud::securesourcemanager::v1::DeleteInstanceRequest const&
        request) {
  google::longrunning::Operation response;
  auto status = grpc_stub_->DeleteInstance(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::securesourcemanager::v1::ListRepositoriesResponse>
DefaultSecureSourceManagerStub::ListRepositories(
    grpc::ClientContext& context, Options const&,
    google::cloud::securesourcemanager::v1::ListRepositoriesRequest const&
        request) {
  google::cloud::securesourcemanager::v1::ListRepositoriesResponse response;
  auto status = grpc_stub_->ListRepositories(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::securesourcemanager::v1::Repository>
DefaultSecureSourceManagerStub::GetRepository(
    grpc::ClientContext& context, Options const&,
    google::cloud::securesourcemanager::v1::GetRepositoryRequest const&
        request) {
  google::cloud::securesourcemanager::v1::Repository response;
  auto status = grpc_stub_->GetRepository(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

future<StatusOr<google::longrunning::Operation>>
DefaultSecureSourceManagerStub::AsyncCreateRepository(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions,
    google::cloud::securesourcemanager::v1::CreateRepositoryRequest const&
        request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::securesourcemanager::v1::CreateRepositoryRequest,
      google::longrunning::Operation>(
      cq,
      [this](
          grpc::ClientContext* context,
          google::cloud::securesourcemanager::v1::CreateRepositoryRequest const&
              request,
          grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncCreateRepository(context, request, cq);
      },
      request, std::move(context));
}

StatusOr<google::longrunning::Operation>
DefaultSecureSourceManagerStub::CreateRepository(
    grpc::ClientContext& context, Options,
    google::cloud::securesourcemanager::v1::CreateRepositoryRequest const&
        request) {
  google::longrunning::Operation response;
  auto status = grpc_stub_->CreateRepository(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

future<StatusOr<google::longrunning::Operation>>
DefaultSecureSourceManagerStub::AsyncDeleteRepository(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions,
    google::cloud::securesourcemanager::v1::DeleteRepositoryRequest const&
        request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::securesourcemanager::v1::DeleteRepositoryRequest,
      google::longrunning::Operation>(
      cq,
      [this](
          grpc::ClientContext* context,
          google::cloud::securesourcemanager::v1::DeleteRepositoryRequest const&
              request,
          grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncDeleteRepository(context, request, cq);
      },
      request, std::move(context));
}

StatusOr<google::longrunning::Operation>
DefaultSecureSourceManagerStub::DeleteRepository(
    grpc::ClientContext& context, Options,
    google::cloud::securesourcemanager::v1::DeleteRepositoryRequest const&
        request) {
  google::longrunning::Operation response;
  auto status = grpc_stub_->DeleteRepository(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::iam::v1::Policy>
DefaultSecureSourceManagerStub::GetIamPolicyRepo(
    grpc::ClientContext& context, Options const&,
    google::iam::v1::GetIamPolicyRequest const& request) {
  google::iam::v1::Policy response;
  auto status = grpc_stub_->GetIamPolicyRepo(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::iam::v1::Policy>
DefaultSecureSourceManagerStub::SetIamPolicyRepo(
    grpc::ClientContext& context, Options const&,
    google::iam::v1::SetIamPolicyRequest const& request) {
  google::iam::v1::Policy response;
  auto status = grpc_stub_->SetIamPolicyRepo(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::iam::v1::TestIamPermissionsResponse>
DefaultSecureSourceManagerStub::TestIamPermissionsRepo(
    grpc::ClientContext& context, Options const&,
    google::iam::v1::TestIamPermissionsRequest const& request) {
  google::iam::v1::TestIamPermissionsResponse response;
  auto status =
      grpc_stub_->TestIamPermissionsRepo(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

future<StatusOr<google::longrunning::Operation>>
DefaultSecureSourceManagerStub::AsyncCreateBranchRule(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions,
    google::cloud::securesourcemanager::v1::CreateBranchRuleRequest const&
        request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::securesourcemanager::v1::CreateBranchRuleRequest,
      google::longrunning::Operation>(
      cq,
      [this](
          grpc::ClientContext* context,
          google::cloud::securesourcemanager::v1::CreateBranchRuleRequest const&
              request,
          grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncCreateBranchRule(context, request, cq);
      },
      request, std::move(context));
}

StatusOr<google::longrunning::Operation>
DefaultSecureSourceManagerStub::CreateBranchRule(
    grpc::ClientContext& context, Options,
    google::cloud::securesourcemanager::v1::CreateBranchRuleRequest const&
        request) {
  google::longrunning::Operation response;
  auto status = grpc_stub_->CreateBranchRule(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::securesourcemanager::v1::ListBranchRulesResponse>
DefaultSecureSourceManagerStub::ListBranchRules(
    grpc::ClientContext& context, Options const&,
    google::cloud::securesourcemanager::v1::ListBranchRulesRequest const&
        request) {
  google::cloud::securesourcemanager::v1::ListBranchRulesResponse response;
  auto status = grpc_stub_->ListBranchRules(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::securesourcemanager::v1::BranchRule>
DefaultSecureSourceManagerStub::GetBranchRule(
    grpc::ClientContext& context, Options const&,
    google::cloud::securesourcemanager::v1::GetBranchRuleRequest const&
        request) {
  google::cloud::securesourcemanager::v1::BranchRule response;
  auto status = grpc_stub_->GetBranchRule(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

future<StatusOr<google::longrunning::Operation>>
DefaultSecureSourceManagerStub::AsyncUpdateBranchRule(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions,
    google::cloud::securesourcemanager::v1::UpdateBranchRuleRequest const&
        request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::securesourcemanager::v1::UpdateBranchRuleRequest,
      google::longrunning::Operation>(
      cq,
      [this](
          grpc::ClientContext* context,
          google::cloud::securesourcemanager::v1::UpdateBranchRuleRequest const&
              request,
          grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncUpdateBranchRule(context, request, cq);
      },
      request, std::move(context));
}

StatusOr<google::longrunning::Operation>
DefaultSecureSourceManagerStub::UpdateBranchRule(
    grpc::ClientContext& context, Options,
    google::cloud::securesourcemanager::v1::UpdateBranchRuleRequest const&
        request) {
  google::longrunning::Operation response;
  auto status = grpc_stub_->UpdateBranchRule(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

future<StatusOr<google::longrunning::Operation>>
DefaultSecureSourceManagerStub::AsyncDeleteBranchRule(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions,
    google::cloud::securesourcemanager::v1::DeleteBranchRuleRequest const&
        request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::securesourcemanager::v1::DeleteBranchRuleRequest,
      google::longrunning::Operation>(
      cq,
      [this](
          grpc::ClientContext* context,
          google::cloud::securesourcemanager::v1::DeleteBranchRuleRequest const&
              request,
          grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncDeleteBranchRule(context, request, cq);
      },
      request, std::move(context));
}

StatusOr<google::longrunning::Operation>
DefaultSecureSourceManagerStub::DeleteBranchRule(
    grpc::ClientContext& context, Options,
    google::cloud::securesourcemanager::v1::DeleteBranchRuleRequest const&
        request) {
  google::longrunning::Operation response;
  auto status = grpc_stub_->DeleteBranchRule(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::location::ListLocationsResponse>
DefaultSecureSourceManagerStub::ListLocations(
    grpc::ClientContext& context, Options const&,
    google::cloud::location::ListLocationsRequest const& request) {
  google::cloud::location::ListLocationsResponse response;
  auto status = locations_stub_->ListLocations(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::location::Location>
DefaultSecureSourceManagerStub::GetLocation(
    grpc::ClientContext& context, Options const&,
    google::cloud::location::GetLocationRequest const& request) {
  google::cloud::location::Location response;
  auto status = locations_stub_->GetLocation(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::iam::v1::Policy> DefaultSecureSourceManagerStub::SetIamPolicy(
    grpc::ClientContext& context, Options const&,
    google::iam::v1::SetIamPolicyRequest const& request) {
  google::iam::v1::Policy response;
  auto status = iampolicy_stub_->SetIamPolicy(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::iam::v1::Policy> DefaultSecureSourceManagerStub::GetIamPolicy(
    grpc::ClientContext& context, Options const&,
    google::iam::v1::GetIamPolicyRequest const& request) {
  google::iam::v1::Policy response;
  auto status = iampolicy_stub_->GetIamPolicy(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::iam::v1::TestIamPermissionsResponse>
DefaultSecureSourceManagerStub::TestIamPermissions(
    grpc::ClientContext& context, Options const&,
    google::iam::v1::TestIamPermissionsRequest const& request) {
  google::iam::v1::TestIamPermissionsResponse response;
  auto status =
      iampolicy_stub_->TestIamPermissions(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::longrunning::ListOperationsResponse>
DefaultSecureSourceManagerStub::ListOperations(
    grpc::ClientContext& context, Options const&,
    google::longrunning::ListOperationsRequest const& request) {
  google::longrunning::ListOperationsResponse response;
  auto status = operations_stub_->ListOperations(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::longrunning::Operation>
DefaultSecureSourceManagerStub::GetOperation(
    grpc::ClientContext& context, Options const&,
    google::longrunning::GetOperationRequest const& request) {
  google::longrunning::Operation response;
  auto status = operations_stub_->GetOperation(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

Status DefaultSecureSourceManagerStub::DeleteOperation(
    grpc::ClientContext& context, Options const&,
    google::longrunning::DeleteOperationRequest const& request) {
  google::protobuf::Empty response;
  auto status = operations_stub_->DeleteOperation(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return google::cloud::Status();
}

Status DefaultSecureSourceManagerStub::CancelOperation(
    grpc::ClientContext& context, Options const&,
    google::longrunning::CancelOperationRequest const& request) {
  google::protobuf::Empty response;
  auto status = operations_stub_->CancelOperation(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return google::cloud::Status();
}

future<StatusOr<google::longrunning::Operation>>
DefaultSecureSourceManagerStub::AsyncGetOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    // NOLINTNEXTLINE(performance-unnecessary-value-param)
    google::cloud::internal::ImmutableOptions,
    google::longrunning::GetOperationRequest const& request) {
  return internal::MakeUnaryRpcImpl<google::longrunning::GetOperationRequest,
                                    google::longrunning::Operation>(
      cq,
      [this](grpc::ClientContext* context,
             google::longrunning::GetOperationRequest const& request,
             grpc::CompletionQueue* cq) {
        return operations_->AsyncGetOperation(context, request, cq);
      },
      request, std::move(context));
}

future<Status> DefaultSecureSourceManagerStub::AsyncCancelOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    // NOLINTNEXTLINE(performance-unnecessary-value-param)
    google::cloud::internal::ImmutableOptions,
    google::longrunning::CancelOperationRequest const& request) {
  return internal::MakeUnaryRpcImpl<google::longrunning::CancelOperationRequest,
                                    google::protobuf::Empty>(
             cq,
             [this](grpc::ClientContext* context,
                    google::longrunning::CancelOperationRequest const& request,
                    grpc::CompletionQueue* cq) {
               return operations_->AsyncCancelOperation(context, request, cq);
             },
             request, std::move(context))
      .then([](future<StatusOr<google::protobuf::Empty>> f) {
        return f.get().status();
      });
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace securesourcemanager_v1_internal
}  // namespace cloud
}  // namespace google
