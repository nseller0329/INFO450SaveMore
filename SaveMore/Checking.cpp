#include "stdafx.h"
#include "Checking.h"
#include <iostream>


Checking::Checking(int Acct, float Balance) : Account (Acct,Balance)
{
	CurrentBalance = Balance;
	CurrentBalance = Deposit();
	CurrentBalance = Withdraw();
}


Checking::~Checking()
{
}

void Checking::Display()
{
	cout << "||| Your Checking Account |||" << endl;
	cout << "Account Number: " << AcctNum << endl;
	cout << "Open Date: " << endl;
	cout << "Beginning Balance: " << OpenBalance << endl;
	cout << "Current Balance: " << CurrentBalance << endl;
}

float Checking :: OrderChecks()
{
	const float CheckFee = 15.00;
	CurrentBalance -= CheckFee;
	return (CurrentBalance);
}

float Checking::Deposit()
{
	float DepositAmt = 0;
	CurrentBalance += DepositAmt;
	return (CurrentBalance);
}

float Checking::Withdraw()
{
	float WithdrawAmt = 100.50;
	const float LowBalFee = 5.00;
	if (CurrentBalance < 500)
	{
		CurrentBalance = CurrentBalance - LowBalFee - WithdrawAmt;
		return (CurrentBalance);
	}
	CurrentBalance = CurrentBalance - WithdrawAmt;
	return (CurrentBalance);
	
}