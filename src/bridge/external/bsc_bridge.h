#ifndef PARTHENON_BSC_BRIDGE_H
#define PARTHENON_BSC_BRIDGE_H

#include <string>
#include <cstdint>

namespace parthenon {

class BscBridge {
public:
    static bool lockOnBsc(const std::string& bscAddress,
                          uint64_t amount);

    static bool mintOnParthenon(const std::string& parAddress,
                                uint64_t amount);

    static bool verifyBscProof(const std::string& proofData);
};

}

#endif
