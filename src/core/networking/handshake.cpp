#include "handshake.h"

namespace parthenon {

bool Handshake::sendVersion(int socket) {
    // TODO: send MSG_VERSION
    return true;
}

bool Handshake::processVersion(int socket) {
    // TODO: read version, check compatibility
    return true;
}

bool Handshake::sendVerAck(int socket) {
    // TODO: send MSG_VERACK
    return true;
}

}
