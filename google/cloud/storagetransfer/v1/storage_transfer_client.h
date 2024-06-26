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
// source: google/storagetransfer/v1/transfer.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_STORAGETRANSFER_V1_STORAGE_TRANSFER_CLIENT_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_STORAGETRANSFER_V1_STORAGE_TRANSFER_CLIENT_H

#include "google/cloud/storagetransfer/v1/storage_transfer_connection.h"
#include "google/cloud/experimental_tag.h"
#include "google/cloud/future.h"
#include "google/cloud/no_await_tag.h"
#include "google/cloud/options.h"
#include "google/cloud/polling_policy.h"
#include "google/cloud/status_or.h"
#include "google/cloud/version.h"
#include <google/longrunning/operations.grpc.pb.h>
#include <memory>
#include <string>

namespace google {
namespace cloud {
namespace storagetransfer_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

///
/// Storage Transfer Service and its protos.
/// Transfers data between between Google Cloud Storage buckets or from a data
/// source external to Google to a Cloud Storage bucket.
///
/// @par Equality
///
/// Instances of this class created via copy-construction or copy-assignment
/// always compare equal. Instances created with equal
/// `std::shared_ptr<*Connection>` objects compare equal. Objects that compare
/// equal share the same underlying resources.
///
/// @par Performance
///
/// Creating a new instance of this class is a relatively expensive operation,
/// new objects establish new connections to the service. In contrast,
/// copy-construction, move-construction, and the corresponding assignment
/// operations are relatively efficient as the copies share all underlying
/// resources.
///
/// @par Thread Safety
///
/// Concurrent access to different instances of this class, even if they compare
/// equal, is guaranteed to work. Two or more threads operating on the same
/// instance of this class is not guaranteed to work. Since copy-construction
/// and move-construction is a relatively efficient operation, consider using
/// such a copy when using this class from multiple threads.
///
class StorageTransferServiceClient {
 public:
  explicit StorageTransferServiceClient(
      std::shared_ptr<StorageTransferServiceConnection> connection,
      Options opts = {});
  ~StorageTransferServiceClient();

  ///@{
  /// @name Copy and move support
  StorageTransferServiceClient(StorageTransferServiceClient const&) = default;
  StorageTransferServiceClient& operator=(StorageTransferServiceClient const&) =
      default;
  StorageTransferServiceClient(StorageTransferServiceClient&&) = default;
  StorageTransferServiceClient& operator=(StorageTransferServiceClient&&) =
      default;
  ///@}

  ///@{
  /// @name Equality
  friend bool operator==(StorageTransferServiceClient const& a,
                         StorageTransferServiceClient const& b) {
    return a.connection_ == b.connection_;
  }
  friend bool operator!=(StorageTransferServiceClient const& a,
                         StorageTransferServiceClient const& b) {
    return !(a == b);
  }
  ///@}

  // clang-format off
  ///
  /// Returns the Google service account that is used by Storage Transfer
  /// Service to access buckets in the project where transfers
  /// run or in other projects. Each Google service account is associated
  /// with one Google Cloud project. Users
  /// should add this service account to the Google Cloud Storage bucket
  /// ACLs to grant access to Storage Transfer Service. This service
  /// account is created and owned by Storage Transfer Service and can
  /// only be used by Storage Transfer Service.
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.storagetransfer.v1.GetGoogleServiceAccountRequest].
  ///     Proto messages are converted to C++ classes by Protobuf, using the
  ///     [Protobuf mapping rules].
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return the result of the RPC. The response message type
  ///     ([google.storagetransfer.v1.GoogleServiceAccount])
  ///     is mapped to a C++ class using the [Protobuf mapping rules].
  ///     If the request fails, the [`StatusOr`] contains the error details.
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.storagetransfer.v1.GetGoogleServiceAccountRequest]: @googleapis_reference_link{google/storagetransfer/v1/transfer.proto#L184}
  /// [google.storagetransfer.v1.GoogleServiceAccount]: @googleapis_reference_link{google/storagetransfer/v1/transfer_types.proto#L36}
  ///
  // clang-format on
  StatusOr<google::storagetransfer::v1::GoogleServiceAccount>
  GetGoogleServiceAccount(
      google::storagetransfer::v1::GetGoogleServiceAccountRequest const&
          request,
      Options opts = {});

  // clang-format off
  ///
  /// Creates a transfer job that runs periodically.
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.storagetransfer.v1.CreateTransferJobRequest].
  ///     Proto messages are converted to C++ classes by Protobuf, using the
  ///     [Protobuf mapping rules].
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return the result of the RPC. The response message type
  ///     ([google.storagetransfer.v1.TransferJob])
  ///     is mapped to a C++ class using the [Protobuf mapping rules].
  ///     If the request fails, the [`StatusOr`] contains the error details.
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.storagetransfer.v1.CreateTransferJobRequest]: @googleapis_reference_link{google/storagetransfer/v1/transfer.proto#L191}
  /// [google.storagetransfer.v1.TransferJob]: @googleapis_reference_link{google/storagetransfer/v1/transfer_types.proto#L933}
  ///
  // clang-format on
  StatusOr<google::storagetransfer::v1::TransferJob> CreateTransferJob(
      google::storagetransfer::v1::CreateTransferJobRequest const& request,
      Options opts = {});

  // clang-format off
  ///
  /// Updates a transfer job. Updating a job's transfer spec does not affect
  /// transfer operations that are running already.
  ///
  /// **Note:** The job's [status][google.storagetransfer.v1.TransferJob.status]
  /// field can be modified using this RPC (for example, to set a job's status to
  /// [DELETED][google.storagetransfer.v1.TransferJob.Status.DELETED],
  /// [DISABLED][google.storagetransfer.v1.TransferJob.Status.DISABLED], or
  /// [ENABLED][google.storagetransfer.v1.TransferJob.Status.ENABLED]).
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.storagetransfer.v1.UpdateTransferJobRequest].
  ///     Proto messages are converted to C++ classes by Protobuf, using the
  ///     [Protobuf mapping rules].
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return the result of the RPC. The response message type
  ///     ([google.storagetransfer.v1.TransferJob])
  ///     is mapped to a C++ class using the [Protobuf mapping rules].
  ///     If the request fails, the [`StatusOr`] contains the error details.
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.storagetransfer.v1.TransferJob]: @googleapis_reference_link{google/storagetransfer/v1/transfer_types.proto#L933}
  /// [google.storagetransfer.v1.TransferJob.Status.DELETED]: @googleapis_reference_link{google/storagetransfer/v1/transfer_types.proto#L949}
  /// [google.storagetransfer.v1.TransferJob.Status.DISABLED]: @googleapis_reference_link{google/storagetransfer/v1/transfer_types.proto#L943}
  /// [google.storagetransfer.v1.TransferJob.Status.ENABLED]: @googleapis_reference_link{google/storagetransfer/v1/transfer_types.proto#L940}
  /// [google.storagetransfer.v1.TransferJob.status]: @googleapis_reference_link{google/storagetransfer/v1/transfer_types.proto#L1015}
  /// [google.storagetransfer.v1.UpdateTransferJobRequest]: @googleapis_reference_link{google/storagetransfer/v1/transfer.proto#L197}
  ///
  // clang-format on
  StatusOr<google::storagetransfer::v1::TransferJob> UpdateTransferJob(
      google::storagetransfer::v1::UpdateTransferJobRequest const& request,
      Options opts = {});

  // clang-format off
  ///
  /// Gets a transfer job.
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.storagetransfer.v1.GetTransferJobRequest].
  ///     Proto messages are converted to C++ classes by Protobuf, using the
  ///     [Protobuf mapping rules].
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return the result of the RPC. The response message type
  ///     ([google.storagetransfer.v1.TransferJob])
  ///     is mapped to a C++ class using the [Protobuf mapping rules].
  ///     If the request fails, the [`StatusOr`] contains the error details.
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.storagetransfer.v1.GetTransferJobRequest]: @googleapis_reference_link{google/storagetransfer/v1/transfer.proto#L234}
  /// [google.storagetransfer.v1.TransferJob]: @googleapis_reference_link{google/storagetransfer/v1/transfer_types.proto#L933}
  ///
  // clang-format on
  StatusOr<google::storagetransfer::v1::TransferJob> GetTransferJob(
      google::storagetransfer::v1::GetTransferJobRequest const& request,
      Options opts = {});

  // clang-format off
  ///
  /// Lists transfer jobs.
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.storagetransfer.v1.ListTransferJobsRequest].
  ///     Proto messages are converted to C++ classes by Protobuf, using the
  ///     [Protobuf mapping rules].
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return a [StreamRange](@ref google::cloud::StreamRange)
  ///     to iterate of the results. See the documentation of this type for
  ///     details. In brief, this class has `begin()` and `end()` member
  ///     functions returning a iterator class meeting the
  ///     [input iterator requirements]. The value type for this iterator is a
  ///     [`StatusOr`] as the iteration may fail even after some values are
  ///     retrieved successfully, for example, if there is a network disconnect.
  ///     An empty set of results does not indicate an error, it indicates
  ///     that there are no resources meeting the request criteria.
  ///     On a successful iteration the `StatusOr<T>` contains elements of type
  ///     [google.storagetransfer.v1.TransferJob], or rather,
  ///     the C++ class generated by Protobuf from that type. Please consult the
  ///     Protobuf documentation for details on the [Protobuf mapping rules].
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.storagetransfer.v1.ListTransferJobsRequest]: @googleapis_reference_link{google/storagetransfer/v1/transfer.proto#L255}
  /// [google.storagetransfer.v1.TransferJob]: @googleapis_reference_link{google/storagetransfer/v1/transfer_types.proto#L933}
  ///
  // clang-format on
  StreamRange<google::storagetransfer::v1::TransferJob> ListTransferJobs(
      google::storagetransfer::v1::ListTransferJobsRequest request,
      Options opts = {});

  // clang-format off
  ///
  /// Pauses a transfer operation.
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.storagetransfer.v1.PauseTransferOperationRequest].
  ///     Proto messages are converted to C++ classes by Protobuf, using the
  ///     [Protobuf mapping rules].
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return a [`Status`] object. If the request failed, the
  ///     status contains the details of the failure.
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.storagetransfer.v1.PauseTransferOperationRequest]: @googleapis_reference_link{google/storagetransfer/v1/transfer.proto#L287}
  ///
  // clang-format on
  Status PauseTransferOperation(
      google::storagetransfer::v1::PauseTransferOperationRequest const& request,
      Options opts = {});

  // clang-format off
  ///
  /// Resumes a transfer operation that is paused.
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.storagetransfer.v1.ResumeTransferOperationRequest].
  ///     Proto messages are converted to C++ classes by Protobuf, using the
  ///     [Protobuf mapping rules].
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return a [`Status`] object. If the request failed, the
  ///     status contains the details of the failure.
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.storagetransfer.v1.ResumeTransferOperationRequest]: @googleapis_reference_link{google/storagetransfer/v1/transfer.proto#L293}
  ///
  // clang-format on
  Status ResumeTransferOperation(
      google::storagetransfer::v1::ResumeTransferOperationRequest const&
          request,
      Options opts = {});

  // clang-format off
  ///
  /// Starts a new operation for the specified transfer job.
  /// A `TransferJob` has a maximum of one active `TransferOperation`. If this
  /// method is called while a `TransferOperation` is active, an error is
  /// returned.
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.storagetransfer.v1.RunTransferJobRequest].
  ///     Proto messages are converted to C++ classes by Protobuf, using the
  ///     [Protobuf mapping rules].
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return A [`future`] that becomes satisfied when the LRO
  ///     ([Long Running Operation]) completes or the polling policy in effect
  ///     for this call is exhausted. The future is satisfied with an error if
  ///     the LRO completes with an error or the polling policy is exhausted.
  ///     In this case the [`StatusOr`] returned by the future contains the
  ///     error. If the LRO completes successfully the value of the future
  ///     contains the LRO's result. For this RPC the result is a
  ///     [google.storagetransfer.v1.TransferOperation] proto message.
  ///     The C++ class representing this message is created by Protobuf, using
  ///     the [Protobuf mapping rules].
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [Long Running Operation]: https://google.aip.dev/151
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.storagetransfer.v1.RunTransferJobRequest]: @googleapis_reference_link{google/storagetransfer/v1/transfer.proto#L299}
  /// [google.storagetransfer.v1.TransferOperation]: @googleapis_reference_link{google/storagetransfer/v1/transfer_types.proto#L1280}
  ///
  // clang-format on
  future<StatusOr<google::storagetransfer::v1::TransferOperation>>
  RunTransferJob(
      google::storagetransfer::v1::RunTransferJobRequest const& request,
      Options opts = {});

  StatusOr<google::longrunning::Operation> RunTransferJob(
      ExperimentalTag, NoAwaitTag,
      google::storagetransfer::v1::RunTransferJobRequest const& request,
      Options opts = {});

  future<StatusOr<google::storagetransfer::v1::TransferOperation>>
  RunTransferJob(ExperimentalTag,
                 google::longrunning::Operation const& operation,
                 Options opts = {});

  // clang-format off
  ///
  /// Deletes a transfer job. Deleting a transfer job sets its status to
  /// [DELETED][google.storagetransfer.v1.TransferJob.Status.DELETED].
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.storagetransfer.v1.DeleteTransferJobRequest].
  ///     Proto messages are converted to C++ classes by Protobuf, using the
  ///     [Protobuf mapping rules].
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return a [`Status`] object. If the request failed, the
  ///     status contains the details of the failure.
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.storagetransfer.v1.DeleteTransferJobRequest]: @googleapis_reference_link{google/storagetransfer/v1/transfer.proto#L244}
  /// [google.storagetransfer.v1.TransferJob.Status.DELETED]: @googleapis_reference_link{google/storagetransfer/v1/transfer_types.proto#L949}
  ///
  // clang-format on
  Status DeleteTransferJob(
      google::storagetransfer::v1::DeleteTransferJobRequest const& request,
      Options opts = {});

  // clang-format off
  ///
  /// Creates an agent pool resource.
  ///
  /// @param project_id  Required. The ID of the Google Cloud project that owns the
  ///  agent pool.
  /// @param agent_pool  Required. The agent pool to create.
  /// @param agent_pool_id  Required. The ID of the agent pool to create.
  ///  @n
  ///  The `agent_pool_id` must meet the following requirements:
  ///  @n
  ///  *   Length of 128 characters or less.
  ///  *   Not start with the string `goog`.
  ///  *   Start with a lowercase ASCII character, followed by:
  ///      *   Zero or more: lowercase Latin alphabet characters, numerals,
  ///          hyphens (`-`), periods (`.`), underscores (`_`), or tildes (`~`).
  ///      *   One or more numerals or lowercase ASCII characters.
  ///  @n
  ///  As expressed by the regular expression:
  ///  `^(?!goog)[a-z]([a-z0-9-._~]*[a-z0-9])?$`.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return the result of the RPC. The response message type
  ///     ([google.storagetransfer.v1.AgentPool])
  ///     is mapped to a C++ class using the [Protobuf mapping rules].
  ///     If the request fails, the [`StatusOr`] contains the error details.
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.storagetransfer.v1.AgentPool]: @googleapis_reference_link{google/storagetransfer/v1/transfer_types.proto#L477}
  /// [google.storagetransfer.v1.CreateAgentPoolRequest]: @googleapis_reference_link{google/storagetransfer/v1/transfer.proto#L309}
  ///
  // clang-format on
  StatusOr<google::storagetransfer::v1::AgentPool> CreateAgentPool(
      std::string const& project_id,
      google::storagetransfer::v1::AgentPool const& agent_pool,
      std::string const& agent_pool_id, Options opts = {});

  // clang-format off
  ///
  /// Creates an agent pool resource.
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.storagetransfer.v1.CreateAgentPoolRequest].
  ///     Proto messages are converted to C++ classes by Protobuf, using the
  ///     [Protobuf mapping rules].
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return the result of the RPC. The response message type
  ///     ([google.storagetransfer.v1.AgentPool])
  ///     is mapped to a C++ class using the [Protobuf mapping rules].
  ///     If the request fails, the [`StatusOr`] contains the error details.
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.storagetransfer.v1.AgentPool]: @googleapis_reference_link{google/storagetransfer/v1/transfer_types.proto#L477}
  /// [google.storagetransfer.v1.CreateAgentPoolRequest]: @googleapis_reference_link{google/storagetransfer/v1/transfer.proto#L309}
  ///
  // clang-format on
  StatusOr<google::storagetransfer::v1::AgentPool> CreateAgentPool(
      google::storagetransfer::v1::CreateAgentPoolRequest const& request,
      Options opts = {});

  // clang-format off
  ///
  /// Updates an existing agent pool resource.
  ///
  /// @param agent_pool  Required. The agent pool to update. `agent_pool` is expected to specify
  ///  following fields:
  ///  @n
  ///  *  [name][google.storagetransfer.v1.AgentPool.name]
  ///  @n
  ///  *  [display_name][google.storagetransfer.v1.AgentPool.display_name]
  ///  @n
  ///  *  [bandwidth_limit][google.storagetransfer.v1.AgentPool.bandwidth_limit]
  ///  An `UpdateAgentPoolRequest` with any other fields is rejected
  ///  with the error [INVALID_ARGUMENT][google.rpc.Code.INVALID_ARGUMENT].
  /// @param update_mask  The [field mask]
  ///  (https://developers.google.com/protocol-buffers/docs/reference/google.protobuf)
  ///  of the fields in `agentPool` to update in this request.
  ///  The following `agentPool` fields can be updated:
  ///  @n
  ///  *  [display_name][google.storagetransfer.v1.AgentPool.display_name]
  ///  @n
  ///  *  [bandwidth_limit][google.storagetransfer.v1.AgentPool.bandwidth_limit]
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return the result of the RPC. The response message type
  ///     ([google.storagetransfer.v1.AgentPool])
  ///     is mapped to a C++ class using the [Protobuf mapping rules].
  ///     If the request fails, the [`StatusOr`] contains the error details.
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.rpc.Code.INVALID_ARGUMENT]: @googleapis_reference_link{google/rpc/code.proto#L58}
  /// [google.storagetransfer.v1.AgentPool]: @googleapis_reference_link{google/storagetransfer/v1/transfer_types.proto#L477}
  /// [google.storagetransfer.v1.AgentPool.bandwidth_limit]: @googleapis_reference_link{google/storagetransfer/v1/transfer_types.proto#L521}
  /// [google.storagetransfer.v1.AgentPool.display_name]: @googleapis_reference_link{google/storagetransfer/v1/transfer_types.proto#L514}
  /// [google.storagetransfer.v1.AgentPool.name]: @googleapis_reference_link{google/storagetransfer/v1/transfer_types.proto#L511}
  /// [google.storagetransfer.v1.UpdateAgentPoolRequest]: @googleapis_reference_link{google/storagetransfer/v1/transfer.proto#L334}
  ///
  // clang-format on
  StatusOr<google::storagetransfer::v1::AgentPool> UpdateAgentPool(
      google::storagetransfer::v1::AgentPool const& agent_pool,
      google::protobuf::FieldMask const& update_mask, Options opts = {});

  // clang-format off
  ///
  /// Updates an existing agent pool resource.
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.storagetransfer.v1.UpdateAgentPoolRequest].
  ///     Proto messages are converted to C++ classes by Protobuf, using the
  ///     [Protobuf mapping rules].
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return the result of the RPC. The response message type
  ///     ([google.storagetransfer.v1.AgentPool])
  ///     is mapped to a C++ class using the [Protobuf mapping rules].
  ///     If the request fails, the [`StatusOr`] contains the error details.
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.storagetransfer.v1.AgentPool]: @googleapis_reference_link{google/storagetransfer/v1/transfer_types.proto#L477}
  /// [google.storagetransfer.v1.UpdateAgentPoolRequest]: @googleapis_reference_link{google/storagetransfer/v1/transfer.proto#L334}
  ///
  // clang-format on
  StatusOr<google::storagetransfer::v1::AgentPool> UpdateAgentPool(
      google::storagetransfer::v1::UpdateAgentPoolRequest const& request,
      Options opts = {});

  // clang-format off
  ///
  /// Gets an agent pool.
  ///
  /// @param name  Required. The name of the agent pool to get.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return the result of the RPC. The response message type
  ///     ([google.storagetransfer.v1.AgentPool])
  ///     is mapped to a C++ class using the [Protobuf mapping rules].
  ///     If the request fails, the [`StatusOr`] contains the error details.
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.storagetransfer.v1.AgentPool]: @googleapis_reference_link{google/storagetransfer/v1/transfer_types.proto#L477}
  /// [google.storagetransfer.v1.GetAgentPoolRequest]: @googleapis_reference_link{google/storagetransfer/v1/transfer.proto#L359}
  ///
  // clang-format on
  StatusOr<google::storagetransfer::v1::AgentPool> GetAgentPool(
      std::string const& name, Options opts = {});

  // clang-format off
  ///
  /// Gets an agent pool.
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.storagetransfer.v1.GetAgentPoolRequest].
  ///     Proto messages are converted to C++ classes by Protobuf, using the
  ///     [Protobuf mapping rules].
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return the result of the RPC. The response message type
  ///     ([google.storagetransfer.v1.AgentPool])
  ///     is mapped to a C++ class using the [Protobuf mapping rules].
  ///     If the request fails, the [`StatusOr`] contains the error details.
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.storagetransfer.v1.AgentPool]: @googleapis_reference_link{google/storagetransfer/v1/transfer_types.proto#L477}
  /// [google.storagetransfer.v1.GetAgentPoolRequest]: @googleapis_reference_link{google/storagetransfer/v1/transfer.proto#L359}
  ///
  // clang-format on
  StatusOr<google::storagetransfer::v1::AgentPool> GetAgentPool(
      google::storagetransfer::v1::GetAgentPoolRequest const& request,
      Options opts = {});

  // clang-format off
  ///
  /// Lists agent pools.
  ///
  /// @param project_id  Required. The ID of the Google Cloud project that owns the job.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return a [StreamRange](@ref google::cloud::StreamRange)
  ///     to iterate of the results. See the documentation of this type for
  ///     details. In brief, this class has `begin()` and `end()` member
  ///     functions returning a iterator class meeting the
  ///     [input iterator requirements]. The value type for this iterator is a
  ///     [`StatusOr`] as the iteration may fail even after some values are
  ///     retrieved successfully, for example, if there is a network disconnect.
  ///     An empty set of results does not indicate an error, it indicates
  ///     that there are no resources meeting the request criteria.
  ///     On a successful iteration the `StatusOr<T>` contains elements of type
  ///     [google.storagetransfer.v1.AgentPool], or rather,
  ///     the C++ class generated by Protobuf from that type. Please consult the
  ///     Protobuf documentation for details on the [Protobuf mapping rules].
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.storagetransfer.v1.AgentPool]: @googleapis_reference_link{google/storagetransfer/v1/transfer_types.proto#L477}
  /// [google.storagetransfer.v1.ListAgentPoolsRequest]: @googleapis_reference_link{google/storagetransfer/v1/transfer.proto#L371}
  ///
  // clang-format on
  StreamRange<google::storagetransfer::v1::AgentPool> ListAgentPools(
      std::string const& project_id, Options opts = {});

  // clang-format off
  ///
  /// Lists agent pools.
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.storagetransfer.v1.ListAgentPoolsRequest].
  ///     Proto messages are converted to C++ classes by Protobuf, using the
  ///     [Protobuf mapping rules].
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return a [StreamRange](@ref google::cloud::StreamRange)
  ///     to iterate of the results. See the documentation of this type for
  ///     details. In brief, this class has `begin()` and `end()` member
  ///     functions returning a iterator class meeting the
  ///     [input iterator requirements]. The value type for this iterator is a
  ///     [`StatusOr`] as the iteration may fail even after some values are
  ///     retrieved successfully, for example, if there is a network disconnect.
  ///     An empty set of results does not indicate an error, it indicates
  ///     that there are no resources meeting the request criteria.
  ///     On a successful iteration the `StatusOr<T>` contains elements of type
  ///     [google.storagetransfer.v1.AgentPool], or rather,
  ///     the C++ class generated by Protobuf from that type. Please consult the
  ///     Protobuf documentation for details on the [Protobuf mapping rules].
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.storagetransfer.v1.AgentPool]: @googleapis_reference_link{google/storagetransfer/v1/transfer_types.proto#L477}
  /// [google.storagetransfer.v1.ListAgentPoolsRequest]: @googleapis_reference_link{google/storagetransfer/v1/transfer.proto#L371}
  ///
  // clang-format on
  StreamRange<google::storagetransfer::v1::AgentPool> ListAgentPools(
      google::storagetransfer::v1::ListAgentPoolsRequest request,
      Options opts = {});

  // clang-format off
  ///
  /// Deletes an agent pool.
  ///
  /// @param name  Required. The name of the agent pool to delete.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return a [`Status`] object. If the request failed, the
  ///     status contains the details of the failure.
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.storagetransfer.v1.DeleteAgentPoolRequest]: @googleapis_reference_link{google/storagetransfer/v1/transfer.proto#L365}
  ///
  // clang-format on
  Status DeleteAgentPool(std::string const& name, Options opts = {});

  // clang-format off
  ///
  /// Deletes an agent pool.
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.storagetransfer.v1.DeleteAgentPoolRequest].
  ///     Proto messages are converted to C++ classes by Protobuf, using the
  ///     [Protobuf mapping rules].
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return a [`Status`] object. If the request failed, the
  ///     status contains the details of the failure.
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.storagetransfer.v1.DeleteAgentPoolRequest]: @googleapis_reference_link{google/storagetransfer/v1/transfer.proto#L365}
  ///
  // clang-format on
  Status DeleteAgentPool(
      google::storagetransfer::v1::DeleteAgentPoolRequest const& request,
      Options opts = {});

 private:
  std::shared_ptr<StorageTransferServiceConnection> connection_;
  Options options_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace storagetransfer_v1
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_STORAGETRANSFER_V1_STORAGE_TRANSFER_CLIENT_H
