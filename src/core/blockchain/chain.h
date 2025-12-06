#ifndef PARTHENON_CHAIN_H
#define PARTHENON_CHAIN_H

#include "block.h"
#include "utxo.h"
#include <vector>

namespace parthenon {

class Blockchain {
public:
    std::vector<Block> chain;
    UTXOSet utxoSet;

    Blockchain();

    const Block& getLatestBlock() const;
    bool addBlock(const Block& block);

    bool validateBlock(const Block& block) const;
    bool connectBlock(const Block& block);
};

}

#endif
