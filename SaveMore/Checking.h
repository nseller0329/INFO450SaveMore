#pragma once
#include "Account.h"
class Checking : public Account
{
private: 
	
	float CurrentBalance;

public:
	Checking(float Balance); //checking when created takes in the opening balance
	Checking();
	float Withdraw(float); //withdraws take in a value
	float Deposit(float); //deposits take in a value
	void Display(); //checking account copy of the display function
	float OrderChecks(); //function for Checking Class only
};



