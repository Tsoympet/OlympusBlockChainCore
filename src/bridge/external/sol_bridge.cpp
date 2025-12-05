#include "sol_bridge.h"

namespace parthenon {

bool SolBridge::lockOnSol(const std::string& solAddress,
                          uint64_t amount) {
    // TODO: interact with Solana via off-chain adapter
    (void)solAddress; (void)amount;
    return true;
}

bool SolBridge::mintOnParthenon(const std::string& parAddress,
                                uint64_t amount) {
    (void)parAddress; (void)amount;
    return true;
}

bool SolBridge::verifySolProof(const std::string& proofData) {
    (void)proofData;
    return true;
}

}
