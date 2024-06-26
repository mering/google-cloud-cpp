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
// source: google/cloud/aiplatform/v1/schedule_service.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_AIPLATFORM_V1_SCHEDULE_CLIENT_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_AIPLATFORM_V1_SCHEDULE_CLIENT_H

#include "google/cloud/aiplatform/v1/schedule_connection.h"
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
namespace aiplatform_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

///
/// A service for creating and managing Vertex AI's Schedule resources to
/// periodically launch shceudled runs to make API calls.
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
class ScheduleServiceClient {
 public:
  explicit ScheduleServiceClient(
      std::shared_ptr<ScheduleServiceConnection> connection, Options opts = {});
  ~ScheduleServiceClient();

  ///@{
  /// @name Copy and move support
  ScheduleServiceClient(ScheduleServiceClient const&) = default;
  ScheduleServiceClient& operator=(ScheduleServiceClient const&) = default;
  ScheduleServiceClient(ScheduleServiceClient&&) = default;
  ScheduleServiceClient& operator=(ScheduleServiceClient&&) = default;
  ///@}

  ///@{
  /// @name Equality
  friend bool operator==(ScheduleServiceClient const& a,
                         ScheduleServiceClient const& b) {
    return a.connection_ == b.connection_;
  }
  friend bool operator!=(ScheduleServiceClient const& a,
                         ScheduleServiceClient const& b) {
    return !(a == b);
  }
  ///@}

  // clang-format off
  ///
  /// Creates a Schedule.
  ///
  /// @param parent  Required. The resource name of the Location to create the Schedule in.
  ///  Format: `projects/{project}/locations/{location}`
  /// @param schedule  Required. The Schedule to create.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return the result of the RPC. The response message type
  ///     ([google.cloud.aiplatform.v1.Schedule])
  ///     is mapped to a C++ class using the [Protobuf mapping rules].
  ///     If the request fails, the [`StatusOr`] contains the error details.
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.aiplatform.v1.CreateScheduleRequest]: @googleapis_reference_link{google/cloud/aiplatform/v1/schedule_service.proto#L129}
  /// [google.cloud.aiplatform.v1.Schedule]: @googleapis_reference_link{google/cloud/aiplatform/v1/schedule.proto#L34}
  ///
  // clang-format on
  StatusOr<google::cloud::aiplatform::v1::Schedule> CreateSchedule(
      std::string const& parent,
      google::cloud::aiplatform::v1::Schedule const& schedule,
      Options opts = {});

  // clang-format off
  ///
  /// Creates a Schedule.
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.cloud.aiplatform.v1.CreateScheduleRequest].
  ///     Proto messages are converted to C++ classes by Protobuf, using the
  ///     [Protobuf mapping rules].
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return the result of the RPC. The response message type
  ///     ([google.cloud.aiplatform.v1.Schedule])
  ///     is mapped to a C++ class using the [Protobuf mapping rules].
  ///     If the request fails, the [`StatusOr`] contains the error details.
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.aiplatform.v1.CreateScheduleRequest]: @googleapis_reference_link{google/cloud/aiplatform/v1/schedule_service.proto#L129}
  /// [google.cloud.aiplatform.v1.Schedule]: @googleapis_reference_link{google/cloud/aiplatform/v1/schedule.proto#L34}
  ///
  // clang-format on
  StatusOr<google::cloud::aiplatform::v1::Schedule> CreateSchedule(
      google::cloud::aiplatform::v1::CreateScheduleRequest const& request,
      Options opts = {});

  // clang-format off
  ///
  /// Deletes a Schedule.
  ///
  /// @param name  Required. The name of the Schedule resource to be deleted.
  ///  Format:
  ///  `projects/{project}/locations/{location}/schedules/{schedule}`
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return A [`future`] that becomes satisfied when the LRO
  ///     ([Long Running Operation]) completes or the polling policy in effect
  ///     for this call is exhausted. The future is satisfied with an error if
  ///     the LRO completes with an error or the polling policy is exhausted.
  ///     In this case the [`StatusOr`] returned by the future contains the
  ///     error. If the LRO completes successfully the value of the future
  ///     contains the LRO's result. For this RPC the result is a
  ///     [google.cloud.aiplatform.v1.DeleteOperationMetadata] proto message.
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
  /// [google.cloud.aiplatform.v1.DeleteOperationMetadata]: @googleapis_reference_link{google/cloud/aiplatform/v1/operation.proto#L52}
  /// [google.cloud.aiplatform.v1.DeleteScheduleRequest]: @googleapis_reference_link{google/cloud/aiplatform/v1/schedule_service.proto#L248}
  ///
  // clang-format on
  future<StatusOr<google::cloud::aiplatform::v1::DeleteOperationMetadata>>
  DeleteSchedule(std::string const& name, Options opts = {});

  StatusOr<google::longrunning::Operation> DeleteSchedule(
      ExperimentalTag, NoAwaitTag, std::string const& name, Options opts = {});

  // clang-format off
  ///
  /// Deletes a Schedule.
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.cloud.aiplatform.v1.DeleteScheduleRequest].
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
  ///     [google.cloud.aiplatform.v1.DeleteOperationMetadata] proto message.
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
  /// [google.cloud.aiplatform.v1.DeleteOperationMetadata]: @googleapis_reference_link{google/cloud/aiplatform/v1/operation.proto#L52}
  /// [google.cloud.aiplatform.v1.DeleteScheduleRequest]: @googleapis_reference_link{google/cloud/aiplatform/v1/schedule_service.proto#L248}
  ///
  // clang-format on
  future<StatusOr<google::cloud::aiplatform::v1::DeleteOperationMetadata>>
  DeleteSchedule(
      google::cloud::aiplatform::v1::DeleteScheduleRequest const& request,
      Options opts = {});

  StatusOr<google::longrunning::Operation> DeleteSchedule(
      ExperimentalTag, NoAwaitTag,
      google::cloud::aiplatform::v1::DeleteScheduleRequest const& request,
      Options opts = {});

  future<StatusOr<google::cloud::aiplatform::v1::DeleteOperationMetadata>>
  DeleteSchedule(ExperimentalTag,
                 google::longrunning::Operation const& operation,
                 Options opts = {});

  // clang-format off
  ///
  /// Gets a Schedule.
  ///
  /// @param name  Required. The name of the Schedule resource.
  ///  Format:
  ///  `projects/{project}/locations/{location}/schedules/{schedule}`
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return the result of the RPC. The response message type
  ///     ([google.cloud.aiplatform.v1.Schedule])
  ///     is mapped to a C++ class using the [Protobuf mapping rules].
  ///     If the request fails, the [`StatusOr`] contains the error details.
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.aiplatform.v1.GetScheduleRequest]: @googleapis_reference_link{google/cloud/aiplatform/v1/schedule_service.proto#L145}
  /// [google.cloud.aiplatform.v1.Schedule]: @googleapis_reference_link{google/cloud/aiplatform/v1/schedule.proto#L34}
  ///
  // clang-format on
  StatusOr<google::cloud::aiplatform::v1::Schedule> GetSchedule(
      std::string const& name, Options opts = {});

  // clang-format off
  ///
  /// Gets a Schedule.
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.cloud.aiplatform.v1.GetScheduleRequest].
  ///     Proto messages are converted to C++ classes by Protobuf, using the
  ///     [Protobuf mapping rules].
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return the result of the RPC. The response message type
  ///     ([google.cloud.aiplatform.v1.Schedule])
  ///     is mapped to a C++ class using the [Protobuf mapping rules].
  ///     If the request fails, the [`StatusOr`] contains the error details.
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.aiplatform.v1.GetScheduleRequest]: @googleapis_reference_link{google/cloud/aiplatform/v1/schedule_service.proto#L145}
  /// [google.cloud.aiplatform.v1.Schedule]: @googleapis_reference_link{google/cloud/aiplatform/v1/schedule.proto#L34}
  ///
  // clang-format on
  StatusOr<google::cloud::aiplatform::v1::Schedule> GetSchedule(
      google::cloud::aiplatform::v1::GetScheduleRequest const& request,
      Options opts = {});

  // clang-format off
  ///
  /// Lists Schedules in a Location.
  ///
  /// @param parent  Required. The resource name of the Location to list the Schedules from.
  ///  Format: `projects/{project}/locations/{location}`
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
  ///     [google.cloud.aiplatform.v1.Schedule], or rather,
  ///     the C++ class generated by Protobuf from that type. Please consult the
  ///     Protobuf documentation for details on the [Protobuf mapping rules].
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.aiplatform.v1.ListSchedulesRequest]: @googleapis_reference_link{google/cloud/aiplatform/v1/schedule_service.proto#L159}
  /// [google.cloud.aiplatform.v1.Schedule]: @googleapis_reference_link{google/cloud/aiplatform/v1/schedule.proto#L34}
  ///
  // clang-format on
  StreamRange<google::cloud::aiplatform::v1::Schedule> ListSchedules(
      std::string const& parent, Options opts = {});

  // clang-format off
  ///
  /// Lists Schedules in a Location.
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.cloud.aiplatform.v1.ListSchedulesRequest].
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
  ///     [google.cloud.aiplatform.v1.Schedule], or rather,
  ///     the C++ class generated by Protobuf from that type. Please consult the
  ///     Protobuf documentation for details on the [Protobuf mapping rules].
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.aiplatform.v1.ListSchedulesRequest]: @googleapis_reference_link{google/cloud/aiplatform/v1/schedule_service.proto#L159}
  /// [google.cloud.aiplatform.v1.Schedule]: @googleapis_reference_link{google/cloud/aiplatform/v1/schedule.proto#L34}
  ///
  // clang-format on
  StreamRange<google::cloud::aiplatform::v1::Schedule> ListSchedules(
      google::cloud::aiplatform::v1::ListSchedulesRequest request,
      Options opts = {});

  // clang-format off
  ///
  /// Pauses a Schedule. Will mark
  /// [Schedule.state][google.cloud.aiplatform.v1.Schedule.state] to 'PAUSED'. If
  /// the schedule is paused, no new runs will be created. Already created runs
  /// will NOT be paused or canceled.
  ///
  /// @param name  Required. The name of the Schedule resource to be paused.
  ///  Format:
  ///  `projects/{project}/locations/{location}/schedules/{schedule}`
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
  /// [google.cloud.aiplatform.v1.PauseScheduleRequest]: @googleapis_reference_link{google/cloud/aiplatform/v1/schedule_service.proto#L262}
  /// [google.cloud.aiplatform.v1.Schedule.state]: @googleapis_reference_link{google/cloud/aiplatform/v1/schedule.proto#L125}
  ///
  // clang-format on
  Status PauseSchedule(std::string const& name, Options opts = {});

  // clang-format off
  ///
  /// Pauses a Schedule. Will mark
  /// [Schedule.state][google.cloud.aiplatform.v1.Schedule.state] to 'PAUSED'. If
  /// the schedule is paused, no new runs will be created. Already created runs
  /// will NOT be paused or canceled.
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.cloud.aiplatform.v1.PauseScheduleRequest].
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
  /// [google.cloud.aiplatform.v1.PauseScheduleRequest]: @googleapis_reference_link{google/cloud/aiplatform/v1/schedule_service.proto#L262}
  /// [google.cloud.aiplatform.v1.Schedule.state]: @googleapis_reference_link{google/cloud/aiplatform/v1/schedule.proto#L125}
  ///
  // clang-format on
  Status PauseSchedule(
      google::cloud::aiplatform::v1::PauseScheduleRequest const& request,
      Options opts = {});

  // clang-format off
  ///
  /// Resumes a paused Schedule to start scheduling new runs. Will mark
  /// [Schedule.state][google.cloud.aiplatform.v1.Schedule.state] to 'ACTIVE'.
  /// Only paused Schedule can be resumed.
  ///
  /// When the Schedule is resumed, new runs will be scheduled starting from the
  /// next execution time after the current time based on the time_specification
  /// in the Schedule. If [Schedule.catchUp][] is set up true, all
  /// missed runs will be scheduled for backfill first.
  ///
  /// @param name  Required. The name of the Schedule resource to be resumed.
  ///  Format:
  ///  `projects/{project}/locations/{location}/schedules/{schedule}`
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
  /// [google.cloud.aiplatform.v1.ResumeScheduleRequest]: @googleapis_reference_link{google/cloud/aiplatform/v1/schedule_service.proto#L276}
  /// [google.cloud.aiplatform.v1.Schedule.state]: @googleapis_reference_link{google/cloud/aiplatform/v1/schedule.proto#L125}
  ///
  // clang-format on
  Status ResumeSchedule(std::string const& name, Options opts = {});

  // clang-format off
  ///
  /// Resumes a paused Schedule to start scheduling new runs. Will mark
  /// [Schedule.state][google.cloud.aiplatform.v1.Schedule.state] to 'ACTIVE'.
  /// Only paused Schedule can be resumed.
  ///
  /// When the Schedule is resumed, new runs will be scheduled starting from the
  /// next execution time after the current time based on the time_specification
  /// in the Schedule. If [Schedule.catchUp][] is set up true, all
  /// missed runs will be scheduled for backfill first.
  ///
  /// @param name  Required. The name of the Schedule resource to be resumed.
  ///  Format:
  ///  `projects/{project}/locations/{location}/schedules/{schedule}`
  /// @param catch_up  Optional. Whether to backfill missed runs when the schedule is resumed from
  ///  PAUSED state. If set to true, all missed runs will be scheduled. New runs
  ///  will be scheduled after the backfill is complete. This will also update
  ///  [Schedule.catch_up][google.cloud.aiplatform.v1.Schedule.catch_up] field.
  ///  Default to false.
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
  /// [google.cloud.aiplatform.v1.ResumeScheduleRequest]: @googleapis_reference_link{google/cloud/aiplatform/v1/schedule_service.proto#L276}
  /// [google.cloud.aiplatform.v1.Schedule.catch_up]: @googleapis_reference_link{google/cloud/aiplatform/v1/schedule.proto#L164}
  /// [google.cloud.aiplatform.v1.Schedule.state]: @googleapis_reference_link{google/cloud/aiplatform/v1/schedule.proto#L125}
  ///
  // clang-format on
  Status ResumeSchedule(std::string const& name, bool catch_up,
                        Options opts = {});

  // clang-format off
  ///
  /// Resumes a paused Schedule to start scheduling new runs. Will mark
  /// [Schedule.state][google.cloud.aiplatform.v1.Schedule.state] to 'ACTIVE'.
  /// Only paused Schedule can be resumed.
  ///
  /// When the Schedule is resumed, new runs will be scheduled starting from the
  /// next execution time after the current time based on the time_specification
  /// in the Schedule. If [Schedule.catchUp][] is set up true, all
  /// missed runs will be scheduled for backfill first.
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.cloud.aiplatform.v1.ResumeScheduleRequest].
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
  /// [google.cloud.aiplatform.v1.ResumeScheduleRequest]: @googleapis_reference_link{google/cloud/aiplatform/v1/schedule_service.proto#L276}
  /// [google.cloud.aiplatform.v1.Schedule.state]: @googleapis_reference_link{google/cloud/aiplatform/v1/schedule.proto#L125}
  ///
  // clang-format on
  Status ResumeSchedule(
      google::cloud::aiplatform::v1::ResumeScheduleRequest const& request,
      Options opts = {});

  // clang-format off
  ///
  /// Updates an active or paused Schedule.
  ///
  /// When the Schedule is updated, new runs will be scheduled starting from the
  /// updated next execution time after the update time based on the
  /// time_specification in the updated Schedule. All unstarted runs before the
  /// update time will be skipped while already created runs will NOT be paused
  /// or canceled.
  ///
  /// @param schedule  Required. The Schedule which replaces the resource on the server.
  ///  The following restrictions will be applied:
  ///  @n
  ///    * The scheduled request type cannot be changed.
  ///    * The non-empty fields cannot be unset.
  ///    * The output_only fields will be ignored if specified.
  /// @param update_mask  Required. The update mask applies to the resource. See
  ///  [google.protobuf.FieldMask][google.protobuf.FieldMask].
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return the result of the RPC. The response message type
  ///     ([google.cloud.aiplatform.v1.Schedule])
  ///     is mapped to a C++ class using the [Protobuf mapping rules].
  ///     If the request fails, the [`StatusOr`] contains the error details.
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.aiplatform.v1.Schedule]: @googleapis_reference_link{google/cloud/aiplatform/v1/schedule.proto#L34}
  /// [google.cloud.aiplatform.v1.UpdateScheduleRequest]: @googleapis_reference_link{google/cloud/aiplatform/v1/schedule_service.proto#L297}
  /// [google.protobuf.FieldMask]: @googleapis_reference_link{google/protobuf/field_mask.proto#L242}
  ///
  // clang-format on
  StatusOr<google::cloud::aiplatform::v1::Schedule> UpdateSchedule(
      google::cloud::aiplatform::v1::Schedule const& schedule,
      google::protobuf::FieldMask const& update_mask, Options opts = {});

  // clang-format off
  ///
  /// Updates an active or paused Schedule.
  ///
  /// When the Schedule is updated, new runs will be scheduled starting from the
  /// updated next execution time after the update time based on the
  /// time_specification in the updated Schedule. All unstarted runs before the
  /// update time will be skipped while already created runs will NOT be paused
  /// or canceled.
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.cloud.aiplatform.v1.UpdateScheduleRequest].
  ///     Proto messages are converted to C++ classes by Protobuf, using the
  ///     [Protobuf mapping rules].
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return the result of the RPC. The response message type
  ///     ([google.cloud.aiplatform.v1.Schedule])
  ///     is mapped to a C++ class using the [Protobuf mapping rules].
  ///     If the request fails, the [`StatusOr`] contains the error details.
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.aiplatform.v1.Schedule]: @googleapis_reference_link{google/cloud/aiplatform/v1/schedule.proto#L34}
  /// [google.cloud.aiplatform.v1.UpdateScheduleRequest]: @googleapis_reference_link{google/cloud/aiplatform/v1/schedule_service.proto#L297}
  ///
  // clang-format on
  StatusOr<google::cloud::aiplatform::v1::Schedule> UpdateSchedule(
      google::cloud::aiplatform::v1::UpdateScheduleRequest const& request,
      Options opts = {});

 private:
  std::shared_ptr<ScheduleServiceConnection> connection_;
  Options options_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace aiplatform_v1
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_AIPLATFORM_V1_SCHEDULE_CLIENT_H
