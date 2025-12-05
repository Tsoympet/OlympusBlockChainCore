#ifndef PARTHENON_WALLET_MANAGER_H
#define PARTHENON_WALLET_MANAGER_H

#include <string>
#include <vector>
#include "account.h"

namespace parthenon {

class WalletManager {
public:
    static bool createWallet(const std::string& name);
    static bool loadWallet(const std::string& name);
    static bool saveWallet(const std::string& name);

    static Account* getAccount(const std::string& name);
    static bool addAccount(const Account& acc);

    static std::vector<std::string> listAccounts();
};

}

#endif

