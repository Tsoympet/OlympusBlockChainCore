#include "hardware_bridge.h"

namespace parthenon {

bool HardwareBridge::isDeviceConnected() {
    // TODO: integrate HID/USB
    return false;
}

bool HardwareBridge::getPublicKey(std::string& outKey) {
    // TODO
    outKey = "";
    return false;
}

bool HardwareBridge::signMessage(const std::string& msg,
                                 std::vector<uint8_t>& sigOut) {
    // TODO
    (void)msg;
    sigOut.clear();
    return false;
}

}
