#include "node.h"
#include "p2p.h"
#include "sync.h"

namespace parthenon {

bool Node::initialize() {
    // TODO: load DB, mempool, config
    return true;
}

void Node::shutdown() {
    // TODO: graceful shutdown
}

void Node::startP2P(uint16_t port) {
    P2PNetwork::start(port);
}

void Node::startSync() {
    SyncManager::start();
}

bool Node::isRunning() {
    return true;
}

}
