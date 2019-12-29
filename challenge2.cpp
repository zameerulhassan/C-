// dollar game.

#include<iostream>
#include<ctime>
#include<cstdlib>
#include<iomanip>

using namespace std;
int main()
{
	int penny, neckel, dime, quarter, total;
	cout << "Enter no of penny"<<endl;
	cin >> penny;
	cout << "Enter no of neckels"<<endl;
	cin >> neckel;
	cout << "Enter no of dime"<<endl;
	cin >> dime;
	cout << "Enter no of quarters" << endl;
	cin >> quarter;
	total = (penny * .01) + (neckel * .05) + (dime * .1) + (quarter * .25);
	if (total == 1)
	{
		cout<<"Congrats amount enter is exactly 1$" <<endl;
	}
	else if (total > 1)
	{
		cout<<"amount enter is more than 1$"<<endl;
	}
	else if (total < 1)
	{
		cout<<"amount enter is less than 1$"<<endl;
	}
	return 0;
}
