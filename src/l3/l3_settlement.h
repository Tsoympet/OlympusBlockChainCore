#ifndef PARTHENON_L3_SETTLEMENT_H
#define PARTHENON_L3_SETTLEMENT_H

#include <string>

namespace parthenon {

class L3Settlement {
public:
    static bool settleTransfer(const std::string& from,
                               const std::string& to,
                               uint64_t amount);
};

}

#endif
