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
	pSavings = new Savings(10000); //checking interest rate 
	pSavings->AssessInterest(); //accrues interest b
	pSavings->Display();
	delete pSavings;
	pSavings = new Savings(1000); //interest rate should be different than previous one
	pSavings->AssessInterest();
	pSavings->Display();
	delete pSavings;
	pSavings = new Savings(1000); //checking withdraw and deposits 
	pSavings ->Deposit(500);
	pSavings->Withdraw(100);
	pSavings->Display();
	delete pSavings;
	pSavings = new Savings(10); //checking insufficient funds 
	pSavings->Withdraw(20);
	delete pSavings;
	pChecking = new Checking(6000); 
	pChecking->Display();
	pChecking->OrderChecks(); //ordering checks balance should be less $15 
	pChecking->Display();
	pChecking->Withdraw(5600); //make balance less than 500 to check fees
	pChecking->Display();
	pChecking->Withdraw(100); //check fees applying
	pChecking->Deposit(200);
	pChecking->Withdraw(10000000); //checking negative balance 
	delete pChecking;
	pCertDeposit = new CertDeposit(50000,6); //checking term length overide
	pCertDeposit->Display(); 
	pCertDeposit->Withdraw(300); //checking early withdrawal 
	pCertDeposit->Display();
	delete pCertDeposit;
	pCertDeposit = new CertDeposit(50000,3); 
	pCertDeposit->Display();
	pCertDeposit->AgeTerm(); //lowering term 
	pCertDeposit->Withdraw(1000); //checking fees again 
	pCertDeposit->Display();
	pCertDeposit->AgeTerm();
	pCertDeposit->AgeTerm();
	pCertDeposit->Withdraw(1000); //tern is now 0 , no withdraw fee should apply 
	pCertDeposit->Display();
	delete pCertDeposit;
	pCertDeposit = new CertDeposit(10000,-1); //checking term length override 
	pCertDeposit->Withdraw(2000000); //checking negative balance
	pCertDeposit->Display();
	delete pCertDeposit;
	return 0;
}

