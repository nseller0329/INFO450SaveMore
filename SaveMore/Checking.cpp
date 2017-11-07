#include "stdafx.h"
#include "Checking.h"
#include <iostream>


Checking::Checking(float Balance) : Account (Balance) //sets Checking as a Derived Class of Account and gains the Balance from the Account creation
{
	CurrentBalance = Balance;

}


Checking::Checking()
{
}

void Checking::Display() //displays account attributes variables derived from Account or Unique to Account Type
{
	cout << "||| Your Checking Account |||" << endl;
	cout << "Account Number: " << AcctNum << endl;
	cout << "This Account Was Opened On: " << OpeningDate << endl;
	cout << "Beginning Balance: " << OpenBalance << endl;
	cout << "Current Balance: " << CurrentBalance << "\n" << "\n" ;
}

float Checking :: OrderChecks() //function for ordering checks each check order has a fee of $15 taken from the balance at time of ordering
{
	const float CheckFee = 15.00;
	if (CurrentBalance >= 15)
	{
		CurrentBalance = CurrentBalance - CheckFee;
		return (CurrentBalance);
	}
	if (CurrentBalance < 15) //if the balance is less than 15 the account will go negative which is not allowed
	{
		cout << "Insufficient Funds \n \n" << endl;
		return -1;
	}

	return 0;
}

float Checking::Deposit(float DepositAmt) //deposited amount is added to the current balance
{
	CurrentBalance += DepositAmt;
	return (CurrentBalance);
}

float Checking::Withdraw(float WithdrawAmt) // a low balance fee is attached if the balance is lower than 500 at time of withdrawal
{
	
	const float LowBalFee = 5.00;
	if (CurrentBalance < 500 && CurrentBalance >= 0)
	{
		CurrentBalance = CurrentBalance - LowBalFee - WithdrawAmt;
		return (CurrentBalance);
	}

	if (CurrentBalance < 0) // balance is not allowed to go negative
	{
		cout << "Insufficient Funds. \n\n" << endl;
		return -1;
	}
	if (CurrentBalance >= 500) //balances $500 or above have no fees associated
	{
		CurrentBalance = CurrentBalance - WithdrawAmt;
		return (CurrentBalance);
	}
	return 0;
}