#include "stdafx.h"
#include "CertDeposit.h"
#include <iostream>


CertDeposit::CertDeposit(float Balance, int Term) : Account(Balance) //upon creation balance is derived from account , term is unique to cert deposit class
{  //check the inputted term length for various conditions
	if (Term > 5) 
	{
		TermLength = 5;
		cout << "Invalid Term Length, Your Term will be set to 5 years. \n\n" << endl; // if the term length is longer than 5 it will be defaulted to 5
	}

	if (Term < 0)
	{
		TermLength = 0;
		cout << "Invalid Term Length, Your Term will be set to 0. \n\n" << endl; // if the term length is less than 0 it will be defaulted to 0
	}
	if (Term <= 5 && Term > 0) //if the term length is 5 or less and greater than 0 it will not be altered
	{
		TermLength = Term;
	}

	CurrentBalance = Balance;
	InterestRate = SetInterest();
	IRAccrual = 0;
}


CertDeposit::CertDeposit()
{
	
}

void CertDeposit::Display()
{
	cout << "||| Your Certificate Deposit Account |||" << endl;
	cout << "Account Number: " << AcctNum << endl;
	cout << "This Account Was Opened On: " << OpeningDate << endl;
	cout << "Term: " << TermLength << endl;
	cout << "Beginning Balance: " << OpenBalance << endl;
	cout << "Your interest rate is: " << InterestRate << endl;
	cout << "You have accrued " << IRAccrual << " in interest." << endl;
	cout << "Current Balance: " << CurrentBalance << "\n" << "\n";
}
float CertDeposit::SetInterest()
{
	if (TermLength == 5)
	{
		InterestRate = .10f;
	}
	if (TermLength < 5)
	{
		InterestRate = .05f;
	}
	return InterestRate;
}
void CertDeposit::AssessInterest()
{
	IRAccrual = CurrentBalance * (InterestRate / 12);
	CurrentBalance = CurrentBalance + IRAccrual;
}

 float CertDeposit::Deposit(float DepositAmt)
 {
	 CurrentBalance = CurrentBalance + DepositAmt;
	
	 return CurrentBalance;
}

float CertDeposit::Withdraw(float WithdrawAmt)
{
	const float WithdrawFee = .10f;
	
	if (CurrentBalance - WithdrawAmt < 0)
	{
		cout << "Insufficient Funds. \n\n" << endl;
		return -1;
	}
	
	if (TermLength != 0)
	{
		CurrentBalance = (CurrentBalance -(CurrentBalance*WithdrawFee) ) - WithdrawAmt;
		return (CurrentBalance);
	}

	if (TermLength == 0)
	{
		CurrentBalance = CurrentBalance - WithdrawAmt;
			return (CurrentBalance);
	}
	
	return 0;
}

void CertDeposit::AgeTerm() //ages the term to test the conditions 
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
