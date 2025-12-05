#include "l3_settlement.h"
#include "l3_state.h"

namespace parthenon {

bool L3Settlement::settleTransfer(const std::string& from,
                                  const std::string& to,
                                  uint64_t amount) {

    if (!L3State::subtractBalance(from, amount))
        return false;

    L3State::addBalance(to, amount);
    return true;
}

}
