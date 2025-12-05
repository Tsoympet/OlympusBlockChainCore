#include "l1_l2_bridge.h"

namespace parthenon {

bool L1L2Bridge::depositToL2(const std::string& fromL1,
                             const std::string& toL2,
                             uint64_t amount) {
    // TODO: lock on L1, mint/credit on L2
    (void)fromL1; (void)toL2; (void)amount;
    return true;
}

bool L1L2Bridge::finalizeWithdrawalFromL2(const std::string& fromL2,
                                          const std::string& toL1,
                                          uint64_t amount) {
    // TODO: burn/lock on L2, release on L1
    (void)fromL2; (void)toL1; (void)amount;
    return true;
}

bool L1L2Bridge::recordL1Event(const std::string& txHash) {
    // TODO: store proof of L1 bridge tx
    (void)txHash;
    return true;
}

bool L1L2Bridge::recordL2Event(const std::string& txHash) {
    // TODO: store proof of L2 bridge tx
    (void)txHash;
    return true;
}

}
