#pragma once

#if platform_USE_SQLITE
#include "platform/DBsqlite3.hpp"
namespace platform {
typedef DBsqlite DB;
}
#else
#include "platform/DBlmdb.hpp"
namespace platform {
typedef DBlmdb DB;
}
#endif
