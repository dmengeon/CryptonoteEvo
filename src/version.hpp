// Copyright (c) 2012-2018, The CryptoNote developers, The Bytecoin developers, [ ] developers.
// Licensed under the GNU Lesser General Public License. See LICENSE for details.

#pragma once

// defines are for Windows resource compiler
#define CRYPTONOTE_VERSION_WINDOWS_COMMA 3, 18, 2, 19
#define CRYPTONOTE_VERSION_WINDOWS_STRING "3.0.2-20180219-Suniaster"

#ifdef __cplusplus

namespace cryptonote {
inline const char *app_version() { return CRYPTONOTE_VERSION_WINDOWS_STRING; }
}

#endif
