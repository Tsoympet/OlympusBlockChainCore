#ifndef PARTHENON_L3_DAG_H
#define PARTHENON_L3_DAG_H

#include <string>
#include <vector>
#include <unordered_map>

namespace parthenon {

struct DAGNode {
    std::string hash;
    std::vector<std::string> parents;
};

class DAG {
public:
    std::unordered_map<std::string, DAGNode> graph;

    bool addNode(const DAGNode& node);
    bool hasNode(const std::string& hash) const;

    std::vector<std::string> getTips() const; // nodes with no children
};

}

#endif

