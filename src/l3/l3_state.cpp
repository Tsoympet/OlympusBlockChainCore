#include "l3_state.h"

namespace parthenon {

std::unordered_map<std::string, uint64_t> L3State::balances;

uint64_t L3State::getBalance(const std::string& addr) {
    if (!balances.count(addr)) return 0;
    return balances[addr];
}

void L3State::addBalance(const std::string& addr, uint64_t amount) {
    balances[addr] += amount;
}

bool L3State::subtractBalance(const std::string& addr, uint64_t amount) {
    if (getBalance(addr) < amount) return false;
    balances[addr] -= amount;
    return true;
}

}
