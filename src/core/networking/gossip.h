#ifndef PARTHENON_GOSSIP_H
#define PARTHENON_GOSSIP_H

#include <string>

namespace parthenon {

class Gossip {
public:
    static void propagateTx(const std::string& txid);
    static void propagateBlock(const std::string& hash);
};

}

#endif
