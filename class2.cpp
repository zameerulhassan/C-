#include <iostream>

#include<fstream>
#include<cstdlib>
#include<cctype>
#include<iomanip>
#include <cmath>
#include<string.h>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;
struct CDAccount
{
	double balance;
	double interestRate;
	int term; // no of months to maturity.
};
void getData (CDAccount & theAccount);
int main()
{
	CDAccount myAccount;
	getData(myAccount);
	
	double rateFraction, interest;
	rateFraction=myAccount.interestRate/100;
	interest = myAccount.balance * rateFraction * (myAccount.term/12.0);
	myAccount.balance = myAccount.balance + interest;
	
	cout.setf(ios::fixed);
	cout.setf(ios::showpoint);
	cout.precision(2);
	cout<<"When your CD matures in "<<myAccount.term << " Months \n"
	<<"it will have a balance of $ "<<myAccount.balance << endl;
	return 0;
}
void getData (CDAccount & theAccount)
{
	using namespace std;
	cout<<"enter account balance: $";
	cin>>theAccount.balance;
	cout<<"Enter the account interest rate";
	cin>>theAccount.interestRate;
	cout<<"enter the no of months";
	cin>>theAccount.term;
}
