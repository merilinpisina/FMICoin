#ifndef WALLETS
#define WALLETS

class Wallet
{
public:
    explicit Wallet(int fiatMoney, char *name);
    Wallet(const Wallet &) = delete;
    Wallet &operator=(const Wallet &) = delete;
    ~Wallet();

    void setMoney (double fiatMoney);
    void setCoins (double fmiCoin);
    void setOwner (char *name);
    void setID (unsigned int id);

    double getCoins();
    double getMoney();
    char* getName();

    void saveRecord();
    void loadTransactions();
    void loadOrders();

private:
    struct wallet
    {
        unsigned int id;
        char owner[256];
        double fiatMoney;

        wallet();
        wallet(int fiatMoney, char* name);
    } data;
    double fmiCoins;
};

// ctime!
//stringstream
// order::SELL / order::BUY

// in the class wallet -> struct wallet as a member

#endif