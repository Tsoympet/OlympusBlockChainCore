#ifndef PARTHENON_FRAUD_PROOF_H
#define PARTHENON_FRAUD_PROOF_H

#include <string>

namespace parthenon {

class FraudProof {
public:
    static bool submit(const std::string& data);
    static bool verify(const std::string& data);
};

}

#endif
