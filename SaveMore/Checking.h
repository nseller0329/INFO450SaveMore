#pragma once
#include "Account.h"
class Checking : public Account
{
private: 
	float Interest;
	float CurrentBalance;

public:
	Checking();
	~Checking();
	float Withdraw();
	float Deposit();
	void Display();
};

