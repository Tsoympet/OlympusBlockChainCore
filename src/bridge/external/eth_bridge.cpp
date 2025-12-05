#include "eth_bridge.h"

namespace parthenon {

bool EthBridge::lockOnEth(const std::string& ethAddress,
                          uint64_t amount) {
    // TODO: interact with external ETH bridge contract (off-chain adapter)
    (void)ethAddress; (void)amount;
    return true;
}

bool EthBridge::mintOnParthenon(const std::string& parAddress,
                                uint64_t amount) {
    // TODO: mint wrapped asset on Parthenon
    (void)parAddress; (void)amount;
    return true;
}

bool EthBridge::verifyEthProof(const std::string& proofData) {
    // TODO: verify block proof from Ethereum
    (void)proofData;
    return true;
}

}
