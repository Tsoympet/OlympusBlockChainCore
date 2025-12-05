#ifndef PARTHENON_CONTRACT_LOADER_H
#define PARTHENON_CONTRACT_LOADER_H

#include <string>
#include <vector>

namespace parthenon {

class ContractLoader {
public:
    static std::vector<uint8_t> load(const std::string& path);
};

}

#endif
