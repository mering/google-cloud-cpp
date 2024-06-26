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
// source: google/cloud/compute/snapshot_settings/v1/snapshot_settings.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_SNAPSHOT_SETTINGS_V1_SNAPSHOT_SETTINGS_CLIENT_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_SNAPSHOT_SETTINGS_V1_SNAPSHOT_SETTINGS_CLIENT_H

#include "google/cloud/compute/snapshot_settings/v1/snapshot_settings_rest_connection.h"
#include "google/cloud/experimental_tag.h"
#include "google/cloud/future.h"
#include "google/cloud/no_await_tag.h"
#include "google/cloud/options.h"
#include "google/cloud/polling_policy.h"
#include "google/cloud/status_or.h"
#include "google/cloud/version.h"
#include <memory>
#include <string>

namespace google {
namespace cloud {
namespace compute_snapshot_settings_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

///
/// Service for the snapshotSettings resource.
/// https://cloud.google.com/compute/docs/reference/rest/v1/snapshotSettings
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
class SnapshotSettingsClient {
 public:
  explicit SnapshotSettingsClient(
      std::shared_ptr<SnapshotSettingsConnection> connection,
      Options opts = {});
  ~SnapshotSettingsClient();

  ///@{
  /// @name Copy and move support
  SnapshotSettingsClient(SnapshotSettingsClient const&) = default;
  SnapshotSettingsClient& operator=(SnapshotSettingsClient const&) = default;
  SnapshotSettingsClient(SnapshotSettingsClient&&) = default;
  SnapshotSettingsClient& operator=(SnapshotSettingsClient&&) = default;
  ///@}

  ///@{
  /// @name Equality
  friend bool operator==(SnapshotSettingsClient const& a,
                         SnapshotSettingsClient const& b) {
    return a.connection_ == b.connection_;
  }
  friend bool operator!=(SnapshotSettingsClient const& a,
                         SnapshotSettingsClient const& b) {
    return !(a == b);
  }
  ///@}

  // clang-format off
  ///
  /// Get snapshot settings.
  /// https://cloud.google.com/compute/docs/reference/rest/v1/snapshotSettings/get
  ///
  /// @param project  Project ID for this request.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return the result of the RPC. The response message type
  ///     ([google.cloud.cpp.compute.v1.SnapshotSettings])
  ///     is mapped to a C++ class using the [Protobuf mapping rules].
  ///     If the request fails, the [`StatusOr`] contains the error details.
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.cpp.compute.snapshot_settings.v1.GetSnapshotSettingsRequest]: @cloud_cpp_reference_link{google/cloud/compute/snapshot_settings/v1/snapshot_settings.proto#L65}
  /// [google.cloud.cpp.compute.v1.SnapshotSettings]: @cloud_cpp_reference_link{google/cloud/compute/v1/internal/common_116.proto#L24}
  ///
  // clang-format on
  StatusOr<google::cloud::cpp::compute::v1::SnapshotSettings>
  GetSnapshotSettings(std::string const& project, Options opts = {});

  // clang-format off
  ///
  /// Get snapshot settings.
  /// https://cloud.google.com/compute/docs/reference/rest/v1/snapshotSettings/get
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.cloud.cpp.compute.snapshot_settings.v1.GetSnapshotSettingsRequest].
  ///     Proto messages are converted to C++ classes by Protobuf, using the
  ///     [Protobuf mapping rules].
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return the result of the RPC. The response message type
  ///     ([google.cloud.cpp.compute.v1.SnapshotSettings])
  ///     is mapped to a C++ class using the [Protobuf mapping rules].
  ///     If the request fails, the [`StatusOr`] contains the error details.
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.cpp.compute.snapshot_settings.v1.GetSnapshotSettingsRequest]: @cloud_cpp_reference_link{google/cloud/compute/snapshot_settings/v1/snapshot_settings.proto#L65}
  /// [google.cloud.cpp.compute.v1.SnapshotSettings]: @cloud_cpp_reference_link{google/cloud/compute/v1/internal/common_116.proto#L24}
  ///
  // clang-format on
  StatusOr<google::cloud::cpp::compute::v1::SnapshotSettings>
  GetSnapshotSettings(google::cloud::cpp::compute::snapshot_settings::v1::
                          GetSnapshotSettingsRequest const& request,
                      Options opts = {});

  // clang-format off
  ///
  /// Patch snapshot settings.
  /// https://cloud.google.com/compute/docs/reference/rest/v1/snapshotSettings/patch
  ///
  /// @param project  Project ID for this request.
  /// @param update_mask  update_mask indicates fields to be updated as part of this request.
  /// @param snapshot_settings_resource  The SnapshotSettings for this request.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return A [`future`] that becomes satisfied when the LRO
  ///     ([Long Running Operation]) completes or the polling policy in effect
  ///     for this call is exhausted. The future is satisfied with an error if
  ///     the LRO completes with an error or the polling policy is exhausted.
  ///     In this case the [`StatusOr`] returned by the future contains the
  ///     error. If the LRO completes successfully the value of the future
  ///     contains the LRO's result. For this RPC the result is a
  ///     [google.cloud.cpp.compute.v1.Operation] proto message.
  ///     The C++ class representing this message is created by Protobuf, using
  ///     the [Protobuf mapping rules].
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [Long Running Operation]: http://cloud/compute/docs/api/how-tos/api-requests-responses#handling_api_responses
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.cpp.compute.snapshot_settings.v1.PatchSnapshotSettingsRequest]: @cloud_cpp_reference_link{google/cloud/compute/snapshot_settings/v1/snapshot_settings.proto#L72}
  ///
  // clang-format on
  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  PatchSnapshotSettings(std::string const& project,
                        std::string const& update_mask,
                        google::cloud::cpp::compute::v1::SnapshotSettings const&
                            snapshot_settings_resource,
                        Options opts = {});

  StatusOr<google::cloud::cpp::compute::v1::Operation> PatchSnapshotSettings(
      ExperimentalTag, NoAwaitTag, std::string const& project,
      std::string const& update_mask,
      google::cloud::cpp::compute::v1::SnapshotSettings const&
          snapshot_settings_resource,
      Options opts = {});

  // clang-format off
  ///
  /// Patch snapshot settings.
  /// https://cloud.google.com/compute/docs/reference/rest/v1/snapshotSettings/patch
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.cloud.cpp.compute.snapshot_settings.v1.PatchSnapshotSettingsRequest].
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
  ///     [google.cloud.cpp.compute.v1.Operation] proto message.
  ///     The C++ class representing this message is created by Protobuf, using
  ///     the [Protobuf mapping rules].
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [Long Running Operation]: http://cloud/compute/docs/api/how-tos/api-requests-responses#handling_api_responses
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.cpp.compute.snapshot_settings.v1.PatchSnapshotSettingsRequest]: @cloud_cpp_reference_link{google/cloud/compute/snapshot_settings/v1/snapshot_settings.proto#L72}
  ///
  // clang-format on
  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  PatchSnapshotSettings(google::cloud::cpp::compute::snapshot_settings::v1::
                            PatchSnapshotSettingsRequest const& request,
                        Options opts = {});

  StatusOr<google::cloud::cpp::compute::v1::Operation> PatchSnapshotSettings(
      ExperimentalTag, NoAwaitTag,
      google::cloud::cpp::compute::snapshot_settings::v1::
          PatchSnapshotSettingsRequest const& request,
      Options opts = {});

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  PatchSnapshotSettings(
      ExperimentalTag,
      google::cloud::cpp::compute::v1::Operation const& operation,
      Options opts = {});

 private:
  std::shared_ptr<SnapshotSettingsConnection> connection_;
  Options options_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_snapshot_settings_v1
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_SNAPSHOT_SETTINGS_V1_SNAPSHOT_SETTINGS_CLIENT_H
