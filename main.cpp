#include "wallet.h"
// add_wallet(...)
// convertTo(currency,amount)
//

int main(){

    initialize();
    std::cout<<id<<std::endl;
    std::cout << "\n";
    std::cout << getAndIncrease() << std::endl;
    std::cout << id << std::endl;

    char name[100];
    strcpy(name, ("name"));
    Wallet test(1234,name);
    test.print();
    return 0;
}
/*
struct Wallet {
    char owner[256];
    unsigned id;
    double fiatMoney;
};

struct Transaction {
    long long time;
    unsigned senderId;
    unsigned receiverId;
    double fmiCoins;
};

struct Order {
    enum Type { SELL, BUY } type;
    unsigned walletId;
    double fmiCoins;
};

*/