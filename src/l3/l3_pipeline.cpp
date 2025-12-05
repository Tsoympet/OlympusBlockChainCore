#include "l3_pipeline.h"

namespace parthenon {

bool L3Pipeline::ingestTx(const std::string&) {
    // TODO: validate + queue tx
    return true;
}

bool L3Pipeline::finalizeMicroblock() {
    // TODO: assemble microblock, push to DAG
    return true;
}

}
