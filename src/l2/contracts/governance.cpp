#include "governance.h"

namespace parthenon {

std::unordered_map<uint64_t, Governance::Proposal> Governance::proposals;

uint64_t Governance::createProposal(const std::string& desc) {
    uint64_t id = proposals.size();
    proposals[id] = Proposal{desc, 0, 0};
    return id;
}

bool Governance::voteYes(uint64_t id, uint64_t weight) {
    if (!proposals.count(id)) return false;
    proposals[id].yesVotes += weight;
    return true;
}

bool Governance::voteNo(uint64_t id, uint64_t weight) {
    if (!proposals.count(id)) return false;
    proposals[id].noVotes += weight;
    return true;
}

Governance::Proposal Governance::get(uint64_t id) {
    return proposals[id];
}

}
