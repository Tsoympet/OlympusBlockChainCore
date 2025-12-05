#ifndef PARTHENON_ECDSA_H
#define PARTHENON_ECDSA_H

#include <string>
#include <vector>

namespace parthenon {

class ECDSA {
public:
    static std::vector<uint8_t> sign(const std::string& privKey, const std::string& msg);
    static bool verify(const std::string& pubKey, const std::string& msg, const std::vector<uint8_t>& sig);
};

}

#endif
