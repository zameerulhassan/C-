// year increase 4% in the membership fee (current is 2,500) for next 6 years
#include<iostream>
using namespace std;
int main()
{
	const float INCREASE = 0.04;
	float membership = 2500;
	const int YEARS	= 6;
	for (int i = 1; i <= YEARS; i++)
	{
		membership = membership + membership * INCREASE;
		cout << "Fee for " << i<<"th " <<" year "<< " is " << membership <<endl;
	}
	return 0;
}
