#include "stdafx.h"
#include "Savings.h"
#include <iostream>
#include <time.h>
#include <stdio.h>


Savings:: Savings (float Balance) : Account(Balance)
{
	
	CurrentBalance = Balance;
	IRAccrual = 0;
	
	
}

Savings::Savings() : Account ()
{
	
	
}


void Savings::Display()
{
	cout << "|||Your Savings Account|||" << endl;
	cout << "Account Number: " << AcctNum << endl;
	cout <<"This Account Was Opened On: "<< OpeningDate;
	cout << "Beginning Balance: " << OpenBalance << endl;
	cout << "You've Accumulated: " << IRAccrual << " in interest." << endl;
	cout << "Current Balance: " << CurrentBalance << "\n"<<"\n";
	
	 
}

void Savings :: AssessInterest () //sets interest rate and then assesses the accrual 
{
	float InterestRate;
	
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