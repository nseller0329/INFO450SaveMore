#pragma once
using namespace std;

class Account
{
protected:
	int AcctNum;
	float OpenBalance;
	


public:
	Account();
	Account(int Acct, float Balance);
	virtual float Withdraw(float)=0;
	virtual float Deposit(float)=0;
	virtual void Display()= 0;
	
	


};

