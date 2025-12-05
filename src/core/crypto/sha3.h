#ifndef PARTHENON_SHA3_H
#define PARTHENON_SHA3_H

#include <string>

namespace parthenon {

class SHA3 {
public:
    static std::string keccak256(const std::string& input);
};

}

#endif
