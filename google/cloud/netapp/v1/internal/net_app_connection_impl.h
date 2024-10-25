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
// source: google/cloud/netapp/v1/cloud_netapp_service.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_NETAPP_V1_INTERNAL_NET_APP_CONNECTION_IMPL_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_NETAPP_V1_INTERNAL_NET_APP_CONNECTION_IMPL_H

#include "google/cloud/netapp/v1/internal/net_app_retry_traits.h"
#include "google/cloud/netapp/v1/internal/net_app_stub.h"
#include "google/cloud/netapp/v1/net_app_connection.h"
#include "google/cloud/netapp/v1/net_app_connection_idempotency_policy.h"
#include "google/cloud/netapp/v1/net_app_options.h"
#include "google/cloud/background_threads.h"
#include "google/cloud/backoff_policy.h"
#include "google/cloud/future.h"
#include "google/cloud/options.h"
#include "google/cloud/polling_policy.h"
#include "google/cloud/status_or.h"
#include "google/cloud/stream_range.h"
#include "google/cloud/version.h"
#include "google/longrunning/operations.grpc.pb.h"
#include <memory>

namespace google {
namespace cloud {
namespace netapp_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class NetAppConnectionImpl : public netapp_v1::NetAppConnection {
 public:
  ~NetAppConnectionImpl() override = default;

  NetAppConnectionImpl(
      std::unique_ptr<google::cloud::BackgroundThreads> background,
      std::shared_ptr<netapp_v1_internal::NetAppStub> stub, Options options);

  Options options() override { return options_; }

  StreamRange<google::cloud::netapp::v1::StoragePool> ListStoragePools(
      google::cloud::netapp::v1::ListStoragePoolsRequest request) override;

  future<StatusOr<google::cloud::netapp::v1::StoragePool>> CreateStoragePool(
      google::cloud::netapp::v1::CreateStoragePoolRequest const& request)
      override;

  StatusOr<google::longrunning::Operation> CreateStoragePool(
      NoAwaitTag,
      google::cloud::netapp::v1::CreateStoragePoolRequest const& request)
      override;

  future<StatusOr<google::cloud::netapp::v1::StoragePool>> CreateStoragePool(
      google::longrunning::Operation const& operation) override;

  StatusOr<google::cloud::netapp::v1::StoragePool> GetStoragePool(
      google::cloud::netapp::v1::GetStoragePoolRequest const& request) override;

  future<StatusOr<google::cloud::netapp::v1::StoragePool>> UpdateStoragePool(
      google::cloud::netapp::v1::UpdateStoragePoolRequest const& request)
      override;

  StatusOr<google::longrunning::Operation> UpdateStoragePool(
      NoAwaitTag,
      google::cloud::netapp::v1::UpdateStoragePoolRequest const& request)
      override;

  future<StatusOr<google::cloud::netapp::v1::StoragePool>> UpdateStoragePool(
      google::longrunning::Operation const& operation) override;

  future<StatusOr<google::cloud::netapp::v1::OperationMetadata>>
  DeleteStoragePool(google::cloud::netapp::v1::DeleteStoragePoolRequest const&
                        request) override;

  StatusOr<google::longrunning::Operation> DeleteStoragePool(
      NoAwaitTag,
      google::cloud::netapp::v1::DeleteStoragePoolRequest const& request)
      override;

  future<StatusOr<google::cloud::netapp::v1::OperationMetadata>>
  DeleteStoragePool(google::longrunning::Operation const& operation) override;

  future<StatusOr<google::cloud::netapp::v1::StoragePool>>
  SwitchActiveReplicaZone(
      google::cloud::netapp::v1::SwitchActiveReplicaZoneRequest const& request)
      override;

  StatusOr<google::longrunning::Operation> SwitchActiveReplicaZone(
      NoAwaitTag,
      google::cloud::netapp::v1::SwitchActiveReplicaZoneRequest const& request)
      override;

  future<StatusOr<google::cloud::netapp::v1::StoragePool>>
  SwitchActiveReplicaZone(
      google::longrunning::Operation const& operation) override;

  StreamRange<google::cloud::netapp::v1::Volume> ListVolumes(
      google::cloud::netapp::v1::ListVolumesRequest request) override;

  StatusOr<google::cloud::netapp::v1::Volume> GetVolume(
      google::cloud::netapp::v1::GetVolumeRequest const& request) override;

  future<StatusOr<google::cloud::netapp::v1::Volume>> CreateVolume(
      google::cloud::netapp::v1::CreateVolumeRequest const& request) override;

  StatusOr<google::longrunning::Operation> CreateVolume(
      NoAwaitTag,
      google::cloud::netapp::v1::CreateVolumeRequest const& request) override;

  future<StatusOr<google::cloud::netapp::v1::Volume>> CreateVolume(
      google::longrunning::Operation const& operation) override;

  future<StatusOr<google::cloud::netapp::v1::Volume>> UpdateVolume(
      google::cloud::netapp::v1::UpdateVolumeRequest const& request) override;

  StatusOr<google::longrunning::Operation> UpdateVolume(
      NoAwaitTag,
      google::cloud::netapp::v1::UpdateVolumeRequest const& request) override;

  future<StatusOr<google::cloud::netapp::v1::Volume>> UpdateVolume(
      google::longrunning::Operation const& operation) override;

  future<StatusOr<google::cloud::netapp::v1::OperationMetadata>> DeleteVolume(
      google::cloud::netapp::v1::DeleteVolumeRequest const& request) override;

  StatusOr<google::longrunning::Operation> DeleteVolume(
      NoAwaitTag,
      google::cloud::netapp::v1::DeleteVolumeRequest const& request) override;

  future<StatusOr<google::cloud::netapp::v1::OperationMetadata>> DeleteVolume(
      google::longrunning::Operation const& operation) override;

  future<StatusOr<google::cloud::netapp::v1::Volume>> RevertVolume(
      google::cloud::netapp::v1::RevertVolumeRequest const& request) override;

  StatusOr<google::longrunning::Operation> RevertVolume(
      NoAwaitTag,
      google::cloud::netapp::v1::RevertVolumeRequest const& request) override;

  future<StatusOr<google::cloud::netapp::v1::Volume>> RevertVolume(
      google::longrunning::Operation const& operation) override;

  StreamRange<google::cloud::netapp::v1::Snapshot> ListSnapshots(
      google::cloud::netapp::v1::ListSnapshotsRequest request) override;

  StatusOr<google::cloud::netapp::v1::Snapshot> GetSnapshot(
      google::cloud::netapp::v1::GetSnapshotRequest const& request) override;

  future<StatusOr<google::cloud::netapp::v1::Snapshot>> CreateSnapshot(
      google::cloud::netapp::v1::CreateSnapshotRequest const& request) override;

  StatusOr<google::longrunning::Operation> CreateSnapshot(
      NoAwaitTag,
      google::cloud::netapp::v1::CreateSnapshotRequest const& request) override;

  future<StatusOr<google::cloud::netapp::v1::Snapshot>> CreateSnapshot(
      google::longrunning::Operation const& operation) override;

  future<StatusOr<google::cloud::netapp::v1::OperationMetadata>> DeleteSnapshot(
      google::cloud::netapp::v1::DeleteSnapshotRequest const& request) override;

  StatusOr<google::longrunning::Operation> DeleteSnapshot(
      NoAwaitTag,
      google::cloud::netapp::v1::DeleteSnapshotRequest const& request) override;

  future<StatusOr<google::cloud::netapp::v1::OperationMetadata>> DeleteSnapshot(
      google::longrunning::Operation const& operation) override;

  future<StatusOr<google::cloud::netapp::v1::Snapshot>> UpdateSnapshot(
      google::cloud::netapp::v1::UpdateSnapshotRequest const& request) override;

  StatusOr<google::longrunning::Operation> UpdateSnapshot(
      NoAwaitTag,
      google::cloud::netapp::v1::UpdateSnapshotRequest const& request) override;

  future<StatusOr<google::cloud::netapp::v1::Snapshot>> UpdateSnapshot(
      google::longrunning::Operation const& operation) override;

  StreamRange<google::cloud::netapp::v1::ActiveDirectory> ListActiveDirectories(
      google::cloud::netapp::v1::ListActiveDirectoriesRequest request) override;

  StatusOr<google::cloud::netapp::v1::ActiveDirectory> GetActiveDirectory(
      google::cloud::netapp::v1::GetActiveDirectoryRequest const& request)
      override;

  future<StatusOr<google::cloud::netapp::v1::ActiveDirectory>>
  CreateActiveDirectory(
      google::cloud::netapp::v1::CreateActiveDirectoryRequest const& request)
      override;

  StatusOr<google::longrunning::Operation> CreateActiveDirectory(
      NoAwaitTag,
      google::cloud::netapp::v1::CreateActiveDirectoryRequest const& request)
      override;

  future<StatusOr<google::cloud::netapp::v1::ActiveDirectory>>
  CreateActiveDirectory(
      google::longrunning::Operation const& operation) override;

  future<StatusOr<google::cloud::netapp::v1::ActiveDirectory>>
  UpdateActiveDirectory(
      google::cloud::netapp::v1::UpdateActiveDirectoryRequest const& request)
      override;

  StatusOr<google::longrunning::Operation> UpdateActiveDirectory(
      NoAwaitTag,
      google::cloud::netapp::v1::UpdateActiveDirectoryRequest const& request)
      override;

  future<StatusOr<google::cloud::netapp::v1::ActiveDirectory>>
  UpdateActiveDirectory(
      google::longrunning::Operation const& operation) override;

  future<StatusOr<google::cloud::netapp::v1::OperationMetadata>>
  DeleteActiveDirectory(
      google::cloud::netapp::v1::DeleteActiveDirectoryRequest const& request)
      override;

  StatusOr<google::longrunning::Operation> DeleteActiveDirectory(
      NoAwaitTag,
      google::cloud::netapp::v1::DeleteActiveDirectoryRequest const& request)
      override;

  future<StatusOr<google::cloud::netapp::v1::OperationMetadata>>
  DeleteActiveDirectory(
      google::longrunning::Operation const& operation) override;

  StreamRange<google::cloud::netapp::v1::KmsConfig> ListKmsConfigs(
      google::cloud::netapp::v1::ListKmsConfigsRequest request) override;

  future<StatusOr<google::cloud::netapp::v1::KmsConfig>> CreateKmsConfig(
      google::cloud::netapp::v1::CreateKmsConfigRequest const& request)
      override;

  StatusOr<google::longrunning::Operation> CreateKmsConfig(
      NoAwaitTag,
      google::cloud::netapp::v1::CreateKmsConfigRequest const& request)
      override;

  future<StatusOr<google::cloud::netapp::v1::KmsConfig>> CreateKmsConfig(
      google::longrunning::Operation const& operation) override;

  StatusOr<google::cloud::netapp::v1::KmsConfig> GetKmsConfig(
      google::cloud::netapp::v1::GetKmsConfigRequest const& request) override;

  future<StatusOr<google::cloud::netapp::v1::KmsConfig>> UpdateKmsConfig(
      google::cloud::netapp::v1::UpdateKmsConfigRequest const& request)
      override;

  StatusOr<google::longrunning::Operation> UpdateKmsConfig(
      NoAwaitTag,
      google::cloud::netapp::v1::UpdateKmsConfigRequest const& request)
      override;

  future<StatusOr<google::cloud::netapp::v1::KmsConfig>> UpdateKmsConfig(
      google::longrunning::Operation const& operation) override;

  future<StatusOr<google::cloud::netapp::v1::KmsConfig>> EncryptVolumes(
      google::cloud::netapp::v1::EncryptVolumesRequest const& request) override;

  StatusOr<google::longrunning::Operation> EncryptVolumes(
      NoAwaitTag,
      google::cloud::netapp::v1::EncryptVolumesRequest const& request) override;

  future<StatusOr<google::cloud::netapp::v1::KmsConfig>> EncryptVolumes(
      google::longrunning::Operation const& operation) override;

  StatusOr<google::cloud::netapp::v1::VerifyKmsConfigResponse> VerifyKmsConfig(
      google::cloud::netapp::v1::VerifyKmsConfigRequest const& request)
      override;

  future<StatusOr<google::cloud::netapp::v1::OperationMetadata>>
  DeleteKmsConfig(google::cloud::netapp::v1::DeleteKmsConfigRequest const&
                      request) override;

  StatusOr<google::longrunning::Operation> DeleteKmsConfig(
      NoAwaitTag,
      google::cloud::netapp::v1::DeleteKmsConfigRequest const& request)
      override;

  future<StatusOr<google::cloud::netapp::v1::OperationMetadata>>
  DeleteKmsConfig(google::longrunning::Operation const& operation) override;

  StreamRange<google::cloud::netapp::v1::Replication> ListReplications(
      google::cloud::netapp::v1::ListReplicationsRequest request) override;

  StatusOr<google::cloud::netapp::v1::Replication> GetReplication(
      google::cloud::netapp::v1::GetReplicationRequest const& request) override;

  future<StatusOr<google::cloud::netapp::v1::Replication>> CreateReplication(
      google::cloud::netapp::v1::CreateReplicationRequest const& request)
      override;

  StatusOr<google::longrunning::Operation> CreateReplication(
      NoAwaitTag,
      google::cloud::netapp::v1::CreateReplicationRequest const& request)
      override;

  future<StatusOr<google::cloud::netapp::v1::Replication>> CreateReplication(
      google::longrunning::Operation const& operation) override;

  future<StatusOr<google::cloud::netapp::v1::OperationMetadata>>
  DeleteReplication(google::cloud::netapp::v1::DeleteReplicationRequest const&
                        request) override;

  StatusOr<google::longrunning::Operation> DeleteReplication(
      NoAwaitTag,
      google::cloud::netapp::v1::DeleteReplicationRequest const& request)
      override;

  future<StatusOr<google::cloud::netapp::v1::OperationMetadata>>
  DeleteReplication(google::longrunning::Operation const& operation) override;

  future<StatusOr<google::cloud::netapp::v1::Replication>> UpdateReplication(
      google::cloud::netapp::v1::UpdateReplicationRequest const& request)
      override;

  StatusOr<google::longrunning::Operation> UpdateReplication(
      NoAwaitTag,
      google::cloud::netapp::v1::UpdateReplicationRequest const& request)
      override;

  future<StatusOr<google::cloud::netapp::v1::Replication>> UpdateReplication(
      google::longrunning::Operation const& operation) override;

  future<StatusOr<google::cloud::netapp::v1::Replication>> StopReplication(
      google::cloud::netapp::v1::StopReplicationRequest const& request)
      override;

  StatusOr<google::longrunning::Operation> StopReplication(
      NoAwaitTag,
      google::cloud::netapp::v1::StopReplicationRequest const& request)
      override;

  future<StatusOr<google::cloud::netapp::v1::Replication>> StopReplication(
      google::longrunning::Operation const& operation) override;

  future<StatusOr<google::cloud::netapp::v1::Replication>> ResumeReplication(
      google::cloud::netapp::v1::ResumeReplicationRequest const& request)
      override;

  StatusOr<google::longrunning::Operation> ResumeReplication(
      NoAwaitTag,
      google::cloud::netapp::v1::ResumeReplicationRequest const& request)
      override;

  future<StatusOr<google::cloud::netapp::v1::Replication>> ResumeReplication(
      google::longrunning::Operation const& operation) override;

  future<StatusOr<google::cloud::netapp::v1::Replication>>
  ReverseReplicationDirection(
      google::cloud::netapp::v1::ReverseReplicationDirectionRequest const&
          request) override;

  StatusOr<google::longrunning::Operation> ReverseReplicationDirection(
      NoAwaitTag,
      google::cloud::netapp::v1::ReverseReplicationDirectionRequest const&
          request) override;

  future<StatusOr<google::cloud::netapp::v1::Replication>>
  ReverseReplicationDirection(
      google::longrunning::Operation const& operation) override;

  future<StatusOr<google::cloud::netapp::v1::BackupVault>> CreateBackupVault(
      google::cloud::netapp::v1::CreateBackupVaultRequest const& request)
      override;

  StatusOr<google::longrunning::Operation> CreateBackupVault(
      NoAwaitTag,
      google::cloud::netapp::v1::CreateBackupVaultRequest const& request)
      override;

  future<StatusOr<google::cloud::netapp::v1::BackupVault>> CreateBackupVault(
      google::longrunning::Operation const& operation) override;

  StatusOr<google::cloud::netapp::v1::BackupVault> GetBackupVault(
      google::cloud::netapp::v1::GetBackupVaultRequest const& request) override;

  StreamRange<google::cloud::netapp::v1::BackupVault> ListBackupVaults(
      google::cloud::netapp::v1::ListBackupVaultsRequest request) override;

  future<StatusOr<google::cloud::netapp::v1::BackupVault>> UpdateBackupVault(
      google::cloud::netapp::v1::UpdateBackupVaultRequest const& request)
      override;

  StatusOr<google::longrunning::Operation> UpdateBackupVault(
      NoAwaitTag,
      google::cloud::netapp::v1::UpdateBackupVaultRequest const& request)
      override;

  future<StatusOr<google::cloud::netapp::v1::BackupVault>> UpdateBackupVault(
      google::longrunning::Operation const& operation) override;

  future<StatusOr<google::cloud::netapp::v1::OperationMetadata>>
  DeleteBackupVault(google::cloud::netapp::v1::DeleteBackupVaultRequest const&
                        request) override;

  StatusOr<google::longrunning::Operation> DeleteBackupVault(
      NoAwaitTag,
      google::cloud::netapp::v1::DeleteBackupVaultRequest const& request)
      override;

  future<StatusOr<google::cloud::netapp::v1::OperationMetadata>>
  DeleteBackupVault(google::longrunning::Operation const& operation) override;

  future<StatusOr<google::cloud::netapp::v1::Backup>> CreateBackup(
      google::cloud::netapp::v1::CreateBackupRequest const& request) override;

  StatusOr<google::longrunning::Operation> CreateBackup(
      NoAwaitTag,
      google::cloud::netapp::v1::CreateBackupRequest const& request) override;

  future<StatusOr<google::cloud::netapp::v1::Backup>> CreateBackup(
      google::longrunning::Operation const& operation) override;

  StatusOr<google::cloud::netapp::v1::Backup> GetBackup(
      google::cloud::netapp::v1::GetBackupRequest const& request) override;

  StreamRange<google::cloud::netapp::v1::Backup> ListBackups(
      google::cloud::netapp::v1::ListBackupsRequest request) override;

  future<StatusOr<google::cloud::netapp::v1::OperationMetadata>> DeleteBackup(
      google::cloud::netapp::v1::DeleteBackupRequest const& request) override;

  StatusOr<google::longrunning::Operation> DeleteBackup(
      NoAwaitTag,
      google::cloud::netapp::v1::DeleteBackupRequest const& request) override;

  future<StatusOr<google::cloud::netapp::v1::OperationMetadata>> DeleteBackup(
      google::longrunning::Operation const& operation) override;

  future<StatusOr<google::cloud::netapp::v1::Backup>> UpdateBackup(
      google::cloud::netapp::v1::UpdateBackupRequest const& request) override;

  StatusOr<google::longrunning::Operation> UpdateBackup(
      NoAwaitTag,
      google::cloud::netapp::v1::UpdateBackupRequest const& request) override;

  future<StatusOr<google::cloud::netapp::v1::Backup>> UpdateBackup(
      google::longrunning::Operation const& operation) override;

  future<StatusOr<google::cloud::netapp::v1::BackupPolicy>> CreateBackupPolicy(
      google::cloud::netapp::v1::CreateBackupPolicyRequest const& request)
      override;

  StatusOr<google::longrunning::Operation> CreateBackupPolicy(
      NoAwaitTag,
      google::cloud::netapp::v1::CreateBackupPolicyRequest const& request)
      override;

  future<StatusOr<google::cloud::netapp::v1::BackupPolicy>> CreateBackupPolicy(
      google::longrunning::Operation const& operation) override;

  StatusOr<google::cloud::netapp::v1::BackupPolicy> GetBackupPolicy(
      google::cloud::netapp::v1::GetBackupPolicyRequest const& request)
      override;

  StreamRange<google::cloud::netapp::v1::BackupPolicy> ListBackupPolicies(
      google::cloud::netapp::v1::ListBackupPoliciesRequest request) override;

  future<StatusOr<google::cloud::netapp::v1::BackupPolicy>> UpdateBackupPolicy(
      google::cloud::netapp::v1::UpdateBackupPolicyRequest const& request)
      override;

  StatusOr<google::longrunning::Operation> UpdateBackupPolicy(
      NoAwaitTag,
      google::cloud::netapp::v1::UpdateBackupPolicyRequest const& request)
      override;

  future<StatusOr<google::cloud::netapp::v1::BackupPolicy>> UpdateBackupPolicy(
      google::longrunning::Operation const& operation) override;

  future<StatusOr<google::cloud::netapp::v1::OperationMetadata>>
  DeleteBackupPolicy(google::cloud::netapp::v1::DeleteBackupPolicyRequest const&
                         request) override;

  StatusOr<google::longrunning::Operation> DeleteBackupPolicy(
      NoAwaitTag,
      google::cloud::netapp::v1::DeleteBackupPolicyRequest const& request)
      override;

  future<StatusOr<google::cloud::netapp::v1::OperationMetadata>>
  DeleteBackupPolicy(google::longrunning::Operation const& operation) override;

  StreamRange<google::cloud::location::Location> ListLocations(
      google::cloud::location::ListLocationsRequest request) override;

  StatusOr<google::cloud::location::Location> GetLocation(
      google::cloud::location::GetLocationRequest const& request) override;

  StreamRange<google::longrunning::Operation> ListOperations(
      google::longrunning::ListOperationsRequest request) override;

  StatusOr<google::longrunning::Operation> GetOperation(
      google::longrunning::GetOperationRequest const& request) override;

  Status DeleteOperation(
      google::longrunning::DeleteOperationRequest const& request) override;

  Status CancelOperation(
      google::longrunning::CancelOperationRequest const& request) override;

 private:
  std::unique_ptr<google::cloud::BackgroundThreads> background_;
  std::shared_ptr<netapp_v1_internal::NetAppStub> stub_;
  Options options_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace netapp_v1_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_NETAPP_V1_INTERNAL_NET_APP_CONNECTION_IMPL_H
