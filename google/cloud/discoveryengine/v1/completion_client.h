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
// source: google/cloud/discoveryengine/v1/completion_service.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DISCOVERYENGINE_V1_COMPLETION_CLIENT_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DISCOVERYENGINE_V1_COMPLETION_CLIENT_H

#include "google/cloud/discoveryengine/v1/completion_connection.h"
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
namespace discoveryengine_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

///
/// Service for Auto-Completion.
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
class CompletionServiceClient {
 public:
  explicit CompletionServiceClient(
      std::shared_ptr<CompletionServiceConnection> connection,
      Options opts = {});
  ~CompletionServiceClient();

  ///@{
  /// @name Copy and move support
  CompletionServiceClient(CompletionServiceClient const&) = default;
  CompletionServiceClient& operator=(CompletionServiceClient const&) = default;
  CompletionServiceClient(CompletionServiceClient&&) = default;
  CompletionServiceClient& operator=(CompletionServiceClient&&) = default;
  ///@}

  ///@{
  /// @name Equality
  friend bool operator==(CompletionServiceClient const& a,
                         CompletionServiceClient const& b) {
    return a.connection_ == b.connection_;
  }
  friend bool operator!=(CompletionServiceClient const& a,
                         CompletionServiceClient const& b) {
    return !(a == b);
  }
  ///@}

  // clang-format off
  ///
  /// Completes the specified user input with keyword suggestions.
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.cloud.discoveryengine.v1.CompleteQueryRequest].
  ///     Proto messages are converted to C++ classes by Protobuf, using the
  ///     [Protobuf mapping rules].
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return the result of the RPC. The response message type
  ///     ([google.cloud.discoveryengine.v1.CompleteQueryResponse])
  ///     is mapped to a C++ class using the [Protobuf mapping rules].
  ///     If the request fails, the [`StatusOr`] contains the error details.
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.discoveryengine.v1.CompleteQueryRequest]: @googleapis_reference_link{google/cloud/discoveryengine/v1/completion_service.proto#L94}
  /// [google.cloud.discoveryengine.v1.CompleteQueryResponse]: @googleapis_reference_link{google/cloud/discoveryengine/v1/completion_service.proto#L154}
  ///
  // clang-format on
  StatusOr<google::cloud::discoveryengine::v1::CompleteQueryResponse>
  CompleteQuery(
      google::cloud::discoveryengine::v1::CompleteQueryRequest const& request,
      Options opts = {});

  // clang-format off
  ///
  /// Imports all
  /// [SuggestionDenyListEntry][google.cloud.discoveryengine.v1.SuggestionDenyListEntry]
  /// for a DataStore.
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.cloud.discoveryengine.v1.ImportSuggestionDenyListEntriesRequest].
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
  ///     [google.cloud.discoveryengine.v1.ImportSuggestionDenyListEntriesResponse] proto message.
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
  /// [google.cloud.discoveryengine.v1.ImportSuggestionDenyListEntriesRequest]: @googleapis_reference_link{google/cloud/discoveryengine/v1/import_config.proto#L606}
  /// [google.cloud.discoveryengine.v1.ImportSuggestionDenyListEntriesResponse]: @googleapis_reference_link{google/cloud/discoveryengine/v1/import_config.proto#L643}
  /// [google.cloud.discoveryengine.v1.SuggestionDenyListEntry]: @googleapis_reference_link{google/cloud/discoveryengine/v1/completion.proto#L32}
  ///
  // clang-format on
  future<StatusOr<google::cloud::discoveryengine::v1::
                      ImportSuggestionDenyListEntriesResponse>>
  ImportSuggestionDenyListEntries(
      google::cloud::discoveryengine::v1::
          ImportSuggestionDenyListEntriesRequest const& request,
      Options opts = {});

  StatusOr<google::longrunning::Operation> ImportSuggestionDenyListEntries(
      ExperimentalTag, NoAwaitTag,
      google::cloud::discoveryengine::v1::
          ImportSuggestionDenyListEntriesRequest const& request,
      Options opts = {});

  future<StatusOr<google::cloud::discoveryengine::v1::
                      ImportSuggestionDenyListEntriesResponse>>
  ImportSuggestionDenyListEntries(
      ExperimentalTag, google::longrunning::Operation const& operation,
      Options opts = {});

  // clang-format off
  ///
  /// Permanently deletes all
  /// [SuggestionDenyListEntry][google.cloud.discoveryengine.v1.SuggestionDenyListEntry]
  /// for a DataStore.
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.cloud.discoveryengine.v1.PurgeSuggestionDenyListEntriesRequest].
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
  ///     [google.cloud.discoveryengine.v1.PurgeSuggestionDenyListEntriesResponse] proto message.
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
  /// [google.cloud.discoveryengine.v1.PurgeSuggestionDenyListEntriesRequest]: @googleapis_reference_link{google/cloud/discoveryengine/v1/purge_config.proto#L95}
  /// [google.cloud.discoveryengine.v1.PurgeSuggestionDenyListEntriesResponse]: @googleapis_reference_link{google/cloud/discoveryengine/v1/purge_config.proto#L109}
  /// [google.cloud.discoveryengine.v1.SuggestionDenyListEntry]: @googleapis_reference_link{google/cloud/discoveryengine/v1/completion.proto#L32}
  ///
  // clang-format on
  future<StatusOr<google::cloud::discoveryengine::v1::
                      PurgeSuggestionDenyListEntriesResponse>>
  PurgeSuggestionDenyListEntries(
      google::cloud::discoveryengine::v1::
          PurgeSuggestionDenyListEntriesRequest const& request,
      Options opts = {});

  StatusOr<google::longrunning::Operation> PurgeSuggestionDenyListEntries(
      ExperimentalTag, NoAwaitTag,
      google::cloud::discoveryengine::v1::
          PurgeSuggestionDenyListEntriesRequest const& request,
      Options opts = {});

  future<StatusOr<google::cloud::discoveryengine::v1::
                      PurgeSuggestionDenyListEntriesResponse>>
  PurgeSuggestionDenyListEntries(
      ExperimentalTag, google::longrunning::Operation const& operation,
      Options opts = {});

 private:
  std::shared_ptr<CompletionServiceConnection> connection_;
  Options options_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace discoveryengine_v1
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DISCOVERYENGINE_V1_COMPLETION_CLIENT_H
