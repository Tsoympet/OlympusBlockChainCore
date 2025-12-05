#include "l2_l3_bridge.h"

namespace parthenon {

bool L2L3Bridge::moveToL3(const std::string& fromL2,
                          const std::string& toL3,
                          uint64_t amount) {
    // TODO: debit on L2, credit on L3 (OBL)
    (void)fromL2; (void)toL3; (void)amount;
    return true;
}

bool L2L3Bridge::moveToL2(const std::string& fromL3,
                          const std::string& toL2,
                          uint64_t amount) {
    // TODO: debit on L3, credit on L2
    (void)fromL3; (void)toL2; (void)amount;
    return true;
}

bool L2L3Bridge::recordL2Event(const std::string& txHash) {
    // TODO
    (void)txHash;
    return true;
}

bool L2L3Bridge::recordL3Event(const std::string& txHash) {
    // TODO
    (void)txHash;
    return true;
}

}
