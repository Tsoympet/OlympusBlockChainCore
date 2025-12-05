#ifndef PARTHENON_KEYRING_H
#define PARTHENON_KEYRING_H

#include <string>

namespace parthenon {

class Keyring {
public:
    std::string privateKey;
    std::string publicKey;

    Keyring();
    bool generate();
};

}

#endif
