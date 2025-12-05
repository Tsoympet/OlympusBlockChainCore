#ifndef PARTHENON_PNS_INTEGRATION_H
#define PARTHENON_PNS_INTEGRATION_H

#include <string>

namespace parthenon {

class PNSIntegration {
public:
    static std::string resolveAddress(const std::string& name);
    static bool registerName(const std::string& name, const std::string& address);
};

}

#endif
