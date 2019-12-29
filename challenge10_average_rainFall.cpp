//program calculates average rainfall, using nested loops.
#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	int numYears =0;
	const int MONTH =12;
	float rainFall = 0.0f;
	float totalRainFall = 0.0f;
	float averageRainFail =0.0f;
	
	cout<<"Pelase enter number of years "<<endl;
	cin >> numYears;
	while (numYears < 1)
	{
		cout << "No. of Years must be at least 1 : Please renter "<<endl;
		cin >> numYears;
	}
	for (int i =1; i <=numYears; i++)
	{
		for (int months = 1; months <= MONTH; months++)
		{
			cout<<"Please enter the rain fall for "<<months << " month "<<endl;
			cin >> rainFall;
			while (rainFall<0)
			{
				cout<<"The rain fall can no be negative number, please reenter";
			}
			totalRainFall += rainFall;
		}
	}
	cout<< "\nNumber of months: "<< numYears * MONTH ;
	cout << "\nTotal Rain Fall " <<setprecision(2)<<fixed<< totalRainFall <<" inches"<<endl;
	cout <<"Average Rain Fall " << setprecision(2)<< fixed << totalRainFall / (numYears * MONTH)<<" inches"<<endl;
	
	return 0;
}
