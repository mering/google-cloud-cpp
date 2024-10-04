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
// source: google/cloud/run/v2/job.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_RUN_V2_MOCKS_MOCK_JOBS_CONNECTION_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_RUN_V2_MOCKS_MOCK_JOBS_CONNECTION_H

#include "google/cloud/run/v2/jobs_connection.h"
#include <gmock/gmock.h>

namespace google {
namespace cloud {
namespace run_v2_mocks {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

/**
 * A class to mock `JobsConnection`.
 *
 * Application developers may want to test their code with simulated responses,
 * including errors, from an object of type `JobsClient`. To do so,
 * construct an object of type `JobsClient` with an instance of this
 * class. Then use the Google Test framework functions to program the behavior
 * of this mock.
 *
 * @see [This example][bq-mock] for how to test your application with GoogleTest.
 * While the example showcases types from the BigQuery library, the underlying
 * principles apply for any pair of `*Client` and `*Connection`.
 *
 * [bq-mock]: @cloud_cpp_docs_link{bigquery,bigquery-read-mock}
 */
class MockJobsConnection : public run_v2::JobsConnection {
 public:
  MOCK_METHOD(Options, options, (), (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// using ::testing::Matcher;
  /// EXPECT_CALL(*mock,
  /// CreateJob(Matcher<google::cloud::run::v2::CreateJobRequest const&>(_)))
  /// @endcode
  MOCK_METHOD(future<StatusOr<google::cloud::run::v2::Job>>, CreateJob,
              (google::cloud::run::v2::CreateJobRequest const& request),
              (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// EXPECT_CALL(*mock, CreateJob(_, _))
  /// @endcode
  MOCK_METHOD(StatusOr<google::longrunning::Operation>, CreateJob,
              (NoAwaitTag,
               google::cloud::run::v2::CreateJobRequest const& request),
              (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// using ::testing::Matcher;
  /// EXPECT_CALL(*mock, CreateJob(Matcher<google::longrunning::Operation
  /// const&>(_)))
  /// @endcode
  MOCK_METHOD(future<StatusOr<google::cloud::run::v2::Job>>, CreateJob,
              (google::longrunning::Operation const& operation), (override));

  MOCK_METHOD(StatusOr<google::cloud::run::v2::Job>, GetJob,
              (google::cloud::run::v2::GetJobRequest const& request),
              (override));

  MOCK_METHOD((StreamRange<google::cloud::run::v2::Job>), ListJobs,
              (google::cloud::run::v2::ListJobsRequest request), (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// using ::testing::Matcher;
  /// EXPECT_CALL(*mock,
  /// UpdateJob(Matcher<google::cloud::run::v2::UpdateJobRequest const&>(_)))
  /// @endcode
  MOCK_METHOD(future<StatusOr<google::cloud::run::v2::Job>>, UpdateJob,
              (google::cloud::run::v2::UpdateJobRequest const& request),
              (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// EXPECT_CALL(*mock, UpdateJob(_, _))
  /// @endcode
  MOCK_METHOD(StatusOr<google::longrunning::Operation>, UpdateJob,
              (NoAwaitTag,
               google::cloud::run::v2::UpdateJobRequest const& request),
              (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// using ::testing::Matcher;
  /// EXPECT_CALL(*mock, UpdateJob(Matcher<google::longrunning::Operation
  /// const&>(_)))
  /// @endcode
  MOCK_METHOD(future<StatusOr<google::cloud::run::v2::Job>>, UpdateJob,
              (google::longrunning::Operation const& operation), (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// using ::testing::Matcher;
  /// EXPECT_CALL(*mock,
  /// DeleteJob(Matcher<google::cloud::run::v2::DeleteJobRequest const&>(_)))
  /// @endcode
  MOCK_METHOD(future<StatusOr<google::cloud::run::v2::Job>>, DeleteJob,
              (google::cloud::run::v2::DeleteJobRequest const& request),
              (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// EXPECT_CALL(*mock, DeleteJob(_, _))
  /// @endcode
  MOCK_METHOD(StatusOr<google::longrunning::Operation>, DeleteJob,
              (NoAwaitTag,
               google::cloud::run::v2::DeleteJobRequest const& request),
              (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// using ::testing::Matcher;
  /// EXPECT_CALL(*mock, DeleteJob(Matcher<google::longrunning::Operation
  /// const&>(_)))
  /// @endcode
  MOCK_METHOD(future<StatusOr<google::cloud::run::v2::Job>>, DeleteJob,
              (google::longrunning::Operation const& operation), (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// using ::testing::Matcher;
  /// EXPECT_CALL(*mock, RunJob(Matcher<google::cloud::run::v2::RunJobRequest
  /// const&>(_)))
  /// @endcode
  MOCK_METHOD(future<StatusOr<google::cloud::run::v2::Execution>>, RunJob,
              (google::cloud::run::v2::RunJobRequest const& request),
              (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// EXPECT_CALL(*mock, RunJob(_, _))
  /// @endcode
  MOCK_METHOD(StatusOr<google::longrunning::Operation>, RunJob,
              (NoAwaitTag,
               google::cloud::run::v2::RunJobRequest const& request),
              (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// using ::testing::Matcher;
  /// EXPECT_CALL(*mock, RunJob(Matcher<google::longrunning::Operation
  /// const&>(_)))
  /// @endcode
  MOCK_METHOD(future<StatusOr<google::cloud::run::v2::Execution>>, RunJob,
              (google::longrunning::Operation const& operation), (override));

  MOCK_METHOD(StatusOr<google::iam::v1::Policy>, GetIamPolicy,
              (google::iam::v1::GetIamPolicyRequest const& request),
              (override));

  MOCK_METHOD(StatusOr<google::iam::v1::Policy>, SetIamPolicy,
              (google::iam::v1::SetIamPolicyRequest const& request),
              (override));

  MOCK_METHOD(StatusOr<google::iam::v1::TestIamPermissionsResponse>,
              TestIamPermissions,
              (google::iam::v1::TestIamPermissionsRequest const& request),
              (override));

  MOCK_METHOD((StreamRange<google::longrunning::Operation>), ListOperations,
              (google::longrunning::ListOperationsRequest request), (override));

  MOCK_METHOD(StatusOr<google::longrunning::Operation>, GetOperation,
              (google::longrunning::GetOperationRequest const& request),
              (override));

  MOCK_METHOD(Status, DeleteOperation,
              (google::longrunning::DeleteOperationRequest const& request),
              (override));

  MOCK_METHOD(StatusOr<google::longrunning::Operation>, WaitOperation,
              (google::longrunning::WaitOperationRequest const& request),
              (override));
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace run_v2_mocks
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_RUN_V2_MOCKS_MOCK_JOBS_CONNECTION_H
