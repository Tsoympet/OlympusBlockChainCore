#ifndef PARTHENON_P2P_H
#define PARTHENON_P2P_H

#include <string>
#include <vector>
#include <functional>

namespace parthenon {

class P2PNetwork {
public:
    static bool start(uint16_t port);
    static void stop();

    static bool connectToPeer(const std::string& ip, uint16_t port);
    static void broadcast(const std::vector<uint8_t>& data);

private:
    static void listenLoop();
    static void handleIncoming(int socket);
};

}

#endif

