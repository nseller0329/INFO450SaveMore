#include "stdafx.h"
#include "Savings.h"
#include <iostream>
#include <time.h>
#include <stdio.h>


Savings:: Savings (float Balance) : Account(Balance)
{
	
	CurrentBalance = Balance;
	IRAccrual = 0;
	InterestRate = SetInterest();
	
}

Savings::Savings() : Account ()
{
	
	
}


void Savings::Display()
{
	cout << "|||Your Savings Account|||" << endl;
	cout << "Account Number: " << AcctNum << endl;
	cout << "This Account Was Opened On: " << OpeningDate << endl;
	cout << "Beginning Balance: " << OpenBalance << endl;
	cout << "Your current interest rate is: " << InterestRate << endl;
	cout << "You've Accumulated: " << IRAccrual << " in interest." << endl;
	cout << "Current Balance: " << CurrentBalance << "\n"<<"\n";
	
	 
}

float Savings::SetInterest()
{
	if (CurrentBalance < 10000)
	{
		InterestRate = .010f;
	}

	if (CurrentBalance >= 10000)
	{
		InterestRate = .020f;
	}
	return InterestRate;

}

void Savings :: AssessInterest () //sets interest rate and then assesses the accrual 
{
	
	IRAccrual = CurrentBalance * (InterestRate / 12);
	CurrentBalance = CurrentBalance + IRAccrual;
	
	
}



float Savings::Deposit(float DepositAmt)
{
	
	CurrentBalance += DepositAmt;
	SetInterest();
	return (CurrentBalance);
	
	
}

float Savings::Withdraw(float WithdrawAmt)
{
		const float WithdrawFee = 2.00;
	

	if (CurrentBalance - WithdrawAmt < 0)
	{
		cout << "Insufficient Funds. \n\n" << endl; 
		return -1;
	}
	if (CurrentBalance -WithdrawAmt >= 0)
	{
		CurrentBalance = CurrentBalance - WithdrawFee - WithdrawAmt;
		return (CurrentBalance);
	}
	SetInterest();
	return 0;

}