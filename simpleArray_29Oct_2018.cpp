//Demo for simple array

#include<iostream>

using namespace std;

int main()
{
	int score[5],i, max; //score is an array of 5 elements i.e. 0th, 1st, 2nd, 3rd, 4th >> 5 - 1. (max-1)
	cout<<"Please enter 5 scores\n";
	max=score[0];
	for (i=0; i<5; i++)
	{
		cin>>score[i];
		if (score[i]>max)
		max = score[i];
		
	}
	cout << "The Highest Score is :" <<max <<endl;
	cout << "Score and thier difference\n :";
	cout << "from the highest are :"<<endl;
	for (i=0; i<5; i++)
		cout <<score[i] << "  off by : "<<(max-score[i])<<endl;
	return 0;
}

