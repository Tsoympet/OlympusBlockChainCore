#ifndef PARTHENON_PRC1155_H
#define PARTHENON_PRC1155_H

#include <unordered_map>
#include <string>

namespace parthenon {

class PRC1155 {
public:
    // balances[owner][tokenId] = amount
    std::unordered_map<std::string, std::unordered_map<uint64_t, uint64_t>> balances;

    uint64_t balanceOf(const std::string& owner, uint64_t tokenId) const;

    bool mint(const std::string& to, uint64_t tokenId, uint64_t amount);
    bool transfer(const std::string& from, const std::string& to, uint64_t tokenId, uint64_t amount);
};

}

#endif
