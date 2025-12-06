#ifndef PARTHENON_DIFFICULTY_H
#define PARTHENON_DIFFICULTY_H

#include <cstdint>

namespace parthenon {

class Difficulty {
public:
    static uint32_t calculateNext(uint32_t prevDifficulty, uint64_t timeDelta);
};

}

#endif

