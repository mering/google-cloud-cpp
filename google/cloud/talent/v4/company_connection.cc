// Copyright 2022 Google LLC
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
// source: google/cloud/talent/v4/company_service.proto

#include "google/cloud/talent/v4/company_connection.h"
#include "google/cloud/talent/v4/company_options.h"
#include "google/cloud/talent/v4/internal/company_connection_impl.h"
#include "google/cloud/talent/v4/internal/company_option_defaults.h"
#include "google/cloud/talent/v4/internal/company_stub_factory.h"
#include "google/cloud/talent/v4/internal/company_tracing_connection.h"
#include "google/cloud/background_threads.h"
#include "google/cloud/common_options.h"
#include "google/cloud/credentials.h"
#include "google/cloud/grpc_options.h"
#include "google/cloud/internal/pagination_range.h"
#include "google/cloud/internal/unified_grpc_credentials.h"
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace talent_v4 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

CompanyServiceConnection::~CompanyServiceConnection() = default;

StatusOr<google::cloud::talent::v4::Company>
CompanyServiceConnection::CreateCompany(
    google::cloud::talent::v4::CreateCompanyRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::cloud::talent::v4::Company>
CompanyServiceConnection::GetCompany(
    google::cloud::talent::v4::GetCompanyRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::cloud::talent::v4::Company>
CompanyServiceConnection::UpdateCompany(
    google::cloud::talent::v4::UpdateCompanyRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

Status CompanyServiceConnection::DeleteCompany(
    google::cloud::talent::v4::DeleteCompanyRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StreamRange<google::cloud::talent::v4::Company>
CompanyServiceConnection::ListCompanies(
    google::cloud::talent::v4::
        ListCompaniesRequest) {  // NOLINT(performance-unnecessary-value-param)
  return google::cloud::internal::MakeUnimplementedPaginationRange<
      StreamRange<google::cloud::talent::v4::Company>>();
}

StatusOr<google::longrunning::Operation> CompanyServiceConnection::GetOperation(
    google::longrunning::GetOperationRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

std::shared_ptr<CompanyServiceConnection> MakeCompanyServiceConnection(
    Options options) {
  internal::CheckExpectedOptions<CommonOptionList, GrpcOptionList,
                                 UnifiedCredentialsOptionList,
                                 CompanyServicePolicyOptionList>(options,
                                                                 __func__);
  options =
      talent_v4_internal::CompanyServiceDefaultOptions(std::move(options));
  auto background = internal::MakeBackgroundThreadsFactory(options)();
  auto auth = internal::CreateAuthenticationStrategy(background->cq(), options);
  auto stub = talent_v4_internal::CreateDefaultCompanyServiceStub(
      std::move(auth), options);
  return talent_v4_internal::MakeCompanyServiceTracingConnection(
      std::make_shared<talent_v4_internal::CompanyServiceConnectionImpl>(
          std::move(background), std::move(stub), std::move(options)));
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace talent_v4
}  // namespace cloud
}  // namespace google
