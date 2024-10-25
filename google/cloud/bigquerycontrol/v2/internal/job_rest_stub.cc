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
// source: google/cloud/bigquery/v2/job.proto

#include "google/cloud/bigquerycontrol/v2/internal/job_rest_stub.h"
#include "google/cloud/common_options.h"
#include "google/cloud/internal/absl_str_cat_quiet.h"
#include "google/cloud/internal/rest_stub_helpers.h"
#include "google/cloud/status_or.h"
#include "google/cloud/bigquery/v2/job.pb.h"
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace bigquerycontrol_v2_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

DefaultJobServiceRestStub::DefaultJobServiceRestStub(Options options)
    : service_(rest_internal::MakePooledRestClient(
          options.get<EndpointOption>(), options)),
      options_(std::move(options)) {}

DefaultJobServiceRestStub::DefaultJobServiceRestStub(
    std::shared_ptr<rest_internal::RestClient> service, Options options)
    : service_(std::move(service)), options_(std::move(options)) {}

StatusOr<google::cloud::bigquery::v2::JobCancelResponse>
DefaultJobServiceRestStub::CancelJob(
    google::cloud::rest_internal::RestContext& rest_context,
    Options const& options,
    google::cloud::bigquery::v2::CancelJobRequest const& request) {
  std::vector<std::pair<std::string, std::string>> query_params;
  query_params.push_back({"location", request.location()});
  query_params =
      rest_internal::TrimEmptyQueryParameters(std::move(query_params));
  return rest_internal::Post<google::cloud::bigquery::v2::JobCancelResponse>(
      *service_, rest_context, request, false,
      absl::StrCat("/", "bigquery", "/",
                   rest_internal::DetermineApiVersion("v2", options), "/",
                   "projects", "/", request.project_id(), "/", "jobs", "/",
                   request.job_id(), "/", "cancel"),
      std::move(query_params));
}

StatusOr<google::cloud::bigquery::v2::Job> DefaultJobServiceRestStub::GetJob(
    google::cloud::rest_internal::RestContext& rest_context,
    Options const& options,
    google::cloud::bigquery::v2::GetJobRequest const& request) {
  std::vector<std::pair<std::string, std::string>> query_params;
  query_params.push_back({"location", request.location()});
  query_params =
      rest_internal::TrimEmptyQueryParameters(std::move(query_params));
  return rest_internal::Get<google::cloud::bigquery::v2::Job>(
      *service_, rest_context, request, false,
      absl::StrCat("/", "bigquery", "/",
                   rest_internal::DetermineApiVersion("v2", options), "/",
                   "projects", "/", request.project_id(), "/", "jobs", "/",
                   request.job_id()),
      std::move(query_params));
}

StatusOr<google::cloud::bigquery::v2::Job> DefaultJobServiceRestStub::InsertJob(
    google::cloud::rest_internal::RestContext& rest_context,
    Options const& options,
    google::cloud::bigquery::v2::InsertJobRequest const& request) {
  std::vector<std::pair<std::string, std::string>> query_params;
  return rest_internal::Post<google::cloud::bigquery::v2::Job>(
      *service_, rest_context, request.job(), false,
      absl::StrCat("/", "bigquery", "/",
                   rest_internal::DetermineApiVersion("v2", options), "/",
                   "projects", "/", request.project_id(), "/", "jobs"),
      std::move(query_params));
}

Status DefaultJobServiceRestStub::DeleteJob(
    google::cloud::rest_internal::RestContext& rest_context,
    Options const& options,
    google::cloud::bigquery::v2::DeleteJobRequest const& request) {
  std::vector<std::pair<std::string, std::string>> query_params;
  query_params.push_back({"location", request.location()});
  query_params =
      rest_internal::TrimEmptyQueryParameters(std::move(query_params));
  return rest_internal::Delete<google::cloud::rest_internal::EmptyResponseType>(
      *service_, rest_context, request, false,
      absl::StrCat("/", "bigquery", "/",
                   rest_internal::DetermineApiVersion("v2", options), "/",
                   "projects", "/", request.project_id(), "/", "jobs", "/",
                   request.job_id(), "/", "delete"),
      std::move(query_params));
}

StatusOr<google::cloud::bigquery::v2::JobList>
DefaultJobServiceRestStub::ListJobs(
    google::cloud::rest_internal::RestContext& rest_context,
    Options const& options,
    google::cloud::bigquery::v2::ListJobsRequest const& request) {
  std::vector<std::pair<std::string, std::string>> query_params;
  query_params.push_back({"all_users", (request.all_users() ? "1" : "0")});
  query_params.push_back(
      {"max_results", (request.has_max_results()
                           ? std::to_string(request.max_results().value())
                           : "")});
  query_params.push_back(
      {"min_creation_time", std::to_string(request.min_creation_time())});
  query_params.push_back(
      {"max_creation_time",
       (request.has_max_creation_time()
            ? std::to_string(request.max_creation_time().value())
            : "")});
  query_params.push_back({"page_token", request.page_token()});
  query_params.push_back({"projection", std::to_string(request.projection())});
  query_params.push_back({"parent_job_id", request.parent_job_id()});
  query_params =
      rest_internal::TrimEmptyQueryParameters(std::move(query_params));
  return rest_internal::Get<google::cloud::bigquery::v2::JobList>(
      *service_, rest_context, request, false,
      absl::StrCat("/", "bigquery", "/",
                   rest_internal::DetermineApiVersion("v2", options), "/",
                   "projects", "/", request.project_id(), "/", "jobs"),
      std::move(query_params));
}

StatusOr<google::cloud::bigquery::v2::GetQueryResultsResponse>
DefaultJobServiceRestStub::GetQueryResults(
    google::cloud::rest_internal::RestContext& rest_context,
    Options const& options,
    google::cloud::bigquery::v2::GetQueryResultsRequest const& request) {
  std::vector<std::pair<std::string, std::string>> query_params;
  query_params.push_back(
      {"start_index", (request.has_start_index()
                           ? std::to_string(request.start_index().value())
                           : "")});
  query_params.push_back({"page_token", request.page_token()});
  query_params.push_back(
      {"max_results", (request.has_max_results()
                           ? std::to_string(request.max_results().value())
                           : "")});
  query_params.push_back(
      {"timeout_ms",
       (request.has_timeout_ms() ? std::to_string(request.timeout_ms().value())
                                 : "")});
  query_params.push_back({"location", request.location()});
  query_params =
      rest_internal::TrimEmptyQueryParameters(std::move(query_params));
  return rest_internal::Get<
      google::cloud::bigquery::v2::GetQueryResultsResponse>(
      *service_, rest_context, request, false,
      absl::StrCat("/", "bigquery", "/",
                   rest_internal::DetermineApiVersion("v2", options), "/",
                   "projects", "/", request.project_id(), "/", "queries", "/",
                   request.job_id()),
      std::move(query_params));
}

StatusOr<google::cloud::bigquery::v2::QueryResponse>
DefaultJobServiceRestStub::Query(
    google::cloud::rest_internal::RestContext& rest_context,
    Options const& options,
    google::cloud::bigquery::v2::PostQueryRequest const& request) {
  std::vector<std::pair<std::string, std::string>> query_params;
  return rest_internal::Post<google::cloud::bigquery::v2::QueryResponse>(
      *service_, rest_context, request.query_request(), false,
      absl::StrCat("/", "bigquery", "/",
                   rest_internal::DetermineApiVersion("v2", options), "/",
                   "projects", "/", request.project_id(), "/", "queries"),
      std::move(query_params));
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace bigquerycontrol_v2_internal
}  // namespace cloud
}  // namespace google
