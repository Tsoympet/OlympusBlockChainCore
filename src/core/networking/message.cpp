#include "message.h"

namespace parthenon {

std::vector<uint8_t> Message::serialize(const Message& msg) {
    // TODO: encode type + payload
    return msg.payload;
}

Message Message::deserialize(const std::vector<uint8_t>& raw) {
    Message m;
    // TODO: decode type + payload
    m.payload = raw;
    return m;
}

}
