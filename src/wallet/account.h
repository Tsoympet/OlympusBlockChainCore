#ifndef PARTHENON_ACCOUNT_H
#define PARTHENON_ACCOUNT_H

#include <string>
#include <vector>
#include "keyring.h"

namespace parthenon {

class Account {
public:
    std::string name;
    Keyring keyring;

    Account(const std::string& n);

    std::string getL1Address() const;
    std::string getL2Address() const;
    std::string getL3Address() const;

    bool signMessage(const std::string& msg, std::vector<uint8_t>& sigOut) const;
};

}

#endif
