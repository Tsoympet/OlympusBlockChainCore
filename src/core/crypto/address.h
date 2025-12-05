#ifndef PARTHENON_ADDRESS_H
#define PARTHENON_ADDRESS_H

#include <string>

namespace parthenon {

class Address {
public:
    static std::string fromPublicKey(const std::string& pubKey);
};

}

#endif
