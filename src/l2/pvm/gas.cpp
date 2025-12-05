#include "gas.h"

namespace parthenon {

uint64_t GasEngine::cost(uint8_t opcode) {
    switch (opcode) {
        case 0x01: return 3;  // ADD
        case 0x02: return 3;  // SUB
        case 0x03: return 5;  // MUL
        case 0x04: return 5;  // DIV
        case 0x20: return 20; // STORE
        case 0x21: return 10; // LOAD
        case 0xFF: return 1;  // STOP
        default:   return 0;
    }
}

bool GasEngine::consume(ExecutionContext& ctx, uint64_t amount) {
    if (ctx.gasRemaining < amount) {
        ctx.halted = true;
        return false;
    }
    ctx.gasRemaining -= amount;
    return true;
}

}
