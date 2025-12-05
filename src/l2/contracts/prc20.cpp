#include "prc20.h"

namespace parthenon {

PRC20::PRC20(const std::string& n, const std::string& s, uint8_t d)
: name(n), symbol(s), decimals(d) {}

uint64_t PRC20::balanceOf(const std::string& owner) const {
    auto it = balances.find(owner);
    if (it == balances.end()) return 0;
    return it->second;
}

bool PRC20::transfer(const std::string& from, const std::string& to, uint64_t value) {
    if (balanceOf(from) < value) return false;
    balances[from] -= value;
    balances[to] += value;
    return true;
}

bool PRC20::approve(const std::string& owner, const std::string& spender, uint64_t value) {
    allowances[owner][spender] = value;
    return true;
}

bool PRC20::transferFrom(const std::string& spender, const std::string& from, const std::string& to, uint64_t value) {
    if (allowances[from][spender] < value) return false;
    if (balanceOf(from) < value) return false;

    allowances[from][spender] -= value;
    balances[from] -= value;
    balances[to] += value;
    return true;
}

}
