#include "pns_registry.h"

namespace parthenon {

std::unordered_map<std::string, std::string> PNSRegistry::ownerOf;
std::unordered_map<std::string, std::string> PNSRegistry::resolverOf;

bool PNSRegistry::registerName(const std::string& name, const std::string& owner) {
    if (ownerOf.count(name)) return false;
    ownerOf[name] = owner;
    return true;
}

bool PNSRegistry::setResolver(const std::string& name, const std::string& resolver) {
    if (!ownerOf.count(name)) return false;
    resolverOf[name] = resolver;
    return true;
}

std::string PNSRegistry::getOwner(const std::string& name) {
    if (!ownerOf.count(name)) return "";
    return ownerOf[name];
}

std::string PNSRegistry::getResolver(const std::string& name) {
    if (!resolverOf.count(name)) return "";
    return resolverOf[name];
}

}
