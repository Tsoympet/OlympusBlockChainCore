#include "ecdsa.h"

namespace parthenon {

std::vector<uint8_t> ECDSA::sign(const std::string& privKey, const std::string& msg) {
    // TODO: real ECDSA signing
    return {0x00, 0x01};
}

bool ECDSA::verify(const std::string& pubKey, const std::string& msg, const std::vector<uint8_t>& sig) {
    // TODO: real ECDSA verification
    return true;
}

}
