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
// source: google/cloud/dialogflow/v2/environment.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DIALOGFLOW_ES_ENVIRONMENTS_CLIENT_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DIALOGFLOW_ES_ENVIRONMENTS_CLIENT_H

#include "google/cloud/dialogflow_es/environments_connection.h"
#include "google/cloud/future.h"
#include "google/cloud/options.h"
#include "google/cloud/polling_policy.h"
#include "google/cloud/status_or.h"
#include "google/cloud/version.h"
#include <map>
#include <memory>
#include <string>

namespace google {
namespace cloud {
namespace dialogflow_es {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

///
/// Service for managing [Environments][google.cloud.dialogflow.v2.Environment].
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
/// [google.cloud.dialogflow.v2.Environment]:
/// @googleapis_reference_link{google/cloud/dialogflow/v2/environment.proto#L142}
///
class EnvironmentsClient {
 public:
  explicit EnvironmentsClient(
      std::shared_ptr<EnvironmentsConnection> connection, Options opts = {});
  ~EnvironmentsClient();

  ///@{
  /// @name Copy and move support
  EnvironmentsClient(EnvironmentsClient const&) = default;
  EnvironmentsClient& operator=(EnvironmentsClient const&) = default;
  EnvironmentsClient(EnvironmentsClient&&) = default;
  EnvironmentsClient& operator=(EnvironmentsClient&&) = default;
  ///@}

  ///@{
  /// @name Equality
  friend bool operator==(EnvironmentsClient const& a,
                         EnvironmentsClient const& b) {
    return a.connection_ == b.connection_;
  }
  friend bool operator!=(EnvironmentsClient const& a,
                         EnvironmentsClient const& b) {
    return !(a == b);
  }
  ///@}

  // clang-format off
  ///
  /// Returns the list of all non-default environments of the specified agent.
  ///
  /// @param parent  Required. The agent to list all environments from.
  ///  Format:
  ///  @n
  ///  - `projects/<Project ID>/agent`
  ///  - `projects/<Project ID>/locations/<Location ID>/agent`
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
  ///     [google.cloud.dialogflow.v2.Environment], or rather,
  ///     the C++ class generated by Protobuf from that type. Please consult the
  ///     Protobuf documentation for details on the [Protobuf mapping rules].
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.dialogflow.v2.Environment]: @googleapis_reference_link{google/cloud/dialogflow/v2/environment.proto#L142}
  /// [google.cloud.dialogflow.v2.ListEnvironmentsRequest]: @googleapis_reference_link{google/cloud/dialogflow/v2/environment.proto#L238}
  ///
  // clang-format on
  StreamRange<google::cloud::dialogflow::v2::Environment> ListEnvironments(
      std::string const& parent, Options opts = {});

  // clang-format off
  ///
  /// Returns the list of all non-default environments of the specified agent.
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.cloud.dialogflow.v2.ListEnvironmentsRequest].
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
  ///     [google.cloud.dialogflow.v2.Environment], or rather,
  ///     the C++ class generated by Protobuf from that type. Please consult the
  ///     Protobuf documentation for details on the [Protobuf mapping rules].
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.dialogflow.v2.Environment]: @googleapis_reference_link{google/cloud/dialogflow/v2/environment.proto#L142}
  /// [google.cloud.dialogflow.v2.ListEnvironmentsRequest]: @googleapis_reference_link{google/cloud/dialogflow/v2/environment.proto#L238}
  ///
  // clang-format on
  StreamRange<google::cloud::dialogflow::v2::Environment> ListEnvironments(
      google::cloud::dialogflow::v2::ListEnvironmentsRequest request,
      Options opts = {});

  // clang-format off
  ///
  /// Retrieves the specified agent environment.
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.cloud.dialogflow.v2.GetEnvironmentRequest].
  ///     Proto messages are converted to C++ classes by Protobuf, using the
  ///     [Protobuf mapping rules].
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return the result of the RPC. The response message type
  ///     ([google.cloud.dialogflow.v2.Environment])
  ///     is mapped to a C++ class using the [Protobuf mapping rules].
  ///     If the request fails, the [`StatusOr`] contains the error details.
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.dialogflow.v2.Environment]: @googleapis_reference_link{google/cloud/dialogflow/v2/environment.proto#L142}
  /// [google.cloud.dialogflow.v2.GetEnvironmentRequest]: @googleapis_reference_link{google/cloud/dialogflow/v2/environment.proto#L273}
  ///
  // clang-format on
  StatusOr<google::cloud::dialogflow::v2::Environment> GetEnvironment(
      google::cloud::dialogflow::v2::GetEnvironmentRequest const& request,
      Options opts = {});

  // clang-format off
  ///
  /// Creates an agent environment.
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.cloud.dialogflow.v2.CreateEnvironmentRequest].
  ///     Proto messages are converted to C++ classes by Protobuf, using the
  ///     [Protobuf mapping rules].
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return the result of the RPC. The response message type
  ///     ([google.cloud.dialogflow.v2.Environment])
  ///     is mapped to a C++ class using the [Protobuf mapping rules].
  ///     If the request fails, the [`StatusOr`] contains the error details.
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.dialogflow.v2.CreateEnvironmentRequest]: @googleapis_reference_link{google/cloud/dialogflow/v2/environment.proto#L292}
  /// [google.cloud.dialogflow.v2.Environment]: @googleapis_reference_link{google/cloud/dialogflow/v2/environment.proto#L142}
  ///
  // clang-format on
  StatusOr<google::cloud::dialogflow::v2::Environment> CreateEnvironment(
      google::cloud::dialogflow::v2::CreateEnvironmentRequest const& request,
      Options opts = {});

  // clang-format off
  ///
  /// Updates the specified agent environment.
  ///
  /// This method allows you to deploy new agent versions into the environment.
  /// When an environment is pointed to a new agent version by setting
  /// `environment.agent_version`, the environment is temporarily set to the
  /// `LOADING` state. During that time, the environment continues serving the
  /// previous version of the agent. After the new agent version is done loading,
  /// the environment is set back to the `RUNNING` state.
  /// You can use "-" as Environment ID in environment name to update an agent
  /// version in the default environment. WARNING: this will negate all recent
  /// changes to the draft agent and can't be undone. You may want to save the
  /// draft agent to a version before calling this method.
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.cloud.dialogflow.v2.UpdateEnvironmentRequest].
  ///     Proto messages are converted to C++ classes by Protobuf, using the
  ///     [Protobuf mapping rules].
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return the result of the RPC. The response message type
  ///     ([google.cloud.dialogflow.v2.Environment])
  ///     is mapped to a C++ class using the [Protobuf mapping rules].
  ///     If the request fails, the [`StatusOr`] contains the error details.
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.dialogflow.v2.Environment]: @googleapis_reference_link{google/cloud/dialogflow/v2/environment.proto#L142}
  /// [google.cloud.dialogflow.v2.UpdateEnvironmentRequest]: @googleapis_reference_link{google/cloud/dialogflow/v2/environment.proto#L314}
  ///
  // clang-format on
  StatusOr<google::cloud::dialogflow::v2::Environment> UpdateEnvironment(
      google::cloud::dialogflow::v2::UpdateEnvironmentRequest const& request,
      Options opts = {});

  // clang-format off
  ///
  /// Deletes the specified agent environment.
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.cloud.dialogflow.v2.DeleteEnvironmentRequest].
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
  /// [google.cloud.dialogflow.v2.DeleteEnvironmentRequest]: @googleapis_reference_link{google/cloud/dialogflow/v2/environment.proto#L332}
  ///
  // clang-format on
  Status DeleteEnvironment(
      google::cloud::dialogflow::v2::DeleteEnvironmentRequest const& request,
      Options opts = {});

  // clang-format off
  ///
  /// Gets the history of the specified environment.
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.cloud.dialogflow.v2.GetEnvironmentHistoryRequest].
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
  ///     [google.cloud.dialogflow.v2.EnvironmentHistory.Entry], or rather,
  ///     the C++ class generated by Protobuf from that type. Please consult the
  ///     Protobuf documentation for details on the [Protobuf mapping rules].
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.dialogflow.v2.EnvironmentHistory.Entry]: @googleapis_reference_link{google/cloud/dialogflow/v2/environment.proto#L379}
  /// [google.cloud.dialogflow.v2.GetEnvironmentHistoryRequest]: @googleapis_reference_link{google/cloud/dialogflow/v2/environment.proto#L351}
  ///
  // clang-format on
  StreamRange<google::cloud::dialogflow::v2::EnvironmentHistory::Entry>
  GetEnvironmentHistory(
      google::cloud::dialogflow::v2::GetEnvironmentHistoryRequest request,
      Options opts = {});

  // clang-format off
  ///
  /// Lists information about the supported locations for this service.
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.cloud.location.ListLocationsRequest].
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
  ///     [google.cloud.location.Location], or rather,
  ///     the C++ class generated by Protobuf from that type. Please consult the
  ///     Protobuf documentation for details on the [Protobuf mapping rules].
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.location.ListLocationsRequest]: @googleapis_reference_link{google/cloud/location/locations.proto#L58}
  /// [google.cloud.location.Location]: @googleapis_reference_link{google/cloud/location/locations.proto#L88}
  ///
  // clang-format on
  StreamRange<google::cloud::location::Location> ListLocations(
      google::cloud::location::ListLocationsRequest request, Options opts = {});

  // clang-format off
  ///
  /// Gets information about a location.
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.cloud.location.GetLocationRequest].
  ///     Proto messages are converted to C++ classes by Protobuf, using the
  ///     [Protobuf mapping rules].
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return the result of the RPC. The response message type
  ///     ([google.cloud.location.Location])
  ///     is mapped to a C++ class using the [Protobuf mapping rules].
  ///     If the request fails, the [`StatusOr`] contains the error details.
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.location.GetLocationRequest]: @googleapis_reference_link{google/cloud/location/locations.proto#L82}
  /// [google.cloud.location.Location]: @googleapis_reference_link{google/cloud/location/locations.proto#L88}
  ///
  // clang-format on
  StatusOr<google::cloud::location::Location> GetLocation(
      google::cloud::location::GetLocationRequest const& request,
      Options opts = {});

  // clang-format off
  ///
  /// Lists operations that match the specified filter in the request. If the
  /// server doesn't support this method, it returns `UNIMPLEMENTED`.
  ///
  /// NOTE: the `name` binding allows API services to override the binding
  /// to use different resource name schemes, such as `users/*/operations`. To
  /// override the binding, API services can add a binding such as
  /// `"/v1/{name=users/*}/operations"` to their service configuration.
  /// For backwards compatibility, the default name includes the operations
  /// collection id, however overriding users must ensure the name binding
  /// is the parent resource, without the operations collection id.
  ///
  /// @param name  The name of the operation's parent resource.
  /// @param filter  The standard list filter.
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
  ///     [google.longrunning.Operation], or rather,
  ///     the C++ class generated by Protobuf from that type. Please consult the
  ///     Protobuf documentation for details on the [Protobuf mapping rules].
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.longrunning.ListOperationsRequest]: @googleapis_reference_link{google/longrunning/operations.proto#L171}
  /// [google.longrunning.Operation]: @googleapis_reference_link{google/longrunning/operations.proto#L128}
  ///
  // clang-format on
  StreamRange<google::longrunning::Operation> ListOperations(
      std::string const& name, std::string const& filter, Options opts = {});

  // clang-format off
  ///
  /// Lists operations that match the specified filter in the request. If the
  /// server doesn't support this method, it returns `UNIMPLEMENTED`.
  ///
  /// NOTE: the `name` binding allows API services to override the binding
  /// to use different resource name schemes, such as `users/*/operations`. To
  /// override the binding, API services can add a binding such as
  /// `"/v1/{name=users/*}/operations"` to their service configuration.
  /// For backwards compatibility, the default name includes the operations
  /// collection id, however overriding users must ensure the name binding
  /// is the parent resource, without the operations collection id.
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.longrunning.ListOperationsRequest].
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
  ///     [google.longrunning.Operation], or rather,
  ///     the C++ class generated by Protobuf from that type. Please consult the
  ///     Protobuf documentation for details on the [Protobuf mapping rules].
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.longrunning.ListOperationsRequest]: @googleapis_reference_link{google/longrunning/operations.proto#L171}
  /// [google.longrunning.Operation]: @googleapis_reference_link{google/longrunning/operations.proto#L128}
  ///
  // clang-format on
  StreamRange<google::longrunning::Operation> ListOperations(
      google::longrunning::ListOperationsRequest request, Options opts = {});

  // clang-format off
  ///
  /// Gets the latest state of a long-running operation.  Clients can use this
  /// method to poll the operation result at intervals as recommended by the API
  /// service.
  ///
  /// @param name  The name of the operation resource.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return the result of the RPC. The response message type
  ///     ([google.longrunning.Operation])
  ///     is mapped to a C++ class using the [Protobuf mapping rules].
  ///     If the request fails, the [`StatusOr`] contains the error details.
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.longrunning.GetOperationRequest]: @googleapis_reference_link{google/longrunning/operations.proto#L165}
  /// [google.longrunning.Operation]: @googleapis_reference_link{google/longrunning/operations.proto#L128}
  ///
  // clang-format on
  StatusOr<google::longrunning::Operation> GetOperation(std::string const& name,
                                                        Options opts = {});

  // clang-format off
  ///
  /// Gets the latest state of a long-running operation.  Clients can use this
  /// method to poll the operation result at intervals as recommended by the API
  /// service.
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.longrunning.GetOperationRequest].
  ///     Proto messages are converted to C++ classes by Protobuf, using the
  ///     [Protobuf mapping rules].
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return the result of the RPC. The response message type
  ///     ([google.longrunning.Operation])
  ///     is mapped to a C++ class using the [Protobuf mapping rules].
  ///     If the request fails, the [`StatusOr`] contains the error details.
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.longrunning.GetOperationRequest]: @googleapis_reference_link{google/longrunning/operations.proto#L165}
  /// [google.longrunning.Operation]: @googleapis_reference_link{google/longrunning/operations.proto#L128}
  ///
  // clang-format on
  StatusOr<google::longrunning::Operation> GetOperation(
      google::longrunning::GetOperationRequest const& request,
      Options opts = {});

  // clang-format off
  ///
  /// Starts asynchronous cancellation on a long-running operation.  The server
  /// makes a best effort to cancel the operation, but success is not
  /// guaranteed.  If the server doesn't support this method, it returns
  /// `google.rpc.Code.UNIMPLEMENTED`.  Clients can use
  /// [Operations.GetOperation][google.longrunning.Operations.GetOperation] or
  /// other methods to check whether the cancellation succeeded or whether the
  /// operation completed despite cancellation. On successful cancellation,
  /// the operation is not deleted; instead, it becomes an operation with
  /// an [Operation.error][google.longrunning.Operation.error] value with a [google.rpc.Status.code][google.rpc.Status.code] of 1,
  /// corresponding to `Code.CANCELLED`.
  ///
  /// @param name  The name of the operation resource to be cancelled.
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
  /// [google.longrunning.CancelOperationRequest]: @googleapis_reference_link{google/longrunning/operations.proto#L195}
  /// [google.longrunning.Operation.error]: @googleapis_reference_link{google/longrunning/operations.proto#L150}
  /// [google.longrunning.Operations.GetOperation]: @googleapis_reference_link{google/longrunning/operations.proto#L77}
  /// [google.rpc.Status.code]: @googleapis_reference_link{google/rpc/status.proto#L38}
  ///
  // clang-format on
  Status CancelOperation(std::string const& name, Options opts = {});

  // clang-format off
  ///
  /// Starts asynchronous cancellation on a long-running operation.  The server
  /// makes a best effort to cancel the operation, but success is not
  /// guaranteed.  If the server doesn't support this method, it returns
  /// `google.rpc.Code.UNIMPLEMENTED`.  Clients can use
  /// [Operations.GetOperation][google.longrunning.Operations.GetOperation] or
  /// other methods to check whether the cancellation succeeded or whether the
  /// operation completed despite cancellation. On successful cancellation,
  /// the operation is not deleted; instead, it becomes an operation with
  /// an [Operation.error][google.longrunning.Operation.error] value with a [google.rpc.Status.code][google.rpc.Status.code] of 1,
  /// corresponding to `Code.CANCELLED`.
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.longrunning.CancelOperationRequest].
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
  /// [google.longrunning.CancelOperationRequest]: @googleapis_reference_link{google/longrunning/operations.proto#L195}
  /// [google.longrunning.Operation.error]: @googleapis_reference_link{google/longrunning/operations.proto#L150}
  /// [google.longrunning.Operations.GetOperation]: @googleapis_reference_link{google/longrunning/operations.proto#L77}
  /// [google.rpc.Status.code]: @googleapis_reference_link{google/rpc/status.proto#L38}
  ///
  // clang-format on
  Status CancelOperation(
      google::longrunning::CancelOperationRequest const& request,
      Options opts = {});

 private:
  std::shared_ptr<EnvironmentsConnection> connection_;
  Options options_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace dialogflow_es
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DIALOGFLOW_ES_ENVIRONMENTS_CLIENT_H
