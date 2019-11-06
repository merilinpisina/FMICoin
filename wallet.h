#ifndef WALLETS
#define WALLETS

class Wallet{

public:
    explicit Wallet(int fiatMoney, char* name);
    Wallet(const Wallet&) = delete;
    Wallet& operator=(const Wallet&) = delete;
    ~Wallet();

private:

};


#endif