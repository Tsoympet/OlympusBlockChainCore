#ifndef PARTHENON_TX_H
#define PARTHENON_TX_H

#include <string>
#include <vector>
#include <cstdint>

namespace parthenon {

class TxInput {
public:
    std::string prevTxHash;
    uint32_t outputIndex;
    std::string signature;
};

class TxOutput {
public:
    uint64_t amount;  
    std::string address;
};

class Transaction {
public:
    uint32_t version;
    std::vector<TxInput> inputs;
    std::vector<TxOutput> outputs;
    uint64_t lockTime;

    std::string txid() const;
    bool validateBasic() const;
};

}

#endif

