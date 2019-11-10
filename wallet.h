#ifndef WALLETS
#define WALLETS

#include <string.h>
#include "id.h"

class Wallet
{
public:
    explicit Wallet(int fiatMoney, char* name);
    Wallet(const Wallet &) = delete;
    Wallet &operator=(const Wallet &) = delete;
    //~Wallet();

    // void setMoney (double fiatMoney);
    // void setCoins (double fmiCoin);
    // void setOwner (char *name);
    // void setID (unsigned int id);

    // double getCoins();
    // double getMoney();
    // char* getName();

    // void saveRecord();
    // void loadTransactions();
    // void loadOrders();

    void print() const;

private:
    struct wallet
    {
        unsigned int id;
        char owner[256];
        double fiatMoney;

        //wallet();
        // wallet(char *name, int money)
        // {
        //     id = getAndIncrease();
        //     strcpy(owner, name);
        //     fiatMoney = money;
        // }
    } data;
    double fmiCoins;
};

// ctime!
//stringstream
// order::SELL / order::BUY

// in the class wallet -> struct wallet as a member

#endif