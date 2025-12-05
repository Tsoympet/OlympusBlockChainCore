#ifndef PARTHENON_HEALTH_ENGINE_H
#define PARTHENON_HEALTH_ENGINE_H

#include <string>

namespace parthenon {

class HealthEngine {
public:
    static bool checkNodeHealth();
    static std::string getNodeStatus();
};

}

#endif
