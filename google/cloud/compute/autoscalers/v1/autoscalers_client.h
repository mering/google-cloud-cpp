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
// source: google/cloud/compute/autoscalers/v1/autoscalers.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_AUTOSCALERS_V1_AUTOSCALERS_CLIENT_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_AUTOSCALERS_V1_AUTOSCALERS_CLIENT_H

#include "google/cloud/compute/autoscalers/v1/autoscalers_rest_connection.h"
#include "google/cloud/experimental_tag.h"
#include "google/cloud/future.h"
#include "google/cloud/no_await_tag.h"
#include "google/cloud/options.h"
#include "google/cloud/polling_policy.h"
#include "google/cloud/status_or.h"
#include "google/cloud/version.h"
#include <map>
#include <memory>
#include <string>

namespace google {
namespace cloud {
namespace compute_autoscalers_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

///
/// Service for the autoscalers resource.
/// https://cloud.google.com/compute/docs/reference/rest/v1/autoscalers
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
class AutoscalersClient {
 public:
  explicit AutoscalersClient(std::shared_ptr<AutoscalersConnection> connection,
                             Options opts = {});
  ~AutoscalersClient();

  ///@{
  /// @name Copy and move support
  AutoscalersClient(AutoscalersClient const&) = default;
  AutoscalersClient& operator=(AutoscalersClient const&) = default;
  AutoscalersClient(AutoscalersClient&&) = default;
  AutoscalersClient& operator=(AutoscalersClient&&) = default;
  ///@}

  ///@{
  /// @name Equality
  friend bool operator==(AutoscalersClient const& a,
                         AutoscalersClient const& b) {
    return a.connection_ == b.connection_;
  }
  friend bool operator!=(AutoscalersClient const& a,
                         AutoscalersClient const& b) {
    return !(a == b);
  }
  ///@}

  // clang-format off
  ///
  /// Retrieves an aggregated list of autoscalers. To prevent failure, Google
  /// recommends that you set the `returnPartialSuccess` parameter to `true`.
  /// https://cloud.google.com/compute/docs/reference/rest/v1/autoscalers/aggregatedList
  ///
  /// @param project  Project ID for this request.
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
  ///     [google.cloud.cpp.compute.v1.AutoscalersScopedList], or rather,
  ///     the C++ class generated by Protobuf from that type. Please consult the
  ///     Protobuf documentation for details on the [Protobuf mapping rules].
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.cpp.compute.autoscalers.v1.AggregatedListAutoscalersRequest]: @cloud_cpp_reference_link{google/cloud/compute/autoscalers/v1/autoscalers.proto#L125}
  /// [google.cloud.cpp.compute.v1.AutoscalersScopedList]: @cloud_cpp_reference_link{google/cloud/compute/v1/internal/common_009.proto#L243}
  ///
  // clang-format on
  StreamRange<std::pair<std::string,
                        google::cloud::cpp::compute::v1::AutoscalersScopedList>>
  AggregatedListAutoscalers(std::string const& project, Options opts = {});

  // clang-format off
  ///
  /// Retrieves an aggregated list of autoscalers. To prevent failure, Google
  /// recommends that you set the `returnPartialSuccess` parameter to `true`.
  /// https://cloud.google.com/compute/docs/reference/rest/v1/autoscalers/aggregatedList
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.cloud.cpp.compute.autoscalers.v1.AggregatedListAutoscalersRequest].
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
  ///     [google.cloud.cpp.compute.v1.AutoscalersScopedList], or rather,
  ///     the C++ class generated by Protobuf from that type. Please consult the
  ///     Protobuf documentation for details on the [Protobuf mapping rules].
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.cpp.compute.autoscalers.v1.AggregatedListAutoscalersRequest]: @cloud_cpp_reference_link{google/cloud/compute/autoscalers/v1/autoscalers.proto#L125}
  /// [google.cloud.cpp.compute.v1.AutoscalersScopedList]: @cloud_cpp_reference_link{google/cloud/compute/v1/internal/common_009.proto#L243}
  ///
  // clang-format on
  StreamRange<std::pair<std::string,
                        google::cloud::cpp::compute::v1::AutoscalersScopedList>>
  AggregatedListAutoscalers(google::cloud::cpp::compute::autoscalers::v1::
                                AggregatedListAutoscalersRequest request,
                            Options opts = {});

  // clang-format off
  ///
  /// Deletes the specified autoscaler.
  /// https://cloud.google.com/compute/docs/reference/rest/v1/autoscalers/delete
  ///
  /// @param project  Project ID for this request.
  /// @param zone  Name of the zone for this request.
  /// @param autoscaler  Name of the autoscaler to delete.
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
  /// [google.cloud.cpp.compute.autoscalers.v1.DeleteAutoscalerRequest]: @cloud_cpp_reference_link{google/cloud/compute/autoscalers/v1/autoscalers.proto#L207}
  ///
  // clang-format on
  future<StatusOr<google::cloud::cpp::compute::v1::Operation>> DeleteAutoscaler(
      std::string const& project, std::string const& zone,
      std::string const& autoscaler, Options opts = {});

  StatusOr<google::cloud::cpp::compute::v1::Operation> DeleteAutoscaler(
      ExperimentalTag, NoAwaitTag, std::string const& project,
      std::string const& zone, std::string const& autoscaler,
      Options opts = {});

  // clang-format off
  ///
  /// Deletes the specified autoscaler.
  /// https://cloud.google.com/compute/docs/reference/rest/v1/autoscalers/delete
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.cloud.cpp.compute.autoscalers.v1.DeleteAutoscalerRequest].
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
  /// [google.cloud.cpp.compute.autoscalers.v1.DeleteAutoscalerRequest]: @cloud_cpp_reference_link{google/cloud/compute/autoscalers/v1/autoscalers.proto#L207}
  ///
  // clang-format on
  future<StatusOr<google::cloud::cpp::compute::v1::Operation>> DeleteAutoscaler(
      google::cloud::cpp::compute::autoscalers::v1::
          DeleteAutoscalerRequest const& request,
      Options opts = {});

  StatusOr<google::cloud::cpp::compute::v1::Operation> DeleteAutoscaler(
      ExperimentalTag, NoAwaitTag,
      google::cloud::cpp::compute::autoscalers::v1::
          DeleteAutoscalerRequest const& request,
      Options opts = {});

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>> DeleteAutoscaler(
      ExperimentalTag,
      google::cloud::cpp::compute::v1::Operation const& operation,
      Options opts = {});

  // clang-format off
  ///
  /// Returns the specified autoscaler resource.
  /// https://cloud.google.com/compute/docs/reference/rest/v1/autoscalers/get
  ///
  /// @param project  Project ID for this request.
  /// @param zone  Name of the zone for this request.
  /// @param autoscaler  Name of the autoscaler to return.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return the result of the RPC. The response message type
  ///     ([google.cloud.cpp.compute.v1.Autoscaler])
  ///     is mapped to a C++ class using the [Protobuf mapping rules].
  ///     If the request fails, the [`StatusOr`] contains the error details.
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.cpp.compute.autoscalers.v1.GetAutoscalerRequest]: @cloud_cpp_reference_link{google/cloud/compute/autoscalers/v1/autoscalers.proto#L240}
  /// [google.cloud.cpp.compute.v1.Autoscaler]: @cloud_cpp_reference_link{google/cloud/compute/v1/internal/common_008.proto#L34}
  ///
  // clang-format on
  StatusOr<google::cloud::cpp::compute::v1::Autoscaler> GetAutoscaler(
      std::string const& project, std::string const& zone,
      std::string const& autoscaler, Options opts = {});

  // clang-format off
  ///
  /// Returns the specified autoscaler resource.
  /// https://cloud.google.com/compute/docs/reference/rest/v1/autoscalers/get
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.cloud.cpp.compute.autoscalers.v1.GetAutoscalerRequest].
  ///     Proto messages are converted to C++ classes by Protobuf, using the
  ///     [Protobuf mapping rules].
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return the result of the RPC. The response message type
  ///     ([google.cloud.cpp.compute.v1.Autoscaler])
  ///     is mapped to a C++ class using the [Protobuf mapping rules].
  ///     If the request fails, the [`StatusOr`] contains the error details.
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.cpp.compute.autoscalers.v1.GetAutoscalerRequest]: @cloud_cpp_reference_link{google/cloud/compute/autoscalers/v1/autoscalers.proto#L240}
  /// [google.cloud.cpp.compute.v1.Autoscaler]: @cloud_cpp_reference_link{google/cloud/compute/v1/internal/common_008.proto#L34}
  ///
  // clang-format on
  StatusOr<google::cloud::cpp::compute::v1::Autoscaler> GetAutoscaler(
      google::cloud::cpp::compute::autoscalers::v1::GetAutoscalerRequest const&
          request,
      Options opts = {});

  // clang-format off
  ///
  /// Creates an autoscaler in the specified project using the data included in
  /// the request.
  /// https://cloud.google.com/compute/docs/reference/rest/v1/autoscalers/insert
  ///
  /// @param project  Project ID for this request.
  /// @param zone  Name of the zone for this request.
  /// @param autoscaler_resource  The Autoscaler for this request.
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
  /// [google.cloud.cpp.compute.autoscalers.v1.InsertAutoscalerRequest]: @cloud_cpp_reference_link{google/cloud/compute/autoscalers/v1/autoscalers.proto#L254}
  ///
  // clang-format on
  future<StatusOr<google::cloud::cpp::compute::v1::Operation>> InsertAutoscaler(
      std::string const& project, std::string const& zone,
      google::cloud::cpp::compute::v1::Autoscaler const& autoscaler_resource,
      Options opts = {});

  StatusOr<google::cloud::cpp::compute::v1::Operation> InsertAutoscaler(
      ExperimentalTag, NoAwaitTag, std::string const& project,
      std::string const& zone,
      google::cloud::cpp::compute::v1::Autoscaler const& autoscaler_resource,
      Options opts = {});

  // clang-format off
  ///
  /// Creates an autoscaler in the specified project using the data included in
  /// the request.
  /// https://cloud.google.com/compute/docs/reference/rest/v1/autoscalers/insert
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.cloud.cpp.compute.autoscalers.v1.InsertAutoscalerRequest].
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
  /// [google.cloud.cpp.compute.autoscalers.v1.InsertAutoscalerRequest]: @cloud_cpp_reference_link{google/cloud/compute/autoscalers/v1/autoscalers.proto#L254}
  ///
  // clang-format on
  future<StatusOr<google::cloud::cpp::compute::v1::Operation>> InsertAutoscaler(
      google::cloud::cpp::compute::autoscalers::v1::
          InsertAutoscalerRequest const& request,
      Options opts = {});

  StatusOr<google::cloud::cpp::compute::v1::Operation> InsertAutoscaler(
      ExperimentalTag, NoAwaitTag,
      google::cloud::cpp::compute::autoscalers::v1::
          InsertAutoscalerRequest const& request,
      Options opts = {});

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>> InsertAutoscaler(
      ExperimentalTag,
      google::cloud::cpp::compute::v1::Operation const& operation,
      Options opts = {});

  // clang-format off
  ///
  /// Retrieves a list of autoscalers contained within the specified zone.
  /// https://cloud.google.com/compute/docs/reference/rest/v1/autoscalers/list
  ///
  /// @param project  Project ID for this request.
  /// @param zone  Name of the zone for this request.
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
  ///     [google.cloud.cpp.compute.v1.Autoscaler], or rather,
  ///     the C++ class generated by Protobuf from that type. Please consult the
  ///     Protobuf documentation for details on the [Protobuf mapping rules].
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.cpp.compute.autoscalers.v1.ListAutoscalersRequest]: @cloud_cpp_reference_link{google/cloud/compute/autoscalers/v1/autoscalers.proto#L287}
  /// [google.cloud.cpp.compute.v1.Autoscaler]: @cloud_cpp_reference_link{google/cloud/compute/v1/internal/common_008.proto#L34}
  ///
  // clang-format on
  StreamRange<google::cloud::cpp::compute::v1::Autoscaler> ListAutoscalers(
      std::string const& project, std::string const& zone, Options opts = {});

  // clang-format off
  ///
  /// Retrieves a list of autoscalers contained within the specified zone.
  /// https://cloud.google.com/compute/docs/reference/rest/v1/autoscalers/list
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.cloud.cpp.compute.autoscalers.v1.ListAutoscalersRequest].
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
  ///     [google.cloud.cpp.compute.v1.Autoscaler], or rather,
  ///     the C++ class generated by Protobuf from that type. Please consult the
  ///     Protobuf documentation for details on the [Protobuf mapping rules].
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.cpp.compute.autoscalers.v1.ListAutoscalersRequest]: @cloud_cpp_reference_link{google/cloud/compute/autoscalers/v1/autoscalers.proto#L287}
  /// [google.cloud.cpp.compute.v1.Autoscaler]: @cloud_cpp_reference_link{google/cloud/compute/v1/internal/common_008.proto#L34}
  ///
  // clang-format on
  StreamRange<google::cloud::cpp::compute::v1::Autoscaler> ListAutoscalers(
      google::cloud::cpp::compute::autoscalers::v1::ListAutoscalersRequest
          request,
      Options opts = {});

  // clang-format off
  ///
  /// Updates an autoscaler in the specified project using the data included in
  /// the request. This method supports PATCH semantics and uses the JSON merge
  /// patch format and processing rules.
  /// https://cloud.google.com/compute/docs/reference/rest/v1/autoscalers/patch
  ///
  /// @param project  Project ID for this request.
  /// @param zone  Name of the zone for this request.
  /// @param autoscaler_resource  The Autoscaler for this request.
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
  /// [google.cloud.cpp.compute.autoscalers.v1.PatchAutoscalerRequest]: @cloud_cpp_reference_link{google/cloud/compute/autoscalers/v1/autoscalers.proto#L358}
  ///
  // clang-format on
  future<StatusOr<google::cloud::cpp::compute::v1::Operation>> PatchAutoscaler(
      std::string const& project, std::string const& zone,
      google::cloud::cpp::compute::v1::Autoscaler const& autoscaler_resource,
      Options opts = {});

  StatusOr<google::cloud::cpp::compute::v1::Operation> PatchAutoscaler(
      ExperimentalTag, NoAwaitTag, std::string const& project,
      std::string const& zone,
      google::cloud::cpp::compute::v1::Autoscaler const& autoscaler_resource,
      Options opts = {});

  // clang-format off
  ///
  /// Updates an autoscaler in the specified project using the data included in
  /// the request. This method supports PATCH semantics and uses the JSON merge
  /// patch format and processing rules.
  /// https://cloud.google.com/compute/docs/reference/rest/v1/autoscalers/patch
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.cloud.cpp.compute.autoscalers.v1.PatchAutoscalerRequest].
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
  /// [google.cloud.cpp.compute.autoscalers.v1.PatchAutoscalerRequest]: @cloud_cpp_reference_link{google/cloud/compute/autoscalers/v1/autoscalers.proto#L358}
  ///
  // clang-format on
  future<StatusOr<google::cloud::cpp::compute::v1::Operation>> PatchAutoscaler(
      google::cloud::cpp::compute::autoscalers::v1::
          PatchAutoscalerRequest const& request,
      Options opts = {});

  StatusOr<google::cloud::cpp::compute::v1::Operation> PatchAutoscaler(
      ExperimentalTag, NoAwaitTag,
      google::cloud::cpp::compute::autoscalers::v1::
          PatchAutoscalerRequest const& request,
      Options opts = {});

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>> PatchAutoscaler(
      ExperimentalTag,
      google::cloud::cpp::compute::v1::Operation const& operation,
      Options opts = {});

  // clang-format off
  ///
  /// Updates an autoscaler in the specified project using the data included in
  /// the request.
  /// https://cloud.google.com/compute/docs/reference/rest/v1/autoscalers/update
  ///
  /// @param project  Project ID for this request.
  /// @param zone  Name of the zone for this request.
  /// @param autoscaler_resource  The Autoscaler for this request.
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
  /// [google.cloud.cpp.compute.autoscalers.v1.UpdateAutoscalerRequest]: @cloud_cpp_reference_link{google/cloud/compute/autoscalers/v1/autoscalers.proto#L394}
  ///
  // clang-format on
  future<StatusOr<google::cloud::cpp::compute::v1::Operation>> UpdateAutoscaler(
      std::string const& project, std::string const& zone,
      google::cloud::cpp::compute::v1::Autoscaler const& autoscaler_resource,
      Options opts = {});

  StatusOr<google::cloud::cpp::compute::v1::Operation> UpdateAutoscaler(
      ExperimentalTag, NoAwaitTag, std::string const& project,
      std::string const& zone,
      google::cloud::cpp::compute::v1::Autoscaler const& autoscaler_resource,
      Options opts = {});

  // clang-format off
  ///
  /// Updates an autoscaler in the specified project using the data included in
  /// the request.
  /// https://cloud.google.com/compute/docs/reference/rest/v1/autoscalers/update
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.cloud.cpp.compute.autoscalers.v1.UpdateAutoscalerRequest].
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
  /// [google.cloud.cpp.compute.autoscalers.v1.UpdateAutoscalerRequest]: @cloud_cpp_reference_link{google/cloud/compute/autoscalers/v1/autoscalers.proto#L394}
  ///
  // clang-format on
  future<StatusOr<google::cloud::cpp::compute::v1::Operation>> UpdateAutoscaler(
      google::cloud::cpp::compute::autoscalers::v1::
          UpdateAutoscalerRequest const& request,
      Options opts = {});

  StatusOr<google::cloud::cpp::compute::v1::Operation> UpdateAutoscaler(
      ExperimentalTag, NoAwaitTag,
      google::cloud::cpp::compute::autoscalers::v1::
          UpdateAutoscalerRequest const& request,
      Options opts = {});

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>> UpdateAutoscaler(
      ExperimentalTag,
      google::cloud::cpp::compute::v1::Operation const& operation,
      Options opts = {});

 private:
  std::shared_ptr<AutoscalersConnection> connection_;
  Options options_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_autoscalers_v1
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_AUTOSCALERS_V1_AUTOSCALERS_CLIENT_H
