#ifndef PARTHENON_L2_L3_BRIDGE_H
#define PARTHENON_L2_L3_BRIDGE_H

#include <string>
#include <cstdint>

namespace parthenon {

class L2L3Bridge {
public:
    static bool moveToL3(const std::string& fromL2,
                         const std::string& toL3,
                         uint64_t amount);

    static bool moveToL2(const std::string& fromL3,
                         const std::string& toL2,
                         uint64_t amount);

    static bool recordL2Event(const std::string& txHash);
    static bool recordL3Event(const std::string& txHash);
};

}

#endif
