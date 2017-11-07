#pragma once
#include "Account.h"
class Savings : public Account
{
	
	

private:
	float InterestRate;
	float CurrentBalance;
	float IRAccrual;
	
public:
	
	Savings(float Balance);
	Savings();
	float Withdraw(float);
	float Deposit(float);
	void Display();
	float SetInterest();
	void AssessInterest();
};

