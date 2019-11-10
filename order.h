#ifndef ORDER_DATA
#define ORDER_DATA

enum OrderType { SELL, BUY };

class OrderData
{
public:
    OrderData();
    ~OrderData();

private:
    struct order {
    OrderType type;
    unsigned walletId;
    double fmiCoins;
    }* data;
    unsigned int size, capacity;
};

#endif