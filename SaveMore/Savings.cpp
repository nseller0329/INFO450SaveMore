#include "stdafx.h"
#include "Savings.h"
#include <iostream>



Savings:: Savings (int Acct, float Balance) : Account(Acct, Balance)
{
	
	CurrentBalance = Balance;
	
	
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

	cout << "Current Balance: " << CurrentBalance << "\n"<<"\n";
	
	 
}

void Savings :: AssessInterest ()
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
	CurrentBalance = CurrentBalance + IRAccrual;
	cout << "You've Accumulated: " << IRAccrual << " in interest." << "\n" << "\n";
	
}



float Savings::Deposit(float DepositAmt)
{
	
	CurrentBalance += DepositAmt;
	return (CurrentBalance);
	
	
}

float Savings::Withdraw(float WithdrawAmt)
{
		const float WithdrawFee = 2.00;
	

	if (CurrentBalance - WithdrawAmt < 0)
	{
		cout << "Insufficient Funds." << "\n" << "\n";
		return -1;
	}
	if (CurrentBalance -WithdrawAmt >= 0)
	{
		CurrentBalance = CurrentBalance - WithdrawFee - WithdrawAmt;
		return (CurrentBalance);
	}
	
	return 0;

}