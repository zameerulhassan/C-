
#include<iostream>
using namespace std;
int main()
{
char weekDay;
int callDuration =0;

cout<<"Please insert day of the week as follow;";
cout<<"Mo for Moday, Tu for Tuesday, We for Wednesday, Th for Thursday, Fr for Friday, Sa, for Saturday, and Su for Sunday.";
cin>>weekDay;
system("pause");

cout<<"Please enter duration of call in minutes\n";
cin>>callDuration;
cout<<"Your call duration is\n"<<callDuration<<endl;
cout<<"You made this call on : \n"<<weekDay<<endl;
}


