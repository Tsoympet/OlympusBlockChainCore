#ifndef PARTHENON_ENCODING_H
#define PARTHENON_ENCODING_H

#include <vector>
#include <cstdint>

namespace parthenon {

class Encoding {
public:
    static std::vector<uint8_t> toVarInt(uint64_t value);
    static uint64_t fromVarInt(const std::vector<uint8_t>& data);
};

}

#endif
