#ifndef PARTHENON_EXEC_CONTEXT_H
#define PARTHENON_EXEC_CONTEXT_H

#include <vector>
#include <cstdint>
#include <string>
#include "storage.h"

namespace parthenon {

class ExecutionContext {
public:
    std::vector<uint8_t> bytecode;
    std::vector<int64_t> stack;
    Storage* storage;

    uint64_t gasRemaining;
    size_t pc = 0;
    bool halted = false;

    ExecutionContext() : storage(nullptr), gasRemaining(0), pc(0), halted(false) {}
};

}

#endif
