#include "mempool.h"

namespace parthenon {

bool Mempool::addTransaction(const Transaction& tx) {
    pool[tx.txid()] = tx;
    return true;
}

bool Mempool::removeTransaction(const std::string& txid) {
    return pool.erase(txid) > 0;
}

bool Mempool::exists(const std::string& txid) const {
    return pool.find(txid) != pool.end();
}

}

