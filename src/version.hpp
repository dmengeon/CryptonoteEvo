#pragma once

// defines are for Windows resource compiler
#define cryptonote_VERSION_WINDOWS_COMMA 2, 0, 4, 50
#define cryptonote_VERSION_STRING "2.0.4-Suniaster"

#ifndef RC_INVOKED  // Windows resource compiler

namespace cryptonote {
inline const char *app_version() { return cryptonote_VERSION_STRING; }
}

#endif
