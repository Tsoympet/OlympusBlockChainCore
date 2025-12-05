#ifndef PARTHENON_INVENTORY_H
#define PARTHENON_INVENTORY_H

#include <string>
#include <vector>

namespace parthenon {

class Inventory {
public:
    static void announceTx(const std::string& txid);
    static void announceBlock(const std::string& blockHash);

    static std::vector<std::string> pendingTxInventory;
    static std::vector<std::string> pendingBlockInventory;
};

}

#endif
