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
	pSavings = new Savings(10);
	pSavings->Deposit(300);
	pSavings->Withdraw(100);
	pSavings->Deposit(500);
	pSavings->AssessInterest();
	pSavings->Display();
	delete pSavings;
	pSavings = new Savings(10000);
	pSavings->Withdraw(13000);
	pSavings->Display();
	delete pSavings;
	pSavings = new Savings(6000);
	pSavings->Display();
	delete pSavings;
	pChecking = new Checking(6000);
	pChecking->Display();
	pChecking->Withdraw(200);
	pChecking->Display();
	pChecking->OrderChecks();
	delete pChecking;
	pCertDeposit = new CertDeposit(50000,6);
	pCertDeposit->Display();
	pCertDeposit->Withdraw(300);
	pCertDeposit->Display();
	delete pCertDeposit;
	pCertDeposit = new CertDeposit(50000,3);
	pCertDeposit->Display();
	pCertDeposit->AgeTerm();
	pCertDeposit->Display();
	delete pCertDeposit;
	pCertDeposit = new CertDeposit(10000,-1);
	pCertDeposit->Withdraw(100);
	pCertDeposit->Display();
	delete pCertDeposit;
	return 0;
}

