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
// source: google/cloud/aiplatform/v1/prediction_service.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_AIPLATFORM_V1_PREDICTION_CLIENT_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_AIPLATFORM_V1_PREDICTION_CLIENT_H

#include "google/cloud/aiplatform/v1/prediction_connection.h"
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
/// A service for online predictions and explanations.
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
class PredictionServiceClient {
 public:
  explicit PredictionServiceClient(
      std::shared_ptr<PredictionServiceConnection> connection,
      Options opts = {});
  ~PredictionServiceClient();

  ///@{
  /// @name Copy and move support
  PredictionServiceClient(PredictionServiceClient const&) = default;
  PredictionServiceClient& operator=(PredictionServiceClient const&) = default;
  PredictionServiceClient(PredictionServiceClient&&) = default;
  PredictionServiceClient& operator=(PredictionServiceClient&&) = default;
  ///@}

  ///@{
  /// @name Equality
  friend bool operator==(PredictionServiceClient const& a,
                         PredictionServiceClient const& b) {
    return a.connection_ == b.connection_;
  }
  friend bool operator!=(PredictionServiceClient const& a,
                         PredictionServiceClient const& b) {
    return !(a == b);
  }
  ///@}

  // clang-format off
  ///
  /// Perform an online prediction.
  ///
  /// @param endpoint  Required. The name of the Endpoint requested to serve the prediction.
  ///  Format:
  ///  `projects/{project}/locations/{location}/endpoints/{endpoint}`
  /// @param instances  Required. The instances that are the input to the prediction call.
  ///  A DeployedModel may have an upper limit on the number of instances it
  ///  supports per request, and when it is exceeded the prediction call errors
  ///  in case of AutoML Models, or, in case of customer created Models, the
  ///  behaviour is as documented by that Model.
  ///  The schema of any single instance may be specified via Endpoint's
  ///  DeployedModels' [Model's][google.cloud.aiplatform.v1.DeployedModel.model]
  ///  [PredictSchemata's][google.cloud.aiplatform.v1.Model.predict_schemata]
  ///  [instance_schema_uri][google.cloud.aiplatform.v1.PredictSchemata.instance_schema_uri].
  /// @param parameters  The parameters that govern the prediction. The schema of the parameters may
  ///  be specified via Endpoint's DeployedModels' [Model's
  ///  ][google.cloud.aiplatform.v1.DeployedModel.model]
  ///  [PredictSchemata's][google.cloud.aiplatform.v1.Model.predict_schemata]
  ///  [parameters_schema_uri][google.cloud.aiplatform.v1.PredictSchemata.parameters_schema_uri].
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return the result of the RPC. The response message type
  ///     ([google.cloud.aiplatform.v1.PredictResponse])
  ///     is mapped to a C++ class using the [Protobuf mapping rules].
  ///     If the request fails, the [`StatusOr`] contains the error details.
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.aiplatform.v1.PredictRequest]: @googleapis_reference_link{google/cloud/aiplatform/v1/prediction_service.proto#L142}
  /// [google.cloud.aiplatform.v1.PredictResponse]: @googleapis_reference_link{google/cloud/aiplatform/v1/prediction_service.proto#L175}
  ///
  // clang-format on
  StatusOr<google::cloud::aiplatform::v1::PredictResponse> Predict(
      std::string const& endpoint,
      std::vector<google::protobuf::Value> const& instances,
      google::protobuf::Value const& parameters, Options opts = {});

  // clang-format off
  ///
  /// Perform an online prediction.
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.cloud.aiplatform.v1.PredictRequest].
  ///     Proto messages are converted to C++ classes by Protobuf, using the
  ///     [Protobuf mapping rules].
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return the result of the RPC. The response message type
  ///     ([google.cloud.aiplatform.v1.PredictResponse])
  ///     is mapped to a C++ class using the [Protobuf mapping rules].
  ///     If the request fails, the [`StatusOr`] contains the error details.
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.aiplatform.v1.PredictRequest]: @googleapis_reference_link{google/cloud/aiplatform/v1/prediction_service.proto#L142}
  /// [google.cloud.aiplatform.v1.PredictResponse]: @googleapis_reference_link{google/cloud/aiplatform/v1/prediction_service.proto#L175}
  ///
  // clang-format on
  StatusOr<google::cloud::aiplatform::v1::PredictResponse> Predict(
      google::cloud::aiplatform::v1::PredictRequest const& request,
      Options opts = {});

  // clang-format off
  ///
  /// Perform an online prediction with an arbitrary HTTP payload.
  ///
  /// The response includes the following HTTP headers:
  ///
  /// * `X-Vertex-AI-Endpoint-Id`: ID of the
  /// [Endpoint][google.cloud.aiplatform.v1.Endpoint] that served this
  /// prediction.
  ///
  /// * `X-Vertex-AI-Deployed-Model-Id`: ID of the Endpoint's
  /// [DeployedModel][google.cloud.aiplatform.v1.DeployedModel] that served this
  /// prediction.
  ///
  /// @param endpoint  Required. The name of the Endpoint requested to serve the prediction.
  ///  Format:
  ///  `projects/{project}/locations/{location}/endpoints/{endpoint}`
  /// @param http_body  The prediction input. Supports HTTP headers and arbitrary data payload.
  ///  @n
  ///  A [DeployedModel][google.cloud.aiplatform.v1.DeployedModel] may have an
  ///  upper limit on the number of instances it supports per request. When this
  ///  limit it is exceeded for an AutoML model, the
  ///  [RawPredict][google.cloud.aiplatform.v1.PredictionService.RawPredict]
  ///  method returns an error. When this limit is exceeded for a custom-trained
  ///  model, the behavior varies depending on the model.
  ///  @n
  ///  You can specify the schema for each instance in the
  ///  [predict_schemata.instance_schema_uri][google.cloud.aiplatform.v1.PredictSchemata.instance_schema_uri]
  ///  field when you create a [Model][google.cloud.aiplatform.v1.Model]. This
  ///  schema applies when you deploy the `Model` as a `DeployedModel` to an
  ///  [Endpoint][google.cloud.aiplatform.v1.Endpoint] and use the `RawPredict`
  ///  method.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return the result of the RPC. The response message type
  ///     ([google.api.HttpBody])
  ///     is mapped to a C++ class using the [Protobuf mapping rules].
  ///     If the request fails, the [`StatusOr`] contains the error details.
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.api.HttpBody]: @googleapis_reference_link{google/api/httpbody.proto#L71}
  /// [google.cloud.aiplatform.v1.RawPredictRequest]: @googleapis_reference_link{google/cloud/aiplatform/v1/prediction_service.proto#L212}
  ///
  // clang-format on
  StatusOr<google::api::HttpBody> RawPredict(
      std::string const& endpoint, google::api::HttpBody const& http_body,
      Options opts = {});

  // clang-format off
  ///
  /// Perform an online prediction with an arbitrary HTTP payload.
  ///
  /// The response includes the following HTTP headers:
  ///
  /// * `X-Vertex-AI-Endpoint-Id`: ID of the
  /// [Endpoint][google.cloud.aiplatform.v1.Endpoint] that served this
  /// prediction.
  ///
  /// * `X-Vertex-AI-Deployed-Model-Id`: ID of the Endpoint's
  /// [DeployedModel][google.cloud.aiplatform.v1.DeployedModel] that served this
  /// prediction.
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.cloud.aiplatform.v1.RawPredictRequest].
  ///     Proto messages are converted to C++ classes by Protobuf, using the
  ///     [Protobuf mapping rules].
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return the result of the RPC. The response message type
  ///     ([google.api.HttpBody])
  ///     is mapped to a C++ class using the [Protobuf mapping rules].
  ///     If the request fails, the [`StatusOr`] contains the error details.
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.api.HttpBody]: @googleapis_reference_link{google/api/httpbody.proto#L71}
  /// [google.cloud.aiplatform.v1.RawPredictRequest]: @googleapis_reference_link{google/cloud/aiplatform/v1/prediction_service.proto#L212}
  ///
  // clang-format on
  StatusOr<google::api::HttpBody> RawPredict(
      google::cloud::aiplatform::v1::RawPredictRequest const& request,
      Options opts = {});

  // clang-format off
  ///
  /// Perform an unary online prediction request for Vertex first-party products
  /// and frameworks.
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.cloud.aiplatform.v1.DirectPredictRequest].
  ///     Proto messages are converted to C++ classes by Protobuf, using the
  ///     [Protobuf mapping rules].
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return the result of the RPC. The response message type
  ///     ([google.cloud.aiplatform.v1.DirectPredictResponse])
  ///     is mapped to a C++ class using the [Protobuf mapping rules].
  ///     If the request fails, the [`StatusOr`] contains the error details.
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.aiplatform.v1.DirectPredictRequest]: @googleapis_reference_link{google/cloud/aiplatform/v1/prediction_service.proto#L243}
  /// [google.cloud.aiplatform.v1.DirectPredictResponse]: @googleapis_reference_link{google/cloud/aiplatform/v1/prediction_service.proto#L263}
  ///
  // clang-format on
  StatusOr<google::cloud::aiplatform::v1::DirectPredictResponse> DirectPredict(
      google::cloud::aiplatform::v1::DirectPredictRequest const& request,
      Options opts = {});

  // clang-format off
  ///
  /// Perform an online prediction request through gRPC.
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.cloud.aiplatform.v1.DirectRawPredictRequest].
  ///     Proto messages are converted to C++ classes by Protobuf, using the
  ///     [Protobuf mapping rules].
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return the result of the RPC. The response message type
  ///     ([google.cloud.aiplatform.v1.DirectRawPredictResponse])
  ///     is mapped to a C++ class using the [Protobuf mapping rules].
  ///     If the request fails, the [`StatusOr`] contains the error details.
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.aiplatform.v1.DirectRawPredictRequest]: @googleapis_reference_link{google/cloud/aiplatform/v1/prediction_service.proto#L273}
  /// [google.cloud.aiplatform.v1.DirectRawPredictResponse]: @googleapis_reference_link{google/cloud/aiplatform/v1/prediction_service.proto#L299}
  ///
  // clang-format on
  StatusOr<google::cloud::aiplatform::v1::DirectRawPredictResponse>
  DirectRawPredict(
      google::cloud::aiplatform::v1::DirectRawPredictRequest const& request,
      Options opts = {});

  // clang-format off
  ///
  /// Perform a streaming online prediction request for Vertex first-party
  /// products and frameworks.
  ///
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return An object representing the bidirectional streaming
  ///     RPC. Applications can send multiple request messages and receive
  ///     multiple response messages through this API. Bidirectional streaming
  ///     RPCs can impose restrictions on the sequence of request and response
  ///     messages. Please consult the service documentation for details.
  ///     The request message type ([google.cloud.aiplatform.v1.StreamingPredictRequest]) and response messages
  ///     ([google.cloud.aiplatform.v1.StreamingPredictResponse]) are mapped to C++ classes using the
  ///     [Protobuf mapping rules].
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.aiplatform.v1.StreamingPredictRequest]: @googleapis_reference_link{google/cloud/aiplatform/v1/prediction_service.proto#L310}
  /// [google.cloud.aiplatform.v1.StreamingPredictResponse]: @googleapis_reference_link{google/cloud/aiplatform/v1/prediction_service.proto#L330}
  ///
  // clang-format on
  std::unique_ptr<::google::cloud::AsyncStreamingReadWriteRpc<
      google::cloud::aiplatform::v1::StreamingPredictRequest,
      google::cloud::aiplatform::v1::StreamingPredictResponse>>
  AsyncStreamingPredict(Options opts = {});

  // clang-format off
  ///
  /// Perform a server-side streaming online prediction request for Vertex
  /// LLM streaming.
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.cloud.aiplatform.v1.StreamingPredictRequest].
  ///     Proto messages are converted to C++ classes by Protobuf, using the
  ///     [Protobuf mapping rules].
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return the result of the RPC. The response message type
  ///     ([google.cloud.aiplatform.v1.StreamingPredictResponse])
  ///     is mapped to a C++ class using the [Protobuf mapping rules].
  ///     If the request fails, the [`StatusOr`] contains the error details.
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.aiplatform.v1.StreamingPredictRequest]: @googleapis_reference_link{google/cloud/aiplatform/v1/prediction_service.proto#L310}
  /// [google.cloud.aiplatform.v1.StreamingPredictResponse]: @googleapis_reference_link{google/cloud/aiplatform/v1/prediction_service.proto#L330}
  ///
  // clang-format on
  StreamRange<google::cloud::aiplatform::v1::StreamingPredictResponse>
  ServerStreamingPredict(
      google::cloud::aiplatform::v1::StreamingPredictRequest const& request,
      Options opts = {});

  // clang-format off
  ///
  /// Perform a streaming online prediction request through gRPC.
  ///
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return An object representing the bidirectional streaming
  ///     RPC. Applications can send multiple request messages and receive
  ///     multiple response messages through this API. Bidirectional streaming
  ///     RPCs can impose restrictions on the sequence of request and response
  ///     messages. Please consult the service documentation for details.
  ///     The request message type ([google.cloud.aiplatform.v1.StreamingRawPredictRequest]) and response messages
  ///     ([google.cloud.aiplatform.v1.StreamingRawPredictResponse]) are mapped to C++ classes using the
  ///     [Protobuf mapping rules].
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.aiplatform.v1.StreamingRawPredictRequest]: @googleapis_reference_link{google/cloud/aiplatform/v1/prediction_service.proto#L351}
  /// [google.cloud.aiplatform.v1.StreamingRawPredictResponse]: @googleapis_reference_link{google/cloud/aiplatform/v1/prediction_service.proto#L377}
  ///
  // clang-format on
  std::unique_ptr<::google::cloud::AsyncStreamingReadWriteRpc<
      google::cloud::aiplatform::v1::StreamingRawPredictRequest,
      google::cloud::aiplatform::v1::StreamingRawPredictResponse>>
  AsyncStreamingRawPredict(Options opts = {});

  // clang-format off
  ///
  /// Perform an online explanation.
  ///
  /// If
  /// [deployed_model_id][google.cloud.aiplatform.v1.ExplainRequest.deployed_model_id]
  /// is specified, the corresponding DeployModel must have
  /// [explanation_spec][google.cloud.aiplatform.v1.DeployedModel.explanation_spec]
  /// populated. If
  /// [deployed_model_id][google.cloud.aiplatform.v1.ExplainRequest.deployed_model_id]
  /// is not specified, all DeployedModels must have
  /// [explanation_spec][google.cloud.aiplatform.v1.DeployedModel.explanation_spec]
  /// populated.
  ///
  /// @param endpoint  Required. The name of the Endpoint requested to serve the explanation.
  ///  Format:
  ///  `projects/{project}/locations/{location}/endpoints/{endpoint}`
  /// @param instances  Required. The instances that are the input to the explanation call.
  ///  A DeployedModel may have an upper limit on the number of instances it
  ///  supports per request, and when it is exceeded the explanation call errors
  ///  in case of AutoML Models, or, in case of customer created Models, the
  ///  behaviour is as documented by that Model.
  ///  The schema of any single instance may be specified via Endpoint's
  ///  DeployedModels' [Model's][google.cloud.aiplatform.v1.DeployedModel.model]
  ///  [PredictSchemata's][google.cloud.aiplatform.v1.Model.predict_schemata]
  ///  [instance_schema_uri][google.cloud.aiplatform.v1.PredictSchemata.instance_schema_uri].
  /// @param parameters  The parameters that govern the prediction. The schema of the parameters may
  ///  be specified via Endpoint's DeployedModels' [Model's
  ///  ][google.cloud.aiplatform.v1.DeployedModel.model]
  ///  [PredictSchemata's][google.cloud.aiplatform.v1.Model.predict_schemata]
  ///  [parameters_schema_uri][google.cloud.aiplatform.v1.PredictSchemata.parameters_schema_uri].
  /// @param deployed_model_id  If specified, this ExplainRequest will be served by the chosen
  ///  DeployedModel, overriding
  ///  [Endpoint.traffic_split][google.cloud.aiplatform.v1.Endpoint.traffic_split].
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return the result of the RPC. The response message type
  ///     ([google.cloud.aiplatform.v1.ExplainResponse])
  ///     is mapped to a C++ class using the [Protobuf mapping rules].
  ///     If the request fails, the [`StatusOr`] contains the error details.
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.aiplatform.v1.ExplainRequest]: @googleapis_reference_link{google/cloud/aiplatform/v1/prediction_service.proto#L384}
  /// [google.cloud.aiplatform.v1.ExplainRequest.deployed_model_id]: @googleapis_reference_link{google/cloud/aiplatform/v1/prediction_service.proto#L427}
  /// [google.cloud.aiplatform.v1.ExplainResponse]: @googleapis_reference_link{google/cloud/aiplatform/v1/prediction_service.proto#L432}
  ///
  // clang-format on
  StatusOr<google::cloud::aiplatform::v1::ExplainResponse> Explain(
      std::string const& endpoint,
      std::vector<google::protobuf::Value> const& instances,
      google::protobuf::Value const& parameters,
      std::string const& deployed_model_id, Options opts = {});

  // clang-format off
  ///
  /// Perform an online explanation.
  ///
  /// If
  /// [deployed_model_id][google.cloud.aiplatform.v1.ExplainRequest.deployed_model_id]
  /// is specified, the corresponding DeployModel must have
  /// [explanation_spec][google.cloud.aiplatform.v1.DeployedModel.explanation_spec]
  /// populated. If
  /// [deployed_model_id][google.cloud.aiplatform.v1.ExplainRequest.deployed_model_id]
  /// is not specified, all DeployedModels must have
  /// [explanation_spec][google.cloud.aiplatform.v1.DeployedModel.explanation_spec]
  /// populated.
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.cloud.aiplatform.v1.ExplainRequest].
  ///     Proto messages are converted to C++ classes by Protobuf, using the
  ///     [Protobuf mapping rules].
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return the result of the RPC. The response message type
  ///     ([google.cloud.aiplatform.v1.ExplainResponse])
  ///     is mapped to a C++ class using the [Protobuf mapping rules].
  ///     If the request fails, the [`StatusOr`] contains the error details.
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.aiplatform.v1.ExplainRequest]: @googleapis_reference_link{google/cloud/aiplatform/v1/prediction_service.proto#L384}
  /// [google.cloud.aiplatform.v1.ExplainRequest.deployed_model_id]: @googleapis_reference_link{google/cloud/aiplatform/v1/prediction_service.proto#L427}
  /// [google.cloud.aiplatform.v1.ExplainResponse]: @googleapis_reference_link{google/cloud/aiplatform/v1/prediction_service.proto#L432}
  ///
  // clang-format on
  StatusOr<google::cloud::aiplatform::v1::ExplainResponse> Explain(
      google::cloud::aiplatform::v1::ExplainRequest const& request,
      Options opts = {});

 private:
  std::shared_ptr<PredictionServiceConnection> connection_;
  Options options_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace aiplatform_v1
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_AIPLATFORM_V1_PREDICTION_CLIENT_H
