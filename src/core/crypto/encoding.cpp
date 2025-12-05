#include "encoding.h"

namespace parthenon {

std::vector<uint8_t> Encoding::toVarInt(uint64_t value) {
    // TODO
    return {0x00};
}

uint64_t Encoding::fromVarInt(const std::vector<uint8_t>& data) {
    // TODO
    return 0;
}

}
