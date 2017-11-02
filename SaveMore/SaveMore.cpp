// SaveMore.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Account.h"
#include "Savings.h"
#include "Checking.h"
#include "CertDeposit.h"
using namespace std;



int main()
{
	Account *pAccount = NULL;
	Savings *pSavings = NULL;
	Checking *pChecking = NULL;
	CertDeposit *pCertDeposit = NULL;
	pSavings = new Savings(1, 10);
	pSavings->Deposit(300);
	pSavings->Withdraw(200);
	pSavings->Deposit(500);
	pSavings->AssessInterest();
	pSavings->Display();
	delete pSavings;
	pSavings = new Savings(2,10000);
	pSavings->Withdraw(13000);
	pSavings->Display();
	delete pSavings;
	pSavings = new Savings(3, 6000);
	pSavings->Display();
	delete pSavings;
	pChecking = new Checking(4, 10000);
	pChecking->Display();
	pChecking->Withdraw(300);
	pChecking->Display();
	pChecking->OrderChecks();
	delete pChecking;
	pCertDeposit = new CertDeposit(6,50000,6);
	pCertDeposit->Display();

	return 0;
}

