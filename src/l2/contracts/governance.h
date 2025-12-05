#ifndef PARTHENON_GOVERNANCE_H
#define PARTHENON_GOVERNANCE_H

#include <unordered_map>
#include <string>
#include <cstdint>

namespace parthenon {

class Governance {
public:
    struct Proposal {
        std::string description;
        uint64_t yesVotes = 0;
        uint64_t noVotes = 0;
    };

    static std::unordered_map<uint64_t, Proposal> proposals;

    static uint64_t createProposal(const std::string& desc);
    static bool voteYes(uint64_t id, uint64_t weight);
    static bool voteNo(uint64_t id, uint64_t weight);

    static Proposal get(uint64_t id);
};

}

#endif
