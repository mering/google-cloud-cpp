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
// source:
// google/cloud/beyondcorp/appconnections/v1/app_connections_service.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_BEYONDCORP_APPCONNECTIONS_V1_APP_CONNECTIONS_CLIENT_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_BEYONDCORP_APPCONNECTIONS_V1_APP_CONNECTIONS_CLIENT_H

#include "google/cloud/beyondcorp/appconnections/v1/app_connections_connection.h"
#include "google/cloud/experimental_tag.h"
#include "google/cloud/future.h"
#include "google/cloud/no_await_tag.h"
#include "google/cloud/options.h"
#include "google/cloud/polling_policy.h"
#include "google/cloud/status_or.h"
#include "google/cloud/version.h"
#include <google/longrunning/operations.grpc.pb.h>
#include <map>
#include <memory>
#include <string>

namespace google {
namespace cloud {
namespace beyondcorp_appconnections_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

///
/// API Overview:
///
/// The `beyondcorp.googleapis.com` service implements the Google Cloud
/// BeyondCorp API.
///
/// Data Model:
///
/// The AppConnectionsService exposes the following resources:
///
/// * AppConnections, named as follows:
///   `projects/{project_id}/locations/{location_id}/appConnections/{app_connection_id}`.
///
/// The AppConnectionsService service provides methods to manage
/// (create/read/update/delete) BeyondCorp AppConnections.
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
class AppConnectionsServiceClient {
 public:
  explicit AppConnectionsServiceClient(
      std::shared_ptr<AppConnectionsServiceConnection> connection,
      Options opts = {});
  ~AppConnectionsServiceClient();

  ///@{
  /// @name Copy and move support
  AppConnectionsServiceClient(AppConnectionsServiceClient const&) = default;
  AppConnectionsServiceClient& operator=(AppConnectionsServiceClient const&) =
      default;
  AppConnectionsServiceClient(AppConnectionsServiceClient&&) = default;
  AppConnectionsServiceClient& operator=(AppConnectionsServiceClient&&) =
      default;
  ///@}

  ///@{
  /// @name Equality
  friend bool operator==(AppConnectionsServiceClient const& a,
                         AppConnectionsServiceClient const& b) {
    return a.connection_ == b.connection_;
  }
  friend bool operator!=(AppConnectionsServiceClient const& a,
                         AppConnectionsServiceClient const& b) {
    return !(a == b);
  }
  ///@}

  // clang-format off
  ///
  /// Lists AppConnections in a given project and location.
  ///
  /// @param parent  Required. The resource name of the AppConnection location using the form:
  ///  `projects/{project_id}/locations/{location_id}`
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
  ///     [google.cloud.beyondcorp.appconnections.v1.AppConnection], or rather,
  ///     the C++ class generated by Protobuf from that type. Please consult the
  ///     Protobuf documentation for details on the [Protobuf mapping rules].
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.beyondcorp.appconnections.v1.AppConnection]: @googleapis_reference_link{google/cloud/beyondcorp/appconnections/v1/app_connections_service.proto#L362}
  /// [google.cloud.beyondcorp.appconnections.v1.ListAppConnectionsRequest]: @googleapis_reference_link{google/cloud/beyondcorp/appconnections/v1/app_connections_service.proto#L134}
  ///
  // clang-format on
  StreamRange<google::cloud::beyondcorp::appconnections::v1::AppConnection>
  ListAppConnections(std::string const& parent, Options opts = {});

  // clang-format off
  ///
  /// Lists AppConnections in a given project and location.
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.cloud.beyondcorp.appconnections.v1.ListAppConnectionsRequest].
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
  ///     [google.cloud.beyondcorp.appconnections.v1.AppConnection], or rather,
  ///     the C++ class generated by Protobuf from that type. Please consult the
  ///     Protobuf documentation for details on the [Protobuf mapping rules].
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.beyondcorp.appconnections.v1.AppConnection]: @googleapis_reference_link{google/cloud/beyondcorp/appconnections/v1/app_connections_service.proto#L362}
  /// [google.cloud.beyondcorp.appconnections.v1.ListAppConnectionsRequest]: @googleapis_reference_link{google/cloud/beyondcorp/appconnections/v1/app_connections_service.proto#L134}
  ///
  // clang-format on
  StreamRange<google::cloud::beyondcorp::appconnections::v1::AppConnection>
  ListAppConnections(
      google::cloud::beyondcorp::appconnections::v1::ListAppConnectionsRequest
          request,
      Options opts = {});

  // clang-format off
  ///
  /// Gets details of a single AppConnection.
  ///
  /// @param name  Required. BeyondCorp AppConnection name using the form:
  ///  `projects/{project_id}/locations/{location_id}/appConnections/{app_connection_id}`
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return the result of the RPC. The response message type
  ///     ([google.cloud.beyondcorp.appconnections.v1.AppConnection])
  ///     is mapped to a C++ class using the [Protobuf mapping rules].
  ///     If the request fails, the [`StatusOr`] contains the error details.
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.beyondcorp.appconnections.v1.AppConnection]: @googleapis_reference_link{google/cloud/beyondcorp/appconnections/v1/app_connections_service.proto#L362}
  /// [google.cloud.beyondcorp.appconnections.v1.GetAppConnectionRequest]: @googleapis_reference_link{google/cloud/beyondcorp/appconnections/v1/app_connections_service.proto#L180}
  ///
  // clang-format on
  StatusOr<google::cloud::beyondcorp::appconnections::v1::AppConnection>
  GetAppConnection(std::string const& name, Options opts = {});

  // clang-format off
  ///
  /// Gets details of a single AppConnection.
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.cloud.beyondcorp.appconnections.v1.GetAppConnectionRequest].
  ///     Proto messages are converted to C++ classes by Protobuf, using the
  ///     [Protobuf mapping rules].
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return the result of the RPC. The response message type
  ///     ([google.cloud.beyondcorp.appconnections.v1.AppConnection])
  ///     is mapped to a C++ class using the [Protobuf mapping rules].
  ///     If the request fails, the [`StatusOr`] contains the error details.
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.beyondcorp.appconnections.v1.AppConnection]: @googleapis_reference_link{google/cloud/beyondcorp/appconnections/v1/app_connections_service.proto#L362}
  /// [google.cloud.beyondcorp.appconnections.v1.GetAppConnectionRequest]: @googleapis_reference_link{google/cloud/beyondcorp/appconnections/v1/app_connections_service.proto#L180}
  ///
  // clang-format on
  StatusOr<google::cloud::beyondcorp::appconnections::v1::AppConnection>
  GetAppConnection(google::cloud::beyondcorp::appconnections::v1::
                       GetAppConnectionRequest const& request,
                   Options opts = {});

  // clang-format off
  ///
  /// Creates a new AppConnection in a given project and location.
  ///
  /// @param parent  Required. The resource project name of the AppConnection location using the
  ///  form: `projects/{project_id}/locations/{location_id}`
  /// @param app_connection  Required. A BeyondCorp AppConnection resource.
  /// @param app_connection_id  Optional. User-settable AppConnection resource ID.
  ///   * Must start with a letter.
  ///   * Must contain between 4-63 characters from `/[a-z][0-9]-/`.
  ///   * Must end with a number or a letter.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return A [`future`] that becomes satisfied when the LRO
  ///     ([Long Running Operation]) completes or the polling policy in effect
  ///     for this call is exhausted. The future is satisfied with an error if
  ///     the LRO completes with an error or the polling policy is exhausted.
  ///     In this case the [`StatusOr`] returned by the future contains the
  ///     error. If the LRO completes successfully the value of the future
  ///     contains the LRO's result. For this RPC the result is a
  ///     [google.cloud.beyondcorp.appconnections.v1.AppConnection] proto message.
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
  /// [google.cloud.beyondcorp.appconnections.v1.AppConnection]: @googleapis_reference_link{google/cloud/beyondcorp/appconnections/v1/app_connections_service.proto#L362}
  /// [google.cloud.beyondcorp.appconnections.v1.CreateAppConnectionRequest]: @googleapis_reference_link{google/cloud/beyondcorp/appconnections/v1/app_connections_service.proto#L192}
  ///
  // clang-format on
  future<StatusOr<google::cloud::beyondcorp::appconnections::v1::AppConnection>>
  CreateAppConnection(
      std::string const& parent,
      google::cloud::beyondcorp::appconnections::v1::AppConnection const&
          app_connection,
      std::string const& app_connection_id, Options opts = {});

  StatusOr<google::longrunning::Operation> CreateAppConnection(
      ExperimentalTag, NoAwaitTag, std::string const& parent,
      google::cloud::beyondcorp::appconnections::v1::AppConnection const&
          app_connection,
      std::string const& app_connection_id, Options opts = {});

  // clang-format off
  ///
  /// Creates a new AppConnection in a given project and location.
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.cloud.beyondcorp.appconnections.v1.CreateAppConnectionRequest].
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
  ///     [google.cloud.beyondcorp.appconnections.v1.AppConnection] proto message.
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
  /// [google.cloud.beyondcorp.appconnections.v1.AppConnection]: @googleapis_reference_link{google/cloud/beyondcorp/appconnections/v1/app_connections_service.proto#L362}
  /// [google.cloud.beyondcorp.appconnections.v1.CreateAppConnectionRequest]: @googleapis_reference_link{google/cloud/beyondcorp/appconnections/v1/app_connections_service.proto#L192}
  ///
  // clang-format on
  future<StatusOr<google::cloud::beyondcorp::appconnections::v1::AppConnection>>
  CreateAppConnection(google::cloud::beyondcorp::appconnections::v1::
                          CreateAppConnectionRequest const& request,
                      Options opts = {});

  StatusOr<google::longrunning::Operation> CreateAppConnection(
      ExperimentalTag, NoAwaitTag,
      google::cloud::beyondcorp::appconnections::v1::
          CreateAppConnectionRequest const& request,
      Options opts = {});

  future<StatusOr<google::cloud::beyondcorp::appconnections::v1::AppConnection>>
  CreateAppConnection(ExperimentalTag,
                      google::longrunning::Operation const& operation,
                      Options opts = {});

  // clang-format off
  ///
  /// Updates the parameters of a single AppConnection.
  ///
  /// @param app_connection  Required. AppConnection message with updated fields. Only supported fields
  ///  specified in update_mask are updated.
  /// @param update_mask  Required. Mask of fields to update. At least one path must be supplied in
  ///  this field. The elements of the repeated paths field may only include these
  ///  fields from [BeyondCorp.AppConnection]:
  ///  * `labels`
  ///  * `display_name`
  ///  * `application_endpoint`
  ///  * `connectors`
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return A [`future`] that becomes satisfied when the LRO
  ///     ([Long Running Operation]) completes or the polling policy in effect
  ///     for this call is exhausted. The future is satisfied with an error if
  ///     the LRO completes with an error or the polling policy is exhausted.
  ///     In this case the [`StatusOr`] returned by the future contains the
  ///     error. If the LRO completes successfully the value of the future
  ///     contains the LRO's result. For this RPC the result is a
  ///     [google.cloud.beyondcorp.appconnections.v1.AppConnection] proto message.
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
  /// [google.cloud.beyondcorp.appconnections.v1.AppConnection]: @googleapis_reference_link{google/cloud/beyondcorp/appconnections/v1/app_connections_service.proto#L362}
  /// [google.cloud.beyondcorp.appconnections.v1.UpdateAppConnectionRequest]: @googleapis_reference_link{google/cloud/beyondcorp/appconnections/v1/app_connections_service.proto#L232}
  ///
  // clang-format on
  future<StatusOr<google::cloud::beyondcorp::appconnections::v1::AppConnection>>
  UpdateAppConnection(
      google::cloud::beyondcorp::appconnections::v1::AppConnection const&
          app_connection,
      google::protobuf::FieldMask const& update_mask, Options opts = {});

  StatusOr<google::longrunning::Operation> UpdateAppConnection(
      ExperimentalTag, NoAwaitTag,
      google::cloud::beyondcorp::appconnections::v1::AppConnection const&
          app_connection,
      google::protobuf::FieldMask const& update_mask, Options opts = {});

  // clang-format off
  ///
  /// Updates the parameters of a single AppConnection.
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.cloud.beyondcorp.appconnections.v1.UpdateAppConnectionRequest].
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
  ///     [google.cloud.beyondcorp.appconnections.v1.AppConnection] proto message.
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
  /// [google.cloud.beyondcorp.appconnections.v1.AppConnection]: @googleapis_reference_link{google/cloud/beyondcorp/appconnections/v1/app_connections_service.proto#L362}
  /// [google.cloud.beyondcorp.appconnections.v1.UpdateAppConnectionRequest]: @googleapis_reference_link{google/cloud/beyondcorp/appconnections/v1/app_connections_service.proto#L232}
  ///
  // clang-format on
  future<StatusOr<google::cloud::beyondcorp::appconnections::v1::AppConnection>>
  UpdateAppConnection(google::cloud::beyondcorp::appconnections::v1::
                          UpdateAppConnectionRequest const& request,
                      Options opts = {});

  StatusOr<google::longrunning::Operation> UpdateAppConnection(
      ExperimentalTag, NoAwaitTag,
      google::cloud::beyondcorp::appconnections::v1::
          UpdateAppConnectionRequest const& request,
      Options opts = {});

  future<StatusOr<google::cloud::beyondcorp::appconnections::v1::AppConnection>>
  UpdateAppConnection(ExperimentalTag,
                      google::longrunning::Operation const& operation,
                      Options opts = {});

  // clang-format off
  ///
  /// Deletes a single AppConnection.
  ///
  /// @param name  Required. BeyondCorp Connector name using the form:
  ///  `projects/{project_id}/locations/{location_id}/appConnections/{app_connection_id}`
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return A [`future`] that becomes satisfied when the LRO
  ///     ([Long Running Operation]) completes or the polling policy in effect
  ///     for this call is exhausted. The future is satisfied with an error if
  ///     the LRO completes with an error or the polling policy is exhausted.
  ///     In this case the [`StatusOr`] returned by the future contains the
  ///     error. If the LRO completes successfully the value of the future
  ///     contains the LRO's result. For this RPC the result is a
  ///     [google.cloud.beyondcorp.appconnections.v1.AppConnectionOperationMetadata] proto message.
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
  /// [google.cloud.beyondcorp.appconnections.v1.AppConnectionOperationMetadata]: @googleapis_reference_link{google/cloud/beyondcorp/appconnections/v1/app_connections_service.proto#L485}
  /// [google.cloud.beyondcorp.appconnections.v1.DeleteAppConnectionRequest]: @googleapis_reference_link{google/cloud/beyondcorp/appconnections/v1/app_connections_service.proto#L271}
  ///
  // clang-format on
  future<StatusOr<google::cloud::beyondcorp::appconnections::v1::
                      AppConnectionOperationMetadata>>
  DeleteAppConnection(std::string const& name, Options opts = {});

  StatusOr<google::longrunning::Operation> DeleteAppConnection(
      ExperimentalTag, NoAwaitTag, std::string const& name, Options opts = {});

  // clang-format off
  ///
  /// Deletes a single AppConnection.
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.cloud.beyondcorp.appconnections.v1.DeleteAppConnectionRequest].
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
  ///     [google.cloud.beyondcorp.appconnections.v1.AppConnectionOperationMetadata] proto message.
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
  /// [google.cloud.beyondcorp.appconnections.v1.AppConnectionOperationMetadata]: @googleapis_reference_link{google/cloud/beyondcorp/appconnections/v1/app_connections_service.proto#L485}
  /// [google.cloud.beyondcorp.appconnections.v1.DeleteAppConnectionRequest]: @googleapis_reference_link{google/cloud/beyondcorp/appconnections/v1/app_connections_service.proto#L271}
  ///
  // clang-format on
  future<StatusOr<google::cloud::beyondcorp::appconnections::v1::
                      AppConnectionOperationMetadata>>
  DeleteAppConnection(google::cloud::beyondcorp::appconnections::v1::
                          DeleteAppConnectionRequest const& request,
                      Options opts = {});

  StatusOr<google::longrunning::Operation> DeleteAppConnection(
      ExperimentalTag, NoAwaitTag,
      google::cloud::beyondcorp::appconnections::v1::
          DeleteAppConnectionRequest const& request,
      Options opts = {});

  future<StatusOr<google::cloud::beyondcorp::appconnections::v1::
                      AppConnectionOperationMetadata>>
  DeleteAppConnection(ExperimentalTag,
                      google::longrunning::Operation const& operation,
                      Options opts = {});

  // clang-format off
  ///
  /// Resolves AppConnections details for a given AppConnector.
  /// An internal method called by a connector to find AppConnections to connect
  /// to.
  ///
  /// @param parent  Required. The resource name of the AppConnection location using the form:
  ///  `projects/{project_id}/locations/{location_id}`
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
  ///     [google.cloud.beyondcorp.appconnections.v1.ResolveAppConnectionsResponse.AppConnectionDetails], or rather,
  ///     the C++ class generated by Protobuf from that type. Please consult the
  ///     Protobuf documentation for details on the [Protobuf mapping rules].
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.beyondcorp.appconnections.v1.ResolveAppConnectionsRequest]: @googleapis_reference_link{google/cloud/beyondcorp/appconnections/v1/app_connections_service.proto#L302}
  /// [google.cloud.beyondcorp.appconnections.v1.ResolveAppConnectionsResponse.AppConnectionDetails]: @googleapis_reference_link{google/cloud/beyondcorp/appconnections/v1/app_connections_service.proto#L338}
  ///
  // clang-format on
  StreamRange<google::cloud::beyondcorp::appconnections::v1::
                  ResolveAppConnectionsResponse::AppConnectionDetails>
  ResolveAppConnections(std::string const& parent, Options opts = {});

  // clang-format off
  ///
  /// Resolves AppConnections details for a given AppConnector.
  /// An internal method called by a connector to find AppConnections to connect
  /// to.
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.cloud.beyondcorp.appconnections.v1.ResolveAppConnectionsRequest].
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
  ///     [google.cloud.beyondcorp.appconnections.v1.ResolveAppConnectionsResponse.AppConnectionDetails], or rather,
  ///     the C++ class generated by Protobuf from that type. Please consult the
  ///     Protobuf documentation for details on the [Protobuf mapping rules].
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.beyondcorp.appconnections.v1.ResolveAppConnectionsRequest]: @googleapis_reference_link{google/cloud/beyondcorp/appconnections/v1/app_connections_service.proto#L302}
  /// [google.cloud.beyondcorp.appconnections.v1.ResolveAppConnectionsResponse.AppConnectionDetails]: @googleapis_reference_link{google/cloud/beyondcorp/appconnections/v1/app_connections_service.proto#L338}
  ///
  // clang-format on
  StreamRange<google::cloud::beyondcorp::appconnections::v1::
                  ResolveAppConnectionsResponse::AppConnectionDetails>
  ResolveAppConnections(google::cloud::beyondcorp::appconnections::v1::
                            ResolveAppConnectionsRequest request,
                        Options opts = {});

 private:
  std::shared_ptr<AppConnectionsServiceConnection> connection_;
  Options options_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace beyondcorp_appconnections_v1
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_BEYONDCORP_APPCONNECTIONS_V1_APP_CONNECTIONS_CLIENT_H
