// Copyright 2024 Google LLC
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
// source: google/cloud/aiplatform/v1/evaluation_service.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_AIPLATFORM_V1_EVALUATION_CLIENT_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_AIPLATFORM_V1_EVALUATION_CLIENT_H

#include "google/cloud/aiplatform/v1/evaluation_connection.h"
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
namespace aiplatform_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

///
/// Vertex AI Online Evaluation Service.
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
class EvaluationServiceClient {
 public:
  explicit EvaluationServiceClient(
      std::shared_ptr<EvaluationServiceConnection> connection,
      Options opts = {});
  ~EvaluationServiceClient();

  ///@{
  /// @name Copy and move support
  EvaluationServiceClient(EvaluationServiceClient const&) = default;
  EvaluationServiceClient& operator=(EvaluationServiceClient const&) = default;
  EvaluationServiceClient(EvaluationServiceClient&&) = default;
  EvaluationServiceClient& operator=(EvaluationServiceClient&&) = default;
  ///@}

  ///@{
  /// @name Equality
  friend bool operator==(EvaluationServiceClient const& a,
                         EvaluationServiceClient const& b) {
    return a.connection_ == b.connection_;
  }
  friend bool operator!=(EvaluationServiceClient const& a,
                         EvaluationServiceClient const& b) {
    return !(a == b);
  }
  ///@}

  // clang-format off
  ///
  /// Evaluates instances based on a given metric.
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.cloud.aiplatform.v1.EvaluateInstancesRequest].
  ///     Proto messages are converted to C++ classes by Protobuf, using the
  ///     [Protobuf mapping rules].
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return the result of the RPC. The response message type
  ///     ([google.cloud.aiplatform.v1.EvaluateInstancesResponse])
  ///     is mapped to a C++ class using the [Protobuf mapping rules].
  ///     If the request fails, the [`StatusOr`] contains the error details.
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.aiplatform.v1.EvaluateInstancesRequest]: @googleapis_reference_link{google/cloud/aiplatform/v1/evaluation_service.proto#L64}
  /// [google.cloud.aiplatform.v1.EvaluateInstancesResponse]: @googleapis_reference_link{google/cloud/aiplatform/v1/evaluation_service.proto#L155}
  ///
  // clang-format on
  StatusOr<google::cloud::aiplatform::v1::EvaluateInstancesResponse>
  EvaluateInstances(
      google::cloud::aiplatform::v1::EvaluateInstancesRequest const& request,
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
  /// Sets the access control policy on the specified resource. Replaces any
  /// existing policy.
  ///
  /// Can return `NOT_FOUND`, `INVALID_ARGUMENT`, and `PERMISSION_DENIED` errors.
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.iam.v1.SetIamPolicyRequest].
  ///     Proto messages are converted to C++ classes by Protobuf, using the
  ///     [Protobuf mapping rules].
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return the result of the RPC. The response message type
  ///     ([google.iam.v1.Policy])
  ///     is mapped to a C++ class using the [Protobuf mapping rules].
  ///     If the request fails, the [`StatusOr`] contains the error details.
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.iam.v1.Policy]: @googleapis_reference_link{google/iam/v1/policy.proto#L102}
  /// [google.iam.v1.SetIamPolicyRequest]: @googleapis_reference_link{google/iam/v1/iam_policy.proto#L101}
  ///
  // clang-format on
  StatusOr<google::iam::v1::Policy> SetIamPolicy(
      google::iam::v1::SetIamPolicyRequest const& request, Options opts = {});

  // clang-format off
  ///
  /// Gets the access control policy for a resource.
  /// Returns an empty policy if the resource exists and does not have a policy
  /// set.
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.iam.v1.GetIamPolicyRequest].
  ///     Proto messages are converted to C++ classes by Protobuf, using the
  ///     [Protobuf mapping rules].
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return the result of the RPC. The response message type
  ///     ([google.iam.v1.Policy])
  ///     is mapped to a C++ class using the [Protobuf mapping rules].
  ///     If the request fails, the [`StatusOr`] contains the error details.
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.iam.v1.GetIamPolicyRequest]: @googleapis_reference_link{google/iam/v1/iam_policy.proto#L123}
  /// [google.iam.v1.Policy]: @googleapis_reference_link{google/iam/v1/policy.proto#L102}
  ///
  // clang-format on
  StatusOr<google::iam::v1::Policy> GetIamPolicy(
      google::iam::v1::GetIamPolicyRequest const& request, Options opts = {});

  // clang-format off
  ///
  /// Returns permissions that a caller has on the specified resource.
  /// If the resource does not exist, this will return an empty set of
  /// permissions, not a `NOT_FOUND` error.
  ///
  /// Note: This operation is designed to be used for building permission-aware
  /// UIs and command-line tools, not for authorization checking. This operation
  /// may "fail open" without warning.
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.iam.v1.TestIamPermissionsRequest].
  ///     Proto messages are converted to C++ classes by Protobuf, using the
  ///     [Protobuf mapping rules].
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return the result of the RPC. The response message type
  ///     ([google.iam.v1.TestIamPermissionsResponse])
  ///     is mapped to a C++ class using the [Protobuf mapping rules].
  ///     If the request fails, the [`StatusOr`] contains the error details.
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.iam.v1.TestIamPermissionsRequest]: @googleapis_reference_link{google/iam/v1/iam_policy.proto#L136}
  /// [google.iam.v1.TestIamPermissionsResponse]: @googleapis_reference_link{google/iam/v1/iam_policy.proto#L151}
  ///
  // clang-format on
  StatusOr<google::iam::v1::TestIamPermissionsResponse> TestIamPermissions(
      google::iam::v1::TestIamPermissionsRequest const& request,
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
  /// Deletes a long-running operation. This method indicates that the client is
  /// no longer interested in the operation result. It does not cancel the
  /// operation. If the server doesn't support this method, it returns
  /// `google.rpc.Code.UNIMPLEMENTED`.
  ///
  /// @param name  The name of the operation resource to be deleted.
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
  /// [google.longrunning.DeleteOperationRequest]: @googleapis_reference_link{google/longrunning/operations.proto#L201}
  ///
  // clang-format on
  Status DeleteOperation(std::string const& name, Options opts = {});

  // clang-format off
  ///
  /// Deletes a long-running operation. This method indicates that the client is
  /// no longer interested in the operation result. It does not cancel the
  /// operation. If the server doesn't support this method, it returns
  /// `google.rpc.Code.UNIMPLEMENTED`.
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.longrunning.DeleteOperationRequest].
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
  /// [google.longrunning.DeleteOperationRequest]: @googleapis_reference_link{google/longrunning/operations.proto#L201}
  ///
  // clang-format on
  Status DeleteOperation(
      google::longrunning::DeleteOperationRequest const& request,
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

  // clang-format off
  ///
  /// Waits until the specified long-running operation is done or reaches at most
  /// a specified timeout, returning the latest state.  If the operation is
  /// already done, the latest state is immediately returned.  If the timeout
  /// specified is greater than the default HTTP/RPC timeout, the HTTP/RPC
  /// timeout is used.  If the server does not support this method, it returns
  /// `google.rpc.Code.UNIMPLEMENTED`.
  /// Note that this method is on a best-effort basis.  It may return the latest
  /// state before the specified timeout (including immediately), meaning even an
  /// immediate response is no guarantee that the operation is done.
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.longrunning.WaitOperationRequest].
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
  /// [google.longrunning.Operation]: @googleapis_reference_link{google/longrunning/operations.proto#L128}
  /// [google.longrunning.WaitOperationRequest]: @googleapis_reference_link{google/longrunning/operations.proto#L207}
  ///
  // clang-format on
  StatusOr<google::longrunning::Operation> WaitOperation(
      google::longrunning::WaitOperationRequest const& request,
      Options opts = {});

 private:
  std::shared_ptr<EvaluationServiceConnection> connection_;
  Options options_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace aiplatform_v1
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_AIPLATFORM_V1_EVALUATION_CLIENT_H
