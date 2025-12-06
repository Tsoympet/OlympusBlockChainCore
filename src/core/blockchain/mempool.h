#ifndef PARTHENON_MEMPOOL_H
#define PARTHENON_MEMPOOL_H

#include "tx.h"
#include <unordered_map>

namespace parthenon {

class Mempool {
public:
    std::unordered_map<std::string, Transaction> pool;

    bool addTransaction(const Transaction& tx);
    bool removeTransaction(const std::string& txid);
    bool exists(const std::string& txid) const;
};

}

#endif

