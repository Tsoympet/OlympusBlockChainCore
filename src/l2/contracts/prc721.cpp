#include "prc721.h"

namespace parthenon {

PRC721::PRC721(const std::string& n, const std::string& s)
: name(n), symbol(s) {}

std::string PRC721::ownerOf(uint64_t tokenId) const {
    auto it = ownerOfToken.find(tokenId);
    if (it == ownerOfToken.end()) return "";
    return it->second;
}

uint64_t PRC721::balanceOf(const std::string& owner) const {
    auto it = balances.find(owner);
    if (it == balances.end()) return 0;
    return it->second;
}

bool PRC721::mint(const std::string& to, uint64_t tokenId) {
    if (ownerOfToken.count(tokenId) != 0) return false;
    ownerOfToken[tokenId] = to;
    balances[to]++;
    return true;
}

bool PRC721::transfer(const std::string& from, const std::string& to, uint64_t tokenId) {
    if (ownerOf(tokenId) != from) return false;
    ownerOfToken[tokenId] = to;
    balances[from]--;
    balances[to]++;
    return true;
}

}
