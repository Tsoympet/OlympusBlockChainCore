#include "alerts.h"

namespace parthenon {

std::vector<std::string> Alerts::alertLog;

void Alerts::trigger(const std::string& message) {
    alertLog.push_back(message);
}

std::vector<std::string> Alerts::getAlerts() {
    return alertLog;
}

}
