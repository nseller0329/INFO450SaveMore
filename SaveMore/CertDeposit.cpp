#include "stdafx.h"
#include "CertDeposit.h"
#include <iostream>


CertDeposit::CertDeposit(int Acct, float Balance, int Term) : Account(Acct, Balance)
{
	if (Term > 5)
	{
		TermLength = 5;
		cout << "Invalid Term Length, Your Term will be set to 5 years." << endl;
	}

	if (Term < 0)
	{
		TermLength = 0;
		cout << "Invalid Term Length, Your Term will be set to 0." << endl;
	}
	if (Term <= 5 && Term > 0)
	{
		TermLength = Term;
	}

	CurrentBalance = Balance;
	InterestRate = SetInterest();
	
}


CertDeposit::CertDeposit()
{
	
}

void CertDeposit::Display()
{
	cout << "||| Your Certificate Deposit Account |||" << endl;
	cout << "Account Number: " << AcctNum << endl;
	cout << "Open Date: " << endl;
	cout << "Term: " << TermLength << endl;
	cout << "Beginning Balance: " << OpenBalance << endl;
	cout << "Your interest rate is: " << InterestRate << endl;
	cout << "Current Balance: " << CurrentBalance << "\n" << "\n";
}
float CertDeposit::SetInterest()
{
	if (TermLength == 5)
	{
		InterestRate = .10f;
		return InterestRate;
	}
	if (TermLength < 5)
	{
		InterestRate = .05f;
		return InterestRate;
	}
	return 0;
}

 float CertDeposit::Deposit(float DepositAmt)
 {
	 CurrentBalance = CurrentBalance + DepositAmt;
	 return CurrentBalance;
}

float CertDeposit::Withdraw(float WithdrawAmt)
{
	const float WithdrawFee = .10f;
	
	if (TermLength != 0)
	{
		CurrentBalance = (CurrentBalance*WithdrawFee) + CurrentBalance - WithdrawAmt;
		return (CurrentBalance);
	}
	if (CurrentBalance - WithdrawAmt < 0)
	{
		cout << "Insufficient Funds." << "\n" << "\n";
		return -1;
	}
	return 0;
}

void CertDeposit::AgeTerm()
{
	if (TermLength > 0)
	{
		TermLength --;
	}
	if (TermLength == 0)
	{
		return;
	}
}

void CertDeposit::AssessInterest()
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