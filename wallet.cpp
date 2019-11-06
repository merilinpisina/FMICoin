#include "wallet.h"

Wallet::Wallet(int fiatMoney, char* name): data (fiatMoney, name), fmiCoins(0) {
}

