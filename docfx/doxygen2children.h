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

#ifndef GOOGLE_CLOUD_CPP_DOCFX_DOXYGEN2CHILDREN_H
#define GOOGLE_CLOUD_CPP_DOCFX_DOXYGEN2CHILDREN_H

#include "docfx/yaml_context.h"
#include <pugixml.hpp>
#include <string>
#include <vector>

namespace docfx {

// Generate the `children` element in a DocFX YAML.
//
// In DocFX, each C++ entity (class, function, members, etc.) has a unique id
// and represented as a YAML map. One of the elements in this map is a sequence
// that lists all the "children" of that entity. For example, a class would
// list all the uids for the (public) class member functions.
std::vector<std::string> Children(YamlContext const& ctx,
                                  pugi::xml_node const& node);

}  // namespace docfx

#endif  // GOOGLE_CLOUD_CPP_DOCFX_DOXYGEN2CHILDREN_H
