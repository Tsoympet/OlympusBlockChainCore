#include "tx.h"
#include "crypto/sha2.h"

namespace parthenon {

std::string Transaction::txid() const {
    // TODO: proper serialization before hashing
    return SHA256::hash(std::to_string(version) + std::to_string(lockTime));
}

bool Transaction::validateBasic() const {
    if (inputs.empty() || outputs.empty()) return false;
    return true;
}

}

