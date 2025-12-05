#include "multisig.h"
#include "crypto/ecdsa.h"

namespace parthenon {

Multisig::Multisig(uint32_t t, const std::vector<std::string>& keys)
: threshold(t), pubKeys(keys) {}

bool Multisig::verifySignatures(const std::vector<std::vector<uint8_t>>& sigs,
                                const std::string& msg) const {

    if (sigs.size() < threshold) return false;

    // TODO: check each signature matches one of the pubKeys
    for (size_t i = 0; i < threshold; i++) {
        if (!ECDSA::verify(pubKeys[i], msg, sigs[i]))
            return false;
    }
    return true;
}

}
