#include "utxo.h"

namespace parthenon {

bool UTXOSet::addUTXO(const std::string& key, const UTXOEntry& utxo) {
    utxos[key] = utxo;
    return true;
}

bool UTXOSet::spendUTXO(const std::string& key) {
    if (!exists(key)) return false;
    utxos[key].spent = true;
    return true;
}

bool UTXOSet::exists(const std::string& key) const {
    return utxos.find(key) != utxos.end();
}

}

