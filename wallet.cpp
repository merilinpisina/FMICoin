#include "wallet.h"
//#include "id.h"

Wallet::Wallet(int fiatMoney, char *name) :/* data(name, fiatMoney), */fmiCoins(0)
{
    data.id = getAndIncrease();
    strcpy(data.owner, name);
    data.fiatMoney = fiatMoney;
}

void Wallet::print() const
{
    std::cout << data.id << " " << data.owner << " " << data.fiatMoney << std::endl;
}
