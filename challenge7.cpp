#include<iostream>
using namespace std;
int main ()
{
	float distance = 0;
	float speed = 0;
	int time; 
	cout<<"What is speed of the vehicle : \n";
	cin >> speed;
	//check the speed validity
	while (speed <=0)
	{
		cout<<"Speed must be a positive number : \n";
		cin >> speed;
	}
	cout << "Please enter no. of hours traveled.\n";
	cin >> time;
	
	while (time < 1)
	{
		cout<<"time must be a positive number : \n";
		cin >> time;
	}
	for (int i = 1; i <=time; i++)
	{
		distance = speed * i;  // why i , because i is the time
		cout << i <<"  hours "<< "distance covered is : " << distance << endl;
	}
	return 0;
}
