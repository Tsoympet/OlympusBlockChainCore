#include "pns_resolver.h"

namespace parthenon {

std::unordered_map<std::string, std::string> PNSResolver::addrRecords;

bool PNSResolver::setAddress(const std::string& name, const std::string& address) {
    addrRecords[name] = address;
    return true;
}

std::string PNSResolver::resolve(const std::string& name) {
    if (!addrRecords.count(name)) return "";
    return addrRecords[name];
}

}
