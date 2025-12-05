#include "pns_integration.h"
#include "l2/contracts/pns_registry.h"
#include "l2/contracts/pns_resolver.h"

namespace parthenon {

std::string PNSIntegration::resolveAddress(const std::string& name) {
    return PNSResolver::resolve(name);
}

bool PNSIntegration::registerName(const std::string& name, const std::string& address) {
    if (!PNSRegistry::registerName(name, address)) return false;
    return PNSResolver::setAddress(name, address);
}

}
