#ifndef WALLET_DATA
#define WALLET_DATA

#include "wallet.h"

class WalletData{
public:
    // Loads all data from wallets.dat
    WalletData();
    WalletData(const WalletData &) = delete;
    WalletData &operator=(const WalletData &) = delete;
    ~WalletData();

    Wallet& findByID(const unsigned int ID);

private:
    unsigned int size, capacity;
    Wallet* data;

    void readAndLoad(char *fileName);
    void deleteData();
};



#endif