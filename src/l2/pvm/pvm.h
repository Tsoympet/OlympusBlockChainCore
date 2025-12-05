#ifndef PARTHENON_PVM_H
#define PARTHENON_PVM_H

#include <string>
#include <vector>
#include <unordered_map>
#include "opcode.h"
#include "gas.h"
#include "exec_context.h"
#include "storage.h"

namespace parthenon {

class PVM {
public:
    static bool execute(ExecutionContext& ctx);

private:
    static bool step(ExecutionContext& ctx, uint8_t opcode);
};

}

#endif
