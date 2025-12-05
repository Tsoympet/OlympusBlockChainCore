#ifndef PARTHENON_GAS_H
#define PARTHENON_GAS_H

#include <cstdint>
#include "exec_context.h"

namespace parthenon {

class GasEngine {
public:
    static uint64_t cost(uint8_t opcode);
    static bool consume(ExecutionContext& ctx, uint64_t amount);
};

}

#endif
