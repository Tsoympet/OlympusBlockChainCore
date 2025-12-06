#include "consensus_pow.h"
#include "crypto/sha2.h"

namespace parthenon {

bool PoWConsensus::validateBlock(const Block& block) {
    return meetsDifficulty(block);
}

bool PoWConsensus::meetsDifficulty(const Block& block) {
    // TODO: check block.header.hash() against difficulty target
    return true;
}

}
