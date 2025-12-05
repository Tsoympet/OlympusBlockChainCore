#include "prometheus_exporter.h"
#include "metrics.h"

namespace parthenon {

std::string PrometheusExporter::exportMetrics() {
    std::string output;

    for (auto& kv : Metrics::counters) {
        output += kv.first + " " + std::to_string(kv.second) + "\n";
    }

    return output; // Should be served over HTTP
}

}
