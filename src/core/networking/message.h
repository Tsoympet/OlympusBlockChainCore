#ifndef PARTHENON_MESSAGE_H
#define PARTHENON_MESSAGE_H

#include <string>
#include <vector>

namespace parthenon {

enum MessageType {
    MSG_VERSION,
    MSG_VERACK,
    MSG_INV,
    MSG_GETDATA,
    MSG_BLOCK,
    MSG_TX,
    MSG_PING,
    MSG_PONG
};

class Message {
public:
    MessageType type;
    std::vector<uint8_t> payload;

    static std::vector<uint8_t> serialize(const Message& msg);
    static Message deserialize(const std::vector<uint8_t>& raw);
};

}

#endif
