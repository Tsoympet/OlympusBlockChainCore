#ifndef PARTHENON_L1_L2_BRIDGE_H
#define PARTHENON_L1_L2_BRIDGE_H

#include <string>
#include <cstdint>

namespace parthenon {

class L1L2Bridge {
public:
    static bool depositToL2(const std::string& fromL1,
                            const std::string& toL2,
                            uint64_t amount);

    static bool finalizeWithdrawalFromL2(const std::string& fromL2,
                                         const std::string& toL1,
                                         uint64_t amount);

    static bool recordL1Event(const std::string& txHash);
    static bool recordL2Event(const std::string& txHash);
};

}

#endif
