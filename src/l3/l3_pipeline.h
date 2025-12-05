#ifndef PARTHENON_L3_PIPELINE_H
#define PARTHENON_L3_PIPELINE_H

#include <string>
#include <vector>

namespace parthenon {

class L3Pipeline {
public:
    static bool ingestTx(const std::string& txHash);
    static bool finalizeMicroblock();
};

}

#endif
