#include "stdafx.h"
#include "Checking.h"
#include <iostream>


Checking::Checking()
{
}


Checking::~Checking()
{
}

void Checking::Display()
{
	cout << "Account Number: " << AcctNum << endl;
	cout << "Open Date: " << endl;
	cout << "Beginning Balance: " << OpenBalance << endl;
	cout << "Interest Accrued: " << endl;
	cout << "Withdraw Amount: " << endl;
	cout << "Desposit Amount: " << endl;
	cout << "Current Balance: " << CurrentBalance << endl;
}
float Checking::Deposit()
{
	return 0;
}

float Checking::Withdraw()
{
	return 0;
}