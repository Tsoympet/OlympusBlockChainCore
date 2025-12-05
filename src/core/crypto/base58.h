#ifndef PARTHENON_BASE58_H
#define PARTHENON_BASE58_H

#include <string>

namespace parthenon {

class Base58 {
public:
    static std::string encode(const std::string& input);
    static std::string decode(const std::string& input);
};

}

#endif
