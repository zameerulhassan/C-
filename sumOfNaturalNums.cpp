////this example give sum of all natural number till number entered by user

#include<iostream>
#include<fstream>
#include<cstdlib>
#include<cctype>
#include<iomanip>
#include <cmath>


using namespace std;
int sumOfAll(int& a); // since number is entered by user, so this is call be reference.
int x;
int main()
{
 
 cout<<"Please enter number1:\n";
 cin>>x;
 cout<<"The Sum of all numbers till : "<<x<<" is : "<<sumOfAll(x);
return 0;
}
int sumOfAll(int& a)
{
	int i, result =0;
	for (i=0; i<=x; i++)
	result=result+i;
	return result;
	
}
