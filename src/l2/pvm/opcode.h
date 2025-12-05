#ifndef PARTHENON_OPCODE_H
#define PARTHENON_OPCODE_H

#include <cstdint>
#include <unordered_map>
#include <functional>
#include "exec_context.h"

namespace parthenon {

class Opcode {
public:
    static bool execute(uint8_t opcode, ExecutionContext& ctx);

private:
    static bool op_add(ExecutionContext& ctx);
    static bool op_sub(ExecutionContext& ctx);
    static bool op_mul(ExecutionContext& ctx);
    static bool op_div(ExecutionContext& ctx);
    static bool op_store(ExecutionContext& ctx);
    static bool op_load(ExecutionContext& ctx);
    static bool op_stop(ExecutionContext& ctx);
};

}

#endif
