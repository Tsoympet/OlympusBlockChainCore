#include "l3_consensus.h"

namespace parthenon {

bool L3Consensus::processMicroblock(const std::string&) {
    // TODO: validate microblock and update DAG
    return true;
}

bool L3Consensus::updateFinality() {
    // TODO: determine finalized paths through DAG
    return true;
}

}
