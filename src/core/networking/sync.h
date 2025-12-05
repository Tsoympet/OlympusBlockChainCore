#ifndef PARTHENON_SYNC_H
#define PARTHENON_SYNC_H

namespace parthenon {

class SyncManager {
public:
    static void start();
    static void requestHeaders();
    static void requestBlocks();
    static void processIncomingBlock(const std::string& hash);
};

}

#endif
