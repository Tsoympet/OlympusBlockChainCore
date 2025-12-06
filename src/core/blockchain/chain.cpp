#include "chain.h"

namespace parthenon {

Blockchain::Blockchain() {
    // TODO: Genesis block creation
}

const Block& Blockchain::getLatestBlock() const {
    return chain.back();
}

bool Blockchain::addBlock(const Block& block) {
    if (!validateBlock(block)) return false;
    chain.push_back(block);
    return true;
}

bool Blockchain::validateBlock(const Block& block) const {
    // TODO: validate PoW/PoS + merkle + timestamp rules
    return true;
}

bool Blockchain::connectBlock(const Block& block) {
    return addBlock(block);
}

}

