#include "account.h"
#include "crypto/address.h"
#include "crypto/ecdsa.h"

namespace parthenon {

Account::Account(const std::string& n)
: name(n) {}

std::string Account::getL1Address() const {
    return Address::fromPublicKey(keyring.publicKey);
}

std::string Account::getL2Address() const {
    // Same format for L2
    return Address::fromPublicKey(keyring.publicKey);
}

std::string Account::getL3Address() const {
    // Same for L3 (OVOLOS)
    return Address::fromPublicKey(keyring.publicKey);
}

bool Account::signMessage(const std::string& msg, std::vector<uint8_t>& sigOut) const {
    sigOut = ECDSA::sign(keyring.privateKey, msg);
    return true;
}

}
