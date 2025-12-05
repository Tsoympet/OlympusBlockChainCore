#ifndef PARTHENON_SYSTEM_STATS_H
#define PARTHENON_SYSTEM_STATS_H

#include <cstdint>

namespace parthenon {

class SystemStats {
public:
    static double getCpuUsage();
    static double getMemoryUsage();
    static uint64_t getDiskUsage();
    static double getNetworkLatency();
};

}

#endif
