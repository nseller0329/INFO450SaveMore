#pragma once
#include "Account.h"
class CertDeposit : public Account
{
private:
	float CurrentBalance;
	float InterestRate; //interest rate will change based on certain conditions
	float IRAccrual; //interest will compound monthly

protected:
	int TermLength; //cannot be changed after creation

public:
	CertDeposit(float Balance, int term); //certificate deposit accounts have a balance and a term length associated with them
	CertDeposit();
	float Withdraw(float);
	float Deposit(float);
	void Display(); //copy of display function
	void AgeTerm(); //ages the term length FOR TESTING ONLY
	float SetInterest(); //sets interest rate
	void AssessInterest(); //determines monthly accrual
};

