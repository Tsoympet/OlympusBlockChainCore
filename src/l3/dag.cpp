#include "dag.h"

namespace parthenon {

bool DAG::addNode(const DAGNode& node) {
    if (graph.count(node.hash)) return false;
    graph[node.hash] = node;
    return true;
}

bool DAG::hasNode(const std::string& hash) const {
    return graph.count(hash) != 0;
}

std::vector<std::string> DAG::getTips() const {
    // TODO: return nodes with no children
    return {};
}

}
