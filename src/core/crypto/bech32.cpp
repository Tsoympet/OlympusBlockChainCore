#include "bech32.h"

namespace parthenon {

std::string Bech32::encode(const std::string& hrp, const std::string& data) {
    return hrp + "1" + data; // placeholder
}

std::string Bech32::decode(const std::string& bech) {
    return "DECODE_BECH32";
}

}

