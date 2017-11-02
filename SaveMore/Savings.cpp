#include "stdafx.h"
#include "Savings.h"
#include <iostream>

float AssessInterest(float CurrentBalance);


Savings:: Savings (int Acct, float Balance) : Account(Acct, Balance)
{
	CurrentBalance = Balance;
	CurrentBalance = Deposit();
	CurrentBalance = Withdraw();
	Interest = AssessInterest(CurrentBalance);
	
	
}

Savings::Savings() : Account ()
{
	
	
}


void Savings::Display()
{
	cout << "|||Your Savings Account|||" << endl;
	cout << "Account Number: " << AcctNum << endl;
	cout << "Open Date: " << endl;
	cout << "Beginning Balance: " << OpenBalance << endl;
	cout << "Interest Accrued: " << Interest << endl;
	cout << "Current Balance: " << CurrentBalance << endl;
	 
}

float AssessInterest (float CurrentBalance)
{
	float InterestRate;
	float IRAccrual;
	
	if (CurrentBalance < 10000)
	{
		InterestRate = .010f;
	}
	if (CurrentBalance >= 10000)
	{
		InterestRate = .020f;
	}

	IRAccrual = CurrentBalance * (InterestRate / 12);

	return(IRAccrual);
}



float Savings::Deposit()
{
	float DepositAmt = 0;
	CurrentBalance += DepositAmt;
	return (CurrentBalance);
	
	
}

float Savings::Withdraw()
{
	float WithdrawAmt = 100.50;
	const float WithdrawFee = 2.00;
	

	if (CurrentBalance - WithdrawAmt < 0)
	{	
		return -1;
	}
	if (CurrentBalance -WithdrawAmt >= 0)
	{
		CurrentBalance = CurrentBalance - WithdrawFee - WithdrawAmt;
		return (CurrentBalance);
	}
	
	return 0;

}