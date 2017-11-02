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
	pSavings = new Savings(1, 10);
	pSavings->Display();
	pSavings = new Savings(2,10000);
	pSavings->Display();
	pSavings = new Savings(3, 6000);
	pSavings->Display();
	pChecking = new Checking(4, 10000);
	pChecking->Display();
	pChecking->OrderChecks();
	pChecking->Display();
	pChecking = new Checking(5, 300);
	pChecking->Display();

	return 0;
}

