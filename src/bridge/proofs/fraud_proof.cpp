#include "fraud_proof.h"

namespace parthenon {

bool FraudProof::submit(const std::string& data) {
    // TODO: store fraud proof claim
    (void)data;
    return true;
}

bool FraudProof::verify(const std::string& data) {
    // TODO: verify fraud claim against on-chain state
    (void)data;
    return true;
}

}
