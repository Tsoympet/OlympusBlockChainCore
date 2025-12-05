#ifndef PARTHENON_HARDWARE_BRIDGE_H
#define PARTHENON_HARDWARE_BRIDGE_H

#include <string>
#include <vector>

namespace parthenon {

class HardwareBridge {
public:
    static bool isDeviceConnected();
    static bool getPublicKey(std::string& outKey);
    static bool signMessage(const std::string& msg,
                            std::vector<uint8_t>& sigOut);
};

}

#endif
