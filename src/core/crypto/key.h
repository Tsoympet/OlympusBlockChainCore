#ifndef PARTHENON_KEY_H
#define PARTHENON_KEY_H

#include <string>

namespace parthenon {

class Key {
public:
    std::string privateKey;
    std::string publicKey;

    Key();
    static Key generate();
};

}

#endif
