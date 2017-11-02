#pragma once
#include "Account.h"
class Checking : public Account
{
private: 
	
	float CurrentBalance;

public:
	Checking(int Acct, float Balance);
	~Checking();
	float Withdraw(float);
	float Deposit(float);
	void Display();
	float OrderChecks();
};

