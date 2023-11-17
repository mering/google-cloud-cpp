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
// source: google/cloud/aiplatform/v1/llm_utility_service.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_AIPLATFORM_V1_LLM_UTILITY_CLIENT_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_AIPLATFORM_V1_LLM_UTILITY_CLIENT_H

#include "google/cloud/aiplatform/v1/llm_utility_connection.h"
#include "google/cloud/future.h"
#include "google/cloud/options.h"
#include "google/cloud/polling_policy.h"
#include "google/cloud/status_or.h"
#include "google/cloud/version.h"
#include <memory>

namespace google {
namespace cloud {
namespace aiplatform_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

///
/// Service for LLM related utility functions.
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
class LlmUtilityServiceClient {
 public:
  explicit LlmUtilityServiceClient(
      std::shared_ptr<LlmUtilityServiceConnection> connection,
      Options opts = {});
  ~LlmUtilityServiceClient();

  ///@{
  /// @name Copy and move support
  LlmUtilityServiceClient(LlmUtilityServiceClient const&) = default;
  LlmUtilityServiceClient& operator=(LlmUtilityServiceClient const&) = default;
  LlmUtilityServiceClient(LlmUtilityServiceClient&&) = default;
  LlmUtilityServiceClient& operator=(LlmUtilityServiceClient&&) = default;
  ///@}

  ///@{
  /// @name Equality
  friend bool operator==(LlmUtilityServiceClient const& a,
                         LlmUtilityServiceClient const& b) {
    return a.connection_ == b.connection_;
  }
  friend bool operator!=(LlmUtilityServiceClient const& a,
                         LlmUtilityServiceClient const& b) {
    return !(a == b);
  }
  ///@}

  // clang-format off
  ///
  /// Perform a token counting.
  ///
  /// @param endpoint  Required. The name of the Endpoint requested to perform token counting.
  ///  Format:
  ///  `projects/{project}/locations/{location}/endpoints/{endpoint}`
  /// @param instances  Required. The instances that are the input to token counting call.
  ///  Schema is identical to the prediction schema of the underlying model.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return the result of the RPC. The response message type
  ///     ([google.cloud.aiplatform.v1.CountTokensResponse])
  ///     is mapped to a C++ class using the [Protobuf mapping rules].
  ///     If the request fails, the [`StatusOr`] contains the error details.
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.aiplatform.v1.CountTokensRequest]: @googleapis_reference_link{google/cloud/aiplatform/v1/prediction_service.proto#L317}
  /// [google.cloud.aiplatform.v1.CountTokensResponse]: @googleapis_reference_link{google/cloud/aiplatform/v1/prediction_service.proto#L335}
  ///
  // clang-format on
  StatusOr<google::cloud::aiplatform::v1::CountTokensResponse> CountTokens(
      std::string const& endpoint,
      std::vector<google::protobuf::Value> const& instances, Options opts = {});

  // clang-format off
  ///
  /// Perform a token counting.
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.cloud.aiplatform.v1.CountTokensRequest].
  ///     Proto messages are converted to C++ classes by Protobuf, using the
  ///     [Protobuf mapping rules].
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return the result of the RPC. The response message type
  ///     ([google.cloud.aiplatform.v1.CountTokensResponse])
  ///     is mapped to a C++ class using the [Protobuf mapping rules].
  ///     If the request fails, the [`StatusOr`] contains the error details.
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.aiplatform.v1.CountTokensRequest]: @googleapis_reference_link{google/cloud/aiplatform/v1/prediction_service.proto#L317}
  /// [google.cloud.aiplatform.v1.CountTokensResponse]: @googleapis_reference_link{google/cloud/aiplatform/v1/prediction_service.proto#L335}
  ///
  // clang-format on
  StatusOr<google::cloud::aiplatform::v1::CountTokensResponse> CountTokens(
      google::cloud::aiplatform::v1::CountTokensRequest const& request,
      Options opts = {});

  // clang-format off
  ///
  /// Return a list of tokens based on the input text.
  ///
  /// @param endpoint  Required. The name of the Endpoint requested to get lists of tokens and
  ///  token ids.
  /// @param instances  Required. The instances that are the input to token computing API call.
  ///  Schema is identical to the prediction schema of the text model, even for
  ///  the non-text models, like chat models, or Codey models.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return the result of the RPC. The response message type
  ///     ([google.cloud.aiplatform.v1.ComputeTokensResponse])
  ///     is mapped to a C++ class using the [Protobuf mapping rules].
  ///     If the request fails, the [`StatusOr`] contains the error details.
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.aiplatform.v1.ComputeTokensRequest]: @googleapis_reference_link{google/cloud/aiplatform/v1/llm_utility_service.proto#L68}
  /// [google.cloud.aiplatform.v1.ComputeTokensResponse]: @googleapis_reference_link{google/cloud/aiplatform/v1/llm_utility_service.proto#L95}
  ///
  // clang-format on
  StatusOr<google::cloud::aiplatform::v1::ComputeTokensResponse> ComputeTokens(
      std::string const& endpoint,
      std::vector<google::protobuf::Value> const& instances, Options opts = {});

  // clang-format off
  ///
  /// Return a list of tokens based on the input text.
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.cloud.aiplatform.v1.ComputeTokensRequest].
  ///     Proto messages are converted to C++ classes by Protobuf, using the
  ///     [Protobuf mapping rules].
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return the result of the RPC. The response message type
  ///     ([google.cloud.aiplatform.v1.ComputeTokensResponse])
  ///     is mapped to a C++ class using the [Protobuf mapping rules].
  ///     If the request fails, the [`StatusOr`] contains the error details.
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.aiplatform.v1.ComputeTokensRequest]: @googleapis_reference_link{google/cloud/aiplatform/v1/llm_utility_service.proto#L68}
  /// [google.cloud.aiplatform.v1.ComputeTokensResponse]: @googleapis_reference_link{google/cloud/aiplatform/v1/llm_utility_service.proto#L95}
  ///
  // clang-format on
  StatusOr<google::cloud::aiplatform::v1::ComputeTokensResponse> ComputeTokens(
      google::cloud::aiplatform::v1::ComputeTokensRequest const& request,
      Options opts = {});

 private:
  std::shared_ptr<LlmUtilityServiceConnection> connection_;
  Options options_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace aiplatform_v1
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_AIPLATFORM_V1_LLM_UTILITY_CLIENT_H
