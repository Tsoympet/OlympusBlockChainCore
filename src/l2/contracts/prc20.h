#ifndef PARTHENON_PRC20_H
#define PARTHENON_PRC20_H

#include <string>
#include <unordered_map>

namespace parthenon {

class PRC20 {
public:
    std::string name;
    std::string symbol;
    uint8_t decimals;

    std::unordered_map<std::string, uint64_t> balances;
    std::unordered_map<std::string, std::unordered_map<std::string, uint64_t>> allowances;

    PRC20(const std::string& n, const std::string& s, uint8_t d);

    uint64_t balanceOf(const std::string& owner) const;
    bool transfer(const std::string& from, const std::string& to, uint64_t value);
    bool approve(const std::string& owner, const std::string& spender, uint64_t value);
    bool transferFrom(const std::string& spender, const std::string& from, const std::string& to, uint64_t value);
};

}

#endif

