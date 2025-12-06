#ifndef PARTHENON_CONSENSUS_POW_H
#define PARTHENON_CONSENSUS_POW_H

#include "block.h"

namespace parthenon {

class PoWConsensus {
public:
    static bool validateBlock(const Block& block);
    static bool meetsDifficulty(const Block& block);
};

}

#endif
