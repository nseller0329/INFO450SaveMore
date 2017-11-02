#pragma once
#include "Account.h"
class CertDeposit : public Account
{
private:
	
	float CurrentBalance;
public:
	CertDeposit();
	~CertDeposit();
	float Withdraw();
	float Deposit();
	void Display();
};

