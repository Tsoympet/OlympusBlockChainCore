#include "block.h"
#include "crypto/sha2.h"

namespace parthenon {

std::string BlockHeader::hash() const {
    return SHA256::hash(prevHash + merkleRoot + std::to_string(timestamp) +
                        std::to_string(difficultyTarget) + std::to_string(nonce));
}

std::string Block::getHash() const {
    return header.hash();
}

std::string Block::calculateMerkleRoot() const {
    // TODO: implement Merkle root calculation
    return "MERKLE_PLACEHOLDER";
}

bool Block::validateBasic() const {
    // TODO: implement sanity checks
    return true;
}

}

