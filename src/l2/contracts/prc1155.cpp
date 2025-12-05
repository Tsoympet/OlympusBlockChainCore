#include "prc1155.h"

namespace parthenon {

uint64_t PRC1155::balanceOf(const std::string& owner, uint64_t tokenId) const {
    if (!balances.count(owner)) return 0;
    auto it = balances.at(owner).find(tokenId);
    if (it == balances.at(owner).end()) return 0;
    return it->second;
}

bool PRC1155::mint(const std::string& to, uint64_t tokenId, uint64_t amount) {
    balances[to][tokenId] += amount;
    return true;
}

bool PRC1155::transfer(const std::string& from, const std::string& to, uint64_t tokenId, uint64_t amount) {
    if (balanceOf(from, tokenId) < amount) return false;
    balances[from][tokenId] -= amount;
    balances[to][tokenId] += amount;
    return true;
}

}
