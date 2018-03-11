// Copyright (c) 2012-2018, The CryptoNote developers, The Bytecoin developers, [ ] developers.
// Licensed under the GNU Lesser General Public License. See LICENSING.md for details.

#pragma once

// defines are for Windows resource compiler
#define CRYPTONOTE_VERSION_WINDOWS_COMMA 2, 0, 0, 280
#define CRYPTONOTE_VERSION_WINDOWS_STRING "2.0.0-280-SUNIASTER"

#ifdef __cplusplus

namespace cryptonote {
inline const char *app_version() { return CRYPTONOTE_VERSION_WINDOWS_STRING; }
}

#endif
