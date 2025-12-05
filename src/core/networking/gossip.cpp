#include "gossip.h"
#include "p2p.h"
#include "inventory.h"

namespace parthenon {

void Gossip::propagateTx(const std::string& txid) {
    Inventory::announceTx(txid);
    // TODO: broadcast INV message
}

void Gossip::propagateBlock(const std::string& hash) {
    Inventory::announceBlock(hash);
    // TODO: broadcast INV message
}

}
