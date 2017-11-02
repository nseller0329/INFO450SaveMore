#include "stdafx.h"
#include "Account.h"


Account::Account()
{
	AcctNum=000;
	OpenBalance=0;

}


Account::Account(int Acct, float Balance)

{
	AcctNum = Acct;
	OpenBalance = Balance;
	
}
