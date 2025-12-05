#ifndef PARTHENON_RIPEMD160_H
#define PARTHENON_RIPEMD160_H

#include <string>

namespace parthenon {

class RIPEMD160 {
public:
    static std::string hash(const std::string& data);
};

}

#endif
