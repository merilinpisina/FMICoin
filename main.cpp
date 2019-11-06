#include "id.h"

// add_wallet(...)
// convertTo(currency,amount)
//

int main(){

    initialize();
    std::cout << getAndIncrease() << std::endl;
    std::cout << id << std::endl;

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