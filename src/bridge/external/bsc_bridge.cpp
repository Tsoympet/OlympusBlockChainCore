#include "bsc_bridge.h"

namespace parthenon {

bool BscBridge::lockOnBsc(const std::string& bscAddress,
                          uint64_t amount) {
    // TODO: external adapter to BSC smart contract
    (void)bscAddress; (void)amount;
    return true;
}

bool BscBridge::mintOnParthenon(const std::string& parAddress,
                                uint64_t amount) {
    (void)parAddress; (void)amount;
    return true;
}

bool BscBridge::verifyBscProof(const std::string& proofData) {
    (void)proofData;
    return true;
}

}
