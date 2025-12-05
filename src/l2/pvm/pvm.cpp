#include "pvm.h"

namespace parthenon {

bool PVM::execute(ExecutionContext& ctx) {
    while (!ctx.halted && ctx.pc < ctx.bytecode.size()) {
        uint8_t op = ctx.bytecode[ctx.pc];
        ctx.pc++;

        if (!GasEngine::consume(ctx, GasEngine::cost(op)))
            return false;

        if (!step(ctx, op))
            return false;
    }
    return true;
}

bool PVM::step(ExecutionContext& ctx, uint8_t opcode) {
    return Opcode::execute(opcode, ctx);
}

}
