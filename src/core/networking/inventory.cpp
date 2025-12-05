#include "inventory.h"

namespace parthenon {

std::vector<std::string> Inventory::pendingTxInventory;
std::vector<std::string> Inventory::pendingBlockInventory;

void Inventory::announceTx(const std::string& txid) {
    pendingTxInventory.push_back(txid);
}

void Inventory::announceBlock(const std::string& blockHash) {
    pendingBlockInventory.push_back(blockHash);
}

}
