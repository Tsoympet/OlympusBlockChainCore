#include "p2p.h"
#include "message.h"
#include <thread>

namespace parthenon {

bool P2PNetwork::start(uint16_t port) {
    // TODO: open socket, bind, listen
    std::thread listener(&P2PNetwork::listenLoop);
    listener.detach();
    return true;
}

void P2PNetwork::stop() {
    // TODO: cleanup networking resources
}

bool P2PNetwork::connectToPeer(const std::string& ip, uint16_t port) {
    // TODO: outbound connection logic
    return true;
}

void P2PNetwork::broadcast(const std::vector<uint8_t>& data) {
    // TODO: send to all peers
}

void P2PNetwork::listenLoop() {
    // TODO: accept incoming connections
}

void P2PNetwork::handleIncoming(int socket) {
    // TODO: read message, push to message processor
}

}
