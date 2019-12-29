#include<iostream>
using namespace std;
int main()
{
	int sum, number, upperlimit;
	sum=0;
	number=1;
	cout << "please enter the limit of numbers you want sum " ;
	cin>>upperlimit;
	while (number<=upperlimit)
	{
				sum = sum + number;
			number = number + 1;	
		}

		
cout<<"The sum of the first " << upperlimit <<" intergers starting from 1 is = "<< sum; 			
}


