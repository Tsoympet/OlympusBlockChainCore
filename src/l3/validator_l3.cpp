#include "validator_l3.h"

namespace parthenon {

bool L3Validator::validateMicroblock(const std::string&) {
    // TODO: signature + hash checks
    return true;
}

bool L3Validator::validateDAGStructure() {
    // TODO: check for cycles and DAG correctness
    return true;
}

}
