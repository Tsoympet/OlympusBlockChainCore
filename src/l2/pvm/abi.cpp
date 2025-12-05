#include "abi.h"

namespace parthenon {

std::vector<uint8_t> ABI::encodeUint(uint64_t value) {
    // TODO
    return {0x00};
}

uint64_t ABI::decodeUint(const std::vector<uint8_t>& data) {
    // TODO
    return 0;
}

}
