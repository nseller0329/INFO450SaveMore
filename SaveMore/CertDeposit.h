#pragma once
#include "Account.h"
class CertDeposit : public Account
{
private:
	int TermLength;
	float CurrentBalance;

public:
	CertDeposit(int Acct, float Balance, int term) { term = TermLength; }
	CertDeposit();
	float Withdraw(float);
	float Deposit(float);
	void Display();
};

