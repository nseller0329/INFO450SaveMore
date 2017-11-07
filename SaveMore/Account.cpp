#include "stdafx.h"
#include "Account.h"
#include <time.h>
#include <stdio.h>


Account::Account()  
{
	OpenBalance=0; //default value
	
}

int Account :: counter;

Account::Account(float Balance) : AcctNum(++counter) //++counter generates a unique ID by incrementing with each instance

{
	getTime(); //gets the time when Acct instance is created
	OpenBalance = Balance; //sets the OpenBalance to the inputed balance upon creation
	
}

void Account::getTime()
{
	time_t now;
	time(&now); //get time
	localtime_s(&OpenDate, &now); //convert time
	strftime(OpeningDate, sizeof OpeningDate,"%D", &OpenDate); //convert time to string with formatting



}