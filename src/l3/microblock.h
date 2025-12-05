#ifndef PARTHENON_MICROBLOCK_H
#define PARTHENON_MICROBLOCK_H

#include <string>
#include <vector>

namespace parthenon {

class MicroBlock {
public:
    std::string hash;
    std::string prev; // previous microblock
    std::vector<std::string> txs;

    std::string computeHash() const;
};

}

#endif
