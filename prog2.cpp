#include<iostream>
using namespace std;
int main()
{
    int number;
	int digit;
    cout<< "Please enter 4-Digits no.:";
    cin>>number;
    digit = number % 10;
    cout<< "The Digit is :"<<digit<<'\n';
    number=number/10;
    digit = number%10;
    cout<< "The Digit is :"<<digit<<'\n';
    number=number/10;
    digit = number%10;
    cout<< "The Digit is :"<<digit<<'\n';
    number=number/10;
    digit = number%10;
    cout<< "The Digit is :"<<digit<<'\n';
    
        return 0;
}
