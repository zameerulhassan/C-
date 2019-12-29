//calculating salary - each day salary is doubled.
#include<iostream>
using namespace std;
int main()
{
	int numDays = 1; // entered number of day of work
	double money = 1.0; // daily wages
	double total = 0.0; //total salary
	double dayPay = 0.0; // total salary per day.
	
	
	cout << "enter no. of day \n";
	cin >> numDays;
	
	while (numDays < 1 )
	{
		cout << "enter no. of day again. \n";
		cin >> numDays;	
	}
	for (int i = 1; i <= numDays; i++)
	{
		dayPay = money /100;
		cout << "Day "<< i << " you earned " << dayPay << " dollars \n"; 
		total +=dayPay;
		money *=2;
	}
	cout << "Total Salary : " << total << endl; 
	return 0;
}
