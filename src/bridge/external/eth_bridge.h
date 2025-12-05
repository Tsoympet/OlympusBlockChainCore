#ifndef PARTHENON_ETH_BRIDGE_H
#define PARTHENON_ETH_BRIDGE_H

#include <string>
#include <cstdint>

namespace parthenon {

class EthBridge {
public:
    static bool lockOnEth(const std::string& ethAddress,
                          uint64_t amount);

    static bool mintOnParthenon(const std::string& parAddress,
                                uint64_t amount);

    static bool verifyEthProof(const std::string& proofData);
};

}

#endif

