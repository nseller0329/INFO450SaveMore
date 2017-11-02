#include "stdafx.h"
#include "Checking.h"
#include <iostream>


Checking::Checking(int Acct, float Balance) : Account (Acct,Balance)
{
	CurrentBalance = Balance;

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
	cout << "Current Balance: " << CurrentBalance << "\n" << "\n" ;
}

float Checking :: OrderChecks()
{
	const float CheckFee = 15.00;
	if (CurrentBalance >= 15)
	{
		CurrentBalance = CurrentBalance - CheckFee;
		return (CurrentBalance);
	}
	if (CurrentBalance < 15)
	{
		return -1;
	}

	return 0;
}

float Checking::Deposit(float DepositAmt)
{
	CurrentBalance += DepositAmt;
	return (CurrentBalance);
}

float Checking::Withdraw(float WithdrawAmt)
{
	
	const float LowBalFee = 5.00;
	if (CurrentBalance < 500 && CurrentBalance >= 0)
	{
		CurrentBalance = CurrentBalance - LowBalFee - WithdrawAmt;
		return (CurrentBalance);
	}

	if (CurrentBalance < 0)
	{
		return -1;
	}
	if (CurrentBalance >= 500)
	{
		CurrentBalance = CurrentBalance - WithdrawAmt;
		return (CurrentBalance);
	}
	return 0;
}