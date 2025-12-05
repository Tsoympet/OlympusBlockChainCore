#include "metrics.h"

namespace parthenon {

std::unordered_map<std::string, double> Metrics::counters;

void Metrics::increment(const std::string& name) {
    counters[name] += 1.0;
}

void Metrics::set(const std::string& name, double value) {
    counters[name] = value;
}

double Metrics::get(const std::string& name) {
    if (!counters.count(name)) return 0.0;
    return counters[name];
}

}
