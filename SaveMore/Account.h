#pragma once
using namespace std;

class Account
{
protected:
	static int counter; //for generating the Acct Numbers
	float OpenBalance; //balance at the creation of the account
	
public:
	struct tm OpenDate; //time structure
	char OpeningDate[30]; //character array for storing the date
	int AcctNum; //unique for each instance
	Account();
	Account(float Balance); //account will take in the balance as an input
	virtual float Withdraw(float)=0; //abstract 
	virtual float Deposit(float)=0; //abstract
	virtual void Display()= 0; //abstract
	void getTime(); //function for Account ONLY 
	
	


};

