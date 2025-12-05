#ifndef PARTHENON_L3_VALIDATOR_H
#define PARTHENON_L3_VALIDATOR_H

#include <string>

namespace parthenon {

class L3Validator {
public:
    static bool validateMicroblock(const std::string& hash);
    static bool validateDAGStructure();
};

}

#endif
