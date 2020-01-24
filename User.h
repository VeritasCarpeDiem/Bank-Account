#pragma once
#include <string>
#include "Bank.h"

class User
{
private:
	string username, password; //case-sensitive?-- check for uppercase, lowercase

	int deposit, withdraw, transfer, balance;
	//Bank b;
public:

	User();//default contructor
	~User(); //destructor

	//input validation functions:
	bool isUsernameCorrect(string username);
	bool isPasswordCorrect(string password);
	bool isDepositNegative(int deposit);
	bool canUserWithdraw(int withdraw);
	
	void registerUsername();
	void registerPassword();

	//getter functions:
	string getUsername();
	string getPassword();

	//setter functions:
	void setUsername();
	void setPassword();

	//functions to transfer $:
	void deductTransferMoney(int transferAmount);
	void recieveTransferMoney(int transferAmount);

	void depositMoney();
	void withdrawMoney();
	void displayCurrentBalance();

};

