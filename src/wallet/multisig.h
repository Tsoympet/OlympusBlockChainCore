#ifndef PARTHENON_MULTISIG_H
#define PARTHENON_MULTISIG_H

#include <string>
#include <vector>

namespace parthenon {

class Multisig {
public:
    uint32_t threshold;
    std::vector<std::string> pubKeys;

    Multisig(uint32_t t, const std::vector<std::string>& keys);

    bool verifySignatures(const std::vector<std::vector<uint8_t>>& sigs,
                          const std::string& msg) const;
};

}

#endif
