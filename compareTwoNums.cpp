////this example creates a file called myfile.txt
//and adds some text message to it
#include<iostream>
#include<fstream>
#include<cstdlib>
#include<cctype>
#include<iomanip>
#include <cmath>

//Write a program that ask for two numbers, compare them and show the maximun.
//Declare a function called max_two that compares the numbers and returns the maximun.
using namespace std;
int max_two(int a, int b);
int main()
{
 int x, y;
 cout<<"Please enter number1:\n";
 cin>>x;
  cout<<"Please enter number2:\n";
 cin>>y;
 cout<<"The BIGGER number is :"<<max_two(x, y);
return 0;
}
int max_two(int a, int b)
{
	int c=0;
	if (a<b)
	c = b;
	else
	c =a;
	return c;
	
}
