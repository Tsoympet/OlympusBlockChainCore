#include "opcode.h"

namespace parthenon {

bool Opcode::execute(uint8_t opcode, ExecutionContext& ctx) {
    switch (opcode) {
        case 0x01: return op_add(ctx);
        case 0x02: return op_sub(ctx);
        case 0x03: return op_mul(ctx);
        case 0x04: return op_div(ctx);
        case 0x20: return op_store(ctx);
        case 0x21: return op_load(ctx);
        case 0xFF: return op_stop(ctx);
        default:
            ctx.halted = true;
            return false;
    }
}

bool Opcode::op_add(ExecutionContext& ctx) {
    auto b = ctx.stack.back(); ctx.stack.pop_back();
    auto a = ctx.stack.back(); ctx.stack.pop_back();
    ctx.stack.push_back(a + b);
    return true;
}

bool Opcode::op_sub(ExecutionContext& ctx) {
    auto b = ctx.stack.back(); ctx.stack.pop_back();
    auto a = ctx.stack.back(); ctx.stack.pop_back();
    ctx.stack.push_back(a - b);
    return true;
}

bool Opcode::op_mul(ExecutionContext& ctx) {
    auto b = ctx.stack.back(); ctx.stack.pop_back();
    auto a = ctx.stack.back(); ctx.stack.pop_back();
    ctx.stack.push_back(a * b);
    return true;
}

bool Opcode::op_div(ExecutionContext& ctx) {
    auto b = ctx.stack.back(); ctx.stack.pop_back();
    auto a = ctx.stack.back(); ctx.stack.pop_back();
    if (b == 0) return false;
    ctx.stack.push_back(a / b);
    return true;
}

bool Opcode::op_store(ExecutionContext& ctx) {
    auto value = ctx.stack.back(); ctx.stack.pop_back();
    auto key = ctx.stack.back(); ctx.stack.pop_back();
    ctx.storage->write(std::to_string(key), std::to_string(value));
    return true;
}

bool Opcode::op_load(ExecutionContext& ctx) {
    auto key = ctx.stack.back(); ctx.stack.pop_back();
    auto val = ctx.storage->read(std::to_string(key));
    ctx.stack.push_back(std::stoll(val));
    return true;
}

bool Opcode::op_stop(ExecutionContext& ctx) {
    ctx.halted = true;
    return true;
}

}
