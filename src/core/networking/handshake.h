#ifndef PARTHENON_HANDSHAKE_H
#define PARTHENON_HANDSHAKE_H

#include <string>

namespace parthenon {

class Handshake {
public:
    static bool sendVersion(int socket);
    static bool processVersion(int socket);
    static bool sendVerAck(int socket);
};

}

#endif
