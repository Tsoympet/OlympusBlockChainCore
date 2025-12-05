#ifndef PARTHENON_PUBKEY_H
#define PARTHENON_PUBKEY_H

#include <string>

namespace parthenon {

class PubKey {
public:
    std::string key;

    explicit PubKey(const std::string& k) : key(k) {}

    std::string getCompressed() const;
    std::string getUncompressed() const;
};

}

#endif
