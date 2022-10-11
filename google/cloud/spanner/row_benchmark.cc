// Copyright 2020 Google LLC
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     https://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#include "google/cloud/spanner/mocks/row.h"
#include "google/cloud/spanner/row.h"
#include <benchmark/benchmark.h>

namespace google {
namespace cloud {
namespace spanner {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN
namespace {

// Run on (6 X 2300 MHz CPU s)
// CPU Caches:
//   L1 Data 32K (x3)
//   L1 Instruction 32K (x3)
//   L2 Unified 256K (x3)
//   L3 Unified 46080K (x1)
// Load Average: 2.87, 2.31, 2.15
// -----------------------------------------------------------------------
// Benchmark                             Time             CPU   Iterations
// -----------------------------------------------------------------------
// BM_RowGetByPosition                 134 ns          133 ns      5258635
// BM_RowGetByColumnName               195 ns          194 ns      3590333

void BM_RowGetByPosition(benchmark::State& state) {
  Row row = spanner_mocks::MakeRow(1, "blah", true);
  for (auto _ : state) {
    auto unused_0 = row.get(0);
    benchmark::DoNotOptimize(unused_0);
    auto unused_1 = row.get(1);
    benchmark::DoNotOptimize(unused_1);
    auto unused_2 = row.get(2);
    benchmark::DoNotOptimize(unused_2);
  }
}
BENCHMARK(BM_RowGetByPosition);

void BM_RowGetByColumnName(benchmark::State& state) {
  Row row = spanner_mocks::MakeRow({
      {"a", Value(1)},       //
      {"b", Value("blah")},  //
      {"c", Value(true)}     //
  });
  for (auto _ : state) {
    auto unused_a = row.get("a");
    benchmark::DoNotOptimize(unused_a);
    auto unused_b = row.get("b");
    benchmark::DoNotOptimize(unused_b);
    auto unused_c = row.get("c");
    benchmark::DoNotOptimize(unused_c);
  }
}
BENCHMARK(BM_RowGetByColumnName);

}  // namespace
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace spanner
}  // namespace cloud
}  // namespace google
