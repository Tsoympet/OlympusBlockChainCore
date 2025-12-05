#ifndef PARTHENON_NODE_H
#define PARTHENON_NODE_H

#include <string>

namespace parthenon {

class Node {
public:
    static bool initialize();
    static void shutdown();

    static void startP2P(uint16_t port);
    static void startSync();

    static bool isRunning();
};

}

#endif
