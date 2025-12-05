#include "microblock.h"
#include "crypto/sha2.h"

namespace parthenon {

std::string MicroBlock::computeHash() const {
    return SHA256::hash(prev + std::to_string(txs.size()));
}

}
