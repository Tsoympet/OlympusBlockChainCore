#ifndef PARTHENON_PRC721_H
#define PARTHENON_PRC721_H

#include <string>
#include <unordered_map>

namespace parthenon {

class PRC721 {
public:
    std::string name;
    std::string symbol;

    std::unordered_map<uint64_t, std::string> ownerOfToken;
    std::unordered_map<std::string, uint64_t> balances;

    PRC721(const std::string& n, const std::string& s);

    std::string ownerOf(uint64_t tokenId) const;
    uint64_t balanceOf(const std::string& owner) const;

    bool transfer(const std::string& from, const std::string& to, uint64_t tokenId);
    bool mint(const std::string& to, uint64_t tokenId);
};

}

#endif
