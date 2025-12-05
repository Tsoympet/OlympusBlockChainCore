#include "address.h"
#include "sha2.h"
#include "ripemd160.h"
#include "base58.h"

namespace parthenon {

std::string Address::fromPublicKey(const std::string& pubKey) {
    // Bitcoin-style: RIPEMD160(SHA256(pubkey))
    std::string step1 = SHA256::hash(pubKey);
    std::string step2 = RIPEMD160::hash(step1);
    return Base58::encode(step2);
}

}
