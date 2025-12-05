#ifndef PARTHENON_PNS_RESOLVER_H
#define PARTHENON_PNS_RESOLVER_H

#include <string>
#include <unordered_map>

namespace parthenon {

class PNSResolver {
public:
    static std::unordered_map<std::string, std::string> addrRecords;

    static bool setAddress(const std::string& name, const std::string& address);
    static std::string resolve(const std::string& name);
};

}

#endif
