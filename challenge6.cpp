// sum up to the user provided number. - validation only +ive numbers.
#include<iostream>
using namespace std;
int main()
{
	int num = 0;
	int sum = 0;
	cout << "Please enter a number: \n";
	cin >> num;  // if user enters positive number, the while loop will not run
	while (num < 0) // this will keep running untill user enters a positive number.
	{
		cout << "Please enter positive number only: \n";
		cin >> num;
	}
	cout << endl;
	for (int i = 1; i <=num; i++)
	{
		sum +=i;
	}
	cout<<" total is : "<<sum <<endl;
	return 0;
}
