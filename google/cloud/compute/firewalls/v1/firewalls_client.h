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
// source: google/cloud/compute/firewalls/v1/firewalls.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_FIREWALLS_V1_FIREWALLS_CLIENT_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_FIREWALLS_V1_FIREWALLS_CLIENT_H

#include "google/cloud/compute/firewalls/v1/firewalls_rest_connection.h"
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
namespace compute_firewalls_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

///
/// Service for the firewalls resource.
/// https://cloud.google.com/compute/docs/reference/rest/v1/firewalls
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
class FirewallsClient {
 public:
  explicit FirewallsClient(std::shared_ptr<FirewallsConnection> connection,
                           Options opts = {});
  ~FirewallsClient();

  ///@{
  /// @name Copy and move support
  FirewallsClient(FirewallsClient const&) = default;
  FirewallsClient& operator=(FirewallsClient const&) = default;
  FirewallsClient(FirewallsClient&&) = default;
  FirewallsClient& operator=(FirewallsClient&&) = default;
  ///@}

  ///@{
  /// @name Equality
  friend bool operator==(FirewallsClient const& a, FirewallsClient const& b) {
    return a.connection_ == b.connection_;
  }
  friend bool operator!=(FirewallsClient const& a, FirewallsClient const& b) {
    return !(a == b);
  }
  ///@}

  // clang-format off
  ///
  /// Deletes the specified firewall.
  /// https://cloud.google.com/compute/docs/reference/rest/v1/firewalls/delete
  ///
  /// @param project  Project ID for this request.
  /// @param firewall  Name of the firewall rule to delete.
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
  /// [google.cloud.cpp.compute.firewalls.v1.DeleteFirewallRequest]: @cloud_cpp_reference_link{google/cloud/compute/firewalls/v1/firewalls.proto#L115}
  ///
  // clang-format on
  future<StatusOr<google::cloud::cpp::compute::v1::Operation>> DeleteFirewall(
      std::string const& project, std::string const& firewall,
      Options opts = {});

  StatusOr<google::cloud::cpp::compute::v1::Operation> DeleteFirewall(
      ExperimentalTag, NoAwaitTag, std::string const& project,
      std::string const& firewall, Options opts = {});

  // clang-format off
  ///
  /// Deletes the specified firewall.
  /// https://cloud.google.com/compute/docs/reference/rest/v1/firewalls/delete
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.cloud.cpp.compute.firewalls.v1.DeleteFirewallRequest].
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
  /// [google.cloud.cpp.compute.firewalls.v1.DeleteFirewallRequest]: @cloud_cpp_reference_link{google/cloud/compute/firewalls/v1/firewalls.proto#L115}
  ///
  // clang-format on
  future<StatusOr<google::cloud::cpp::compute::v1::Operation>> DeleteFirewall(
      google::cloud::cpp::compute::firewalls::v1::DeleteFirewallRequest const&
          request,
      Options opts = {});

  StatusOr<google::cloud::cpp::compute::v1::Operation> DeleteFirewall(
      ExperimentalTag, NoAwaitTag,
      google::cloud::cpp::compute::firewalls::v1::DeleteFirewallRequest const&
          request,
      Options opts = {});

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>> DeleteFirewall(
      ExperimentalTag,
      google::cloud::cpp::compute::v1::Operation const& operation,
      Options opts = {});

  // clang-format off
  ///
  /// Returns the specified firewall.
  /// https://cloud.google.com/compute/docs/reference/rest/v1/firewalls/get
  ///
  /// @param project  Project ID for this request.
  /// @param firewall  Name of the firewall rule to return.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return the result of the RPC. The response message type
  ///     ([google.cloud.cpp.compute.v1.Firewall])
  ///     is mapped to a C++ class using the [Protobuf mapping rules].
  ///     If the request fails, the [`StatusOr`] contains the error details.
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.cpp.compute.firewalls.v1.GetFirewallRequest]: @cloud_cpp_reference_link{google/cloud/compute/firewalls/v1/firewalls.proto#L141}
  /// [google.cloud.cpp.compute.v1.Firewall]: @cloud_cpp_reference_link{google/cloud/compute/v1/internal/common_034.proto#L27}
  ///
  // clang-format on
  StatusOr<google::cloud::cpp::compute::v1::Firewall> GetFirewall(
      std::string const& project, std::string const& firewall,
      Options opts = {});

  // clang-format off
  ///
  /// Returns the specified firewall.
  /// https://cloud.google.com/compute/docs/reference/rest/v1/firewalls/get
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.cloud.cpp.compute.firewalls.v1.GetFirewallRequest].
  ///     Proto messages are converted to C++ classes by Protobuf, using the
  ///     [Protobuf mapping rules].
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return the result of the RPC. The response message type
  ///     ([google.cloud.cpp.compute.v1.Firewall])
  ///     is mapped to a C++ class using the [Protobuf mapping rules].
  ///     If the request fails, the [`StatusOr`] contains the error details.
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.cpp.compute.firewalls.v1.GetFirewallRequest]: @cloud_cpp_reference_link{google/cloud/compute/firewalls/v1/firewalls.proto#L141}
  /// [google.cloud.cpp.compute.v1.Firewall]: @cloud_cpp_reference_link{google/cloud/compute/v1/internal/common_034.proto#L27}
  ///
  // clang-format on
  StatusOr<google::cloud::cpp::compute::v1::Firewall> GetFirewall(
      google::cloud::cpp::compute::firewalls::v1::GetFirewallRequest const&
          request,
      Options opts = {});

  // clang-format off
  ///
  /// Creates a firewall rule in the specified project using the data included in
  /// the request.
  /// https://cloud.google.com/compute/docs/reference/rest/v1/firewalls/insert
  ///
  /// @param project  Project ID for this request.
  /// @param firewall_resource  The Firewall for this request.
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
  /// [google.cloud.cpp.compute.firewalls.v1.InsertFirewallRequest]: @cloud_cpp_reference_link{google/cloud/compute/firewalls/v1/firewalls.proto#L152}
  ///
  // clang-format on
  future<StatusOr<google::cloud::cpp::compute::v1::Operation>> InsertFirewall(
      std::string const& project,
      google::cloud::cpp::compute::v1::Firewall const& firewall_resource,
      Options opts = {});

  StatusOr<google::cloud::cpp::compute::v1::Operation> InsertFirewall(
      ExperimentalTag, NoAwaitTag, std::string const& project,
      google::cloud::cpp::compute::v1::Firewall const& firewall_resource,
      Options opts = {});

  // clang-format off
  ///
  /// Creates a firewall rule in the specified project using the data included in
  /// the request.
  /// https://cloud.google.com/compute/docs/reference/rest/v1/firewalls/insert
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.cloud.cpp.compute.firewalls.v1.InsertFirewallRequest].
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
  /// [google.cloud.cpp.compute.firewalls.v1.InsertFirewallRequest]: @cloud_cpp_reference_link{google/cloud/compute/firewalls/v1/firewalls.proto#L152}
  ///
  // clang-format on
  future<StatusOr<google::cloud::cpp::compute::v1::Operation>> InsertFirewall(
      google::cloud::cpp::compute::firewalls::v1::InsertFirewallRequest const&
          request,
      Options opts = {});

  StatusOr<google::cloud::cpp::compute::v1::Operation> InsertFirewall(
      ExperimentalTag, NoAwaitTag,
      google::cloud::cpp::compute::firewalls::v1::InsertFirewallRequest const&
          request,
      Options opts = {});

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>> InsertFirewall(
      ExperimentalTag,
      google::cloud::cpp::compute::v1::Operation const& operation,
      Options opts = {});

  // clang-format off
  ///
  /// Retrieves the list of firewall rules available to the specified project.
  /// https://cloud.google.com/compute/docs/reference/rest/v1/firewalls/list
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
  ///     [google.cloud.cpp.compute.v1.Firewall], or rather,
  ///     the C++ class generated by Protobuf from that type. Please consult the
  ///     Protobuf documentation for details on the [Protobuf mapping rules].
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.cpp.compute.firewalls.v1.ListFirewallsRequest]: @cloud_cpp_reference_link{google/cloud/compute/firewalls/v1/firewalls.proto#L178}
  /// [google.cloud.cpp.compute.v1.Firewall]: @cloud_cpp_reference_link{google/cloud/compute/v1/internal/common_034.proto#L27}
  ///
  // clang-format on
  StreamRange<google::cloud::cpp::compute::v1::Firewall> ListFirewalls(
      std::string const& project, Options opts = {});

  // clang-format off
  ///
  /// Retrieves the list of firewall rules available to the specified project.
  /// https://cloud.google.com/compute/docs/reference/rest/v1/firewalls/list
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.cloud.cpp.compute.firewalls.v1.ListFirewallsRequest].
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
  ///     [google.cloud.cpp.compute.v1.Firewall], or rather,
  ///     the C++ class generated by Protobuf from that type. Please consult the
  ///     Protobuf documentation for details on the [Protobuf mapping rules].
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.cpp.compute.firewalls.v1.ListFirewallsRequest]: @cloud_cpp_reference_link{google/cloud/compute/firewalls/v1/firewalls.proto#L178}
  /// [google.cloud.cpp.compute.v1.Firewall]: @cloud_cpp_reference_link{google/cloud/compute/v1/internal/common_034.proto#L27}
  ///
  // clang-format on
  StreamRange<google::cloud::cpp::compute::v1::Firewall> ListFirewalls(
      google::cloud::cpp::compute::firewalls::v1::ListFirewallsRequest request,
      Options opts = {});

  // clang-format off
  ///
  /// Updates the specified firewall rule with the data included in the request.
  /// This method supports PATCH semantics and uses the JSON merge patch format
  /// and processing rules.
  /// https://cloud.google.com/compute/docs/reference/rest/v1/firewalls/patch
  ///
  /// @param project  Project ID for this request.
  /// @param firewall  Name of the firewall rule to patch.
  /// @param firewall_resource  The Firewall for this request.
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
  /// [google.cloud.cpp.compute.firewalls.v1.PatchFirewallRequest]: @cloud_cpp_reference_link{google/cloud/compute/firewalls/v1/firewalls.proto#L246}
  ///
  // clang-format on
  future<StatusOr<google::cloud::cpp::compute::v1::Operation>> PatchFirewall(
      std::string const& project, std::string const& firewall,
      google::cloud::cpp::compute::v1::Firewall const& firewall_resource,
      Options opts = {});

  StatusOr<google::cloud::cpp::compute::v1::Operation> PatchFirewall(
      ExperimentalTag, NoAwaitTag, std::string const& project,
      std::string const& firewall,
      google::cloud::cpp::compute::v1::Firewall const& firewall_resource,
      Options opts = {});

  // clang-format off
  ///
  /// Updates the specified firewall rule with the data included in the request.
  /// This method supports PATCH semantics and uses the JSON merge patch format
  /// and processing rules.
  /// https://cloud.google.com/compute/docs/reference/rest/v1/firewalls/patch
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.cloud.cpp.compute.firewalls.v1.PatchFirewallRequest].
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
  /// [google.cloud.cpp.compute.firewalls.v1.PatchFirewallRequest]: @cloud_cpp_reference_link{google/cloud/compute/firewalls/v1/firewalls.proto#L246}
  ///
  // clang-format on
  future<StatusOr<google::cloud::cpp::compute::v1::Operation>> PatchFirewall(
      google::cloud::cpp::compute::firewalls::v1::PatchFirewallRequest const&
          request,
      Options opts = {});

  StatusOr<google::cloud::cpp::compute::v1::Operation> PatchFirewall(
      ExperimentalTag, NoAwaitTag,
      google::cloud::cpp::compute::firewalls::v1::PatchFirewallRequest const&
          request,
      Options opts = {});

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>> PatchFirewall(
      ExperimentalTag,
      google::cloud::cpp::compute::v1::Operation const& operation,
      Options opts = {});

  // clang-format off
  ///
  /// Updates the specified firewall rule with the data included in the request.
  /// Note that all fields will be updated if using PUT, even fields that are not
  /// specified. To update individual fields, please use PATCH instead.
  /// https://cloud.google.com/compute/docs/reference/rest/v1/firewalls/update
  ///
  /// @param project  Project ID for this request.
  /// @param firewall  Name of the firewall rule to update.
  /// @param firewall_resource  The Firewall for this request.
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
  /// [google.cloud.cpp.compute.firewalls.v1.UpdateFirewallRequest]: @cloud_cpp_reference_link{google/cloud/compute/firewalls/v1/firewalls.proto#L276}
  ///
  // clang-format on
  future<StatusOr<google::cloud::cpp::compute::v1::Operation>> UpdateFirewall(
      std::string const& project, std::string const& firewall,
      google::cloud::cpp::compute::v1::Firewall const& firewall_resource,
      Options opts = {});

  StatusOr<google::cloud::cpp::compute::v1::Operation> UpdateFirewall(
      ExperimentalTag, NoAwaitTag, std::string const& project,
      std::string const& firewall,
      google::cloud::cpp::compute::v1::Firewall const& firewall_resource,
      Options opts = {});

  // clang-format off
  ///
  /// Updates the specified firewall rule with the data included in the request.
  /// Note that all fields will be updated if using PUT, even fields that are not
  /// specified. To update individual fields, please use PATCH instead.
  /// https://cloud.google.com/compute/docs/reference/rest/v1/firewalls/update
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.cloud.cpp.compute.firewalls.v1.UpdateFirewallRequest].
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
  /// [google.cloud.cpp.compute.firewalls.v1.UpdateFirewallRequest]: @cloud_cpp_reference_link{google/cloud/compute/firewalls/v1/firewalls.proto#L276}
  ///
  // clang-format on
  future<StatusOr<google::cloud::cpp::compute::v1::Operation>> UpdateFirewall(
      google::cloud::cpp::compute::firewalls::v1::UpdateFirewallRequest const&
          request,
      Options opts = {});

  StatusOr<google::cloud::cpp::compute::v1::Operation> UpdateFirewall(
      ExperimentalTag, NoAwaitTag,
      google::cloud::cpp::compute::firewalls::v1::UpdateFirewallRequest const&
          request,
      Options opts = {});

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>> UpdateFirewall(
      ExperimentalTag,
      google::cloud::cpp::compute::v1::Operation const& operation,
      Options opts = {});

 private:
  std::shared_ptr<FirewallsConnection> connection_;
  Options options_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_firewalls_v1
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_FIREWALLS_V1_FIREWALLS_CLIENT_H
