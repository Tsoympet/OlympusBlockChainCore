#ifndef PARTHENON_ZK_PROOF_H
#define PARTHENON_ZK_PROOF_H

#include <string>

namespace parthenon {

class ZKProof {
public:
    static bool verify(const std::string& proofData);
};

}

#endif

