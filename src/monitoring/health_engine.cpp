#include "health_engine.h"
#include "system_stats.h"

namespace parthenon {

bool HealthEngine::checkNodeHealth() {
    // Example checks
    if (SystemStats::getCpuUsage() > 95.0) return false;
    if (SystemStats::getMemoryUsage() > 95.0) return false;
    return true;
}

std::string HealthEngine::getNodeStatus() {
    return checkNodeHealth() ? "OK" : "UNHEALTHY";
}

}
