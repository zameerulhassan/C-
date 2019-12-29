
#include<iostream>
using namespace std;
int main()
{
int startingHour, startingMinute;
double cost;
double rate=0.40;
cout<<"Please enter starting Hour of your call\n";
cin>>startingHour;
cout<<"Please enter starting Minute of your call\n";
cin>>startingMinute;
cout<<"Your call started at :\n"<<startingHour<<":"<<startingMinute;
int callDuration =0;

cout<<"Please enter duration of call in minutes\n";
cin>>callDuration;
cout<<"Your call duration is\n"<<callDuration<<endl;
cost = callDuration*rate;
cout<<"Cost of the call is : \n";
cout<<cost;
return 0; 

}


