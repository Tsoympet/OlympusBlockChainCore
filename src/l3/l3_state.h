#ifndef PARTHENON_L3_STATE_H
#define PARTHENON_L3_STATE_H

#include <string>
#include <unordered_map>

namespace parthenon {

class L3State {
public:
    static std::unordered_map<std::string, uint64_t> balances;

    static uint64_t getBalance(const std::string& addr);
    static void addBalance(const std::string& addr, uint64_t amount);
    static bool subtractBalance(const std::string& addr, uint64_t amount);
};

}

#endif
