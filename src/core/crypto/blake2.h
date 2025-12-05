#ifndef PARTHENON_BLAKE2_H
#define PARTHENON_BLAKE2_H

#include <string>

namespace parthenon {

class Blake2b {
public:
    static std::string hash(const std::string& data);
};

}

#endif
