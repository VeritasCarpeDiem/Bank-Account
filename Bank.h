#pragma once
#include <string>

using namespace std;

class Bank
{
private:
	int deposit, withdraw, transfer;
	
public:
	Bank();//constructor
	~Bank(); //destructor
	
	//getter functions:
	int getDepositAmount();
	int getWithdrawAmount();
	int getTransferAmount();

	
	void transferMoney(string username, int transferAmount);

};


