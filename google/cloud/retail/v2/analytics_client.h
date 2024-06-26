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
// source: google/cloud/retail/v2/analytics_service.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_RETAIL_V2_ANALYTICS_CLIENT_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_RETAIL_V2_ANALYTICS_CLIENT_H

#include "google/cloud/retail/v2/analytics_connection.h"
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
namespace retail_v2 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

///
/// Service for managing & accessing retail search business metric.
/// Retail recommendation business metric is currently not available.
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
class AnalyticsServiceClient {
 public:
  explicit AnalyticsServiceClient(
      std::shared_ptr<AnalyticsServiceConnection> connection,
      Options opts = {});
  ~AnalyticsServiceClient();

  ///@{
  /// @name Copy and move support
  AnalyticsServiceClient(AnalyticsServiceClient const&) = default;
  AnalyticsServiceClient& operator=(AnalyticsServiceClient const&) = default;
  AnalyticsServiceClient(AnalyticsServiceClient&&) = default;
  AnalyticsServiceClient& operator=(AnalyticsServiceClient&&) = default;
  ///@}

  ///@{
  /// @name Equality
  friend bool operator==(AnalyticsServiceClient const& a,
                         AnalyticsServiceClient const& b) {
    return a.connection_ == b.connection_;
  }
  friend bool operator!=(AnalyticsServiceClient const& a,
                         AnalyticsServiceClient const& b) {
    return !(a == b);
  }
  ///@}

  // clang-format off
  ///
  /// Exports analytics metrics.
  ///
  /// `Operation.response` is of type `ExportAnalyticsMetricsResponse`.
  /// `Operation.metadata` is of type `ExportMetadata`.
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.cloud.retail.v2.ExportAnalyticsMetricsRequest].
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
  ///     [google.cloud.retail.v2.ExportAnalyticsMetricsResponse] proto message.
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
  /// [google.cloud.retail.v2.ExportAnalyticsMetricsRequest]: @googleapis_reference_link{google/cloud/retail/v2/export_config.proto#L85}
  /// [google.cloud.retail.v2.ExportAnalyticsMetricsResponse]: @googleapis_reference_link{google/cloud/retail/v2/export_config.proto#L127}
  ///
  // clang-format on
  future<StatusOr<google::cloud::retail::v2::ExportAnalyticsMetricsResponse>>
  ExportAnalyticsMetrics(
      google::cloud::retail::v2::ExportAnalyticsMetricsRequest const& request,
      Options opts = {});

  StatusOr<google::longrunning::Operation> ExportAnalyticsMetrics(
      ExperimentalTag, NoAwaitTag,
      google::cloud::retail::v2::ExportAnalyticsMetricsRequest const& request,
      Options opts = {});

  future<StatusOr<google::cloud::retail::v2::ExportAnalyticsMetricsResponse>>
  ExportAnalyticsMetrics(ExperimentalTag,
                         google::longrunning::Operation const& operation,
                         Options opts = {});

 private:
  std::shared_ptr<AnalyticsServiceConnection> connection_;
  Options options_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace retail_v2
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_RETAIL_V2_ANALYTICS_CLIENT_H
