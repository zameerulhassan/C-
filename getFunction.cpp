//Demo for get() function

#include<iostream>
#include<fstream>
#include <cstdlib> 
#include <iomanip> //needed for setw
using namespace std;

int main()
{
	char c1;
	cout<<"I will echo what ever you write here \n";
	do
	{
		cin.get(c1);
		cout<<c1;
	} while (c1 != '\n');
	cout<<"That's all for this demo";
	return 0;
}

