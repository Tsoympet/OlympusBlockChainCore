#ifndef PARTHENON_SHA2_H
#define PARTHENON_SHA2_H

#include <string>

namespace parthenon {

class SHA256 {
public:
    static std::string hash(const std::string& data);
};

}

#endif

