#include "stdafx.h"
#include "CertDeposit.h"
#include <iostream>


CertDeposit::CertDeposit(int Acct, float Balance, int Term) : Account(Acct, Balance)
{
	TermLength = Term;
}


CertDeposit::CertDeposit()
{
	
}

void CertDeposit::Display()
{
	cout << "||| Your Checking Account |||" << endl;
	cout << "Account Number: " << AcctNum << endl;
	cout << "Open Date: " << endl;
	cout << "Term: " << TermLength << endl;
	cout << "Beginning Balance: " << OpenBalance << endl;
	cout << "Current Balance: " << CurrentBalance << "\n" << "\n";
}
 float CertDeposit::Deposit(float DepositAmt)
{
	 CurrentBalance += DepositAmt;
	 return (CurrentBalance);
}

float CertDeposit::Withdraw(float WithdrawAmt)
{
	return 0;
}
