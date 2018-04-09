#pragma once

#include <cstdint>
#include <string>
#include "BinaryArray.hpp"

namespace common {
namespace base64 {

std::string encode(const BinaryArray &data);
bool decode(const std::string &enc, BinaryArray &data);
}
}
