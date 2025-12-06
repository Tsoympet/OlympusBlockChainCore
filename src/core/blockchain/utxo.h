#ifndef PARTHENON_UTXO_H
#define PARTHENON_UTXO_H

#include <unordered_map>
#include <string>
#include <cstdint>

namespace parthenon {

struct UTXOEntry {
    uint64_t amount;
    std::string address;
    bool spent = false;
};

class UTXOSet {
public:
    std::unordered_map<std::string, UTXOEntry> utxos;

    bool addUTXO(const std::string& key, const UTXOEntry& utxo);
    bool spendUTXO(const std::string& key);
    bool exists(const std::string& key) const;
};

}

#endif

