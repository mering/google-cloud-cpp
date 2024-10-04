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
// source: google/cloud/developerconnect/v1/developer_connect.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DEVELOPERCONNECT_V1_MOCKS_MOCK_DEVELOPER_CONNECT_CONNECTION_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DEVELOPERCONNECT_V1_MOCKS_MOCK_DEVELOPER_CONNECT_CONNECTION_H

#include "google/cloud/developerconnect/v1/developer_connect_connection.h"
#include <gmock/gmock.h>

namespace google {
namespace cloud {
namespace developerconnect_v1_mocks {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

/**
 * A class to mock `DeveloperConnectConnection`.
 *
 * Application developers may want to test their code with simulated responses,
 * including errors, from an object of type `DeveloperConnectClient`. To do so,
 * construct an object of type `DeveloperConnectClient` with an instance of this
 * class. Then use the Google Test framework functions to program the behavior
 * of this mock.
 *
 * @see [This example][bq-mock] for how to test your application with GoogleTest.
 * While the example showcases types from the BigQuery library, the underlying
 * principles apply for any pair of `*Client` and `*Connection`.
 *
 * [bq-mock]: @cloud_cpp_docs_link{bigquery,bigquery-read-mock}
 */
class MockDeveloperConnectConnection
    : public developerconnect_v1::DeveloperConnectConnection {
 public:
  MOCK_METHOD(Options, options, (), (override));

  MOCK_METHOD(
      (StreamRange<google::cloud::developerconnect::v1::Connection>),
      ListConnections,
      (google::cloud::developerconnect::v1::ListConnectionsRequest request),
      (override));

  MOCK_METHOD(StatusOr<google::cloud::developerconnect::v1::Connection>,
              GetConnection,
              (google::cloud::developerconnect::v1::GetConnectionRequest const&
                   request),
              (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// using ::testing::Matcher;
  /// EXPECT_CALL(*mock,
  /// CreateConnection(Matcher<google::cloud::developerconnect::v1::CreateConnectionRequest
  /// const&>(_)))
  /// @endcode
  MOCK_METHOD(
      future<StatusOr<google::cloud::developerconnect::v1::Connection>>,
      CreateConnection,
      (google::cloud::developerconnect::v1::CreateConnectionRequest const&
           request),
      (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// EXPECT_CALL(*mock, CreateConnection(_, _))
  /// @endcode
  MOCK_METHOD(
      StatusOr<google::longrunning::Operation>, CreateConnection,
      (NoAwaitTag,
       google::cloud::developerconnect::v1::CreateConnectionRequest const&
           request),
      (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// using ::testing::Matcher;
  /// EXPECT_CALL(*mock, CreateConnection(Matcher<google::longrunning::Operation
  /// const&>(_)))
  /// @endcode
  MOCK_METHOD(future<StatusOr<google::cloud::developerconnect::v1::Connection>>,
              CreateConnection,
              (google::longrunning::Operation const& operation), (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// using ::testing::Matcher;
  /// EXPECT_CALL(*mock,
  /// UpdateConnection(Matcher<google::cloud::developerconnect::v1::UpdateConnectionRequest
  /// const&>(_)))
  /// @endcode
  MOCK_METHOD(
      future<StatusOr<google::cloud::developerconnect::v1::Connection>>,
      UpdateConnection,
      (google::cloud::developerconnect::v1::UpdateConnectionRequest const&
           request),
      (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// EXPECT_CALL(*mock, UpdateConnection(_, _))
  /// @endcode
  MOCK_METHOD(
      StatusOr<google::longrunning::Operation>, UpdateConnection,
      (NoAwaitTag,
       google::cloud::developerconnect::v1::UpdateConnectionRequest const&
           request),
      (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// using ::testing::Matcher;
  /// EXPECT_CALL(*mock, UpdateConnection(Matcher<google::longrunning::Operation
  /// const&>(_)))
  /// @endcode
  MOCK_METHOD(future<StatusOr<google::cloud::developerconnect::v1::Connection>>,
              UpdateConnection,
              (google::longrunning::Operation const& operation), (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// using ::testing::Matcher;
  /// EXPECT_CALL(*mock,
  /// DeleteConnection(Matcher<google::cloud::developerconnect::v1::DeleteConnectionRequest
  /// const&>(_)))
  /// @endcode
  MOCK_METHOD(
      future<StatusOr<google::cloud::developerconnect::v1::OperationMetadata>>,
      DeleteConnection,
      (google::cloud::developerconnect::v1::DeleteConnectionRequest const&
           request),
      (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// EXPECT_CALL(*mock, DeleteConnection(_, _))
  /// @endcode
  MOCK_METHOD(
      StatusOr<google::longrunning::Operation>, DeleteConnection,
      (NoAwaitTag,
       google::cloud::developerconnect::v1::DeleteConnectionRequest const&
           request),
      (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// using ::testing::Matcher;
  /// EXPECT_CALL(*mock, DeleteConnection(Matcher<google::longrunning::Operation
  /// const&>(_)))
  /// @endcode
  MOCK_METHOD(
      future<StatusOr<google::cloud::developerconnect::v1::OperationMetadata>>,
      DeleteConnection, (google::longrunning::Operation const& operation),
      (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// using ::testing::Matcher;
  /// EXPECT_CALL(*mock,
  /// CreateGitRepositoryLink(Matcher<google::cloud::developerconnect::v1::CreateGitRepositoryLinkRequest
  /// const&>(_)))
  /// @endcode
  MOCK_METHOD(
      future<StatusOr<google::cloud::developerconnect::v1::GitRepositoryLink>>,
      CreateGitRepositoryLink,
      (google::cloud::developerconnect::v1::
           CreateGitRepositoryLinkRequest const& request),
      (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// EXPECT_CALL(*mock, CreateGitRepositoryLink(_, _))
  /// @endcode
  MOCK_METHOD(StatusOr<google::longrunning::Operation>, CreateGitRepositoryLink,
              (NoAwaitTag, google::cloud::developerconnect::v1::
                               CreateGitRepositoryLinkRequest const& request),
              (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// using ::testing::Matcher;
  /// EXPECT_CALL(*mock,
  /// CreateGitRepositoryLink(Matcher<google::longrunning::Operation
  /// const&>(_)))
  /// @endcode
  MOCK_METHOD(
      future<StatusOr<google::cloud::developerconnect::v1::GitRepositoryLink>>,
      CreateGitRepositoryLink,
      (google::longrunning::Operation const& operation), (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// using ::testing::Matcher;
  /// EXPECT_CALL(*mock,
  /// DeleteGitRepositoryLink(Matcher<google::cloud::developerconnect::v1::DeleteGitRepositoryLinkRequest
  /// const&>(_)))
  /// @endcode
  MOCK_METHOD(
      future<StatusOr<google::cloud::developerconnect::v1::OperationMetadata>>,
      DeleteGitRepositoryLink,
      (google::cloud::developerconnect::v1::
           DeleteGitRepositoryLinkRequest const& request),
      (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// EXPECT_CALL(*mock, DeleteGitRepositoryLink(_, _))
  /// @endcode
  MOCK_METHOD(StatusOr<google::longrunning::Operation>, DeleteGitRepositoryLink,
              (NoAwaitTag, google::cloud::developerconnect::v1::
                               DeleteGitRepositoryLinkRequest const& request),
              (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// using ::testing::Matcher;
  /// EXPECT_CALL(*mock,
  /// DeleteGitRepositoryLink(Matcher<google::longrunning::Operation
  /// const&>(_)))
  /// @endcode
  MOCK_METHOD(
      future<StatusOr<google::cloud::developerconnect::v1::OperationMetadata>>,
      DeleteGitRepositoryLink,
      (google::longrunning::Operation const& operation), (override));

  MOCK_METHOD(
      (StreamRange<google::cloud::developerconnect::v1::GitRepositoryLink>),
      ListGitRepositoryLinks,
      (google::cloud::developerconnect::v1::ListGitRepositoryLinksRequest
           request),
      (override));

  MOCK_METHOD(
      StatusOr<google::cloud::developerconnect::v1::GitRepositoryLink>,
      GetGitRepositoryLink,
      (google::cloud::developerconnect::v1::GetGitRepositoryLinkRequest const&
           request),
      (override));

  MOCK_METHOD(
      StatusOr<
          google::cloud::developerconnect::v1::FetchReadWriteTokenResponse>,
      FetchReadWriteToken,
      (google::cloud::developerconnect::v1::FetchReadWriteTokenRequest const&
           request),
      (override));

  MOCK_METHOD(
      StatusOr<google::cloud::developerconnect::v1::FetchReadTokenResponse>,
      FetchReadToken,
      (google::cloud::developerconnect::v1::FetchReadTokenRequest const&
           request),
      (override));

  MOCK_METHOD(
      (StreamRange<google::cloud::developerconnect::v1::LinkableGitRepository>),
      FetchLinkableGitRepositories,
      (google::cloud::developerconnect::v1::FetchLinkableGitRepositoriesRequest
           request),
      (override));

  MOCK_METHOD(StatusOr<google::cloud::developerconnect::v1::
                           FetchGitHubInstallationsResponse>,
              FetchGitHubInstallations,
              (google::cloud::developerconnect::v1::
                   FetchGitHubInstallationsRequest const& request),
              (override));

  MOCK_METHOD(
      (StreamRange<std::string>), FetchGitRefs,
      (google::cloud::developerconnect::v1::FetchGitRefsRequest request),
      (override));

  MOCK_METHOD((StreamRange<google::cloud::location::Location>), ListLocations,
              (google::cloud::location::ListLocationsRequest request),
              (override));

  MOCK_METHOD(StatusOr<google::cloud::location::Location>, GetLocation,
              (google::cloud::location::GetLocationRequest const& request),
              (override));

  MOCK_METHOD((StreamRange<google::longrunning::Operation>), ListOperations,
              (google::longrunning::ListOperationsRequest request), (override));

  MOCK_METHOD(StatusOr<google::longrunning::Operation>, GetOperation,
              (google::longrunning::GetOperationRequest const& request),
              (override));

  MOCK_METHOD(Status, DeleteOperation,
              (google::longrunning::DeleteOperationRequest const& request),
              (override));

  MOCK_METHOD(Status, CancelOperation,
              (google::longrunning::CancelOperationRequest const& request),
              (override));
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace developerconnect_v1_mocks
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DEVELOPERCONNECT_V1_MOCKS_MOCK_DEVELOPER_CONNECT_CONNECTION_H
