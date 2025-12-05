#ifndef PARTHENON_L3_CONSENSUS_H
#define PARTHENON_L3_CONSENSUS_H

#include <string>

namespace parthenon {

class L3Consensus {
public:
    static bool processMicroblock(const std::string& hash);
    static bool updateFinality();
};

}

#endif
