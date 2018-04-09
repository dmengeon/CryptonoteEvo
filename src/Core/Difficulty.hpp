#pragma once

#include <cstdint>
#include <vector>

#include "CryptoNote.hpp"

namespace cryptonote {

bool check_hash(const crypto::Hash &hash, Difficulty difficulty);
}