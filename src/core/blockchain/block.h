#ifndef PARTHENON_BLOCK_H
#define PARTHENON_BLOCK_H

#include <vector>
#include <cstdint>
#include <string>
#include "tx.h"

namespace parthenon {

class BlockHeader {
public:
    uint32_t version;
    std::string prevHash;
    std::string merkleRoot;
    uint64_t timestamp;
    uint32_t difficultyTarget;
    uint32_t nonce;

    std::string hash() const;
};

class Block {
public:
    BlockHeader header;
    std::vector<Transaction> transactions;

    std::string getHash() const;
    std::string calculateMerkleRoot() const;

    bool validateBasic() const;
};

}

#endif
