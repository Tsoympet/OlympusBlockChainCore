#include "wallet_manager.h"

namespace parthenon {

static std::vector<Account> accounts;

bool WalletManager::createWallet(const std::string& name) {
    Account acc(name);
    accounts.push_back(acc);
    return true;
}

bool WalletManager::loadWallet(const std::string& name) {
    // TODO: load wallet from disk
    (void)name;
    return true;
}

bool WalletManager::saveWallet(const std::string& name) {
    // TODO: save wallet to disk
    (void)name;
    return true;
}

Account* WalletManager::getAccount(const std::string& name) {
    for (auto& acc : accounts)
        if (acc.name == name)
            return &acc;
    return nullptr;
}

bool WalletManager::addAccount(const Account& acc) {
    accounts.push_back(acc);
    return true;
}

std::vector<std::string> WalletManager::listAccounts() {
    std::vector<std::string> names;
    for (auto& acc : accounts)
        names.push_back(acc.name);
    return names;
}

}
