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
// source: google/cloud/compute/vpn_tunnels/v1/vpn_tunnels.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_VPN_TUNNELS_V1_VPN_TUNNELS_CLIENT_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_VPN_TUNNELS_V1_VPN_TUNNELS_CLIENT_H

#include "google/cloud/compute/vpn_tunnels/v1/vpn_tunnels_rest_connection.h"
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
namespace compute_vpn_tunnels_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

///
/// Service for the vpnTunnels resource.
/// https://cloud.google.com/compute/docs/reference/rest/v1/vpnTunnels
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
class VpnTunnelsClient {
 public:
  explicit VpnTunnelsClient(std::shared_ptr<VpnTunnelsConnection> connection,
                            Options opts = {});
  ~VpnTunnelsClient();

  ///@{
  /// @name Copy and move support
  VpnTunnelsClient(VpnTunnelsClient const&) = default;
  VpnTunnelsClient& operator=(VpnTunnelsClient const&) = default;
  VpnTunnelsClient(VpnTunnelsClient&&) = default;
  VpnTunnelsClient& operator=(VpnTunnelsClient&&) = default;
  ///@}

  ///@{
  /// @name Equality
  friend bool operator==(VpnTunnelsClient const& a, VpnTunnelsClient const& b) {
    return a.connection_ == b.connection_;
  }
  friend bool operator!=(VpnTunnelsClient const& a, VpnTunnelsClient const& b) {
    return !(a == b);
  }
  ///@}

  // clang-format off
  ///
  /// Retrieves an aggregated list of VPN tunnels. To prevent failure, Google
  /// recommends that you set the `returnPartialSuccess` parameter to `true`.
  /// https://cloud.google.com/compute/docs/reference/rest/v1/vpnTunnels/aggregatedList
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
  ///     [google.cloud.cpp.compute.v1.VpnTunnelsScopedList], or rather,
  ///     the C++ class generated by Protobuf from that type. Please consult the
  ///     Protobuf documentation for details on the [Protobuf mapping rules].
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.cpp.compute.v1.VpnTunnelsScopedList]: @cloud_cpp_reference_link{google/cloud/compute/v1/internal/common_141.proto#L390}
  /// [google.cloud.cpp.compute.vpn_tunnels.v1.AggregatedListVpnTunnelsRequest]: @cloud_cpp_reference_link{google/cloud/compute/vpn_tunnels/v1/vpn_tunnels.proto#L113}
  ///
  // clang-format on
  StreamRange<std::pair<std::string,
                        google::cloud::cpp::compute::v1::VpnTunnelsScopedList>>
  AggregatedListVpnTunnels(std::string const& project, Options opts = {});

  // clang-format off
  ///
  /// Retrieves an aggregated list of VPN tunnels. To prevent failure, Google
  /// recommends that you set the `returnPartialSuccess` parameter to `true`.
  /// https://cloud.google.com/compute/docs/reference/rest/v1/vpnTunnels/aggregatedList
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.cloud.cpp.compute.vpn_tunnels.v1.AggregatedListVpnTunnelsRequest].
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
  ///     [google.cloud.cpp.compute.v1.VpnTunnelsScopedList], or rather,
  ///     the C++ class generated by Protobuf from that type. Please consult the
  ///     Protobuf documentation for details on the [Protobuf mapping rules].
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.cpp.compute.v1.VpnTunnelsScopedList]: @cloud_cpp_reference_link{google/cloud/compute/v1/internal/common_141.proto#L390}
  /// [google.cloud.cpp.compute.vpn_tunnels.v1.AggregatedListVpnTunnelsRequest]: @cloud_cpp_reference_link{google/cloud/compute/vpn_tunnels/v1/vpn_tunnels.proto#L113}
  ///
  // clang-format on
  StreamRange<std::pair<std::string,
                        google::cloud::cpp::compute::v1::VpnTunnelsScopedList>>
  AggregatedListVpnTunnels(google::cloud::cpp::compute::vpn_tunnels::v1::
                               AggregatedListVpnTunnelsRequest request,
                           Options opts = {});

  // clang-format off
  ///
  /// Deletes the specified VpnTunnel resource.
  /// https://cloud.google.com/compute/docs/reference/rest/v1/vpnTunnels/delete
  ///
  /// @param project  Project ID for this request.
  /// @param region  Name of the region for this request.
  /// @param vpn_tunnel  Name of the VpnTunnel resource to delete.
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
  /// [google.cloud.cpp.compute.vpn_tunnels.v1.DeleteVpnTunnelRequest]: @cloud_cpp_reference_link{google/cloud/compute/vpn_tunnels/v1/vpn_tunnels.proto#L195}
  ///
  // clang-format on
  future<StatusOr<google::cloud::cpp::compute::v1::Operation>> DeleteVpnTunnel(
      std::string const& project, std::string const& region,
      std::string const& vpn_tunnel, Options opts = {});

  StatusOr<google::cloud::cpp::compute::v1::Operation> DeleteVpnTunnel(
      ExperimentalTag, NoAwaitTag, std::string const& project,
      std::string const& region, std::string const& vpn_tunnel,
      Options opts = {});

  // clang-format off
  ///
  /// Deletes the specified VpnTunnel resource.
  /// https://cloud.google.com/compute/docs/reference/rest/v1/vpnTunnels/delete
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.cloud.cpp.compute.vpn_tunnels.v1.DeleteVpnTunnelRequest].
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
  /// [google.cloud.cpp.compute.vpn_tunnels.v1.DeleteVpnTunnelRequest]: @cloud_cpp_reference_link{google/cloud/compute/vpn_tunnels/v1/vpn_tunnels.proto#L195}
  ///
  // clang-format on
  future<StatusOr<google::cloud::cpp::compute::v1::Operation>> DeleteVpnTunnel(
      google::cloud::cpp::compute::vpn_tunnels::v1::
          DeleteVpnTunnelRequest const& request,
      Options opts = {});

  StatusOr<google::cloud::cpp::compute::v1::Operation> DeleteVpnTunnel(
      ExperimentalTag, NoAwaitTag,
      google::cloud::cpp::compute::vpn_tunnels::v1::
          DeleteVpnTunnelRequest const& request,
      Options opts = {});

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>> DeleteVpnTunnel(
      ExperimentalTag,
      google::cloud::cpp::compute::v1::Operation const& operation,
      Options opts = {});

  // clang-format off
  ///
  /// Returns the specified VpnTunnel resource.
  /// https://cloud.google.com/compute/docs/reference/rest/v1/vpnTunnels/get
  ///
  /// @param project  Project ID for this request.
  /// @param region  Name of the region for this request.
  /// @param vpn_tunnel  Name of the VpnTunnel resource to return.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return the result of the RPC. The response message type
  ///     ([google.cloud.cpp.compute.v1.VpnTunnel])
  ///     is mapped to a C++ class using the [Protobuf mapping rules].
  ///     If the request fails, the [`StatusOr`] contains the error details.
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.cpp.compute.v1.VpnTunnel]: @cloud_cpp_reference_link{google/cloud/compute/v1/internal/common_141.proto#L26}
  /// [google.cloud.cpp.compute.vpn_tunnels.v1.GetVpnTunnelRequest]: @cloud_cpp_reference_link{google/cloud/compute/vpn_tunnels/v1/vpn_tunnels.proto#L228}
  ///
  // clang-format on
  StatusOr<google::cloud::cpp::compute::v1::VpnTunnel> GetVpnTunnel(
      std::string const& project, std::string const& region,
      std::string const& vpn_tunnel, Options opts = {});

  // clang-format off
  ///
  /// Returns the specified VpnTunnel resource.
  /// https://cloud.google.com/compute/docs/reference/rest/v1/vpnTunnels/get
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.cloud.cpp.compute.vpn_tunnels.v1.GetVpnTunnelRequest].
  ///     Proto messages are converted to C++ classes by Protobuf, using the
  ///     [Protobuf mapping rules].
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return the result of the RPC. The response message type
  ///     ([google.cloud.cpp.compute.v1.VpnTunnel])
  ///     is mapped to a C++ class using the [Protobuf mapping rules].
  ///     If the request fails, the [`StatusOr`] contains the error details.
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.cpp.compute.v1.VpnTunnel]: @cloud_cpp_reference_link{google/cloud/compute/v1/internal/common_141.proto#L26}
  /// [google.cloud.cpp.compute.vpn_tunnels.v1.GetVpnTunnelRequest]: @cloud_cpp_reference_link{google/cloud/compute/vpn_tunnels/v1/vpn_tunnels.proto#L228}
  ///
  // clang-format on
  StatusOr<google::cloud::cpp::compute::v1::VpnTunnel> GetVpnTunnel(
      google::cloud::cpp::compute::vpn_tunnels::v1::GetVpnTunnelRequest const&
          request,
      Options opts = {});

  // clang-format off
  ///
  /// Creates a VpnTunnel resource in the specified project and region using the
  /// data included in the request.
  /// https://cloud.google.com/compute/docs/reference/rest/v1/vpnTunnels/insert
  ///
  /// @param project  Project ID for this request.
  /// @param region  Name of the region for this request.
  /// @param vpn_tunnel_resource  The VpnTunnel for this request.
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
  /// [google.cloud.cpp.compute.vpn_tunnels.v1.InsertVpnTunnelRequest]: @cloud_cpp_reference_link{google/cloud/compute/vpn_tunnels/v1/vpn_tunnels.proto#L243}
  ///
  // clang-format on
  future<StatusOr<google::cloud::cpp::compute::v1::Operation>> InsertVpnTunnel(
      std::string const& project, std::string const& region,
      google::cloud::cpp::compute::v1::VpnTunnel const& vpn_tunnel_resource,
      Options opts = {});

  StatusOr<google::cloud::cpp::compute::v1::Operation> InsertVpnTunnel(
      ExperimentalTag, NoAwaitTag, std::string const& project,
      std::string const& region,
      google::cloud::cpp::compute::v1::VpnTunnel const& vpn_tunnel_resource,
      Options opts = {});

  // clang-format off
  ///
  /// Creates a VpnTunnel resource in the specified project and region using the
  /// data included in the request.
  /// https://cloud.google.com/compute/docs/reference/rest/v1/vpnTunnels/insert
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.cloud.cpp.compute.vpn_tunnels.v1.InsertVpnTunnelRequest].
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
  /// [google.cloud.cpp.compute.vpn_tunnels.v1.InsertVpnTunnelRequest]: @cloud_cpp_reference_link{google/cloud/compute/vpn_tunnels/v1/vpn_tunnels.proto#L243}
  ///
  // clang-format on
  future<StatusOr<google::cloud::cpp::compute::v1::Operation>> InsertVpnTunnel(
      google::cloud::cpp::compute::vpn_tunnels::v1::
          InsertVpnTunnelRequest const& request,
      Options opts = {});

  StatusOr<google::cloud::cpp::compute::v1::Operation> InsertVpnTunnel(
      ExperimentalTag, NoAwaitTag,
      google::cloud::cpp::compute::vpn_tunnels::v1::
          InsertVpnTunnelRequest const& request,
      Options opts = {});

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>> InsertVpnTunnel(
      ExperimentalTag,
      google::cloud::cpp::compute::v1::Operation const& operation,
      Options opts = {});

  // clang-format off
  ///
  /// Retrieves a list of VpnTunnel resources contained in the specified project
  /// and region.
  /// https://cloud.google.com/compute/docs/reference/rest/v1/vpnTunnels/list
  ///
  /// @param project  Project ID for this request.
  /// @param region  Name of the region for this request.
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
  ///     [google.cloud.cpp.compute.v1.VpnTunnel], or rather,
  ///     the C++ class generated by Protobuf from that type. Please consult the
  ///     Protobuf documentation for details on the [Protobuf mapping rules].
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.cpp.compute.v1.VpnTunnel]: @cloud_cpp_reference_link{google/cloud/compute/v1/internal/common_141.proto#L26}
  /// [google.cloud.cpp.compute.vpn_tunnels.v1.ListVpnTunnelsRequest]: @cloud_cpp_reference_link{google/cloud/compute/vpn_tunnels/v1/vpn_tunnels.proto#L276}
  ///
  // clang-format on
  StreamRange<google::cloud::cpp::compute::v1::VpnTunnel> ListVpnTunnels(
      std::string const& project, std::string const& region, Options opts = {});

  // clang-format off
  ///
  /// Retrieves a list of VpnTunnel resources contained in the specified project
  /// and region.
  /// https://cloud.google.com/compute/docs/reference/rest/v1/vpnTunnels/list
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.cloud.cpp.compute.vpn_tunnels.v1.ListVpnTunnelsRequest].
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
  ///     [google.cloud.cpp.compute.v1.VpnTunnel], or rather,
  ///     the C++ class generated by Protobuf from that type. Please consult the
  ///     Protobuf documentation for details on the [Protobuf mapping rules].
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.cpp.compute.v1.VpnTunnel]: @cloud_cpp_reference_link{google/cloud/compute/v1/internal/common_141.proto#L26}
  /// [google.cloud.cpp.compute.vpn_tunnels.v1.ListVpnTunnelsRequest]: @cloud_cpp_reference_link{google/cloud/compute/vpn_tunnels/v1/vpn_tunnels.proto#L276}
  ///
  // clang-format on
  StreamRange<google::cloud::cpp::compute::v1::VpnTunnel> ListVpnTunnels(
      google::cloud::cpp::compute::vpn_tunnels::v1::ListVpnTunnelsRequest
          request,
      Options opts = {});

  // clang-format off
  ///
  /// Sets the labels on a VpnTunnel. To learn more about labels, read the
  /// Labeling Resources documentation.
  /// https://cloud.google.com/compute/docs/reference/rest/v1/vpnTunnels/setLabels
  ///
  /// @param project  Project ID for this request.
  /// @param region  The region for this request.
  /// @param resource  Name or id of the resource for this request.
  /// @param region_set_labels_request_resource  The RegionSetLabelsRequest for this request.
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
  /// [google.cloud.cpp.compute.vpn_tunnels.v1.SetLabelsRequest]: @cloud_cpp_reference_link{google/cloud/compute/vpn_tunnels/v1/vpn_tunnels.proto#L348}
  ///
  // clang-format on
  future<StatusOr<google::cloud::cpp::compute::v1::Operation>> SetLabels(
      std::string const& project, std::string const& region,
      std::string const& resource,
      google::cloud::cpp::compute::v1::RegionSetLabelsRequest const&
          region_set_labels_request_resource,
      Options opts = {});

  StatusOr<google::cloud::cpp::compute::v1::Operation> SetLabels(
      ExperimentalTag, NoAwaitTag, std::string const& project,
      std::string const& region, std::string const& resource,
      google::cloud::cpp::compute::v1::RegionSetLabelsRequest const&
          region_set_labels_request_resource,
      Options opts = {});

  // clang-format off
  ///
  /// Sets the labels on a VpnTunnel. To learn more about labels, read the
  /// Labeling Resources documentation.
  /// https://cloud.google.com/compute/docs/reference/rest/v1/vpnTunnels/setLabels
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.cloud.cpp.compute.vpn_tunnels.v1.SetLabelsRequest].
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
  /// [google.cloud.cpp.compute.vpn_tunnels.v1.SetLabelsRequest]: @cloud_cpp_reference_link{google/cloud/compute/vpn_tunnels/v1/vpn_tunnels.proto#L348}
  ///
  // clang-format on
  future<StatusOr<google::cloud::cpp::compute::v1::Operation>> SetLabels(
      google::cloud::cpp::compute::vpn_tunnels::v1::SetLabelsRequest const&
          request,
      Options opts = {});

  StatusOr<google::cloud::cpp::compute::v1::Operation> SetLabels(
      ExperimentalTag, NoAwaitTag,
      google::cloud::cpp::compute::vpn_tunnels::v1::SetLabelsRequest const&
          request,
      Options opts = {});

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>> SetLabels(
      ExperimentalTag,
      google::cloud::cpp::compute::v1::Operation const& operation,
      Options opts = {});

 private:
  std::shared_ptr<VpnTunnelsConnection> connection_;
  Options options_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_vpn_tunnels_v1
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_VPN_TUNNELS_V1_VPN_TUNNELS_CLIENT_H
