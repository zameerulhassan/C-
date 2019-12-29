
#include<iostream>
using namespace std;
int main()
{
int startingHour, startingMinute;
double cost;
double rate=0;
char weekDay;
int callDuration =0;
char s;
cout<<"Please insert day of the week as follow;";
cout<<"Mo for Moday, Tu for Tuesday, We for Wednesday, Th for Thursday, Fr for Friday, Sa, for Saturday, and Su for Sunday.";
cin>>weekDay;

cout<<"Please enter duration of call in minutes\n";
cin>>callDuration;
cout<<"Your call duration is\n"<<callDuration<<endl;
cout<<"You made this call on : \n"<<weekDay<<endl;

cout<<"Please enter starting Hour of your call\n";
cin>>startingHour;
cout<<"Please enter starting Minute of your call\n";
cin>>startingMinute;
cout<<"Your call started at :\n"<<startingHour<<":"<<startingMinute;

cout<<"Please enter duration of call in minutes\n";
cin>>callDuration;
cout<<"Your call duration is\n"<<callDuration<<endl;
cost = callDuration*rate;
cout<<"Cost of the call is : \n";

if (weekDay!=s)
 {
 	rate = .15;
 	cost = rate*callDuration;
 	cout<<"Total Cost of the call is :\n";
 	cout<<cost;
 }

cout<<cost;
return 0; 

}


