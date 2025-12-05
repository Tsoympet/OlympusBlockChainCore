#ifndef PARTHENON_METRICS_H
#define PARTHENON_METRICS_H

#include <string>
#include <unordered_map>

namespace parthenon {

class Metrics {
public:
    static void increment(const std::string& name);
    static void set(const std::string& name, double value);
    static double get(const std::string& name);

    static std::unordered_map<std::string, double> counters;
};

}

#endif
