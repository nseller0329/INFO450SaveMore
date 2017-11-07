#pragma once
#include "Account.h"
class Savings : public Account
{
	
	

private:
	float Interest;
	float CurrentBalance;
	float IRAccrual;
	
public:
	
	Savings(float Balance);
	Savings();
	float Withdraw(float);
	float Deposit(float);
	void Display();
	void AssessInterest();
};

