#ifndef PARTHENON_ABI_H
#define PARTHENON_ABI_H

#include <string>
#include <vector>

namespace parthenon {

class ABI {
public:
    static std::vector<uint8_t> encodeUint(uint64_t value);
    static uint64_t decodeUint(const std::vector<uint8_t>& data);
};

}

#endif
