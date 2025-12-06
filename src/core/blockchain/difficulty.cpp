#include "difficulty.h"

namespace parthenon {

uint32_t Difficulty::calculateNext(uint32_t prevDifficulty, uint64_t timeDelta) {
    // TODO: implement real adjustment algorithm
    return prevDifficulty;
}

}
