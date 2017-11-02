#include "stdafx.h"
#include "CertDeposit.h"
#include <iostream>


CertDeposit::CertDeposit()
{
}


CertDeposit::~CertDeposit()
{
}

void CertDeposit::Display()
{
	cout << "Account Number: " << AcctNum << endl;
	cout << "Open Date: " << endl;
	cout << "Beginning Balance: " << OpenBalance << endl;
	cout << "Interest Accrued: " << endl;
	cout << "Withdraw Amount: " << endl;
	cout << "Desposit Amount: " << endl;
	cout << "Current Balance: " << CurrentBalance << endl;
}
 float CertDeposit::Deposit()
{
	 return 0;
}

float CertDeposit::Withdraw()
{
	return 0;
}

