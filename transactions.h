#ifndef TRANSACTIONS
#define TRANSACTIONS

class TransactionData
{
public:
    explicit TransactionData (long long time, unsigned int senderId, unsigned int receiverId, double fmiCoins);
    TransactionData (const TransactionData&) = delete;
    TransactionData& operator=(const TransactionData&) = delete;
    ~TransactionData ();

    void validate();

private:
    struct transaction{
    long long time;
    unsigned int senderId;
    unsigned int receiverId;
    double fmiCoins;
    }* data;
    unsigned int size, capacity;
};



#endif