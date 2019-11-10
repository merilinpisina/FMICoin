#ifndef FMICOINS
#define FMICOINS

#include "wallet_data.h"
#include "transactions.h"
#include "order.h"

class Data
{

public:
    explicit Data();

private:
    WalletData wallets;
    TransactionData transactions;
    OrderData orders;
};

#endif