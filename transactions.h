#ifndef TRANSACTIONS
#define TRANSACTIONS

class Transaction
{
public:
    explicit Transaction (long long time, unsigned int senderId, unsigned int receiverId, double fmiCoins);
    Transaction (const Transaction&) = delete;
    Transaction& operator=(const Transaction&) = delete;
    ~Transaction ();

    void validate();

private:
    long long time;
    unsigned int senderId;
    unsigned int receiverId;
    double fmiCoins;
};



#endif