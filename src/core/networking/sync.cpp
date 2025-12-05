#include "sync.h"

namespace parthenon {

void SyncManager::start() {
    // TODO: start sync loop thread
}

void SyncManager::requestHeaders() {
    // TODO: send MSG_GETDATA for headers
}

void SyncManager::requestBlocks() {
    // TODO: send MSG_GETDATA for blocks
}

void SyncManager::processIncomingBlock(const std::string& hash) {
    // TODO: validate and append to chain
}

}
