// Copyright (c) 2012-2018, The CryptoNote developers, The Bytecoin developers, [ ] developers.
// Licensed under the GNU Lesser General Public License. See LICENSE for details.

#pragma once

// defines are for Windows resource compiler
#define cryptonote_VERSION_WINDOWS_COMMA 3, 18, 3, 20
#define cryptonote_VERSION_STRING "3.0.2-Suniaster"

#ifdef __cplusplus

namespace bytecoin {
inline const char *app_version() { return cryptonote_VERSION_STRING; }
}

#endif
