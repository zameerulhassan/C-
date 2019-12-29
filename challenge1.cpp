//challenge program1
#include<iostream>
#include<ctime>
#include<cstdlib>
#include<iomanip>

using namespace std;
int main()
{
	int x;
	do
	{
		int seed = time(0);
		srand(seed);
		int num1, num2;
		int userTotal;
		num1 = 1 + rand() % 100; //to get random number between 1 -100
		num2 = 1 + rand() % 100;
		int computerTotal = num1 + num2;
		
		cout << "Firt Random Number is : "<<setw(5) << num1 << endl;
		cout << "Second Rand Number is: " <<setw(4)<< "+" << num2 << endl;
		cout << "-----" << endl;
		cout << "Enter total of these numbers" << endl;
		cin >> userTotal;
		if (computerTotal == userTotal)
		{
			cout << "Weldone" <<endl;
			cout<< "Answer is correct:"<<endl<<computerTotal<<endl;
		}
		else
		{
			cout << "Your Answer is wrong"<<endl; 
			cout<< "Correct answer is:"<<computerTotal <<endl;
		}
		cout<< "To Exit Please enter -1"<< endl;
		cout<< "To continue enter anynumber"<< endl;
		cin >> x;

	}
	while(x!=-1);
	return 0;
}

