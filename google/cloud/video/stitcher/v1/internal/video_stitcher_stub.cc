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
// source: google/cloud/video/stitcher/v1/video_stitcher_service.proto

#include "google/cloud/video/stitcher/v1/internal/video_stitcher_stub.h"
#include "google/cloud/grpc_error_delegate.h"
#include "google/cloud/status_or.h"
#include "google/cloud/video/stitcher/v1/video_stitcher_service.grpc.pb.h"
#include "google/longrunning/operations.grpc.pb.h"
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace video_stitcher_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

VideoStitcherServiceStub::~VideoStitcherServiceStub() = default;

future<StatusOr<google::longrunning::Operation>>
DefaultVideoStitcherServiceStub::AsyncCreateCdnKey(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions,
    google::cloud::video::stitcher::v1::CreateCdnKeyRequest const& request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::video::stitcher::v1::CreateCdnKeyRequest,
      google::longrunning::Operation>(
      cq,
      [this](grpc::ClientContext* context,
             google::cloud::video::stitcher::v1::CreateCdnKeyRequest const&
                 request,
             grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncCreateCdnKey(context, request, cq);
      },
      request, std::move(context));
}

StatusOr<google::longrunning::Operation>
DefaultVideoStitcherServiceStub::CreateCdnKey(
    grpc::ClientContext& context, Options,
    google::cloud::video::stitcher::v1::CreateCdnKeyRequest const& request) {
  google::longrunning::Operation response;
  auto status = grpc_stub_->CreateCdnKey(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::video::stitcher::v1::ListCdnKeysResponse>
DefaultVideoStitcherServiceStub::ListCdnKeys(
    grpc::ClientContext& context, Options const&,
    google::cloud::video::stitcher::v1::ListCdnKeysRequest const& request) {
  google::cloud::video::stitcher::v1::ListCdnKeysResponse response;
  auto status = grpc_stub_->ListCdnKeys(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::video::stitcher::v1::CdnKey>
DefaultVideoStitcherServiceStub::GetCdnKey(
    grpc::ClientContext& context, Options const&,
    google::cloud::video::stitcher::v1::GetCdnKeyRequest const& request) {
  google::cloud::video::stitcher::v1::CdnKey response;
  auto status = grpc_stub_->GetCdnKey(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

future<StatusOr<google::longrunning::Operation>>
DefaultVideoStitcherServiceStub::AsyncDeleteCdnKey(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions,
    google::cloud::video::stitcher::v1::DeleteCdnKeyRequest const& request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::video::stitcher::v1::DeleteCdnKeyRequest,
      google::longrunning::Operation>(
      cq,
      [this](grpc::ClientContext* context,
             google::cloud::video::stitcher::v1::DeleteCdnKeyRequest const&
                 request,
             grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncDeleteCdnKey(context, request, cq);
      },
      request, std::move(context));
}

StatusOr<google::longrunning::Operation>
DefaultVideoStitcherServiceStub::DeleteCdnKey(
    grpc::ClientContext& context, Options,
    google::cloud::video::stitcher::v1::DeleteCdnKeyRequest const& request) {
  google::longrunning::Operation response;
  auto status = grpc_stub_->DeleteCdnKey(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

future<StatusOr<google::longrunning::Operation>>
DefaultVideoStitcherServiceStub::AsyncUpdateCdnKey(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions,
    google::cloud::video::stitcher::v1::UpdateCdnKeyRequest const& request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::video::stitcher::v1::UpdateCdnKeyRequest,
      google::longrunning::Operation>(
      cq,
      [this](grpc::ClientContext* context,
             google::cloud::video::stitcher::v1::UpdateCdnKeyRequest const&
                 request,
             grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncUpdateCdnKey(context, request, cq);
      },
      request, std::move(context));
}

StatusOr<google::longrunning::Operation>
DefaultVideoStitcherServiceStub::UpdateCdnKey(
    grpc::ClientContext& context, Options,
    google::cloud::video::stitcher::v1::UpdateCdnKeyRequest const& request) {
  google::longrunning::Operation response;
  auto status = grpc_stub_->UpdateCdnKey(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::video::stitcher::v1::VodSession>
DefaultVideoStitcherServiceStub::CreateVodSession(
    grpc::ClientContext& context, Options const&,
    google::cloud::video::stitcher::v1::CreateVodSessionRequest const&
        request) {
  google::cloud::video::stitcher::v1::VodSession response;
  auto status = grpc_stub_->CreateVodSession(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::video::stitcher::v1::VodSession>
DefaultVideoStitcherServiceStub::GetVodSession(
    grpc::ClientContext& context, Options const&,
    google::cloud::video::stitcher::v1::GetVodSessionRequest const& request) {
  google::cloud::video::stitcher::v1::VodSession response;
  auto status = grpc_stub_->GetVodSession(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::video::stitcher::v1::ListVodStitchDetailsResponse>
DefaultVideoStitcherServiceStub::ListVodStitchDetails(
    grpc::ClientContext& context, Options const&,
    google::cloud::video::stitcher::v1::ListVodStitchDetailsRequest const&
        request) {
  google::cloud::video::stitcher::v1::ListVodStitchDetailsResponse response;
  auto status = grpc_stub_->ListVodStitchDetails(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::video::stitcher::v1::VodStitchDetail>
DefaultVideoStitcherServiceStub::GetVodStitchDetail(
    grpc::ClientContext& context, Options const&,
    google::cloud::video::stitcher::v1::GetVodStitchDetailRequest const&
        request) {
  google::cloud::video::stitcher::v1::VodStitchDetail response;
  auto status = grpc_stub_->GetVodStitchDetail(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::video::stitcher::v1::ListVodAdTagDetailsResponse>
DefaultVideoStitcherServiceStub::ListVodAdTagDetails(
    grpc::ClientContext& context, Options const&,
    google::cloud::video::stitcher::v1::ListVodAdTagDetailsRequest const&
        request) {
  google::cloud::video::stitcher::v1::ListVodAdTagDetailsResponse response;
  auto status = grpc_stub_->ListVodAdTagDetails(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::video::stitcher::v1::VodAdTagDetail>
DefaultVideoStitcherServiceStub::GetVodAdTagDetail(
    grpc::ClientContext& context, Options const&,
    google::cloud::video::stitcher::v1::GetVodAdTagDetailRequest const&
        request) {
  google::cloud::video::stitcher::v1::VodAdTagDetail response;
  auto status = grpc_stub_->GetVodAdTagDetail(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::video::stitcher::v1::ListLiveAdTagDetailsResponse>
DefaultVideoStitcherServiceStub::ListLiveAdTagDetails(
    grpc::ClientContext& context, Options const&,
    google::cloud::video::stitcher::v1::ListLiveAdTagDetailsRequest const&
        request) {
  google::cloud::video::stitcher::v1::ListLiveAdTagDetailsResponse response;
  auto status = grpc_stub_->ListLiveAdTagDetails(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::video::stitcher::v1::LiveAdTagDetail>
DefaultVideoStitcherServiceStub::GetLiveAdTagDetail(
    grpc::ClientContext& context, Options const&,
    google::cloud::video::stitcher::v1::GetLiveAdTagDetailRequest const&
        request) {
  google::cloud::video::stitcher::v1::LiveAdTagDetail response;
  auto status = grpc_stub_->GetLiveAdTagDetail(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

future<StatusOr<google::longrunning::Operation>>
DefaultVideoStitcherServiceStub::AsyncCreateSlate(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions,
    google::cloud::video::stitcher::v1::CreateSlateRequest const& request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::video::stitcher::v1::CreateSlateRequest,
      google::longrunning::Operation>(
      cq,
      [this](
          grpc::ClientContext* context,
          google::cloud::video::stitcher::v1::CreateSlateRequest const& request,
          grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncCreateSlate(context, request, cq);
      },
      request, std::move(context));
}

StatusOr<google::longrunning::Operation>
DefaultVideoStitcherServiceStub::CreateSlate(
    grpc::ClientContext& context, Options,
    google::cloud::video::stitcher::v1::CreateSlateRequest const& request) {
  google::longrunning::Operation response;
  auto status = grpc_stub_->CreateSlate(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::video::stitcher::v1::ListSlatesResponse>
DefaultVideoStitcherServiceStub::ListSlates(
    grpc::ClientContext& context, Options const&,
    google::cloud::video::stitcher::v1::ListSlatesRequest const& request) {
  google::cloud::video::stitcher::v1::ListSlatesResponse response;
  auto status = grpc_stub_->ListSlates(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::video::stitcher::v1::Slate>
DefaultVideoStitcherServiceStub::GetSlate(
    grpc::ClientContext& context, Options const&,
    google::cloud::video::stitcher::v1::GetSlateRequest const& request) {
  google::cloud::video::stitcher::v1::Slate response;
  auto status = grpc_stub_->GetSlate(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

future<StatusOr<google::longrunning::Operation>>
DefaultVideoStitcherServiceStub::AsyncUpdateSlate(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions,
    google::cloud::video::stitcher::v1::UpdateSlateRequest const& request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::video::stitcher::v1::UpdateSlateRequest,
      google::longrunning::Operation>(
      cq,
      [this](
          grpc::ClientContext* context,
          google::cloud::video::stitcher::v1::UpdateSlateRequest const& request,
          grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncUpdateSlate(context, request, cq);
      },
      request, std::move(context));
}

StatusOr<google::longrunning::Operation>
DefaultVideoStitcherServiceStub::UpdateSlate(
    grpc::ClientContext& context, Options,
    google::cloud::video::stitcher::v1::UpdateSlateRequest const& request) {
  google::longrunning::Operation response;
  auto status = grpc_stub_->UpdateSlate(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

future<StatusOr<google::longrunning::Operation>>
DefaultVideoStitcherServiceStub::AsyncDeleteSlate(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions,
    google::cloud::video::stitcher::v1::DeleteSlateRequest const& request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::video::stitcher::v1::DeleteSlateRequest,
      google::longrunning::Operation>(
      cq,
      [this](
          grpc::ClientContext* context,
          google::cloud::video::stitcher::v1::DeleteSlateRequest const& request,
          grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncDeleteSlate(context, request, cq);
      },
      request, std::move(context));
}

StatusOr<google::longrunning::Operation>
DefaultVideoStitcherServiceStub::DeleteSlate(
    grpc::ClientContext& context, Options,
    google::cloud::video::stitcher::v1::DeleteSlateRequest const& request) {
  google::longrunning::Operation response;
  auto status = grpc_stub_->DeleteSlate(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::video::stitcher::v1::LiveSession>
DefaultVideoStitcherServiceStub::CreateLiveSession(
    grpc::ClientContext& context, Options const&,
    google::cloud::video::stitcher::v1::CreateLiveSessionRequest const&
        request) {
  google::cloud::video::stitcher::v1::LiveSession response;
  auto status = grpc_stub_->CreateLiveSession(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::video::stitcher::v1::LiveSession>
DefaultVideoStitcherServiceStub::GetLiveSession(
    grpc::ClientContext& context, Options const&,
    google::cloud::video::stitcher::v1::GetLiveSessionRequest const& request) {
  google::cloud::video::stitcher::v1::LiveSession response;
  auto status = grpc_stub_->GetLiveSession(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

future<StatusOr<google::longrunning::Operation>>
DefaultVideoStitcherServiceStub::AsyncCreateLiveConfig(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions,
    google::cloud::video::stitcher::v1::CreateLiveConfigRequest const&
        request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::video::stitcher::v1::CreateLiveConfigRequest,
      google::longrunning::Operation>(
      cq,
      [this](grpc::ClientContext* context,
             google::cloud::video::stitcher::v1::CreateLiveConfigRequest const&
                 request,
             grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncCreateLiveConfig(context, request, cq);
      },
      request, std::move(context));
}

StatusOr<google::longrunning::Operation>
DefaultVideoStitcherServiceStub::CreateLiveConfig(
    grpc::ClientContext& context, Options,
    google::cloud::video::stitcher::v1::CreateLiveConfigRequest const&
        request) {
  google::longrunning::Operation response;
  auto status = grpc_stub_->CreateLiveConfig(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::video::stitcher::v1::ListLiveConfigsResponse>
DefaultVideoStitcherServiceStub::ListLiveConfigs(
    grpc::ClientContext& context, Options const&,
    google::cloud::video::stitcher::v1::ListLiveConfigsRequest const& request) {
  google::cloud::video::stitcher::v1::ListLiveConfigsResponse response;
  auto status = grpc_stub_->ListLiveConfigs(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::video::stitcher::v1::LiveConfig>
DefaultVideoStitcherServiceStub::GetLiveConfig(
    grpc::ClientContext& context, Options const&,
    google::cloud::video::stitcher::v1::GetLiveConfigRequest const& request) {
  google::cloud::video::stitcher::v1::LiveConfig response;
  auto status = grpc_stub_->GetLiveConfig(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

future<StatusOr<google::longrunning::Operation>>
DefaultVideoStitcherServiceStub::AsyncDeleteLiveConfig(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions,
    google::cloud::video::stitcher::v1::DeleteLiveConfigRequest const&
        request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::video::stitcher::v1::DeleteLiveConfigRequest,
      google::longrunning::Operation>(
      cq,
      [this](grpc::ClientContext* context,
             google::cloud::video::stitcher::v1::DeleteLiveConfigRequest const&
                 request,
             grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncDeleteLiveConfig(context, request, cq);
      },
      request, std::move(context));
}

StatusOr<google::longrunning::Operation>
DefaultVideoStitcherServiceStub::DeleteLiveConfig(
    grpc::ClientContext& context, Options,
    google::cloud::video::stitcher::v1::DeleteLiveConfigRequest const&
        request) {
  google::longrunning::Operation response;
  auto status = grpc_stub_->DeleteLiveConfig(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

future<StatusOr<google::longrunning::Operation>>
DefaultVideoStitcherServiceStub::AsyncUpdateLiveConfig(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions,
    google::cloud::video::stitcher::v1::UpdateLiveConfigRequest const&
        request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::video::stitcher::v1::UpdateLiveConfigRequest,
      google::longrunning::Operation>(
      cq,
      [this](grpc::ClientContext* context,
             google::cloud::video::stitcher::v1::UpdateLiveConfigRequest const&
                 request,
             grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncUpdateLiveConfig(context, request, cq);
      },
      request, std::move(context));
}

StatusOr<google::longrunning::Operation>
DefaultVideoStitcherServiceStub::UpdateLiveConfig(
    grpc::ClientContext& context, Options,
    google::cloud::video::stitcher::v1::UpdateLiveConfigRequest const&
        request) {
  google::longrunning::Operation response;
  auto status = grpc_stub_->UpdateLiveConfig(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

future<StatusOr<google::longrunning::Operation>>
DefaultVideoStitcherServiceStub::AsyncCreateVodConfig(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions,
    google::cloud::video::stitcher::v1::CreateVodConfigRequest const& request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::video::stitcher::v1::CreateVodConfigRequest,
      google::longrunning::Operation>(
      cq,
      [this](grpc::ClientContext* context,
             google::cloud::video::stitcher::v1::CreateVodConfigRequest const&
                 request,
             grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncCreateVodConfig(context, request, cq);
      },
      request, std::move(context));
}

StatusOr<google::longrunning::Operation>
DefaultVideoStitcherServiceStub::CreateVodConfig(
    grpc::ClientContext& context, Options,
    google::cloud::video::stitcher::v1::CreateVodConfigRequest const& request) {
  google::longrunning::Operation response;
  auto status = grpc_stub_->CreateVodConfig(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::video::stitcher::v1::ListVodConfigsResponse>
DefaultVideoStitcherServiceStub::ListVodConfigs(
    grpc::ClientContext& context, Options const&,
    google::cloud::video::stitcher::v1::ListVodConfigsRequest const& request) {
  google::cloud::video::stitcher::v1::ListVodConfigsResponse response;
  auto status = grpc_stub_->ListVodConfigs(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::video::stitcher::v1::VodConfig>
DefaultVideoStitcherServiceStub::GetVodConfig(
    grpc::ClientContext& context, Options const&,
    google::cloud::video::stitcher::v1::GetVodConfigRequest const& request) {
  google::cloud::video::stitcher::v1::VodConfig response;
  auto status = grpc_stub_->GetVodConfig(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

future<StatusOr<google::longrunning::Operation>>
DefaultVideoStitcherServiceStub::AsyncDeleteVodConfig(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions,
    google::cloud::video::stitcher::v1::DeleteVodConfigRequest const& request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::video::stitcher::v1::DeleteVodConfigRequest,
      google::longrunning::Operation>(
      cq,
      [this](grpc::ClientContext* context,
             google::cloud::video::stitcher::v1::DeleteVodConfigRequest const&
                 request,
             grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncDeleteVodConfig(context, request, cq);
      },
      request, std::move(context));
}

StatusOr<google::longrunning::Operation>
DefaultVideoStitcherServiceStub::DeleteVodConfig(
    grpc::ClientContext& context, Options,
    google::cloud::video::stitcher::v1::DeleteVodConfigRequest const& request) {
  google::longrunning::Operation response;
  auto status = grpc_stub_->DeleteVodConfig(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

future<StatusOr<google::longrunning::Operation>>
DefaultVideoStitcherServiceStub::AsyncUpdateVodConfig(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions,
    google::cloud::video::stitcher::v1::UpdateVodConfigRequest const& request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::video::stitcher::v1::UpdateVodConfigRequest,
      google::longrunning::Operation>(
      cq,
      [this](grpc::ClientContext* context,
             google::cloud::video::stitcher::v1::UpdateVodConfigRequest const&
                 request,
             grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncUpdateVodConfig(context, request, cq);
      },
      request, std::move(context));
}

StatusOr<google::longrunning::Operation>
DefaultVideoStitcherServiceStub::UpdateVodConfig(
    grpc::ClientContext& context, Options,
    google::cloud::video::stitcher::v1::UpdateVodConfigRequest const& request) {
  google::longrunning::Operation response;
  auto status = grpc_stub_->UpdateVodConfig(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::longrunning::ListOperationsResponse>
DefaultVideoStitcherServiceStub::ListOperations(
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
DefaultVideoStitcherServiceStub::GetOperation(
    grpc::ClientContext& context, Options const&,
    google::longrunning::GetOperationRequest const& request) {
  google::longrunning::Operation response;
  auto status = operations_stub_->GetOperation(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

Status DefaultVideoStitcherServiceStub::DeleteOperation(
    grpc::ClientContext& context, Options const&,
    google::longrunning::DeleteOperationRequest const& request) {
  google::protobuf::Empty response;
  auto status = operations_stub_->DeleteOperation(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return google::cloud::Status();
}

Status DefaultVideoStitcherServiceStub::CancelOperation(
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
DefaultVideoStitcherServiceStub::AsyncGetOperation(
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

future<Status> DefaultVideoStitcherServiceStub::AsyncCancelOperation(
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
}  // namespace video_stitcher_v1_internal
}  // namespace cloud
}  // namespace google
