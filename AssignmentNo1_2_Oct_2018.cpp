/*Assignment No. 1
Date: 26 Sept-2018
This program  computes the cost of a long-distance phone call. The cost of a call is 
determined according to the following rate schedule.
a. Any call started between 8:00am and 6:00pm, Monday through Friday is billed at a rate of $0.40 per minute.
b. Any call starting before 8:00am or after 6:00pm, Monday through Friday is billed at a rate of $0.25 per minute.
c. Any call started on a Saturday or Sunday is billed at a rate of $0.15 per minute.
*/


#include<iostream>
using namespace std;
int main()
{
char again;
char c1, c2; // as per requirement using 2 char variables to capture 2 characters for week days.
int startingHour, startingMinute,choice;
int durationOfCall;
float cost;
string day;
const float weekEndRate=.15;
const float weekDaydRate=.40;
const float afterHoursRate=.25;

do{

	cout<<"Please Enter Day of the Week\n";
 	cout<<"(Valid designation are Mo, Tu, We, Th, Fr, Sa, Su)\n";
	cin>>c1>>c2;
	 
if ((c1==false)||(c2==false))// If more than 2 characters are entered, the program will terminate.
{
cout<<"Invalid Entry";
return 0;	
}
cout<<"Please Enter Duration of the Call in Minutes\n";
cin>>durationOfCall;
cout<<"Please Enter Starting Time of the Call\n";
cout<<"Accepted format [ 1800 for 6 PM ] & [ 800 for 8 AM ] Only"<<endl;
cin>>startingHour;

if (((c1=='S')||(c1=='s')) ||((c2=='A')||(c2=='a')))
	{
		cost=weekEndRate*durationOfCall;
	}
		
else if ((c1!='S')||(c1!='s'))// if the first character of day is not 'S' or 's' then weekend rate is not applied.
	{
		if ((startingHour<800)||(startingHour>=1800))
		{
			cost=afterHoursRate*durationOfCall;
		}
			else 
			cost=weekDaydRate*durationOfCall;
	}
cout<<endl;
cout<<endl;
cout<<endl;
cout<<"********************************************"<<endl;
cout<<"Total Cost of The Call is : $"<<cost<<endl;
cout<<"********************************************"<<endl;
cout<<endl;
cout<<endl;
cout<<"Please Enter 1 to Calculate Yet Another Call OR 2 to Exit\n";
cout<<endl;
cin>>choice;
cout<<endl;
}
while (choice==1);
		
}
