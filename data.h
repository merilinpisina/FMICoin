#ifndef FMICOINS
#define FMICOINS

#include "wallet.h"
#include "transactions.h"
#include "order.h"

class Data
{

public:
    explicit Data();

private:
    Wallet *wallets;
    Transaction *transactions;
    Order *orders;
};

#endif