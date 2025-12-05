#ifndef PARTHENON_BECH32_H
#define PARTHENON_BECH32_H

#include <string>

namespace parthenon {

class Bech32 {
public:
    static std::string encode(const std::string& hrp, const std::string& data);
    static std::string decode(const std::string& bech);
};

}

#endif
