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
// source:
// google/cloud/compute/global_forwarding_rules/v1/global_forwarding_rules.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_GLOBAL_FORWARDING_RULES_V1_GLOBAL_FORWARDING_RULES_CLIENT_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_GLOBAL_FORWARDING_RULES_V1_GLOBAL_FORWARDING_RULES_CLIENT_H

#include "google/cloud/compute/global_forwarding_rules/v1/global_forwarding_rules_rest_connection.h"
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
namespace compute_global_forwarding_rules_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

///
/// Service for the globalForwardingRules resource.
/// https://cloud.google.com/compute/docs/reference/rest/v1/globalForwardingRules
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
class GlobalForwardingRulesClient {
 public:
  explicit GlobalForwardingRulesClient(
      std::shared_ptr<GlobalForwardingRulesConnection> connection,
      Options opts = {});
  ~GlobalForwardingRulesClient();

  ///@{
  /// @name Copy and move support
  GlobalForwardingRulesClient(GlobalForwardingRulesClient const&) = default;
  GlobalForwardingRulesClient& operator=(GlobalForwardingRulesClient const&) =
      default;
  GlobalForwardingRulesClient(GlobalForwardingRulesClient&&) = default;
  GlobalForwardingRulesClient& operator=(GlobalForwardingRulesClient&&) =
      default;
  ///@}

  ///@{
  /// @name Equality
  friend bool operator==(GlobalForwardingRulesClient const& a,
                         GlobalForwardingRulesClient const& b) {
    return a.connection_ == b.connection_;
  }
  friend bool operator!=(GlobalForwardingRulesClient const& a,
                         GlobalForwardingRulesClient const& b) {
    return !(a == b);
  }
  ///@}

  // clang-format off
  ///
  /// Deletes the specified GlobalForwardingRule resource.
  /// https://cloud.google.com/compute/docs/reference/rest/v1/globalForwardingRules/delete
  ///
  /// @param project  Project ID for this request.
  /// @param forwarding_rule  Name of the ForwardingRule resource to delete.
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
  /// [google.cloud.cpp.compute.global_forwarding_rules.v1.DeleteForwardingRuleRequest]: @cloud_cpp_reference_link{google/cloud/compute/global_forwarding_rules/v1/global_forwarding_rules.proto#L134}
  ///
  // clang-format on
  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  DeleteForwardingRule(std::string const& project,
                       std::string const& forwarding_rule, Options opts = {});

  StatusOr<google::cloud::cpp::compute::v1::Operation> DeleteForwardingRule(
      ExperimentalTag, NoAwaitTag, std::string const& project,
      std::string const& forwarding_rule, Options opts = {});

  // clang-format off
  ///
  /// Deletes the specified GlobalForwardingRule resource.
  /// https://cloud.google.com/compute/docs/reference/rest/v1/globalForwardingRules/delete
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.cloud.cpp.compute.global_forwarding_rules.v1.DeleteForwardingRuleRequest].
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
  /// [google.cloud.cpp.compute.global_forwarding_rules.v1.DeleteForwardingRuleRequest]: @cloud_cpp_reference_link{google/cloud/compute/global_forwarding_rules/v1/global_forwarding_rules.proto#L134}
  ///
  // clang-format on
  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  DeleteForwardingRule(google::cloud::cpp::compute::global_forwarding_rules::
                           v1::DeleteForwardingRuleRequest const& request,
                       Options opts = {});

  StatusOr<google::cloud::cpp::compute::v1::Operation> DeleteForwardingRule(
      ExperimentalTag, NoAwaitTag,
      google::cloud::cpp::compute::global_forwarding_rules::v1::
          DeleteForwardingRuleRequest const& request,
      Options opts = {});

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  DeleteForwardingRule(
      ExperimentalTag,
      google::cloud::cpp::compute::v1::Operation const& operation,
      Options opts = {});

  // clang-format off
  ///
  /// Returns the specified GlobalForwardingRule resource. Gets a list of
  /// available forwarding rules by making a list() request.
  /// https://cloud.google.com/compute/docs/reference/rest/v1/globalForwardingRules/get
  ///
  /// @param project  Project ID for this request.
  /// @param forwarding_rule  Name of the ForwardingRule resource to return.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return the result of the RPC. The response message type
  ///     ([google.cloud.cpp.compute.v1.ForwardingRule])
  ///     is mapped to a C++ class using the [Protobuf mapping rules].
  ///     If the request fails, the [`StatusOr`] contains the error details.
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.cpp.compute.global_forwarding_rules.v1.GetForwardingRuleRequest]: @cloud_cpp_reference_link{google/cloud/compute/global_forwarding_rules/v1/global_forwarding_rules.proto#L160}
  /// [google.cloud.cpp.compute.v1.ForwardingRule]: @cloud_cpp_reference_link{google/cloud/compute/v1/internal/common_040.proto#L36}
  ///
  // clang-format on
  StatusOr<google::cloud::cpp::compute::v1::ForwardingRule> GetForwardingRule(
      std::string const& project, std::string const& forwarding_rule,
      Options opts = {});

  // clang-format off
  ///
  /// Returns the specified GlobalForwardingRule resource. Gets a list of
  /// available forwarding rules by making a list() request.
  /// https://cloud.google.com/compute/docs/reference/rest/v1/globalForwardingRules/get
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.cloud.cpp.compute.global_forwarding_rules.v1.GetForwardingRuleRequest].
  ///     Proto messages are converted to C++ classes by Protobuf, using the
  ///     [Protobuf mapping rules].
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return the result of the RPC. The response message type
  ///     ([google.cloud.cpp.compute.v1.ForwardingRule])
  ///     is mapped to a C++ class using the [Protobuf mapping rules].
  ///     If the request fails, the [`StatusOr`] contains the error details.
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.cpp.compute.global_forwarding_rules.v1.GetForwardingRuleRequest]: @cloud_cpp_reference_link{google/cloud/compute/global_forwarding_rules/v1/global_forwarding_rules.proto#L160}
  /// [google.cloud.cpp.compute.v1.ForwardingRule]: @cloud_cpp_reference_link{google/cloud/compute/v1/internal/common_040.proto#L36}
  ///
  // clang-format on
  StatusOr<google::cloud::cpp::compute::v1::ForwardingRule> GetForwardingRule(
      google::cloud::cpp::compute::global_forwarding_rules::v1::
          GetForwardingRuleRequest const& request,
      Options opts = {});

  // clang-format off
  ///
  /// Creates a GlobalForwardingRule resource in the specified project using the
  /// data included in the request.
  /// https://cloud.google.com/compute/docs/reference/rest/v1/globalForwardingRules/insert
  ///
  /// @param project  Project ID for this request.
  /// @param forwarding_rule_resource  The ForwardingRule for this request.
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
  /// [google.cloud.cpp.compute.global_forwarding_rules.v1.InsertForwardingRuleRequest]: @cloud_cpp_reference_link{google/cloud/compute/global_forwarding_rules/v1/global_forwarding_rules.proto#L171}
  ///
  // clang-format on
  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  InsertForwardingRule(std::string const& project,
                       google::cloud::cpp::compute::v1::ForwardingRule const&
                           forwarding_rule_resource,
                       Options opts = {});

  StatusOr<google::cloud::cpp::compute::v1::Operation> InsertForwardingRule(
      ExperimentalTag, NoAwaitTag, std::string const& project,
      google::cloud::cpp::compute::v1::ForwardingRule const&
          forwarding_rule_resource,
      Options opts = {});

  // clang-format off
  ///
  /// Creates a GlobalForwardingRule resource in the specified project using the
  /// data included in the request.
  /// https://cloud.google.com/compute/docs/reference/rest/v1/globalForwardingRules/insert
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.cloud.cpp.compute.global_forwarding_rules.v1.InsertForwardingRuleRequest].
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
  /// [google.cloud.cpp.compute.global_forwarding_rules.v1.InsertForwardingRuleRequest]: @cloud_cpp_reference_link{google/cloud/compute/global_forwarding_rules/v1/global_forwarding_rules.proto#L171}
  ///
  // clang-format on
  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  InsertForwardingRule(google::cloud::cpp::compute::global_forwarding_rules::
                           v1::InsertForwardingRuleRequest const& request,
                       Options opts = {});

  StatusOr<google::cloud::cpp::compute::v1::Operation> InsertForwardingRule(
      ExperimentalTag, NoAwaitTag,
      google::cloud::cpp::compute::global_forwarding_rules::v1::
          InsertForwardingRuleRequest const& request,
      Options opts = {});

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  InsertForwardingRule(
      ExperimentalTag,
      google::cloud::cpp::compute::v1::Operation const& operation,
      Options opts = {});

  // clang-format off
  ///
  /// Retrieves a list of GlobalForwardingRule resources available to the
  /// specified project.
  /// https://cloud.google.com/compute/docs/reference/rest/v1/globalForwardingRules/list
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
  ///     [google.cloud.cpp.compute.v1.ForwardingRule], or rather,
  ///     the C++ class generated by Protobuf from that type. Please consult the
  ///     Protobuf documentation for details on the [Protobuf mapping rules].
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.cpp.compute.global_forwarding_rules.v1.ListGlobalForwardingRulesRequest]: @cloud_cpp_reference_link{google/cloud/compute/global_forwarding_rules/v1/global_forwarding_rules.proto#L197}
  /// [google.cloud.cpp.compute.v1.ForwardingRule]: @cloud_cpp_reference_link{google/cloud/compute/v1/internal/common_040.proto#L36}
  ///
  // clang-format on
  StreamRange<google::cloud::cpp::compute::v1::ForwardingRule>
  ListGlobalForwardingRules(std::string const& project, Options opts = {});

  // clang-format off
  ///
  /// Retrieves a list of GlobalForwardingRule resources available to the
  /// specified project.
  /// https://cloud.google.com/compute/docs/reference/rest/v1/globalForwardingRules/list
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.cloud.cpp.compute.global_forwarding_rules.v1.ListGlobalForwardingRulesRequest].
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
  ///     [google.cloud.cpp.compute.v1.ForwardingRule], or rather,
  ///     the C++ class generated by Protobuf from that type. Please consult the
  ///     Protobuf documentation for details on the [Protobuf mapping rules].
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.cpp.compute.global_forwarding_rules.v1.ListGlobalForwardingRulesRequest]: @cloud_cpp_reference_link{google/cloud/compute/global_forwarding_rules/v1/global_forwarding_rules.proto#L197}
  /// [google.cloud.cpp.compute.v1.ForwardingRule]: @cloud_cpp_reference_link{google/cloud/compute/v1/internal/common_040.proto#L36}
  ///
  // clang-format on
  StreamRange<google::cloud::cpp::compute::v1::ForwardingRule>
  ListGlobalForwardingRules(
      google::cloud::cpp::compute::global_forwarding_rules::v1::
          ListGlobalForwardingRulesRequest request,
      Options opts = {});

  // clang-format off
  ///
  /// Updates the specified forwarding rule with the data included in the
  /// request. This method supports PATCH semantics and uses the JSON merge patch
  /// format and processing rules. Currently, you can only patch the network_tier
  /// field.
  /// https://cloud.google.com/compute/docs/reference/rest/v1/globalForwardingRules/patch
  ///
  /// @param project  Project ID for this request.
  /// @param forwarding_rule  Name of the ForwardingRule resource to patch.
  /// @param forwarding_rule_resource  The ForwardingRule for this request.
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
  /// [google.cloud.cpp.compute.global_forwarding_rules.v1.PatchForwardingRuleRequest]: @cloud_cpp_reference_link{google/cloud/compute/global_forwarding_rules/v1/global_forwarding_rules.proto#L265}
  ///
  // clang-format on
  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  PatchForwardingRule(std::string const& project,
                      std::string const& forwarding_rule,
                      google::cloud::cpp::compute::v1::ForwardingRule const&
                          forwarding_rule_resource,
                      Options opts = {});

  StatusOr<google::cloud::cpp::compute::v1::Operation> PatchForwardingRule(
      ExperimentalTag, NoAwaitTag, std::string const& project,
      std::string const& forwarding_rule,
      google::cloud::cpp::compute::v1::ForwardingRule const&
          forwarding_rule_resource,
      Options opts = {});

  // clang-format off
  ///
  /// Updates the specified forwarding rule with the data included in the
  /// request. This method supports PATCH semantics and uses the JSON merge patch
  /// format and processing rules. Currently, you can only patch the network_tier
  /// field.
  /// https://cloud.google.com/compute/docs/reference/rest/v1/globalForwardingRules/patch
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.cloud.cpp.compute.global_forwarding_rules.v1.PatchForwardingRuleRequest].
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
  /// [google.cloud.cpp.compute.global_forwarding_rules.v1.PatchForwardingRuleRequest]: @cloud_cpp_reference_link{google/cloud/compute/global_forwarding_rules/v1/global_forwarding_rules.proto#L265}
  ///
  // clang-format on
  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  PatchForwardingRule(google::cloud::cpp::compute::global_forwarding_rules::v1::
                          PatchForwardingRuleRequest const& request,
                      Options opts = {});

  StatusOr<google::cloud::cpp::compute::v1::Operation> PatchForwardingRule(
      ExperimentalTag, NoAwaitTag,
      google::cloud::cpp::compute::global_forwarding_rules::v1::
          PatchForwardingRuleRequest const& request,
      Options opts = {});

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  PatchForwardingRule(
      ExperimentalTag,
      google::cloud::cpp::compute::v1::Operation const& operation,
      Options opts = {});

  // clang-format off
  ///
  /// Sets the labels on the specified resource. To learn more about labels, read
  /// the Labeling resources documentation.
  /// https://cloud.google.com/compute/docs/reference/rest/v1/globalForwardingRules/setLabels
  ///
  /// @param project  Project ID for this request.
  /// @param resource  Name or id of the resource for this request.
  /// @param global_set_labels_request_resource  The GlobalSetLabelsRequest for this request.
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
  /// [google.cloud.cpp.compute.global_forwarding_rules.v1.SetLabelsRequest]: @cloud_cpp_reference_link{google/cloud/compute/global_forwarding_rules/v1/global_forwarding_rules.proto#L295}
  ///
  // clang-format on
  future<StatusOr<google::cloud::cpp::compute::v1::Operation>> SetLabels(
      std::string const& project, std::string const& resource,
      google::cloud::cpp::compute::v1::GlobalSetLabelsRequest const&
          global_set_labels_request_resource,
      Options opts = {});

  StatusOr<google::cloud::cpp::compute::v1::Operation> SetLabels(
      ExperimentalTag, NoAwaitTag, std::string const& project,
      std::string const& resource,
      google::cloud::cpp::compute::v1::GlobalSetLabelsRequest const&
          global_set_labels_request_resource,
      Options opts = {});

  // clang-format off
  ///
  /// Sets the labels on the specified resource. To learn more about labels, read
  /// the Labeling resources documentation.
  /// https://cloud.google.com/compute/docs/reference/rest/v1/globalForwardingRules/setLabels
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.cloud.cpp.compute.global_forwarding_rules.v1.SetLabelsRequest].
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
  /// [google.cloud.cpp.compute.global_forwarding_rules.v1.SetLabelsRequest]: @cloud_cpp_reference_link{google/cloud/compute/global_forwarding_rules/v1/global_forwarding_rules.proto#L295}
  ///
  // clang-format on
  future<StatusOr<google::cloud::cpp::compute::v1::Operation>> SetLabels(
      google::cloud::cpp::compute::global_forwarding_rules::v1::
          SetLabelsRequest const& request,
      Options opts = {});

  StatusOr<google::cloud::cpp::compute::v1::Operation> SetLabels(
      ExperimentalTag, NoAwaitTag,
      google::cloud::cpp::compute::global_forwarding_rules::v1::
          SetLabelsRequest const& request,
      Options opts = {});

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>> SetLabels(
      ExperimentalTag,
      google::cloud::cpp::compute::v1::Operation const& operation,
      Options opts = {});

  // clang-format off
  ///
  /// Changes target URL for the GlobalForwardingRule resource. The new target
  /// should be of the same type as the old target.
  /// https://cloud.google.com/compute/docs/reference/rest/v1/globalForwardingRules/setTarget
  ///
  /// @param project  Project ID for this request.
  /// @param forwarding_rule  Name of the ForwardingRule resource in which target is to be set.
  /// @param target_reference_resource  The TargetReference for this request.
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
  /// [google.cloud.cpp.compute.global_forwarding_rules.v1.SetTargetRequest]: @cloud_cpp_reference_link{google/cloud/compute/global_forwarding_rules/v1/global_forwarding_rules.proto#L314}
  ///
  // clang-format on
  future<StatusOr<google::cloud::cpp::compute::v1::Operation>> SetTarget(
      std::string const& project, std::string const& forwarding_rule,
      google::cloud::cpp::compute::v1::TargetReference const&
          target_reference_resource,
      Options opts = {});

  StatusOr<google::cloud::cpp::compute::v1::Operation> SetTarget(
      ExperimentalTag, NoAwaitTag, std::string const& project,
      std::string const& forwarding_rule,
      google::cloud::cpp::compute::v1::TargetReference const&
          target_reference_resource,
      Options opts = {});

  // clang-format off
  ///
  /// Changes target URL for the GlobalForwardingRule resource. The new target
  /// should be of the same type as the old target.
  /// https://cloud.google.com/compute/docs/reference/rest/v1/globalForwardingRules/setTarget
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.cloud.cpp.compute.global_forwarding_rules.v1.SetTargetRequest].
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
  /// [google.cloud.cpp.compute.global_forwarding_rules.v1.SetTargetRequest]: @cloud_cpp_reference_link{google/cloud/compute/global_forwarding_rules/v1/global_forwarding_rules.proto#L314}
  ///
  // clang-format on
  future<StatusOr<google::cloud::cpp::compute::v1::Operation>> SetTarget(
      google::cloud::cpp::compute::global_forwarding_rules::v1::
          SetTargetRequest const& request,
      Options opts = {});

  StatusOr<google::cloud::cpp::compute::v1::Operation> SetTarget(
      ExperimentalTag, NoAwaitTag,
      google::cloud::cpp::compute::global_forwarding_rules::v1::
          SetTargetRequest const& request,
      Options opts = {});

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>> SetTarget(
      ExperimentalTag,
      google::cloud::cpp::compute::v1::Operation const& operation,
      Options opts = {});

 private:
  std::shared_ptr<GlobalForwardingRulesConnection> connection_;
  Options options_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_global_forwarding_rules_v1
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_GLOBAL_FORWARDING_RULES_V1_GLOBAL_FORWARDING_RULES_CLIENT_H
