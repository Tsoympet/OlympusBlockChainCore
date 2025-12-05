#ifndef PARTHENON_PNS_REGISTRY_H
#define PARTHENON_PNS_REGISTRY_H

#include <string>
#include <unordered_map>

namespace parthenon {

class PNSRegistry {
public:
    // name → owner
    static std::unordered_map<std::string, std::string> ownerOf;

    // name → resolver address
    static std::unordered_map<std::string, std::string> resolverOf;

    static bool registerName(const std::string& name, const std::string& owner);
    static bool setResolver(const std::string& name, const std::string& resolver);
    static std::string getOwner(const std::string& name);
    static std::string getResolver(const std::string& name);
};

}

#endif
