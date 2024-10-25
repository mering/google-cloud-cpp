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
// source: google/cloud/language/v1/language_service.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_LANGUAGE_V1_LANGUAGE_CONNECTION_IDEMPOTENCY_POLICY_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_LANGUAGE_V1_LANGUAGE_CONNECTION_IDEMPOTENCY_POLICY_H

#include "google/cloud/idempotency.h"
#include "google/cloud/version.h"
#include "google/cloud/language/v1/language_service.grpc.pb.h"
#include <memory>

namespace google {
namespace cloud {
namespace language_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class LanguageServiceConnectionIdempotencyPolicy {
 public:
  virtual ~LanguageServiceConnectionIdempotencyPolicy();

  /// Create a new copy of this object.
  virtual std::unique_ptr<LanguageServiceConnectionIdempotencyPolicy> clone()
      const;

  virtual google::cloud::Idempotency AnalyzeSentiment(
      google::cloud::language::v1::AnalyzeSentimentRequest const& request);

  virtual google::cloud::Idempotency AnalyzeEntities(
      google::cloud::language::v1::AnalyzeEntitiesRequest const& request);

  virtual google::cloud::Idempotency AnalyzeEntitySentiment(
      google::cloud::language::v1::AnalyzeEntitySentimentRequest const&
          request);

  virtual google::cloud::Idempotency AnalyzeSyntax(
      google::cloud::language::v1::AnalyzeSyntaxRequest const& request);

  virtual google::cloud::Idempotency ClassifyText(
      google::cloud::language::v1::ClassifyTextRequest const& request);

  virtual google::cloud::Idempotency ModerateText(
      google::cloud::language::v1::ModerateTextRequest const& request);

  virtual google::cloud::Idempotency AnnotateText(
      google::cloud::language::v1::AnnotateTextRequest const& request);
};

std::unique_ptr<LanguageServiceConnectionIdempotencyPolicy>
MakeDefaultLanguageServiceConnectionIdempotencyPolicy();

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace language_v1
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_LANGUAGE_V1_LANGUAGE_CONNECTION_IDEMPOTENCY_POLICY_H
