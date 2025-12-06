#ifndef PARTHENON_CONSENSUS_POS_H
#define PARTHENON_CONSENSUS_POS_H

#include "block.h"

namespace parthenon {

class PoSConsensus {
public:
    static bool validateBlock(const Block& block);
};

}

#endif
