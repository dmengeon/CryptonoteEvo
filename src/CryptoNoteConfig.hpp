// Copyright (c) 2012-2018, The CryptoNote developers, The Bytecoin developers, [ ] developers
//
// This file is part of Bytecoin.
//
// Bytecoin is free software: you can redistribute it and/or modify
// it under the terms of the GNU Lesser General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
//
// Bytecoin is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU Lesser General Public License for more details.
//
// You should have received a copy of the GNU Lesser General Public License
// along with Bytecoin.  If not, see <http://www.gnu.org/licenses/>.

#pragma once

#include <cstddef>
#include <cstdint>
#include <limits>

// All values below should only be used in code through Currency and Config classes, never directly.
// This approach allows unlimited customization through config file/command line parameters
// Never include this header into other headers
namespace cryptonote {
namespace parameters {

const uint32_t CRYPTONOTE_MAX_BLOCK_NUMBER = 500000000;
const uint32_t CRYPTONOTE_MAX_BLOCK_BLOB_SIZE = 500000000;
const uint32_t CRYPTONOTE_MAX_TX_SIZE = 1000000000;
const uint64_t CRYPTONOTE_PUBLIC_ADDRESS_BASE58_PREFIX = 6; // addresses start with "2"
const uint32_t CRYPTONOTE_MINED_MONEY_UNLOCK_WINDOW = 10;
const uint32_t CRYPTONOTE_BLOCK_FUTURE_TIME_LIMIT = 60 * 60 * 2;

const uint32_t BLOCKCHAIN_TIMESTAMP_CHECK_WINDOW = 60;

// MONEY_SUPPLY - total number coins to be generated
const uint64_t MONEY_SUPPLY = std::numeric_limits<uint64_t>::max();
const unsigned EMISSION_SPEED_FACTOR = 18;
static_assert(EMISSION_SPEED_FACTOR <= 8 * sizeof(uint64_t), "Bad EMISSION_SPEED_FACTOR");

const size_t CRYPTONOTE_REWARD_BLOCKS_WINDOW = 100;
const size_t CRYPTONOTE_BLOCK_GRANTED_FULL_REWARD_ZONE = 100000; //size of block (bytes) after which reward for block calculated using block size
const size_t CRYPTONOTE_BLOCK_GRANTED_FULL_REWARD_ZONE_V2 = 20000;
const size_t CRYPTONOTE_BLOCK_GRANTED_FULL_REWARD_ZONE_V1 = 10000;
//const size_t CRYPTONOTE_BLOCK_GRANTED_FULL_REWARD_ZONE_CURRENT = CRYPTONOTE_BLOCK_GRANTED_FULL_REWARD_ZONE;
const size_t CRYPTONOTE_COINBASE_BLOB_RESERVED_SIZE = 600;
const size_t CRYPTONOTE_DISPLAY_DECIMAL_POINT = 8;
const uint64_t MINIMUM_FEE = 1000000;    // pow(10, 6)
const uint64_t DEFAULT_DUST_THRESHOLD = 1000000;    // pow(10, 6)

const uint32_t DIFFICULTY_TARGET = 120; // seconds
constexpr uint32_t EXPECTED_NUMBER_OF_BLOCKS_PER_DAY(uint32_t difficulty_target) { return 24 * 60 * 60 / difficulty_target;}
constexpr uint32_t DIFFICULTY_WINDOW(uint32_t difficulty_target) { return EXPECTED_NUMBER_OF_BLOCKS_PER_DAY(difficulty_target); } // blocks
const size_t DIFFICULTY_CUT = 60;  // timestamps to cut after sorting
const size_t DIFFICULTY_LAG = 15;  // !!!
static_assert(2 * DIFFICULTY_CUT <= DIFFICULTY_WINDOW(DIFFICULTY_TARGET) - 2, "Bad DIFFICULTY_WINDOW or DIFFICULTY_CUT");

const size_t MAX_BLOCK_SIZE_INITIAL = 20 * 1024;
const uint64_t MAX_BLOCK_SIZE_GROWTH_SPEED_NUMERATOR = 100 * 1024;
constexpr uint64_t MAX_BLOCK_SIZE_GROWTH_SPEED_DENOMINATOR(uint32_t difficulty_target) { return 365 * 24 * 60 * 60 / difficulty_target; }

// After next hardfork remove settings below
const uint32_t CRYPTONOTE_LOCKED_TX_ALLOWED_DELTA_BLOCKS = 1;
constexpr uint32_t CRYPTONOTE_LOCKED_TX_ALLOWED_DELTA_SECONDS(uint32_t difficulty_target) { return difficulty_target * CRYPTONOTE_LOCKED_TX_ALLOWED_DELTA_BLOCKS; }

const uint32_t CRYPTONOTE_MEMPOOL_TX_LIVETIME = 60 * 60 * 24;     //seconds, one day
//const uint32_t CRYPTONOTE_MEMPOOL_TX_FROM_ALT_BLOCK_LIVETIME = 60 * 60 * 24 * 7; //seconds, one week
//const uint32_t CRYPTONOTE_NUMBER_OF_PERIODS_TO_FORGET_TX_DELETED_FROM_POOL = 7;  // CRYPTONOTE_NUMBER_OF_PERIODS_TO_FORGET_TX_DELETED_FROM_POOL * CRYPTONOTE_MEMPOOL_TX_LIVETIME = time to forget tx

//const size_t FUSION_TX_MAX_SIZE = CRYPTONOTE_BLOCK_GRANTED_FULL_REWARD_ZONE_CURRENT * 30 / 100;
//const size_t FUSION_TX_MIN_INPUT_COUNT = 12;
//const size_t FUSION_TX_MIN_IN_OUT_COUNT_RATIO = 4;

const uint32_t UPGRADE_HEIGHT_V2 = 546602;
const uint32_t UPGRADE_HEIGHT_V3 = 985548;

const char CRYPTONOTE_BLOCKS_FILENAME[] = "blocks.bin";
const char CRYPTONOTE_BLOCKINDEXES_FILENAME[] = "blockindexes.bin";
} // parameters

// COIN - number of smallest units in one coin
const uint64_t POINT                                         = UINT64_C(1000); // pow(10, 3)
const uint64_t COIN                                          = UINT64_C(1000000); // pow(10, 6)
const uint64_t START_BLOCK_REWARD                            = (UINT64_C(100) * parameters::POINT);
const uint64_t ICO_BLOCK_REWARD	                             = (UINT64_C(18446744073) * parameters::COIN); // 18.4 billion ICO
const uint64_t MAX_BLOCK_REWARD                              = (UINT64_C(10) * parameters::COIN);
const uint64_t REWARD_INCREASE_INTERVAL                      = (UINT64_C(264000));

const char CRYPTONOTE_NAME[] = "cryptonote";

const uint8_t CURRENT_TRANSACTION_VERSION = 1;

const size_t BLOCKS_IDS_SYNCHRONIZING_DEFAULT_COUNT = 10000;  //by default, blocks ids count in synchronizing
const size_t BLOCKS_SYNCHRONIZING_DEFAULT_COUNT = 100;    //by default, blocks count in blocks downloading
const size_t COMMAND_RPC_GET_BLOCKS_FAST_MAX_COUNT = 1000;

const int P2P_DEFAULT_PORT = 8080;
const int RPC_DEFAULT_PORT = 8081;
const int WALLET_RPC_DEFAULT_PORT = 8070;

const size_t P2P_LOCAL_WHITE_PEERLIST_LIMIT = 1000;
const size_t P2P_LOCAL_GRAY_PEERLIST_LIMIT = 5000;

const size_t P2P_CONNECTION_MAX_WRITE_BUFFER_SIZE = 32 * 1024 * 1024; // 32 Mb
const uint32_t P2P_DEFAULT_CONNECTIONS_COUNT = 8;
const uint32_t P2P_DEFAULT_WHITELIST_CONNECTIONS_PERCENT = 70;
const uint32_t P2P_DEFAULT_HANDSHAKE_INTERVAL = 60;            // seconds
const uint32_t P2P_DEFAULT_PACKET_MAX_SIZE = 50000000;      // 50000000 bytes maximum packet size
const uint32_t P2P_DEFAULT_PEERS_IN_HANDSHAKE = 250;
const uint32_t P2P_DEFAULT_CONNECTION_TIMEOUT = 5000;          // 5 seconds
const uint32_t P2P_DEFAULT_PING_CONNECTION_TIMEOUT = 2000;          // 2 seconds
const uint32_t P2P_DEFAULT_INVOKE_TIMEOUT = 60 * 2 * 1000; // 2 minutes
const uint32_t P2P_DEFAULT_HANDSHAKE_INVOKE_TIMEOUT = 5000;          // 5 seconds
const char P2P_STAT_TRUSTED_PUB_KEY[] = "E29507CA55455F37A3B783EE2C5123B8B6A34A0C5CAAE050922C6254161480C1";

const char *const SEED_NODES[] = {
		"127.0.0.1:8080" // New seed node
};

struct CheckpointData {
	uint32_t index;
	const char *blockId;
};

constexpr const CheckpointData CHECKPOINTS[] = {
		//{79000,   "cae33204e624faeb64938d80073bb7bbacc27017dc63f36c5c0f313cad455a02"},
		//{1451000, "327814e8ee24650ad95d62b61e066d884abbb9d5ac18cd258baf24086c2a0882"}
};
} // CryptoNote

