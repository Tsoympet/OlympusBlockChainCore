#ifndef PARTHENON_PROMETHEUS_EXPORTER_H
#define PARTHENON_PROMETHEUS_EXPORTER_H

#include <string>

namespace parthenon {

class PrometheusExporter {
public:
    static std::string exportMetrics();
};

}

#endif
