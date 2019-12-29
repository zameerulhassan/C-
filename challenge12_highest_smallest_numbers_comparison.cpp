// program display largest and smallest intergers entered by user.
// -99 to exit the program
#include<iostream>
using namespace std;
int main ()
{
	int number = 0;
	int high ;
	int low ;
	int counter = 0;
	
	while (number !=-99)
	{
		cout <<"Please enter numbers. Enter -99 to quit"<<endl;
		cin >> number;
		
		if (counter ==0) // this loop runs only first time- never again.
		/* using this variable serves purpose of using number 
		variable first as first number and then one the 2nd iteration number as yet another variable,*/
		{
			high = number; 
			low = number;
			/* since this loop runs only once when counter ==0, it means at this stage
			the high and low are equal to number entered at first stage when counter is equal to zeor.*/
		}
		else
		{
			if (number > high && number !=-99)
			high = number;
			else if (number < low && number !=-99)
			low = number;
		}
		counter ++;
	}
	cout<<"The Highest Number you entered is "<<high<<endl;
	cout<<"The Smallest Number you entered is "<<low<<endl;
	return 0;
}
