//average pupulation of organisms.
#include<iostream>
using namespace std;
int main()
{
	float startPopulation = 0.0f;
	int numDays = 0;
	float avgIncrease = 0.0f;
	float dailyPopulation = 0.0f;
	
	cout<<"Please enter starting no of organism"<<endl;
	cin >> startPopulation;
	while (startPopulation < 2)
	{
		cout << "The starging pupulation can NOT be less than 2 Please reenter"<< endl;
		cin >> startPopulation;
	}
	cout << "Plz enter no of days the population to be multiplied"<< endl;
	cin >> numDays;
	while (numDays < 1)
	{
		cout << "The Number of days can NOT be less than 1 Please reenter"<< endl;
		cin >> numDays;
	}
	cout << "Pls enter average daily increase in population in percentages"<<endl;
	cin >> avgIncrease;
		while (avgIncrease < 0)
	{
		cout << "The average increase can NOT be less than 1 Please reenter"<< endl;
		cin >> avgIncrease;
	}
	for (int i = 1; i <= numDays; i++)
	{
		dailyPopulation =((avgIncrease/100)*startPopulation) + startPopulation;
		cout<<"Population for day " <<i <<" is " << dailyPopulation<<endl;
		startPopulation = 	dailyPopulation;
	}
	return 0;
}
