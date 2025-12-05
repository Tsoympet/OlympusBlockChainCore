#ifndef PARTHENON_ALERTS_H
#define PARTHENON_ALERTS_H

#include <string>
#include <vector>

namespace parthenon {

class Alerts {
public:
    static void trigger(const std::string& message);
    static std::vector<std::string> getAlerts();
private:
    static std::vector<std::string> alertLog;
};

}

#endif
