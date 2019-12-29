////this example creates a file called myfile.txt
//and adds some text message to it
#include<iostream>
#include<fstream>
#include<cstdlib>
#include<cctype>
#include<iomanip>
#include <cmath>


using namespace std;
int raisePow(int base, int expo);
int main()
{
 int x, y;
 cout<<"Please enter base number:\n";
 cin>>x;
 cout<<"Please enter raise to power number:\n";
 cin>>y;
 cout<<"The answer is :"<<raisePow(x, y);
return 0;
}
int raisePow(int base, int expo)
{
	int result=1;
	for (int i=1; i <=expo; i++){
	result = result*base;	
	}
	return result;
	
}
