#ifndef PARTHENON_SOL_BRIDGE_H
#define PARTHENON_SOL_BRIDGE_H

#include <string>
#include <cstdint>

namespace parthenon {

class SolBridge {
public:
    static bool lockOnSol(const std::string& solAddress,
                          uint64_t amount);

    static bool mintOnParthenon(const std::string& parAddress,
                                uint64_t amount);

    static bool verifySolProof(const std::string& proofData);
};

}

#endif
