#pragma once
#include "Account.h"
class CertDeposit : public Account
{
private:
	float CurrentBalance;
	float InterestRate;
	float IRAccrual;

protected:
	int TermLength;

public:
	CertDeposit(int Acct, float Balance, int term);
	CertDeposit();
	float Withdraw(float);
	float Deposit(float);
	void Display();
	float SetInterest();
	void AgeTerm();
	void AssessInterest();
};

