#include "Bank.h"
#include <iostream>
#include <string>

using namespace std;

Bank::Bank()
{
	deposit, withdraw, transfer = 0;
}

Bank::~Bank()
{
}

int Bank::getDepositAmount()
{
	return deposit;
}

int Bank::getWithdrawAmount()
{
	return withdraw;
}

int Bank::getTransferAmount()
{
	return 0;
}

void Bank::transferMoney(string username,int transferAmount)
{
	
	transfer = transferAmount;
}
